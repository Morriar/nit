module isset_checks_analysis_removal

import rapid_type_analysis
import model_utils

# Perform intra-procedural analysis
# the entry point is a method definition
class IssetCheckAnalysis
	super Visitor

	# node insets
	# intial set at the entry of the node
	var insets = new HashMap[ANode, HashSet[AttrDef]]

	# set at the exit of the node
	# depend on merge operations
	var outsets = new HashMap[ANode, HashSet[AttrDef]]

	# the in set for the node visited currently
	var current_inset: HashSet[AttrDef] protected writable

	# the out set for the node visited currently
	var current_outset: HashSet[AttrDef] protected writable

	# initial flow used for main_inset and fix points computation
	fun new_initial_flow: HashSet[AttrDef] do return new HashSet[AttrDef]

	# the merge operation on sets to apply on flow merge node
	fun merge(s1, s2: Set[AttrDef]): HashSet[AttrDef] do
		var res = new HashSet[AttrDef]
		for s in s1 do
			for ss in s2 do if s == ss then res.add(s)
		end
		for s in s2 do
			for ss in s1 do if s == ss then res.add(s)
		end
		return res
	end

	# perform set union (used for "some path" analysis)
	fun union(s1, s2: Set[AttrDef]): HashSet[AttrDef] do
		var res = new HashSet[AttrDef]
		res.add_all(s1)
		res.add_all(s2)
		return res
	end

	fun intersect(sets: Set[Set[AttrDef]]): HashSet[AttrDef] do
		var res = new HashSet[AttrDef]
		for set in sets do
			for val in set do
				if all_contain(sets, val) then res.add(val)
			end
		end
		return res
	end

	private fun all_contain(sets: Set[Set[AttrDef]], val: AttrDef): Bool do
		for set in sets do
			if not set.has(val) then return false
		end
		return true
	end

	# look up fix point of this node
	fun loop_fix_point(node: nullable ANode) do
		#print "inset before fix while: {current_inset}"
		#print "outset before fix while: {current_outset}"
		var inset = current_inset.copy
		var outset = current_outset.copy
		var last: nullable HashSet[AttrDef] = null

		while last == null or not current_outset == last do
			if node != null then visit(node)
			last = current_outset.copy
			current_inset = merge(inset, current_outset)
		end

		current_inset = inset
		current_outset = merge(outset, current_outset)
		current_outset = union(inset, current_outset)
		#print "inset after fix while: {current_inset}"
		#print "outset after fix while: {current_outset}"
	end

	var rta: RapidTypeAnalysis protected writable
	
	init(rta: RapidTypeAnalysis) do 
		self.rta = rta
		self.current_inset = new_initial_flow
		self.current_outset = new_initial_flow
	end

	# perform intra-analysis only
	var no_inter writable = false

	# only x= generate definitions, no get get
	var no_getget writable = false

	# do not use attribute initialization in analysis
	var no_varinit writable = false

	fun start_analysis(n: ANode) do
		if no_inter then
			visit(n)
		else
			var lastsets: nullable HashMap[ANode, HashSet[AttrDef]] = null
			var outsets = self.outsets.copy

			while lastsets == null or lastsets != outsets do
				visit(n)
				lastsets = outsets.copy
				outsets = self.outsets.copy
			end
		end
	end

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
	end

	fun collect_targets(callsite: CallSite): Set[AConcreteMethPropdef] do
		var res = new HashSet[AConcreteMethPropdef]
		var targets = rta.live_targets(callsite.as(not null))
		for target in targets do
			if not rta.modelbuilder.mpropdef2npropdef.has_key(target) then continue
			var npropdef = rta.modelbuilder.mpropdef2npropdef[target]
			if not npropdef isa AConcreteMethPropdef then continue
			res.add(npropdef)
		end
		return res
	end
end

redef class ANode
	fun accept_isset_analysis(v: IssetCheckAnalysis) do
		v.current_inset = v.current_outset.copy
		v.current_outset = v.current_inset.copy
		v.insets[self] = v.current_inset
		visit_all(v)
		v.outsets[self] = v.current_outset
	end
end

redef class AConcreteMethPropdef
	redef fun accept_isset_analysis(v) do
		v.current_inset = v.new_initial_flow
		if not v.no_inter and v.insets.has_key(self) then
			v.current_inset = v.insets[self]
		end
		v.current_outset = v.current_inset.copy
		v.insets[self] = v.current_inset
		#print "inset for {mpropdef}: {v.current_inset}"
		visit_all(v)
		#print "outset for {mpropdef}: {v.current_outset}"
		v.outsets[self] = v.current_outset
	end
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
		end
	end

	fun set_def(v: IssetCheckAnalysis) do
		v.current_outset.remove_alls(kill(v))
		v.current_outset.add_all(gen(v))
	end

	# generate an attr definition if self is a setter call
	fun gen(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		res.add(new AttrDef(mpropdef.mproperty, location))
		return res
	end

	# kill previous definition of attribute if self is a setter call
	fun kill(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		for attrdef in v.current_outset do
			if attrdef.mattribute == mpropdef.mproperty then res.add(attrdef)
		end
		return res
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
			set_def(v)
		end
	end

	fun set_def(v: IssetCheckAnalysis) do
		v.current_outset.remove_alls(kill(v))
		v.current_outset.add_all(gen(v))
	end

	# generate an attr definition if self is a setter call
	fun gen(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		res.add(new AttrDef(callsite.mpropdef.mproperty.setter_for.as(not null), location))
		return res
	end

	# kill previous definition of attribute if self is a setter call
	fun kill(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		for attrdef in v.current_outset do
			if attrdef.mattribute == callsite.mpropdef.mproperty.setter_for then res.add(attrdef)
		end
		return res
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
		if not v.no_inter then
			var inset = v.current_inset.copy
			var targets = v.collect_targets(callsite.as(not null))
			var outsets = new HashSet[Set[AttrDef]]
			for target in targets do
				if not v.insets.has_key(target) then
					v.insets[target] = inset
				else
					v.insets[target] = v.merge(inset, v.insets[target])
				end
				if v.outsets.has_key(target) then
					outsets.add(v.outsets[target])
				end
			end
			var outset = v.intersect(outsets)
			v.current_inset = v.union(inset, outset)
			v.current_outset = v.current_inset
		end

		if mpropdef.getter_for != null then
			if mpropdef.mproperty.getter_for.is_nullable then return
			v.call_nonnull.add(self)
			if is_useless(v) then
				v.call_useless.add(self)
			end
			set_def(v)
		end
	end

	# Is useless if we are sure that a call to @a= has been made before
	fun is_useless(v: IssetCheckAnalysis): Bool do
		var attr = callsite.mpropdef.mproperty.getter_for
		for attrdef in v.current_inset do
			if attrdef.mattribute == attr then return true
		end
		return false
	end

	fun set_def(v: IssetCheckAnalysis) do
		if not v.no_getget then
			v.current_outset.remove_alls(kill(v))
			v.current_outset.add_all(gen(v))
		end
	end

	# Generate an attr definition if self is a getter call
	# we know for sure after this call that attr has been initialized
	# (previous call should have raised an error)
	fun gen(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		res.add(new AttrDef(callsite.mpropdef.mproperty.getter_for.as(not null), location))
		return res
	end

	# kill previous definition of attribute if self is a getter call
	fun kill(v: IssetCheckAnalysis): Set[AttrDef] do
		var res = new HashSet[AttrDef]
		for attrdef in v.current_outset do
			if attrdef.mattribute == callsite.mpropdef.mproperty.getter_for then res.add(attrdef)
		end
		return res
	end
end

# merge flow on if .. else constructs

redef class AIfExpr
	redef fun accept_isset_analysis(v) do
		v.enter_visit(n_expr)
		var inset = v.current_inset
		var outset = v.current_outset

		if n_then != null then v.enter_visit(n_then)
		var then_outset = v.current_outset

		v.current_inset = inset
		v.current_outset = outset

		if n_else != null then v.enter_visit(n_else)
		var else_outset = v.current_outset

		v.current_inset = inset
		v.current_outset = v.merge(then_outset, else_outset)
		v.current_outset = v.union(inset, v.current_outset)
	end
end

# compute fix point on loop

redef class AWhileExpr
	redef fun accept_isset_analysis(v) do
		v.enter_visit(n_expr)
		v.loop_fix_point(n_block)
	end
end

redef class AForExpr
	redef fun accept_isset_analysis(v) do
		v.enter_visit(n_expr)
		v.loop_fix_point(n_block)
	end
end

redef class ALoopExpr
	redef fun accept_isset_analysis(v) do
		v.loop_fix_point(n_block)
	end
end

# redef utils

redef class HashSet[E]
	fun copy: HashSet[E] do return new HashSet[E].from(self)

	fun remove_alls(other: Collection[E]) do
		for e in other do self.remove_all(e)
	end
end

redef class HashMap[E, F]
	init from(map: Map[E, F]) do
		init
		for k, v in map do self[k] = v
	end

	fun copy: HashMap[E, F] do return new HashMap[E, F].from(self)

	redef fun ==(o): Bool do
		if not o isa HashMap[E, F] then return false
		for k, v in self do
			if not o.has_key(k) or o[k] != v then return false
		end
		for k, v in o do
			if not has_key(k) or self[k] != v then return false
		end
		return true
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

