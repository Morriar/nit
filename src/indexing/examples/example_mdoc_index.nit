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

# An example of how to use the `mdoc_index`
module example_mdoc_index is example

import mdoc_index
import model_collect
import frontend

redef class ToolContext

	# --server
	var opt_nlp_server = new OptionString("StanfordNLP server URI (default is https://localhost:9000)", "-s", "--server")

	# --lang
	var opt_nlp_lang = new OptionString("Language to use (default is en)", "-l", "--lang")

	# --query
	var opt_nlp_query = new OptionString("Query to perform", "-q", "--query")

	init do
		super
		option_context.add_option(opt_nlp_server, opt_nlp_lang, opt_nlp_query)
	end
end

# An example of a tool using NLP queries and index
class NitIndexExample

	# Model used to index entities
	var model: Model

	# NLP server address
	var host: String

	# NLP language
	var lang: String

	# NLP client (to connect to the server)
	var cli: NLPClient is lazy do
		var cli = new NLPClient(host)
		cli.language = lang
		return cli
	end

	# NLP index
	var index = new MDocIndex(cli) is lazy

	redef init do build_index

	# Build the NLP index from the view content
	fun build_index do
		print "Building index..."
		for mentity in model.collect_mentities do
			index.index_mentity(mentity)
		end
		print "Indexed {index.documents.length} documents"
	end

	# Print results obtained from a NLP query
	fun perform_query(query: String) do
		var matches = index.match_string(query)
		var i = 0
		for match in matches do
			if i >= 10 then break
			i += 1
			print "{match.document.mentity.full_name} ({match.similarity})"
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
toolcontext.tooldescription = "usage: nitindex <files>"
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
var mainmodule = toolcontext.make_main_module(mmodules)

# create MDoc parser
var cmd_parser = new CommandParser(model, mainmodule, mbuilder)
var md_parser = new MdParser
md_parser.github_mode = true
md_parser.wikilinks_mode = true
md_parser.post_processors.add new MDocProcessSynopsis
md_parser.post_processors.add new MDocProcessCodes
md_parser.post_processors.add new MDocProcessCommands(cmd_parser)
md_parser.post_processors.add new MDocProcessSummary
model.mdoc_parser = md_parser

# prepare nlp tool
var tool = new NitIndexExample(
	model = model,
	host = toolcontext.opt_nlp_server.value or else "http://localhost:9000",
	lang = toolcontext.opt_nlp_lang.value or else "en")

# perform queries
var query = toolcontext.opt_nlp_query.value
if query != null then
	tool.perform_query(query)
	return
end

loop
	print "\nEnter query:"
	printn "> "
	query = sys.stdin.read_line
	tool.perform_query(query)
end
