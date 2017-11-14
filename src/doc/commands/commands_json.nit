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

# Translate command results to json
module commands_json

import commands::commands_model
import commands::commands_graph
import commands::commands_usage
import commands::commands_catalog

import templates::templates_json
import catalog::catalog_json

redef class DocCommand
	# Return a JSON Serializable representation of `self` results
	fun to_json: nullable Serializable is abstract
end

# Message handling

redef class CmdMessage
	# Return a JSON Serializable representation of `self`
	fun to_json: nullable Serializable do
		var obj = new JsonObject
		obj["status"] = class_name
		obj["message"] = to_s
		return obj
	end
end

redef class CmdEntity
	redef fun to_json do return mentity
end

redef class CmdList
	redef fun to_json do
		var obj = new JsonObject
		obj["results"] = results
		obj["page"] = page
		obj["count"] = count
		obj["limit"] = limit
		obj["max"] = max
		return obj
	end
end

redef class CmdEntityList
	redef fun to_json do return super
end

# Model commands

redef class CmdComment
	redef fun to_json do
		var obj = new JsonObject
		var render = self.render
		if render != null then
			obj["documentation"] = render.write_to_string
		end
		return obj
	end
end

redef class CmdCode
	redef fun to_json do
		var obj = new JsonObject
		var node = self.node
		if node != null then
			obj["location"] = node.location
		end
		var output = render
		if output != null then
			obj["code"] = output.write_to_string
		end
		return obj
	end
end

redef class CmdGraph
	redef fun to_json do
		var obj = new JsonObject
		var output = render
		if output != null then
			obj["graph"] = output.write_to_string
		end
		return obj
	end
end

redef class CmdMetadata
	redef fun to_json do return metadata
end

# CmdCatalog

redef class CmdCatalogStats
	redef fun to_json do return stats
end

redef class CmdCatalogTags
	redef fun to_json do return packages_count_by_tags
end

redef class CmdCatalogTag
	redef fun to_json do
		var obj = super.as(JsonObject)
		obj["tag"] = tag
		return obj
	end
end

redef class CmdCatalogPerson
	redef fun to_json do return person
end

redef class CmdCatalogMaintaining
	redef fun to_json do
		var obj = new JsonObject
		obj["person"] = person
		obj["results"] = results
		obj["page"] = page
		obj["count"] = count
		obj["limit"] = limit
		obj["max"] = max
		return obj
	end
end

redef class CmdCatalogContributing
	redef fun to_json do
		var obj = new JsonObject
		obj["person"] = person
		obj["results"] = results
		obj["page"] = page
		obj["count"] = count
		obj["limit"] = limit
		obj["max"] = max
		return obj
	end
end
