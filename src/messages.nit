# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Tools messages
module messages

import model
import location

# A warning or an error
class Message
	super Comparable
	redef type OTHER: Message

	# The origin of the message in the source code, if any.
	var location: nullable Location

	# The category of the message.
	#
	# Used by quality-control tool for statistics or to enable/disable things individually.
	var tag: nullable String

	# The human-readable description of the message.
	#
	# eg. "Error: cannot find method `foo`."
	#
	# A good message should:
	#
	# * start with a message type like "Error:", "Syntax Error:", "Warning:".
	#   The type is capitalized and terminated by a column.
	#   The rest on the message starts with a lowercase letter and is terminated with a dot.
	#
	# * be short and fit on a single line.
	#
	# * have meaningful information first.
	#   This helps the reader and remain usable
	#   when truncated, by an IDE for instance.
	#
	# * enclose identifiers, keywords and pieces of code with back-quotes.
	var text: String

	# The severity level
	#
	# * 0 is advices (see `ToolContext::advice`)
	# * 1 is warnings (see `ToolContext::warning`)
	# * 2 is errors (see `ToolContext::error`)
	var level: Int

	# Comparisons are made on message locations.
	redef fun <(other) do
		if location == null then return true
		if other.location == null then return false

		return location.as(not null) < other.location.as(not null)
	end

	redef fun ==(other) do
		if not other isa Message then return false
		return location == other.location and tag == other.tag and text == other.text
	end

	redef fun to_s do
		var l = location
		if l == null then
			return text
		else
			return "{l}: {text}"
		end
	end

	# A colored version of the message including the original source line
	fun to_color_string: String do
		var esc = 27.code_point
		#var red = "{esc}[0;31m"
		#var bred = "{esc}[1;31m"
		#var green = "{esc}[0;32m"
		var yellow = "{esc}[0;33m"
		var def = "{esc}[0m"

		var tag = tag
		if tag != null then
			tag = " ({tag})"
		else
			tag = ""
		end
		var l = location
		if l == null then
			return "{text}{tag}"
		else if l.file == null then
			return "{yellow}{l}{def}: {text}{tag}"
		else
			return "{yellow}{l}{def}: {text}{tag}\n{l.colored_line("1;31")}"
		end
	end
end

redef class Location
	# Errors and warnings associated to this location.
	var messages: nullable Array[Message] = null

	# Add a message to `self`
	#
	# See `messages`
	fun add_message(m: Message) do
		var ms = messages
		if ms == null then
			ms = new Array[Message]
			messages = ms
		end
		ms.add m
		var s = file
		if s != null then s.messages.add m
	end
end

redef class SourceFile
	# Errors and warnings associated to the whole source.
	var messages = new Array[Message]
end

redef class MEntity

	# Errors and warnings associated with `self`.
	fun messages: Array[Message] do return new Array[Message]
end

redef class MPackage
	redef fun messages do
		var res = new HashSet[Message]
		for mgroup in mgroups do res.add_all mgroup.messages
		return res.to_a
	end
end

redef class MGroup
	redef fun messages do
		var res = new HashSet[Message]
		for mgroup in in_nesting.smallers do
			if mgroup == self then continue
			res.add_all mgroup.messages
		end
		for mmodule in mmodules do res.add_all mmodule.messages
		return res.to_a
	end
end

redef class MModule
	redef fun messages do
		var source = location.file
		if source == null then return super
		return source.messages
	end
end

redef class MClass
	redef fun messages do
		var res = super
		for mclassdef in mclassdefs do res.add_all mclassdef.messages
		return res
	end
end

redef class MClassDef
	redef fun messages do
		var res = super
		for message in mmodule.messages do
			var mloc = message.location
			if mloc == null then continue
			if not mloc.located_in(location) then continue
			res.add message
		end
		return res
	end
end

redef class MProperty
	redef fun messages do
		var res = super
		for mpropdef in mpropdefs do res.add_all mpropdef.messages
		return res
	end
end

redef class MPropDef
	redef fun messages do
		var res = super
		for message in mclassdef.messages do
			var mloc = message.location
			if mloc == null then continue
			if not mloc.located_in(location) then continue
			res.add message
		end
		return res
	end
end
