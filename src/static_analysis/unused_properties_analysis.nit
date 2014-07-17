module unused_properties_analysis

import rapid_type_analysis
import model_utils

# Perform intra-procedural analysis
# the entry point is a method definition
class UnusedPropertiesAnalysis
	super Visitor

	var rta: RapidTypeAnalysis protected writable
	
	init(rta: RapidTypeAnalysis) do 
		self.rta = rta
	end

	fun start_analysis(n: ANode) do
		visit(n)
	end

	redef fun visit(n) do n.accept_unused_properties_analysis(self)

	fun pretty_print do
		print "# UnusedPropertiesAnalysis\n"
		for mpropdef, npropdef in rta.modelbuilder.mpropdef2npropdef do
			if mpropdef.mproperty.visibility > private_visibility then continue
			if not mpropdef.used then print "{mpropdef.mproperty} ({npropdef.location}) never used"
		end
	end

	fun mark_used(mpropdef: MPropDef) do
		if mpropdef isa MMethodDef then 
			if mpropdef.getter_for != null then
				mark_used(mpropdef.getter_for.as(not null))
				mark_alldefs(mpropdef.getter_for.mproperty)
			end
			if mpropdef.setter_for != null then
				mark_used(mpropdef.setter_for.as(not null))
				mark_alldefs(mpropdef.setter_for.mproperty)
			end
		end
		if mpropdef isa MAttributeDef then 
			if mpropdef.getter != null then mark_alldefs(mpropdef.getter.mproperty)
			if mpropdef.setter != null then mark_alldefs(mpropdef.setter.mproperty)
		end
		mark_alldefs(mpropdef.mproperty)
	end

	fun mark_alldefs(mproperty: MProperty) do
		for mpropdef in mproperty.mpropdefs do mpropdef.used = true
	end
end

redef class ANode
	fun accept_unused_properties_analysis(v: UnusedPropertiesAnalysis) do
		visit_all(v)
	end
end

redef class ACallExpr
	redef fun accept_unused_properties_analysis(v) do
		super
		v.mark_used(callsite.mpropdef.as(not null))
	end
end

redef class AAttrExpr
	redef fun accept_unused_properties_analysis(v) do
		super 
		v.mark_used(mproperty.intro)
	end
end

redef class ANewExpr
	redef fun accept_unused_properties_analysis(v) do
		super
		v.mark_used(callsite.mpropdef.as(not null))
	end
end

redef class ASuperExpr
	redef fun accept_unused_properties_analysis(v) do
		super
		if callsite != null and callsite.mpropdef != null then
			v.mark_used(callsite.mpropdef.as(not null))
		end
	end
end

redef class MPropDef
	private var used = false
end

