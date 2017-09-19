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

# Exposes the base class for UML generation of a `Model`
module uml

import toolcontext
import model::model_collect
import dot

# UML model builder.
class UMLModel

	# Model view
	var view: ModelView

	# Main module used for linearization.
	var mainmodule: MModule

	# Show class attributes
	var show_attributes = true

	# Show class methods
	var show_methods = true

	# Show classes and properties visibility
	var show_visibility = true

	# Show types for attributes, methods and in signatures
	var show_types = true

	# Stereotypes to display in italic
	var special_kinds: Array[MClassKind] = [abstract_kind, interface_kind, enum_kind, extern_kind]

	# Use colors in output?
	var show_colors = false

	# Color for the border of a public class or text of a property
	#
	# Defaults to a shade of green
	var public_color = "#58B26A"

	# Color for the border of a private class or text of a property
	#
	# Defaults to a shade of orange
	var protected_color = "orange"

	# Color for the border of a private class or text of a property
	#
	# Defaults to a shade of red
	var private_color = "#B24758"
end

#
abstract class UMLDiagram
	super UMLModel

	# DotGraph under construction
	private var graph = new DotGraph("G", "digraph")

	init do
		graph["compound"] = "true"
		graph["rankdir"] = "BT"
		graph["ranksep"] = 0.3
		graph["nodesep"] = 0.3

		graph.nodes_attrs["margin"] = 0.1
		graph.nodes_attrs["width"] = 0
		graph.nodes_attrs["height"] = 0
		graph.nodes_attrs["fontsize"] = 10
		graph.nodes_attrs["fontname"] = "helvetica"
	end

	# Drawn nodes by their ids
	private var nodes = new HashMap[String, DotNode]

	# Render `self` to dot
	fun to_dot: Writable do return graph.to_dot
end

# An UML class diagram convertible to dot
class UMLClassDiagram
	super UMLDiagram

	# Draw a mmodule if not yet drawn
	fun add_mmodule(mmodule: MModule): DotCluster do
		var id = "cluster{mmodule.full_name.escape_to_dot}"
		print id
		print nodes.has_key(id)
		if nodes.has_key(id) then return nodes[id].as(DotCluster)

		var cluster = new DotCluster(id, "subgraph")
		cluster["label"] = mmodule.full_name.escape_to_dot
		cluster["labelloc"] = "b"
		nodes[id] = cluster
		return cluster
	end

	# Draw a mclass if not yet drawn
	fun add_mclass(mclass: MClass): DotNode do
		var id = mclass.full_name.escape_to_dot
		if nodes.has_key(id) then return nodes[id]

		var node = new DotNode(id)
		node["label"] = mclass.to_uml(self).write_to_string
		node["shape"] = "none"
		node["margin"] = 0
		if show_colors then
			if mclass.visibility == private_visibility then
				node["color"] = private_color
			else
				node["color"] = public_color
			end
		end
		nodes[id] = node
		return node
	end

	# Draw an extends or implements edge between `from` and `to`
	fun inheritance_edge(from, to: MClass): DotEdge do
		var nfrom = add_mclass(from)
		var nto = add_mclass(to)
		var edge = new DotEdge(nfrom, nto)
		edge["arrowhead"] = "empty"
		if from.kind != interface_kind and to.kind == interface_kind then
			edge["style"] = "dashed"
		end
		return edge
	end

	# Draw `mclasses`
	fun draw(mclasses: Collection[MClass]): Writable do
		for mclass in mclasses do
			var nmodule = add_mmodule(mclass.intro_mmodule)
			nmodule.add add_mclass(mclass)
			for i in mclass.collect_parents(view) do
				if not mclasses.has(i) then continue
				nmodule.add inheritance_edge(mclass, i)
			end
			graph.add nmodule
		end
		return graph.to_dot
	end
end

# An UML class definition diagram convertible to dot
class UMLClassDefDiagram
	super UMLDiagram

	# Draw a mmodule if not yet drawn
	fun add_mmodule(mmodule: MModule): DotCluster do
		var id = "cluster{mmodule.full_name.escape_to_dot}"
		print id
		print nodes.has_key(id)
		if nodes.has_key(id) then return nodes[id].as(DotCluster)

		var cluster = new DotCluster(id, "subgraph")
		cluster["label"] = mmodule.full_name.escape_to_dot
		cluster["labelloc"] = "b"
		nodes[id] = cluster
		return cluster
	end

	# Draw a mclass if not yet drawn
	fun add_mclassdef(mclassdef: MClassDef): DotNode do
		var id = mclassdef.full_name.escape_to_dot
		if nodes.has_key(id) then return nodes[id]

		var node = new DotNode(id)
		node["label"] = mclassdef.to_uml(self).write_to_string
		node["shape"] = "none"
		node["margin"] = 0
		if show_colors then
			if mclassdef.visibility == private_visibility then
				node["color"] = private_color
			else
				node["color"] = public_color
			end
		end
		nodes[id] = node
		return node
	end

	# Draw an extends or implements edge between `from` and `to`
	fun inheritance_edge(from, to: MClassDef): DotEdge do
		var nfrom = add_mclassdef(from)
		var nto = add_mclassdef(to)
		var edge = new DotEdge(nfrom, nto)
		edge["arrowhead"] = "empty"
		if from.mclass.kind != interface_kind and to.mclass.kind == interface_kind then
			edge["style"] = "dashed"
		end
		return edge
	end

	# Draw `mclassdefs`
	fun draw(mclassdefs: Collection[MClassDef]): Writable do
		for mclassdef in mclassdefs do
			var nmodule = add_mmodule(mclassdef.mmodule)
			nmodule.add add_mclassdef(mclassdef)
			for i in mclassdef.collect_parents(view) do
				if not mclassdefs.has(i) then continue
				nmodule.add inheritance_edge(mclassdef, i)
			end
			graph.add nmodule
		end
		return graph.to_dot
	end
end

redef class MEntity
	# Generates a dot-compatible `Writable` UML Class diagram from `self`
	fun to_uml(model: UMLModel): Writable is abstract
end

redef class MClass
	private fun to_uml_header(model: UMLModel): Writable do
		var t = new Template
		t.add "<TR><TD>"
		if model.show_colors then
			if visibility == public_visibility then
				t.add "<FONT COLOR=\"{model.public_color}\">"
			else if visibility == protected_visibility then
				t.add "<FONT COLOR=\"{model.protected_color}\">"
			else if visibility == private_visibility then
				t.add "<FONT COLOR=\"{model.private_color}\">"
			end
		end
		if model.special_kinds.has(kind) then
			t.add "{kind.to_uml}<BR/><I>"
		end
		t.add "<B>"
		if model.show_visibility and visibility == private_visibility then
			t.add visibility.to_uml
			t.add " "
		end
		t.add name.escape_to_dot
		if arity > 0 then
			t.add "["
			for i in [0..mparameters.length[ do
				if i > 0 then t.add ", "
				t.add mparameters[i].to_uml(model)
			end
			t.add "]"
		end
		t.add "</B>"
		if model.special_kinds.has(kind) then
			t.add "</I>"
		end
		if model.show_colors then
			t.add "</FONT>"
		end
		t.add "</TD></TR>"
		return t
	end

	redef fun to_uml(model) do
		var t = new Template
		t.add "<<TABLE BORDER=\"0\" CELLBORDER=\"1\" CELLPADDING=\"2\" CELLSPACING=\"0\">"
		t.add to_uml_header(model)
		if model.show_attributes then
			var mattributes = collect_intro_mattributes(model.view)
			if mattributes.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in mattributes do
					t.add i.to_uml(model)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		if model.show_methods then
			var mmethods = collect_intro_mmethods(model.view)
			if mmethods.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in mmethods do
					t.add i.to_uml(model)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		t.add "</TABLE>>"
		return t
	end
end

redef class MClassDef

	redef fun to_uml(model) do
		var t = new Template
		t.add "<<TABLE BORDER=\"0\" CELLBORDER=\"1\" CELLPADDING=\"2\" CELLSPACING=\"0\">"
		t.add mclass.to_uml_header(model)
		if model.show_attributes then
			var mattrs = collect_mattributedefs(model.view)
			if mattrs.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in mattrs do
					t.add i.to_uml(model)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		if model.show_methods then
			var mmethods = collect_mmethoddefs(model.view)
			if mmethods.not_empty then
				t.add "<TR><TD ALIGN=\"LEFT\" BALIGN=\"LEFT\">"
				for i in mmethods do
					t.add i.to_uml(model)
					t.add "<BR/>"
				end
				t.add "</TD></TR>"
			end
		end
		t.add "</TABLE>>"
		return t
	end
end

redef class MProperty
	redef fun to_uml(model) do return intro.to_uml(model)
end

redef class MMethodDef
	redef fun to_uml(model) do
		var tpl = new Template
		if model.show_colors then
			if visibility == public_visibility then
				tpl.add "<FONT COLOR=\"{model.public_color}\">"
			else if visibility == protected_visibility then
				tpl.add "<FONT COLOR=\"{model.protected_color}\">"
			else if visibility == private_visibility then
				tpl.add "<FONT COLOR=\"{model.private_color}\">"
			end
		end
		if model.show_visibility then
			tpl.add visibility.to_uml
			tpl.add " "
		end
		tpl.add name.escape_to_dot
		var msignature = msignature
		if msignature != null then
			tpl.add msignature.to_uml(model)
		end
		if model.show_colors then
			tpl.add "</FONT>"
		end
		return tpl
	end
end

redef class MType
	# Special case for generic signatures
	#
	# We don't want the signature to display the bound of generic types even if
	# `Model.show_types == true`.
	#
	# See `MParameterType::to_uml_signature`.
	fun to_uml_signature(model: UMLModel): Writable do return to_uml(model)
end

redef class MSignature
	redef fun to_uml(model) do
		var t = new Template
		t.add "("
		for i in [0..mparameters.length[ do
			if i > 0 then t.add ", "
			t.add mparameters[i].name.escape_to_dot
			if model.show_types then
				t.add ": "
				t.add mparameters[i].mtype.to_uml(model)
			end
		end
		t.add ")"
		var return_mtype = self.return_mtype
		if model.show_types and return_mtype != null then
			t.add ": "
			t.add return_mtype.to_uml_signature(model)
		end
		return t
	end
end

redef class MAttributeDef
	redef fun to_uml(model) do
		var tpl = new Template
		if model.show_colors then
			if visibility == public_visibility then
				tpl.add "<FONT COLOR=\"{model.public_color}\">"
			else if visibility == protected_visibility then
				tpl.add "<FONT COLOR=\"{model.protected_color}\">"
			else if visibility == private_visibility then
				tpl.add "<FONT COLOR=\"{model.private_color}\">"
			end
		end
		if model.show_visibility then
			tpl.add visibility.to_uml
			tpl.add " "
		end
		tpl.add name.escape_to_dot
		if model.show_types then
			tpl.add ": "
			tpl.add static_mtype.as(not null).to_uml(model)
		end
		if model.show_colors then
			tpl.add "</FONT>"
		end
		return tpl
	end
end

redef class MVisibility
	# Returns the visibility as a UML token
	#
	#    assert public_visibility.to_uml == "+"
	#    assert private_visibility.to_uml == "-"
	fun to_uml: Writable do
		if self == private_visibility then
			return "-"
		else if self == protected_visibility then
			return "#"
		else if self == public_visibility then
			return "+"
		else
			return "+"
		end
	end
end

redef class MClassType
	redef fun to_uml(model) do
		return name
	end
end

redef class MParameterType
	redef fun to_uml(model) do
		var t = new Template
		t.add name.escape_to_dot
		if model.show_types then
			t.add ": "
			t.add mclass.intro.bound_mtype.arguments[rank].to_uml(model)
		end
		return t
	end

	redef fun to_uml_signature(model) do return name.escape_to_dot
end

redef class MVirtualType
	redef fun to_uml(model) do
		return name
	end
end

redef class MNullableType
	redef fun to_uml(model) do
		var t = new Template
		t.add "nullable "
		t.add mtype.to_uml(model)
		return t
	end
end

redef class MClassKind

	# Returns the UML representation of `self`
	fun to_uml: Writable do
		if self == abstract_kind then
			return "&lt;&lt;abstract&gt;&gt;"
		else if self == interface_kind then
			return "&lt;&lt;interface&gt;&gt;"
		else if self == enum_kind then
			return "&lt;&lt;enum&gt;&gt;"
		else if self == extern_kind then
			return "&lt;&lt;extern&gt;&gt;"
		else
			return ""
		end
	end
end

redef class Text
	redef fun escape_to_dot do
		var res = super
		res = res.replace("\\<", "&lt;")
		res = res.replace("\\>", "&gt;")
		return res
	end
end
