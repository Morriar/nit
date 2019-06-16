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

module test_db is test

import db

abstract class TestIndex
	var db: ModelDb is lazy do return sys.db
end

class TestModelDb
	super TestIndex
	test

	fun query_empty is test do
		var r = db.find(new Array[MOp])
		assert r.is_empty
	end

	fun query_eq_full_name is test do
		var r = db.find([new OpEq("full-name", "test_prog::Character")])
		assert r.length == 1
		assert r.first.entry.mentity.full_name == "test_prog::Character"
	end

	fun query_eq_name is test do
		var r = db.find([new OpEq("name", "Character")])
		assert r.length == 3
		assert r[0].entry.mentity.name == "Character"
		assert r[1].entry.mentity.name == "Character"
		assert r[2].entry.mentity.name == "Character"
	end

	fun query_in_name is test do
		var r = db.find([new OpIn("name", ["Warrior", "Magician"])])
		assert r.length == 4
	end

	fun query_re_name is test do
		var r = db.find([new OpRe("name", "Warrior|Magician".to_re)])
		assert r.length == 4
	end

	fun query_has_parents is test do
		var r = db.find([new OpHas("parents", "test_prog::Career")])
		assert r.length == 3
	end

	fun query_has_name is test do
		var r = db.find([
			new OpHas("kind", "package"),
			new OpHas("ini-tags", "test")
		])
		assert r.length == 2
	end

	fun query_has_any_kind is test do
		var r = db.find([new OpHasAny("kind", ["package", "module"])]).limit(2)
		assert r.length == 2
	end

	fun query_has_not_descendants is test do
		var r = db.find([
			new OpAnd(
				new OpHas("descendants", "test_prog::Warrior"),
				new OpNot(new OpHas("children", "test_prog::Character"))
			)
		: MOp])
		assert r.length == 2
	end

	fun query_bool_test is test do
		var r = db.find([new OpBool("is-test", true)])
		assert r.length == 6
	end

	fun query_prefix_name is test do
		var r = db.find([new OpPrefix("name", "char")])
		assert r.length == 1
	end

	fun query_vector is test do
		var r = db.find([
			new OpAnd(
				new OpBool("has-mdoc", true),
				new OpVector("mdoc", "career warrior".to_vector)
			)
		: MOp])
		assert r.length == 2
	end
end

redef class Sys

	var db: ModelDb is lazy do
		var toolcontext = new ToolContext
		toolcontext.process_options(["./tests/test_prog"])

		var arguments = toolcontext.option_context.rest
		var model = new Model
		var mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = mbuilder.parse_full(arguments)
		var mainmodule = toolcontext.make_main_module(mmodules)

		mbuilder.run_phases
		toolcontext.run_global_phases(mmodules)

		var db = new ModelDb
		db.index_model(mainmodule, model)
		return db
	end
end
