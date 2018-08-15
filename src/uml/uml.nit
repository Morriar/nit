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

module uml

import toolcontext
import model::model_collect
import dot

class UMLDiagramOptions

	# Diagram center
	#
	# If not `null` the diagram will be generated around this MEntity.
	var center: nullable MEntity is writable

	# TODO
	var parents_depth: nullable Int = 0 is writable

	# TODO
	var children_depth: nullable Int = 0 is writable

	# Clusterize mgroups into packages
	var clusterize_groups = true is writable

	# Clusterize modules into groups
	var clusterize_modules = true is writable

	# Clusterize classes into modules
	var clusterize_classes = true is writable

	# Compact imported groups into packages
	var compact_groups = true is writable

	# Compact imported modules into groups
	var compact_modules = true is writable

	# Show packages groups
	var show_groups = true is writable

	# Show groups modules
	var show_modules = true is writable

	# Show modules classes and classdefs
	var show_classes = true is writable

	# Show classes and classdefs virtual types
	var show_vtypes = true is writable

	# Show classes and classdefs attributes
	var show_attributes = true is writable

	# Show classes and classdefs methods
	var show_methods = true is writable

	# Show types in classes and properties signatures
	var show_types = true is writable

	# Show classes and properties visibility markers
	var show_visibility = true is writable

	# Maximum number of parents for each entity
	#
	# Default is `null` (no limit).
	var max_parents: nullable Int = null is writable

	# Maximum number of children for each entity
	#
	# Default is `null` (no limit).
	var max_children: nullable Int = null is writable

	# Use orthogonal edges
	#
	# Default is `false`.
	var ortho_edges = false is writable

	# Do not use colors
	#
	# Default is `true`.
	var no_colors = false is writable

	# Color used to highlight entities
	var color_highlight = "#52bcd4" is writable

	# Color used for public classes and properties
	var color_public = "forestgreen" is writable

	# Color used for protected properties
	var color_protected = "orange" is writable

	# Color used for private classes and properties
	var color_private = "red" is writable

	# Diagram font color
	var color_font = "black" is writable

	# Diagram border color
	var color_border = "black" is writable

	# Diagram background color
	var color_diagram = "white" is writable

	# Packages background color
	var color_packages = "#fcf2e2" is writable

	# Groups background color
	var color_groups = "#fefef2" is writable

	# Modules background color
	var color_modules = "#fffaf3" is writable

	# Classes background color
	var color_classes = "white" is writable

	# Diagram font size
	var font_size = 10 is writable

	# Diagram font name
	var font_name = "helvetica" is writable

	# Stereotypes to display in italic
	var special_kinds: Array[MClassKind] = [abstract_kind, interface_kind, enum_kind, extern_kind] is writable

	# Sorter used to sort entities inside the boxes
	var mentity_sorter = new MEntityNameSorter is writable
end

class UMLDiagram
	super DotGraph
	autoinit(model, mainmodule, filter, options)

	# Model filter
	var model: Model

	# TODO
	var mainmodule: MModule

	# TODO
	var filter: nullable ModelFilter is writable

	# Diagram options
	var options: UMLDiagramOptions

	# Initialize graph options
	#
	# Implicitely called when the graph is genereted to dot.
	fun init_graph do
		self.id = "G"
		self.kind = "digraph"

		self["compound"] = "true"
		self["rankdir"] = "BT"
		self["ranksep"] = 0.3
		self["nodesep"] = 0.3
		if options.ortho_edges then
			self["splines"] = "ortho"
			self["concentrate"] = "true"
		end

		self.nodes_attrs["margin"] = 0.1
		self.nodes_attrs["width"] = 0
		self.nodes_attrs["height"] = 0
		self.nodes_attrs["fontsize"] = options.font_size
		self.nodes_attrs["fontname"] = options.font_name
		self.edges_attrs["penwidth"] = 0.5
		self.edges_attrs["arrowsize"] = 0.5

		# self.edges_attrs["constraint"] = "false"

		if not options.no_colors then
			self["bgcolor"] = options.color_diagram
			self["fontcolor"] = options.color_font
			self["color"] = options.color_border
		end
	end

	redef fun to_dot do
		init_graph
		return super
	end

	# TODO
	fun draw_class_diagram(center: nullable MEntity) do
		var mentities = new Array[MEntity]
		if center isa MClass or center isa MClassDef then
			mentities.add center
		else if center isa MModule then
			mentities.add_all center.collect_intro_mclasses(filter)
		else if center isa MGroup then
			mentities.add_all center.collect_intro_mclasses(filter)
		else if center isa MPackage then
			mentities.add_all center.collect_intro_mclasses(filter)
		else
			mentities.add_all model.collect_intro_mclasses(filter)
		end
		draw_mentities(mentities)
		draw_parents(mentities, options.parents_depth)
		draw_children(mentities, options.children_depth)
	end

	# TODO
	fun draw_package_diagram(center: nullable MEntity) do
		var mentities = new Array[MEntity]
		if center isa MClassDef then
			mentities.add center.mmodule
		else if center isa MClass then
			mentities.add center.intro_mmodule
		else if center isa MModule then
			mentities.add center
		else if center isa MGroup then
			mentities.add_all center.collect_mmodules(filter)
		else if center isa MPackage then
			mentities.add_all center.collect_mmodules(filter)
		else
			mentities.add_all model.collect_mmodules(filter)
		end
		draw_mentities(mentities)
		draw_parents(mentities, options.parents_depth)
		draw_children(mentities, options.children_depth)
	end

	# Draw a node for each entity in `mentities`
	#
	# This method does not draw the inheritance/importation edges.
	# It only draws the nodes.
	fun draw_mentities(mentities: Collection[MEntity]) do
		for mentity in mentities do draw_mentity(mentity)
	end

	# Draw a node for a `mentity`
	fun draw_mentity(mentity: MEntity) do draw_node mentity

	# Does `self` already contain a DotNode or DotCluster for `mentity`?
	fun has_mentity(mentity: MEntity): Bool do
		return mentity_nodes.has_key(mentity)
	end

	# Does `self` already contain a DotNode for `mentity`?
	fun has_mentity_node(mentity: MEntity): Bool do
		return mentity_nodes.has_key(mentity) and
			mentity_nodes[mentity] isa DotNode and
			not mentity_nodes[mentity] isa DotCluster
	end

	# Does `self` already contain a DotCluster for `mentity`?
	fun has_mentity_cluster(mentity: MEntity): Bool do
		return mentity_nodes.has_key(mentity) and mentity_nodes[mentity] isa DotCluster
	end

	# DotNode for each MEntity
	var mentity_nodes = new HashMap[MEntity, DotElement]

	# Draw a node from a `mentity`
	#
	# If a node is already drawn for `mentity` then return this node.
	fun draw_node(mentity: MEntity): DotNode do
		if has_mentity_node(mentity) then return mentity_nodes[mentity].as(DotNode)
		# draw the node
		var node = mentity.to_uml_node(self)
		if mentity == options.center then node = highlight(node).as(DotNode)
		mentity_nodes[mentity] = node
		# draw the node clusters if any
		var cluster = clusterize_mentity(mentity)
		cluster.add node
		return node
	end

	# Draw the cluster for `mentity`
	#
	# This method will recursively draw a cluster to group mclasses, mmodules
	# and groups depending on the diagram options.
	fun draw_cluster(mentity: MEntity): DotGraph do
		if has_mentity_cluster(mentity) then return mentity_nodes[mentity].as(DotCluster)
		# draw the cluster
		var node = mentity.to_uml_cluster(self)
		if mentity == options.center then highlight(node)
		mentity_nodes[mentity] = node
		# draw the cluster clusters if any
		var cluster = clusterize_mentity(mentity)
		cluster.add node
		add node
		return node
	end

	# Draw the appropriate cluster for `mentity`
	fun clusterize_mentity(mentity: MEntity): DotGraph do
		if mentity isa MPackage then
			return self
		end
		if mentity isa MGroup and options.clusterize_groups then
			return draw_cluster(mentity.mpackage)
		end
		if mentity isa MModule then
			var mgroup = mentity.mgroup
			if mgroup != null then
				if options.clusterize_modules then return draw_cluster(mgroup)
				if options.clusterize_groups then return draw_cluster(mgroup.mpackage)
			end
		end
		if mentity isa MClass then
			if options.clusterize_classes then return draw_cluster(mentity.intro_mmodule)
			var mgroup = mentity.intro_mmodule.mgroup
			if mgroup != null then
				if options.clusterize_modules then return draw_cluster(mgroup)
				if options.clusterize_groups then return draw_cluster(mgroup.mpackage)
			end
		end
		if mentity isa MClassDef then
			if options.clusterize_classes then return draw_cluster(mentity.mmodule)
			var mgroup = mentity.mmodule.mgroup
			if mgroup != null then
				if options.clusterize_modules then return draw_cluster(mgroup)
				if options.clusterize_groups then return draw_cluster(mgroup.mpackage)
			end
			return draw_cluster(mentity.mmodule)
		end
		return self
	end

	# Draw a package box for an `mentity` containing a list of `definitions`
	#
	# This will draw an UML Package style box for a MPackage, MGroup or MModule.
	fun package_label(mentity: MEntity, definitions: Array[MEntity]): Writable do
		options.mentity_sorter.sort(definitions)
		var t = new Template
		t.add "<<TABLE BORDER=\"0\" CELLBORDER=\"0\" CELLPADDING=\"2\" CELLSPACING=\"0\">"
		t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\" BORDER=\"0\""
		if mentity.dot_url != null then t.add " HREF=\"{mentity.dot_url.as(not null)}\""
		t.add " TITLE=\"{mentity.full_name.escape_to_dot}\""
		t.add ">"
		t.add "<B>{mentity.name.escape_to_dot}</B>"
		t.add "</TD></TR>"
		if (mentity isa MPackage and options.show_groups) or
		   (mentity isa MGroup and options.show_modules) or
		   (mentity isa MModule and options.show_classes) then
			if definitions.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in definitions do
					t.add i.to_uml_string(self)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		t.add "</TABLE>>"
		return t.write_to_string
	end

	# Draw a class box for an `mclassdef`
	#
	# Add a subbox for the `vtypes`, `attributes` and `methods` lists.
	#
	# This will draw an UML Class style box for a MClassDef (or MClass::intro).
	fun class_label(mclassdef: MClassDef, vtypes, attributes, methods: Array[MEntity]): Writable do
		options.mentity_sorter.sort(attributes)
		options.mentity_sorter.sort(methods)
		var mclass = mclassdef.mclass
		var t = new Template
		t.add "<<TABLE BORDER=\"0\" CELLBORDER=\"1\" CELLPADDING=\"2\" CELLSPACING=\"0\">"
		t.add "<TR><TD"
		if mclass.dot_url != null then t.add " HREF=\"{mclass.dot_url.as(not null)}\""
		t.add " TITLE=\"{mclass.full_name.escape_to_dot}\""
		t.add ">"
		if not mclassdef.is_intro then
			t.add "<<redef>>".escape_to_dot
			t.add "<BR/><I>"
		else if options.special_kinds.has(mclass.kind) then
			t.add "{mclass.kind.to_uml}<BR/><I>"
		end
		t.add "<B>"
		if options.show_visibility and mclass.visibility == private_visibility then
			t.add mclass.visibility.to_uml(self)
			t.add " "
		end
		t.add mclass.name.escape_to_dot
		if mclass.arity > 0 then
			t.add "["
			for i in [0..mclass.mparameters.length[ do
				if i > 0 then t.add ", "
				t.add mclass.mparameters[i].to_uml_string(self)
			end
			t.add "]"
		end
		t.add "</B>"
		if not mclassdef.is_intro or options.special_kinds.has(mclass.kind) then
			t.add "</I>"
		end
		t.add "</TD></TR>"
		if options.show_vtypes then
			if vtypes.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in vtypes do
					t.add i.to_uml_string(self)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		if options.show_attributes then
			if attributes.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in attributes do
					t.add i.to_uml_string(self)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		if options.show_methods then
			if methods.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in methods do
					t.add i.to_uml_string(self)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		t.add "</TABLE>>"
		return t.write_to_string
	end

	# Apply `color_highlight` to the `dot` node
	fun highlight(dot: DotElement): DotElement do
		if not options.no_colors then dot["color"] = options.color_highlight
		return dot
	end

	# Draw import/inheritance relations for each `mentities`
	#
	# This method will draw new nodes for the parents and children depending on
	# the choosen depth.
	fun draw_mentities_edges(mentities: Collection[MEntity],
		parents_depth, children_depth: nullable Int) do
		draw_parents(mentities, parents_depth)
		draw_children(mentities, children_depth)
	end

	# TODO
	fun draw_inheritance(mentities: Collection[MEntity]) do
		for mentity in mentities do
			for oentity in mentities do
				if mentity == oentity then continue

				if mentity.collect_parents(mainmodule, filter).has(oentity) then
					draw_edge(mentity, oentity)
				end
			end
		end
	end

	# Draw import/inheritance edges to parents of all `mentities`
	#
	# This method will draw new nodes for the parents of each mentity depending
	# on `parents_depth`.
	# If `parents_depth == null` then draw all ancestors.
	fun draw_parents(mentities: Collection[MEntity], parents_depth, current_depth: nullable Int) do
		var parents = new HashSet[MEntity]
		current_depth = current_depth or else 0

		for mentity in mentities do
			if not has_mentity_node(mentity) then continue
			parents.add_all draw_mentity_parents(mentity, parents_depth, current_depth)
		end

		if parents_depth != null and current_depth >= parents_depth then return
		if parents.not_empty then draw_parents(parents, parents_depth, current_depth + 1)
	end

	# Already visited parents
	private var done_parents = new HashSet[MEntity]

	# Recursively draw the parents of a `mentity`
	#
	# Draw parents until `current_depth == max_depth`.
	fun draw_mentity_parents(mentity: MEntity, max_depth, current_depth: nullable Int): Set[MEntity]
	do
		var new_parents = new HashSet[MEntity]
		if done_parents.has(mentity) then return new_parents
		done_parents.add mentity
		current_depth = current_depth or else 0
		var parents = mentity.collect_parents(mainmodule, filter)
		if max_depth != null and current_depth >= max_depth and parents.not_empty then
			for parent in parents do
				if has_mentity_node(parent) then
					draw_edge(mentity, parent)
				else
					to_dotdotdot(mentity)
				end
			end
			return new_parents
		end
		if options.max_parents != null and parents.length > options.max_parents.as(not null) then
			to_dotdotdot(mentity)
			return new_parents
		end
		for parent in parents do
			parent = compact_dependency(mentity, parent)
			if has_mentity_cluster(parent) then continue
			draw_edge(mentity, parent)
			new_parents.add parent
		end
		return new_parents
	end

	# Draw import/inheritance edges from children of all `mentities`
	#
	# This method will draw new nodes for the children of each mentity depending
	# on `children_depth`.
	# If `children_depth == null` then draw all descendants.
	fun draw_children(mentities: Collection[MEntity], children_depth, current_depth: nullable Int) do
		var children = new HashSet[MEntity]
		current_depth = current_depth or else 0

		for mentity in mentities do
			if not has_mentity_node(mentity) then continue
			children.add_all draw_mentity_children(mentity, children_depth, current_depth)
		end

		if children_depth != null and current_depth >= children_depth then return
		if children.not_empty then draw_children(children, children_depth, current_depth + 1)
	end

	# Already visited children
	private var done_children = new HashSet[MEntity]

	# Recursively draw the children of a `mentity`
	#
	# Draw children until `current_depth == max_depth`.
	fun draw_mentity_children(mentity: MEntity, max_depth, current_depth: nullable Int): Set[MEntity]
	do
		var new_children = new HashSet[MEntity]
		if done_children.has(mentity) then return new_children
		done_children.add mentity
		current_depth = current_depth or else 0
		var children = mentity.collect_children(mainmodule, filter)
		if max_depth != null and current_depth >= max_depth and children.not_empty then
			for child in children do
				if has_mentity_node(child) then
					draw_edge(child, mentity)
				else
					from_dotdotdot(mentity)
				end
			end
			return new_children
		end
		if options.max_children != null and children.length > options.max_children.as(not null) then
			from_dotdotdot(mentity)
			return new_children
		end
		for child in children do
			child = compact_dependency(mentity, child)
			if has_mentity_cluster(child) then continue
			draw_edge(child, mentity)
			new_children.add child
		end
		return new_children
	end

	# Find the more compact representation for a dependency
	#
	# When drawing import edges, we try to compact modules into groups and groups
	# into packages depending on the diagram options.
	#
	# This method returns the more compacted target for a `parent` depending of
	# the `mentity` that point from or to the `parent`.
	fun compact_dependency(mentity, parent: MEntity): MEntity do
		if mentity_nodes.has_key(parent) then return parent
		if options.compact_modules and mentity isa MModule and parent isa MModule then
			var mgroup = parent.mgroup
			if mgroup != null and mgroup != mentity.mgroup then parent = mgroup
		end
		if options.compact_groups and mentity isa MModule and parent isa MGroup then
			var mpackage = parent.mpackage
			var mgroup = mentity.mgroup
			if mgroup != null and mpackage != mentity.mpackage then parent = mpackage
		end
		if options.compact_groups and mentity isa MGroup and parent isa MGroup then
			var mpackage = parent.mpackage
			if mpackage != mentity.mpackage then parent = mpackage
		end
		return parent
	end

	# Already drawn edges between mentities
	var mentity_edges = new HashMap2[MEntity, MEntity, DotEdge]

	# Draw a edges between two mentities
	#
	# This method will draw the correct edge style for import, inheritance and
	# implement relationships between `from` and `to`.
	fun draw_edge(from, to: MEntity): DotEdge do
		if mentity_edges.has(from, to) then return mentity_edges[from, to].as(not null)
		var nfrom = draw_node(from)
		var nto = draw_node(to)
		var edge: DotEdge
		if from isa MClass and to isa MClass then
			if from.kind != interface_kind and to.kind == interface_kind then
				edge = implement_edge(nfrom, nto)
			else
				edge = extend_edge(nfrom, nto)
			end
		else if from isa MClassDef and to isa MClassDef then
			if from.mclass.kind != interface_kind and to.mclass.kind == interface_kind then
				edge = implement_edge(nfrom, nto)
			else
				edge = extend_edge(nfrom, nto)
			end
		else
			edge = import_edge(nfrom, nto)
		end
		mentity_edges[from, to] = edge
		add edge
		return edge
	end

	# Draw an importation edge
	#
	# For packages, groups and modules.
	fun import_edge(from, to: DotNode): DotEdge do
		var edge = new DotEdge(from, to)
		edge["arrowhead"] = "open"
		edge["style"] = "dashed"
		return edge
	end

	# Draw an extend edge
	#
	# For classes and classdefs.
	fun extend_edge(from, to: DotNode): DotEdge do
		var edge = new DotEdge(from, to)
		edge["arrowhead"] = "empty"
		return edge
	end

	# Draw an implement edge
	#
	# For classes and classdefs.
	fun implement_edge(from, to: DotNode): DotEdge do
		var edge = new DotEdge(from, to)
		edge["arrowhead"] = "empty"
		edge["style"] = "dashed"
		return edge
	end

	# Create a `...` node
	fun dotdotdot(id: String): DotNode do
		var node = new DotNode(id)
		node["label"] = "..."
		node["shape"] = "none"
		return node
	end

	# MEntities pointing to a `...` node
	var to_dots = new HashMap[MEntity, DotElement]

	# Draw a link from `mentity` to a `...` node
	fun to_dotdotdot(mentity: MEntity): DotEdge do
		var nto = draw_node(mentity)
		var dots = to_dots.get_or_null(mentity)
		if dots == null then
			dots = dotdotdot("{nto.id}...")
			to_dots[mentity] = dots
		end
		add dots
		var edge = new DotEdge(nto, dots)
		add edge
		return edge
	end

	# MEntities pointed by a `...` node
	private var from_dots = new HashMap[MEntity, DotElement]

	# Draw a link from a `...` node to a `mentity`
	fun from_dotdotdot(mentity: MEntity): DotEdge do
		var nfrom = draw_node(mentity)
		var dots = from_dots.get_or_null(mentity)
		if dots == null then
			dots = dotdotdot("...{nfrom.id}")
			from_dots[mentity] = dots
		end
		add dots
		var edge = new DotEdge(dots, nfrom)
		add edge
		return edge
	end
end

redef class MEntity

	# Unique id for `self`
	fun dot_id: String do return full_name.escape_to_dot

	# URL used to produce link
	#
	# If `null` no link is produced.
	# Redefine this property depending on your client.
	var dot_url: nullable String = null

	# Return `self` as it's UML representation
	fun to_uml_string(diagram: UMLDiagram): Writable do
		var t = new Template
		t.add public_visibility.to_uml(diagram)
		t.add name.escape_to_dot
		return t
	end

	# Create a DotNode from `self`
	fun to_uml_node(diagram: UMLDiagram): DotNode do
		var node = new DotNode(dot_id)
		node["shape"] = "none"
		node["margin"] = "0"
		node["style"] = "filled"
		if not diagram.options.no_colors then
			node["fontcolor"] = diagram.options.color_font
			node["color"] = diagram.options.color_border
		end
		return node
	end

	# Create a DotCluster from `self`
	fun to_uml_cluster(diagram: UMLDiagram): DotCluster do
		var cluster = new DotCluster("cluster_{dot_id}", "subgraph")
		if dot_url != null then
			cluster["href"] = dot_url.as(not null)
		end
		cluster["label"] = dot_id
		cluster["labelloc"] = "b"
		cluster["fontsize"] = 10
		cluster["fontname"] = "helvetica"
		return cluster
	end
end

redef class MPackage

	redef fun to_uml_node(diagram) do
		var node = super
		var mgroups = collect_mgroups(diagram.filter)
		node["shape"] = "tab"
		node["label"] = diagram.package_label(self, mgroups.to_a)
		if not diagram.options.no_colors then
			node["fillcolor"] = diagram.options.color_packages
		end
		return node
	end

	redef fun to_uml_cluster(diagram) do
		var cluster = super
		if not diagram.options.no_colors then
			cluster["bgcolor"] = diagram.options.color_packages
		end
		return cluster
	end
end

redef class MGroup
	redef fun to_uml_node(diagram) do
		var node = super
		var mmodules = collect_mmodules(diagram.filter)
		node["shape"] = "folder"
		node["label"] = diagram.package_label(self, mmodules.to_a)
		if not diagram.options.no_colors then
			node["fillcolor"] = diagram.options.color_groups
		end
		return node
	end

	redef fun to_uml_cluster(diagram) do
		var cluster = super
		if not diagram.options.no_colors then
			cluster["bgcolor"] = diagram.options.color_groups
		end
		return cluster
	end
end

redef class MModule
	redef fun to_uml_node(diagram) do
		var node = super
		var mclasses = collect_local_mclasses(diagram.filter)
		node["shape"] = "note"
		node["label"] = diagram.package_label(self, mclasses.to_a)
		if not diagram.options.no_colors then
			node["fillcolor"] = diagram.options.color_modules
		end
		return node
	end

	redef fun to_uml_cluster(diagram) do
		var cluster = super
		if not diagram.options.no_colors then
			cluster["bgcolor"] = diagram.options.color_modules
		end
		return cluster
	end
end

redef class MClass
	redef fun to_uml_node(diagram) do
		var node = super
		var vtypes = collect_intro_vts(diagram.filter).to_a
		var mattributes = collect_intro_mattributes(diagram.filter).to_a
		var mmethods = collect_intro_mmethods(diagram.filter).to_a
		# mmethods.add_all collect_intro_inits(diagram.filter)
		node["label"] = diagram.class_label(self.intro, vtypes, mattributes, mmethods)
		if not diagram.options.no_colors then
			if visibility == private_visibility then
				node["color"] = diagram.options.color_private
			else
				node["color"] = diagram.options.color_public
			end
			node["fillcolor"] = diagram.options.color_classes
		else
			node["fillcolor"] = "white"
		end
		return node
	end
end

redef class MClassDef
	redef fun to_uml_node(diagram) do
		var node = super
		var vtypes = collect_mtypedefs(diagram.filter).to_a
		var mattributes = collect_mattributedefs(diagram.filter).to_a
		var mmethods = collect_mmethoddefs(diagram.filter).to_a
		node["label"] = diagram.class_label(self, vtypes, mattributes, mmethods)
		if not diagram.options.no_colors then
			if visibility == private_visibility then
				node["color"] = diagram.options.color_private
			else
				node["color"] = diagram.options.color_public
			end
			node["fillcolor"] = diagram.options.color_classes
		end
		return node
	end
end

redef class MProperty
	redef fun to_uml_string(diagram) do
		return intro.to_uml_string(diagram)
	end
end

redef class MPropDef
	redef fun to_uml_string(diagram) do
		var t = new Template
		if diagram.options.show_visibility then
			t.add visibility.to_uml(diagram)
			t.add " "
		end
		return t
	end
end

redef class MMethodDef
	redef fun to_uml_string(diagram) do
		var t = super.as(Template)
		if is_abstract then
			t.add "<I>{name.escape_to_dot}</I>"
		else
			t.add name.escape_to_dot
		end
		var msignature = msignature
		if msignature != null then
			t.add msignature.to_uml_string(diagram)
		end
		return t
	end
end

redef class MAttributeDef
	redef fun to_uml_string(diagram) do
		var t = super.as(Template)

		var name = self.name
		if name.has_prefix("_") then name = name.substring(1, name.length)
		t.add name.escape_to_dot

		if diagram.options.show_types then
			t.add ": "
			t.add static_mtype.as(not null).to_uml_string(diagram)
		end
		return t
	end
end

redef class MVirtualTypeDef
	redef fun to_uml_string(diagram) do
		var t = super.as(Template)
		t.add name.escape_to_dot
		if diagram.options.show_types then
			t.add ": "
			t.add bound.as(not null).to_uml_string(diagram)
		end
		return t
	end
end

redef class MType
	#
	fun to_uml_signature(diagram: UMLDiagram): Writable do
		return to_uml_string(diagram)
	end
end

redef class MSignature
	redef fun to_uml_string(diagram) do
		var t = new Template
		t.add "("
		for i in [0..mparameters.length[ do
			if i > 0 then t.add ", "
			t.add mparameters[i].name.escape_to_dot
			if diagram.options.show_types then
				t.add ": "
				t.add mparameters[i].mtype.to_uml_string(diagram)
			end
		end
		t.add ")"
		var return_mtype = self.return_mtype
		if diagram.options.show_types and return_mtype != null then
			t.add ": "
			t.add return_mtype.to_uml_signature(diagram)
		end
		return t
	end
end

redef class MClassType
	redef fun to_uml_string(diagram) do
		return name.escape_to_dot
	end
end

redef class MParameterType
	redef fun to_uml_string(diagram) do
		var t = new Template
		t.add name.escape_to_dot
		if diagram.options.show_types then
			t.add ": "
			t.add mclass.intro.bound_mtype.arguments[rank].to_uml_string(diagram)
		end
		return t
	end

	redef fun to_uml_signature(diagram) do
		return name.escape_to_dot
	end
end

redef class MVirtualType
	redef fun to_uml_string(diagram) do
		return name.escape_to_dot
	end
end

redef class MNullableType
	redef fun to_uml_string(diagram) do
		var t = new Template
		t.add "nullable "
		t.add mtype.to_uml_string(diagram)
		return t
	end
end

redef class MClassKind

	# Returns the UML representation of `self`
	fun to_uml: Writable do
		if self == abstract_kind then
			return "<<abstract>>".escape_to_dot
		else if self == interface_kind then
			return "<<interface>>".escape_to_dot
		else if self == enum_kind then
			return "<<enum>>".escape_to_dot
		else if self == extern_kind then
			return "<<extern>>".escape_to_dot
		else
			return ""
		end
	end
end

redef class MVisibility

	# Returns the visibility as a UML string
	fun to_uml(diagram: UMLDiagram): Writable do
		var t = new Template
		if self == private_visibility then
			if not diagram.options.no_colors then t.add "<FONT COLOR=\"{diagram.options.color_private}\">"
			t.add "-"
		else if self == protected_visibility then
			if not diagram.options.no_colors then t.add "<FONT COLOR=\"{diagram.options.color_protected}\">"
			t.add "#"
		else
			if not diagram.options.no_colors then t.add "<FONT COLOR=\"{diagram.options.color_public}\">"
			t.add "+"
		end
		if not diagram.options.no_colors then t.add "</FONT>"
		return t
	end
end

redef class Text
	redef fun escape_to_dot do
		var res = super
		res = res.replace("&", "&amp;")
		res = res.replace("\\<", "&lt;")
		res = res.replace("\\>", "&gt;")
		return res
	end
end
