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

# Basic Wiki model
#
# This module defines the base model representation of a Wiki.
#
# A Wiki is composed of entries.
# An Entry can be a Page, a Section or an Asset.
module wiki_base

import template::macro

# Wiki
#
# A Wiki contains pages that can be renderer to an output format.
class Wiki

	# Wiki's root section
	#
	# Every wiki as a Root, it represents the `pages/` directory where the wiki
	# source files are located.
	var root = new Root(self, "<root>") is lazy

	# Wiki's default template
	#
	# A wiki may have a default template to render the pages.
	# The format of this template and how it is used if left to clients.
	var default_template: nullable PageTemplate = null is optional, writable

	# List all entries in this wiki
	#
	# A wiki is composed of entries like sections, pages or assets.
	#
	# Even if some entries can be nested like sections this method collects all
	# entries.
	fun entries: Array[Entry] do
		var v = new EntriesVisitor
		v.visit_wiki(self)
		return v.entries
	end

	# Add an entry to the root section of this wiki
	fun add(entry: Entry) do root.add entry

	# Get an entry by its `path`
	#
	# Since path are unique for a wiki, this returns a single entry.
	# Returns `null` if no entry can be found for this `path`.
	#
	# See `Entry::path`.
	#
	# TODO Caching?
	fun entry_by_path(path: String): nullable Entry do
		for entry in entries do
			if entry.path == path then return entry
		end
		return null
	end

	# Get all entries with `name`
	#
	# Since a name is not unique in a wiki this method can return more than
	# one entry.
	#
	# See `entry_by_path` to get a single entry from its unique path.
	# See `Entry::name` for more details about `name`.
	#
	# TODO Caching?
	fun entries_by_name(name: String): Array[Entry] do
		var res = new Array[Entry]
		for entry in entries do
			if entry.name == name then res.add entry
		end
		return res
	end

	# Landing or home page of this wiki
	fun index: nullable Page do return root.index

	# Does `self` have a `index` page?
	fun has_index: Bool do return root.has_index

	# Get an ANSI tree representation of this wiki entries
	#
	# Useful for testing and debugging.
	fun to_ansi(show_assets, use_pretty_names: nullable Bool): String do
		var v = new AnsiMapVisitor(
			show_assets or else false,
			use_pretty_names or else false
		)
		v.visit_wiki(self)
		return v.ansi.write_to_string
	end
end

# A Wiki entry
#
# Like a section, a page or an asset.
abstract class Entry

	# Every entry belongs to a wiki
	var wiki: Wiki

	# Entry's name
	#
	# The entry name is used internally to designate entries in logs and tests.
	# It's generally based on files name and we try to never show it as it is to
	# the end wiki user.
	#
	# Names are not supposed to be unique accross a wiki. See `path` if you're looking
	# for some kind of unique key.
	#
	# See `title` and `pretty_name`.
	var name: String

	# Entry's title
	#
	# An entry can have a custom title which will be presented to the end user.
	#
	# For some entries, the title comes from configuration files like Section for
	# other it comes from the content of the file like MdPage.
	# For some there is no obvious title like assets so we generally fallback on
	# `pretty_name`.
	var title: nullable String = null is optional, writable

	# Displayable pretty version of `name`
	#
	# This function replaces `_` by spaces in `name` then apply capitalization.
	fun pretty_name: String do
		var title = self.title
		if title != null then return title
		var name = self.name
		name = name.replace("_", " ")
		name = name.capitalized(keep_upper = true)
		return name
	end

	# Entry's section
	#
	# Should never be set directly, see `Wiki::add` and `Section.add`.
	var section: nullable Section = null

	# All entries from `self` to the root of the wiki
	#
	# Can be used to compose breadcrumbs for example.
	fun scopes: Array[Entry] do
		var section = self.section
		if section == null then return new Array[Entry]

		var path = new Array[Entry].from(section.scopes)
		path.add self
		return path
	end

	# Unique identifier of an entry in a wiki
	#
	# Should be unique accross the wiki.
	# Based on entries nesting from `Wiki::root`.
	fun path: String do
		var section = self.section
		if section == null then return name
		return section.path / name
	end

	# Path from `self` to `entry`
	#
	# Can be used to compose relative links for example.
	fun path_to(entry: Entry): String do
		return path.relpath(entry.path)
	end

	# Visit self with `visitor`
	fun visit_all(visitor: WikiVisitor) do end

	# Return the entry `name`.
	redef fun to_s do return name
end

# A group of entries
#
# Wiki entries can be grouped into sections and sections can be nested.
class Section
	super Entry

	# Is this section hidden in sitemap and trees and menus?
	#
	# See `hidden` is you want to take the section visit_all into account.
	var is_hidden = false is optional, writable

	# Is this section or is section hidden (recursive).
	#
	# Returns `true` if `is_hidden and section.is_hidden`.
	fun hidden: Bool do
		if hidden then return true
		var section = self.section
		if section != null then return section.is_hidden
		return false
	end

	# Entries contained in this section
	var entries = new Array[Entry]

	# Add an entry to this section
	fun add(entry: Entry) do
		entries.add entry
		entry.section = self
	end

	# Section default template
	#
	# A section may have a default template to render the pages it containts.
	# The format of this template and how it is used if left to clients.
	var default_template: nullable PageTemplate = null is optional, writable

	# Template to apply to this section content (recursive)
	#
	# The template can be `default_template` or the parent `template` is any.
	fun template: nullable PageTemplate do
		if default_template != null then return default_template
		var parent = self.section
		if parent == null then return null
		return parent.template
	end

	# Landing page of this section
	fun index: nullable Page do
		for child in entries do
			if child isa Page and child.name == "index" then return child
		end
		return null
	end

	# Does this section have an `index` page?
	fun has_index: Bool do return index != null

	redef fun visit_all(v) do for child in entries do v.visit(child)

	redef fun pretty_name do
		if is_hidden then return "-{super}"
		return super
	end
end

# Root section of each wiki
class Root
	super Section

	redef var path = ""
end

# Abstract representation of a page
#
# Pages can have different source formats. It could be Markdown, HTML, LaTeX...
abstract class Page
	super Entry
end

# An asset for a Wiki
#
# Assets are generally used for rendering like scripts, stylesheets or images.
# We don't really care about their content as we will just copy or serve them.
class Asset
	super Entry
	autoinit(wiki, title, src_path)

	# Source path of this asset
	var src_path: String

	# Use the file name as entry name
	redef var name = src_path.to_path.filename is lazy
end

# A Page template
#
# Page content can be wrapped with a template.
# Page templates can use macros (see `PageVars`) to display generated
# variables from the Wiki such as dates, versions, strings etc.
class PageTemplate

	# Template string
	var string: String

	# Compile `string` as a Template string
	#
	# All the macros from the template `string` are replaced by `vars`.
	fun compile(vars: TemplateVars): Template do
		var tpl = new TemplateString(string)
		if tpl.has_macro("BODY") then
			tpl.replace("BODY", vars.body or else "")
		end
		return tpl
	end
end

# PageTemplate Vars
class TemplateVars
	# Page title
	var title: nullable String = null is optional, writable

	# Page content
	var body: nullable String = null is optional, writable

	# TODO assets path
	# TODO trail
	# TODO menu
	# TODO summary
	# TODO ... ?
end

# Utils

# A visitor that can visit Wiki entries
abstract class WikiVisitor

	# Visit all entries in `wiki`
	fun visit_wiki(wiki: Wiki) do visit(wiki.root)

	# Visit `entry` and its children if any
	fun visit(entry: Entry) is abstract
end

# Collect all entries in a Wiki
private class EntriesVisitor
	super WikiVisitor

	# All entries collected from a Wiki
	#
	# See `visit_wiki`.
	#
	# Entries are listed in order of depth-first discovery.
	var entries = new Array[Entry]

	redef fun visit(entry) do
		entries.add entry
		entry.visit_all(self)
	end
end

# Create an ANSI tree from a Wiki entries
private class AnsiMapVisitor
	super WikiVisitor

	# Show assets in the output tree?
	var show_assets = false is optional

	# Use pretty names instead of names
	var use_pretty_names = false is optional

	# Current indentation level
	#
	# An indentation level is two spaces (`  `).
	var indent_level = 0

	# Get indentation string
	#
	# See `indent_level`.
	fun indent: String do return "  " * indent_level

	# ANSI tree under construction
	var ansi = new Template

	redef fun visit(entry) do
		if not show_assets and entry isa Asset then return

		if use_pretty_names then
			ansi.addn "{indent}{entry.pretty_name}"
		else
			ansi.addn "{indent}{entry.name}"
		end

		if entry isa Section then
			indent_level += 1
			entry.visit_all(self)
			indent_level -= 1
		end
	end
end
