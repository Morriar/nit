import json
import json::static
import markdown2
import markdown2::markdown_md_rendering
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
		print "Markers:"
		for k in visitor.markers.sort.reversed do
			print " {k}: {visitor.markers[k]}"
		end
		print "\nOSizes:"
		for k in visitor.osizes.sort.reversed do
			print " * {k}: {visitor.osizes[k]}"
		end
		print "\nUSizes:"
		for k in visitor.usizes.sort.reversed do
			print " * {k}: {visitor.usizes[k]}"
		end
		print "\nkind"
		for k in visitor.counter.sort.reversed do
			print "{k}: {visitor.counter[k]}"
		end
	end
end

class MdTitleVisitor
	super MdVisitor

	var md = new MarkdownRenderer
	var repo: nullable Repo = null
	var counter = new Counter[String]
	var markers = new Counter[String]
	var usizes = new Counter[Int]
	var osizes = new Counter[Int]

	fun collect(repo: Repo, ast: MdNode) do
		self.repo = repo
		enter_visit(ast)
		self.repo = null
	end

	var domains = ["com", "io"]

	var exts = ["md", "crx", "json", "html", "js", "yaml", "exe", "framework", "class", "c", "h", "m", "py", "css", "php", "pem", "swift", "sh", "cofee", "conf", "log", "gradle", "xml", "wpf", "mk", "hpp", "cpp", "dll", "txt", "coffee", "yml", "ini", "cmd", "toml", "pkg", "java", ".git", "scad", "rb", "jpg", "db", "sqlite", "zip", "go", "JAR", "rst", "gif", "aar", "tar", "gz", "bashrc", "bash_profile", "map", "deb", "dump", "DS_Store", ".gitignore", "JAR", "hgignore", "svg", "svgz", "ts", "tsx", "vscode", "vue", "xp", "xpi", "zsh", "zshrc", "netrc", "png"]

	var words: Array[String] is lazy do
		return "/usr/share/dict/words".to_path.read_lines
	end

	redef fun visit(node) do
		if not node isa MdListBlock then
			node.visit_all(self)
			return
		end

		if node isa MdUnorderedList then
			markers.inc node.bullet_marker.to_s
			usizes.inc node.children.length
		end

		if node isa MdOrderedList then
			osizes.inc node.children.length
		end

		var text = node.raw_text
		var ltext = text.to_lower
		var md = md.render(node)


		if text.has("@") then
			counter.inc "author"
		else if ltext.has("install") or
			ltext.has("clone") or
			ltext.has("env") or
			ltext.has("make") then
			counter.inc "install"
		else if ltext.has("run") or
			ltext.has("click") then
			counter.inc "run"
		else if ltext.has("://") then
			counter.inc "link"
		else if ltext.has("#") or md.has("\\[.*\\]".to_re) then
			counter.inc "toc"
		else if ltext.has("allow") or
			ltext.has("feat") or
			ltext.has("support") then
			counter.inc "features"
		else if ltext.has("fix") or
			ltext.has("change") or
			ltext.has("better") or
			ltext.has("initial") or
			ltext.has("improve") or
			ltext.has("update") or
			ltext.has("add") then
			counter.inc "changes"
		else if ltext.has("v?[0-9]+(\\.[a-z0-9])+".to_re) or
				text.has("-dev") or
				text.has("[0-9]\\+".to_re) then
			counter.inc "deps"
	else if md.has("^[*+-] [a-zA-Z0-9]+\n".to_re) then
			counter.inc "id"
		else if node isa MdOrderedList then
			counter.inc "procedure"
		else if md.has("`.*`".to_re) or md.has("\\*\\*.*\\*\\*".to_re) then
			counter.inc "code list"
		else
			print md
			print ""
			counter.inc "features"
		end
	end
end

var loader = new Loader
loader.analyse_titles
