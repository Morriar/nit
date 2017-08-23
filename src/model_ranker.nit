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

redef class MEntity
	fun stereotype(view: ModelView): String do return ""
end

redef class MMethod

	redef fun stereotype(view) do
		if is_getter(view) then return "accessor"
		if is_setter(view) then return "mutator"
		if is_init then return "creational"
		# collaborational
		return super
	end

	# Is `self` a getter method for an attribute?
	fun is_getter(view: ModelView): Bool do
		for mattribute in intro_mclassdef.mclass.collect_accessible_mattributes(view) do
			if mattribute.name == "_{name}" then return true
		end
		return false
	end

	# Is `self` a setter method for an attribute?
	fun is_setter(view: ModelView): Bool do
		for mattribute in intro_mclassdef.mclass.collect_accessible_mattributes(view) do
			if "{mattribute.name}=" == "_{name}" then return true
		end
		return false
	end
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
		# print subs.length

		# users_stats(subs)
		# kinds_stats(view, subs)
		# packages_stats(view, subs)
		# order_stats(view, subs)
		# compare_orders(view, mainmodule, subs)
		# comments_stats(subs)
		# compare_experts(view, subs)
		# order_inits(view, subs)
		# order_attrs(view, subs)
		# order_interfaces(view, subs)
		entities_stereotypes(view, subs)
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

	fun compare_experts(view: ModelView, subs: Array[ExpOrderSession]) do
		var orders = new HashMap[Array[String], Array[ExpOrderSession]]
		for sub in subs do
			var keys = sub.original_order
			default_comparator.sort keys

			if not orders.has_key(keys) then
				orders[keys] = new Array[ExpOrderSession]
			end
			orders[keys].add sub
		end
		for order, order_subs in orders do
			if order_subs.length < 2 then continue
			var parts = order.first.split("::")
			parts = parts.subarray(0, parts.length - 1)
			print "{parts.join("::")}\tlength {order.length}"
			# print order.join(", ")

			for sub in order_subs do
				printn "{sub.user.login}"
				# for i in sub.to_order do
					# printn "\t{i.split("::").last}"
				# end
				print ""
				# for i in sub.to_order do
					# print i
				# end
				for sub2 in order_subs do
					if sub == sub2 then continue
					print "\t{sub.to_order.levenshtein_distance(sub2.to_order)} / {kendall_tau(sub.to_order, sub2.to_order)} {sub2.user.login}"
					print sub.to_order
				end
			end

			print ""
		end
	end

	fun order_inits(view: ModelView, subs: Array[ExpOrderSession]) do
		var all = 0
		var init_count = new Counter[Int]
		var init_pos = new Counter[Int]
		var init_firsts = new Counter[Bool]
		for sub in subs do
			var line = new Array[String]
			var icount = 0
			var pos = 0
			var contains_init = false
			var init_first = true
			for id in sub.to_order do
				var mentity = view.mentity_by_full_name(id)
				if mentity == null then
					print "Warning: no mentity for id {id}"
					continue
				end
				if mentity isa MMethodDef then
					mentity = mentity.mproperty
				end
				if mentity isa MMethod and mentity.is_init then
					icount += 1
					init_count.inc(icount)
					init_firsts.inc(init_first)
					init_pos.inc(pos)
					contains_init = true
					line.add "**{mentity.name}**"
				else
					init_first = false
					line.add "{mentity.name}"
				end
				pos += 1
				all += 1
			end
			if contains_init then print line.join("\t")
		end
		print "all: {all}"
		print "inits: {init_pos.sum}"
		for k, i in init_pos do
			print "{k}\t{i}"
		end

		init_firsts.print_elements(init_firsts.length)
		init_count.print_elements(init_count.length)
	end

	fun order_attrs(view: ModelView, subs: Array[ExpOrderSession]) do
		var all = 0
		var getters = 0
		var setters = 0
		var get_pos = new Counter[Int]
		var set_pos = new Counter[Int]
		var set_get_pos = new Counter[String]
		var acc_first = new Counter[Bool]
		var kinds = new Counter[Bool]
		for sub in subs do
			var pos = 0
			var is_first = true
			var all_acc = true
			for id in sub.to_order do
				var mentity = view.mentity_by_full_name(id)
				if mentity == null then
					print "Warning: no mentity for id {id}"
					continue
				end
				if mentity isa MMethodDef then
					mentity = mentity.mproperty
				end
				if mentity isa MMethod and mentity.is_getter(view) then
					# print mentity
					getters += 1
					get_pos.inc(pos)
					acc_first.inc(is_first)
				else if mentity isa MMethod and mentity.is_setter(view) then
					setters += 1
					set_pos.inc(pos)
					acc_first.inc(is_first)
					var getter = null
					var found_getter = false
					for other in sub.to_order do
						if "{other.split("::").last}=" == mentity.name then getter = other
					end
					if pos > 0 then
						if sub.to_order[pos - 1] == getter then
							set_get_pos.inc("before")
							found_getter = true
						end
					end
					if pos < sub.to_order.length - 1 then
						if sub.to_order[pos + 1] == getter then
							set_get_pos.inc("after")
							found_getter = true
						end
					end
					if getter != null and not found_getter then
						set_get_pos.inc("elsewhere")
					else if getter == null then
						set_get_pos.inc("nowhere")
					end
				else
					if not(mentity isa MMethod and mentity.is_init) then
						is_first = false
						all_acc = false
					end
				end
				all += 1
				pos += 1
			end
			kinds.inc(all_acc)
		end
		print "all: {all}"
		print "getters: {getters}"
		print "setters: {setters}"

		print "Getter positions:"
		for k, v in get_pos do
			print "{k}\t{v}"
		end
		print "Setter positions:"
		for k, v in set_pos do
			print "{k}\t{v}"
		end

		print "Relative positions of getter / setter"
		for k, v in set_get_pos do
			print "{k}\t{v}"
		end

		print "Accessor is first"
		for k, v in acc_first do
			print "{k}\t{v}"
		end

		kinds.print_elements(2)
	end

	fun order_interfaces(view: ModelView, subs: Array[ExpOrderSession]) do
		var all = 0
		var mclasses = 0
		var ifaces = 0
		var abs = 0
		var ifaces_pos = new Counter[Int]
		var abs_pos = new Counter[Int]
		var ifaces_first = new Counter[Bool]
		var abs_first = new Counter[Bool]
		for sub in subs do
			var pos = 0
			var is_first = true
			for id in sub.to_order do
				var mentity = view.mentity_by_full_name(id)
				if mentity == null then
					print "Warning: no mentity for id {id}"
					continue
				end
				if mentity isa MClassDef then
					mentity = mentity.mclass
				end
				if mentity isa MClass and mentity.is_interface then
					# print mentity
					ifaces += 1
					ifaces_pos.inc(pos)
					ifaces_first.inc(is_first)
				else if mentity isa MClass and mentity.is_abstract then
					abs += 1
					abs_pos.inc(pos)
					abs_first.inc(is_first)
				else if mentity isa MClass then
					mclasses += 1
					is_first = false
				end
				all += 1
				pos += 1
			end
		end
		print "all: {all}"
		print "mclasses: {mclasses}"
		print "ifaces: {ifaces}"
		print "abs: {abs}"

		print "Interfaces positions:"
		for k, v in ifaces_pos do
			print "{k}\t{v}"
		end

		print "Interface is first"
		for k, v in ifaces_first do
			print "{k}\t{v}"
		end

		print "Abstract positions:"
		for k, v in abs_pos do
			print "{k}\t{v}"
		end

		print "Abstract is first"
		for k, v in abs_first do
			print "{k}\t{v}"
		end
	end

	fun entities_stereotypes(view: ModelView, subs: Array[ExpOrderSession]) do
		var done = new HashSet[String]
		var csv = new CsvDocument
		csv.header = ["mentity", "kind", "stereotype"]
		for sub in subs do
			for id in sub.to_order do
				if done.has(id) then continue
				var mentity = view.mentity_by_full_name(id)
				done.add(id)
				if mentity == null then continue
				csv.add_record(mentity.full_name, mentity.class_name, mentity.stereotype(view))
			end
		end
		csv.write_to_file("csv/stereotypes.csv")
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
			if not mentity isa MClass then continue
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

# Compute Kendall-Tau distance between `ta` and `tb`.
#
# ~~~
# var a = ["A", "B", "C"]
# var b = ["A", "B", "C"]
# var c = ["C", "B", "A"]
# var d = ["A", "B", "C", "D", "E"]
# var e = ["C", "D", "A", "B", "E"]
# assert kendall_tau(a, b) == 0
# assert kendall_tau(a, c) == 3
# assert kendall_tau(d, e) == 4
# ~~~
fun kendall_tau(ta, tb: Array[String]): Int do
	var n = ta.length
	assert n == tb.length

	# Ranks
	var pa = new HashMap[String, Int]
	var pb = new HashMap[String, Int]
	for i in [0 .. n[ do
		pa[ta[i]] = i
		pb[tb[i]] = i
	end

	var tau = 0
	for i in [0 .. n[ do
		for j in [i + 1 .. n[ do
			if pb[ta[i]] > pb[ta[j]] then tau += 1
		end
	end
	return tau
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
