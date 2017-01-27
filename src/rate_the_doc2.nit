import web
import counter
import csv

redef class NitwebConfig
	redef fun default_db_name do return "nitweb_exp"
end

redef class ToolContext

	# Web rendering phase.
	var webphase: Phase = new NitwebPhase(self, null)
end

redef class NitdocDecorator
	var nb_exs = 0
	var nb_exs_lines = 0
	var nb_headlines = 0
	var nb_links = 0
	var nb_pars = 0
	var nb_lists = 0
	var nb_code = 0

	redef fun add_orderedlist(v, b) do
		nb_lists += 1
		super
	end

	redef fun add_unorderedlist(v, b) do
		nb_lists += 1
		super
	end

	redef fun add_paragraph(v, b) do
		nb_pars += 1
		super
	end

	redef fun add_link(v, link, name, comment) do
		nb_links += 1
		super
	end

	redef fun add_headline(v, b) do
		nb_headlines += 1
		super
	end

	redef fun add_code(v, b) do
		nb_exs_lines += b.block.location.line_end - b.block.location.line_start
		nb_exs += 1
		super
	end

	redef fun add_span_code(v, b, f, t) do
		nb_code += 1
		super
	end
end

class MEntityRating
	var mentity: MEntity
	var user: String
	var doc: Int
	var exs: Int
	var fea: Int

	var ldoc = 0
	var nb_exs = 0
	var nb_exs_lines = 0
	var nb_headlines = 0
	var nb_links = 0
	var nb_pars = 0
	var nb_lists = 0
	var nb_codes = 0

	var nb_hrefs = 0
	var nb_see = 0
	var nb_require = 0
	var nb_ensure = 0

	init do
		process_doc
	end

	fun kind: String do return mentity.class_name

	fun mpackage: nullable MPackage do
		var mentity = self.mentity
		if mentity isa MPackage then return mentity
		if mentity isa MGroup then return mentity.mpackage
		if mentity isa MModule then return mentity.mpackage
		if mentity isa MClass then return mentity.intro_mmodule.mpackage
		if mentity isa MClassDef then return mentity.mmodule.mpackage
		if mentity isa MProperty then return mentity.intro_mclassdef.mmodule.mpackage
		if mentity isa MPropDef then return mentity.mclassdef.mmodule.mpackage
		return null
	end

	fun process_doc do
		var mdoc = mentity.mdoc_or_fallback
		if mdoc == null then return

		ldoc = mdoc.content.length
		var doc = mdoc.content.join("\n")

		var proc = new MarkdownProcessor
		proc.emitter.decorator = new NitdocDecorator
		proc.process(doc)
		var decorator = proc.emitter.decorator.as(NitdocDecorator)

		nb_exs = decorator.nb_exs
		nb_exs_lines = decorator.nb_exs_lines
		nb_headlines = decorator.nb_headlines
		nb_links = decorator.nb_links
		nb_pars = decorator.nb_pars
		nb_lists = decorator.nb_lists
		nb_codes = decorator.nb_code

		nb_hrefs += doc.search_all("https?://".to_re).length
		nb_see += doc.search_all("see".to_re).length
		nb_ensure += doc.search_all("ensure".to_re).length
		nb_require += doc.search_all("require".to_re).length
	end

	redef fun to_s do return "{mentity}\t\t\tdoc:{doc}\texs:{exs}\tfea:{fea}"
end

# Phase that builds the model and wait for http request to serve pages.
private class NitwebPhase
	super Phase

	# Build the nitweb config from `toolcontext` options.
	fun build_config(toolcontext: ToolContext, mainmodule: MModule): NitwebConfig do
		var config = new NitwebConfig(
			"app.ini",
			toolcontext.modelbuilder.model,
			mainmodule,
			toolcontext.modelbuilder)
		return config
	end

	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var config = build_config(toolcontext, mainmodule)

		# Collect all results
		var grades_repo = config.grades_results
		var results = grades_repo.find_all

		# Collect times
		var csv = new CsvDocument
		csv.header = ["user", "mentities", "created", "finished"]
		for result in results do
			if result.user.login == "Morriar" then continue
			if result.user.login == "tremblay-guy" then continue
			csv.add_record(
				result.user.login,
				result.entities.length,
				result.created_at,
				result.finished_at or else "NULL")
		end
		csv.write_to_file "times.csv"

		# Collect ratings by mentities
		var mentities_ratings = new Array[MEntityRating]
		for result in results do
			var login = result.user.login
			if login == "Morriar" then continue
			if login == "tremblay-guy" then continue
			for rating in result.entities do
				var full_name = rating.mentity_id
				var mentity = config.view.mentity_by_full_name(full_name)
				if mentity == null then
					print "ERROR: Can't find `{full_name}`"
					continue
				end
				mentities_ratings.add new MEntityRating(
					mentity,
					login,
					rating.stars[0].rating,
					rating.stars[1].rating,
					rating.stars[2].rating)
			end
		end

		# Gen CSV
		csv = new CsvDocument
		csv.header = ["user", "mentity", "package", "kind", "gdoc", "gexs", "gfea", "ldoc", "nb_exs", "nb_exs_lines", "nb_headlines", "nb_pars", "nb_lists", "nb_links", "nb_codes", "nb_hrefs", "nb_see", "nb_require", "nb_ensure"]
		for rating in mentities_ratings do
			csv.add_record(
				rating.user,
				rating.mentity.full_name,
				rating.mpackage or else "NULL",
				rating.kind,
				rating.doc,
				rating.exs,
				rating.fea,
				rating.ldoc,
				rating.nb_exs,
				rating.nb_exs_lines,
				rating.nb_headlines,
				rating.nb_pars,
				rating.nb_lists,
				rating.nb_links,
				rating.nb_codes,
				rating.nb_hrefs,
				rating.nb_see,
				rating.nb_require,
				rating.nb_ensure)
		end
		csv.write_to_file "mentities.csv"
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
tpl.add "Run a webserver based on nitcorn that serves pages about model."
toolcontext.tooldescription = tpl.write_to_string

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
