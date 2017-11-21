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

# Initialize commands from HTTP requests
module commands_http

import commands
import commands::commands_catalog
import nitcorn::vararg_routes

redef class DocCommand

	# Init command options from a HTTPRequest
	fun init_http_options(req: HttpRequest) do
		init_http_filter(req)
	end

	# Init filter options from a HTTPRequest
	fun init_http_filter(req: HttpRequest) do
		var filter = self.filter or else new ModelFilter
		if req.get_args.has_key("filter-visibility") then
			var visibility = req.string_arg("filter-visibility")
			if visibility == "public" then
				filter.min_visibility = public_visibility
			else if visibility == "protected" then
				filter.min_visibility = protected_visibility
			else
				filter.min_visibility = private_visibility
			end
		end
		if req.get_args.has_key("filter-fictive") then
			filter.accept_fictive = not (req.bool_arg("filter-fictive") or else false)
		end
		if req.get_args.has_key("filter-test") then
			filter.accept_test = not (req.bool_arg("filter-test") or else false)
		end
		if req.get_args.has_key("filter-redef") then
			filter.accept_redef = not (req.bool_arg("filter-redef") or else false)
		end
		if req.get_args.has_key("filter-extern") then
			filter.accept_extern = not (req.bool_arg("filter-extern") or else false)
		end
		if req.get_args.has_key("filter-attribute") then
			filter.accept_attribute = not (req.bool_arg("filter-attribute") or else false)
		end
		if req.get_args.has_key("filter-empty-doc") then
			filter.accept_empty_doc = not (req.bool_arg("filter-empty-doc") or else false)
		end
		if req.get_args.has_key("filter-inherited") then
			var name = req.string_arg("filter-inherited")
			if name != null then
				var mentity = model.mentity_by_full_name(name)
				if mentity == null then
					var mentities = model.mentities_by_name(name)
					if mentities.not_empty then mentity = mentities.first
				end
				filter.accept_inherited = mentity
			end
		end
		if req.get_args.has_key("filter-full-name") then
			filter.accept_full_name = req.string_arg("filter-full-name")
		end
		self.filter = filter
	end

	# Init the command from an HTTPRequest
	fun http_init(req: HttpRequest): CmdMessage do
		init_http_options(req)
		return init_command
	end
end

redef class CmdEntity
	redef fun http_init(req) do
		var name = req.param("id")
		if name != null then name = name.from_percent_encoding
		self.mentity_name = name

		return super
	end
end

redef class CmdList
	redef fun http_init(req) do
		limit = req.int_arg("l")
		page = req.int_arg("p")
		return super
	end
end

# Error Handling

# Message handling

redef class CmdMessage
	# HTTP code to return for this message
	var http_status_code = 200
end

redef class CmdError
	redef var http_status_code = 400
end

redef class CmdWarning
	redef var http_status_code = 404
end

redef class ErrorMEntityNoName
	redef var http_status_code = 400
end

redef class ErrorMEntityNotFound
	redef var http_status_code = 404
end

redef class ErrorMEntityConflict
	redef var http_status_code = 300
end

# CmdModel

redef class CmdComment
	redef fun http_init(req) do
		full_doc = req.bool_arg("full_doc") or else true
		fallback = req.bool_arg("fallback") or else true
		format = req.string_arg("format") or else "raw"
		return super
	end
end

redef class CmdAncestors
	redef fun http_init(req) do
		parents = req.bool_arg("parents") or else true
		return super
	end
end

redef class CmdDescendants
	redef fun http_init(req) do
		children = req.bool_arg("children") or else true
		return super
	end
end

redef class CmdEntityList
	# FIXME avoid linearization conflict
	redef fun http_init(req) do return super
end

redef class CmdSearch
	redef fun http_init(req) do
		query = req.string_arg("q")
		return super
	end
end

redef class CmdModelEntities
	redef fun http_init(req) do
		kind = req.string_arg("kind") or else "all"
		return super
	end
end

redef class CmdCode
	redef fun http_init(req) do
		format = req.string_arg("format") or else "raw"
		return super
	end
end

# CmdGraph

redef class CmdGraph
	redef fun http_init(req) do
		format = req.string_arg("format") or else "dot"
		return super
	end
end

redef class CmdInheritanceGraph
	redef fun http_init(req) do
		pdepth = req.int_arg("pdepth")
		cdepth = req.int_arg("cdepth")
		return super
	end
end

# CmdCatalog

redef class CmdCatalogTag
	redef fun http_init(req) do
		var tag = req.param("tid")
		if tag != null then tag = tag.from_percent_encoding
		self.tag = tag
		return super
	end
end

redef class CmdCatalogPerson
	redef fun http_init(req) do
		var name = req.param("pid")
		if name != null then name = name.from_percent_encoding
		self.person_name = name
		return super
	end
end
