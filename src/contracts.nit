# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Contracts
#
# ## Preconditions
#
# Preconditions for a method are verified before each call to the method.
#
# Precondition are defined using the `pre` annotation
#
# ~~~nit
# class Calc
#	fun div(a, b: Int)
#	is
#		pre(b > 0)
#	do
#		return a / b
# end
# ~~~
#
# Limits:
# * Because the annotation `pre` is parsed only once by method, you have to
# use a lot of `and`... TODO: find a way to define the same annotation more than once.
#
# TODO option --contracts
# TODO post
# TODO post @pre
# TODO post result
# TODO inv
module contracts

import phase
import parser_util
intrude import modelize::modelize_property
import semantize
# import parser_util

# `Model` representation of a contract
#
# Can be one of:
#  * `MInvariant`
#  * `MPrecondition`
#  * `MPostcondition`
#
# All contracts are compliled as methods then called from the execution engine
# at the right execution point.
# This allow a separate compilation of contracts with global link editing.
#
# Like all MProperties, contracts can have multiple definitions called `MContractDef`.
abstract class MContract
	super MMethod

	redef type MPROPDEF: MContractDef
end

# Contract definition in a module
abstract class MContractDef
	super MMethodDef
end

# Precondition
#
# Preconditions are checked **before** the method execution.
class MPrecondition
	super MContract

	redef type MPROPDEF: MPreconditionDef
end

# `MPrecondition` definition in a module
class MPreconditionDef
	super MContractDef
end

# Postcondition
#
# Postconditions are checked **after** the method execution.
class MPostcondition
	super MContract

	redef type MPROPDEF: MPostconditionDef

	# Attribute that holds the MPostcondition result if any
	# var mpost_result: nullable AVardeclExpr = null
end

# `MPostcondition` definition in a module
class MPostconditionDef
	super MContractDef
end

redef class MMethod

	# MPrecondition linked to this MMethod
	var mpre: nullable MPrecondition = null

	# Introduce a MPrecondition for `self`
	#
	# See `mpre`.
	private fun create_precondition(intro: MPropDef): MPrecondition do
		var mpre = new MPrecondition(intro.mclassdef, "_pre_{intro.name}",
				intro.location, public_visibility)
		self.mpre = mpre
		return mpre
	end

	# MPostcondition linked to this MMethod
	var mpost: nullable MPostcondition = null

	# Introduce a MPostcondition for `self`
	#
	# See `mpost`.
	private fun create_postcondition(intro: MMethodDef): MPostcondition do
		var mpost = new MPostcondition(intro.mclassdef, "_post_{intro.name}",
				intro.location, public_visibility)
		self.mpost = mpost
		return mpost
	end
end

redef class MMethodDef

	# MPreconditionDef linked to this method definition
	var mpredef: nullable MPreconditionDef = null

	# MPostconditionDef linked to this method definition
	var mpostdef: nullable MPostconditionDef = null
end

# Contract compilation

redef class ToolContext
	# Parses contracts annotations.
	var contracts_phase: Phase = new ContractsPhase(self, [modelize_property_phase])
end

private class ContractsPhase
	super Phase

	redef fun process_nmodule(nmodule) do nmodule.do_contracts(toolcontext)
end

redef class AModule

	# Compile contracts
	fun do_contracts(toolcontext: ToolContext) do
		var v = new ContractsVisitor(toolcontext)
		v.enter_visit(self)
	end
end

private class ContractsVisitor
	super Visitor

	var toolcontext: ToolContext

	var current_aclassdef: nullable AClassdef = null
	var current_apropdef: nullable AMethPropdef = null

	redef fun visit(n) do
		n.accept_contracts(self)
		n.visit_all(self)
	end
end

redef class ANode
	private fun accept_contracts(v: ContractsVisitor) do end
end

redef class AClassdef
	redef fun accept_contracts(v) do
		v.current_aclassdef = self
	end
end

redef class AMethPropdef

	redef fun accept_contracts(v) do
		var n_annotations = self.n_annotations
		if n_annotations != null then
			v.current_apropdef = self
			v.enter_visit n_annotations
			v.current_apropdef = null
		end
	end

	# Compile the `MPreconditionDef` for `self`.
	private fun compile_precondition(v: ContractsVisitor, annot: AAnnotation) do
		# print "Compile precondition for {mpropdef}"
		var mpropdef = self.mpropdef.as(not null)

		# Create the precondition property if one does not already exist
		var mpre = mpropdef.mproperty.mpre
		if mpre == null then
			mpre = mpropdef.mproperty.create_precondition(mpropdef)
		end

		# Create new definition for the precondition
		var mpredef = new MPreconditionDef(mpropdef.mclassdef, mpre, location)
		var msignature = mpropdef.msignature
		if msignature != null then
			mpredef.msignature = msignature.adapt_to_precondition
		end
		mpropdef.mpredef = mpredef

		# Create AST nodes for mpredef
		var n_predef = new AMethPropdef
		n_predef.mpropdef = mpredef
		n_predef.location = mpropdef.location
		n_predef.n_visibility = new APublicVisibility
		n_predef.n_block = annot.to_block

		var n_signature = self.n_signature
		if n_signature != null then
			n_predef.n_signature = n_signature.adapt_to_precondition(n_predef)
		end

		# Apply phase to new precondition code
		# FIXME is there a cleaner way?
		n_predef.do_flow(v.toolcontext)
		n_predef.do_scope(v.toolcontext)
		n_predef.do_typing(v.toolcontext.modelbuilder)

		# Register the code for the mpredef
		v.toolcontext.modelbuilder.mpropdef2npropdef[mpredef] = n_predef
	end

	# Compile the `MPostconditionDef` for `self`.
	private fun compile_postcondition(v: ContractsVisitor, annot: AAnnotation) do
		var mpropdef = self.mpropdef.as(not null)
		print "Compile precondition for {mpropdef}"

		# Create the postcondition property if one does not already exist
		var mpost = mpropdef.mproperty.mpost
		var is_intro = false
		if mpost == null then
			mpost = mpropdef.mproperty.create_postcondition(mpropdef)
			is_intro = true
		end

		# Create new definition for the postcondition
		var mpostdef = new MPostconditionDef(mpropdef.mclassdef, mpost, location)
		var msignature = mpropdef.msignature
		if not is_intro then
			msignature = mpost.intro.msignature
		end
		if msignature != null then
			mpostdef.msignature = msignature.adapt_to_postcondition
			print mpostdef.msignature or else "null"
			print is_intro
		end
		mpropdef.mpostdef = mpostdef

		# Create AST nodes for mpostdef
		var n_postdef = new AMethPropdef
		n_postdef.mpropdef = mpostdef
		n_postdef.location = mpropdef.location
		n_postdef.n_visibility = new APublicVisibility
		n_postdef.n_block = annot.to_block

		# Copy signature from mmethod
		var n_signature = self.n_signature
		if n_signature != null then
			n_postdef.n_signature = n_signature.adapt_to_postcondition(n_postdef)
		end

		# Add special result declaration in top of the block
		# var n_block = annot.to_block
		# if msignature != null then
			# var rettype = msignature.return_mtype
			# if rettype != null then
				# var n_result = v.toolcontext.parse_stmts("var result: {rettype}").as(ABlockExpr).n_expr.first
				# if n_result isa AVardeclExpr then
					# mpostdef.mpost_result = n_result
					# n_block.n_expr.unshift n_result
				# end
			# end
		# end
		# n_postdef.n_block = n_block

		# Create AST node for result attr holder
		# n_result.
		# n_result.do_flow(v.toolcontext)
		# n_result.do_scope(v.toolcontext)
		# n_result.do_typing(v.toolcontext.modelbuilder)
		# v.toolcontext.modelbuilder.mpropdef2npropdef[mpost.mpost_result.intro] = n_result

		# Apply phase to new postcondition code
		# FIXME is there a cleaner way?
		n_postdef.do_flow(v.toolcontext)
		n_postdef.do_scope(v.toolcontext)
		n_postdef.do_typing(v.toolcontext.modelbuilder)

		# Register the code for the mpredef
		v.toolcontext.modelbuilder.mpropdef2npropdef[mpostdef] = n_postdef
	end
end

redef class AAnnotation
	redef fun accept_contracts(v) do
		var apropdef = v.current_apropdef
		if apropdef == null then return
		if name == "pre" then
			apropdef.compile_precondition(v, self)
		else if name == "post" then
			apropdef.compile_postcondition(v, self)
		end
	end

	# Create a `ABlockExpr` from self `n_args`
	private fun to_block: ABlockExpr do
		# Create AST node
		var n_block = new ABlockExpr
		for n_arg in n_args do
			n_block.n_expr.push n_arg
		end
		return n_block
	end
end

redef class MSignature
	# Adapt signature for a precondition
	#
	# Remove the return_mtype
	private fun adapt_to_precondition: MSignature do
		return new MSignature(mparameters.to_a)
	end

	# Adapt signature for a postcondition
	#
	# Replace the return_mtype by a new parameter
	private fun adapt_to_postcondition: MSignature do
		var msignature = adapt_to_precondition
		var rtype = return_mtype
		if rtype != null then
			msignature.mparameters.add(new MParameter("result", rtype, false))
		end
		return msignature
	end
end

redef class ASignature
	# Return a copy of `self` adapted for a precondition on `npropdef`
	private fun adapt_to_precondition(npropdef: AMethPropdef): ASignature do
		var nparams = new ANodes[AParam](npropdef)
		for nparam in n_params do
			var new_param = new AParam
			new_param.n_id = new TId.init_tk(nparam.n_id.location)
			new_param.n_type = nparam.n_type
			new_param.n_dotdotdot = nparam.n_dotdotdot
			new_param.n_annotations = nparam.n_annotations
			new_param.location = nparam.location
			nparams.add new_param
		end
		return new ASignature.init_asignature(null, nparams, null, null)
	end

	# Return a copy of `self` adapted for postcondition on `npropdef`
	private fun adapt_to_postcondition(npropdef: AMethPropdef): ASignature do
		var nsignature = adapt_to_precondition(npropdef)
		# If self returns a value, add it as the last argument of
		npropdef.mpropdef.mproperty.intro.msignature.return_mtype
		var n_type = self.n_type
		if n_type != null then
			var new_param = new AParam
			var tid = new TId.init_tk(npropdef.location)
			tid.text = "result"
			new_param.n_id = tid
			new_param.n_type = n_type
			new_param.location = npropdef.location
			nsignature.n_params.add new_param
		end
		return nsignature
	end
end
