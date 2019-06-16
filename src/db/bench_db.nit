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

module bench_db

import db
import realtime

class BenchDb

	fun run do
		print "--- Parsing ----------------------------------------------------"
		var ctx = bench_parsing("./lib")

		print "--- Base -------------------------------------------------------"
		var db1 = bench_indexing_base("base", ctx)
		bench_query(db1, "base-empty", new Array[MOp], 0)
		bench_query(db1, "base-easy1", [new OpEq("name", "HashMap")], 2)
		bench_query(db1, "base-easy2", [new OpIn("name", ["HashMap", "Array"])], 10)
		bench_query(db1, "base-easy3", [new OpEq("name", "get")], 41)
		bench_query(db1, "base-bad1", [new OpEq("name", "zizitop")], 0)

		print "--- Hash -------------------------------------------------------"
		var db2 = bench_indexing_hash("hash", ctx)
		bench_query(db2, "hash-empty", new Array[MOp], 0)
		bench_query(db2, "hash-easy1", [new OpEq("name", "HashMap")], 2)
		bench_query(db2, "hash-easy2", [new OpIn("name", ["HashMap", "Array"])], 10)
		bench_query(db2, "hash-easy3", [new OpEq("name", "get")], 41)
		bench_query(db2, "hash-bad1", [new OpEq("name", "zizitop")], 0)
	end

	fun bench_parsing(path: String...): BenchContext do
		var clock = new Clock

		var toolcontext = new ToolContext
		toolcontext.process_options(path)

		var arguments = toolcontext.option_context.rest
		var model = new Model
		var mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = mbuilder.parse_full(arguments)
		var mainmodule = toolcontext.make_main_module(mmodules)

		mbuilder.run_phases
		toolcontext.run_global_phases(mmodules)

		print "Took: {clock.lapse}s"
		return new BenchContext(mainmodule, model)
	end

	fun bench_indexing_base(name: String, ctx: BenchContext): ModelDb do
		var clock = new Clock
		var db = new ModelDb
		db.index_model(ctx.mainmodule, ctx.model)
		print "{name}: {clock.lapse}s"
		return db
	end

	fun bench_indexing_hash(name: String, ctx: BenchContext): ModelDb do
		var clock = new Clock
		var db = new ModelDb
		db.indexes.add new HashIndex("name")
		db.index_model(ctx.mainmodule, ctx.model)
		print "{name}: {clock.lapse}s"
		return db
	end

	fun bench_query(db: ModelDb, name: String, query: Array[MOp], assert_res: Int) do
		var clock = new Clock
		assert db.find(query).length == assert_res
		print "{name}: {clock.lapse}s"
	end
end

class BenchContext
	var mainmodule: MModule
	var model: Model
end

var benches = new BenchDb
benches.run
