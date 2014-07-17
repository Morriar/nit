module attr_isset_analysis

import static_analysis
import model_utils

class AttrIssetAnalysis
	super ForwardAnalysis

	redef type FLOW: HashSet[AttrDef]

	redef fun new_initial_flow do return new HashSet[AttrDef]

	redef fun merge(s1, s2) do
		var res = new HashSet[AttrDef]
		for s in s1 do
			for ss in s2 do if s.mattribute == ss.mattribute then res.add(s)
		end
		for s in s2 do
			for ss in s1 do if s.mattribute == ss.mattribute then res.add(s)
		end
		return res
	end

	private fun all_contain(sets: Set[Set[AttrDef]], val: AttrDef): Bool do
		for set in sets do
			if not set.has(val) then return false
		end
		return true
	end

	# only x= generate definitions, no get get
	var no_getget writable = false

	# do not use attribute initialization in analysis
	var no_varinit writable = false

	redef fun visit(n) do n.accept_isset_analysis(self)

	# all statically found method calls
	var call_all = new HashSet[ACallFormExpr]
	# only calls made on self
	var call_self = new HashSet[ACallFormExpr]
	# calls to setters
	var call_setters = new HashSet[ACallAssignExpr]
	# calls to getters
	var call_getters = new HashSet[ACallExpr]
	# calls to getters on non nullable attributes
	var call_nonnull = new HashSet[ACallExpr]
	# calls to getters with useless isset-check
	var call_useless = new HashSet[ACallExpr]

	fun pretty_print do
		print "# IssetAnalysis"
		print "\tcall_all: {call_all.length}"
		print "\tcall_self: {call_self.length}"
		print "\tcall_setters: {call_setters.length}"
		print "\tcall_getters: {call_getters.length}"
		print "\tcall_nonnull: {call_nonnull.length}"
		print "\tcall_useless: {call_useless.length}"

		# print "\nFull list:\n"
		# for call in call_useless do
		# 	print "{call.location.line_start}: isset on {call.callsite.mpropdef} is useless"
		# 	print "\tinset: {insets[call]}"
		# end
	end

	fun gen(mproperty: MAttribute, location: Location) do
		if mproperty != null then current_outset.add(new AttrDef(mproperty, location))
	end

	fun kill(mproperty: MAttribute) do
		for attrdef in current_outset.to_a do
			if attrdef.mattribute == mproperty then current_outset.remove(attrdef)
		end
	end
end

redef class ANode
	fun accept_isset_analysis(v: AttrIssetAnalysis) do accept_forward_analysis(v)
end

redef class AAttrPropdef
	redef fun accept_isset_analysis(v) do
		super
		if v.no_varinit then return

		if n_expr isa ABoolExpr then
			set_def(v)
		else if n_expr isa ACharExpr then
			set_def(v)
		else if n_expr isa AFloatExpr then
			set_def(v)
		else if n_expr isa AIntExpr then
			set_def(v)
		else if n_expr isa AStringFormExpr then
			set_def(v)
		else if n_expr isa ANewExpr then
			set_def(v)
		else if n_expr isa ARangeExpr then
			set_def(v)
		else if n_expr isa AArrayExpr then
			set_def(v)
		end
	end

	fun set_def(v: AttrIssetAnalysis) do
		v.kill(mpropdef.mproperty)
		v.gen(mpropdef.mproperty, location)
	end
end

redef class AMethPropdef
	redef fun accept_isset_analysis(v) do
		if not v.no_inter and v.insets.has_key(self) then
			v.current_inset = v.insets[self].copy
		else
			v.current_inset = v.new_initial_flow
		end
		for mattr in mpropdef.mclassdef.mpropdefs do
			if not mattr isa MAttributeDef then continue
			if v.modelbuilder.mpropdef2npropdef.has_key(mattr) then
				var nattr = v.modelbuilder.mpropdef2npropdef[mattr]
				if v.outsets.has_key(nattr) then v.current_inset.add_all(v.outsets[nattr]) 
			end
		end
		v.insets[self] = v.current_inset
		super
	end
end

# Expression of the form x.attr=
# they may be calls to attribute setters
redef class ACallAssignExpr
	# we are looking for setters call only
	redef fun accept_isset_analysis(v) do
		super
		var mpropdef = callsite.mpropdef
		v.call_all.add(self)
		if callsite.recv_is_self then v.call_self.add(self)
		if mpropdef.setter_for != null then v.call_setters.add(self)

		if callsite.recv_is_self and mpropdef.setter_for != null then
			if mpropdef.mproperty.setter_for.is_nullable then return
			v.kill(callsite.mpropdef.mproperty.setter_for.as(not null))
			v.gen(callsite.mpropdef.mproperty.setter_for.as(not null), location)
		end
	end
end

# Expression of the form x.attr
# they may be calls to attribute getters
redef class ACallExpr
	redef fun accept_isset_analysis(v) do
		super
		var mpropdef = callsite.mpropdef
		v.call_all.add(self)
		if callsite.recv_is_self then v.call_self.add(self)
		if mpropdef.getter_for != null then v.call_getters.add(self)
		if not callsite.recv_is_self then return
		if mpropdef.getter_for != null then
			if mpropdef.mproperty.getter_for.is_nullable then return
			v.call_nonnull.add(self)
			if is_useless(v) then
				v.call_useless.add(self)
			end
			if not v.no_getget then
				v.kill(callsite.mpropdef.mproperty.getter_for.as(not null))
				v.gen(callsite.mpropdef.mproperty.getter_for.as(not null), location)
			end
		end
	end

	# Is useless if we are sure that a call to @a= has been made before
	fun is_useless(v: AttrIssetAnalysis): Bool do
		var attr = callsite.mpropdef.mproperty.getter_for
		for attrdef in v.current_inset do
			if attrdef.mattribute == attr then return true
		end
		return false
	end
end

class AttrDef
	super Comparable

	redef type OTHER: AttrDef

	var mattribute: MAttribute
	var location: Location

	redef fun to_s do
		return "\{{mattribute}: {location.line_start}\}"
	end

	redef fun ==(o) do
		return self.to_s == o.to_s
	end

	redef fun hash do return mattribute.hash + location.hash

	redef fun <=>(o) do
		if mattribute.name == o.mattribute.name then
			return location.line_start <=> o.location.line_start
		else
			return mattribute.name <=> o.mattribute.name
		end
	end
end

