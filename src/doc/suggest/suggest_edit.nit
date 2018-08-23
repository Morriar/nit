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

module suggest_edit

import suggest_align
import cards

import cards::cards_freedoc

# TODO TODAY
# Title
# Links
# Doc
# Lists
# UML
# Scaffolding

class MDocEditor

	var mentity: MEntity
	var mainmodule: MModule
	var index: MEntityIndex

	var titles = new MdTitleEditor
	var intros = new MdIntroEditor
	var tocs = new MdTOCEditor
	var starting = new MdStartingEditor(mainmodule) is lazy
	var api = new MdAPIEditor(mainmodule) is lazy
	var testing = new MdTestingEditor
	var authors = new MdAuthorsEditor
	var links = new MdLinkInsert("http://nitweb.nitlanguage.org/doc/")
	# var docs = new MdDocInsert
	var lists = new MdListInsert
	var examples = new MdExampleInsert
	var examples_replace = new MdExampleReplacer
	var uml = new MdUmlInsert(mainmodule) is lazy

	fun edit_document(document: MdDocument) do
		var cbuilder = new MDocContextBuilder(mentity, index)
		cbuilder.enter_visit(document)
		var ctx = cbuilder.context

		titles.edit_document(ctx, document)
		# intros.edit_document(ctx, document)
		# tocs.edit_document(ctx, document)
		starting.edit_document(ctx, document)
		api.edit_document(ctx, document)
		testing.edit_document(ctx, document)
		authors.edit_document(ctx, document)

		examples_replace.edit_document(ctx, document)
		examples.edit_document(ctx, document)
		# lists.edit_document(ctx, document)
		uml.edit_document(ctx, document)
		# links.edit_document(ctx, document)
		# var render = new MarkdownRenderer
		# var md = render.render(document)
		# print md
        #
		# print "----------"
        #
		# var nast = mentity.model.mdoc_parser.parse(md)
		# mentity.model.mdoc_parser.post_process(nast)
		# md = render.render(nast)
		# print md
	end
end

class MDocContext

	var mentity: MEntity
	var index: MEntityIndex

	var model: Model is lazy do return mentity.model

	var mgroups = new Array[MGroup]
	var mmodules = new Array[MModule]
	var intro_mclasses = new Array[MClass]
	var intro_mprops = new Array[MProperty]

	var refs_index = new MdRefIndex

	var title: nullable MdHeading = null

	fun has_title: Bool do return title != null

	var intro = new Array[MdBlock]
	fun has_intro: Bool do return intro.not_empty

	var toc = new Array[MdBlock]
	fun has_toc: Bool do return toc.not_empty

	var starting = new Array[MdBlock]
	fun has_starting: Bool do return starting.not_empty

	var api = new Array[MdBlock]
	fun has_api: Bool do return api.not_empty

	var authors = new Array[MdBlock]
	fun has_authors: Bool do return authors.not_empty

	var testing = new Array[MdBlock]
	fun has_testing: Bool do return testing.not_empty

	var mentities = new HashSet[MEntity]
	var main_mentities = new HashSet[MEntity]
	var listed_mentities = new HashSet[MEntity]

	var cards = new HashMap[MEntity, Array[DocCommand]]

	var mentity_sections = new HashMap[MEntity, Array[MdSection]]
	var mentity_refs = new HashMap[MEntity, Array[MdRef]]

	fun has_link_for(mentity: MEntity): Bool do
		if not cards.has_key(mentity) then return false
		for card in cards[mentity] do
			if card isa CmdEntityLink then return true
		end
		return false
	end
end

class MDocContextBuilder
	super MdVisitor

	var mentity: MEntity
	var index: MEntityIndex

	var context = new MDocContext(mentity, index) is lazy

	redef fun enter_visit(node) do
		var filter = new ModelFilter(
			min_visibility = public_visibility,
			accept_fictive = false,
			accept_broken = false,
			accept_extern = false,
			accept_attribute = false,
			accept_test = false,
			accept_example = false,
			accept_doc = false,
			accept_man = false,
			accept_bin = false
		)

		var mentity = self.mentity
		if mentity isa MPackage then
			context.mgroups = mentity.collect_all_mgroups(filter).to_a
			context.mmodules = mentity.collect_mmodules(filter).to_a
			context.intro_mclasses = mentity.collect_intro_mclasses(filter).to_a
			context.intro_mprops = mentity.collect_intro_mproperties(filter).to_a
		end

		super
	end

	redef fun visit(node) do
		if node isa MdHeading and not context.has_title then
			context.title = node
		end
		if node isa MdBlock and node.md_themes_names.has("intro") then
			context.intro.add node
		end
		if node isa MdBlock then
			var md_section = node.md_section
			if md_section != null then
				if md_section.has_theme_recurse("install") then context.starting.add node
				if md_section.has_theme_recurse("usage") then context.starting.add node
				if md_section.has_theme_recurse("api") then context.api.add node
				if md_section.has_theme_recurse("tests") then context.testing.add node
				if md_section.has_theme_recurse("authors") then context.authors.add node
			end
		end
		# if node isa MdHeading then
		#	for ref in node.all_md_refs do
		#		if not ref isa MdRefMEntity then continue
		#		context.main_mentities.add ref.mentity
		#	end
		# end
		# if node isa MdListBlock then
		#	# print node
		#	for ref in node.all_md_refs do
		#		# print ref
		#		if not ref isa MdRefMEntity then continue
		#		context.listed_mentities.add ref.mentity
		#	end
		# end
		if node isa MdWikilink then
			var cmd = node.command
			if cmd isa CmdEntity then
				var mentity = cmd.mentity
				if mentity != null then
					if not context.cards.has_key(mentity) then
						context.cards[mentity] = new Array[DocCommand]
					end
					context.cards[mentity].add cmd
				end
			end
			return
		end
		# for ref in node.all_md_refs do
			# if not ref isa MdRefMEntity then continue
			# context.mentities.add ref.mentity
		# end

		# Collect refs
		for ref in node.md_refs do
			context.refs_index.add ref
			# if not ref isa MdRefMEntity then continue
			# var mentity = ref.mentity
			# if not context.mentity_refs.has_key(mentity) then
				# context.mentity_refs[mentity] = new Array[MdRefMEntity]
			# end
			# context.mentity_refs[mentity].add ref
		end


		node.visit_all(self)
	end
end

abstract class MdEditor
	super MdVisitor

	fun edit_document(context: MDocContext, document: MdDocument) do
		enter_visit(document)
	end

	redef fun visit(node) do
		if node isa MdBlock then
			visit_block(node)
		else
			node.visit_all(self)
		end
	end

	fun visit_block(block: MdBlock) do
		block.visit_all(self)
	end
end

# Scaffolding

class MdTitleEditor
	super MdEditor

	redef fun edit_document(context, doc) do
		var mentity = context.mentity
		if context.has_title then
			var title = context.title.as(not null)

			for ref in title.all_md_refs do
				if ref isa MdRefCommand then return
				if ref isa MdRefSpan and ref.mentity == mentity then return
			end

			title.prepend_child new MdText(new MdLocation(0, 0, 0, 0), " - ")
			title.prepend_child new MdCode(new MdLocation(0, 0, 0, 0), "`",
				context.mentity.full_name)
			return
		end

		# TODO create new
		var loc = new MdLocation(1, 1, 2, 1)
		var title = new MdHeading(loc, 1)

		var loc2 = new MdLocation(1, 1, 2, 1)
		var title_lib = new MdCode(loc2, "`", context.mentity.full_name)
		title.append_child title_lib

		var synopsis = ""
		if mentity isa MPackage then
			var ini = mentity.ini
			if ini != null and ini.has_key("package.desc") then
				synopsis = "[[ini-desc: {mentity.full_name}]]"
			end
		end

		if synopsis.is_empty then
			var mdoc = context.mentity.mdoc
			if mdoc != null then
				synopsis = mdoc.md_synopsis.write_to_string
			end
		end

		var loc3 = new MdLocation(1, 1, 2, 1)
		if not synopsis.is_empty then
			var title_text = new MdText(loc3, " - {synopsis}")
			title.append_child title_text
		end

		doc.prepend_child title
	end
end

class MdTOCEditor
	super MdEditor

	redef fun edit_document(context, doc) do
		if context.has_toc then return

		for name, cards in context.cards do
			for card in cards do
				if card isa CmdSummary then return
			end
		end

		var card = null
		var mentity = context.mentity
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null and mdoc.mdoc_headings.length > 3 then
			card = new CardTOC(mentity.model.mdoc_parser, mentity)
		end

		if card == null then return

		var cutpoint = null
		if context.has_title then
			var title = context.title.as(not null)
			cutpoint = title
		end

		var md = new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
		if cutpoint == null then
			doc.prepend_child md
		else
			cutpoint.insert_after md
		end
	end
end

# TODO
class MdIntroEditor
	super MdEditor

	redef fun edit_document(context, doc) do
		var title = context.title
		if title == null then return
		if context.has_intro then return

		var intro_mentity: nullable MEntity = null

		# print context.mgroups
		# for mgroup in context.mgroups do
			# if not mgroup.is_root then continue
			# var mdoc = mgroup.mdoc
			# if mdoc == null then continue
			# if mdoc.md_comment.write_to_string.trim.is_empty then continue
			# intro_mentity = mgroup
		# end

		# print context.mmodules
		if intro_mentity == null then
			for mmodule in context.mmodules do
				if mmodule.name != context.mentity.name then continue
				var mdoc = mmodule.mdoc
				if mdoc == null then continue
				if mdoc.md_comment.write_to_string.trim.is_empty then continue
				intro_mentity = mmodule
			end
		end

		# print context.intro_mclasses
		if intro_mentity == null and context.intro_mclasses.length == 1 then
			for mclass in context.intro_mclasses do
				var mdoc = mclass.intro.mdoc
				if mdoc == null then continue
				if mdoc.md_comment.write_to_string.trim.is_empty then continue
				intro_mentity = mclass
			end
		end

		if intro_mentity != null then
			var card = new CardDoc(context.mentity.model.mdoc_parser, intro_mentity)
			var text = new MdText(new MdLocation(0,0,0,0), card.markdown)
			var para = new MdParagraph(new MdLocation(0,0,0,0))
			para.append_child text
			title.insert_after para
		end
	end
end

class MdStartingEditor
	super MdEditor

	var mainmodule: MModule

	redef fun edit_document(context,doc) do
		if context.has_starting then
			# TODO
		else
			var card = null
			var mentity = context.mentity
			var model = mentity.model
			var filter = new ModelFilter(
				accept_test = false,
				accept_example = false
			)

			if not mentity isa MPackage then return

			var mains = new Array[MEntity]
			var cmd_mains = new CmdMains(model, filter, mentity)
			var res_mains = cmd_mains.init_command
			if res_mains isa CmdSuccess then mains.add_all cmd_mains.results.as(not null)

			print mains
			if mains.is_empty then return

			var cmd_parents = new CmdParents(model, mainmodule, filter, mentity)
			var res_parents = cmd_parents.init_command
			var no_parent = not res_parents isa CmdSuccess

			var ini = mentity.ini
			var no_git = ini == null or not ini.has_key("upstream.git")

			var man_synopsis = new HashSet[MEntity]
			var man_opts = new HashSet[MEntity]
			for main in mains do
				var cmd_man = new CmdManFile(model, filter, main)
				var res_man = cmd_man.init_command
				var no_man = not res_man isa CmdSuccess

				if not no_man then
					var cmd_syn = new CmdManSynopsis(model, filter, main)
					var res_syn = cmd_syn.init_command
					var no_syn = not res_syn isa CmdSuccess

					if not no_syn then
						man_synopsis.add main
					end

					var cmd_opts = new CmdManOptions(model, filter, main)
					var res_opts = cmd_opts.init_command
					var no_opts = not res_opts isa CmdSuccess

					if not no_opts then
						man_opts.add main
					end
				end
			end
			card = new CardGettingStarted(model.mdoc_parser, mentity, no_parent, no_git, mains, man_synopsis, man_opts, true)
			# if card != null then
				if context.has_intro then
					context.intro.last.insert_after new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
				else if context.has_title then
					context.title.as(not null).insert_after new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
				else
					doc.append_child new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
				end
			# end
		end
	end
end

class MdAPIEditor
	super MdEditor

	var mainmodule: MModule

	redef fun edit_document(context,doc) do
		# if context.has_api then return

		var cards = new Array[DocCard]
		var mmodules = context.mmodules
		var mclasses = context.intro_mclasses

		var mprops_mdoc = new Array[MProperty]
		var mprops_other = new Array[MProperty]

		var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		var q = new Vector
		q.inc "in: {context.mentity.full_name}"
		q.inc "+in: {context.mentity.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+has_comment: true"
		q.inc "+visibility: public"
		q.inc "-name: SELF"
		q.inc "-kind: MPackage"
		q.inc "-kind: MGroup"
		q.inc "-kind: MClassDef"
		q.inc "-kind: MPropDef"


		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			if kind == "MProperty" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			# print qq
			var matches = context.index.match_query(qq)
			for match in matches do
				var card = new CardDoc(context.model.mdoc_parser, match.document.mentity, 2)
				cards.add card
			end
			# if cards.not_empty then break
		end label kinds


		# No mclass, show only mprops
		if mclasses.is_empty then
			for mprop in context.intro_mprops do
				var mdoc = mprop.intro.mdoc
				if mdoc == null or mdoc.md_comment.write_to_string.trim.is_empty then
					mprops_other.add mprop
				else
					mprops_mdoc.add mprop
				end
			end

			if mprops_mdoc.not_empty and mprops_mdoc.length <= 5 then
				cards.add new CardMdTitle(2, "Features")
				for mprop in mprops_mdoc do
					cards.add new CardAPI(context.model.mdoc_parser, mprop, 3)
				end
			else
				mprops_other.prepend mprops_mdoc
			end
			if mprops_other.not_empty then
				var title = if cards.is_empty then "Features" else "Other features"
				cards.add new CardList(context.model.mdoc_parser, context.mentity,
					title, 2, mprops_other)
			end
		end

		var mclasses_mdoc = new Array[MClass]
		var mclasses_other = new Array[MClass]

		# MClasses, only one module
		if cards.is_empty and mmodules.length <= 1 and mclasses.not_empty then
			for mclass in context.intro_mclasses do
				var mdoc = mclass.intro.mdoc
				if mdoc == null or mdoc.md_comment.write_to_string.trim.is_empty then
					mclasses_other.add mclass
				else
					mclasses_mdoc.add mclass
				end
			end

			if mclasses_mdoc.not_empty and mclasses_mdoc.length <= 5 then
				cards.add new CardMdTitle(2, "Features")
				for mclass in mclasses_mdoc do
					cards.add new CardAPI(context.model.mdoc_parser, mclass, 3)
				end
			else
				mclasses_other.prepend mclasses_mdoc
			end
			if mclasses_other.not_empty then
				var title = if cards.is_empty then "Features" else "Other features"
				cards.add new CardList(context.model.mdoc_parser, context.mentity,
					title, 2, mclasses_other)
			end
		end

		var mmodules_mdoc = new Array[MModule]
		var mmodules_other = new Array[MModule]

		# MModules
		if cards.is_empty then
			for mmodule in mmodules do
				if mmodule.name == context.mentity.name then continue
				var mdoc = mmodule.mdoc
				if mdoc == null or mdoc.md_comment.write_to_string.trim.is_empty then
					mmodules_other.add mmodule
				else
					mmodules_mdoc.add mmodule
				end
			end

			if mmodules_mdoc.not_empty and mmodules_mdoc.length <= 5 then
				cards.add new CardMdTitle(2, "Features")
				for mmodule in mmodules_mdoc do
					cards.add new CardAPI(context.model.mdoc_parser, mmodule, 3)
				end
			else
				mmodules_other.prepend mmodules_mdoc
			end
			if mmodules_other.not_empty then
				var title = if cards.is_empty then "Features" else "Other features"
				cards.add new CardList(context.model.mdoc_parser, context.mentity,
					title, 2, mmodules_other)
			end
		end

		# Find cutpoint
		var cutpoint = null
		if context.has_starting then
			cutpoint = context.starting.last
		else if context.has_intro then
			cutpoint = context.intro.last
		else if context.has_title then
			cutpoint = context.title.as(not null)
		end

		var last_node = null
		for card in cards do
			var md = new MdText(new MdLocation(0,0,0,0), card.markdown)
			if last_node != null then
				last_node.insert_after(md)
			else if cutpoint == null then
				doc.append_child md
			else
				cutpoint.insert_after(md)
			end
			last_node = md
		end
	end
end


class MdTestingEditor
	super MdEditor

	redef fun edit_document(context, doc) do
		if context.has_testing then
			# TODO
		else
			var mentity = context.mentity
			var card  = null

			# Testing
			var cmd_tests = new CmdTesting(mentity.model, new ModelFilter, mentity)
			var res_tests = cmd_tests.init_command
			var no_tests = not res_tests isa CmdSuccess

			if not no_tests then
				card = new CardTesting(mentity.model.mdoc_parser, mentity)
			end

			if card != null then
				if context.has_authors then
					context.authors.first.insert_before new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
				else
					doc.append_child new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
				end
			end

		end
	end
end

class MdAuthorsEditor
	super MdEditor

	redef fun edit_document(context, doc) do
		if context.has_authors then
			# TODO
		else
			var card = new CardAuthors.from_mentity(context.mentity.model.mdoc_parser, context.mentity)
			if not card.no_author or not card.no_contrib then
				doc.append_child new MdText(new MdLocation(0, 0, 0, 0), card.markdown)
			end
		end
	end
end

class MdLinkInsert
	super MdEditor

	var doc_url: String

	var context: MDocContext is noinit
	var done = new HashSet[MEntity]

	redef fun edit_document(context, doc) do
		self.context = context
		self.done.clear
		# super

		var mpackage = context.mentity
		if not mpackage isa MPackage then return

		var mgroups = mpackage.collect_all_mgroups(
			new ModelFilter(accept_test = false, accept_example = false))
		var mmodules = mpackage.collect_mmodules(
			new ModelFilter(accept_fictive = false, accept_test = false, accept_example = false))
		var mclasses = new Array[MClass]
		for mmodule in mmodules do
			mclasses.add_all mmodule.collect_intro_mclasses(
				new ModelFilter(accept_fictive = false, accept_test = false, accept_example = false))
		end
		var mprops = new Array[MProperty]
		for mclass in mclasses do
			mprops.add_all mclass.collect_intro_mproperties(
				new ModelFilter(accept_attribute = false, accept_fictive = false, accept_test = false, accept_example = false))
		end

		# Make package link
		var mpackage_targets = new MdRefs
		if not context.has_link_for(mpackage) then
			var q = new Vector
			q.inc("+mentity: {mpackage.full_name}")
			q.inc("ref: MdRefSpan")
			q.inc("block_theme: intro")
			q.inc("block_theme: package")
			q.inc("string: {mpackage.name}")
			q.inc("block: MdParagraph")
			q.inc("-block: MdHeading")
			mpackage_targets.add_all context.refs_index.find(q)
		end
		# inser_link(mpackage_targets)

		# Make group links
		var mgroups_targets = new MdRefs
		# if mgroups.length > 1 then
			for mgroup in mgroups do
				if mgroup.is_root then continue
				if context.has_link_for(mgroup) then continue

				var q = new Vector
				q.inc("+mentity: {mgroup.full_name}")
				q.inc("ref: MdRefSpan")
				q.inc("-ref: MdRefCode")
				q.inc("block_theme: intro")
				q.inc("block_theme: group")
				q.inc("string: {mgroup.name}")
				q.inc("block: MdParagraph")
				q.inc("-block: MdHeading")
				mgroups_targets.add_all context.refs_index.find(q)
			end
		# end
		# inser_link(mgroups_targets)

		# Make modules linkns
		var mmodules_targets = new MdRefs
		# if mmodules.length > 1 then
			for mmodule in mmodules do
				if context.has_link_for(mmodule) then continue

				var q = new Vector
				q.inc("+mentity: {mmodule.full_name}")
				q.inc("ref: MdRefSpan")
				q.inc("-ref: MdRefCode")
				q.inc("block_theme: intro")
				q.inc("block_theme: module")
				q.inc("string: {mmodule.name}")
				q.inc("block: MdParagraph")
				q.inc("-block: MdHeading")
				# if mmodules.length == 1 then
					q.inc("+block_theme: module")
				# end
				mmodules_targets.add_all context.refs_index.find(q)
			end

		var mclasses_targets = new MdRefs
		# if mmodules.length > 1 then
			for mclass in mclasses do
				if context.has_link_for(mclass) then continue

				var q = new Vector
				q.inc("+mentity: {mclass.full_name}")
				q.inc("ref: MdRefSpan")
				q.inc("-ref: MdRefCode")
				# q.inc("block_theme: intro")
				q.inc("block_theme: class")
				q.inc("string: {mclass.name}")
				q.inc("block: MdParagraph")
				q.inc("-block: MdHeading")
				mclasses_targets.add_all context.refs_index.find(q)
			end

		var mprops_targets = new MdRefs
		# if mmodules.length > 1 then
			for mprop in mprops do
				if context.has_link_for(mprop) then continue

				var q = new Vector
				q.inc("+mentity: {mprop.full_name}")
				# q.inc("ref: MdRefSpan")
				# q.inc("-ref: MdRefCode")
				# q.inc("block_theme: intro")
				# q.inc("block_theme: class")
				# q.inc("string: {mprop.name}")
				# q.inc("block: MdParagraph")
				# q.inc("-block: MdHeading")
				mprops_targets.add_all context.refs_index.find(q)
			end
		# print mprops
		# print context.refs_index.refs
		# print mprops_targets

		var all_targets = new MdRefs
		all_targets.add_all mpackage_targets
		all_targets.add_all mgroups_targets
		all_targets.add_all mmodules_targets
		all_targets.add_all mclasses_targets
		# all_targets.add_all mprops_targets
		all_targets.sort

		# print all_targets

		var done_mentities = new HashSet[MEntity]
		var done_words = new HashMap[MdText, HashSet[String]]
		var done_spans = new HashSet[MdCode]

		for target in all_targets do
			# print target
			# print target.ref.vector

			var ref = target.ref
			if not ref isa MdRefMEntity then continue
			if done_mentities.has(ref.mentity) then continue
			if ref isa MdRefSpan and done_spans.has(ref.node.as(MdCode)) then continue
			if ref isa MdRefText then
				var node = ref.node.as(MdText)
				if done_words.has_key(node) and done_words[node].has(ref.string) then continue
			end

			# print ref.node
			inser_link(ref)

			done_mentities.add ref.mentity
			if ref isa MdRefSpan then
				done_spans.add ref.node.as(MdCode)
			else if ref isa MdRefText then
				var node = ref.node.as(MdText)
				if not done_words.has_key(node) then
					done_words[node] = new HashSet[String]
				end
				done_words[node].add ref.string
			end
		end

		# end
		# inser_link(mgroup_targets)

		#	for match in matches do
		#		var ref = match.ref
		#		# print ref.node
		#		if ref isa MdRefSpan then
		#			var link = make_link("`{ref.node.as(MdCode).literal}`", ref.mentity)
		#			insert_in_span(link, ref.node.as(MdCode))
		#			break
		#		end
		#		if ref isa MdRefText then
		#			var link = make_link(ref.string, ref.mentity)
		#			insert_in_text(link, ref.string, ref.node.as(MdText))
		#			break
		#		end
		#	end
		# end

		# Find all refs
		# var package_span_refs = new Array[MdRefSpan]
		# var package_text_refs = new Array[MdRefText]
		# for ref in doc.all_md_refs do
			# if not ref isa MdRefMEntity then continue
			# if not ref.mentity == mpackage then continue
			# if not ref.node.md_block isa MdParagraph then continue
			# package_refs.add ref
		# end

		# print package_refs
		# Find best ref

			# Close to top
			# Intro
			# Span ref
			# Name ref
		# print mclasses

		# for mclass in mclasses do
			# print mclass
			# var q = new Vector
			# q.inc("mentity: {mclass.full_name}")
			# print context.refs_index.find(q)
		# end
	end

	fun inser_link(ref: MdRefMEntity) do
		# print ref.node
		if ref isa MdRefSpan then
			var link = make_link("`{ref.node.as(MdCode).literal}`", ref.mentity)
			insert_in_span(link, ref.node.as(MdCode))
		else if ref isa MdRefText then
			var link = make_link(ref.string, ref.mentity)
			insert_in_text(link, ref.string, ref.node.as(MdText))
		end
	end

	fun make_link(name: String, mentity: MEntity): String do
		if mentity.name != name then
			return "[[{mentity.full_name} | text: {name}]]"
		end
		return "[[{mentity.full_name}]]"
	end

	fun insert_in_span(cmd: String, code: MdCode) do
		code.replace(new MdText(new MdLocation(0,0,0,0), cmd))
	end

	fun insert_in_text(cmd: String, name: String, text: MdText) do
		text.literal = text.literal.replace_first(name, cmd)
	end

	redef fun visit(node) do
		if not node isa MdText then
			node.visit_all(self)
			return
		end

			# print node
			# print node.md_refs

		var words = new HashSet[String]

		for ref in node.md_refs do
			if not ref isa MdRefText then continue
			if words.has(ref.string) then continue
			# if node.md_block.md_themes_names.has("intro") then continue
			if not context.mentity.has_mentity(ref.mentity) then continue
			if done.has(ref.mentity) then continue

			if not node.parent isa MdParagraph then continue
			# if node.md_block isa MdHeading then continue

			# print ref.string
			# print node.literal
			# TODO theme
			var cmd = "[[{ref.mentity.full_name}]]"
			if ref.mentity.name != ref.string then
				cmd = "[[{ref.mentity.full_name} | text: {ref.string}]]"
			end
			node.literal = node.literal.replace_first(ref.string, cmd)
			# print node.literal

			done.add ref.mentity
			words.add ref.string

			# return
		end
		# var mentities = context.mentities
		# print node.location
		# print mentities
		# TODO

		# Collect mentities
			# in package
			# out package
		# Pour chaque mentity
			# Make link
			# Trouver la première ocorrurence utilisable
			# Ajouter lien
		node.visit_all(self)
	end
end

class MdDocInsert
	super MdEditor

	redef fun visit_block(block) do
		# TODO


		# Collect mentities
			# in package
			# out package?
		# Pour chaque mentity
			# Make card
			# Trouver la première ocorrurence utilisable
			# Ajouter doc
		super
	end
end

class MdDocReplacer
	super MdEditor

	redef fun visit_block(block) do
		# TODO

		# Match MDoc
			# Similarity > 90 = card
		super
	end
end


class MdExampleReplacer
	super MdEditor

	redef fun visit_block(block) do
		if block isa MdCodeBlock then
			var refs = block.all_md_refs
			for ref in refs do
				if not ref isa MdRefExample then continue
				var mentity = ref.mentity
				if ref.similarity < 0.9 then continue

				var card = new CardCode(mentity.model.mdoc_parser, mentity)
				var md = card.markdown
				var l = new MdLocation(0, 0, 0, 0)
				var p = new MdParagraph(l)
				p.append_child new MdText(l, md)
				block.replace p
				return
			end
		end
		super
	end
end


class MdExampleInsert
	super MdEditor

	redef fun edit_document(context, doc) do
		super

		var model = context.mentity.model
		var mentity = context.mentity

		var examples = new Array[MModule]
		for mmodule in model.collect_mmodules do
			if not mmodule.is_example then continue
			if not mentity.has_mentity(mmodule) then continue
			examples.add mmodule
		end

		# TODO use tests
		# TODO has code
		# TODO sort by size / relevance

		# var other_examples = new Array[MEntity]
		# var ilast = null
		# var ilast_line = 0
		# var icount = 0
		var done_sections = new Array[MdSection]

		for example in examples do
			var mexample = example.mexample
			if mexample == null then continue

			print context.cards.keys
			print example
			if context.cards.has_key(example) then break

			# var loc = example.location
			# if icount >= 3 or loc.line_end - loc.line_start > 100 then
				# other_examples.add example
				# continue
			# end

			var refs = new MdRefs

			for usage, count in mexample.example_for do
				if not mentity.has_mentity(usage) then continue

				var q = new Vector
				q.inc("+mentity: {usage.full_name}")
				q.inc "ref: MdRefSpan"
				q.inc "block_theme: example"
				q.inc "-ref: MdRefCode"
				refs.add_all context.refs_index.find(q)
			end

			var counter = new Counter[MdSection]
			for ref in refs do
				var md_section = ref.ref.node.md_block.md_section
				if md_section == null then continue
				counter[md_section] += (ref.score * 100.0).to_i
			end

			for section in counter.sort do
				if done_sections.has(section) then continue
				done_sections.add section

				var last = null
				if section.blocks.not_empty then last = section.blocks.last
				if last == null then last = section.title

				if last != null then
					var md = "Example from `{example.full_name}`:\n\n[[code: {example.full_name}]]"
					var p = new MdParagraph(new MdLocation(0,0,0,0))
					var t = new MdText(new MdLocation(0,0,0,0), md)
					p.append_child t
					last.insert_after p
					# if ilast == null or last.location.line_end > ilast_line then
						# ilast = t
						# ilast_line = last.location.line_end
					# end
					break
				end
			end
		end

		# if other_examples.not_empty then
		#	var level = 2
		#	var title = "\n\nExample"
		#	var cutpoint = null
		#	if other_examples.length > 1 then title = "{title}s"
		#	if ilast != null then
		#		level = 0
		#		title = "\n\nMore examples"
		#		var parent = ilast.parent
		#		if parent != null then
		#			cutpoint = parent.last_child
		#		end
		#	else if context.has_starting then
		#		cutpoint = context.starting.last
		#	else if context.has_intro then
		#		cutpoint = context.intro.last
		#	end
        #
		#	var card = new CardList(model.mdoc_parser, context.mentity,
		#		title, level, other_examples)
		#	var p = new MdParagraph(new MdLocation(0,0,0,0))
		#	var t = new MdText(new MdLocation(0,0,0,0), card.markdown)
		#	p.append_child(t)
        #
		#	if cutpoint == null then
		#		doc.append_child p
		#	else
		#		cutpoint.insert_after p
		#	end
		# end
	end
end


class MdListInsert
	super MdEditor

	redef fun edit_document(context, document) do
		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.mentity.full_name}"
		q.inc "+in: {context.mentity.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+visibility: public"
		q.inc "-name: SELF"
		q.inc "-kind: MClassDef"
		q.inc "-kind: MPropDef"

		var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			var matches = context.index.match_query(qq)
			if matches.length > 1 then
				var mentities = new Array[MEntity]
				for match in matches do mentities.add match.document.mentity
				var card = new CardList(context.model.mdoc_parser, context.mentity, null, null, mentities)
				cards.add card
			end
			if cards.not_empty then break
		end

		# TODO
		# Groups / Other groups
		# Modules / Other modules
		# Classes / Other classes
		# Examples / Other examples
		# Tests
		# See also


	end
end

class MdUmlInsert
	super MdEditor

	var mainmodule: MModule

	redef fun edit_document(context, document) do

		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.mentity.full_name}"
		q.inc "+in: {context.mentity.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+visibility: public"

		for mentity, cardse in context.cards do
			for card in cardse do if card isa CmdUML then return
		end

		var kinds = ["MGroup", "MModule", "MClass"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			var matches = context.index.match_query(qq)
			if matches.length > 2 then
				var mentities = new Array[MEntity]
				for match in matches do
					# if mentities.length >= 15 then break
					mentities.add match.document.mentity
				end
				if has_inheritance(mentities) > 2 then
					var card = new CardUML(context.model.mdoc_parser, context.mentity, mentities)
					# if suggester.is_dismissed(card) then continue
					# if doc.has_card(card) then continue
					cards.add card
				end
			end
			if cards.not_empty then break
		end

		if cards.is_empty then


			# MClass diag
			var mmodules = context.mmodules
			if mmodules.length <= 1 then
				var mclasses = mmodules.first.collect_intro_mclasses(new ModelFilter(
					min_visibility = public_visibility,
					accept_test = false, accept_example = false, accept_fictive = false
				)).to_a

				if mclasses.length > 1 and mclasses.length <= 15 then
					if has_inheritance(mclasses) > 2 then
						cards.add new CardUML(context.mentity.model.mdoc_parser,
							context.mentity, mclasses)
					end
				end
			end

			# MModules diagrams
			var mgroups = context.mgroups
			if cards.is_empty and mgroups.length == 1 then
				if mmodules.length > 1 and mmodules.length <= 10 then
					cards.add new CardUML(context.mentity.model.mdoc_parser,
						context.mentity, mmodules)
				end
			end

			# MGroups diagrams
			if cards.is_empty and mgroups.length > 1 then
				cards.add new CardUML(context.mentity.model.mdoc_parser,
					context.mentity, mgroups)
			end
		end

		# TODO
		# Module import
		# Package import

		for card in cards do
			var cutpoint = null
			if context.has_api then
				cutpoint = context.api.first
			else if context.has_starting then
				cutpoint = context.starting.last
			else if context.has_intro then
				cutpoint = context.intro.last
			else if context.has_title then
				cutpoint = context.title.as(not null)
			end

			var p = new MdParagraph(new MdLocation(0,0,0,0))
			var t = new MdText(new MdLocation(0,0,0,0), card.markdown)
			p.append_child t
			if cutpoint == null then
				document.append_child p
			else
				cutpoint.insert_after p
			end
		end
	end

	fun has_inheritance(mentities: Array[MEntity]): Int do
		var count = 0
		for mentity in mentities do
			for oentity in mentities do
				if mentity.collect_ancestors(mainmodule).has(oentity) then count += 1
			end
		end
		return count
	end
end

redef class MdRef
	var vector: Vector is lazy do
		var v = new Vector
		v.inc("ref: {class_name}")
		v.inc("block: {node.md_block.class_name}")
		# for theme in node.md_themes_names do
			# v.inc("local_theme: {theme}")
		# end
		for theme in node.md_block.md_themes do
			if theme isa MdThemeFeatures then continue
			if theme isa MdThemeExamples then continue
			v.inc("block_theme: {theme}")
		end
		# for theme in node.md_block.md_section.md_themes_names do
			# v.inc("section_theme: {theme}")
		# end
		return v
	end
end

redef class MdRefMEntity
	redef var vector is lazy do
		var v = super
		v.inc("ref: MdRefMEntity")
		v.inc("mentity: {mentity.full_name}")
		return v
	end
end

redef class MdRefText
	redef var vector is lazy do
		var v = super
		v.inc("word: {string}")
		return v
	end
end

class MdRefMatch
	var ref: MdRef
	var score: Float

	redef fun to_s do return "{ref} ({score}) - {ref.node.location}"
end

class MdRefs
	super Array[MdRefMatch]

	fun sort do (new MdMatchComparator).sort(self)
end

class MdRefIndex
	var refs = new Array[MdRef]

	fun add(ref: MdRef) do refs.add ref

	var sorter = new MdMatchComparator

	fun find(query: Vector): MdRefs do
		# Clean query modifiers
		var cleaned_query = new Vector
		var must_have_keys = new Array[String]
		var not_have_keys = new Array[String]
		for term, count in query do
			var boost = 0.0
			if term isa String then
				if term.has_prefix("+") then
					term = term.substring(1, term.length)
					must_have_keys.add term
					# continue
				else if term.has_prefix("-") then
					term = term.substring(1, term.length)
					not_have_keys.add term
					continue
				# else if term.has_prefix("!") then
					# term = term.substring(1, term.length)
					# boost = 10.0
				end
			end
			cleaned_query[term] += count + boost
		end

		# Locate documents
		var res = new MdRefs
		for ref in refs do
			var s = ref.vector.cosine_similarity(cleaned_query)
			if s == 0.0 then continue
			res.add new MdRefMatch(ref, s)
		end

		# Filter must have keys
		var res2 = new MdRefs
		for doc in res do
			for key in must_have_keys do
				if not doc.ref.vector.has_key(key) then continue label docs
			end
			res2.add doc
		end label docs

		# Filter must not have keys
		var res3 = new MdRefs
		for doc in res2 do
			for key in not_have_keys do
				if doc.ref.vector.has_key(key) then continue label docs
			end
			res3.add doc
		end label docs

		sorter.sort res3
		return res3
	end
end

class MdMatchComparator
	super Comparator

	redef type COMPARED: MdRefMatch

	redef fun compare(a, b) do
		var res = b.score <=> a.score
		if res == 0 then
			return a.ref.node.location.line_start <=> b.ref.node.location.line_start
		end
		return res
	end
end
