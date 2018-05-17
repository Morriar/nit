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
#
# FIXME: this module is pretty tied up to the nitwed routes.
# To be more generic, param names should be extracted as variables.
module commands_http

import commands
import commands::commands_catalog
import nitcorn::vararg_routes

redef class DocCommand
	# Init the command from an HTTPRequest
	fun http_init(req: HttpRequest): CmdMessage do return init_command
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
		var opt_limit = req.int_arg("l")
		if opt_limit != null then limit = opt_limit
		var opt_page = req.int_arg("p")
		if opt_page != null then page = opt_page
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
		var opt_full_doc = req.bool_arg("full_doc")
		if opt_full_doc != null then full_doc = opt_full_doc
		var opt_fallback = req.bool_arg("fallback")
		if opt_fallback != null then fallback = opt_fallback
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdEntityLink
	redef fun http_init(req) do
		var opt_text = req.string_arg("text")
		if opt_text != null then text = opt_text
		var opt_title = req.string_arg("title")
		if opt_title != null then title = opt_title
		return super
	end
end

redef class CmdAncestors
	redef fun http_init(req) do
		var opt_parents = req.bool_arg("parents")
		if opt_parents != null then parents = opt_parents
		return super
	end
end

redef class CmdDescendants
	redef fun http_init(req) do
		var opt_children = req.bool_arg("children")
		if opt_children != null then children = opt_children
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
		var opt_kind = req.string_arg("kind")
		if opt_kind != null then kind = opt_kind
		return super
	end
end

redef class CmdCode
	redef fun http_init(req) do
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdEntityCode
	# FIXME avoid linearization conflict
	redef fun http_init(req) do
		var name = req.param("id")
		if name != null then name = name.from_percent_encoding
		mentity_name = name

		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return init_command
	end
end

# CmdGraph

redef class CmdGraph
	redef fun http_init(req) do
		var opt_format = req.string_arg("format")
		if opt_format != null then format = opt_format
		return super
	end
end

redef class CmdInheritanceGraph
	redef fun http_init(req) do
		var opt_pdepth = req.int_arg("pdepth")
		if opt_pdepth != null then pdepth = opt_pdepth
		var opt_cdepth = req.int_arg("cdepth")
		if opt_cdepth != null then cdepth = opt_cdepth
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
