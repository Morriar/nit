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

module wiki_markdown

import wiki_base

import markdown2

# A page from a Markdown source
class MdPage
	super Page

	# Markdown string source
	var md: String

	var ast: MdDocument is lazy do
		var parser = new MdParser
		parser.github_mode = true
		parser.wikilinks_mode = true
		parser.post_processors.add new MdProcessCommands(wiki, self)

		var ast = parser.parse(md)
		parser.post_process(ast)
		return ast
	end
end

class MdProcessCommands
	super MdPostProcessor

	var wiki: Wiki
	var context: nullable Entry

	fun entries_by_title(title: String, context: nullable Entry): Array[Entry] do
		# TODO context for desamb
		var res = new Array[Entry]
		for entry in wiki.entries do
			if entry.title != title and entry.pretty_name != title then continue
			res.add entry
		end
		return res
	end

	redef fun visit(node) do
		if not node isa MdWikilink then
			super
			return
		end
		var link = node.link

		if link.has("#") then
			var parts = link.split_with("#")
			link = parts.first
			node.anchor = parts.subarray(1, parts.length - 1).join("#")
			if link.is_empty then
				node.target = context
				return
			end
		end

		# TODO partial path?
		if link.has("/") then
			node.target = wiki.entry_by_path(link.substring(1, link.length - 1))
			return
		end

		var targets = wiki.entries_by_name(link)
		# TODO handle conflicts
		if targets.not_empty then
			node.target = targets.first
			return
		end

		if targets.is_empty then
			# TODO handle conflicts
			targets = entries_by_title(link)
			if targets.not_empty then
				node.target = targets.first
				return
			end
		end
	end
	# TODO logging and errors
end

redef class MdWikilink
	var target: nullable Entry
	var anchor: nullable String
end
