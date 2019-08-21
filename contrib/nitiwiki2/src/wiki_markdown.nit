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

		print path
		print "--"

		var ast = parser.parse(md)
		parser.post_process(ast)
		return ast
	end
end

class MdProcessCommands
	super MdPostProcessor

	var wiki: Wiki
	var context: Resource

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

		if link.has("/") then
			if link.has_prefix("/") then
				# Lookup by absolute path
				node.target = wiki.resource_by_path(link)
			else
				# Lookup by relative path
				var path = (context.path / link).simplify_path
				# TODO partial path?
				# Fix / to match root path
				# if path == "/" then path = ""
				# print path
				node.target = wiki.resource_by_path(path)
			end
		end

		if node.target != null then return

		var targets = wiki.resources_by_name(link)
		# TODO handle conflicts
		if targets.not_empty then
			node.target = targets.first
			return
		end

		if targets.is_empty then
			# TODO handle conflicts
			targets = wiki.resources_by_title(link)
			if targets.not_empty then
				node.target = targets.first
				return
			end
		end

		# print link
	end
	# TODO logging
	# TODO raise errors if not found
	# TODO raise warning if conflict
	# TODO other commands
end

# redef class Resource
# end

redef class MdWikilink
	var target: nullable Resource = null
	var anchor: nullable String = null
end
