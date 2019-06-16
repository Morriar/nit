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

class BenchmarksDb

	fun run do
		print "--- Parsing ----------------------------------------------------"
		var ctx = bench_parsing("./lib")

		var dbs = [
			new BenchDb("base", new ModelDb),
			new BenchDb("hash", new ModelDb([new HashIndex("name")])),
			new BenchDb("pref", new ModelDb([new PrefixIndex("name")])),
			new BenchDb("coli", new ModelDb([new ColumnIndex("is-test")]))
		]

		var queries = [
			new BenchQuery("empty", new Array[MOp], 0),
			new BenchQuery("eq-ok1", [new OpEq("name", "HashMap")], 2),
			new BenchQuery("eq-ok2", [new OpEq("name", "get")], 41),
			new BenchQuery("eq-ok3", [new OpEq("property", "core::Array::from")], 1),
			new BenchQuery("eq-ko1", [new OpEq("name", "zizitop")], 0),
			new BenchQuery("eq-bol1", [new OpBool("is-test", false)], 40999),
			new BenchQuery("eq-bol2", [new OpBool("is-test", true)], 2726),
			new BenchQuery("in-ok1", [new OpIn("name", ["Hash", "Array"])], 8),
			new BenchQuery("pfx-ok1", [new OpPrefix("name", "Hash")], 29)
		]

		print "--- Indexing ---------------------------------------------------"
		printn "\t"
		for db in dbs do
			printn "\t{db.name}"
		end
		printn "\nindexing"
		for db in dbs do
			var time = bench_indexing(ctx, db)
			printn "\t{time}"
		end
		print ""

		print "--- Querying ---------------------------------------------------"
		printn "\t"
		for db in dbs do
			printn "\t{db.name}"
		end
		print ""

		for query in queries do
			printn "{query.name}\t"
			for db in dbs do
				var time = bench_query(db, query)
				printn "\t{time}"
			end
			print ""
		end
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

	fun bench_indexing(ctx: BenchContext, db: BenchDb): Float do
		var clock = new Clock
		db.db.index_model(ctx.mainmodule, ctx.model)
		return clock.lapse
	end

	fun bench_query(db: BenchDb, query: BenchQuery): Float do
		var clock = new Clock
		assert db.db.find(query.query).length == query.exp_results
		return clock.lapse
	end
end

class BenchContext
	var mainmodule: MModule
	var model: Model
end

class BenchQuery
	var name: String
	var query: Array[MOp]
	var exp_results: Int
end

class BenchDb
	var name: String
	var db: ModelDb
end

var benches = new BenchmarksDb
benches.run
