# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2018 Alexandre Terrasa <alexandre@moz-code.org>
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

module test_model_index is test

import nitindex

abstract class TestIndex
	var index: NitIndex is lazy do return sys.index
end

class TestIndexModel
	super TestIndex
	test

	# fun test_packages is test do
		# var index = self.index


	# end

	fun test_modules is test do
		var q = new Query
		q["kind"] = ["MModule"]

		var index = self.index
		var res = index.find(q)

		# print res
		# print res.length
		assert res.length == 10
	end

	# fun test_ancestors is test do
	#	var index = self.index
    #
	#	var q = new Query
	#	q.has("ancestors: ")
	#	var res = index.
	# end
    #
	# fun test_index2 is test do
	#	var index = self.index
    #
    #
	# end

end

redef class Sys

	var index: NitIndex is lazy do
		var toolcontext = new ToolContext
		toolcontext.process_options(["./tests/test_prog"])

		var arguments = toolcontext.option_context.rest
		var model = new Model
		var mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = mbuilder.parse_full(arguments)

		if not mmodules.is_empty then
			mbuilder.run_phases
			toolcontext.run_global_phases(mmodules)
		end
		return toolcontext.index
	end
end
