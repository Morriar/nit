# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Base entities shared by all the nitdoc code.
module static_base

import cards
import modelize
import toolcontext
import model::model_views

intrude import markdown::wikilinks

# The model of a Nitdoc documentation.
#
# `DocModel` contains the list of the `DocPage` to be generated.
#
# The model is populated through `DocPhase` to be constructed.
# It is a placeholder to share data between each phase.
class DocModel
	super ModelView

	# ToolContext to access rendering options
	var ctx: ToolContext

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	#
	var catalog: Catalog

	# `DocPage` composing the documentation associated to their ids.
	#
	# This is where `DocPhase` store and access pages to produce documentation.
	#
	# See `add_page`.
	var pages: Map[String, DocPage] = new HashMap[String, DocPage]

	# Add a `page` to this documentation.
	fun add_page(page: DocPage) do
		if pages.has_key(page.id) then
			print "Warning: multiple page with the same id `{page.id}`"
		end
		pages[page.id] = page
	end

	# Specific Markdown processor to use within Nitdoc
	var md_processor: MarkdownProcessor is lazy do
		var parser = new CommandParser(self, modelbuilder, catalog)
		return new CmdMarkdownProcessor(parser)
	end

	# Specific Markdown processor to use within Nitdoc
	var inline_processor: MarkdownProcessor is lazy do
		var parser = new CommandParser(self, modelbuilder, catalog)
		var proc = new CmdMarkdownProcessor(parser)
		proc.decorator = new CmdInlineDecorator(self)
		return proc
	end

	#
	var share_url: nullable String = null is writable
	#
	var custom_brand: nullable String = null is writable
	#
	var custom_title: nullable String = null is writable
	#
	var custom_footer: nullable String = null is writable
	#
	var custom_intro: nullable String = null is writable
	#
	var tracker_url: nullable String = null is writable
	#
	var piwik_site_id: nullable String = null is writable

	# Used to sort sidebar elements by name.
	var name_sorter = new MEntityNameSorter

end

# A documentation page abstraction.
#
# The page contains a link to the `root` of the `DocElement` that compose the
# the page.
class DocPage

	# Page uniq id.
	#
	# The `id` is used as name for the generated file corresponding to the page
	# (if any).
	# Because multiple pages can be generated in the same directory it should be
	# uniq.
	#
	# The `id` can also be used to establish links between pages (HTML links,
	# HTML anchors, vim links, etc.).
	var id: String is writable

	# Title of this page.
	var title: String is writable

	# Page tab panels
	#
	# Nitdoc pages are tabulated.
	# If a page has only one tab, it is presented as a single page.
	# With more than one tab, the HTML rendering process adds tab headers and
	# links.
	var tabs: Array[DocTab] = [main_tab] is lazy

	# The page main tab
	#
	# For most pages this tab is suffisent.
	# Subclasses can add more tabs.
	var main_tab = new DocTab("main", "Main")

	redef fun to_s do return title
end

# The Nitdoc overview page.
class PageHome
	super DocPage
end

# A DocPage documenting a MEntity.
class PageMEntity
	super DocPage
	autoinit mentity

	# Type of MEntity documented by this page.
	type MENTITY: MEntity

	# MEntity documented by this page.
	var mentity: MENTITY

	# For mentities the main tab is the doc tab
	redef var main_tab = new DocTab("doc", "Doc", true, "book")

	# API tab
	#
	# Where the MEntity API (groups, modules, classes, props) are displayed
	var api_tab = new DocTab("api", "API", false, "list")

	# Dependencies tab
	#
	# Where the MEntity importation or inheritance is displayed
	var dep_tab = new DocTab("inh", "Dependencies", false, "object-align-vertical")

	# Code tab
	#
	# Since all mentities does not have code, this tab in not in the `tabs` list
	# by default.
	var code_tab = new DocTab("code", "Code", false, "console")

	# Lienarization tab
	#
	# Since all mentities does not have a linearization, this tab in not in the
	# `tabs` list by default.
	var lin_tab = new DocTab("lin", "Linearization", false, "arrow-down")

	redef var tabs = [main_tab, api_tab, dep_tab] is lazy

	redef var id is lazy do return mentity.full_name
	redef var title is lazy do return mentity.name
end

# A documentation page for a MPackage
class PageMPackage
	super PageMEntity

	redef type MENTITY: MPackage

	redef var api_tab = new DocTab("api", "Groups & Modules", false, "list")
end

# A documentation page about a MGroup.
class PageMGroup
	super PageMEntity

	redef type MENTITY: MGroup

	redef var api_tab = new DocTab("api", "Subgroups & Modules", false, "list")
end

# A documentation page about a MModule.
class PageMModule
	super PageMEntity

	redef type MENTITY: MModule

	redef var api_tab = new DocTab("api", "Classes", false, "list")
	redef var dep_tab = new DocTab("inh", "Importation", false, "object-align-vertical")
	redef var tabs = [main_tab, api_tab, dep_tab, code_tab] is lazy
end

# A documentation page about a MClass.
class PageMClass
	super PageMEntity

	redef type MENTITY: MClass

	redef var api_tab = new DocTab("api", "Properties", false, "list")
	redef var dep_tab = new DocTab("inh", "Inheritance", false, "object-align-vertical")
	redef var tabs = [main_tab, api_tab, dep_tab, lin_tab] is lazy
end

# A documentation page about a MProperty.
class PageMProperty
	super PageMEntity

	redef type MENTITY: MProperty

	redef var tabs = [main_tab, lin_tab] is lazy
end

redef class MEntity
	# MEntities composing the breadcrumbs of a nitdoc page
	fun nitdoc_breadcrumbs: Array[MEntity] is abstract
end

redef class MPackage
	redef var nitdoc_breadcrumbs = [self: MEntity] is lazy
end

redef class MGroup
	redef var nitdoc_breadcrumbs is lazy do
		var parent = self.parent
		if parent != null then
			return parent.nitdoc_breadcrumbs + [self]
		end
		return mpackage.nitdoc_breadcrumbs
	end
end

redef class MModule
	redef var nitdoc_breadcrumbs is lazy do
		var mgroup = self.mgroup
		if mgroup != null then
			return mgroup.nitdoc_breadcrumbs + [self]
		end
		return [self]
	end
end

redef class MClass
	redef var nitdoc_breadcrumbs is lazy do
		return intro_mmodule.nitdoc_breadcrumbs + [self]
	end
end

redef class MClassDef
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(mmodule.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

redef class MProperty
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(intro_mclassdef.mclass.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

redef class MPropDef
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(mclassdef.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

# Cards


#
class DocTab
	#
	var id: String is writable
	#
	var title: String is writable
	#
	var is_active = false is optional, writable
	#
	var icon: nullable String = null is optional, writable
	#
	var content = new Array[DocCard]

	#
	var sidebar = new DocSidebar

	#
	var metadata = new DocSidebar

	#
	fun is_empty: Bool do return content.is_empty
end

# Nitdoc sidebar template.
class DocSidebar

	# Sidebar contains `DocCard`.
	var cards = new Array[DocCard]
	#
	fun is_empty: Bool do return cards.is_empty
end
