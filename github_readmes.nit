import curl
import json::static

class Loader

	var repos_dir = "github/repos"

	fun load_json: Map[String, JsonObject] do
		var res = new HashMap[String, JsonObject]
		for dir_name in repos_dir.files do
			var dir = repos_dir / dir_name
			for file_name in dir.files do
				if not file_name.has_suffix(".json") then continue
				var repo_name = dir_name / file_name.strip_extension
				var json_file = dir / file_name

				var obj = json_file.to_path.read_all.parse_json
				if not obj isa JsonObject then
					print "Error: cannot load {json_file}"
					continue
				end
				res[repo_name] = obj
			end
		end
		return res
	end

	fun load_readmes do
		for repo, obj in load_json do
			var readme_file = repos_dir / "{repo}.md"
			if readme_file.file_exists then continue

			var branch = obj["default_branch"].as(String)
			var readme_url = "https://raw.githubusercontent.com/{repo}/{branch}/README.markdown"
			printn "{repo}: "
			sys.system "curl {readme_url} -f -s -o {readme_file} --write-out '%\{http_code\}'"
			print ""
		end
	end
end

var loader = new Loader
loader.load_readmes
