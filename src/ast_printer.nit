import parser
import template

class PrettyPrinterVisitor
	super Visitor

	redef fun visit(n) do
		n.accept_pretty_printer(self)
	end

	var tpl = new Template
	var indent = 0

	# add test
	fun add(t: Streamable) do
		tpl.add t
	end

	# add cariage return
	fun addn do
		tpl.add "\n"
	end

	# add indent
	fun addt do
		tpl.add("\t" * indent)
	end
end

redef class ANode
	private fun accept_pretty_printer(v: PrettyPrinterVisitor) do
		#print self
		visit_all(v)
	end

	fun pretty_print: String do
		var v = new PrettyPrinterVisitor
		v.visit(self)
		return v.tpl.write_to_string
	end
end

redef class Token
	redef fun accept_pretty_printer(v) do
		v.add text
	end
end

redef class AAndExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " and "
		v.visit n_expr2
	end
end

redef class AAbstractClasskind
	redef fun accept_pretty_printer(v) do
		v.visit n_kwabstract
		v.add " "
		v.visit n_kwclass
	end
end

redef class AAttrPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		v.visit n_kwvar
		v.add " "
		if n_id != null then
			v.visit n_id.as(not null)
		else if n_id2 != null then
			v.visit n_id2.as(not null)
		end
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
		if n_expr != null then
			v.add " = "
			v.visit n_expr.as(not null)
		end
		v.addn
	end
end

redef class AAssertExpr
	redef fun accept_pretty_printer(v) do
		v.add "assert "
		if n_id != null then
			v.visit n_id.as(not null)
			v.add ": "
		end
		v.visit n_expr
		if n_else != null then
			v.add " else "
			v.visit n_else.as(not null)
		end
		v.addn
	end
end


redef class ABlockExpr
	redef fun accept_pretty_printer(v) do
		v.add "do"
		if n_expr.is_empty then
			v.add " end"
		else if n_expr.length == 1 then
			v.add " "
			v.visit n_expr.first
		else
			v.addn
			v.indent += 1
			for n_exp in n_expr do
				v.addt
				v.visit n_exp
				v.addn
			end
			v.indent -= 1
			v.addt
			v.add "end"
		end
	end
end

redef class ACallFormExpr
	redef fun accept_pretty_printer(v) do
		if not n_expr isa AImplicitSelfExpr then
			v.visit n_expr
			v.add "."
		end
		v.visit n_id
		#if n_args.n_exprs.length == 1 then
		#	v.add " "
		#	v.visit n_args.n_exprs.first
		#else
		if not n_args.n_exprs.is_empty then
			v.add "("
			for i in [0..n_args.n_exprs.length[ do
				v.visit n_args.n_exprs[i]
				if i < n_args.n_exprs.length - 1 then v.add ", "
			end
			v.add ")"
		end
	end	
end

redef class AConcreteInitPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		if n_kwinit != null then
			v.visit n_kwinit.as(not null)
		end
		if n_methid != null then
			v.add " "
			v.visit n_methid.as(not null)
		end
		if n_signature != null then
			v.visit n_signature.as(not null)
		end
		if n_block != null then
			v.add " "
			if n_block isa ABlockExpr then
				v.visit n_block.as(not null)
			else
				v.add "do "
				v.visit n_block.as(not null)
			end
		end
		v.addn
	end
end

redef class AConcreteMethPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		if n_kwmeth != null then
			v.visit n_kwmeth.as(not null)
			v.add " "
		end
		if n_methid != null then
			v.visit n_methid.as(not null)
		end
		if n_signature != null then
			v.visit n_signature.as(not null)
		end
		if n_block != null then
			v.add " "
			if n_block isa ABlockExpr then
				v.visit n_block.as(not null)
			else
				v.add "do "
				v.visit n_block.as(not null)
			end
		end
		v.addn
	end
end

redef class ADeferredMethPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		if n_kwmeth != null then
			v.visit n_kwmeth.as(not null)
			v.add " "
		end
		if n_methid != null then
			v.visit n_methid.as(not null)
		end
		if n_signature != null then
			v.visit n_signature.as(not null)
		end
		v.add " is abstract"
		v.addn
	end
end

redef class ADoc
	redef fun accept_pretty_printer(v) do
		for n_comment in self.n_comment do
			v.addt
			v.visit n_comment
		end
	end
end

redef class AEqExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " == "
		v.visit n_expr2
	end
end

redef class AExprs
	redef fun accept_pretty_printer(v) do
		var count = 0
		for n_expr in n_exprs do
			count += 1
			v.visit n_expr
			if count < n_exprs.length then v.add ", "
		end
	end
end

redef class AExternMethPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		if n_kwmeth != null then
			v.visit n_kwmeth.as(not null)
			v.add " "
		end
		if n_methid != null then
			v.visit n_methid.as(not null)
		end
		if n_signature != null then
			v.visit n_signature.as(not null)
		end
		v.add " is intern"
		v.addn
	end
end

redef class AFormaldef
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
	end
end

redef class AGtExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " > "
		v.visit n_expr2
	end
end

redef class AGeExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " >= "
		v.visit n_expr2
	end
end

redef class AGgExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " >> "
		v.visit n_expr2
	end
end

redef class AIfExpr
	#TODO cut at 80 chars and inline when possible
	redef fun accept_pretty_printer(v) do
		v.visit n_kwif
		v.add " "
		v.visit n_expr
		v.add " "
		var n_then = self.n_then
		if n_then != null then
			v.add "then"
			if n_then isa ABlockExpr then
				#if n_then.n_expr.length == 1 then
				#	v.add " "
				#	v.visit n_then.n_expr.first
				#	v.addn
				#else if n_then.n_expr.length > 1 then
					v.addn
					v.indent += 1
					for n_expr in n_then.n_expr do
						v.addt
						v.visit n_expr
						v.addn
					end
					v.indent -= 1
				#end
			else
				v.add " "
				v.visit n_then
				v.addn
			end
		end
		var n_else = self.n_else
		if n_else != null then
			if n_else isa ABlockExpr then
				if not n_else.n_expr.is_empty then
					v.addt
					v.add "else"
					#if n_else.n_expr.length == 1 then
					#	v.add " "
					#	v.visit n_else.n_expr.first
					#	v.addn
					#else if n_else.n_expr.length > 1 then
						v.addn
						v.indent += 1
						for n_expr in n_else.n_expr do
							v.addt
							v.visit n_expr
							v.addn
						end
						v.indent -= 1
					#end
				end
			else
				v.addt
				v.add "else"
				v.addn
				v.addt
				v.visit n_else
				v.addn
			end
		end
		v.addt
		v.add "end"
	end	
end

redef class AInternMethPropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		v.addt
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		if n_kwmeth != null then
			v.visit n_kwmeth.as(not null)
			v.add " "
		end
		if n_methid != null then
			v.visit n_methid.as(not null)
		end
		if n_signature != null then
			v.visit n_signature.as(not null)
		end
		v.add " is intern"
		v.addn
	end
end

redef class AIsaExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " isa "
		v.visit n_type
	end
end

redef class ALtExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " < "
		v.visit n_expr2
	end
end

redef class ALeExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " <= "
		v.visit n_expr2
	end
end

redef class ALoopExpr
	# TODO label
	# TODO inlining
	redef fun accept_pretty_printer(v) do
		v.add "loop do "
		if n_block != null then
			v.visit n_block.as(not null)
		end
	end
end

redef class AMainMethPropdef
	redef fun accept_pretty_printer(v) do
		var nb = n_block
		if nb isa ABlockExpr then
			for n_exp in nb.n_expr do
				v.visit n_exp
				v.addn
			end
		end
	end
end

redef class AMinusExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " - "
		v.visit n_expr2
	end
end

redef class AModule
	redef fun accept_pretty_printer(v) do
		if n_moduledecl != null then
			v.visit(n_moduledecl.as(not null))
		end
		if not n_imports.is_empty then
			v.addn
			for n_import in n_imports do
				v.visit(n_import)
			end
		end
		if not n_classdefs.is_empty then
			v.addn
			for n_classdef in n_classdefs do
				v.visit(n_classdef)
				v.addn
			end
		end
	end
end

redef class AModuledecl
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit(n_doc.as(not null))
		v.visit(n_kwmodule)
		v.add " "
		v.visit(n_name)
		v.addn
	end
end

redef class ANeExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " != "
		v.visit n_expr2
	end
end

redef class ANewExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_kwnew
		v.add " "
		v.visit n_type
		if n_id != null then
			v.add "."
			v.visit n_id.as(not null)
		end
		if n_args.n_exprs.length == 1 then
			v.add " "
			v.visit n_args
		else if n_args.n_exprs.length > 1 then
			v.add "("
			v.visit n_args
			v.add ")"
		end
	end
end

redef class ANoImport
	redef fun accept_pretty_printer(v) do
		v.add "import end"
		v.addn
	end
end

redef class ANotExpr
	redef fun accept_pretty_printer(v) do
		v.add "not "
		v.visit n_expr
	end
end

redef class AOrExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " or "
		v.visit n_expr2
	end
end

redef class AParam
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
		if n_dotdotdot != null then
			v.visit n_dotdotdot.as(not null)
		end
	end
end

redef class APercentExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " % "
		v.visit n_expr2
	end
end

redef class APlusExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " + "
		v.visit n_expr2
	end
end

redef class AReturnExpr
	redef fun accept_pretty_printer(v) do
		v.add "return"
		if n_expr != null then
			v.add " "
			v.visit n_expr.as(not null)
		end
		v.addn
	end
end

redef class ASignature
	redef fun accept_pretty_printer(v) do
		if not n_params.is_empty then
			v.add "("
			for i in [0..n_params.length[ do
				v.visit n_params[i]
				if i < n_params.length - 1 then v.add ", "
			end
			v.add ")"
		end
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
	end
end

redef class ASlashExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " / "
		v.visit n_expr2
	end
end

redef class AStarExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " * "
		v.visit n_expr2
	end
end

redef class AStarshipExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_expr
		v.add " <=> "
		v.visit n_expr2
	end
end

redef class AStdClassdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then v.visit n_doc.as(not null)
		if not n_visibility isa APublicVisibility then
			v.visit n_visibility
			v.add " "
		end
		if n_kwredef != null then
			v.visit n_kwredef.as(not null)
			v.add " "
		end
		v.visit n_classkind
		v.add " "
		if n_id != null then v.visit n_id.as(not null)
		if not n_formaldefs.is_empty then
			v.add "["
			for i in [0..n_formaldefs.length[ do
				v.visit n_formaldefs[i]
				if i < n_formaldefs.length - 1 then v.add ", "
			end
			v.add "]"
		end
		v.addn
		v.indent += 1
		for n_superclass in n_superclasses do
			v.visit n_superclass
		end
		for n_propdef in n_propdefs do
			v.visit n_propdef
			if n_propdefs.length > 1 then v.addn
		end
		v.indent -= 1
		v.add "end"
		v.addn
	end
end

redef class AStdImport
	redef fun accept_pretty_printer(v) do
		if not n_visibility isa APublicVisibility then
			v.visit n_visibility
			v.add " "
		end
		v.visit n_kwimport
		v.add " "
		v.visit n_name
		v.addn
	end
end

redef class ASuperclass
	redef fun accept_pretty_printer(v) do
		v.addt
		v.visit n_kwsuper
		v.add " "
		v.visit n_type
		v.addn
	end
end

redef class AType
	redef fun accept_pretty_printer(v) do
		if n_kwnullable != null then
			v.visit n_kwnullable.as(not null)
			v.add " "
		end
		v.visit n_id
		if not n_types.is_empty then
			v.add "["
			for i in [0..n_types.length[ do
				v.visit n_types[i]
				if i < n_types.length - 1 then v.add ", "
			end
			v.add "]"
		end
	end
end

redef class ATypePropdef
	redef fun accept_pretty_printer(v) do
		if n_doc != null then
			v.visit n_doc.as(not null)
		end
		v.addt
		if n_kwredef != null then
			v.add "redef "
		end
		if n_visibility != null and not n_visibility isa APublicVisibility then
			v.visit n_visibility.as(not null)
			v.add " "
		end
		v.add "type "
		v.visit n_id
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
	end
end

redef class AVarAssignExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		v.add " = "
		v.visit n_value
	end
end

redef class AVardeclExpr
	redef fun accept_pretty_printer(v) do
		v.add "var "
		v.visit n_id
		if n_type != null then
			v.add ": "
			v.visit n_type.as(not null)
		end
		if n_expr != null then
			v.add " = "
			v.visit n_expr.as(not null)
		end
	end
end

redef class AVarReassignExpr
	redef fun accept_pretty_printer(v) do
		v.visit n_id
		v.add " "
		v.visit n_assign_op
		v.add " "
		v.visit n_value
	end
end

redef class AWhileExpr
	#TODO inlining
	#TODO label
	redef fun accept_pretty_printer(v) do
		v.add "while "
		v.visit n_expr
		v.add " do"
		v.addn
		if n_block != null then
			v.indent += 1
			v.visit n_block.as(not null)
			v.indent -= 1
		end
	end
end

# missing comments
# break at X columns
# Labels
# inlining + block indentation
# AAbort
# IfexprExpr
# AArrayExpr
# ANullExpr
# ASuperExpr
# AAsCastExpr
# AAsNotNullExpr
# ARangeExpr, ORange, CRange
# AContinue
# ABReack
# ADo
# AImplies?
# AOnce
# AIsset
# AUminus
# ABra
# ABraAssign
# ABraReasign
# AForExpr
