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
import logger

# A page from a Markdown source
class MdPage
	super Page

	# Markdown string source
	var md: String is writable

	# Source file if any
	var file: nullable String = null is optional, writable

	# Init `self` from a file
	init from_file(wiki: Wiki, file: String, name, title: nullable String) do
		name = name or else file.to_path.filename.strip_extension
		var md = file.to_path.read_all
		init(wiki, name, title, md, file)
	end
end

class MdPageParser

	var wiki: Wiki

	var logger: Logger = new Logger(warn_level) is optional

	fun parse_page(page: MdPage): MdDocument do
		var parser = new MdParser
		parser.github_mode = true
		parser.wikilinks_mode = true
		parser.post_processors.add new MdProcessCommands(self, page)

		var ast = parser.parse(page.md)
		parser.post_process(ast)
		return ast
	end
end

class MdProcessCommands
	super MdPostProcessor

	var parser: MdPageParser
	var context: MdPage

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

		if link.has_prefix("/") then
			# Lookup by absolute path
			node.target = parser.wiki.resource_by_path(link)
		else
			# Lookup by relative path
			node.target = context.resource_by_path(link)
		end
		if node.target != null then return

		var targets = parser.wiki.resources_by_name(link)
		# TODO handle conflicts
		if targets.not_empty then
			node.target = targets.first
			return
		end

		if targets.is_empty then
			# TODO handle conflicts
			targets = parser.wiki.resources_by_title(link)
			if targets.not_empty then
				node.target = targets.first
				return
			end
		end

		if node.target == null then
			var file = context.file or else context.path
			parser.logger.warn("{file}:{node.location}: Link to unknown resource `{link}`")
		end
		# TODO did you mean
	end
	# TODO other commands
end

redef class MdWikilink
	var target: nullable Resource = null
	var anchor: nullable String = null
	# TODO errors/warnings & conflicts
end
