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

# TODO options rankers
# TODO gnuplot
# TODO input from args
# TODO exps
# TODO csv file
# TODO print option
# TODO gnu option

module model_ranker

import frontend
import model_index
import model_ranking
import csv
import web

redef class ToolContext
	var ranker_phase: Phase = new RankerPhase(self, null)

	redef init do super
end

redef class NitwebConfig
	redef var db_name = "nitweb_orders"
end

class RankerPhase
	super Phase

	var csv_out = "csv"

	var rankers: Map[String, ModelRanker] is noinit

	init do
		csv_out.rmdir
		csv_out.mkdir
	end

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var model = toolcontext.modelbuilder.model
		var view = new ModelView(model)

		var config = new NitwebConfig(model, mainmodule, toolcontext.modelbuilder)
		config.parse_options(args)

		rankers = init_rankers(toolcontext.modelbuilder, mainmodule, view)

		var subs = config.order_results.find_all
		print subs.length

		users_stats(subs)
		kinds_stats(view, subs)
		packages_stats(view, subs)
		order_stats(view, subs)
		compare_orders(view, mainmodule, subs)
		comments_stats(subs)
	end

	fun users_stats(subs: Array[ExpOrderSession]) do
		var users_subs = new Counter[String]
		var users_times = new Counter[String]
		var users_comps = new Counter[String]
		for sub in subs do
			users_subs.inc(sub.user.login)
			users_times[sub.user.login] += sub.finished_at.as(not null) - sub.started_at
			users_comps[sub.user.login] += sub.original_order.length
		end

		var csv = new CsvDocument
		csv.header = ["user", "nb_subs", "nb_ordered", "time"]

		print "# users"
		for user in users_subs.sort.reversed do
			var sub = users_subs[user]
			var ordered = users_comps[user]
			var time = users_times[user] / 1000 / 60
			print " * {user}: {sub} subs, {ordered} ordered, {time} minutes"
			csv.add_record(user, sub, ordered, time)
		end
		csv.write_to_file csv_out / "users.csv"
	end

	fun kinds_stats(view: ModelView, subs: Array[ExpOrderSession]) do
		var kinds_subs = new Counter[String]
		var kinds_times = new Counter[String]
		var kinds_comps = new Counter[String]
		var ids_stats = new Counter[String]

		for sub in subs do
			ids_stats.inc(sub.mentity)
			var mentity = view.mentity_by_full_name(sub.mentity)
			if mentity == null then
				print "Warning: unknown {sub.mentity}"
				continue
			end
			var class_name = mentity.class_name
			if class_name == "MPackage" then
				kinds_subs.inc("MModules")
				kinds_times["MModules"] += sub.finished_at.as(not null) - sub.started_at
				kinds_comps["MModules"] += sub.original_order.length
			else if class_name == "MModule" then
				kinds_subs.inc("MClasses")
				kinds_times["MClasses"] += sub.finished_at.as(not null) - sub.started_at
				kinds_comps["MClasses"] += sub.original_order.length
			else if class_name == "MClass" then
				kinds_subs.inc("MProperties")
				kinds_times["MProperties"] += sub.finished_at.as(not null) - sub.started_at
				kinds_comps["MProperties"] += sub.original_order.length
			else
				print "Unknown order kind {class_name}"
			end
		end

		print "# kinds"
		var csv = new CsvDocument
		csv.header = ["kind", "nb subs", "nb ordered", "time"]
		for key in kinds_subs.sort.reversed do
			var sub = kinds_subs[key]
			var ordered = kinds_comps[key]
			var time = kinds_times[key] / 1000 / 60
			csv.add_record(key, sub, ordered, time)
			print " * {key}: {sub} subs, {ordered} ordered, {time} minutes"
		end
		csv.write_to_file csv_out / "kinds.csv"

		# print "# ids"
		csv = new CsvDocument
		csv.header = ["target", "nb subs"]
		for key in ids_stats.sort.reversed do
			# print " * {key}: {ids_stats[key]}"
			csv.add_record(key, ids_stats[key])
		end
		csv.write_to_file csv_out / "targets.csv"
	end

	fun packages_stats(view: ModelView, subs: Array[ExpOrderSession]) do
		var packages_subs = new Counter[String]
		var packages_times = new Counter[String]
		var packages_comps = new Counter[String]

		for sub in subs do
			var mentity = view.mentity_by_full_name(sub.mentity)
			if mentity == null then
				print "Warning: unknown {sub.mentity}"
				continue
			end
			var mpackage: nullable MPackage
			if mentity isa MPackage then
				mpackage = mentity
			else if mentity isa MModule then
				mpackage = mentity.mpackage
			else if mentity isa MClass then
				mpackage = mentity.intro.mmodule.mpackage
			else
				print "Unknown target package {mentity}"
				continue
			end
			if mpackage == null then
				print "Unknown target package {sub.mentity}"
				continue
			end

			packages_subs.inc(mpackage.full_name)
			packages_times[mpackage.full_name] += sub.finished_at.as(not null) - sub.started_at
			packages_comps[mpackage.full_name] += sub.original_order.length
		end

		print "# packages"
		var csv = new CsvDocument
		csv.header = ["package", "nb subs", "nb ordered", "time"]
		for key in packages_subs.sort.reversed do
			var sub = packages_subs[key]
			var ordered = packages_comps[key]
			var time = packages_times[key] / 1000 / 60
			csv.add_record(key, sub, ordered, time)
			print " * {key}: {sub} subs, {ordered} ordered, {time} minutes"
		end
		csv.write_to_file csv_out / "packages.csv"
	end

	fun order_stats(view: ModelView, subs: Array[ExpOrderSession]) do
		var ids_stats = new Counter[String]
		var same_orders = new Counter[String]
		var sizes_stats = new Counter[Int]
		for sub in subs do
			var keys = sub.original_order
			default_comparator.sort keys
			same_orders.inc(keys.join(","))
			sizes_stats.inc(keys.length)
			for mentity in load_mentities(view, sub.to_order) do
				ids_stats.inc(mentity.full_name)
			end
		end

		# print "# orders"
		var csv = new CsvDocument
		csv.header = ["order", "nb subs"]
		for key in same_orders.sort.reversed do
			csv.add_record(key, same_orders[key])
		#	print " * {key}: {same_orders[key]}"
		end
		csv.write_to_file csv_out / "same_orders.csv"

		print "# sizes"
		csv = new CsvDocument
		csv.header = ["size", "nb subs"]
		for key in sizes_stats.sort.reversed do
			csv.add_record(key, sizes_stats[key])
			print " * {key}: {sizes_stats[key]}"
		end
		csv.write_to_file csv_out / "order_sizes.csv"

		# print "# ids"
		csv = new CsvDocument
		csv.header = ["target", "nb orders"]
		for key in ids_stats.sort.reversed do
			# print " * {key}: {ids_stats[key]}"
			csv.add_record(key, ids_stats[key])
		end
		csv.write_to_file csv_out / "mentities.csv"

		var distances_stats = new Counter[Int]
		for sub in subs do
			distances_stats.inc(sub.original_order.levenshtein_distance(sub.to_order))
		end

		print "# distances from original"
		csv = new CsvDocument
		csv.header = ["distance", "nb subs"]
		for key in distances_stats.sort.reversed do
			csv.add_record(key, distances_stats[key])
			print " * {key}: {distances_stats[key]}"
		end
		csv.write_to_file csv_out / "original_distances.csv"
	end

	fun compare_orders(view: ModelView, mainmodule: MModule, subs: Array[ExpOrderSession]) do
		# Compute rankings
		var rankings = new HashMap[ExpOrderSession, Map[String, ModelRanking]]
		for sub in subs do
			# print "Compute ranking for {sub}"
			var mentities = load_mentities(view, sub.original_order)
			rankings[sub] = compute_rankings(mentities, mainmodule, view)
		end
		# Compute distances
		var distances = new HashMap[ExpOrderSession, Map[String, Int]]
		for sub in rankings.keys do
			var original_mentities = load_mentities(view, sub.to_order)
			distances[sub] = compute_distances(original_mentities, rankings[sub])
		end

		var csv = new CsvDocument
		csv.header.add "submission"
		csv.header.add "user"
		csv.header.add "kind"
		csv.header.add "original size"
		csv.header.add "original distance"
		csv.header.add_all rankers.keys
		for sub in subs do
			var mentity = view.mentity_by_full_name(sub.mentity)
			if mentity == null then continue
			var record = new Array[String]
			record.add sub.id
			record.add sub.user.login
			record.add mentity.class_name
			record.add sub.original_order.length.to_s
			record.add sub.original_order.levenshtein_distance(sub.to_order).to_s
			var distance = distances[sub]
			for order in rankers.keys do
				record.add distance[order].to_s
			end
			csv.records.add record
		end
		csv.write_to_file csv_out / "compare_orders.csv"
	end

	# Load mentities from an array of full names
	fun load_mentities(view: ModelView, ids: Array[String]): Array[MEntity] do
		var mentities = new Array[MEntity]
		for id in ids do
			var mentity = view.mentity_by_full_name(id)
			if mentity == null then
				print "Warning: no mentity for id {id}"
				continue
			end
			mentities.add mentity
		end
		return mentities
	end

	# Compute ranks for all ranker with mentities
	fun compute_rankings(mentities: Array[MEntity], mainmodule: MModule, view: ModelView): Map[String, ModelRanking] do
		var rankings = new HashMap[String, ModelRanking]
		for id, ranker in rankers do
			# print " * rank with {order}"
			var ranking = new ModelRanking.from_mentities(mentities)
			ranking.rank(ranker)
			rankings[id] = ranking
		end
		return rankings
	end

	# Compute distance between `original_order` and each ranking
	#
	# Return the distance for each order
	fun compute_distances(original_order: Array[MEntity], rankings: Map[String, ModelRanking]): Map[String, Int] do
		var distances = new HashMap[String, Int]
		for kind, ranking in rankings do
			var new_order = ranking.to_mentities
			distances[kind] = original_order.levenshtein_distance(new_order)
		end
		return distances
	end

	fun init_rankers(modelbuilder: ModelBuilder, mainmodule: MModule, view: ModelView): Map[String, ModelRanker] do
		var res = new HashMap[String, ModelRanker]
		# res["none"] = new NoneRanker
		res["random"] = new RandomRanker
		res["alpha"] = new AlphaRanker
		res["natural"] = new NaturalRanker
		res["heuristical"] = new HeuristicalRanker
		res["size"] = new SizeRanker
		res["loc"] = new LOCRanker(modelbuilder)
		res["lod"] = new LODRanker
		res["usage"] = new UsageRanker(view, modelbuilder, false)
		res["usage-all"] = new UsageRanker(view, modelbuilder, true)
		res["dep"] = new DepRanker(mainmodule)
		# res["dep-doc"] = new DocDepRanker(view)
		res["mendel"] = new MendelRanker(mainmodule, view)
		res["pagerank-hierarchy"] = new PageRankRanker(view, modelbuilder, "hierarchy")
		res["pagerank-types"] = new PageRankRanker(view, modelbuilder, "types")
		res["pagerank-calls"] = new PageRankRanker(view, modelbuilder, "calls")
		return res
	end

	fun comments_stats(subs: Array[ExpOrderSession]) do
		var user_comments = new Counter[String]
		for sub in subs do
			var comment = sub.comment
			if comment == null then continue
			user_comments.inc(sub.user.login)
			# print sub.comment or else ""
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: model_ranker [OPTION]... <file.nit>...\n"
toolcontext.tooldescription = tpl.write_to_string

# process options
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
