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

module test_mdoc_index is test

import mdoc_index
import frontend

class TestMDocIndex
	test

	# CodeIndex used in tests
	var test_index: MDocIndex is noinit

	# Initialize test variables
	#
	# Must be called before test execution.
	# FIXME should be before_all
	fun build_test_env is before do
		var test_path = "NIT_TESTING_PATH".environ.dirname
		var test_src = test_path / "../../../tests/test_prog"

		# build model
		var toolcontext = new ToolContext
		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = modelbuilder.parse_full([test_src])
		modelbuilder.run_phases
		toolcontext.run_global_phases(mmodules)
		var mainmodule = toolcontext.make_main_module(mmodules)

		# create MDoc parser
		var cmd_parser = new CommandParser(model, mainmodule, modelbuilder)
		var md_parser = new MdParser
		md_parser.github_mode = true
		md_parser.wikilinks_mode = true
		md_parser.post_processors.add new MDocProcessSynopsis
		md_parser.post_processors.add new MDocProcessCodes
		md_parser.post_processors.add new MDocProcessCommands(cmd_parser)
		md_parser.post_processors.add new MDocProcessSummary
		model.mdoc_parser = md_parser

		# create NLP processor client
		var nlp_processor = new NLPClient("http://localhost:9000")

		# create index
		var index = new MDocIndex(nlp_processor, ".mdoc_index_test")
		for mentity in model.collect_mentities do
			index.index_mentity(mentity)
		end
		test_index = index
	end

	fun clean_test_end is after_all do
		".mdoc_index_test".rmdir
	end

	fun test_find1 is test do
		var query = "playable entities"
		var matches = test_index.match_string(query)
		assert matches.first.document.mentity.full_name == "test_prog::character"
	end

	fun test_find2 is test do
		var query = "Darf warrior"
		var matches = test_index.match_string(query)
		assert matches.first.document.mentity.full_name == "test_prog::Dwarf"
	end

	fun test_find3 is test do
		var query = "role playing game group"
		var matches = test_index.match_string(query)
		assert matches.first.document.mentity.full_name == "test_prog>rpg>"
	end

	fun test_find_error is test do
		var query = "error"
		var matches = test_index.match_string(query)
		assert matches.is_empty
	end
end
