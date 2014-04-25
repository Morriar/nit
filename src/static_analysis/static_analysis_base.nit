# This file is part of NIT ( http://www.nitlanguage.org ).
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

module static_analysis_base

import rapid_type_analysis

# Perform intra-procedural analysis
# the entry point is a method definition
class StaticAnalysis
	super Visitor

	type FLOW: FlowSet

	# the in set for the currently visited node
	var current_inset: FLOW protected writable

	# the out set for the currently visited node
	var current_outset: FLOW protected writable

	# sets at the entry of each node
	var insets = new HashMap[ANode, FLOW]

	# sets at the exit of each node
	var outsets = new HashMap[ANode, FLOW]

	# initial flow set (used for main_inset and fix points computation)
	fun new_initial_flow: FLOW is abstract

	# the merge operation on sets for confluence
	fun merge(s1, s2: FLOW): FLOW is abstract

	var rta: nullable RapidTypeAnalysis protected writable

	init(modelbuilder: ModelBuilder) do
		self.modelbuilder = modelbuilder
		self.current_inset = new_initial_flow
		self.current_outset = new_initial_flow
	end
	
	init with_rta(modelbuilder: ModelBuilder, rta: RapidTypeAnalysis) do
		self.rta = rta
		self.no_rta = false
		init(modelbuilder)
	end

	# perform intra-analysis only
	var modelbuilder: ModelBuilder
	var no_inter writable = false
	var no_rta writable = true

	fun start_analysis(n: ANode) do
		if no_inter then
			visit(n)
		else
			var lastsets: nullable HashMap[ANode, FLOW] = null
			while lastsets != outsets do
				visit(n)
				lastsets = outsets.copy
			end
		end
	end

	fun collect_targets(callsite: CallSite): Set[AConcreteMethPropdef] do
		var res = new HashSet[AConcreteMethPropdef]
		var targets: Collection[MPropDef]
		if not no_rta and rta != null then
			targets = rta.live_targets(callsite.as(not null))
		else
			targets = callsite.mproperty.mpropdefs
		end
		for target in targets do
			if not modelbuilder.mpropdef2npropdef.has_key(target) then continue
			var npropdef = modelbuilder.mpropdef2npropdef[target]
			if not npropdef isa AConcreteMethPropdef then continue
			res.add(npropdef)
		end
		return res
	end
end

class ForwardAnalysis
	super StaticAnalysis

	redef fun visit(n: ANode) do n.accept_forward_analysis(self)
end

class BackwardAnalysis
	super StaticAnalysis

	redef fun visit(n: ANode) do n.accept_backward_analysis(self)
end

redef class ANode
	fun accept_forward_analysis(v: ForwardAnalysis) do
		v.current_inset = v.current_outset.copy
		v.current_outset = v.current_inset.copy
		v.insets[self] = v.current_inset
		visit_all(v)
		v.outsets[self] = v.current_outset
	end

	fun accept_backward_analysis(v: BackwardAnalysis) is abstract
end

# merge flow on if .. else constructs
redef class AIfExpr
	redef fun accept_forward_analysis(v) do
		v.enter_visit(n_expr)
		var inset = v.current_inset
		var outset = v.current_outset

		if n_then != null then v.enter_visit(n_then)
		var then_outset = v.current_outset

		v.current_inset = inset
		v.current_outset = outset

		if n_else != null then
			v.enter_visit(n_else)
			outset = v.merge(then_outset, v.current_outset)
		else
			outset = v.merge(then_outset, v.current_inset)
		end
		var else_outset = v.current_outset
		v.current_inset = inset
		v.current_outset = outset
	end
end

# compute fix point on loops
interface ALoopNode
	# look up fix point of this node
	fun loop_fix_point(v: StaticAnalysis, node: ANode) do
		var inset = v.current_inset.copy
		var last: nullable FlowSet = null
		while v.current_outset != last do
			v.enter_visit(node)
			v.current_inset = v.merge(inset, v.current_outset)
			v.current_outset = v.current_inset.copy
			last = v.current_outset.copy
		end
		v.current_inset = inset
		v.current_outset = v.merge(inset, v.current_outset)
	end

end

redef class AWhileExpr
	super ALoopNode
	redef fun accept_forward_analysis(v) do
		v.enter_visit(n_expr)
		if not n_block == null then loop_fix_point(v, n_block.as(not null))
	end
end

redef class AForExpr
	super ALoopNode
	redef fun accept_forward_analysis(v) do
		v.enter_visit(n_expr)
		if not n_block == null then loop_fix_point(v, n_block.as(not null))
	end
end

redef class ALoopExpr
	super ALoopNode
	redef fun accept_forward_analysis(v) do
		if not n_block == null then loop_fix_point(v, n_block.as(not null))
	end
end

redef class AConcreteMethPropdef
	redef fun accept_forward_analysis(v) do
		if not v.no_inter and v.insets.has_key(self) then
			v.current_inset = v.insets[self]
		else
			v.current_inset = v.new_initial_flow
		end
		v.current_outset = v.current_inset.copy
		v.insets[self] = v.current_inset
		visit_all(v)
		v.outsets[self] = v.current_outset
	end
end

# compute fix point on method calls
redef class ACallExpr
	redef fun accept_forward_analysis(v) do
		super
		if not v.no_inter then
			var inset = v.current_inset.copy
			var targets = v.collect_targets(callsite.as(not null))

			var outsets = new HashSet[FlowSet]
			for target in targets do
				if not v.insets.has_key(target) then
					v.insets[target] = inset.copy
				else
					v.insets[target] = v.merge(inset, v.insets[target])
				end
				if v.outsets.has_key(target) then
					outsets.add(v.outsets[target])
				end
			end
			v.current_inset = inset
			if not outsets.is_empty then
				var outset = outsets.first
				for set in outsets do
					if set == outsets.first then continue
					outset = v.merge(outset, set)
				end
				v.current_outset = outset
			else
				v.current_outset = inset.copy
			end
		end
	end
end

# utils

interface FlowSet
	type SELF: FlowSet
	fun copy: SELF is abstract
end

redef class HashMap[E, F]
	super FlowSet

	redef type SELF: HashMap[E, F]

	init from(map: Map[E, F]) do
		init
		for k, v in map do self[k] = v
	end

	redef fun copy do return new HashMap[E, F].from(self)

	redef fun ==(o): Bool do
		if not o isa HashMap[E, F] then return false
		if length != o.length then return false
		for k, v in self do
			if not o.has_key(k) or o[k] != v then
				return false
			end
		end
		for k, v in o do
			if not has_key(k) or self[k] != v then return false
		end
		return true
	end
end

redef class HashSet[E]
	super FlowSet

	redef type SELF: HashSet[E]

	redef fun copy do return new HashSet[E].from(self)

	fun remove_from(other: Collection[E]) do
		for e in other do self.remove(e)
	end
end

