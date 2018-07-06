import json
import json::static
import markdown2
import markdown2::markdown_metrics

class Repo
	var full_name: String

	var user: String is lazy do return full_name.split("/").first.trim
	var name: String is lazy do return full_name.split("/").last.trim

	var repo_dir: String is lazy do return "github/repos/{user}"
	var repo_json: String is lazy do return repo_dir / "{name}.json"
	var repo_md: String is lazy do return repo_dir / "{name}.md"
	var repo_metrics: String is lazy do return repo_dir / "{name}.metrics"

	var json: nullable JsonObject is lazy do
		var file = repo_json
		var obj = file.to_path.read_all.parse_json
		if not obj isa JsonObject then
			# print "Error: cannot load {file}"
			return null
		end
		return obj
	end

	var readme: nullable String is lazy do
		var file = repo_md
		if not file.file_exists then
			# print "Error: cannot load {file}"
			return null
		end
		return file.to_path.read_all
	end

	redef fun to_s do return full_name
end

class Loader
	var repos_dir = "github/repos"
	var md_parser = new MdParser is lazy
	var md_metrics = new MdMetricsCollector(md_parser) is lazy

	fun load_repos: Array[Repo] do
		var res = new Array[Repo]
		for dir_name in repos_dir.files do
			var dir = repos_dir / dir_name
			for file_name in dir.files do
				if not file_name.has_suffix(".json") then continue
				res.add new Repo("{dir_name}/{file_name.strip_extension}")
			end
		end
		return res
	end

	fun load_metrics do
		for repo in load_repos do
			if repo.repo_metrics.file_exists then continue

			var readme = repo.readme
			if readme == null then
				print "Error: no readme for `{repo}`"
				continue
			end

			var metrics = new MdDocumentMetrics(repo.full_name)
			md_metrics.analyze_string(metrics, readme)

			# print metrics
			var obj = new JsonObject
			obj["repo"] = repo.full_name
			obj["readme"] = repo.repo_json
			obj["lines"] = metrics.lines
			obj["words"] = metrics.words
			obj["chars"] = metrics.chars


			for heading, count in metrics.headings_counter do
				obj["heading {heading}"] = count
			end
			for node, count in metrics.nodes_counter do
				obj[node] = count
			end
			obj["loc_sum"] = metrics.codes_counter.sum
			obj["loc_avg"] = metrics.codes_counter.avg

			var min = metrics.codes_counter.min
			if min != null then
				obj["loc_min"] = metrics.codes_counter[min]
			end
			var max = metrics.codes_counter.max
			if max != null then
				obj["loc_max"] = metrics.codes_counter[max]
			end
			obj.to_pretty_json.write_to_file(repo.repo_metrics)
		end
	end
end

var loader = new Loader
loader.load_metrics
