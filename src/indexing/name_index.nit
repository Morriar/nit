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

module name_index

import code_index
intrude import mdoc_index

class NameIndex
	super MDocIndex

	var toolcontext: ToolContext

	redef fun vectorize_mentity(mentity) do
		# print mentity
		var node = toolcontext.modelbuilder.mentity2node(mentity)
		if node == null then return new Vector
		var visitor = new NameIndexVisitor(self)
		visitor.enter_visit(node)
		# print visitor.vector
		return visitor.vector
	end
end

private class NameIndexVisitor
	super Visitor

	var index: NameIndex

	var names = new Vector

	var vector = new Vector

	redef fun visit(node) do
		node.accept_name_index_visitor(self)
		# var md5 = names.keys.join(",", ": ")
		# if index.has_cache(md5) then
			# vector = index.load_cache(md5)
			# return
		# end
		# vector = index.parse_string(names.keys.join(" "))
		vector = new Vector
		for name, count in names do
			if not vector.has_key(name) then
				vector[name] = count
			end
		end
		# index.save_cache(md5, vector)
	end

	fun add_name(string: String) do
		string = string.to_lower
		names.inc string
		for name in uncrypt_name(string) do
			names.inc name
		end
	end

	fun uncrypt_name(string: String): Array[String] do
		var names = new Array[String]
		var buffer = new Buffer
		for c in string.chars do
			if c == '_' or not c.is_letter then
				if not buffer.is_empty then
					names.add buffer.to_s
					buffer = new Buffer
				end
				continue
			else if c.is_upper then
				if not buffer.is_empty then
					names.add buffer.to_s
					buffer = new Buffer
				end
			end
			buffer.add c
		end
		if not buffer.is_empty then names.add buffer.to_s
		return names
	end
end

redef class ANode
	private fun accept_name_index_visitor(v: NameIndexVisitor) do
		visit_all(v)
	end
end

redef class TId
	redef fun accept_name_index_visitor(v) do
		v.add_name text
	end
end

redef class TClassid
	redef fun accept_name_index_visitor(v) do
		v.add_name text
	end
end
