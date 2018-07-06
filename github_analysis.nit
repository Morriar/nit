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

	var metrics: nullable JsonObject is lazy do
		var file = repo_metrics
		var obj = file.to_path.read_all.parse_json
		if not obj isa JsonObject then
			# print "Error: cannot load {file}"
			return null
		end
		return obj
	end

	redef fun to_s do return full_name
end

class Loader
	var repos_dir = "github/repos"

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

	var lists_dir = "github/lists"

	var load_lists: Map[String, Array[String]] is lazy do
		var res = new HashMap[String, Array[String]]
		for file in lists_dir.files do
			res[file] = (lists_dir / file).to_path.read_lines
		end
		return res
	end

	fun repo_list(full_name: String): String do
		var names = new Array[String]
		for list, repos in load_lists do
			for repo in repos do
				if repo == full_name then names.add list
			end
		end
		if names.has("awesome") then return "awesome"
		if names.has("most_stared") then return "most_stared"
		if names.has("most_forked") then return "most_forked"
		return names.join(",")
	end

	fun compute_csv do

		var data = new CsvData

		for repo in load_repos do
			data.add("full_name", repo.full_name, repo.full_name)
			data.add("user", repo.full_name, repo.user)
			data.add("name", repo.full_name, repo.name)
			data.add("from", repo.full_name, repo_list(repo.full_name))

			var json = repo.json
			if json != null then
				data.add("desc", repo.full_name, json["description"])
				data.add("html_url", repo.full_name, json["html_url"])
				data.add("created_at", repo.full_name, json["created_at"])
				data.add("updated_at", repo.full_name, json["updated_at"])
				data.add("homepage", repo.full_name, json["homepage"])
				data.add("size", repo.full_name, json["size"])
				data.add("stars", repo.full_name, json["stargazers_count"])
				data.add("forks", repo.full_name, json["forks_count"])
				data.add("default_branch", repo.full_name, json["default_branch"])
				data.add("language", repo.full_name, json["language"])
			end

			data.add("has_readme", repo.full_name, repo.readme != null)

			var metrics = repo.metrics
			if metrics != null then
				for key, value in metrics do
					if key == "repo" then continue
					data.add(key, repo.full_name, value)
				end
			end

			# TODO ana titles % sections
			# TODO ana blockquote
		end

		data.to_csv(repos_dir / "metrics.csv")
	end
end

class CsvData
	var data = new HashMap[String, Map[String, String]]

	fun add(key: String, repo: String, value: nullable Object) do
		if not data.has_key(key) then
			data[key] = new HashMap[String, String]
		end
		data[key][repo] = if value == null then "" else value.to_s
	end

	fun get(key: String, repo: String): String do
		if not data.has_key(key) then return ""
		if not data[key].has_key(repo) then return ""
		return data[key][repo]
	end

	fun to_csv(file: String) do
		var repos = new HashSet[String]
		var csv = new CsvDocument
		for key, map in data do
			csv.header.add key
			repos.add_all map.keys
		end
		for repo in repos do
			var line = new Array[String]
			for key in data.keys do
				line.add get(key, repo)
			end
			csv.records.add line
		end
		csv.write_to_file(file)
	end
end

var loader = new Loader
loader.compute_csv
