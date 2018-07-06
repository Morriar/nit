import github::github_curl

class Loader

	var token: String

	var ghcurl = new GithubCurl(token, "none") is lazy

	var lists_dir = "github/lists"

	fun load_lists: Map[String, Array[String]] do
		var res = new HashMap[String, Array[String]]
		for file in lists_dir.files do
			res[file] = (lists_dir / file).to_path.read_lines
		end
		return res
	end

	fun load_repos do
		var output_dir = "github/repos"
		for list, repos in load_lists do
			print "# {list}"
			for repo in repos do
				var user_name = repo.split("/").first
				var repo_dir = output_dir / user_name
				repo_dir.mkdir
				var repo_file = output_dir / "{repo}.json"
				if repo_file.file_exists then continue
				print " * {repo}"
				var obj = ghcurl.get_and_parse("https://api.github.com/repos/{repo}")
				if not obj isa JsonObject then
					print "Error: {repo} - {obj or else "NULL"}"
					continue
				end
				obj.to_pretty_json.write_to_file(repo_file)
			end
		end
	end
end

assert args.length == 1 else
	print "Usage: command <github token>"
end

var loader = new Loader(args.first)
loader.load_repos
