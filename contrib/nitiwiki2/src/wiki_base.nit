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
# A Wiki contains nested resources (see Resource):
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
# assert wiki.resources == [r1, r2, r3: Resource]
# ~~~
class Wiki

	# Wiki's root directory
	#
	# Basically the directory where the `nitiwiki.ini` configuration file for
	# this wiki is located.
	#
	# Default: `.`
	var root_dir = "." is optional, writable

	# Wiki's sources directory
	#
	# The directory where the page source (Markdown or other format) are located.
	# This doesn't include the `root_dir` prefix.
	var src_dir = "src/" is writable

	# Wiki's root section
	#
	# Every wiki as a Root used to contain its resources:
	# ~~~
	# var empty_wiki = new Wiki
	# assert empty_wiki.root isa Root
	# ~~~
	var root = new Root(self, "<root>") is lazy

	# All resources in this wiki
	#
	# Collect all resources from `root` recursively:
	# ~~~
	# var wiki = new Wiki
	# assert wiki.resources.is_empty
	#
	# var r1 = new Section(wiki, "foo", "Foo")
	# wiki.add r1
	# assert wiki.resources == [r1]
	#
	# var r2 = new Section(wiki, "bar", "Bar")
	# r1.add r2
	# assert wiki.resources == [r1, r2]
	# ~~~
	fun resources: Array[Resource] do return root.resources

	# Add an resource to the root section of this wiki
	#
	# ~~~
	# var wiki = new Wiki
	# assert wiki.resources.length == 0
	#
	# wiki.add new Section(wiki, "foo", "Foo")
	# assert wiki.resources.length == 1
	# ~~~
	#
	# See `Section::add` to nest resources.
	fun add(resource: Resource) do root.add resource

	# Get all resources with `name`
	#
	# Since a `name` isn't unique in a wiki this method may return more than one
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
	# assert wiki.resources_by_name("foo") == [r1]
	# assert wiki.resources_by_name("bar") == [r2, r3]
	# assert wiki.resources_by_name("not_found").is_empty
	# ~~~
	#
	# See `resource_by_path` to get a single resource from its unique path.
	fun resources_by_name(name: String): Array[Resource] do return root.resources_by_name(name)

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

	# Get an resource by its `path`
	#
	# A `path` points to a unique resource in a wiki.
	# Returns `null` if no resource can be found for this `path`.
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
	# assert wiki.resource_by_path("/foo") == r1
	# assert wiki.resource_by_path("/foo/bar") == r2
	# assert wiki.resource_by_path("/bar") == r3
	# assert wiki.resource_by_path("/not/Found") == null
	# ~~~
	#
	# See `Resource::path`.
	fun resource_by_path(path: String): nullable Resource do
		if path == root.path then return root
		for resource in resources do
			if resource.path == path then return resource
		end
		return null
	end

	# Configure the wiki from a `config` file.
	#
	# Wiki options can be loaded from a INI configuration file called `nitiwiki.ini`.
	#
	# ~~~
	# var wiki = new Wiki
	# assert wiki.root_dir == "."
	# assert wiki.src_dir == "src/"
	#
	# var ini = new IniFile
	# ini["wiki.root"] = "root/"
	# ini["wiki.src"] = "dir/"
	#
	# wiki.configure_from_ini(ini)
	# assert wiki.root_dir == "root/"
	# assert wiki.src_dir == "dir/"
	# ~~~
	#
	# Sub modules can refine this method to add new wiki options.
	fun configure_from_ini(ini: IniFile) do
		root_dir = ini["wiki.root"] or else root_dir
		src_dir = ini["wiki.src"] or else src_dir
	end

	# Default configuration filename
	var config_file = "nitiwiki.ini"
end

# A Wiki resource
#
# Like (but not limited to) a Section, a Page or an Asset.
#
# Resources can be referred to by `name`, `title` or `path`.
abstract class Resource

	# Every resource belongs to a wiki
	var wiki: Wiki

	# Resource's name
	#
	# The resource name is used internally to designate resources in logs and tests.
	# It's generally based on files name and we try to never show it as it is to
	# the end wiki user.
	#
	# Names may not be unique. See `path` for uniquely identify a resource.
	var name: String

	# Resource's title
	#
	# A resource may have a custom title which can be presented to the end user.
	# Titles may not be unique. See `path` for uniquely identify a resource.
	#
	# For some resources, the title may come from a configuration file like with
	# sections. For other it may come from the content of the resource itself like
	# with Markdown src.
	var title: nullable String = null is optional, writable

	# Resource's section
	#
	# Should never be set directly, see `Wiki::add` and `Section::add`.
	#
	# ~~~
	# var wiki = new Wiki
	#
	# # By default a resource as no parent:
	# var r1 = new Section(wiki, "foo", "Foo")
	# assert r1.section == null
	#
	# # If added to the root of a wiki the parent is `wiki.root`:
	# wiki.add r1
	# assert r1.section == wiki.root
	#
	# # If added to a resource the parent is the resource:
	# var r2 = new Section(wiki, "bar", "bar")
	# r1.add r2
	# assert r2.section == r1
	# ~~~
	var section: nullable Section = null

	# Get all resources between `self` and the root of the wiki
	#
	# Can be used to compose breadcrumbs for example.
	#
	# Includes `self` but never the wiki root:
	# ~~~
	# var wiki = new Wiki
	# assert wiki.root.scopes.is_empty
	#
	# var r1 = new Section(wiki, "foo", "Foo")
	# wiki.add r1
	# assert r1.scopes == [r1]
	#
	# var r2 = new Section(wiki, "bar", "Bar")
	# r1.add r2
	# assert r2.scopes == [r1, r2]
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
	# Based on resources nesting from `Wiki::root`.
	#
	# Should be unique accross the wiki:
	# ~~~
	# var wiki = new Wiki
	# assert wiki.resource_by_path("/foo") == null
	#
	# var r1 = new Section(wiki, "foo", "Foo")
	# wiki.add r1
	# assert wiki.resource_by_path("/foo") == r1
	#
	# var r2 = new Section(wiki, "foo", "Foo")
	# wiki.add r2
	# assert wiki.resource_by_path("/foo") == r1 # TODO use caching to ensure unicity?
	# ~~~
	fun path: String do
		var section = self.section
		if section == null then return "/{name}"
		return section.path / name
	end

	# Path from `self` to `resource`
	#
	# Can be used to compose relative links for example.
	# TODO doc test
	fun path_to(resource: Resource): String do
		return path.relpath(resource.path)
	end

	# Get a resource by its relative path from `self`
	#
	# Returns `null` if no entry is found.
	# TODO doc test
	fun resource_by_path(relative_path: String): nullable Resource do
		var path = (self.path / relative_path).simplify_path
		return wiki.resource_by_path(path)
	end

	# Visit self with `visitor`
	fun visit_all(visitor: WikiVisitor) do end # Does nothing by default

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

	# Resources contained in this section
	# TODO doc tests
	var children = new Array[Resource]

	# Is this section hidden in sitemap and trees and menus?
	#
	# See `hidden` is you want to take the section into account.
	# TODO doc test
	var is_hidden = false is optional, writable

	# Is this section or is section hidden (recursive).
	#
	# Returns `true` if `is_hidden and section.is_hidden`.
	# TODO simplity with is_hidden
	fun hidden: Bool do
		if hidden then return true
		var section = self.section
		if section != null then return section.is_hidden
		return false
	end

	# All resources contained in this section
	#
	# This means the section children and their children recursively.
	#
	# ~~~
	# var wiki = new Wiki
	# var s = new Section(wiki, "my_section", "My Section")
	# var a = new Asset(wiki, "my_asset", "My Asset")
	# wiki.add s
	# wiki.add a
	# assert wiki.root.resources == [s, a: Resource]
	# ~~~
	# TODO doc tests
	fun resources: Array[Resource] do
		var v = new ResourcesVisitor
		v.visit(self)
		v.resources.shift # remove the resource itself
		return v.resources
	end

	# Get all resources with `name` inside `self` (direct and indirect)
	# TODO doc tests
	fun resources_by_name(name: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.name == name then res.add resource
		end
		return res
	end

	# TODO comment
	# TODO doc tests
	fun resources_by_title(title: String): Array[Resource] do
		var res = new Array[Resource]
		for resource in resources do
			if resource.title != title then continue
			res.add resource
		end
		return res
	end

	# Add a resource to this section
	# TODO doc tests
	fun add(resource: Resource) do
		children.add resource
		resource.section = self
	end

	redef fun visit_all(v) do for child in children do v.visit(child)

	# Configure the section from a INI file
	# TODO doc tests
	fun configure_from_ini(ini: IniFile) do
		var hidden = ini["section.hidden"]
		if hidden != null then is_hidden = hidden == "true"
		title = ini["section.title"] or else title
	end

	# Default configuration filename
	var config_file = "section.ini"
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
end

# Utils

# A visitor that can visit Wiki resources
#
# ~~~
# class ExampleSectionCollector
#	super WikiVisitor
#
#	var sections = new Array[Section]
#
#	redef fun visit(resource) do
#		if resource isa Section and not resource isa Root then
#			sections.add resource
#		end
#		resource.visit_all(self)
#	end
# end
#
# var wiki = new Wiki
# wiki.add new Section(wiki, "foo", "Foo")
# wiki.add new Section(wiki, "bar", "bar")
#
# var v = new ExampleSectionCollector
# v.visit_wiki(wiki)
# assert v.sections.length == 2
# ~~~
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
