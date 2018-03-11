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

# Nitdoc specific Markdown format handling for Nitweb
module api_docdown

import api_model
import model::model_index
intrude import doc_down
intrude import markdown::wikilinks
import doc_suggest
import doc::commands::commands_docdown

redef class NitwebConfig

	# TODO
	var cmd_parser: CommandParser is lazy do return new CommandParser(view, modelbuilder)

	# Specific Markdown processor to use within Nitweb
	var md_processor: MarkdownProcessor is lazy do
		var proc = new CmdMarkdownProcessor(cmd_parser)
		proc.decorator = new CmdDecorator(view)
		return proc
	end

	# TODO
	var nlp_index: ModelNLPIndex is noinit, writable

	# TODO
	var sessions_dir: String is lazy do
		var dir = "tmp"
		dir.mkdir
		return dir
	end

	# TODO
	var doc_session: DocSession is lazy do
		var session = new DocSession
		var dir = sessions_dir / "terrasa_a"
		dir.mkdir
		for file in dir.files do
			if not file.has_suffix("md") then continue
			var md = (dir / file).to_path.read_all
			session.docs.add new DocReadme(file, file.strip_extension, md)
		end
		return session
	end
end

redef class APIRouter
	redef init do
		super
		use("/docdown/", new APIDocdown(config))
		use("/docdown/docs", new APIDocSession(config))
		use("/docdown/suggest", new APIDocdownSuggest(config))
	end
end

# Docdown handler accept docdown as POST data and render it as HTML
class APIDocdown
	super APIHandler

	redef fun post(req, res) do
		res.html config.model.nitdoc_md_processor.process(req.body)
	end
end

# TODO
class APIDocSession
	super APIHandler

	redef fun get(req, res) do
		res.json config.doc_session
	end
end

# TODO
class APIDocdownSuggest
	super APIHandler

	redef fun post(req, res) do

		var view = config.view
		var mbuilder = config.modelbuilder
		var index = config.nlp_index

		var md = req.body
		var processor = new DocParser
		var doc = processor.parse_string(md)

		var target = req.string_arg("target")
		if target == "null" then target = null

		var engine = new SuggestionEngine(view, mbuilder, index, target, doc)

		var line = req.int_arg("line") or else 1
		var col = req.int_arg("column") or else 1
		var loc = new nitc::Location(null, line, line, col, col)
		var suggestions = engine.doc_suggestions(doc, loc)

		# TODO tmp
		suggestions.clear

		var cmd = new CmdEntity(view, mentity_name = "popcorn::Handler")
		cmd.init_command
		var mentity = cmd.mentity.as(not null)
		# suggestions.add new CardEntity(1.0, mentity)
		suggestions.add new CardEntityLink(1.0, mentity)


		var names = ["all", "get", "put", "post", "delete"]
		var mfeatures = mentity.as(MClass).collect_intro_mproperties(view)
		var features = new Array[MEntity]
		for feature in mfeatures do
			if not names.has(feature.name) then continue
			features.add feature
		end
		suggestions.add new CardFeatures(1.0, mentity, features)

		cmd = new CmdInheritanceGraph(view, mentity, format = "svg", pdepth = 0, cdepth = 2)
		cmd.init_command
		var graph = cmd.graph.as(not null)
		graph.draw_node(mentity)
		graph.draw_children(mentity)
		suggestions.add new CardUML(1.0, mentity, cmd.render)

		cmd = new CmdExamples(view, config.modelbuilder, mentity, format = "html")
		cmd.init_command
		for example in cmd.results.as(not null) do
			suggestions.add new CardExample(1.0, mentity, example)
			break
		end

		var obj = new JsonObject
		obj["summary"] = doc.all_subsections
		obj["suggestions"] = suggestions
		obj["debug"] = engine.last_debug
		res.json obj
	end
end

redef class DocBlock
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("location", location)
		v.serialize_attribute("content", to_s)
	end
end

redef class DocSection
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("title", title)
		v.serialize_attribute("level", level)
		v.serialize_attribute("line", location.line_start)
	end
end

# TODO
class DocSession
	serialize

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
