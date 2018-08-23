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

module cards_freedoc

import doc::cards::cards_base
import doc::commands
import doc::templates::html_commands

class ReadmeMEntity

	var model: Model
	var mainmodule: MModule
	var modelbuilder: ModelBuilder

	var mdoc_parser: MdParser

	fun cards(mentity: MEntity): Array[DocCard] do
		var cards = new Array[DocCard]

		var filter = new ModelFilter

		var cmd_link = new CmdEntity(model, filter, mentity)
		var res_link = cmd_link.init_command
		if res_link isa CmdSuccess then
			cards.add new CardLink(mdoc_parser, mentity)
		end

		var cmd_doc = new CmdComment(model, filter, mentity)
		var res_doc = cmd_doc.init_command
		if res_doc isa CmdSuccess then
			cards.add new CardDoc(mdoc_parser, mentity)
		end

		# var cmd_exs = new CmdExamples(model, modelbuilder, mentity)
		# var res_exs = cmd_exs.init_command
		# if res_exs isa CmdSuccess then
			for ex in mentity.examples do
			# for ex in cmd_exs.results.as(not null) do
				cards.add new CardExample(mdoc_parser, mentity, ex.mentity)
			end
		# end

		var cmd_uml = new CmdInheritanceGraph(model, mainmodule, filter, mentity)
		var res_uml = cmd_uml.init_command
		if res_uml isa CmdSuccess then
			cards.add new CardUML(mdoc_parser, mentity)
		end

		var cmd_defs = new CmdFeatures(model, filter, mentity)
		var res_defs = cmd_defs.init_command
		if res_defs isa CmdSuccess then
			cards.add new CardFeatures(mdoc_parser, mentity)
		end

		# var cmd_code = new CmdEntityCode(model, modelbuilder, mentity)
		# var res_code = cmd_code.init_command
		# if res_code isa CmdSuccess then
		#	cards.add new CardCode(mdoc_parser, mentity)
		# end

		return cards
	end
end

abstract class CardMEntity
	super DocCard
	serialize

	var mdoc_parser: MdParser is noserialize

	var mdoc_renderer = new MDocHtmlRenderer is noserialize

	var mentity: MEntity is noserialize

	fun html: Writable do
		var ast = mdoc_parser.parse(markdown)
		ast.mdoc = mentity.mdoc
		mdoc_parser.post_process(ast)
		return mdoc_renderer.render(ast)
	end

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_freedoc", true)
		v.serialize_attribute("markdown", markdown)
		v.serialize_attribute("html", html)
	end
end

class CardDoc
	super CardMEntity
	serialize

	redef var id is lazy do return "free-doc-{mentity.full_name}"

	redef var icon = "book"
	redef var title = "Suggested content for {mentity.html_link.write_to_string}" is lazy
	redef var description = "You should include this documentation:"

	var level: nullable Int = null is optional


	redef var markdown is lazy do
		var tpl = new Template

		var level = self.level
		if level != null then
			tpl.addn "{"#" * level} [[sign: {mentity.full_name}]]\n"
		end
		tpl.addn "> [[doc: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["only-synopsis"] = "false"
		options["no-fallback"] = "false"
		return options
	end

	redef fun commands do
		var res = super
		res.add "sign: {mentity.full_name}"
		res.add "doc: {mentity.full_name}"
		return res
	end
end

class CardLink
	super CardMEntity
	serialize

	redef var id is lazy do return "free-lnk-{mentity.full_name}"

	redef var icon = "link"
	redef var title = "Suggested API link for {mentity.html_link.write_to_string}" is lazy
	redef var description = "You should include this link:"

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "[[{mentity.full_name}]]\n"
		return tpl.write_to_string
	end

	redef fun options do
		var mdoc = mentity.mdoc_or_fallback
		var title = if mdoc != null then mdoc.synopsis else ""

		var options = new HashMap[String, String]
		options["text"] = mentity.name
		options["title"] = title
		return options
	end
end

class CardMdTitle
	super CardMEntity
	serialize
	autoinit md_level, md_title

	var md_level: Int
	var md_title: String

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "{"#" * md_level} {md_title}"
		return tpl.write_to_string
	end
end


class CardExample
	super CardMEntity
	serialize

	redef var id is lazy do return "free-ex-{mentity.full_name}-{example.full_name}"

	var is_code = true
	var example: MEntity is noserialize

	redef var icon = "play"
	redef var title = "Suggested example for {mentity.html_link.write_to_string}" is lazy
	redef var description = "You should include this example:"

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "[[code: {example.full_name} | format: html]]\n"
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["line-start"] = ""
		options["line-end"] = ""
		options["indent"] = ""
		return options
	end
end

class CardUML
	super CardMEntity
	serialize

	redef var id is lazy do return "free-uml-{mentity.full_name}-mentities:{(mentities or else new Array[MEntity]).join(";")}"

	var is_graph = true

	redef var icon = "object-align-vertical"
	redef var title = "Suggested diagram for {mentity.html_link.write_to_string}" is lazy
	redef var description = "You should include this diagram:"

	var mentities: nullable Array[MEntity] = null is optional, writable

	redef var markdown is lazy do
		var tpl = new Template
		var mentities = self.mentities
		if mentities != null then
			var names = new Array[String]
			for mentity in mentities do
				names.add mentity.full_name
			end
			tpl.addn "[[uml: {mentity.full_name} | format: svg, mentities: {names.join(";")}]]\n"
		else
			tpl.addn "[[uml: {mentity.full_name} | format: svg]]\n"
		end
		# tpl.addn "[[uml: {mentity.full_name} | format: svg]]"
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["opt"] = ""
		return options
	end

	redef fun commands do
		var res = super
		var mentities = self.mentities
		if mentities != null then
			var names = new Array[String]
			for mentity in mentities do
				names.add mentity.full_name
			end
			res.add "uml: {mentity.full_name} | format: svg, mentities: {names.join(";")}"
		else
			res.add "uml: {mentity.full_name} | format: svg"
		end
		return res
	end
end

class CardFeatures
	super CardMEntity
	serialize

	redef var id is lazy do return "free-features-{mentity.full_name}"

	redef var icon = "list"
	redef var title = "Suggested features of {mentity.html_link.write_to_string}" is lazy
	redef var description = "You should write about these features:"

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "[[defs: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["opt"] = ""
		return options
	end

	redef fun commands do
		var res = super
		res.add "defs: {mentity.full_name}"
		return res
	end
end

class CardList
	super CardMEntity
	serialize

	redef var id is lazy do return "free-lst-{mentity.full_name}-mentities:{(mentities or else new Array[MEntity]).join(";")}"

	redef var icon = "list"
	redef var title = "Suggested list" is lazy
	redef var description = "You should write about these features:"

	var list_title: nullable String = null is optional
	var list_level: nullable Int = null is optional

	var mentities: nullable Array[MEntity] = null is optional, writable

	redef var markdown is lazy do
		var tpl = new Template

		var title = list_title
		if title != null then
			var lvl = list_level
			if lvl != null then
				tpl.add "#" * lvl
				if lvl > 0 then tpl.add " "
			end
			tpl.addn "{title}\n"
		end

		var mentities = self.mentities
		if mentities != null then
			var names = new Array[String]
			for mentity in mentities do
				names.add mentity.full_name
			end
			tpl.addn "[[features: {mentity.full_name} | mentities: {names.join(";")}]]\n"
		else
			tpl.addn "[[features: {mentity.full_name}]]\n"
		end
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["opt"] = ""
		return options
	end

	redef fun commands do
		var res = super
		var mentities = self.mentities
		if mentities != null then
			var names = new Array[String]
			for mentity in mentities do names.add mentity.full_name
			res.add "features: {mentity.full_name} | mentities: {names.join(";")}"
		else
			res.add "features: {mentity.full_name}"
		end
		return res
	end
end

class CardListPeople
	super CardMEntity
	serialize

	redef var id is lazy do return "free-lst-pp-{mentity.full_name}"

	redef var icon = "list"
	redef var title = "Suggested list" is lazy
	redef var description = "You should thank these people:"

	var list_title: nullable String = null is optional
	var list_level: nullable Int = null is optional

	redef var markdown is lazy do return "[[ini-contributors: {mentity.full_name}]]\n\n"

	redef fun commands do
		var res = super
		res.add "ini-contributors: {mentity.full_name}"
		return res
	end
end

class CardCode
	super CardMEntity
	serialize

	redef var id is lazy do return "free-code-{mentity.full_name}"

	redef var icon = "console"
	redef var title = "code"
	redef var description = "code"

	redef var markdown is lazy do
		var tpl = new Template
		# tpl.addn "[[code: {mentity.full_name} | format: html]]"
		tpl.addn "[[code: {mentity.full_name}]]"
		return tpl.write_to_string
	end

	redef fun options do
		var options = new HashMap[String, String]
		options["opt"] = ""
		return options
	end
end
