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
		var v = new MdTitleVisitor
		for repo in load_repos do
			var ast = md_parser.parse(repo.readme.as(not null))
			v.collect(repo, ast)
		end
		print "Levels"
		for k in v.levels.sort.reversed do
			print " * {k}: {v.levels[k]}"
		end

		print "Counter"
		for k in v.counter.sort.reversed do
			print " * {k}: {v.counter[k]}"
		end

		print "TOC:"

		print " # Title:"
		# for k in v.title_levels.sort.reversed do
			# print "   * {k}: {v.title_levels[k]}"
		# end
		# for k in v.title_index.sort.reversed do
		#	print "   * {k}: {v.title_index[k]}"
		# end

		print " ## Overview:"
		# for k in v.overview_levels.sort.reversed do
			# print "   * {k}: {v.overview_levels[k]}"
		# end
		# for k in v.overview_index.sort.reversed do
			# print "   * {k}: {v.overview_index[k]}"
		# end

		print " ## TOC:"
		# for k in v.toc_levels.sort.reversed do
			# print "   * {k}: {v.toc_levels[k]}"
		# end
		# for k in v.toc_index.sort.reversed do
			# print "   * {k}: {v.toc_index[k]}"
		# end

		print " ## Start:"
		# for k in v.start_levels.sort.reversed do
			# print "   * {k}: {v.start_levels[k]}"
		# end
		# for k in v.start_index.sort.reversed do
			# print "   * {k}: {v.start_index[k]}"
		# end

		print " ## Install:"
		# for k in v.install_levels.sort.reversed do
			# print "   * {k}: {v.install_levels[k]}"
		# end
		# for k in v.install_index.sort.reversed do
			# print "   * {k}: {v.install_index[k]}"
		# end

		print " ## Usage:"
		# for k in v.usage_levels.sort.reversed do
			# print "   * {k}: {v.usage_levels[k]}"
		# end
		# for k in v.usage_index.sort.reversed do
			# print "   * {k}: {v.usage_index[k]}"
		# end

		print " ## Options:"
		# for k in v.option_levels.sort.reversed do
			# print "   * {k}: {v.option_levels[k]}"
		# end
		# for k in v.option_index.sort.reversed do
			# print "   * {k}: {v.option_index[k]}"
		# end

		print " ## Doc:"
		# for k in v.doc_levels.sort.reversed do
			# print "   * {k}: {v.doc_levels[k]}"
		# end
		# for k in v.doc_index.sort.reversed do
			# print "   * {k}: {v.doc_index[k]}"
		# end

		print " ## Code:"
		# for k in v.code_levels.sort.reversed do
			# print "   * {k}: {v.code_levels[k]}"
		# end
		# for k in v.code_index.sort.reversed do
			# print "   * {k}: {v.code_index[k]}"
		# end

		print " ## Features"
		# for k in v.features_levels.sort.reversed do
			# print "   * {k}: {v.features_levels[k]}"
		# end
		# for k in v.features_index.sort.reversed do
			# print "   * {k}: {v.features_index[k]}"
		# end

		print " ## Examples"
		# for k in v.examples_levels.sort.reversed do
			# print "   * {k}: {v.examples_levels[k]}"
		# end
		# for k in v.examples_index.sort.reversed do
			# print "   * {k}: {v.examples_index[k]}"
		# end

		print " ## Issues"
		# for k in v.issues_levels.sort.reversed do
			# print "   * {k}: {v.issues_levels[k]}"
		# end
		# for k in v.issues_index.sort.reversed do
			# print "   * {k}: {v.issues_index[k]}"
		# end

		print " ## Testing"
		# for k in v.test_levels.sort.reversed do
			# print "   * {k}: {v.test_levels[k]}"
		# end
		# for k in v.test_index.sort.reversed do
		#	print "   * {k}: {v.test_index[k]}"
		# end

		print " ## Contribute"
		# for k in v.contrib_levels.sort.reversed do
			# print "   * {k}: {v.contrib_levels[k]}"
		# end
		# for k in v.contrib_index.sort.reversed do
			# print "   * {k}: {v.contrib_index[k]}"
		# end

		print " ## FAQ"
		# for k in v.faq_levels.sort.reversed do
			# print "   * {k}: {v.faq_levels[k]}"
		# end
		# for k in v.faq_index.sort.reversed do
			# print "   * {k}: {v.faq_index[k]}"
		# end

		print " ## Authors"
		# for k in v.author_levels.sort.reversed do
			# print "   * {k}: {v.author_levels[k]}"
		# end
		# for k in v.author_index.sort.reversed do
			# print "   * {k}: {v.author_index[k]}"
		# end

		print " ## Versioning"
		# for k in v.version_levels.sort.reversed do
			# print "   * {k}: {v.version_levels[k]}"
		# end
		# for k in v.version_index.sort.reversed do
			# print "   * {k}: {v.version_index[k]}"
		# end

		print " ## License"
		# for k in v.license_levels.sort.reversed do
			# print "   * {k}: {v.license_levels[k]}"
		# end
		# for k in v.license_index.sort.reversed do
			# print "   * {k}: {v.license_index[k]}"
		# end

		print " ## Other"
		# for k in v.other_levels.sort.reversed do
			# print "   * {k}: {v.other_levels[k]}"
		# end
		# for k in v.other_index.sort.reversed do
			# print "   * {k}: {v.other_index[k]}"
		# end
	end
end

class MdTitleVisitor
	super MdVisitor

	var repo: nullable Repo = null
	var index: Int is noinit
	var counter = new Counter[String]
	var levels = new Counter[Int]

	var title_levels = new Counter[Int]
	var title_index = new Counter[Int]

	var overview_levels = new Counter[Int]
	var overview_index = new Counter[Int]

	var toc_levels = new Counter[Int]
	var toc_index = new Counter[Int]

	var start_levels = new Counter[Int]
	var start_index = new Counter[Int]

	var install_levels = new Counter[Int]
	var install_index = new Counter[Int]

	var usage_levels = new Counter[Int]
	var usage_index = new Counter[Int]

	var option_levels = new Counter[Int]
	var option_index = new Counter[Int]

	var doc_levels = new Counter[Int]
	var doc_index = new Counter[Int]

	var code_levels = new Counter[Int]
	var code_index = new Counter[Int]

	var features_levels = new Counter[Int]
	var features_index = new Counter[Int]

	var examples_levels = new Counter[Int]
	var examples_index = new Counter[Int]

	var issues_levels = new Counter[Int]
	var issues_index = new Counter[Int]

	var test_levels = new Counter[Int]
	var test_index = new Counter[Int]

	var contrib_levels = new Counter[Int]
	var contrib_index = new Counter[Int]

	var faq_levels = new Counter[Int]
	var faq_index = new Counter[Int]

	var author_levels = new Counter[Int]
	var author_index = new Counter[Int]

	var version_levels = new Counter[Int]
	var version_index = new Counter[Int]

	var license_levels = new Counter[Int]
	var license_index = new Counter[Int]

	var other_levels = new Counter[Int]
	var other_index = new Counter[Int]

	fun collect(repo: Repo, ast: MdNode) do
		self.repo = repo
		self.index = 0
		enter_visit ast
		self.repo = null
		self.index = 0
	end

	var md_renderer = new MarkdownRenderer

	redef fun visit(node) do
		if node.parent isa MdDocument then
			self.index += 1
		end
		if not node isa MdHeading then
			node.visit_all(self)
			return
		end

		var repo = self.repo
		if repo == null then return

		var text = node.raw_text
		var ltext = text.to_lower
		var md = md_renderer.render(node)

		levels.inc node.level

		if ltext == repo.name.to_lower then
			counter.inc "title is name"
			title_levels.inc node.level
			title_index.inc self.index
		else if ltext.has(repo.name.to_lower) then
			counter.inc "title has name"
			title_levels.inc node.level
			title_index.inc self.index

		else if ltext.has("overview") or
				ltext.has("preview") or
				ltext.has("about") or
				ltext.has("intro") or
				ltext.has("orig") or
				ltext.has("goal") or
				ltext.has("desc") or
				ltext.has("purpose") or
				ltext.has("philo") or
				ltext.has("pres") then
			counter.inc "overview"
			overview_levels.inc node.level
			overview_index.inc self.index

		else if ltext.has("table") or
				ltext.has("contents") or
				ltext.has("summary") then
			counter.inc "toc"
			toc_levels.inc node.level
			toc_index.inc self.index

		else if ltext.has("start") then
			counter.inc "getting started"
			start_levels.inc node.level
			start_index.inc self.index

		else if ltext.has("install") or
			ltext.has("config") or
			ltext.has("compil") or
			ltext.has("setup") or
			ltext.has("set up") or
			ltext.has("build") or
			ltext.has("instruc") or
			ltext.has("step") or
			ltext.has("download") or
			ltext.has("get") or
			ltext.has("upgrad") or
			ltext.has("updat") or
			ltext.has("npm") or
			ltext.has("bower") then
			counter.inc "install"
			install_levels.inc node.level
			install_index.inc self.index

		else if ltext.has("usage") then
			counter.inc "usage"
			usage_levels.inc node.level
			usage_index.inc self.index

		else if ltext.has("doc") or
				ltext.has("resour") or
				ltext.has("link") or
				ltext.has("book") or
				ltext.has("ref") or
				ltext.has("blog") or
				ltext.has("guide") or
				ltext.has("learn") or
				ltext.has("man") or
				ltext.has("info") or
				ltext.has("see") then
			counter.inc "doc"
			doc_levels.inc node.level
			doc_index.inc self.index

		else if ltext.has("example") or
				ltext.has("demo") or
				ltext.has("screen") or
				ltext.has("showcase") or
				ltext.has("sample") or
				ltext.has("tuto") or
				ltext.has("try") then
			counter.inc "example"
			examples_levels.inc node.level
			examples_index.inc self.index

		else if ltext.has("feature") or
				ltext.has("what") or
				ltext.has("who") or
				ltext.has("why") then
			counter.inc "features"
			features_levels.inc node.level
			features_index.inc self.index

		else if ltext.has("bug") or
				ltext.has("workaround") or
				ltext.has("issue") or
				ltext.has("feed") or
				ltext.has("trouble") or
				ltext.has("support") or
				ltext.has("question") or
				ltext.has("help") or
				ltext.has("contact") then
			counter.inc "issues"
			issues_levels.inc node.level
			issues_index.inc self.index

		else if ltext.has("test") then
			counter.inc "tests"
			test_levels.inc node.level
			test_index.inc self.index

		else if ltext.has("contrib") or
				ltext.has("partic") or
				ltext.has("donat") then
			counter.inc "contribute"
			contrib_levels.inc node.level
			contrib_index.inc self.index

		else if ltext.has("faq") or
				ltext.has("how") or
				ltext.has("where") or
				ltext.has("error") or
				ltext.has("?") or
				ltext.has_prefix("do") then
			counter.inc "faq"
			faq_levels.inc node.level
			faq_index.inc self.index

		else if ltext.has("author") or
				ltext.has("credit") or
				ltext.has("creator") or
				ltext.has("thank") or
				ltext.has("team") or
				ltext.has("dev") or
				ltext.has("community") or
				ltext.has("ack") or
				ltext.has("maint") or
				ltext.has("contributor") or
				ltext.has("baker") or
				ltext.has("spons") then
			counter.inc "authors"
			author_levels.inc node.level
			author_index.inc self.index

		else if ltext.has("change") or
				ltext.has("history") or
				ltext.has("road") or
				ltext.has("repo") or
				ltext.has("version") then
			counter.inc "versioning"
			version_levels.inc node.level
			version_index.inc self.index

		else if ltext.has("licen") or
				ltext.has("copy") or
				ltext.has("legal") then
			counter.inc "license"
			license_levels.inc node.level
			license_index.inc self.index



		else if ltext.has("req") or
				ltext.has("dep") or
				ltext.has("compat") then
			# counter.inc "install"
			counter.inc "deps"
			install_levels.inc node.level


		else if ltext.has("option") or
			ltext.has("param") or
			ltext.has("mode") or
			ltext.has("setting") or
			ltext.has("select") then
			counter.inc "option"
			option_levels.inc node.level
			option_index.inc self.index

		else if ltext.has("todo") or ltext.has("to-do") then
			counter.inc "todo"
		else if ltext.has("note") or ltext.has("notice") then
			counter.inc "note"

		else if ltext.has("api") or
				ltext.has("[a-zA-Z0-9]+(\\.[a-zA-Z0-9]+)+".to_re) or
				text.has("[A-Z][a-z0-9]*[A-Z]".to_re) or
				ltext.has("\".*\"".to_re) or
				ltext.has("\\(.*\\)".to_re) or
				md.has("`.*`".to_re) then
			counter.inc "code"
			code_levels.inc node.level
			code_index.inc self.index
		# else if text.has("[(.\":]".to_re) then
		else
			# print md
			counter.inc "other"
			other_levels.inc node.level
			other_index.inc self.index
		end
	end
end

var loader = new Loader
loader.analyse_titles

# is_name		91 + 0
# has_name		88 + 0
