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

redef class Wiki
	var root_dir = "." is writable

	var pages_dir = "pages/" is writable

	redef fun configure_from_ini(ini) do
		super
		root_dir = ini["wiki.root"] or else root_dir
		pages_dir = ini["wiki.pages"] or else pages_dir
	end
end

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
		if node isa MdWikilink then
			parse_command(node)
		else
			super
		end
	end

	# TODO other commands (include file...)
	fun parse_command(node: MdWikilink) do
		var link = node.link.trim

		# We don't know what to do with empty commands `[[]]`
		if link.is_empty then
			warn(node, "Empty command `[[]]`")
			return
		end

		# Links can have an anchor: [[resource#anchor]]
		var parts = link.split_once_on("#")
		if parts.length > 1 then
			link = parts.shift.trim
			node.anchor = parts.shift.trim # anchor can be empty (go to top)
			if parts.not_empty then
				# There should be only one anchor [[#foo#bar]]
				warn(node, "Malformed link anchor `{node.link}`")
			end
		end

		if link.is_empty then
			if node.anchor == null then
				# We have no link nor anchor, this is an error
				warn(node, "Empty link `{node.link}`")
			else
				# We only have an anchor, the link is internal to the page
				node.target = context
			end
			return
		end

		if link == "." then
			node.target = context
			return
		end

		# Lookup by absolute path (no conflict)
		if link.has_prefix("/") then
			node.target = context.wiki.resource_by_path(link)
			if node.target == null then
				warn(node, "Link to unknown resource `{link}`")
			end
			return
		end

		# Lookup by relative path
		if link.has("/") then
			node.target = context.resource_by_path(link)
			if node.target == null then
				# Also try from parent section
				node.target = context.resource_by_path("../{link}")
				if node.target == null then
					warn(node, "Link to unknown resource `{link}`")
				end
			end
			return
		end

		# Lookup by name and title
		var targets = lookup_link(node, link)

		if targets.is_empty then
			var v = new DidYouMeanVisitor(link, context)
			v.visit_wiki(context.wiki)
			var suggestions = v.similarities.keys.to_a
			if suggestions.not_empty then
				var comparator = new DidYouMeanComparator(v.similarities)
				comparator.sort(suggestions)
				var suggestion = suggestions.first
				warn(node, "Link to unknown resource `{link}`. Did you mean `{suggestion.path}`?")
			else
				warn(node, "Link to unknown resource `{link}`")
			end
			return
		end

		node.target = targets.first

		if targets.length > 1 then
			# There are conflicts select the first one (already sorted by relevance) and warn
			node.conflicts.add_all targets
			var paths = new Array[String]
			for conflict in targets do paths.add "`{conflict.path}`"
			warn(node, "Link to conflicting resources: {paths.join(", ")}")
		end
	end

	fun lookup_link(node: MdWikilink, link: String): Array[Resource] do
		var child_visitor = new LinkLookupVisitor(link)
		# We look into siblings, then into cousins recursively
		var section = context.section
		while section != null do
			child_visitor.visit(section)
			section = section.section
		end
		# Then we look from root
		child_visitor.visit(context.wiki.root)
		return child_visitor.resources.to_a
	end

	fun warn(node: MdWikilink, message: String) do
		parser.logger.warn("{location(node)}: {message}")
	end

	# Get the location for a node using `context`
	#
	# If `context` does not point to a file, use the page path as a location.
	private fun location(node: MdNode): String do
		return "{context.file or else context.path}:{node.location}"
	end
end

redef class MdWikilink
	var target: nullable Resource = null
	var anchor: nullable String = null
	var conflicts = new Array[Resource]
end

private class LinkLookupVisitor
	super WikiVisitor

	var resources = new Set[Resource]
	var done = new Set[Resource]
	var query: String

	# Use a breadth first visit so direct children may appear before descandants in conflicts
	redef fun visit(resource) do
		if done.has(resource) then return
		done.add resource
		if resource.name == query or resource.title == query or resource.pretty_name == query then
			resources.add resource
		end
		resource.visit_all(self)
	end
end

private class DidYouMeanVisitor
	super WikiVisitor

	var query: String
	var context: Resource
	var similarities = new HashMap[Resource, Int]

	redef fun visit(resource) do
		if resource isa Root or resource == context then
			resource.visit_all(self)
			return
		end

		var sim = query.levenshtein_distance(resource.name)
		var title = resource.title
		if title != null then
			var sim_title = query.levenshtein_distance(title)
			if sim_title < sim then sim = sim_title
		end
		similarities[resource] = sim
		resource.visit_all(self)
	end
end

private class DidYouMeanComparator
	super Comparator

	var similarities: HashMap[Resource, Int]

	redef type COMPARED: Resource

	redef fun compare(a, b) do return similarities[a] <=> similarities[b]
end
