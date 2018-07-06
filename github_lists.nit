import github

class Loader

	var token: String

	var api = new GithubAPI(token) is lazy

	var lists_dir = "github/lists"

	fun load_repos(query: String): Array[String] do
		var repos = new Array[String]
		for item in api.get(query).as(JsonObject)["items"].as(JsonArray) do
			if item isa JsonObject then repos.add repo_name(item)
		end
		return repos
	end

	fun repo_name(obj: JsonObject): String do return obj["full_name"].as(String)

	fun load_lists do
		var most_stared = load_repos("/search/repositories?q=stars:%3E1&sort=stars&per_page=100")
		most_stared.join("\n").write_to_file(lists_dir / "most_stared")

		var most_forked = load_repos("/search/repositories?q=forks:%3E1&sort=forks&per_page=100")
		most_forked.join("\n").write_to_file(lists_dir / "most_forked")

		var ranges = [ "10..100", "101..1000", "1001..5000", "5000..10000", "10000..1000000" ]
		for range in ranges do
			var ranged = load_repos("/search/repositories?q=stars:{range}&sort=stars&per_page=100")
			ranged.join("\n").write_to_file(lists_dir / "range{range.replace("..", "-")}")
		end
	end
end

assert args.length == 1 else
	print "Usage: command <github token>"
end

var loader = new Loader(args.first)
loader.load_lists
