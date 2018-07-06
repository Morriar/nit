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
				total += v.titles.length
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
	var titles = new HashMap[MdHeading, Int]

	redef fun visit(node) do
		if not node isa MdHeading then
			node.visit_all(self)
			return
		end
		# if not node.level == 1 then return
		# count += 1

		var text = node.raw_text
		if text.to_lower == repo_name.to_lower then
			# is_name = true
			# return
		else if text.to_lower.has(repo_name.to_lower) then
			# has_name = true
			# return
		# end
		else if text.to_lower.has("start") then
		else if text.to_lower.has("overview") or text.to_lower.has("about") or text.to_lower.has("intro") or text.to_lower.has("goal") or text.to_lower.has("desc") or text.to_lower.has("purpose") or text.to_lower.has("how") or text.to_lower.has("philo") or text.to_lower.has("pres") then
		else if text.to_lower.has("feature") then
		else if text.to_lower.has("screen") then
		else if text.to_lower.has("req") or text.to_lower.has("dep") or text.to_lower.has("compat") then
		else if text.to_lower.has("install") or text.to_lower.has("build") or text.to_lower.has("setup") or text.to_lower.has("config") or text.to_lower.has("step") or text.to_lower.has("download") or text.to_lower.has("get") or text.to_lower.has("npm")  or text.to_lower.has("bower") then
		else if text.to_lower.has("usage")or text.to_lower.has("option")or text.to_lower.has("param") then
		else if text.to_lower.has("todo") or text.to_lower.has("to-do") then
		else if text.to_lower.has("doc") or text.to_lower.has("resou") or text.to_lower.has("link")  or text.to_lower.has("book") or text.to_lower.has("ref") or text.to_lower.has("blog") or text.to_lower.has("guide") or text.to_lower.has("learn") or text.to_lower.has("man") or text.to_lower.has("infos") or text.to_lower.has("see") then
		else if text.to_lower.has("demo") or text.to_lower.has("showcase") or text.to_lower.has("sample") or text.to_lower.has("try") then
		else if text.to_lower.has("note") or text.to_lower.has("notice") then
		else if text.to_lower.has("test") then
		else if text.to_lower.has("table") or text.to_lower.has("summ") then
		else if text.to_lower.has("exa") then
		else if text.to_lower.has("changelog")  or text.to_lower.has("history") or text.to_lower.has("road") or text.to_lower.has("version") then
		else if text.to_lower.has("contrib") or text.to_lower.has("parti") or text.to_lower.has("donat") then
		else if text.to_lower.has("author") or text.to_lower.has("credit") or text.to_lower.has("thank") or text.to_lower.has("team") or text.to_lower.has("dev") or text.to_lower.has("community")  or text.to_lower.has("ack") or text.to_lower.has("maint") or text.to_lower.has("baker")  or text.to_lower.has("spons") then
		else if text.to_lower.has("faq") or text.has("?") or text.to_lower.has("help") or text.to_lower.has("disc") or text.to_lower.has("context") or text.to_lower.has("bug") or text.to_lower.has("issue") or text.to_lower.has("feed")  or text.to_lower.has("trouble") or text.to_lower.has("support")  or text.to_lower.has("contact") then
		else if text.to_lower.has("licen") or text.to_lower.has("copy") or text.to_lower.has("legal") then
		else if text.has("[(.\":]".to_re) then
		else
			titles[node] = node.level
			print "\t{text}"
		end
		# print "\t{text}"
	end
end

var loader = new Loader
loader.analyse_titles

# is_name		91 + 0
# has_name		88 + 0
