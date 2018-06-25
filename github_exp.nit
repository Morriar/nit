import github
intrude import markdown2::markdown_metrics

class RepoReadmes
	var output_dir: String

	var awesome = ["ai/size-limit", "aimeos/aimeos-typo3", "amitmerchant1990/electron-markdownify",  "anfederico/Clairvoyant", "angular-medellin/meetup", "athityakumar/colorls", "choojs/choo", "Day8/re-frame", "github-changelog-generator/github-changelog-generator", "gitpoint/git-point", "Hexworks/Zircon", "iharsh234/WebApp", "jakubroztocil/httpie", "karan/joe", "Martinsos/edlib", "nhnent/tui.editor", "node-chat", "NSRare/NSGIF", "php-censor/php-censor", "rstacruz/hicat", "ryanoasis/nerd-fonts", "sebyddd/SDVersion", "shama/gaze", "sindresorhus/pageres", "teles/array-mixer", "vhesener/Closures", "webpro/release-it"]

	var language = [
		"JavaScript", "Python", "Java", "Ruby", "PHP", "C", "C++", "C#",
		"Go", "TypeScript", "Swift", "Scala", "Objective-C", "CoffeeScript"]

	var ranges: Array[String] = [ "10..100", "101..1000", "1001..5000", "5000..10000", "10000..1000000" ]

	var api = new GithubAPI("8f7076106386fe087f3e6c2833f408a7f5d5fa28")

	var awesome_repos: Array[RepoEntry] is lazy do
		var repos = new Array[RepoEntry]
		for repo in awesome do
			var obj = api.get("/repos/{repo}")
			if not obj isa JsonObject then continue
			repos.add load_repo(obj)
		end
		return repos
	end

	var range_stared: Array[RepoEntry] is lazy do
		var repos = new Array[RepoEntry]
		for range in ranges do
			repos.add_all load_repos("/search/repositories?q=stars:{range}&sort=stars&per_page=100")
		end
		return repos
	end

	var most_stared: Array[RepoEntry] is lazy do
		return load_repos("/search/repositories?q=stars:%3E1&sort=stars&per_page=100")
	end

	var most_forked: Array[RepoEntry] is lazy do
		return load_repos("/search/repositories?q=forks:%3E1&sort=forks&per_page=100")
	end

	fun random: Array[RepoEntry] do
		var repos = new Array[RepoEntry]
		while repos.length < 100 do
			var query = "/repositories/{[10000..140000000].rand}"
			var item = api.get(query)
			print api.last_error or else "null"
			if item isa JsonObject then repos.add load_repo(item)
		end
		return repos
	end

	fun load_repos(query: String): Array[RepoEntry] do
		var repos = new Array[RepoEntry]
		for item in api.get(query).as(JsonObject)["items"].as(JsonArray) do
			if item isa JsonObject then repos.add load_repo(item)
		end
		return repos
	end

	fun load_repo(obj: JsonObject): RepoEntry do
		var full_name = obj["full_name"].as(String)
		var default_branch = obj["default_branch"].as(String)
		var language = if obj["language"] isa String then obj["language"].as(String) else null
		var size = obj["size"].as(Int)
		var stars = obj["stargazers_count"].as(Int)
		var forks = obj["forks_count"].as(Int)
		var created_at = obj["created_at"].as(String)
		var updated_at = obj["updated_at"].as(String)

		return new RepoEntry(full_name, default_branch, language, size, stars, forks, created_at, updated_at)
	end

	fun save_repos(list_name: String, repos: Array[RepoEntry]) do
		print "Saving {list_name}:"
		var output_dir = self.output_dir / list_name
		output_dir.mkdir

		# var readmes = new Array[String]
		var md_parser = new MdParser
		var collector = new MdMetricsCollector(md_parser)
		var metrics = new MdMetrics
		var csv = new CsvDocument
		csv.header.add_all(["Full Name", "Lang", "Size", "Stars", "Forks", "Created", "Updated"])
		csv.header.add_all metrics.to_csv.header
		for repo in repos do
			print " * {repo}"
			var readme_dir = output_dir / repo.user
			readme_dir.mkdir

			var readme = readme_dir / "{repo.name}.md"
			# readmes.add readme
			repo.dl_readme(readme)

			var doc_metrics = collector.analyze_file(readme)
			var line = repo.to_csv
			line.add_all doc_metrics.to_csv(metrics.node_kinds)

			csv.records.add line
		end
		csv.write_to_file(output_dir / "repos.csv")
	end
end

class RepoEntry
	var full_name: String
	var default_branch: String
	var language: nullable String
	var size: Int
	var stars: Int
	var forks: Int
	var created_at: String
	var updated_at: String

	var user: String is lazy do return full_name.split("/").first
	var name: String is lazy do return full_name.split("/").last

	var readme_url: String is lazy do
		return "https://raw.githubusercontent.com/{full_name}/{default_branch}/README.md"
	end

	fun dl_readme(output_file: String) do
		if output_file.file_exists then return
		sys.system "curl {readme_url} > {output_file} 2> /dev/null"
	end

	fun to_csv: Array[String] do
		var line = new Array[String]
		line.add full_name
		# line.add default_branch
		line.add language or else "null"
		line.add size.to_s
		line.add stars.to_s
		line.add forks.to_s
		line.add created_at
		line.add updated_at
		return line
	end

	redef fun to_s do return full_name
end

var loader = new RepoReadmes("readmes.out")
# var aws = loader.awesome_repos
var ranged = loader.range_stared
# var stared = loader.most_stared
# var forked = loader.most_forked
# var random = loader.random

# loader.save_repos("awesome", aws)
loader.save_repos("ranged", ranged)
# loader.save_repos("most_stared", stared)
# loader.save_repos("most_forked", forked)
# loader.save_repos("random1", random)

# Make list projects
# Load projects readme
# Analyze
# Save metrics

	# Most starred
	# Most forked
	# Random 1, 2, 3, 4, 5
	# Nit

	# repos
		# list
			# repos.csv
			# readmes
				# repo.md
