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
	# Allowed extensions for Markdown pages
	#
	# Files with allowed extensions are considered as pages, other as assets.
	#
	# Default if `md`.
	#
	# `wiki_builder` uses this list to create the wiki from the file system.
	var allowed_md_exts = ["md"] is writable

	# Get all resources with `title`
	#
	# Since a `title` isn't unique in a wiki this method may return more than one
	# resource:
	#
	# ~~~
	# var wiki = new Wiki
	#
	# var r1 = new Section(wiki, "foo", "Foo")
	# wiki.add r1
	#
	# var r2 = new Asset(wiki, "bar", "Bar")
	# r1.add r2
	#
	# var r3 = new Asset(wiki, "bar", "Bar")
	# wiki.add r3
	#
	# assert wiki.resources_by_title("Foo") == [r1]
	# assert wiki.resources_by_title("Bar") == [r2, r3]
	# assert wiki.resources_by_title("Not Found").is_empty
	# ~~~
	#
	# See `resource_by_path` to get a single resource from its unique path.
	fun resources_by_title(title: String): Array[Resource] do return root.resources_by_title(title)
end

redef class Section
	# Get all resources with `title` inside `self` (direct and indirect)
	# TODO doc tests
	fun resources_by_title(title: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.title != title then continue
			res.add resource
		end
		return res
	end
end

# A page from a Markdown source
class MdPage
	super Page

	redef fun pretty_name do
		var title = self.title
		if title != null then return title
		var name = self.name
		for ext in wiki.allowed_md_exts do
			name = name.strip_extension(ext)
		end
		name = name.replace("_", " ")
		name = name.capitalized(keep_upper = true)
		return name
	end

	# File where the `md` content was loaded
	var source_path: nullable String = null is writable

	# Markdown string source
	var md: String is writable

	# Init `self` from a file
	init from_file(wiki: Wiki, file: String, name, title: nullable String) do
		self.source_path = file

		# Make name from filename without extension
		if name == null then
			name = file.to_path.filename
		end
		for ext in wiki.allowed_md_exts do
			# name = name.strip_extension(ext)
		end

		var md = file.to_path.read_all

		# TODO use title from first h1
		# print title or else "NO TITLE"
		if title == null then
			var parser = new MdParser
			# parser.github_mode = true
			# parser.wikilinks_mode = true
			# parser.post_processors.add new MdProcessCommands(self, page)

			var ast = parser.parse(md)

			title = parse_title(ast)
		end
		# print "{title or else "<NULL>"} - {file}"

		init(wiki, name, title, md)
	end

	fun parse_title(doc: MdDocument): nullable String do
		var v = new MdExtractTitle
		return v.get_title(doc)
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

class MdExtractTitle
	super MdVisitor

	var title: nullable String = null

	fun get_title(node: MdNode): nullable String do
		title = null
		visit(node)
		return title
	end

	redef fun visit(node) do
		if title != null then return

		if node isa MdHeading then
			title = node.raw_text
			return
		end
		node.visit_all(self)
	end
end

class MdProcessCommands
	super MdPostProcessor

	var parser: MdPageParser
	var context: MdPage

	redef fun visit(node) do
		if node isa MdWikilink then
			parse_command(node)
			return
		end
		super
	end

	# TODO other commands (include file...)
	fun parse_command(node: MdWikilink) do
		var link = node.link.trim

		# We don't know what to do with empty commands `[[]]`
		if link.is_empty then
			warn(node, "Empty command `[[]]`")
			return
		end

		# TODO parse command: trail
		# TODO extract following in lookup so it can be used by both link and trail?

		if link.has("^[a-zA-Z][a-zA-Z0-9+-]*://".to_re) then
			# We have a Wikilink as a http link, let's replace it
			var md_link = new MdLink(node.location, link, node.title or else link)
			md_link.first_child = new MdText(node.location, node.title or else link)
			node.replace(md_link)
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
				# We have no link nor anchor, there is a problem
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
				# Try from parent section
				node.target = context.resource_by_path("../{link}")
				if node.target == null then
					# Also try by prefixing a `/`
					node.target = context.wiki.resource_by_path("/{link}")
				end
				if node.target == null then
					# Bail out
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
		# TODO We look into siblings
		# Then into cousins recursively
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
		return "{context.path}:{node.location}"
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
	# var stop_depth: nullable Int = null is optional
	# var current_depth = 0

	# Use a breadth first visit so direct children may appear before descandants in conflicts
	redef fun visit(resource) do
		# if stop_depth == current_depth then return

		if done.has(resource) then return
		done.add resource

		# TODO should strip extension from config
		# if resource isa MdPage and resource.title == null then
			# print resource.path
		# end

		if resource.name == query or
		   resource.name.to_lower == query.to_lower or
		   resource.name.strip_extension == query or
		   resource.pretty_name == query or
		   resource.pretty_name.to_lower == query or
		   resource.title == query or
		   resource.path == query then
			select resource
		else if resource isa MdPage then
			var path = resource.source_path
			if path != null then
				if path.prettify(resource.wiki.allowed_md_exts) == query or
				   path.prettify == query or
				   path.prettify(new Array[String]) == query then
					select resource
				end
				var filename = path.to_path.filename
				if filename.prettify(resource.wiki.allowed_md_exts) == query or
				   filename.prettify == query or
				   filename.prettify(new Array[String]) == query then
					select resource
				end
				if filename.prettify(resource.wiki.allowed_md_exts).to_lower == query.to_lower or
				   filename.prettify.to_lower == query.to_lower or
				   filename.prettify(new Array[String]).to_lower == query.to_lower then
					select resource
				end
			end
		end
		# current_depth += 1
		resource.visit_all(self)
		# current_depth -= 1
	end

	fun select(resource: Resource) do
		var parent = resource.section
		if parent != null and (
			parent.name == resource.name or
			parent.name == resource.name.strip_extension or
			resource.name.strip_extension == "index") then
			resources.add parent
		else
			resources.add resource
		end
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

redef class String
	fun prettify(strip_extensions: nullable Array[String]): String do
		var string = self
		if strip_extensions != null then
			for ext in strip_extensions do
				string = string.strip_extension(ext)
			end
		else
			string = string.strip_extension
		end
		string = string.replace("_", " ")
		string = string.capitalized(keep_upper = true)
		return string
	end
end
