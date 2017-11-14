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

# Composes the DocComposite tree of a DocPage and organizes its content.
module static_structure

import static::static_base

redef class ToolContext

	# Do not generate `graphviz` diagrams.
	var opt_nodot = new OptionBool("Do not generate graphs with graphviz", "--no-dot")

	redef init do
		super
		option_context.add_option(opt_nodot)
	end
end

redef class DocModel

	# Populates the given DocModel.
	fun build_structure do
		for page in pages.values do
			if page isa PageMEntity then page.build_concerns(self)
			page.apply_structure(self)
		end
	end
end

redef class DocPage

	# Populates `self` with structure elements like DocComposite ones.
	#
	# See `StructurePhase`.
	fun apply_structure(doc: DocModel) do end
end

redef class PageHome
	redef fun apply_structure(doc) do
		var title = doc.custom_title or else "Welcome to Nitdoc!"
		var intro = doc.custom_intro

		if intro != null then
			main_tab.content.add new CardPageHeader(title)
			main_tab.content.add new CardHome(intro)
		else
			main_tab.content.add new CardPageHeader(title, "The Nit API documentation.")
		end

		main_tab.content.add new CardCatalogStats(doc.catalog)
		main_tab.content.add new CardCatalogTags(doc.catalog)

		main_tab.content.add new CardSection(2, "Packages")
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)

		var mpackages = doc.catalog.mpackages.values.to_a
		mpackages_sorter.sort mpackages
		var list = new CardList
		for mpackage in mpackages do
			#TODO package card with tags, author and license
			list.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end
		# TODO pagination?
		main_tab.content.add list
	end
end

redef class PageMEntity
	# Concerns to display in this page.
	var concerns: nullable ConcernsTree = null

	# Build the `concerns` tree for this page.
	#
	# Since only `MEntityPage`, this method is a no-op for everything else.
	private fun build_concerns(doc: DocModel) do end

	redef fun apply_structure(doc) do
		var mentity = self.mentity

		var sq = new CmdSummary(doc, mentity,
			mdoc = mentity.mdoc_or_fallback, markdown_processor = doc.md_processor)
		sq.init_command

		main_tab.content.add new CardMDoc(mentity.mdoc_or_fallback)

		var summary = sq.summary
		if summary != null then
			main_tab.sidebar.cards.add new CardMdSummary(headlines = summary, md_processor = doc.inline_processor)
		end

		if mentity isa MPackage then
			main_tab.metadata.cards.add new CardMetadata(mentity.metadata,
				doc.catalog.mpackages_stats[mentity],
				doc.catalog.deps[mentity].direct_greaters.to_a,
				doc.catalog.deps[mentity].direct_smallers.to_a)
		end

		build_api(doc)
		build_dependencies(doc)
	end

	# Build the API tab
	fun build_api(doc: DocModel) do
		var dq = new CmdFeatures(doc, mentity)
		dq.init_command

		var mentities = dq.results
		if mentities == null then return

		var list = new CardList
		for m in mentities do list.cards.add new CardMEntity(m)
		api_tab.content.add list
	end

	# Build the dependencies tab
	fun build_dependencies(doc: DocModel) do
		if not doc.ctx.opt_nodot.value then
			var gq = new CmdInheritanceGraph(doc, mentity)
			gq.init_command
			var graph = gq.graph
			if graph != null then
				graph.draw(2, 2)
				dep_tab.content.add new CardGraph(mentity, graph)
			end
		end

		var inh = new HashMap[String, CmdEntityList]
		inh["Ancestors"] = new CmdAncestors(doc, mentity, parents = false)
		inh["Parents"] = new CmdParents(doc, mentity)
		inh["Children"] = new CmdChildren(doc, mentity)
		inh["Descendants"] = new CmdDescendants(doc, mentity, children = false)

		for title, cmd in inh do
			cmd.init_command
			var results = cmd.results
			if results == null or results.is_empty then continue
			dep_tab.content.add new CardSection(3, title)

			var list = new CardList
			for mentity in results do list.cards.add new CardMEntity(mentity)
			dep_tab.content.add list
		end
	end

	# Build the code panel
	fun build_code(doc: DocModel) do
		var cq = new CmdCode(doc, doc.modelbuilder, mentity)
		cq.init_command

		var code = cq.node
		if code == null then return
		code_tab.content.add new CardCode(mentity, code)
	end

	# Build the linearization panel
	fun build_linearization(doc: DocModel) do
		var lq = new CmdLinearization(doc, mentity)
		lq.init_command

		var mentities = lq.results
		if mentities == null then return

		if mentity isa MClass or mentity isa MClassDef then
			lin_tab.content.add new CardSection(2, "Class definitions")
		else if mentity isa MProperty or mentity isa MPropDef then
			lin_tab.content.add new CardSection(2, "Property definitions")
		end

		var list = new CardLinearizationList
		for m in mentities do
			var node = doc.modelbuilder.mentity2node(m)
			if node == null then continue
			if m == mentity or
			  (m isa MClassDef and m.is_intro) or
			  (m isa MPropDef and m.is_intro) then
				list.cards.add new CardLinearizationDef(m, node, is_active = true)
			else
				list.cards.add new CardLinearizationDef(m, node, is_active = false)
			end
		end
		lin_tab.content.add list
	end
end

redef class PageMModule
	redef fun apply_structure(doc) do
		super
		build_code(doc)
	end
end

redef class PageMClass
	redef fun apply_structure(doc) do
		super
		build_code(doc)
		build_linearization(doc)
	end
end

redef class PageMProperty
	redef fun apply_structure(doc) do
		super
		build_code(doc)
		build_linearization(doc)
	end
end

redef class PagePerson
	redef fun apply_structure(doc) do
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)
		main_tab.content.add new CardPageHeader(person.name, person.email)

		var maint = doc.catalog.maint2proj[person]
		mpackages_sorter.sort maint
		var mlist = new CardList
		for mpackage in maint do
			mlist.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		if maint.not_empty then
			main_tab.content.add new CardSection(3, "{maint.length} maintained packages")
			main_tab.content.add mlist
		end

		var contrib = doc.catalog.contrib2proj[person]
		mpackages_sorter.sort contrib
		var clist = new CardList
		for mpackage in contrib do
			clist.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		if contrib.not_empty then
			main_tab.content.add new CardSection(3, "{contrib.length} contributed packages")
			main_tab.content.add clist
		end
	end
end

redef class PageTag
	redef fun apply_structure(doc) do
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)
		main_tab.content.add new CardPageHeader(tag)

		var mpackages = doc.catalog.tag2proj[tag]
		mpackages_sorter.sort mpackages
		var list = new CardList
		for mpackage in mpackages do
			list.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		main_tab.content.add new CardSection(3, "{mpackages.length} packages")
		main_tab.content.add list
	end
end
