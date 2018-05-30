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

module markdown_wikilinks

intrude import markdown_inline_parsing
import markdown_block_parsing

redef class MdParser

	# FIXME optional in redef?
	fun wikilinks_mode: Bool do
		return inline_parser.wikilinks_mode
	end

	# FIXME
	fun wikilinks_mode=(value: Bool) do
		inline_parser.wikilinks_mode = value
	end
end

redef class MdInlineParser

	# FIXME optional in redef?
	var wikilinks_mode = false is optional, writable

	redef fun parse_wikilink do
		if not wikilinks_mode then return false

		# do we have two opening bracket?
		var last_bracket = self.last_bracket
		if last_bracket == null then return false
		var first_bracket = last_bracket.prev
		if first_bracket == null then return false

		# was the first bracket an image?
		if first_bracket.is_image then return false

		# do we have two closing brackets?
		if index >= input.length or input.chars[index] != ']' then return false

		advance 1 # skip last bracket
		var start_index = first_bracket.index + 2
		var end_index = index - 2

		# create wikilink node
		var content = input.substring(start_index, end_index - start_index)
		var parts = content.split("|")
		var title = if parts.length > 1 then parts.first.trim else null
		var link = parts.last.trim

		var wikilink = new MdWikilink(
				new MdLocation(
					first_bracket.node.location.line_start,
					first_bracket.node.location.column_start - 1,
					line,
					column - 1),
			link, title)

		var node = last_bracket.node.next
		var in_link = false
		while node != null do
			var next = node.next
			if not in_link then
				if node isa MdText and node.literal.has("|") then
					var buf = new Buffer
					for c in node.literal.chars do
						if c == '|' then
							in_link = true
							break
						end
						buf.add c
					end
					node.literal = buf.write_to_string.r_trim
				end
				wikilink.append_child(node)
			else
				node.unlink
			end
			node = next
		end

		append_node(wikilink)

		# Process delimiters such as emphasis inside a link/image
		process_delimiters(last_bracket.prev_delimiter)
		merge_child_text_nodes(wikilink)

		# remove brackets
		first_bracket.node.unlink
		last_bracket.node.unlink

		return true
	end
end

class MdWikilink
	super MdNode

	var link: String is writable

	var title: nullable String = null is optional, writable
end
