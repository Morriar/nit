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

redef class ToolContext
	var ranker_phase: Phase = new RankerPhase(self, null)

	redef init do super
end

class RankerPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var model = toolcontext.modelbuilder.model
		var view = new ModelView(model)
		# Input array
		var ids = ["core::Object", "core::Array", "core::String", "core::Int"]
		# Find mentity
		var original_order = load_mentities(view, ids)
		# Randomize order to avoid bias if the ranking do nothing
		var mentities = original_order.to_shuffle
		# Get all orders
		var rankings = compute_rankings(mentities, mainmodule, view)
		# Compare orders
		var distances = compute_distances(original_order, rankings)
		# Gen CSV
		var csv = to_csv(distances)
		# csv.write_to_file "distances.csv"
		var plot = to_plot(distances)
		var plot_file = "distances.plot"
		plot.write_to_file plot_file
		# gnuplot -e "set term png; set output \"$bn.png\"" "$1"
		sys.system "gnuplot -p {plot_file}"

		# Print results
		print "Original order:"
		print original_order
		for kind, ranking in rankings do
			print "{kind}: ({distances[kind]})"
			print ranking
		end
		print csv

		# Gen plot
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
		var orders = ["dep", "dep-doc", "mendel", "none", "random", "alpha", "natural", "heuristical", "pagerank-hierarchy", "pagerank-types", "pagerank-calls", "size", "loc", "lod", "usage"]
		var rankings = new HashMap[String, ModelRanking]
		for order in orders do
			var ranker = get_ranker(order, toolcontext.modelbuilder, mainmodule, view)
			if ranker == null then
				print "Error: No ranker for name {order}"
				continue
			end
			var ranking = new ModelRanking.from_mentities(mentities)
			ranking.rank(ranker)
			rankings[order] = ranking
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

	# Translate distances map to csv document
	fun to_csv(distances: Map[String, Int]): CsvDocument do
		var csv = new CsvDocument
		csv.header = ["engine", "distance"]
		for kind, distance in distances do
			csv.add_record(kind, distance)
		end
		return csv
	end

	fun to_plot(distances: Map[String, Int]): String do
		var plot = """
			set auto x;
			set yrange [0:];
			set style data histogram;
			set style histogram cluster gap 2;
			set style histogram errorbars linewidth 1;
			set style fill solid 0.3 border -1;
			set bars front;
			set boxwidth 0.9;
			set xtic nomirror rotate by -45 scale 0 font ',8';
			set title "$1 ; avg. on $count-1 runs"
			set ylabel "time (s)"
		"""
		return plot
	end

	fun get_ranker(kind: String, modelbuilder: ModelBuilder, mainmodule: MModule, view: ModelView): nullable ModelRanker do
		if kind == "dep" then
			return new DepRanker(mainmodule)
		else if kind == "dep-doc" then
			return new DocDepRanker(view)
		else if kind == "mendel" then
			return new MendelRanker(mainmodule, view)
		else if kind == "none" then
			return new NoneRanker
		else if kind == "random" then
			return new RandomRanker
		else if kind == "alpha" then
			return new AlphaRanker
		else if kind == "natural" then
			return new NaturalRanker
		else if kind == "heuristical" then
			return new HeuristicalRanker
		else if kind == "pagerank-hierarchy" then
			return new PageRankRanker(view, modelbuilder, "hierarchy")
		else if kind == "pagerank-types" then
			return new PageRankRanker(view, modelbuilder, "types")
		else if kind == "pagerank-calls" then
			return new PageRankRanker(view, modelbuilder, "calss")
		else if kind == "size" then
			return new SizeRanker
		else if kind == "loc" then
			return new LOCRanker(modelbuilder)
		else if kind == "lod" then
			return new LODRanker
		else if kind == "usage" then
			return new UsageRanker(modelbuilder)
		end
		return null
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
