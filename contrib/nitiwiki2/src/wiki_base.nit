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
# A Wiki is composed of resources.
# A Resource can be a Page, a Section or an Asset.
#
# This module only defines the base model representation of a Wiki.
# Other modules like `wiki_markdown` or `wiki_html` add more features based on
# this model.
module wiki_base

import ini
import template

# Wiki
#
# A Wiki contains resources (see Resource):
#
# ~~~
# class DummyPage
#	super Page
#
#	var content: String
# end
#
# var wiki = new Wiki
# wiki.add new DummyPage(wiki, "my_page", "My Page", "Content")
# wiki.add new Section(wiki, "my_section", "My Section")
# wiki.add new Asset(wiki, "my_asset", "My Asset", "path/to/asset")
# assert wiki.resources.length == 3
# ~~~
class Wiki

	# Wiki's root section
	#
	# Every wiki as a Root used to contain its resources:
	#
	# ~~~
	# var wiki = new Wiki
	# assert wiki.root isa Root
	# wiki.add new Asset(wiki, "my_asset", "My Asset", "path/to/asset")
	# assert wiki.resources.first == wiki.root.resources.first
	# ~~~
	var root = new Root(self, "<root>") is lazy

	# TODO remove
	fun resources: Array[Resource] do
		var v = new ResourcesVisitor
		v.visit_wiki(self)
		v.resources.shift # remove the root
		return v.resources
	end

	# Add an resource to the root section of this wiki
	#
	# ~~~
	# var wiki = new Wiki
	# assert wiki.resources.length == 0
	# wiki.add new Section(wiki, "my_section", "My Section")
	# assert wiki.resources.length == 1
	# ~~~
	# TODO remove
	fun add(resource: Resource) do root.add resource

	# Get all resources with `name`
	#
	# Since a name is not unique in a wiki this method can return more than
	# one resource.
	#
	# ~~~
	# var wiki = new Wiki
	# var s = new Section(wiki, "my_section", "My Section")
	# var a = new Asset(wiki, "my_asset", "My Asset", "path/to/asset")
	# wiki.add s
	# wiki.add a
	# assert wiki.resources_by_name("my_asset") == [a]
	# assert wiki.resources_by_name("not_found").is_empty
	# ~~~
	#
	# See `resource_by_path` to get a single resource from its unique path.
	# TODO remove
	fun resources_by_name(name: String): Array[Resource] do
		return root.resources_by_name(name)
	end

	# Get all resources with `title`
	#
	# Since a title is not unique in a wiki this method can return more than
	# one resource.
	#
	# ~~~
	# var wiki = new Wiki
	# var s = new Section(wiki, "my_section", "My Section")
	# var a = new Asset(wiki, "my_asset", "My Asset", "path/to/asset")
	# wiki.add s
	# wiki.add a
	# assert wiki.resources_by_title("My Asset") == [a]
	# assert wiki.resources_by_title("not_found").is_empty
	# ~~~
	#
	# See `resource_by_path` to get a single resource from its unique path.
	# TODO remove
	fun resources_by_title(title: String): Array[Resource] do return root.resources_by_title(title)

	# Get an resource by its `path`
	#
	# Since path are unique for a wiki, this returns a single resource.
	# Returns `null` if no resource can be found for this `path`.
	#
	# ~~~
	# var wiki = new Wiki
	# var s1 = new Section(wiki, "section1", "My Section")
	# wiki.add s1
	# var s2 = new Section(wiki, "section2", "My Sub Section")
	# s1.add s2
	# assert wiki.resource_by_path("/section1") == s1
	# assert wiki.resource_by_path("/section1/section2") == s2
	# assert wiki.resource_by_path("/not_found") == null
	# ~~~
	#
	# See `Resource::path`.
	# TODO remove
	fun resource_by_path(path: String): nullable Resource do
		if path == root.path then return root
		for resource in resources do
			if resource.path == path then return resource
		end
		return null
	end

	# Landing or home page of this wiki
	# TODO remove
	fun index: nullable Page do return root.index

	# Does `self` have a `index` page?
	# TODO remove
	fun has_index: Bool do return root.has_index

	# Configure the wiki from a `config` file.
	#
	# Sub modules refine this method to load wiki options from a INI file.
	fun configure_from_ini(ini: IniFile) do end
end

# A Wiki resource
#
# Like (but not limited to) a section, a page or an asset.
abstract class Resource

	# Every resource belongs to a wiki
	var wiki: Wiki

	# Resource's name
	#
	# The resource name is used internally to designate resources in logs and tests.
	# It's generally based on files name and we try to never show it as it is to
	# the end wiki user.
	#
	# Names are not supposed to be unique accross a wiki. See `title` for this.
	#
	# See `path` if you're looking for some kind of unique key.
	var name: String

	# Resource's title
	#
	# A resource can have a custom title which will be presented to the end user.
	#
	# For some resources, the title comes from configuration files like Section for
	# other it comes from the content of the file like MdPage.
	var title: nullable String = null is optional, writable

	# Resource's section
	#
	# Should never be set directly, see `Wiki::add` and `Section::add`.
	#
	# ~~~
	# var wiki = new Wiki
	# var s1 = new Section(wiki, "section1", "My Section")
	# assert s1.section == null
	# wiki.add s1
	# assert s1.section == wiki.root
	#
	# var s2 = new Section(wiki, "section2", "My Sub Section")
	# s1.add s2
	# assert s2.section == s1
	# ~~~
	var section: nullable Section = null

	# All resources from `self` to the root of the wiki
	#
	# Can be used to compose breadcrumbs for example.
	#
	# ~~~
	# var wiki = new Wiki
	# assert wiki.root.scopes.is_empty
	#
	# var s1 = new Section(wiki, "section1", "My Section")
	# wiki.add s1
	# assert s1.scopes == [s1]
	#
	# var s2 = new Section(wiki, "section2", "My Sub Section")
	# s1.add s2
	# assert s2.scopes == [s1, s2]
	# ~~~
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

	# Displayable pretty version of `name`
	#
	# This function replaces `_` by spaces in `name` then apply capitalization.
	#
	# ~~~
	# var wiki = new Wiki
	# var section = new Section(wiki, "my_section")
	# assert section.pretty_name == "My Section"
	# ~~~
	fun pretty_name: String do
		var title = self.title
		if title != null then return title
		var name = self.name
		name = name.replace("_", " ")
		name = name.capitalized(keep_upper = true)
		return name
	end

	# Return the resource `name`.
	redef fun to_s do return pretty_name
end

# A group of resources
#
# Wiki resources can be grouped into sections and sections can be nested.
class Section
	super Resource

	# Is this section hidden in sitemap and trees and menus?
	#
	# See `hidden` is you want to take the section into account.
	# TODO move to resource?
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
	#
	# ~~~
	# var wiki = new Wiki
	# var s = new Section(wiki, "my_section", "My Section")
	# var a = new Asset(wiki, "my_asset", "My Asset", "path/to/asset")
	# wiki.add s
	# wiki.add a
	# assert wiki.root.resources == [s, a: Resource]
	# ~~~
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

	# TODO
	fun resources_by_title(title: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.title != title then continue
			res.add resource
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

	# Configure the section from a INI file
	fun configure_from_ini(ini: IniFile) do
		var hidden = ini["section.hidden"]
		if hidden != null then is_hidden = hidden == "true"
		title = ini["section.title"] or else title
		# TODO index
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
