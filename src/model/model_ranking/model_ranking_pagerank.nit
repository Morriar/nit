# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# TOC generation approaches based on PageRank algorithm.
module model_ranking_pagerank

import model_ranking_base
import model_views
import graphs::pagerank
import modelbuilder
import semantize::typing

# Weight concerns based on the number of usage inside the concern.
class PageRankRanker
	super ModelRanker

	# Model view used to build hierarchy graphs.
	var view: ModelView

	# Model view used to build hierarchy graphs.
	var modelbuilder: ModelBuilder

	# Kind of hierarchy to pagerank.
	#
	# Can be one of:
	# * `hierarchy`: use inheritance edges
	# * `types`: use type usage edges
	# * `calls`: use calls edges
	var mode: String

	private var values: PRMap[MEntity] is noinit

	init do
		var graph = new HashDigraph[MEntity]
		if mode == "hierarchy" then
			var builder = new GraphHierarchyBuilder(view)
			builder.build_graph(graph)
		else if mode == "types" then
			var builder = new GraphTypeUsageBuilder(view, modelbuilder)
			builder.build_graph(graph)
		else if mode == "calls" then
			var builder = new GraphCallUsageBuilder(view, modelbuilder)
			builder.build_graph(graph)
		end
		values = graph.pagerank
	end

	redef fun rank_mentity(mconcern) do
		return values.get_or_default(mconcern, 0.0)
	end
end

# Populate a HashDigrah from a DocModel
#
# The edges of the graph depends on the semantices. See sublasses.
private abstract class GraphBuilder

	# Model view used to build hierarchy graphs.
	var view: ModelView

	fun build_graph(graph: HashDigraph[MEntity]) do
		for mpackage in view.mpackages do add_mpackage(graph, mpackage)
		for mgroup in view.mgroups do add_mgroup(graph, mgroup)
		for mmodule in view.mmodules do add_mmodule(graph, mmodule)
		for mclassdef in view.mclassdefs do add_mclassdef(graph, mclassdef)
		for mpropdef in view.mpropdefs do add_mpropdef(graph, mpropdef)
	end

	fun add_mpackage(graph: HashDigraph[MEntity], mpackage: MPackage) do
		graph.add_vertex(mpackage)
	end

	fun add_mgroup(graph: HashDigraph[MEntity], mgroup: MGroup) do
		graph.add_arc(mgroup, mgroup.mpackage)
	end

	fun add_mmodule(graph: HashDigraph[MEntity], mmodule: MModule) do
		var mgroup = mmodule.mgroup
		if mgroup == null then
			graph.add_vertex(mmodule)
		else
			graph.add_arc(mmodule, mgroup)
		end
	end

	fun add_mclassdef(graph: HashDigraph[MEntity], mclassdef: MClassDef) do
		graph.add_arc(mclassdef, mclassdef.mclass)
		graph.add_arc(mclassdef, mclassdef.mmodule)
	end

	fun add_mpropdef(graph: HashDigraph[MEntity], mpropdef: MPropDef) do
		graph.add_arc(mpropdef, mpropdef.mclassdef)
	end
end

# Build a graph based on hierarchy.
#
# Edges:
# * modules -> directly imported modules
# * classdefs -> direct super classdefs
private class GraphHierarchyBuilder
	super GraphBuilder

	redef fun add_mgroup(graph, mgroup) do
		super
		for ogroup in mgroup.in_nesting.direct_greaters do
			graph.add_arc(mgroup, ogroup)
		end
	end

	redef fun add_mmodule(graph, mmodule) do
		super
		for omodule in mmodule.in_importation.direct_greaters do
			graph.add_arc(mmodule, omodule)
		end
	end

	redef fun add_mclassdef(graph, mclassdef) do
		super
		var hierarchy = mclassdef.in_hierarchy
		if hierarchy == null then return
		for oclassdef in hierarchy.direct_greaters do
			graph.add_arc(mclassdef, oclassdef)
		end
	end
end

# Build a graph based on type usage.
#
# Edges:
# * mentity using type --> module introducing type
# * mentity using type --> classdef introducing type
# * mentity using type --> class introducing type
private class GraphTypeUsageBuilder
	super GraphBuilder

	# ModelBuilder used to access sources.
	var modelbuilder: ModelBuilder

	redef fun add_mmodule(graph, mmodule) do
		super
		var nmodule = modelbuilder.mmodule2node(mmodule)
		if nmodule == null then return
		var visitor = new TypeUsageVisitor(graph, mmodule)
		visitor.enter_visit(nmodule)
	end

	redef fun add_mclassdef(graph, mclassdef) do
		super
		var nclassdef = modelbuilder.mclassdef2node(mclassdef)
		if nclassdef == null then return
		var visitor = new TypeUsageVisitor(graph, mclassdef)
		visitor.enter_visit(nclassdef)
	end

	redef fun add_mpropdef(graph, mpropdef) do
		super
		var npropdef = modelbuilder.mpropdef2node(mpropdef)
		if npropdef == null then return
		var visitor = new TypeUsageVisitor(graph, mpropdef)
		visitor.enter_visit(npropdef)
	end
end

private class TypeUsageVisitor
	super Visitor

	var graph: HashDigraph[MEntity]

	var mentity: MEntity

	redef fun visit(n)
	do
		if n isa AType then
			visit_type(n)
		end
		n.visit_all(self)
	end

	fun visit_type(n: AType) do
		var mtype = n.mtype
		if mtype == null then return
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MClassType then return
		graph.add_arc(self.mentity, mtype.mclass)
		graph.add_arc(self.mentity, mtype.mclass.intro)
		graph.add_arc(self.mentity, mtype.mclass.intro.mmodule)
	end
end

# Build a graph based on call usage.
#
# Edges:
# * mentity using type --> module introducing type
# * mentity using type --> classdef introducing type
# * mentity using type --> class introducing type
private class GraphCallUsageBuilder
	super GraphBuilder

	# ModelBuilder used to access sources.
	var modelbuilder: ModelBuilder

	redef fun add_mmodule(graph, mmodule) do
		super
		var nmodule = modelbuilder.mmodule2node(mmodule)
		if nmodule == null then return
		var visitor = new CallUsageVisitor(graph, mmodule)
		visitor.enter_visit(nmodule)
	end

	redef fun add_mclassdef(graph, mclassdef) do
		super
		var nclassdef = modelbuilder.mclassdef2node(mclassdef)
		if nclassdef == null then return
		var visitor = new CallUsageVisitor(graph, mclassdef)
		visitor.enter_visit(nclassdef)
	end

	redef fun add_mpropdef(graph, mpropdef) do
		super
		var npropdef = modelbuilder.mpropdef2node(mpropdef)
		if npropdef == null then return
		var visitor = new CallUsageVisitor(graph, mpropdef)
		visitor.enter_visit(npropdef)
	end
end

private class CallUsageVisitor
	super Visitor

	var graph: HashDigraph[MEntity]

	var mentity: MEntity

	redef fun visit(n)
	do
		if n isa ACallExpr then
			visit_callsite(n)
		end
		n.visit_all(self)
	end

	fun visit_callsite(n: ACallExpr) do
		var callsite = n.callsite
		if callsite == null then return
		var mpropdef = callsite.mpropdef
		graph.add_arc(self.mentity, mpropdef)
		graph.add_arc(self.mentity, mpropdef.mclassdef)
		graph.add_arc(self.mentity, mpropdef.mclassdef.mmodule)
		graph.add_arc(self.mentity, mpropdef.mclassdef.mclass)
		graph.add_arc(self.mentity, mpropdef.mclassdef.mclass.intro.mmodule)
	end
end
