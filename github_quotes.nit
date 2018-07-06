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
		var v = new MdTitleVisitor
		for repo in load_repos do
			var ast = md_parser.parse(repo.readme.as(not null))
			v.enter_visit(ast)
		end
		for k in v.counter.sort.reversed do
			print " * {k}: {v.counter[k]}"
		end
	end
end

class MdTitleVisitor
	super MdVisitor

	var counter = new Counter[String]

	redef fun visit(node) do
		if not node isa MdBlockQuote then
			node.visit_all(self)
			return
		end

		var text = node.raw_text
		var ltext = text.to_lower

		if ltext.has("note") then
			counter.inc "notes"
		else if ltext.has("step") then
			counter.inc "process"
		else if ltext.has("can") or ltext.has("simple") then
			counter.inc "features"
		else if ltext.has("looking") or ltext.has("don't") or ltext.has("limited") or ltext.has("no further") or ltext.has("remember") or ltext.has("disclaimer") or ltext.has("deprecated") or ltext.has("construction") or ltext.has("important") or ltext.has("bug") then
			counter.inc "warning"
		else if ltext.has("lic") or ltext.has("(c") then
			counter.inc "license"
		else if ltext.has("install") or ltext.has("download") then
			counter.inc "install"
		else if ltext.has("version") or ltext.has("v?[0-9]+(.[a-zA-Z0-9])+".to_re) then
			counter.inc "version"
		else if text.has("\"") or text.has("@") or text.has("--") or text.has("“") or text.has("«") then
			counter.inc "cites"
		else
			counter.inc "features"
		end
	end
end

var loader = new Loader
loader.analyse_titles
