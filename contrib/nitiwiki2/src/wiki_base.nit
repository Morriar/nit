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
# A Wiki is composed of resources.
# An Resource can be a Page, a Section or an Asset.
module wiki_base

import ini
import template

# Wiki
#
# A Wiki contains pages that can be renderer to an output format.
class Wiki

	# Wiki's root section
	#
	# Every wiki as a Root, it represents the `pages/` directory where the wiki
	# source files are located.
	var root = new Root(self, "<root>") is lazy

	# List all resources in this wiki
	#
	# A wiki is composed of resources like sections, pages or assets.
	#
	# Even if some resources can be nested like sections this method collects all
	# resources.
	fun resources: Array[Resource] do
		var v = new ResourcesVisitor
		v.visit_wiki(self)
		v.resources.shift # remove the root
		return v.resources
	end

	# Add an resource to the root section of this wiki
	fun add(resource: Resource) do root.add resource

	# Get an resource by its `path`
	#
	# Since path are unique for a wiki, this returns a single resource.
	# Returns `null` if no resource can be found for this `path`.
	#
	# See `Resource::path`.
	#
	# TODO Caching?
	fun resource_by_path(path: String): nullable Resource do
		if path == root.path then return root
		for resource in resources do
			if resource.path == path then return resource
		end
		return null
	end

	# Get all resources with `name`
	#
	# Since a name is not unique in a wiki this method can return more than
	# one resource.
	#
	# See `resource_by_path` to get a single resource from its unique path.
	# See `Resource::name` for more details about `name`.
	#
	# TODO Caching?
	fun resources_by_name(name: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.name == name then res.add resource
		end
		return res
	end

	# TODO
	fun resources_by_title(title: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.title != title and resource.pretty_name != title then continue
			res.add resource
		end
		return res
	end

	# Landing or home page of this wiki
	fun index: nullable Page do return root.index

	# Does `self` have a `index` page?
	fun has_index: Bool do return root.has_index

	# Get an ANSI tree representation of this wiki resources
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

	# Configure the wiki from a `config` file.
	fun configure_from_ini(ini: IniFile) do end
end

# A Wiki resource
#
# Like a section, a page or an asset.
abstract class Resource

	# Every resource belongs to a wiki
	var wiki: Wiki

	# Resource's name
	#
	# The resource name is used internally to designate resources in logs and tests.
	# It's generally based on files name and we try to never show it as it is to
	# the end wiki user.
	#
	# Names are not supposed to be unique accross a wiki. See `path` if you're looking
	# for some kind of unique key.
	#
	# See `title` and `pretty_name`.
	var name: String

	# Resource's title
	#
	# An resource can have a custom title which will be presented to the end user.
	#
	# For some resources, the title comes from configuration files like Section for
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

	# Resource's section
	#
	# Should never be set directly, see `Wiki::add` and `Section.add`.
	var section: nullable Section = null

	# All resources from `self` to the root of the wiki
	#
	# Can be used to compose breadcrumbs for example.
	fun scopes: Array[Resource] do
		var section = self.section
		if section == null then return new Array[Resource]

		var path = new Array[Resource].from(section.scopes)
		path.add self
		return path
	end

	# Unique identifier of an resource in a wiki
	#
	# Should be unique accross the wiki.
	# Based on resources nesting from `Wiki::root`.
	fun path: String do
		var section = self.section
		if section == null then return "/{name}"
		return section.path / name
	end

	# Path from `self` to `resource`
	#
	# Can be used to compose relative links for example.
	fun path_to(resource: Resource): String do
		return path.relpath(resource.path)
	end

	# Get a resource by its relative path from `self`
	#
	# Returns `null` if no entry is found.
	fun resource_by_path(relative_path: String): nullable Resource do
		var path = (self.path / relative_path).simplify_path
		return wiki.resource_by_path(path)
	end

	# Visit self with `visitor`
	fun visit_all(visitor: WikiVisitor) do end

	# Return the resource `name`.
	redef fun to_s do return name
end

# A group of resources
#
# Wiki resources can be grouped into sections and sections can be nested.
class Section
	super Resource

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

	# Resources contained in this section
	var children = new Array[Resource]

	# All resources contained in this section
	#
	# This means the section children and their children recursively.
	fun resources: Array[Resource] do
		var v = new ResourcesVisitor
		v.visit(self)
		v.resources.shift # remove the resource itself
		return v.resources
	end

	# Get all resources with `name` inside `self` (direct and indirect)
	fun resources_by_name(name: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.name == name then res.add resource
		end
		return res
	end

	# Add a resource to this section
	fun add(resource: Resource) do
		children.add resource
		resource.section = self
	end

	# Landing page of this section
	fun index: nullable Page do
		for child in children do
			if child isa Page and child.name == "index" then return child
		end
		return null
	end

	# Does this section have an `index` page?
	fun has_index: Bool do return index != null

	redef fun visit_all(v) do for child in children do v.visit(child)

	redef fun pretty_name do
		if is_hidden then return "-{super}"
		return super
	end

	# Configure the section from a INI file
	fun configure_from_ini(ini: IniFile) do
		var hidden = ini["section.hidden"]
		if hidden != null then is_hidden = hidden == "true"
		title = ini["section.title"] or else title
	end
end

# Root section of each wiki
class Root
	super Section

	redef var path = "/"
end

# Abstract representation of a page
#
# Pages can have different source formats. It could be Markdown, HTML, LaTeX...
abstract class Page
	super Resource
end

# An asset for a Wiki
#
# Assets are generally used for rendering like scripts, stylesheets or images.
# We don't really care about their content as we will just copy or serve them.
class Asset
	super Resource
	autoinit(wiki, title, src_path)

	# Source path of this asset
	var src_path: String

	# Use the file name as resource name
	redef var name = src_path.to_path.filename is lazy
end

# Utils

# A visitor that can visit Wiki resources
abstract class WikiVisitor

	# Visit all resources in `wiki`
	fun visit_wiki(wiki: Wiki) do visit(wiki.root)

	# Visit `resource` and its children if any
	fun visit(resource: Resource) is abstract
end

# Collect all resources in a Wiki
private class ResourcesVisitor
	super WikiVisitor

	# All resources collected from a Wiki
	#
	# See `visit_wiki`.
	#
	# Resources are listed in order of depth-first discovery.
	var resources = new Array[Resource]

	redef fun visit(resource) do
		resources.add resource
		resource.visit_all(self)
	end
end

# Create an ANSI tree from a Wiki resources
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

	redef fun visit(resource) do
		if not show_assets and resource isa Asset then return

		if use_pretty_names then
			ansi.addn "{indent}{resource.pretty_name}"
		else
			ansi.addn "{indent}{resource.name}"
		end

		if resource isa Section then
			indent_level += 1
			resource.visit_all(self)
			indent_level -= 1
		end
	end
end
