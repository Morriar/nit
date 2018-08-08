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
import doc_down

redef class NitwebConfig

	# Command parser for MDoc contents
	var cmd_parser = new CommandParser(model, mainmodule, modelbuilder, catalog) is lazy

	# Markdown parser for MDoc contents
	var mdoc_parser: MdParser is lazy do
		var md_parser = new MdParser
		md_parser.github_mode = true
		md_parser.wikilinks_mode = true
		md_parser.post_processors.add new MDocProcessSynopsis(toolcontext)
		md_parser.post_processors.add new MDocProcessCodes(toolcontext)
		md_parser.post_processors.add new MDocProcessMEntityLinks(toolcontext, model, mainmodule)
		md_parser.post_processors.add new MDocProcessCommands(toolcontext, cmd_parser)
		md_parser.post_processors.add new MDocProcessSummary
		return md_parser
	end
end

redef class APIRouter
	redef init do
		super
		use("/docdown/", new APIDocdown(config))
	end
end

# Docdown handler accept docdown as POST data and render it as HTML
class APIDocdown
	super APIHandler

	private var mdoc_parser: MdParser = config.model.mdoc_parser is lazy

	private var mdoc_renderer = new MDocHtmlRenderer

	redef fun post(req, res) do
		var ast = mdoc_parser.parse(req.body)
		res.html mdoc_renderer.render(ast)
	end
end
