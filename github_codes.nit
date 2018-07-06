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

	fun analyze do
		var visitor = new MdTitleVisitor
		for repo in load_repos do
			var ast = md_parser.parse(repo.readme.as(not null))
			visitor.collect(repo, ast)
		end
		for k in visitor.langs.sort.reversed do
			print "{k}: {visitor.langs[k]}"
		end
		for k in visitor.counter.sort.reversed do
			print "{k}: {visitor.counter[k]}"
		end
	end
end

class MdTitleVisitor
	super MdVisitor

	var repo: nullable Repo = null
	var counter = new Counter[String]
	var langs = new Counter[String]

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
		if not node isa MdCodeBlock then
			node.visit_all(self)
			return
		end

		if node isa MdFencedCodeBlock then
			langs.inc node.info or else "NULL"
		end

		var text = node.literal
		if text == null then return
		var ltext = text.to_lower

		if node.info == "xml" or
			node.info == "html" or
			node.info == "yaml" or
			node.info == "toml" or
		   ltext.has("install") or
		   ltext.has("make") or
		   ltext.has("git") or
		   ltext.has("bower") or
		   ltext.has("sudo") or
		   ltext.has("gem") or
		   ltext.has("mkdir") or
		   ltext.has("cp") or
		   ltext.has("source") or
		   ltext.has("npm i") or
		   ltext.has("export") then
			   counter.inc "install"
		else if node.info == "console" or
				ltext.has("start") or
				ltext.has("node") or
				ltext.has("bash") or
				ltext.has("$") or
				ltext.has("./") or
				ltext.has("python") or
				ltext.has("run") then
			   counter.inc "run"
		else if node.info == "bash" or node.info == "sh" or node.info == "shell" or node.info == "bat" then
			counter.inc "cmd"
		else if node.info != null then
			counter.inc "example"
		else
			counter.inc "other"
		end
	end
end

var loader = new Loader
loader.analyze
