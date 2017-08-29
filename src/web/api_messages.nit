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

module api_messages

import api_model
import messages

redef class APIRouter
	redef init do
		super
		use("/messages", new APIMessages(config))
		use("/messages/:id", new APIEntityMessages(config))
	end
end

abstract class APIMessagesHandler
	super APIHandler

	fun group_messages(req: HttpRequest, messages: Array[Message]): Array[DocGroup[Message]] do
		var req_group = req.string_arg("group_by")
		var grouper: DocGroupBuilder[Message]
		if req_group == "none" then
			grouper = new NoneGroupBuilder[Message]
		else if req_group == "kind" then
			grouper = new MessageKindGroupBuilder
		else
			grouper = new MessageLocationGroupBuilder
		end
		grouper.group_elements(messages)
		return grouper.groups
	end
end


class APIMessages
	super APIMessagesHandler

	redef fun get(req, res) do
		var messages = new Array[Message]
		for mmodule in config.view.mmodules do
			messages.add_all mmodule.messages
		end
		var groups = group_messages(req, messages)
		res.api_json(req, new JsonArray.from(groups))
	end
end

class APIEntityMessages
	super APIMessagesHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var groups = group_messages(req, mentity.messages)
		res.api_json(req, new JsonArray.from(groups))
	end
end

# Grouping

class MessageKindGroupBuilder
	super DocGroupBuilder[Message]

	redef fun group_for(message) do return group(message.tag, message.tag)
end

class MessageLocationGroupBuilder
	super DocGroupBuilder[Message]

	redef fun group_for(message) do
		var loc = message.location
		if loc == null then return group(null)
		var file = loc.file
		if file == null then return group(null)
		return group(file.filename, file.filename)
	end
end

# Serialization

redef class Message
	serialize

	redef fun core_serialize_to(v) do
		v.serialize_attribute("tag", tag)
		v.serialize_attribute("text", text)
		v.serialize_attribute("level", level)
		v.serialize_attribute("location", location)
	end
end
