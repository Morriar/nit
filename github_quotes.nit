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
		# var docs = 0
		var total = 0
		# var is_name = 0
		# var has_name = 0
		for repo in load_repos do
			# docs += 1

			var ast = md_parser.parse(repo.readme.as(not null))
			var v = new MdTitleVisitor(repo.name)
			v.enter_visit(ast)
			# total += v.count
			# if v.is_name then is_name += 1
			# if v.has_name then has_name += 1

			# if v.titles.not_empty then
				# print repo
				total += v.notes.length
				# for t, l in v.titles do print "\t{t}\t{l}"
			# end
			# Extract title 1
				# count title 1 / doc
				# print title 1
				# kind
					# project name
					# intent
					# project name + intent
					# other
		end
		print total.to_f
		# print is_name
		# print has_name
	end
end

class MdTitleVisitor
	super MdVisitor

	var repo_name: String
	var count = 0
	var is_name = false
	var has_name = false
	var notes = new Array[MdNode]
	var licenses = new Array[MdNode]
	var cites = new Array[MdNode]

	redef fun visit(node) do
		if not node isa MdBlockQuote then
			node.visit_all(self)
			return
		end

		var text = node.raw_text
		if text.to_lower.has("note") then
			notes.add node
		else if text.to_lower.has("lic") or text.to_lower.has("(c") then
			licenses.add node
		else if text.to_lower.has("\"") or text.to_lower.has("@") or text.to_lower.has("--") or text.to_lower.has("“") or text.to_lower.has("«") then
			cites.add node
		else
			print "\t{text}\n"
		end
	end
end

var loader = new Loader
loader.analyse_titles

# is_name		91 + 0
# has_name		88 + 0
