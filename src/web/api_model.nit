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

module api_model

import web_base
import api_grouping
import highlight
import uml
import model::model_index

redef class APIRouter
	redef init do
		super
		use("/list", new APIList(config))
		use("/search", new APISearch(config))
		use("/random", new APIRandom(config))
		use("/entity/:id", new APIEntity(config))
		use("/entity/:id/doc", new APIEntityDoc(config))
		use("/code/:id", new APIEntityCode(config))
		use("/uml/:id", new APIEntityUML(config))
		use("/linearization/:id", new APIEntityLinearization(config))
		use("/defs/:id", new APIEntityDefs(config))
		use("/inheritance/:id", new APIEntityInheritance(config))
	end
end

# List all mentities.
#
# MEntities can be filtered on their kind using the `k` parameter.
# Allowed kinds are `package`, `group`, `module`, `class`, `classdef`, `property`, `propdef`.
#
# List size can be limited with the `n` parameter.
#
# Example: `GET /list?k=module?n=10`
class APIList
	super APIHandler

	# List mentities depending on the `k` kind parameter.
	fun list_mentities(req: HttpRequest): Array[MEntity] do
		var k = req.string_arg("k")
		var mentities = new Array[MEntity]
		if k == "package" then
			for mentity in config.view.mpackages do mentities.add mentity
		else if k == "group" then
			for mentity in config.view.mgroups do mentities.add mentity
		else if k == "module" then
			for mentity in config.view.mmodules do mentities.add mentity
		else if k == "class" then
			for mentity in config.view.mclasses do mentities.add mentity
		else if k == "classdef" then
			for mentity in config.view.mclassdefs do mentities.add mentity
		else if k == "property" then
			for mentity in config.view.mproperties do mentities.add mentity
		else if k == "propdef" then
			for mentity in config.view.mpropdefs do mentities.add mentity
		else
			for mentity in config.view.mentities do mentities.add mentity
		end
		return mentities
	end

	fun group_mentities(req: HttpRequest, mentities: Array[MEntity]): Array[DocGroup] do
		var req_group = req.string_arg("group_by")
		var grouper: DocGroupBuilder
		if req_group == "none" then
			grouper = new NoneGroupBuilder
		else if req_group == "kind" then
			grouper = new KindGroupBuilder
		else if req_group == "visibility" then
			grouper = new VisibilityGroupBuilder
		else if req_group == "intro-redef" then
			grouper = new IntroRedefGroupBuilder
		else if req_group == "package" then
			grouper = new PackageGroupBuilder(config.view)
		else if req_group == "module" then
			grouper = new ModuleGroupBuilder(config.view)
		else if req_group == "return" then
			grouper = new ReturnGroupBuilder
		else
			grouper = new KindGroupBuilder
		end
		grouper.group_mentities(mentities)
		return grouper.groups
	end

	# Filter mentities based on the config view filters
	fun filter_mentities(req: HttpRequest, mentities: Array[MEntity], context: nullable MEntity): Array[MEntity] do
		var filters = config.view.filters

		var req_filters = req.string_arg("filters")
		if req_filters != null then
			filters = new ModelFilters.from_string(context, req_filters)
		else if context != null then
			filters = new ModelFilters.from_string(context, context.default_filters.join(","))
		end

		var res = new Array[MEntity]
		for mentity in mentities do
			if config.view.accept_mentity(mentity, filters) then res.add mentity
		end
		return res
	end

	# Sort mentities by lexicographic order
	#
	# TODO choose order from request
	fun sort_mentities(req: HttpRequest, groups: Array[DocGroup]): Array[DocGroup] do
		var sorter = new MEntityNameComparator
		for group in groups do
			sorter.sort(group.mentities)
		end
		return groups
	end

	# Limit mentities depending on the `n` parameter.
	fun limit_mentities(req: HttpRequest, groups: Array[DocGroup]): Array[DocGroup] do
		var n = req.int_arg("n")
		if n == null then return groups

		var res = new Array[DocGroup]
		var limit = n
		for group in groups do
			if group.mentities.length > limit then
				group.mentities = group.mentities.sub(0, limit)
			end
			limit -= group.mentities.length
			if group.mentities.not_empty then res.add group
		end
		return res
	end

	redef fun get(req, res) do
		var mentities = list_mentities(req)
		mentities = filter_mentities(req, mentities)
		var groups = [new DocGroup.with_mentities(null, null, mentities)]
		groups = sort_mentities(req, groups)
		groups = limit_mentities(req, groups)
		res.api_json(req, new JsonArray.from(groups))
	end
end

# Search mentities from a query string.
#
# Example: `GET /search?q=Arr`
class APISearch
	super APIList

	redef fun get(req, res) do
		var query = req.string_arg("q")
		if query == null then
			res.api_error(400, "Missing search string")
			return
		end
		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var mentities = search(query, limit)
		mentities = filter_mentities(req, mentities)
		res.api_json(req, paginate(new JsonArray.from(mentities), mentities.length, page, limit))
	end

	fun search(query: String, limit: nullable Int): Array[MEntity] do
		return config.view.find(query)
	end
end

# Return a random list of MEntities.
#
# Example: `GET /random?n=10&k=module`
class APIRandom
	super APIList

	# Randomize mentities order.
	fun randomize_mentities(req: HttpRequest, groups: Array[DocGroup]): Array[DocGroup] do
		groups.shuffle
		for group in groups do
			group.mentities.shuffle
		end
		return groups
	end

	redef fun get(req, res) do
		var mentities = list_mentities(req)
		mentities = filter_mentities(req, mentities)
		var groups = [new DocGroup.with_mentities(null, null, mentities)]
		groups = randomize_mentities(req, groups)
		groups = limit_mentities(req, groups)
		res.api_json(req, new JsonArray.from(groups))
	end
end

# Return the JSON representation of a MEntity.
#
# Example: `GET /entity/core::Array`
class APIEntity
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		res.api_full_json(req, mentity)
	end
end

# Return the full MDoc of a MEntity.
#
# Example: `GET /entity/core::Array/doc`
class APIEntityDoc
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return

		var obj = new JsonObject
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			obj["documentation"] = mdoc.html_documentation.write_to_string
			obj["location"] = mdoc.location
		end
		res.api_json(req, obj)
	end
end

# List ancestors, parents, child and descendants of MEntity
#
# Example: `GET /entity/core::Array/inheritance`
class APIEntityInheritance
	super APIList

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return

		var pe = mentity.hierarchy_poset(config.view)[mentity]
		var parents = filter_mentities(req, pe.direct_greaters.to_a)
		var children = filter_mentities(req, pe.direct_smallers.to_a)

		var groups = new Array[DocGroup]
		if parents.not_empty then
			groups.add new DocGroup.with_mentities("parents", "Parents", parents)
		end
		if children.not_empty then
			groups.add new DocGroup.with_mentities("children", "Children", children)
		end
		groups = sort_mentities(req, groups)
		groups = limit_mentities(req, groups)
		res.api_json(req, new JsonArray.from(groups))
	end
end

# Linearize super definitions of a MClassDef or a MPropDef if any.
#
# Example: `GET /entity/core::Array/linearization`
class APIEntityLinearization
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var lin = mentity.collect_linearization(config.mainmodule)
		if lin == null then
			res.api_error(404, "No linearization for mentity `{mentity.full_name}`")
			return
		end
		res.api_json(req, new JsonArray.from(lin.to_a))
	end
end

# List definitions of a MEntity.
#
# Example: `GET /defs/core::Array`
class APIEntityDefs
	super APIList

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var mentities = new Array[MEntity]
		if mentity isa MPackage then
			mentities.add_all mentity.collect_mgroups(config.view)
		else if mentity isa MGroup then
			mentities.add_all mentity.collect_mgroups(config.view)
			mentities.add_all mentity.collect_mmodules(config.view)
		else if mentity isa MModule then
			var mclasses = new HashSet[MClass]
			# Collect intros
			mentities.add_all mentity.collect_intro_mclassdefs(config.view)
			# Collect redefs
			for mclassdef in mentity.collect_redef_mclassdefs(config.view) do
				mclasses.add mclassdef.mclass
				mentities.add mclassdef
			end
			# Collect imported
			for mclass in mentity.collect_imported_mclasses(config.view) do
				if mclasses.has(mclass) then continue
				mentities.add mclass.intro
			end
		else if mentity isa MClass then
			var mprops = new HashSet[MProperty]
			# Collect intros
			mentities.add_all mentity.collect_intro_mpropdefs(config.view)
			# Collect redefs
			for mpropdef in mentity.collect_redef_mpropdefs(config.view) do
				mprops.add mpropdef.mproperty
				mentities.add mpropdef
			end
			# Collect inherited
			for mprop in mentity.collect_inherited_mproperties(config.view) do
				if mprops.has(mprop) then continue
				mentities.add mprop.intro
			end
		else if mentity isa MClassDef then
			mentities.add_all mentity.mpropdefs
		else if mentity isa MProperty then
			mentities.add_all mentity.mpropdefs
		else
			res.api_error(404, "No definition list for mentity `{mentity.full_name}`")
			return
		end
		mentities = filter_mentities(req, mentities, mentity)
		var groups = group_mentities(req, mentities)
		groups = sort_mentities(req, groups)
		groups = limit_mentities(req, groups)
		res.api_json(req, new JsonArray.from(groups))
	end
end

abstract class SVGHandler
	super APIHandler

	# Render a `dot` string as a svg image.
	fun render_dot(dot: Text): String do
		var proc = new ProcessDuplex("dot", "-Tsvg")
		var svg = proc.write_and_read(dot)
		proc.close
		proc.wait
		return svg
	end
end

# Return a UML representation of MEntity.
#
# Example: `GET /entity/core::Array/uml`
class APIEntityUML
	super SVGHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var dot
		if mentity isa MClassDef then mentity = mentity.mclass
		if mentity isa MClass then
			var uml = new UMLModel(config.view, config.mainmodule)
			dot = uml.generate_class_uml.write_to_string
		else if mentity isa MModule then
			var uml = new UMLModel(config.view, mentity)
			dot = uml.generate_package_uml.write_to_string
		else
			res.api_error(404, "No UML for mentity `{mentity.full_name}`")
			return
		end
		res.send render_dot(dot)
	end
end

# Return the source code of MEntity.
#
# Example: `GET /entity/core::Array/code`
class APIEntityCode
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var source = render_source(mentity)
		if source == null then
			res.api_error(404, "No code for mentity `{mentity.full_name}`")
			return
		end
		res.send source
	end

	# Highlight `mentity` source code.
	private fun render_source(mentity: MEntity): nullable HTMLTag do
		var node = config.modelbuilder.mentity2node(mentity)
		if node == null then return null
		var hl = new HighlightVisitor
		hl.enter_visit node
		return hl.html
	end
end

redef class HighlightVisitor
	redef fun hrefto(mentity) do
		return mentity.web_url
	end
end

redef class ModelFilters
	init from_string(context: nullable MEntity, string: String) do
		var pairs = string.split(",")
		for pair in pairs do
			var parts = pair.split(":")
			var filter = get_filter(context, parts[0], if parts.length >= 2 then parts[1] else null)
			if filter == null then continue
			add filter
		end
	end

	private fun get_filter(context: nullable MEntity, key: String, value: nullable String): nullable ModelFilter do
		if key == "min-visibility" then
			if value == "public" then
				return new VisibilityFilter(public_visibility)
			else if value == "protected" then
				return new VisibilityFilter(protected_visibility)
			else if value == "private" then
				return new VisibilityFilter(private_visibility)
			end
		else if key == "no-fictive" then
			return new FictiveFilter
		else if key == "no-attribute" then
			return new AttributeFilter
		else if key == "no-test" then
			return new TestFilter
		else if key == "no-empty-doc" then
			return new EmptyDocFilter
		else if key == "no-redef" then
			return new RedefFilter
		else if key == "no-extern" then
			return new ExternFilter
		else if key == "no-inh" and context != null then
			return new InheritedFilter(context)
		else if key == "string" and value != null then
			return new StringFilter(value)
		end
		return null
	end
end

redef class MEntity
	var allowed_filters: Array[String] = ["string", "no-empty-doc", "no-test", "no-fictive",
		"no-attribute", "no-redef", "no-inh", "no-extern", "min-visibility"]

	var default_filters: Array[String] = ["no-fictive", "no-test", "no-inh"]

	redef fun core_serialize_to(v) do
		super
		if v isa FullJsonSerializer then
			v.serialize_attribute("allowed_filters", allowed_filters)
			v.serialize_attribute("default_filters", default_filters)
		end
	end
end

redef class MPackage
	redef var allowed_filters = ["string", "no-empty-doc", "no-test", "no-fictive"]
	redef var default_filters = ["no-fictive", "no-test"]
end

redef class MGroup
	redef var allowed_filters = ["string", "no-empty-doc", "no-test", "no-fictive"]
	redef var default_filters = ["no-fictive", "no-test"]
end

redef class MModule
	redef var allowed_filters = ["string", "no-empty-doc", "no-test", "no-fictive",
		"no-redef", "no-inh", "no-extern", "min-visibility"]
end
