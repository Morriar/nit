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

module api_uml

import api_model
import base64

redef class APIRouter
	redef init do
		super
		use("/uml", new APIUML(config))
	end
end

class APIUML
	super APIHandler

	redef fun get(req, res) do
		var options = new UMLDiagramOptions

		options.center = config.model.mentity_by_full_name("core::Array")
		options.parents_depth = 3
		options.children_depth = 3
		options.max_parents = 10
		options.max_children = 10
		options.output_format = "svg"
		res.json(options, plain = false)
	end

	redef fun post(req, res) do
		var deser = new UMLDeserializer(req.body, config.model)
		var options = deser.deserialize
		if not options isa UMLDiagramOptions then
			print deser.errors
			res.error 400
			return
		end

		var center = options.center

		var diagram = new UMLDiagram(config.model, config.mainmodule, config.filter, options)
		if options.kind == "class" then
			diagram.draw_class_diagram(center)
		else
			diagram.draw_package_diagram(center)
		end

		if options.output_format == "dot" then
			res.send diagram.to_dot
		else
			res.send diagram.to_svg
		end
	end
end

redef class MEntity
	redef fun dot_url do return web_url.escape_to_dot
end

redef class UMLDiagramOptions
	serialize

	# TODO
	var output_format = "svg"

	# TODO
	var kind = "package"

	# TODO
	var min_visibility: MVisibility = private_visibility

	redef fun core_serialize_to(v) do
		var center = self.center
		if center != null then
			v.serialize_attribute("center", center.full_name)
		end

		v.serialize_attribute("output_format", output_format)
		v.serialize_attribute("kind", kind)
		v.serialize_attribute("min_visibility", min_visibility.to_s)

		v.serialize_attribute("parents_depth", parents_depth)
		v.serialize_attribute("children_depth", children_depth)
		v.serialize_attribute("max_parents", max_parents)
		v.serialize_attribute("max_children", max_children)

		v.serialize_attribute("ortho_edges", ortho_edges)

		v.serialize_attribute("clusterize_groups", clusterize_groups)
		v.serialize_attribute("clusterize_modules", clusterize_modules)
		v.serialize_attribute("clusterize_classes", clusterize_classes)
		v.serialize_attribute("compact_groups", compact_groups)
		v.serialize_attribute("compact_modules", compact_modules)

		v.serialize_attribute("show_groups", show_groups)
		v.serialize_attribute("show_modules", show_modules)
		v.serialize_attribute("show_classes", show_classes)
		v.serialize_attribute("show_vtypes", show_vtypes)
		v.serialize_attribute("show_attributes", show_attributes)
		v.serialize_attribute("show_methods", show_methods)
		v.serialize_attribute("show_types", show_types)
		v.serialize_attribute("show_visibility", show_visibility)

		v.serialize_attribute("font_size", font_size)
		v.serialize_attribute("font_name", font_name)


		v.serialize_attribute("no_colors", no_colors)
		v.serialize_attribute("color_highlight", color_highlight)
		v.serialize_attribute("color_public", color_public)
		v.serialize_attribute("color_protected", color_protected)
		v.serialize_attribute("color_private", color_private)
		v.serialize_attribute("color_font", color_font)
		v.serialize_attribute("color_border", color_border)
		v.serialize_attribute("color_diagram", color_diagram)
		v.serialize_attribute("color_packages", color_packages)
		v.serialize_attribute("color_groups", color_groups)
		v.serialize_attribute("color_modules", color_modules)
		v.serialize_attribute("color_classes", color_classes)
	end
end

private class UMLDeserializer
	super JsonDeserializer

	var model: Model

	redef fun deserialize_class(name) do
		if name == "UMLDiagramOptions" then
			var options = new UMLDiagramOptions

			var center = deserialize_attribute("center")
			if center isa String then
				options.center = model.mentity_by_full_name(center)
			end

			var format = deserialize_attribute("output_format")
			if format isa String then options.output_format = format

			var kind = deserialize_attribute("kind")
			if kind isa String then options.kind = kind

			var min_visibility = deserialize_attribute("min_visibility")
			if min_visibility == "public" then
				options.min_visibility = public_visibility
			else if min_visibility == "protected" then
				options.min_visibility = protected_visibility
			end

			var parents_depth = deserialize_attribute("parents_depth")
			if parents_depth isa Int then options.parents_depth = parents_depth
			var children_depth = deserialize_attribute("children_depth")
			if children_depth isa Int then options.children_depth = children_depth

			var max_parents = deserialize_attribute("max_parents")
			if max_parents isa Int then options.max_parents = max_parents
			var max_children = deserialize_attribute("max_children")
			if max_children isa Int then options.max_children = max_children

			var ortho_edges = deserialize_attribute("ortho_edges")
			if ortho_edges isa Bool then options.ortho_edges = ortho_edges

			var clusterize_groups = deserialize_attribute("clusterize_groups")
			if clusterize_groups isa Bool then options.clusterize_groups = clusterize_groups
			var clusterize_modules = deserialize_attribute("clusterize_modules")
			if clusterize_modules isa Bool then options.clusterize_modules = clusterize_modules
			var clusterize_classes = deserialize_attribute("clusterize_classes")
			if clusterize_classes isa Bool then options.clusterize_classes = clusterize_classes
			var compact_groups = deserialize_attribute("compact_groups")
			if compact_groups isa Bool then options.compact_groups = compact_groups
			var compact_modules = deserialize_attribute("compact_modules")
			if compact_modules isa Bool then options.compact_modules = compact_modules

			var show_groups = deserialize_attribute("show_groups")
			if show_groups isa Bool then options.show_groups = show_groups
			var show_modules = deserialize_attribute("show_modules")
			if show_modules isa Bool then options.show_modules = show_modules
			var show_classes = deserialize_attribute("show_classes")
			if show_classes isa Bool then options.show_classes = show_classes
			var show_vtypes = deserialize_attribute("show_vtypes")
			if show_vtypes isa Bool then options.show_vtypes = show_vtypes
			var show_attributes = deserialize_attribute("show_attributes")
			if show_attributes isa Bool then options.show_attributes = show_attributes
			var show_methods = deserialize_attribute("show_methods")
			if show_methods isa Bool then options.show_methods = show_methods
			var show_types = deserialize_attribute("show_types")
			if show_types isa Bool then options.show_types = show_types
			var show_visibility = deserialize_attribute("show_visibility")
			if show_visibility isa Bool then options.show_visibility = show_visibility

			var font_size = deserialize_attribute("font_size")
			if font_size isa Int then options.font_size = font_size
			var font_name = deserialize_attribute("font_name")
			if font_name isa String then options.font_name = font_name

			var no_colors = deserialize_attribute("no_colors")
			if no_colors isa Bool then options.no_colors = no_colors
			var color_highlight = deserialize_attribute("color_highlight")
			if color_highlight isa String then options.color_highlight = color_highlight
			var color_public = deserialize_attribute("color_public")
			if color_public isa String then options.color_public = color_public
			var color_protected = deserialize_attribute("color_protected")
			if color_protected isa String then options.color_protected = color_protected
			var color_private = deserialize_attribute("color_private")
			if color_private isa String then options.color_private = color_private
			var color_font = deserialize_attribute("color_font")
			if color_font isa String then options.color_font = color_font
			var color_border = deserialize_attribute("color_border")
			if color_border isa String then options.color_border = color_border
			var color_diagram = deserialize_attribute("color_diagram")
			if color_diagram isa String then options.color_diagram = color_diagram
			var color_packages = deserialize_attribute("color_packages")
			if color_packages isa String then options.color_packages = color_packages
			var color_groups = deserialize_attribute("color_groups")
			if color_groups isa String then options.color_groups = color_groups
			var color_modules = deserialize_attribute("color_modules")
			if color_modules isa String then options.color_modules = color_modules
			var color_classes = deserialize_attribute("color_classes")
			if color_classes isa String then options.color_classes = color_classes

			return options
		end
		return super
	end
end
