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

module wiki_base

import config
import template

class Wiki
	# Wiki's root section
	#
	# Every wiki as a `Root`, its title is the name of the wiki.
	var root = new Root("<root>") is lazy

	fun add(entry: Entry) do root.add entry

	fun entries: Array[Entry] do
		var v = new EntriesVisitor
		v.visit_wiki(self)
		return v.entries
	end

	fun index: nullable Page do return root.index

	fun has_index: Bool do return root.has_index

	fun entries_by_name(name: String): Array[Entry] do
		var res = new Array[Entry]
		for entry in entries do
			if entry.name == name then res.add entry
		end
		return res
	end

	fun entry_by_path(path: String): nullable Entry do
		for entry in entries do
			if entry.path == path then return entry
		end
		return null
	end

	fun to_ansi(show_assets, use_pretty_names: nullable Bool): String do
		var v = new AnsiMapVisitor(
			show_assets or else false,
			use_pretty_names or else false
		)
		v.visit_wiki(self)
		return v.ansi.write_to_string
	end
end

# A wiki entry
#
# Either a Section or a Page.
abstract class Entry

	var name: String

	# Parent section of this entry
	#
	# Should never be set directly, see `Wiki::add` and `Section.add`.
	var parent: nullable Section = null

	# All entries from `self` to the `Root`
	fun scopes: Array[Entry] do
		var parent = self.parent
		if parent == null then return new Array[Entry]

		var path = new Array[Entry].from(parent.scopes)
		path.add self
		return path
	end

	fun path: String do
		var parent = self.parent
		if parent == null then return name
		return parent.path / name
	end

	fun path_to(entry: Entry): String do
		return path.relpath(entry.path)
	end

	fun visit_all(v: WikiVisitor) do end

	redef fun to_s do return name

	fun pretty_name: String do
		var name = self.name
		name = name.replace("_", " ")
		name = name.capitalized(keep_upper = true)
		return name
	end
end

# A group of entries
#
# A section can contain sub sections and pages.
class Section
	super Entry

	# Section configuration
	var config = new SectionConfig is optional, writable

	# Sub entries of this section
	var children = new Array[Entry] is optional

	fun add(entry: Entry) do
		children.add entry
		entry.parent = self
	end

	fun index: nullable Page do
		for child in children do
			if child isa Page and child.name == "index" then return child
		end
		return null
	end

	fun has_index: Bool do return index != null

	redef fun visit_all(v) do for child in children do v.visit(child)

	redef fun pretty_name do
		var title = config.title or else super
		if config.is_hidden then
			return "-{title}"
		end
		return title
	end
end

# Root section of all wikis
class Root
	super Section

	redef var path = ""
end

# Abstract representation of a page
#
# Pages can have different format
abstract class Page
	super Entry
end

class MdPage
	super Page

	var md: String

	init from_file(name, file: String) do
		init(name, file.to_path.read_all)
	end
end

class Asset
	super Entry
	autoinit(src_path)

	var src_path: String

	redef var name = src_path.to_path.filename is lazy
end

class SectionConfig
	# Is this section hidden in sitemap and trees and menus?
	var is_hidden = false is optional

	# Custom section title if any.
	var title: nullable String = null is optional

	init from_ini(ini: IniFile) do
		init
		is_hidden = ini["section.hidden"] == "true" or is_hidden
		title = ini["section.title"] or else title
	end
end

# Utils

abstract class WikiVisitor
	fun visit_wiki(wiki: Wiki) do visit(wiki.root)

	fun visit_entry(entry: Entry) do visit(entry)

	fun visit(entry: Entry) is abstract
end

private class EntriesVisitor
	super WikiVisitor

	var entries = new Array[Entry]

	redef fun visit(entry) do
		entries.add entry
		entry.visit_all(self)
	end
end

private class AnsiMapVisitor
	super WikiVisitor

	var show_assets = false is optional
	var use_pretty_names = false is optional
	var indent_level = 0

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

	fun indent: String do return "  " * indent_level
end
