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
		var list = "github/selected"
		for repo in list.to_path.read_lines do
			res.add new Repo(repo)
		end
		return res
	end

	var md_parser = new MdParser

	fun analyse_titles do
		var visitor = new MdTitleVisitor
		for repo in load_repos do
			var ast = md_parser.parse(repo.readme.as(not null))
			visitor.collect(repo, ast)
		end
		for k, v in visitor.counter do
			print "{k}: {v}"
		end
	end
end

class MdTitleVisitor
	super MdVisitor

	var repo: nullable Repo = null
	var counter = new Counter[String]

	fun collect(repo: Repo, ast: MdNode) do
		self.repo = repo
		enter_visit(ast)
		self.repo = null
	end

	redef fun visit(node) do
		if not node isa MdLink then
			node.visit_all(self)
			return
		end

		var dest = node.destination.to_lower
		var homepage = repo.as(not null).json.as(not null)["homepage"]

		if dest.has_prefix("#") or dest.has("readme.md#") then
			counter.inc "anchor"
		else if dest.has("api") then
			counter.inc "api"
		else if dest.has("wiki") or
				dest.has("doc") or
				dest.has("guide") or
				dest.has("manual") or
				dest.has("help") or
				dest.has("github.io") or
				dest.has("blog") then
			counter.inc "doc"
		else if dest.has("ci") or
				dest.has("badge") then
			counter.inc "badge"
		else if dest.has("issue") or
				dest.has("answer") or
				dest.has("bug") or
				dest.has("support") or
				dest.has("stack") then
			counter.inc "issues"
		else if dest.has("license") then
			counter.inc "license"
		else if dest.has("twitter") or
				dest.has("facebook") or
				dest.has("forum") or
				dest.has("chat") or
				dest.has("group") then
			counter.inc "contact"
		else if dest.has("youtube") or
				dest.has("example") or
				dest.has("jsfiddle") or
				dest.has("code") or
				dest.has("gist") or
				dest.has("tuto") then
			counter.inc "demo"
		else if dest.has("bower") or
				dest.has("brew") or
				dest.has("nugget") or
				dest.has("project") or
				dest.has("download") or
				dest.has("npm") or
				dest.has("cdn") then
			counter.inc "install"
		else if dest.has("https?://github.com/[a-z0-9_-]*$".to_re) then
			counter.inc "user"
		else if dest.has("https?://github.com/[a-z0-9_-]*/[a-z0-9_-]*$".to_re) then
			counter.inc "repo"
		else if dest.has("https?://github.com/".to_re) then
			counter.inc "code"
		else if not dest.has("://") then
			counter.inc "broken"
		else if homepage isa String and dest == homepage.to_lower then
			counter.inc "homepage"
		else if (homepage isa String and dest.has(homepage.to_lower)) or dest.has(repo.as(not null).name.to_lower) then
			counter.inc "internal"
		else
			print node.destination
			counter.inc "other"
		end
	end
end

var loader = new Loader
loader.analyse_titles
