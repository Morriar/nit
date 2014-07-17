module useless_nullables_analysis

import rapid_type_analysis
import model_utils

# Perform intra-procedural analysis
# the entry point is a method definition
class UselessNullablesAnalysis
	super Visitor

	type FLOW: HashMap[MAttributeDef, AttrDecl]

	var set: FLOW

	# initial flow used for main_inset and fix points computation
	fun new_initial_flow: FLOW do
		var flow = new HashMap[MAttributeDef, AttrDecl]
		for mpropdef, npropdef in rta.modelbuilder.mpropdef2npropdef do
			if mpropdef isa MAttributeDef and mpropdef.static_mtype isa MNullableType then
				var attrdecl = new AttrDecl(mpropdef, npropdef.as(AAttrPropdef))
				flow[mpropdef] = attrdecl
			end
		end
		return flow
	end

	var rta: RapidTypeAnalysis protected writable
	
	init(rta: RapidTypeAnalysis) do 
		self.rta = rta
		self.set = new_initial_flow
	end

	fun start_analysis(n: ANode) do
		visit(n)
	end

	redef fun visit(n) do n.accept_useless_nullables_analysis(self)

	fun pretty_print do
		print "# UselessNullablesAnalysis\n"

		print "nullable attributes:"
		for mattrdef, attrdecl in set do
			if attrdecl.useless then print " * {attrdecl}"
		end
	end
end

redef class ANode
	fun accept_useless_nullables_analysis(v: UselessNullablesAnalysis) do
		visit_all(v)
	end
end

redef class AAttrPropdef
	redef fun accept_useless_nullables_analysis(v: UselessNullablesAnalysis) do
		super
		var mpropdef = self.mpropdef
		var mtype: nullable MType = null
		if n_expr != null then mtype = n_expr.mtype
		if mpropdef != null and mtype != null then
			if mtype isa MNullableType or mtype isa MNullType then
				v.set[mpropdef].useless = false
			end
		end
	end
end

redef class AAttrAssignExpr
	redef fun accept_useless_nullables_analysis(v: UselessNullablesAnalysis) do
		super
		var mtype = n_value.mtype
		if mproperty != null and mtype != null then
			if mtype isa MNullableType or mtype isa MNullType then
				v.set[mproperty.intro].useless = false
			end
		end
	end
end

# If attribute is assign with nullable then nullable annotation is not useless
redef class ACallAssignExpr
	redef fun accept_useless_nullables_analysis(v: UselessNullablesAnalysis) do
		super
		var mpropdef = callsite.mpropdef
		var mattr = mpropdef.setter_for
		var mtype = n_value.mtype
		if mattr != null and mtype != null then
			if mtype isa MNullableType or mtype isa MNullType then
				v.set[mattr].useless = false
			end
		end
	end
end

class AttrDecl
	super Comparable

	redef type OTHER: AttrDecl

	var mattrdef: MAttributeDef
	var nattrdef: AAttrPropdef
	var useless: Bool = true

	redef fun to_s do
		var usage = ""
		if useless then usage = "(useless)"
		return "\{{mattrdef}: {nattrdef.location.line_start} {usage}\}"
	end

	redef fun ==(o) do
		if o isa OTHER then
			return self.mattrdef == o.mattrdef
		else
			return false
		end
	end

	redef fun hash do return mattrdef.hash + nattrdef.hash
end

# is_useless si
	# never read before write
	# never compared to null (== or !=)

