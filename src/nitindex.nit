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

import popcorn
import popcorn::pop_config

import frontend
import api_docdown
import model::model_json
import model::model_views

class CatalogConfig
	super AppConfig

	# Share directory option (where the static files are located)
	#
	# `--share-dir`
	var opt_sharedir = new OptionString("Share directory", "--share-dir")

	# Share directory (where the static files are located)
	#
	# * key: `app.sharedir`
	# * default: `share`
	fun app_sharedir: String do
		return opt_sharedir.value or else ini["app.sharedir"] or else "share"
	end

	init do
		super
		add_option(opt_sharedir)
	end
end

class SearchApp
	super App

	var view: ModelView
	var index: ModelIndex

	init do
		use("/api/search/", new APIIndexSearch(view, index))
	end
end

abstract class APISearchHandler
	super Handler

	var view: ModelView

end

abstract class APISearchList
	super APISearchHandler

	fun paginate(results: JsonArray, page, limit: nullable Int): JsonObject do
		if page == null or page <= 0 then page = 1
		if limit == null or limit <= 0 then limit = 10

		var max = (results.length / limit) + 1
		if page > max then page = 1

		var lstart = (page - 1) * limit
		var lend = limit
		if lstart + lend > results.length then lend = results.length - lstart

		var res = new JsonObject
		res["page"] = page
		res["limit"] = limit
		res["results"] = new JsonArray.from(results.subarray(lstart, lend))
		res["max"] = max
		res["total"] = results.length
		return res
	end
end

class APIIndexSearch
	super APISearchList

	var index: ModelIndex

	redef fun get(req, res) do
		var query = req.string_arg("q")
		if query == null then
			res.api_error(400, "Missing search string")
			return
		end
		var page = req.int_arg("p")
		var limit = req.int_arg("n")
		var response = new JsonArray.from(find(query))
		res.json paginate(response, page, limit)
	end

	fun find(query: String, limit: nullable Int): Array[MEntity] do
		# Find, lookup by name prefix
		var matches = index.find_by_name_prefix(query).uniq.
			sort(lname_sorter, name_sorter)
		if limit != null and matches.length >= limit then
			return matches.limit(limit).rerank.sort(vis_sorter, score_sorter).mentities
		end
		matches = matches.rerank.sort(vis_sorter, score_sorter)
		# If limit not reached, lookup by full_name prefix
		var malus = matches.length
		var full_matches = new IndexMatches
		for match in index.find_by_full_name_prefix(query).
			sort(lfname_sorter, fname_sorter) do
			match.score += malus
			full_matches.add match
		end
		matches = matches.uniq
		if limit != null and matches.length + full_matches.length >= limit then
			matches.add_all full_matches
			matches = matches.uniq.limit(limit).rerank.sort(vis_sorter, score_sorter)
			return matches.mentities
		end
		if matches.not_empty then return matches.mentities

		# If limit not reached, lookup by similarity
		malus = matches.length
		var sim_matches = new IndexMatches
		for match in index.find_by_similarity(query).sort(score_sorter, lname_sorter, name_sorter) do
			match.score += malus
			sim_matches.add match
		end
		matches.add_all sim_matches
		matches = matches.uniq
		if limit != null then matches = matches.limit(limit)
		return matches.rerank.sort(vis_sorter, score_sorter).mentities
	end

	private var score_sorter = new ScoreComparator
	private var vis_sorter = new VisibilityComparator
	private var name_sorter = new NameComparator
	private var lname_sorter = new NameLengthComparator
	private var fname_sorter = new FullNameComparator
	private var lfname_sorter = new FullNameLengthComparator
end

var config = new CatalogConfig
config.parse_options(args)

var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
tpl.add "Run a webserver based on nitcorn that serves pages about model."
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

var view = new ModelView(model)
var index = new ModelIndex
for mpackage in view.mpackages do
	index.index(mpackage)
	for mgroup in mpackage.mgroups do
		index.index(mgroup)
		for mmodule in mgroup.mmodules do
			index.index(mmodule)
			for mclassdef in mmodule.mclassdefs do
				index.index(mclassdef)
				index.index(mclassdef.mclass)
				for mpropdef in mclassdef.mpropdefs do
					index.index(mpropdef)
					index.index(mpropdef.mproperty)
				end
			end
		end
	end
end

var app = new SearchApp(view, index)
app.use("/*", new StaticHandler(config.app_sharedir / "nitindex", "index.html"))
app.use_after("/*", new ConsoleLog)
app.listen(config.app_host, config.app_port)
