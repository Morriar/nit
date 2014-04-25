import static_analysis_base

class ReachingDefsAnalysis
	super ForwardAnalysis

	redef type FLOW: HashSet[VarDef]

	# Perform reaching def analysis on each node (forward analysis)
	redef fun visit(n) do n.accept_reaching_defs(self)

	# New initial flows are empty (conservative analysis)
	redef fun new_initial_flow do return new HashSet[VarDef]

	# Perform set union (used for "some path" analysis)
	redef fun merge(s1, s2) do return s1.union(s2).as(FLOW)

	fun pretty_print do
		var outlines = new Array[String]
		for node, outset in outsets do
			if outset.is_empty then continue
			var values = outset.to_a
			default_comparator.sort(values)
			outlines.add "{node.location.line_end}: {values.join(", ")}"
		end
		for line in outlines do print line
	end

	fun gen(variable: Variable, location: Location) do
		if variable != null then current_outset.add(new VarDef(variable, location))
	end

	fun kill(variable: Variable) do
		for vardef in current_outset.to_a do
			if vardef.variable == variable then current_outset.remove(vardef)
		end
	end
end

redef class ANode
	fun accept_reaching_defs(v: ReachingDefsAnalysis) do accept_forward_analysis(v)
end

redef class AVardeclExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

redef class AVarAssignExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

redef class AVarReassignExpr
	redef fun accept_reaching_defs(v) do
		super
		v.kill(variable.as(not null))
		v.gen(variable.as(not null), location)
	end
end

class VarDef
	super Comparable

	redef type OTHER: VarDef

	var variable: Variable
	var location: Location

	redef fun to_s do return "\{{variable}: {location.line_start}\}"
	redef fun ==(o) do return o isa OTHER and variable == o.variable and location == o.location
	redef fun hash do return variable.hash + location.hash

	redef fun <=>(o) do
			if variable.name == o.variable.name then
			return location.line_start <=> o.location.line_start
		else
			return variable.name <=> o.variable.name
		end
	end
end

