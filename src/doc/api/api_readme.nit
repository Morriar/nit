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

module api_readme

import api_model
import model::model_index
intrude import doc_down
intrude import markdown::wikilinks
# import doc_suggest
import cards_scaffolding
import doc::commands::commands_docdown

import doc::cards
import suggest_align

redef class NitwebConfig

	# TODO
	var cmd_parser = new CommandParser(model, mainmodule, modelbuilder, catalog) is lazy

	# Markdown parser for MDoc contents
	var mdoc_parser: MdParser is lazy do
		var md_parser = new MdParser
		md_parser.github_mode = true
		md_parser.wikilinks_mode = true
		# md_parser.post_processors.add new MDocProcessSynopsis(toolcontext)
		md_parser.post_processors.add new MDocProcessCodes(toolcontext)
		md_parser.post_processors.add new MDocProcessMEntityLinks(toolcontext, model, mainmodule)
		md_parser.post_processors.add new MDocProcessCommands(toolcontext, cmd_parser)
		md_parser.post_processors.add new MDocProcessSummary
		return md_parser
	end

	# TODO
	# var nlp_index: ModelNLPIndex is noinit, writable

	# TODO
	var sessions_dir: String is lazy do
		var dir = "tmp"
		dir.mkdir
		return dir
	end

	# TODO
	var doc_session: DocSession is lazy do
		var session = new DocSession
		# var dir = sessions_dir / "terrasa_a"
		var dir = "terrasa_a"
		dir.mkdir
		for file in dir.files do
			if not file.has_suffix("md") then continue
			var md = (dir / file).to_path.read_all
			session.docs.add new DocReadme(file, file.strip_extension, md)
		end
		return session
	end

	var nlp_proc = new NLPClient("http://localhost:9000") is lazy

	# TODO
	var mentity_index: MEntityIndex is lazy do
		var index = new MEntityIndex(toolcontext, mainmodule, nlp_proc)
		index.index_model(model, null)
		return index
	end
end

redef class APIRouter
	redef init do
		super
		use("/readme/", new APIReadme(config))
		use("/readme/docs", new APIReadmeSession(config))
		use("/readme/suggest", new APIReadmeSuggest(config))
		use("/readme/dismiss", new APIReadmeDismiss(config))
		use("/readme/clear", new APIReadmeClear(config))
	end
end

# Readme Handler
class APIReadme
	super APIHandler

	private var mdoc_parser: MdParser = config.mdoc_parser is lazy

	private var html_renderer = new MDocHtmlRenderer
	private var md_renderer = new MDocMdRenderer

	redef fun post(req, res) do
		var ast = mdoc_parser.parse(req.body)
		mdoc_parser.post_process(ast)

		var format = req.string_arg("format")
		if format != null and format == "md" then
			res.html md_renderer.render(ast)
		else
			res.html html_renderer.render(ast)
		end
	end
end

# TODO
class APIReadmeSession
	super APIHandler

	redef fun get(req, res) do
		res.json config.doc_session
	end
end

class APIReadmeDismiss
	super APIHandler

	redef fun post(req, res) do
		var card = req.body.trim
		if not card.is_empty then
			config.doc_session.dismissed.add card
			var obj = new JsonObject
			obj["card"] = card
			res.json obj
		end
	end
end

class APIReadmeClear
	super APIHandler

	redef fun post(req, res) do
		config.doc_session.dismissed.clear
		res.json new JsonObject
	end
end



# TODO
class APIReadmeSuggest
	super APIHandler

	redef fun post(req, res) do

		var model = config.model
		# var mbuilder = config.modelbuilder
		# var index = config.nlp_index

		var doc = config.mdoc_parser.parse(req.body)
		config.mdoc_parser.post_process(doc)

		var v = new HeadingsVisitor
		model.headings = v.collect_headings(doc)

		var target_name = req.string_arg("target")
		if target_name == "null" then target_name = null

		var tcmd = new CmdEntity(model, mentity_name = target_name)
		var tres = tcmd.init_command
		var context = null
		if tres isa CmdSuccess then
			context = tcmd.mentity
			# TODO handle errors and show tips
		end
		if context == null then
			# print "no context"
			return
		end

		var aligner = new MDocAligner(model, config.mainmodule, config.mentity_index, context)
		aligner.align_mdoc(doc)


		# var engine = new SuggestionEngine(view, mbuilder, index, target, doc)

		var line = req.int_arg("line") or else 1
		var col = req.int_arg("column") or else 1
		var loc = new MdLocation(line, col, line, col)

		var suggester = new MDocSuggester(model, config.mainmodule, config.mentity_index, model.mdoc_parser, config.doc_session.dismissed)
		var suggestions = suggester.suggest(doc, loc, context)

		var obj = new JsonObject
		# obj["summary"] = doc.all_subsections
		obj["suggestions"] = suggestions
		# obj["debug"] = engine.last_debug
		res.json obj
	end
end

# TODO
class MDocSuggester

	#
	var model: Model

	var mainmodule: MModule
	var mentities_index: MEntityIndex

	#
	var md_parser: MdParser

	var dismissed: Array[String]

	fun is_dismissed(card: DocCard): Bool do
		return dismissed.has(card.id)
	end

	var current_loc: MdLocation is noinit
	var current_node: nullable MdNode is noinit
	var doc: MdDocument is noinit

	var missing_sections = new Array[MDocState]

	#
	fun suggest(doc: MdDocument, loc: MdLocation, context: MEntity): Array[DocCard] do
		var suggestions = new Array[DocCard]

		self.doc = doc

		missing_sections.clear
		for state in md_sections do
			if state.is_missing(doc) then missing_sections.add state
		end

		self.current_loc = loc

		var location_visitor = new MdLocationVisitor(doc, loc)
		location_visitor.search

		var node = location_visitor.node
		var last = location_visitor.last

		# print "node: {node or else "NULL"}"
		# print "last: {last or else "NULL"}"

		if last != null then
			if node == null then
				node = last
			else if node isa MdDocument then
				node = last
			end
		end

		self.current_node = node

		if node != null then
			for card in node.suggest(self, context) do
				if is_dismissed(card) then continue
				if doc.has_card(card) then continue
				suggestions.add card
			end
			if suggestions.not_empty then return suggestions
		end

		var current_state = get_current_state(node, doc, context)
		# print "current: {current_state or else "NULL"}"

		if current_state != null then
			for card in current_state.suggest(doc, context, node) do
				if is_dismissed(card) then continue
				if doc.has_card(card) then continue
				suggestions.add card
			end
		end

		var states = get_next_states(node, doc, context)
		var allow_one_more = true
		var cards = new ArraySet[DocCard]
		for state in states do
			if state == current_state then continue

			# print "next: {state}"
			for card in state.suggest(doc, context, node) do
				if is_dismissed(card) then continue
				if doc.has_card(card) then continue
				cards.add card
			end
			for card in cards do
				if card isa CardScaffolding or card isa CardMEntity then
					if not allow_one_more then
						break label suggest
					else
						allow_one_more = false
						continue label suggest
					end
				end
			end
			# print suggestions
		end label suggest

		print dismissed
		print doc.cards
		for card in cards do
			if is_dismissed(card) then continue
			if doc.has_card(card) then continue
			suggestions.add card
			print "* {card}"
		end

		# suggestions.add_all cards

		return suggestions
	end

	var md_sections: Array[MDocState] is lazy do
		var states = new Array[MDocState]
		states.add new MDocEmpty(self)
		# states.add new MDocTOC(self)
		states.add new MDocExample(self, mentities_index)
		states.add new MDocStarting(self, mainmodule)
		states.add new MDocAPI(self, mainmodule, mentities_index)
		states.add new MDocTesting(self, mentities_index)
		states.add new MDocContributing(self)
		states.add new MDocAuthors(self)
		states.add new MDocLicense(self)
		return states
	end

	var md_states: Array[MDocState] is lazy do
		var states = new Array[MDocState]
		states.add new MDocEmpty(self)
		# states.add new MDocTOC(self)
		states.add new MDocIntro(self, mainmodule, mentities_index)
		states.add new MDocExample(self, mentities_index)
		states.add new MDocStarting(self, mainmodule)
		states.add new MDocAPI(self, mainmodule, mentities_index)
		states.add new MDocTesting(self, mentities_index)
		states.add new MDocContributing(self)
		states.add new MDocAuthors(self)
		states.add new MDocLicense(self)
		states.add new MDocFinished(self)
		return states
	end

	fun get_next_states(current_node: nullable MdNode, doc: MdDocument, context: MEntity): Array[MDocState] do
		var states = new Array[MDocState]
		for state in md_states do
			if state.is_missing(doc) then states.add state
		end
		return states
	end

	fun get_current_state(current_node: nullable MdNode, doc: MdDocument, context: MEntity): nullable MDocState do
		if current_node == null then return md_states.first
		if doc.children.is_empty then return md_states.first

		# print current_node

		var section = current_node.md_block.md_section
		if section == null then return md_states.first

		# print section
		# print section.all_md_themes_names

		for state in md_states do
			for theme in section.all_md_themes_names do
				if theme == "title" then continue
				if state.themes.has(theme) then return state
			end
		end
		return null
	end

end

abstract class MDocState
	var suggester: MDocSuggester

	var themes = new Array[String]

	fun is_missing(doc: MdDocument): Bool do
		var doc_themes = doc.all_md_themes_names
		for theme in themes do
			if doc_themes.has(theme) then return false
		end
		return true
	end

	fun suggest(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] is abstract
end

class MDocEmpty
	super MDocState

	redef var themes = ["title"]

	redef fun suggest(doc, context, current_node) do
		var mdoc_parser = context.model.mdoc_parser

		var cards = new Array[DocCard]

		var card

		card = new CardTipWelcome(mdoc_parser)
		if not suggester.is_dismissed(card) and not doc.has_card(card) then
			cards.add card
		end

		card = new CardTipRefs(mdoc_parser)
		if not suggester.is_dismissed(card) and not doc.has_card(card) then
			cards.add card
		end

		card = new CardTipCommands(mdoc_parser)
		if not suggester.is_dismissed(card) and not doc.has_card(card) then
			cards.add card
		end

		var no_desc = true
		if context isa MPackage then
			var no_ini = context.ini == null
			if no_ini then
				cards.add new CardTipIni(mdoc_parser, context)
			end
			no_desc = no_ini or not context.ini.as(not null).has_key("package.desc")
			if not no_ini and no_desc then
				cards.add new CardTipIniDesc(mdoc_parser)
			end
		end

		do
			card = new CardTitle(mdoc_parser, context, no_desc)
			if suggester.is_dismissed(card) then break
			if doc.has_card(card) then break
			cards.add card
		end

		return cards
	end
end

# TODO TOC
#
# At the end if many sections
class MDocTOC
	super MDocState

	redef var themes = ["toc"]

	redef fun suggest(doc, context, current_node) do
		var mdoc_parser = context.model.mdoc_parser

		var cards = new Array[DocCard]

		if doc.headings.length > 3 then
			cards.add new CardTOC(mdoc_parser, context)
		end

		return cards
	end
end

class MDocIntro
	super MDocAPI

	redef var themes = ["intro"]

	redef fun suggest(doc, context, current_node) do
		var cards = new ArraySet[DocCard]

		var in_list = false
		var in_code = false

		var parent = current_node
		while parent != null do
			# print parent
			if parent isa MdListBlock then
				in_list = true
				break
			else if parent isa MdCodeBlock then
				in_code = true
				break
			end
			parent = parent.parent
		end

		# print in_list
		# print in_heading
		# print in_code

		if in_list then
			cards.add_all suggest_list(doc, context, current_node)
			return cards.to_a
		end

		if in_code then
			cards.add_all suggest_example(doc, context, current_node)
			return cards.to_a
		end

		cards.add_all suggest_doc(doc, context, current_node)
		cards.add_all suggest_list(doc, context, current_node)
		# cards.add_all suggest_link(doc, context, current_node)
		# cards.add_all suggest_example(doc, context, current_node)
		# cards.add_all suggest_uml(doc, context, current_node)
		return cards.to_a
	end

	redef fun suggest_doc(doc, context, current_node) do
		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+has_comment: true"
		q.inc "+visibility: public"

		# Try suggest main module
		do
			var qq = new Vector.from(q)
			qq.inc "+kind: MModule"
			qq.inc "+name: {context.name}|sign"
			var matches = mentities_index.match_query(qq)
			for match in matches do
				var card = new CardDoc(context.model.mdoc_parser, match.document.mentity)
				if suggester.is_dismissed(card) then break
				if doc.has_card(card) then break
				cards.add card
			end
			if cards.not_empty then return cards
		end

		var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			var matches = mentities_index.match_query(qq)
			for match in matches do
				var card = new CardDoc(context.model.mdoc_parser, match.document.mentity)
				if suggester.is_dismissed(card) then break label kinds
				if doc.has_card(card) then break label kinds
				cards.add card
			end
			if cards.not_empty then break
		end label kinds

		return cards
	end
end

class MDocExample
	super MDocState

	var mentities_index: MEntityIndex

	redef var themes = ["examples"]

	redef fun suggest(doc, context, current_node) do
		var cards = new ArraySet[DocCard]

		if not context isa MPackage then return cards.to_a

		var in_list = false

		var parent = current_node
		while parent != null do
			# print parent
			if parent isa MdListBlock then
				in_list = true
				break
			end
			parent = parent.parent
		end

		if in_list then
			cards.add_all suggest_list(doc, context)
			return cards.to_a
		end

		cards.add_all suggest_section(doc, context)

		return cards.to_a
	end

	fun suggest_section(doc: MdDocument, context: MPackage): Array[DocCard] do
		var mdoc_parser = context.model.mdoc_parser

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "+is_example: true"
		q.inc "-is_test: true"
		q.inc "+kind: MModule"

		var cards = new Array[DocCard]
		var matches = mentities_index.match_query(q)
		if matches.is_empty then
			return [new CardTipExamples(mdoc_parser)]
		else
			var mentities = new Array[MEntity]
			for match in matches do mentities.add match.document.mentity
			if mentities.not_empty then
				var card = new CardExamples(mdoc_parser, context, mentities)
				if suggester.is_dismissed(card) then return new Array[DocCard]
				if doc.has_card(card) then return new Array[DocCard]
				cards.add card
			end
		end
		return cards
	end

	fun suggest_list(doc: MdDocument, context: MPackage): Array[DocCard] do
		var mdoc_parser = context.model.mdoc_parser

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "+is_example: true"
		q.inc "-is_test: true"
		q.inc "+kind: MModule"

		var matches = mentities_index.match_query(q)
		if matches.is_empty then
			return [new CardTipExamples(mdoc_parser)]
		else
			var mentities = new Array[MEntity]
			for match in matches do mentities.add match.document.mentity
			var card = new CardList(mdoc_parser, context, null, null, mentities)
			if suggester.is_dismissed(card) then return new Array[DocCard]
			if doc.has_card(card) then return new Array[DocCard]
			return [card]
		end
	end
end


class MDocStarting
	super MDocState

	redef var themes = ["usage"]

	var mainmodule: MModule

	var filter = new ModelFilter(
		accept_test = false,
		accept_example = false,
		accept_fictive = false
	)

	redef fun suggest(doc, context, current_node) do
		var mdoc_parser = context.model.mdoc_parser

		var cards = new Array[DocCard]

		if not context isa MPackage then return cards
		var model = context.model

		var cmd_parents = new CmdParents(model, mainmodule, filter, context)
		var res_parents = cmd_parents.init_command
		var no_parent = not res_parents isa CmdSuccess

		var mains = new Array[MEntity]
		var cmd_mains = new CmdMains(model, filter, context)
		var res_mains = cmd_mains.init_command
		if res_mains isa CmdSuccess then mains.add_all cmd_mains.results.as(not null)

		var no_ini = context.ini == null
		var no_git = no_ini or not context.ini.as(not null).has_key("upstream.git")
		if not no_ini and no_git then
			cards.add new CardTipIniGit(mdoc_parser)
		end

		var man_synopsis = new HashSet[MEntity]
		var man_opts = new HashSet[MEntity]
		for main in mains do
			var cmd_man = new CmdManFile(model, filter, main)
			var res_man = cmd_man.init_command
			var no_man = not res_man isa CmdSuccess

			if no_man then
				cards.add new CardTipMan(mdoc_parser, main)
				continue
			end

			var cmd_syn = new CmdManSynopsis(model, filter, main)
			var res_syn = cmd_syn.init_command
			var no_syn = not res_syn isa CmdSuccess

			if no_syn then
				cards.add new CardTipManSynopsis(mdoc_parser, main)
			else
				man_synopsis.add main
			end

			var cmd_opts = new CmdManOptions(model, filter, main)
			var res_opts = cmd_opts.init_command
			var no_opts = not res_opts isa CmdSuccess

			if no_opts then
				cards.add new CardTipManOptions(mdoc_parser, main)
			else
				man_opts.add main
			end
		end
		cards.add new CardGettingStarted(mdoc_parser, context,
			no_parent, no_git, mains, man_synopsis, man_opts)

		return cards
	end
end

class MDocAPI
	super MDocState

	redef var themes = ["api"]

	var mainmodule: MModule
	var mentities_index: MEntityIndex

	redef fun suggest(doc, context, current_node) do
		var cards = new ArraySet[DocCard]

		var in_list = false
		var in_heading = false
		var in_code = false

		var parent = current_node
		while parent != null do
			# print parent
			if parent isa MdListBlock then
				in_list = true
				break
			else if parent isa MdHeading then
				if parent.location.line_end > suggester.current_loc.line_end then
					in_heading = true
					break
				end
			else if parent isa MdCodeBlock then
				in_code = true
				break
			end
			parent = parent.parent
		end

		# print in_list
		# print in_heading
		# print in_code

		if in_list then
			cards.add_all suggest_list(doc, context, current_node)
			return cards.to_a
		end

		if in_heading then
			cards.add_all suggest_doc(doc, context, current_node)
			return cards.to_a
		end

		if in_code then
			cards.add_all suggest_example(doc, context, current_node)
			return cards.to_a
		end

		cards.add_all suggest_uml(doc, context, current_node)
		cards.add_all suggest_example(doc, context, current_node)
		cards.add_all suggest_doc(doc, context, current_node)
		cards.add_all suggest_list(doc, context, current_node)
		# cards.add_all suggest_link(doc, context, current_node)
		return cards.to_a
	end

	fun suggest_link(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] do
		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+visibility: public"

		if current_node != null then
			for ref in current_node.all_md_refs do
				if not ref isa MdRefMEntity then continue
				if not context.has_mentity(ref.mentity) then continue
				# q.inc "full_name: {ref.mentity.full_name}"
				# q.inc "has: {ref.full_name}"
				var card = new CardLink(context.model.mdoc_parser, ref.mentity)
				if suggester.is_dismissed(card) then continue
				if doc.has_card(card) then continue
				cards.add card
			end
		end

		# var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		# for kind in kinds do
			# if kind == "MGroup" then continue # TODO
			# var qq = new Vector.from(q)
			# qq.inc "+kind: {kind}"
			# print qq
			# var matches = mentities_index.match_query(qq).above_threshold
			# for match in matches do
				# var card = new CardLink(context.model.mdoc_parser, match.document.mentity)
				# if suggester.is_dismissed(card) then continue
				# if doc.has_card(card) then continue
				# cards.add card
			# end
			# if cards.not_empty then break
		# end label kinds

		return cards
	end


	fun suggest_doc(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] do
		var cards = new ArraySet[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+has_comment: true"
		q.inc "+visibility: public"
		q.inc "-name: SELF"
		q.inc "-kind: MPackage"
		q.inc "-kind: MGroup"
		q.inc "-kind: MClassDef"
		q.inc "-kind: MPropDef"

		if current_node != null then

			var refs = new Array[MdRef]
			var block = current_node.md_block
			var section = block.md_section
			var level = 2
			if section != null then
				refs.add_all section.all_md_refs
				level = section.level + 1
			else
				refs.add_all block.all_md_refs
			end
			if level > 3 then level = 3
			for ref in refs do
				if not ref isa MdRefMEntity then continue

				var mentity = ref.mentity
				if not context.has_mentity(mentity) then continue

				var qq = new Vector.from(q)
				if mentity isa MProperty then
					qq.inc "+kind: MProperty"
					qq.inc "in: {mentity.intro_mclassdef.mclass.full_name}"
					qq.inc "+in: {mentity.intro_mclassdef.mclass.full_name}"
				else if mentity isa MClass then
					qq.inc "+kind: MProperty"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				else if mentity isa MModule then
					qq.inc "+kind: MClass"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				else
					qq.inc "+kind: MModule"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				end

				var matches = mentities_index.match_query(qq)
				for match in matches do
					var card = new CardDoc(context.model.mdoc_parser, match.document.mentity, level)
					if suggester.is_dismissed(card) then continue
					if doc.has_card(card) then continue
					cards.add card
				end
			end
		end

		if cards.not_empty then return cards.to_a

		var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			# print qq
			var matches = mentities_index.match_query(qq)
			for match in matches do
				var card = new CardDoc(context.model.mdoc_parser, match.document.mentity, 2)
				if suggester.is_dismissed(card) then continue
				if doc.has_card(card) then continue
				cards.add card
			end
			if cards.not_empty then break
		end label kinds

		return cards.to_a
	end

	fun suggest_list(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] do
		var cards = new ArraySet[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+visibility: public"
		q.inc "-name: SELF"
		q.inc "-kind: MClassDef"
		q.inc "-kind: MPropDef"

		if current_node != null then

			var refs = new Array[MdRef]
			var block = current_node.md_block
			var section = block.md_section
			if section != null then
				refs.add_all section.all_md_refs
			else
				refs.add_all block.all_md_refs
			end
			# print refs
			for ref in refs do
				if not ref isa MdRefMEntity then continue

				var mentity = ref.mentity
				if not context.has_mentity(mentity) then continue

				var qq = new Vector.from(q)
				if mentity isa MProperty then
					qq.inc "+kind: MProperty"
					qq.inc "in: {mentity.intro_mclassdef.mclass.full_name}"
					qq.inc "+in: {mentity.intro_mclassdef.mclass.full_name}"
				else if mentity isa MClass then
					qq.inc "+kind: MProperty"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				else if mentity isa MModule then
					qq.inc "+kind: MClass"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				else
					qq.inc "+kind: MModule"
					qq.inc "in: {mentity.full_name}"
					qq.inc "+in: {mentity.full_name}"
				end

				var mentities = new Array[MEntity]
				var matches = mentities_index.match_query(qq)
				for match in matches do mentities.add match.document.mentity
				var card = new CardList(context.model.mdoc_parser, context, null, null, mentities)

				if suggester.is_dismissed(card) then continue
				if doc.has_card(card) then continue
				cards.add card
			end
		end

		if cards.not_empty then return cards.to_a


		var kinds = ["MGroup", "MModule", "MClass", "MProperty"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			var matches = mentities_index.match_query(qq)
			if matches.length > 1 then
				var mentities = new Array[MEntity]
				for match in matches do mentities.add match.document.mentity
				var card = new CardList(context.model.mdoc_parser, context, null, null, mentities)
				if suggester.is_dismissed(card) then continue
				if doc.has_card(card) then continue
				cards.add card
			end
			if cards.not_empty then break
		end
		return cards.to_a
	end

	fun suggest_example(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] do
		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "+kind: MModule"
		q.inc "+is_example: true"
		q.inc "-is_test: true"

		if current_node != null then
			var refs = current_node.md_block.all_md_refs
			# var section = current_node.md_block.md_section
			# if section != null then
				# var title = section.title
				# if title != null then
					# refs.add_all title.all_md_refs.to_a
				# end
				# for block in section.blocks do
					# refs.add_all block.all_md_refs
				# end
			# end
			for ref in refs do
				if not ref isa MdRefMEntity then continue
				if not context.has_mentity(ref.mentity) then continue
				q.inc "example_for: {ref.mentity.full_name}"
				q.inc "call: {ref.mentity.full_name}"
				q.inc "new: {ref.mentity.full_name}"
				q.inc "import: {ref.mentity.full_name}"
				q.inc "redef: {ref.mentity.full_name}"
				q.inc "super: {ref.mentity.full_name}"
			end
		end

		# print q
		var matches = mentities_index.match_query(q)
		# for m in matches do
			# print m.document.terms_count
		# end
		for match in matches do
			var card = new CardExample(context.model.mdoc_parser, context, match.document.mentity)
			if suggester.is_dismissed(card) then continue
			if doc.has_card(card) then continue
			cards.add card
			break
		end

		return cards
	end

	fun suggest_uml(doc: MdDocument, context: MEntity, current_node: nullable MdNode): Array[DocCard] do
		var cards = new Array[DocCard]

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "-is_example: true"
		q.inc "-is_test: true"
		q.inc "+visibility: public"

		if current_node != null then
			var mentities = new ArraySet[MEntity]
			var counter = new Counter[String]
			for ref in current_node.md_block.all_md_refs do
				if not ref isa MdRefMEntity then continue
				if ref.mentity isa MProperty then continue
				if not context.has_mentity(ref.mentity) then continue
				# q.inc "full_name: {ref.mentity.full_name}"
				# q.inc "has: {ref.full_name}"
				mentities.add ref.mentity
				counter.inc ref.mentity.class_name
			end

			var in_uml = new Array[MEntity]
			if not counter.is_empty then
				if counter.sort.first == "MClass" then
					for mentity in mentities do
						if not mentity isa MClass then continue
						in_uml.add mentity
					end
				else
					for mentity in mentities do
						if not mentity isa MModule then continue
						in_uml.add mentity
					end
				end

				for mentity in in_uml do
					var qq = new Vector
					qq.inc "full_name: {mentity.full_name}"
					qq.inc "parent: {mentity.full_name}"
					qq.inc "child: {mentity.full_name}"

					var matches = mentities_index.match_query(qq)
					# print matches
					if matches.length > 2 then
						var imentities = new Array[MEntity]
						for match in matches do
							# if mentities.length >= 15 then break
							imentities.add match.document.mentity
						end
						if has_inheritance(imentities) > 2 then
							var card = new CardUML(context.model.mdoc_parser, context, imentities)
							if suggester.is_dismissed(card) then continue
							if doc.has_card(card) then continue
							cards.add card
						end
					end
				end
			end
			# print counter

			# var card = new CardUML(context.model.mdoc_parser, context, in_uml)
			# if not suggester.is_dismissed(card) and not doc.has_card(card) then
				# cards.add card
			# end
		end

		if cards.not_empty then return cards


		var kinds = ["MGroup", "MModule", "MClass"]

		for kind in kinds do
			if kind == "MGroup" then continue # TODO
			var qq = new Vector.from(q)
			qq.inc "+kind: {kind}"
			var matches = mentities_index.match_query(qq)
			if matches.length > 2 then
				var mentities = new Array[MEntity]
				for match in matches do
					# if mentities.length >= 15 then break
					mentities.add match.document.mentity
				end
				if has_inheritance(mentities) > 2 then
					var card = new CardUML(context.model.mdoc_parser, context, mentities)
					if suggester.is_dismissed(card) then continue
					if doc.has_card(card) then continue
					cards.add card
				end
			end
			if cards.not_empty then break
		end
		return cards
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

class MDocTesting
	super MDocState

	var mentities_index: MEntityIndex

	redef var themes = ["tests"]

	redef fun suggest(doc, context, current_node) do
		var cards = new ArraySet[DocCard]

		if not context isa MPackage then return cards.to_a

		var in_list = false

		var parent = current_node
		while parent != null do
			# print parent
			if parent isa MdListBlock then
				in_list = true
				break
			end
			parent = parent.parent
		end

		if in_list then
			cards.add_all suggest_list(context)
			return cards.to_a
		end

		cards.add_all suggest_section(context)

		return cards.to_a
	end

	fun suggest_section(context: MPackage): Array[DocCard] do
		var mdoc_parser = context.model.mdoc_parser

		var cmd_tests = new CmdTesting(context.model, null, context)
		var res_tests = cmd_tests.init_command
		var no_tests = not res_tests isa CmdSuccess

		if no_tests then
			return [new CardTipTests(mdoc_parser)]
		else
			return [new CardTesting(mdoc_parser, context)]
		end
	end

	fun suggest_list(context: MPackage): Array[DocCard] do
		var mdoc_parser = context.model.mdoc_parser

		var q = new Vector
		q.inc "in: {context.full_name}"
		q.inc "+in: {context.full_name}"
		q.inc "+is_test: true"
		q.inc "+kind: MModule"

		var matches = mentities_index.match_query(q)
		if matches.is_empty then
			return [new CardTipTests(mdoc_parser)]
		else
			var mentities = new Array[MEntity]
			for match in matches do mentities.add match.document.mentity
			return [new CardList(mdoc_parser, context, null, null, mentities)]
		end
	end
end

class MDocIssues
	super MDocState

	redef var themes = ["issues"]

	redef fun suggest(doc, context, current_node) do
		var mdoc_parser = context.model.mdoc_parser

		if not context isa MPackage then return new Array[DocCard]

		var no_ini = context.ini == null
		var no_issues = no_ini or not context.ini.as(not null).has_key("upstream.issues")
		if not no_ini and no_issues then
			return [new CardTipIniIssues(mdoc_parser)]
		else
			return [new CardIssues(mdoc_parser, context)]
		end
	end
end

class MDocContributing
	super MDocState

	redef var themes = ["contribute"]

	redef fun suggest(doc, context, current_node) do
		var cards = new Array[DocCard]
		var mdoc_parser = context.model.mdoc_parser

		if not context isa MPackage then return cards

		var no_ini = context.ini == null
		var no_git = no_ini or not context.ini.as(not null).has_key("upstream.git")
		if not no_ini and no_git then
			cards.add new CardTipIniGit(mdoc_parser)
		end

		if not no_ini and no_git then
			cards.add new CardTipIniContrib(mdoc_parser)
		end

		var cmd_contrib = new CmdContribFile(context.model, null, context)
		var res_contrib = cmd_contrib.init_command
		var no_contrib_file = not res_contrib isa CmdSuccess

		if no_contrib_file then
			cards.add new CardTipContribFile(mdoc_parser)
		end
		if not no_git or not no_contrib_file then
			cards.add new CardContributing(mdoc_parser, context, no_git, no_contrib_file)
		end

		return cards
	end
end

class MDocAuthors
	super MDocState

	redef var themes = ["authors"]

	redef fun suggest(doc, context, current_node) do
		var cards = new ArraySet[DocCard]

		if not context isa MPackage then return cards.to_a

		var in_list = false

		var parent = current_node
		while parent != null do
			# print parent
			if parent isa MdListBlock then
				in_list = true
				break
			end
			parent = parent.parent
		end

		if in_list then
			cards.add_all suggest_list(context)
			return cards.to_a
		end

		cards.add_all suggest_section(context)

		return cards.to_a
	end

	fun suggest_section(context: MPackage): Array[DocCard] do
		var cards = new ArraySet[DocCard]
		var mdoc_parser = context.model.mdoc_parser

		var no_ini = context.ini == null
		var no_author = no_ini or not context.ini.as(not null).has_key("package.maintainer")
		if not no_ini and no_author then
			cards.add new CardTipIniAuthor(mdoc_parser)
		end
		var no_contrib = no_ini or not context.ini.as(not null).has_key("package.more_contributors")
		if not no_ini and no_contrib then
			cards.add new CardTipIniContributors(mdoc_parser)
		end
		if not no_author or not no_contrib then
			cards.add new CardAuthors(mdoc_parser, context, no_author, no_contrib)
		end

		return cards.to_a
	end

	fun suggest_list(context: MPackage): Array[DocCard] do
		var cards = new ArraySet[DocCard]
		var mdoc_parser = context.model.mdoc_parser

		var ini = context.ini
		var no_contrib = ini == null or not ini.has_key("package.more_contributors")
		if no_contrib then
			cards.add new CardTipIniContributors(mdoc_parser)
		else
			cards.add new CardListPeople(mdoc_parser, context)
		end

		return cards.to_a
	end
end

class MDocLicense
	super MDocState

	redef var themes = ["license"]

	redef fun suggest(doc, context, current_node) do
		var cards = new Array[DocCard]
		var mdoc_parser = context.model.mdoc_parser

		if not context isa MPackage then return cards

		var no_ini = context.ini == null
		var no_license = no_ini or not context.ini.as(not null).has_key("package.license")
		if not no_ini and no_license then
			cards.add new CardTipIniLicense(mdoc_parser)
		end

		var cmd_license = new CmdLicenseFile(context.model, null, context)
		var res_license = cmd_license.init_command
		var no_license_file = not res_license isa CmdSuccess

		if no_license_file then
			cards.add new CardTipLicenseFile(mdoc_parser)
		end
		if not no_license or not no_license_file then
			cards.add new CardLicense(mdoc_parser, context, no_license, no_license_file)
		end

		return cards
	end
end

class MDocFinished
	super MDocState

	redef fun suggest(doc, context, current_node) do
		var mdoc_parser = context.model.mdoc_parser
		return [new CardTipFinished(mdoc_parser)]
	end
end

class MdLocationVisitor
	super MdVisitor

	var document: MdDocument

	var location: MdLocation

	var node: nullable MdNode = null

	var last: nullable MdNode = null

	fun search do
		enter_visit(document)
	end

	redef fun visit(node) do
		if node.location <= location then
			self.last = node
		end
		if node.location.has(location) then
			self.node = node
			if node isa MdWikilink then return
		end
		node.visit_all(self)
	end
end

redef class MdDocument
	var cards: HashSet[String] is lazy do
		var res = new HashSet[String]
		var nodes = (new CollectWikilinks).collect(self)
		for node in nodes do
			var link = node.link
			var name = node.title
			if name != null then link = "{name} | {link}"

			res.add link
		end
		return res
	end

	fun has_card(card: DocCard): Bool do
		for command in card.commands do
			if cards.has(command) then return true
		end
		return false
	end
end

class CollectWikilinks
	super MdVisitor

	var nodes = new Array[MdWikilink]

	fun collect(doc: MdDocument): Array[MdWikilink] do
		nodes.clear
		enter_visit(doc)
		return nodes
	end

	redef fun visit(node) do
		if node isa MdWikilink then
			nodes.add node
		end
		node.visit_all(self)
	end
end

# TODO
class DocSession
	serialize

	var dismissed = new Array[String]

	# TODO
	var docs = new Array[DocReadme]
end

# TODO
class DocReadme
	serialize

	# TODO
	var name: String

	# TODO
	var target_name: String

	# TODO
	var md: String
end

redef class MdNode
	fun suggest(v: MDocSuggester, context: MEntity): Array[DocCard] do
		return new Array[DocCard]
	end
end

redef class MdSection
	fun all_md_themes_names: Array[String] do
		var res = new Array[String]
		var title = self.title
		if title != null then res.add_all title.all_md_themes_names
		for block in blocks do res.add_all block.all_md_themes_names
		return res
	end

	fun all_md_refs: Array[MdRef] do
		var res = new Array[MdRef]
		var title = self.title
		if title != null then res.add_all title.all_md_refs
		for block in blocks do res.add_all block.all_md_refs
		return res
	end
end

redef class DocCard
	redef fun ==(o) do return o isa DocCard and o.id == self.id
end

redef class MdWikilink
	redef fun suggest(v, context) do
		var cards = new Array[DocCard]
		var link = self.link
		var name = self.title
		if name != null then link = "{name} | {link}"
		# TODO card special kind, suggestion, not tip, no actions
		cards.add new CardTipCommand(v.model.mdoc_parser, link)
		# TODO suggest command?
		return cards
	end
end

redef class MdCode
	redef fun suggest(v, context) do
		var cards = new Array[DocCard]
		for ref in all_md_refs do
			if not ref isa MdRefMEntity then continue
			cards.add new CardLink(v.model.mdoc_parser, ref.mentity)
			break
		end
		return cards
	end
end

class HeadingsVisitor
	super MdVisitor

	var headings = new Array[MdHeading]

	fun collect_headings(doc: MdDocument): Array[MdHeading] do
		headings.clear
		enter_visit(doc)
		return headings
	end

	redef fun visit(node) do
		if node isa MdHeading then
			headings.add node
		end
		node.visit_all(self)
	end
end

redef class Model
	var headings = new Array[MdHeading]
end

redef class CmdSummary
	redef fun to_html do
		# print "to_html"
		var tpl = new Template
		var headings = mentity.as(not null).model.headings
		# print self
		# print headings

		var doc = mdoc.as(not null).html_documentation
		if doc.write_to_string.is_empty then return tpl

		tpl.addn "<ol>"
		for heading in headings do
			if heading.level == 1 or heading.level > 2 then continue
			# var id = heading.id
			# if id == null then continue
			# var level = heading.level
			var title = heading.raw_text
			tpl.addn "<li><a href='#{title.replace(" ", "-")}'>{title}</a></li>"
		end
		tpl.addn "</ol>"
		return tpl
	end
end

