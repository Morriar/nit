# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Documentation generator for the nit language.
# Generate API documentation in HTML format from nit source code.
module nitdoc

import model_utils
import modelize_property
import markdown
import doc_layout

# The NitdocContext contains all the knowledge used for doc generation
class NitdocContext

	private var toolcontext = new ToolContext
	private var model: Model
	private var mbuilder: ModelBuilder
	private var mainmodule: MModule
	private var class_hierarchy: POSet[MClass]
	private var arguments: Array[String]
	private var output_dir: nullable String
	private var dot_dir: nullable String
	private var share_dir: nullable String
	private var source: nullable String
	private var min_visibility: MVisibility

	private var github_upstream: nullable String
	private var github_basesha1: nullable String
	private var github_gitdir: nullable String

	private var opt_dir = new OptionString("Directory where doc is generated", "-d", "--dir")
	private var opt_source = new OptionString("What link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("Directory containing the nitdoc files", "--sharedir")
	private var opt_shareurl = new OptionString("Do not copy shared files, link JS and CSS file to share url instead", "--shareurl")
	private var opt_nodot = new OptionBool("Do not generate graphes with graphviz", "--no-dot")
	private var opt_private: OptionBool = new OptionBool("Generate the private API", "--private")

	private var opt_custom_title: OptionString = new OptionString("Title displayed in the top of the Overview page and as suffix of all page names", "--custom-title")
	private var opt_custom_menu_items: OptionString = new OptionString("Items displayed in menu before the 'Overview' item (Each item must be enclosed in 'li' tags)", "--custom-menu-items")
	private var opt_custom_overview_text: OptionString = new OptionString("Text displayed as introduction of Overview page before the modules list", "--custom-overview-text")
	private var opt_custom_footer_text: OptionString = new OptionString("Text displayed as footer of all pages", "--custom-footer-text")

	private var opt_github_upstream: OptionString = new OptionString("The branch where edited commits will be pulled into (ex: user:repo:branch)", "--github-upstream")
	private var opt_github_base_sha1: OptionString = new OptionString("The sha1 of the base commit used to create pull request", "--github-base-sha1")
	private var opt_github_gitdir: OptionString = new OptionString("The git working directory used to resolve path name (ex: /home/me/myproject/)", "--github-gitdir")

	private var opt_piwik_tracker: OptionString = new OptionString("The URL of the Piwik tracker (ex: nitlanguage.org/piwik/)", "--piwik-tracker")
	private var opt_piwik_site_id: OptionString = new OptionString("The site ID in Piwik tracker", "--piwik-site-id")

	init do
		toolcontext.option_context.add_option(opt_dir)
		toolcontext.option_context.add_option(opt_source)
		toolcontext.option_context.add_option(opt_sharedir, opt_shareurl)
		toolcontext.option_context.add_option(opt_nodot)
		toolcontext.option_context.add_option(opt_private)
		toolcontext.option_context.add_option(opt_custom_title)
		toolcontext.option_context.add_option(opt_custom_footer_text)
		toolcontext.option_context.add_option(opt_custom_overview_text)
		toolcontext.option_context.add_option(opt_custom_menu_items)
		toolcontext.option_context.add_option(opt_github_upstream)
		toolcontext.option_context.add_option(opt_github_base_sha1)
		toolcontext.option_context.add_option(opt_github_gitdir)
		toolcontext.option_context.add_option(opt_piwik_tracker)
		toolcontext.option_context.add_option(opt_piwik_site_id)
		toolcontext.process_options
		self.arguments = toolcontext.option_context.rest

		if arguments.length < 1 then
			print "usage: nitdoc [options] file..."
			toolcontext.option_context.usage
			exit(0)
		end
		self.process_options

		model = new Model
		mbuilder = new ModelBuilder(model, toolcontext)
		# Here we load and process all modules passed on the command line
		var mmodules = mbuilder.parse(arguments)
		if mmodules.is_empty then return
		mbuilder.run_phases

		if mmodules.length == 1 then
			mainmodule = mmodules.first
		else
			# We need a main module, so we build it by importing all modules
			mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
			mainmodule.set_imported_mmodules(mmodules)
		end
		self.class_hierarchy = mainmodule.flatten_mclass_hierarchy
	end

	private fun process_options do
		if opt_dir.value != null then
			output_dir = opt_dir.value
		else
			output_dir = "doc"
		end
		if opt_sharedir.value != null then
			share_dir = opt_sharedir.value
		else
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
			else
				dir = "{dir}/share/nitdoc"
			end
			share_dir = dir
			if share_dir == null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
		end
		if opt_private.value then
			min_visibility = none_visibility
		else
			min_visibility = protected_visibility
		end
		var gh_upstream = opt_github_upstream.value
		var gh_base_sha = opt_github_base_sha1.value
		var gh_gitdir = opt_github_gitdir.value
		if not gh_upstream == null or not gh_base_sha == null or not gh_gitdir == null then
			if gh_upstream == null or gh_base_sha == null or gh_gitdir == null then
				print "Error: Options {opt_github_upstream.names.first}, {opt_github_base_sha1.names.first} and {opt_github_gitdir.names.first} are required to enable the GitHub plugin"
				abort
			else
				self.github_upstream = gh_upstream
				self.github_basesha1 = gh_base_sha
				self.github_gitdir = gh_gitdir
			end
		end
		source = opt_source.value
	end

	fun generate_nitdoc do
		# Create destination dir if it's necessary
		if not output_dir.file_exists then output_dir.mkdir
		if opt_shareurl.value == null then
			sys.system("cp -r {share_dir.to_s}/* {output_dir.to_s}/")
		else
			sys.system("cp -r {share_dir.to_s}/resources/ {output_dir.to_s}/resources/")
		end
		self.dot_dir = null
		if not opt_nodot.value then self.dot_dir = output_dir.to_s
		overview
		search
		modules
		classes
		quicksearch_list
	end

	private fun overview do
		var overviewpage = new NitdocOverview(self)
		overviewpage.save("{output_dir.to_s}/index.html")
	end

	private fun search do
		var searchpage = new NitdocSearch(self)
		searchpage.save("{output_dir.to_s}/search.html")
	end

	private fun modules do
		for mmodule in model.mmodules do
			if mmodule.name == "<main>" then continue
			var modulepage = new NitdocModule(mmodule, self)
			modulepage.save("{output_dir.to_s}/{mmodule.get_url}")
		end
	end

	private fun classes do
		for mclass in mbuilder.model.mclasses do
			var classpage = new NitdocClass(mclass, self)
			classpage.save("{output_dir.to_s}/{mclass.get_url}")
		end
	end

	private fun quicksearch_list do
		var file = new OFStream.open("{output_dir.to_s}/quicksearch-list.js")
		file.write("var nitdocQuickSearchRawList = \{ ")
		for mmodule in model.mmodules do
			if mmodule.name == "<main>" then continue
			file.write("\"{mmodule.name}\": [")
			file.write("\{txt: \"{mmodule.full_name}\", url:\"{mmodule.get_url}\" \},")
			file.write("],")
		end
		for mclass in model.mclasses do
			if mclass.visibility < min_visibility then continue
			file.write("\"{mclass.name}\": [")
			file.write("\{txt: \"{mclass.full_name}\", url:\"{mclass.get_url}\" \},")
			file.write("],")
		end
		var name2mprops = new HashMap[String, Set[MPropDef]]
		for mproperty in model.mproperties do
			if mproperty.visibility < min_visibility then continue
			if mproperty isa MAttribute then continue
			if not name2mprops.has_key(mproperty.name) then name2mprops[mproperty.name] = new HashSet[MPropDef]
			name2mprops[mproperty.name].add_all(mproperty.mpropdefs)
		end
		for mproperty, mpropdefs in name2mprops do
			file.write("\"{mproperty}\": [")
			for mpropdef in mpropdefs do
				file.write("\{txt: \"{mpropdef.full_name}\", url:\"{mpropdef.url}\" \},")
			end
			file.write("],")
		end
		file.write(" \};")
		file.close
	end

end

# Nitdoc base page
abstract class NitdocPage

	var doc_header = new DocHeader
	var doc_footer = new DocFooter
	var ctx: NitdocContext
	var shareurl = "."

	init(ctx: NitdocContext) do
		self.ctx = ctx
		if ctx.opt_shareurl.value != null then shareurl = ctx.opt_shareurl.value.as(not null)
		if ctx.opt_custom_menu_items.value != null then
			doc_header.menu.items.add(ctx.opt_custom_menu_items.value.to_s)
		end
	end

	protected fun head do
		append("<meta charset='utf-8'/>")
		append("<link rel='stylesheet' href='{shareurl}/css/main.css' type='text/css'/>")
		append("<link rel='stylesheet' href='{shareurl}/css/Nitdoc.UI.css' type='text/css'/>")
		append("<link rel='stylesheet' href='{shareurl}/css/Nitdoc.QuickSearch.css' type='text/css'/>")
		append("<link rel='stylesheet' href='{shareurl}/css/Nitdoc.GitHub.css' type='text/css'/>")
		append("<link rel='stylesheet' href='{shareurl}/css/Nitdoc.ModalBox.css' type='text/css'/>")
		var title = ""
		if ctx.opt_custom_title.value != null then
			title = " | {ctx.opt_custom_title.value.to_s}"
		end
		append("<title>{self.title}{title}</title>")
	end

	protected fun title: String is abstract

	protected fun content is abstract

	# Generate a clickable graphviz image using a dot content
	protected fun generate_dot(dot: String, name: String, alt: String): String do
		var buffer = new Buffer
		var output_dir = ctx.dot_dir
		if output_dir == null then return ""
		var file = new OFStream.open("{output_dir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {output_dir}/{name}.png && test -f {output_dir}/{name}.s.dot && diff {output_dir}/{name}.dot {output_dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {output_dir}/{name}.dot {output_dir}/{name}.s.dot && dot -Tpng -o{output_dir}/{name}.png -Tcmapx -o{output_dir}/{name}.map {output_dir}/{name}.s.dot ; \}")
		buffer.append("<article class='graph'>")
		buffer.append("<img src='{name}.png' usemap='#{name}' style='margin:auto' alt='{alt}'/>")
		buffer.append("</article>")
		var fmap = new IFStream.open("{output_dir}/{name}.map")
		buffer.append(fmap.read_all)
		fmap.close
		return buffer.to_s
	end

	# Add a (source) link for a given location
	protected fun show_source(l: Location): String do
		var source = ctx.source
		if source == null then
			return "({l.file.filename.simplify_path})"
		else
			# THIS IS JUST UGLY ! (but there is no replace yet)
			var x = source.split_with("%f")
			source = x.join(l.file.filename.simplify_path)
			x = source.split_with("%l")
			source = x.join(l.line_start.to_s)
			x = source.split_with("%L")
			source = x.join(l.line_end.to_s)
			source = source.simplify_path
			return " (<a target='_blank' title='Show source' href=\"{source.to_s}\">source</a>)"
		end
	end

	# Render the page as a html string
	protected fun render do
		append("<!DOCTYPE html>")
		append("<head>")
		head
		append("</head>")
		append("<body")
		append(" data-bootstrap-share='{shareurl}'")
		if ctx.opt_github_upstream.value != null and ctx.opt_github_base_sha1.value != null then
			append(" data-github-upstream='{ctx.opt_github_upstream.value.as(not null)}'")
			append(" data-github-base-sha1='{ctx.opt_github_base_sha1.value.as(not null)}'")
		end
		append(">")
		append(doc_header.html)
		var footed = ""
		if ctx.opt_custom_footer_text.value != null then footed = "footed"
		append("<div class='page {footed}'>")
		content
		append("</div>")
		if ctx.opt_custom_footer_text.value != null then
			doc_footer.text = ctx.opt_custom_footer_text.value.to_s
		end
		append(doc_footer.html)
		append("<script data-main=\"{shareurl}/js/nitdoc\" src=\"{shareurl}/js/lib/require.js\"></script>")

		# piwik tracking
		var tracker_url = ctx.opt_piwik_tracker.value
		var site_id = ctx.opt_piwik_site_id.value
		if tracker_url != null and site_id != null then
			append("<!-- Piwik -->")
			append("<script type=\"text/javascript\">")
			append("  var _paq = _paq || [];")
			append("  _paq.push([\"trackPageView\"]);")
			append("  _paq.push([\"enableLinkTracking\"]);")
			append("  (function() \{")
			append("    var u=((\"https:\" == document.location.protocol) ? \"https\" : \"http\") + \"://{tracker_url}\";")
			append("    _paq.push([\"setTrackerUrl\", u+\"piwik.php\"]);")
			append("    _paq.push([\"setSiteId\", \"{site_id}\"]);")
			append("    var d=document, g=d.createElement(\"script\"), s=d.getElementsByTagName(\"script\")[0]; g.type=\"text/javascript\";")
			append("    g.defer=true; g.async=true; g.src=u+\"piwik.js\"; s.parentNode.insertBefore(g,s);")
			append("  \})();")
			append(" </script>")
			append("<!-- End Piwik Code -->")
		end
		append("</body>")
	end

	# Append a string to the page
	fun append(s: String) do out.write(s)

	# Save html page in the specified file
	fun save(file: String) do
		self.out = new OFStream.open(file)
		render
		self.out.close
	end
	private var out: nullable OFStream
end

# The overview page
class NitdocOverview
	super NitdocPage

	private var mbuilder: ModelBuilder
	private var mmodules = new Array[MModule]

	init(ctx: NitdocContext) do
		super(ctx)
		self.mbuilder = ctx.mbuilder
		# init menu
		doc_header.menu.items.add("<li class='current'>Overview</li>")
		doc_header.menu.items.add("<li><a href='search.html'>Search</a></li>")
		# get modules
		var mmodules = new HashSet[MModule]
		for mmodule in mbuilder.model.mmodule_importation_hierarchy do
			if mmodule.name == "<main>" then continue
			var owner = mmodule.public_owner
			if owner != null then
				mmodules.add(owner)
			else
				mmodules.add(mmodule)
			end
		end
		# sort modules
		var sorter = new MModuleNameSorter
		self.mmodules.add_all(mmodules)
		sorter.sort(self.mmodules)
	end

	redef fun title do return "Overview"

	redef fun content do
		# sidebar
		modules_column
		# main content
		modules_doc
	end

	private fun modules_column do
		var sidebar = new DocSidebar
		var sidebox = new DocSidebox("Modules")
		sidebar.boxes.add(sidebox)
		sidebox.css_classes.add("properties filterable")
		var sideboxgroup = new DocSideboxGroup(null)
		sidebox.groups.add(sideboxgroup)
		for sidemmodule in mmodules do
			if mbuilder.mmodule2nmodule.has_key(sidemmodule) then
				var element = new DocListElement("<a title='{sidemmodule.get_html_short_comment(self)}' href='\#{sidemmodule.get_anchor}'>{sidemmodule.full_name}</a>")
				sideboxgroup.elements.add(element)
				element.css_classes.add(sidemmodule.full_name)
			end
		end
		append(sidebar.html)
	end

	private fun modules_doc do
		var title = "Overview"
		if ctx.opt_custom_title.value != null then
			title = ctx.opt_custom_title.value.to_s
		end
		var text = ""
		if ctx.opt_custom_overview_text.value != null then
			text = ctx.opt_custom_overview_text.value.to_s
		end
		var content = new DocContentOverview(title, process_generate_dot, text)
		# modules list
		var section = new DocContentOverviewSection("Modules")
		content.sections.add(section)
		for mmodule in mmodules do
			if mbuilder.mmodule2nmodule.has_key(mmodule) then
				section.articles.add(mmodule.get_html_full_desc(self))
			end
		end
		append(content.html)
	end

	private fun process_generate_dot: String do
		# build poset with public owners
		var poset = new POSet[MModule]
		for mmodule in mmodules do
			poset.add_node(mmodule)
			for omodule in mmodules do
				if mmodule == omodule then continue
				if mmodule.in_importation < omodule then
					poset.add_node(omodule)
					poset.add_edge(mmodule, omodule)
				end
			end
		end
		# build graph
		var op = new Buffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			op.append("\"{mmodule.name}\"[URL=\"{mmodule.get_url}\"];\n")
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name}\"->\"{omodule.name}\";\n")
			end
		end
		op.append("\}\n")
		return generate_dot(op.to_s, "dep", "Modules hierarchy")
	end
end

# The search page
class NitdocSearch
	super NitdocPage

	init(ctx: NitdocContext) do
		super(ctx)
		# init menu
		doc_header.menu.items.add("<li><a href='index.html'>Overview</a></li>")
		doc_header.menu.items.add("<li class='current'>Search</li>")
	end

	redef fun title do return "Search"

	redef fun content do
		append("<div class='content fullpage'>")
		append("<h1>{title}</h1>")
		module_column
		classes_column
		properties_column
		append("</div>")
	end

	# Add to content modules column
	private fun module_column do
		var sorted = ctx.mbuilder.model.mmodule_importation_hierarchy.to_a
		var sorter = new MModuleNameSorter
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Modules</h2>")
		append("<ul>")
		for mmodule in sorted do
			if mmodule.name == "<main>" then continue
			append("<li>")
			append(mmodule.get_html_link(self))
			append("</li>")
		end
		append("</ul>")
		append("</article>")
	end

	# Add to content classes modules
	private fun classes_column do
		var sorted = ctx.mbuilder.model.mclasses
		var sorter = new MClassNameSorter
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Classes</h2>")
		append("<ul>")
		for mclass in sorted do
			if mclass.visibility < ctx.min_visibility then continue
			append("<li>")
			append(mclass.get_html_link(self))
			append("</li>")
		end
		append("</ul>")
		append("</article>")
	end

	# Insert the properties column of fullindex page
	private fun properties_column do
		var sorted = ctx.mbuilder.model.mproperties
		var sorter = new MPropertyNameSorter
		sorter.sort(sorted)
		append("<article class='modules filterable'>")
		append("<h2>Properties</h2>")
		append("<ul>")
		for mproperty in sorted do
			if mproperty.visibility < ctx.min_visibility then continue
			if mproperty isa MAttribute then continue
			append("<li>")
			append(mproperty.intro.gget_html_link(self))
			append(" (")
			append(mproperty.intro.mclassdef.mclass.get_html_link(self))
			append(")</li>")
		end
		append("</ul>")
		append("</article>")
	end
end

# A module page
class NitdocModule
	super NitdocPage

	private var mmodule: MModule
	private var mbuilder: ModelBuilder
	private var local_mclasses = new HashSet[MClass]
	private var intro_mclasses = new HashSet[MClass]
	private var redef_mclasses = new HashSet[MClass]

	init(mmodule: MModule, ctx: NitdocContext) do
		super(ctx)
		self.mmodule = mmodule
		self.mbuilder = ctx.mbuilder
		# init menu
		doc_header.menu.items.add("<li><a href='index.html'>Overview</a></li>")
		doc_header.menu.items.add("<li class='current'>{mmodule.get_html_name}</li>")
		doc_header.menu.items.add("<li><a href='search.html'>Search</a></li>")
		# get local mclasses
		for m in mmodule.in_nesting.greaters do
			for mclassdef in m.mclassdefs do
				if mclassdef.mclass.visibility < ctx.min_visibility then continue
				if mclassdef.is_intro then
					intro_mclasses.add(mclassdef.mclass)
				else
					if mclassdef.mclass.mpropdefs_in_module(self).is_empty then continue
					redef_mclasses.add(mclassdef.mclass)
				end
				local_mclasses.add(mclassdef.mclass)
			end
		end
	end

	redef fun title do
		if mbuilder.mmodule2nmodule.has_key(mmodule) and not mbuilder.mmodule2nmodule[mmodule].short_comment.is_empty then
			var nmodule = mbuilder.mmodule2nmodule[mmodule]
			return "{mmodule.get_html_name} module | {nmodule.short_comment}"
		else
			return "{mmodule.get_html_name} module"
		end
	end

	redef fun content do
		# sidebar (classes)
		var sidebar = new DocSidebar
		var sidebox_classes = new DocSidebox("Classes")
		sidebar.boxes.add(sidebox_classes)
		classes_column (sidebox_classes)
		# sidebar (modules)
		var sidebox_modules = new DocSidebox("Module Hierarchy")
		sidebar.boxes.add(sidebox_modules)
		importation_column(sidebox_modules)
		append(sidebar.html)
		# main content
		var content = new DocContentModule(mmodule.get_html_name,mmodule.get_html_signature(self),mmodule.get_html_comment(self), process_generate_dot)
		module_doc(content)
		append(content.html)
	end

	private fun classes_column (sidebox: DocSidebox) do
		var sorter = new MClassNameSorter
		var sorted = new Array[MClass]
		sorted.add_all(intro_mclasses)
		sorted.add_all(redef_mclasses)
		sorter.sort(sorted)
		sidebox.css_classes.add("properties filterable")
		var sideboxgroup = new DocSideboxGroup("Classes")
		sidebox.groups.add(sideboxgroup)
		if not sorted.is_empty then
			for mclass in sorted do add_class(mclass, sideboxgroup)
		end
	end

	# add a class DocListElement to a DocSideboxGroup
	private fun add_class (mclass: MClass, sideboxgroup: DocSideboxGroup) do
		# introduced classes
		if intro_mclasses.has(mclass) then
			var element = new DocListElement("<span title='Introduced'>I</span><a href='\#{mclass.get_anchor}' title='{mclass.get_html_short_comment(self)}'>{mclass.get_html_name}{mclass.get_html_short_signature}</a>")
			sideboxgroup.elements.add(element)
			element.css_classes.add("intro")
		# redefined classes
		else if redef_mclasses.has(mclass) then
			var element = new DocListElement("<span title='Redefined'>R</span><a href='\#{mclass.get_anchor}' title='{mclass.get_html_short_comment(self)}'>{mclass.get_html_name}{mclass.get_html_short_signature}</a>")
			sideboxgroup.elements.add(element)
			element.css_classes.add("redef")
		# inherited classes
		else
			var element = new DocListElement("<span title='Inherited'>H</span><a href='\#{mclass.get_anchor}' title='{mclass.get_html_short_comment(self)}'>{mclass.get_html_name}{mclass.get_html_short_signature}</a>")
			sideboxgroup.elements.add(element)
			element.css_classes.add("inherit")
		end
	end


	private fun importation_column(sidebox: DocSidebox) do
		# sidebar module Hierarchy
		var dependencies = new Array[MModule]

		for dep in mmodule.in_importation.greaters do
			if dep == mmodule or dep.direct_owner == mmodule or dep.public_owner == mmodule then continue
			dependencies.add(dep)
		end
		# nested modules
		if mmodule.in_nesting.direct_greaters.length > 0 then
			var sideboxgroup_nested = new DocSideboxGroup("Nested Modules")
			sidebox.groups.add(sideboxgroup_nested)
			var sorter_nested = new MModuleNameSorter
			var sorted_nested = new Array[MModule]
			sorted_nested = mmodule.in_nesting.direct_greaters.to_a
			sorter_nested.sort(sorted_nested)
			add_modules(sorted_nested, sideboxgroup_nested)
		end
		# all dependencies
		if dependencies.length > 0 then
			var sideboxgroup_all = new DocSideboxGroup("All dependencies")
			sidebox.groups.add(sideboxgroup_all)
			var sorter_all = new MModuleNameSorter
			sorter_all.sort(dependencies)
			add_modules(dependencies, sideboxgroup_all)
		end
		# clients modules
		var clients = new Array[MModule]
		for dep in mmodule.in_importation.smallers do
			if dep.name == "<main>" then continue
			if dep == mmodule then continue
			clients.add(dep)
		end
		if clients.length > 0 then
			var sideboxgroup_client = new DocSideboxGroup("All clients")
			sidebox.groups.add(sideboxgroup_client)
			var sorter_client = new MModuleNameSorter
			sorter_client.sort(clients)
			add_modules(clients, sideboxgroup_client)
		end
	end

	private fun add_modules(list: Array[MModule], sideboxgroup: DocSideboxGroup) do
		for mmodule in list do
			var element = new DocListElement("<a href='{mmodule.get_url}' title='{mmodule.get_html_short_comment(self)}'>{mmodule.get_html_name}</a>")
			sideboxgroup.elements.add(element)
		end
	end

	private fun module_doc(content: DocContentModule) do
		# classes
		var class_sorter = new MClassNameSorter
		# intro
		if not intro_mclasses.is_empty then
			var sorted = new Array[MClass]
			sorted.add_all(intro_mclasses)
			class_sorter.sort(sorted)
			var section_intro = new DocContentModuleSection("Introduced classes")
			content.sections.add(section_intro)
			for mclass in sorted do section_intro.articles.add(mclass.get_html_full_desc(self))
		end
		# redefs
		var redefs = new Array[MClass]
		for mclass in redef_mclasses do if not intro_mclasses.has(mclass) then redefs.add(mclass)
		class_sorter.sort(redefs)
		if not redefs.is_empty then
			var section_refined = new DocContentModuleSection("Refined classes")
			content.sections.add(section_refined)
			for mclass in redefs do section_refined.articles.add(mclass.get_html_full_desc(self))
		end
	end


	private fun process_generate_dot: String do
		# build poset with public owners
		var poset = new POSet[MModule]
		for mmodule in self.mmodule.in_importation.poset do
			if mmodule.name == "<main>" then continue
			#if mmodule.public_owner != null then continue
			if not mmodule.in_importation < self.mmodule and not self.mmodule.in_importation < mmodule and mmodule != self.mmodule then continue
			poset.add_node(mmodule)
			for omodule in mmodule.in_importation.poset do
				if mmodule == omodule then continue
				if omodule.name == "<main>" then continue
				if not omodule.in_importation < self.mmodule and not self.mmodule.in_importation < omodule then continue
				if omodule.in_importation < mmodule then
					poset.add_node(omodule)
					poset.add_edge(omodule, mmodule)
				end
				if mmodule.in_importation < omodule then
					poset.add_node(omodule)
					poset.add_edge(mmodule, omodule)
				end
				#if omodule.public_owner != null then continue
				#if mmodule.in_importation < omodule then
					#poset.add_node(omodule)
					#poset.add_edge(mmodule, omodule)
				#end
			end
		end
		# build graph
		var op = new Buffer
		var name = "dep_{mmodule.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			if mmodule == self.mmodule then
				op.append("\"{mmodule.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{mmodule.name}\"[URL=\"{mmodule.get_url}\"];\n")
			end
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name}\"->\"{omodule.name}\";\n")
			end
		end
		op.append("\}\n")
		return generate_dot(op.to_s, name, "Dependency graph for module {mmodule.name}")
	end
end

# A class page
class NitdocClass
	super NitdocPage

	private var mclass: MClass
	private var vtypes = new HashSet[MVirtualTypeDef]
	private var consts = new HashSet[MMethodDef]
	private var meths = new HashSet[MMethodDef]
	private var inherited = new HashSet[MPropDef]

	init(mclass: MClass, ctx: NitdocContext) do
		super(ctx)
		self.mclass = mclass
		# init menu
		doc_header.menu.items.add("<li><a href='index.html'>Overview</a></li>")
		var public_owner = mclass.public_owner
		if public_owner == null then
			doc_header.menu.items.add("<li>{mclass.intro_mmodule.get_html_link(self)}</li>")
		else
			doc_header.menu.items.add("<li>{public_owner.get_html_link(self)}</li>")
		end
		doc_header.menu.items.add("<li class='current'>{mclass.get_html_name}</li>")
		doc_header.menu.items.add("<li><a href='search.html'>Search</a></li>")
		# load properties
		var locals = new HashSet[MProperty]
		for mclassdef in mclass.mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < ctx.min_visibility then continue
				if mpropdef isa MVirtualTypeDef then vtypes.add(mpropdef)
				if mpropdef isa MMethodDef then
					if mpropdef.mproperty.is_init then
						consts.add(mpropdef)
					else
						meths.add(mpropdef)
					end
				end
				locals.add(mpropdef.mproperty)
			end
		end
		# get inherited properties
		for pclass in mclass.in_hierarchy(ctx.mainmodule).greaters do
			if pclass == mclass then continue
			for pclassdef in pclass.mclassdefs do
				for mprop in pclassdef.intro_mproperties do
					var mpropdef = mprop.intro
					if mprop.visibility < ctx.min_visibility then continue # skip if not correct visibiility
					if locals.has(mprop) then continue # skip if local
					if mclass.name != "Object" and mprop.intro_mclassdef.mclass.name == "Object" and (mprop.visibility <= protected_visibility or mprop.intro_mclassdef.mmodule.public_owner == null or mprop.intro_mclassdef.mmodule.public_owner.name != "standard") then continue # skip toplevels
					if mpropdef isa MVirtualTypeDef then vtypes.add(mpropdef)
					if mpropdef isa MMethodDef then
						if mpropdef.mproperty.is_init then
							consts.add(mpropdef)
						else
							meths.add(mpropdef)
						end
					end
					inherited.add(mpropdef)
				end
			end
		end
	end

	redef fun title do
		var nclass = ctx.mbuilder.mclassdef2nclassdef[mclass.intro]
		if nclass isa AStdClassdef then
			return "{mclass.get_html_name} class | {nclass.short_comment}"
		else
			return "{mclass.get_html_name} class"
		end
	end

	redef fun content do
		# sidebar (properties)
		var sidebar = new DocSidebar
		var sidebox_properties = new DocSidebox("Properties")
		sidebox_properties.css_classes.add("properties filterable")
		sidebar.boxes.add(sidebox_properties)
		properties_column(sidebox_properties)
		# sidebar (inheritance)
		var sidebox_inheritance = new DocSidebox("Inheritance")
		sidebar.boxes.add(sidebox_inheritance)
		inheritance_column(sidebox_inheritance)
		append(sidebar.html)
		# main content
		class_doc
	end

	private fun properties_column(sidebox: DocSidebox) do
		var sorter = new MPropDefNameSorter
		# virtual types
		if vtypes.length > 0 then
			var vts = new Array[MVirtualTypeDef]
			vts.add_all(vtypes)
			sorter.sort(vts)
			var sideboxgroup_virtual = new DocSideboxGroup("Virtual Types")
			sidebox.groups.add(sideboxgroup_virtual)
			for mprop in vts do
				var element = new DocListElement(mprop.get_html_sidebar_item(self))
				element.css_classes.add(mprop.get_method_property(self))
				sideboxgroup_virtual.elements.add(element)
			end
		end
		# constructors
		if consts.length > 0 then
			var cts = new Array[MMethodDef]
			cts.add_all(consts)
			sorter.sort(cts)
			var sideboxgroup_init = new DocSideboxGroup("Constructors")
			sidebox.groups.add(sideboxgroup_init)
			for mprop in cts do
				if mprop.mproperty.name == "init" and mprop.mclassdef.mclass != mclass then continue
				var element = new DocListElement(mprop.get_html_sidebar_item(self))
				element.css_classes.add(mprop.get_method_property(self))
				sideboxgroup_init.elements.add(element)
			end
		end
		# methods
		if meths.length > 0 then
			var mts = new Array[MMethodDef]
			mts.add_all(meths)
			sorter.sort(mts)
			var sideboxgroup_methods = new DocSideboxGroup("Methods")
			sidebox.groups.add(sideboxgroup_methods)
			for mprop in mts do
				var element = new DocListElement(mprop.get_html_sidebar_item(self))
				element.css_classes.add(mprop.get_method_property(self))
				sideboxgroup_methods.elements.add(element)
			end
		end
	end

	private fun inheritance_column(sidebox: DocSidebox) do
		var sorted = new Array[MClass]
		var sorterp = new MClassNameSorter
		var greaters = mclass.in_hierarchy(ctx.mainmodule).greaters.to_a
		if greaters.length > 1 then
			ctx.mainmodule.linearize_mclasses(greaters)
			var sideboxgroup_super = new DocSideboxGroup("Superclasses")
			sidebox.groups.add(sideboxgroup_super)
			for sup in greaters do
				if sup == mclass then continue
				var element = new DocListElement(sup.get_html_link(self))
				sideboxgroup_super.elements.add(element)
			end
		end
		var smallers = mclass.in_hierarchy(ctx.mainmodule).smallers.to_a
		var direct_smallers = mclass.in_hierarchy(ctx.mainmodule).direct_smallers.to_a
		if smallers.length <= 1 then
			var sideboxgroup_no = new DocSideboxGroup("No Know Subclasses")
			sidebox.groups.add(sideboxgroup_no)
		else if smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(smallers)
			var sideboxgroup_sub = new DocSideboxGroup("Subclasses")
			sidebox.groups.add(sideboxgroup_sub)
			for sub in smallers do
				if sub == mclass then continue
				var element = new DocListElement(sub.get_html_link(self))
				sideboxgroup_sub.elements.add(element)
			end
		else if direct_smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(direct_smallers)
			var sideboxgroup_direct_sub = new DocSideboxGroup("Direct Subclasses Only")
			sidebox.groups.add(sideboxgroup_direct_sub)
			for sub in direct_smallers do
				if sub == mclass then continue
				var element = new DocListElement(sub.get_html_link(self))
				sideboxgroup_direct_sub.elements.add(element)
			end
		else
			var sideboxgroup_too_much = new DocSideboxGroup("Too much Subclasses to list")
			sidebox.groups.add(sideboxgroup_too_much)
		end
	end

	private fun class_doc do
		# title comment and graph
		var subtitle: String
		subtitle = ""
		if mclass.visibility < public_visibility then
			subtitle = "{mclass.visibility.to_s} "
		end
		subtitle += "{mclass.kind.to_s} {mclass.get_html_namespace(self)}{mclass.get_html_short_signature}"
		var content = new DocContentClass("{mclass.get_html_name}{mclass.get_html_short_signature}", subtitle, mclass.get_html_comment(self), process_generate_dot)
		# concerns
		var concern2meths = new ArrayMap[MModule, Array[MMethodDef]]
		var sorted_meths = new Array[MMethodDef]
		var sorted = new Array[MModule]
		sorted_meths.add_all(meths)
		ctx.mainmodule.linearize_mpropdefs(sorted_meths)
		for meth in meths do
			if inherited.has(meth) then continue
			var mmodule = meth.mclassdef.mmodule
			if not concern2meths.has_key(mmodule) then
				sorted.add(mmodule)
				concern2meths[mmodule] = new Array[MMethodDef]
			end
			concern2meths[mmodule].add(meth)
		end
		var sections = new ArrayMap[MModule, Array[MModule]]
		for mmodule in concern2meths.keys do
			var owner = mmodule.public_owner
			if owner == null then owner = mmodule
			if not sections.has_key(owner) then sections[owner] = new Array[MModule]
			if owner != mmodule then sections[owner].add(mmodule)
		end
		var concern_tab = new ArrayMap[String, Array[String]]
		var own: String
		var mod: String
		own = ""
		mod = ""
		for owner, mmodules in sections do
			own = ""
			var nowner = ctx.mbuilder.mmodule2nmodule[owner]
			if nowner.short_comment.is_empty then
				own = "<a href=\"#{owner.get_anchor}\">{owner.get_html_name}</a>"
				concern_tab[own] = new Array[String]
			else
				own = "<a href=\"#{owner.get_anchor}\">{owner.get_html_name}</a>: {nowner.short_comment}"
				concern_tab[own] = new Array[String]
			end
			if not mmodules.is_empty then
				for mmodule in mmodules do
					var nmodule = ctx.mbuilder.mmodule2nmodule[mmodule]
					if nmodule.short_comment.is_empty then
						mod = "<a href=\"#{mmodule.get_anchor}\">{mmodule.get_html_name}</a>"
						concern_tab[own].add(mod)
					else
						mod = "<a href=\"#{mmodule.get_anchor}\">{mmodule.get_html_name}</a>: {nmodule.short_comment}"
						concern_tab[own].add(mod)
					end
				end
			end
			mod = ""
		end
		var concern = new DocContentClassConcern(concern_tab)
		content.concerns.add(concern)

		# properties
		var prop_sorter = new MPropDefNameSorter
		var lmmodule = new List[MModule]
		var nclass = ctx.mbuilder.mclassdef2nclassdef[mclass.intro]

		# virtual and formal types
		var local_vtypes = new Array[MVirtualTypeDef]
		for vt in vtypes do if not inherited.has(vt) then local_vtypes.add(vt)
		if local_vtypes.length > 0 or mclass.arity > 0 then
			var section_virtual = new DocContentClassSection("Formal and Virtual Types")
			content.sections.add(section_virtual)
			section_virtual.section_css_classes.add("types")
			# formal types
			if mclass.arity > 0 and nclass isa AStdClassdef then
				for ft, bound in mclass.parameter_types do
					var buf = new Buffer
					bound.html_link(self, buf)
					var article = new DocContentClassSectionFormal(ft, buf.to_s)
					section_virtual.articles.add(article)
				end
			end

			# virtual types
			prop_sorter.sort(local_vtypes)
			for prop in local_vtypes do
				section_virtual.texts.add(prop.get_html_full_desc(self, self.mclass))
			end
		end
		# constructors
		var local_consts = new Array[MMethodDef]
		for const in consts do if not inherited.has(const) then local_consts.add(const)
		prop_sorter.sort(local_consts)
		if local_consts.length > 0 then
			var section_constr = new DocContentClassSection("Constructors")
			section_constr.title_css_classes.add("section-header")
			section_constr.section_css_classes.add("constructors")
			content.sections.add(section_constr)
			for prop in local_consts do
				section_constr.texts.add(prop.get_html_full_desc(self, self.mclass))
			end
		end
		# methods
		if not concern2meths.is_empty then
			var section_methods = new DocContentClassSection("Methods")
			section_methods.section_css_classes.add("methods")
			section_methods.title_css_classes.add("section-header")
			content.sections.add(section_methods)
			var buffer = new Buffer
			for owner, mmodules in sections do
				buffer.append("<a id=\"{owner.get_anchor}\"></a>")
				if owner != mclass.intro_mmodule and owner != mclass.public_owner then
					var nowner = ctx.mbuilder.mmodule2nmodule[owner]
					buffer.append("<h3 class=\"concern-toplevel\">Methods refined in ")
					buffer.append(owner.get_html_link(self))
					buffer.append("</h3>")
					buffer.append("<p class='concern-doc'>")
					buffer.append(owner.get_html_link(self))
					if not nowner.short_comment.is_empty then
						buffer.append(": {nowner.short_comment}")
					end
					buffer.append("</p>")
				end
				if concern2meths.has_key(owner) then
					var mmethods = concern2meths[owner]
					prop_sorter.sort(mmethods)
					for prop in mmethods do
						buffer.append(prop.get_html_full_desc(self, self.mclass))
					end
				end
				for mmodule in mmodules do
					buffer.append("<a id=\"{mmodule.get_anchor}\"></a>")
					var nmodule = ctx.mbuilder.mmodule2nmodule[mmodule]
					if mmodule != mclass.intro_mmodule and mmodule != mclass.public_owner then
						buffer.append("<p class='concern-doc'>")
						buffer.append(mmodule.get_html_link(self))
						if not nmodule.short_comment.is_empty then
							buffer.append(": {nmodule.short_comment}")
						end
						buffer.append("</p>")
					end
					var mmethods = concern2meths[mmodule]
					prop_sorter.sort(mmethods)
					for prop in mmethods do
						buffer.append(prop.get_html_full_desc(self, self.mclass))
					end
				end
			end
			section_methods.texts.add(buffer.to_s)
		end
		# inherited properties
		if inherited.length > 0 then
			var sorted_inherited = new Array[MPropDef]
			sorted_inherited.add_all(inherited)
			ctx.mainmodule.linearize_mpropdefs(sorted_inherited)
			var classes = new ArrayMap[MClass, Array[MPropDef]]
			for mmethod in sorted_inherited.reversed do
				var mclass = mmethod.mclassdef.mclass
				if not classes.has_key(mclass) then classes[mclass] = new Array[MPropDef]
				classes[mclass].add(mmethod)
			end
			var section_inherited = new DocContentClassSection("Inherited Properties")
			section_inherited.section_css_classes.add("inherited")
			section_inherited.title_css_classes.add("section-header")
			content.sections.add(section_inherited)
			#append("<section class='inherited'>")
			#append("<h2 class='section-header'>Inherited Properties</h2>")
			var buffer_inherited = new Buffer
			for c, mmethods in classes do
				prop_sorter.sort(mmethods)
				buffer_inherited.append("<p>Defined in ")
				buffer_inherited.append(c.get_html_link(self))
				buffer_inherited.append(": ")
				for i in [0..mmethods.length[ do
					var mmethod = mmethods[i]
					buffer_inherited.append(mmethod.get_html_link(self))
					if i <= mmethods.length - 1 then
						buffer_inherited.append(", ")
					end
				end
				buffer_inherited.append("</p>")
			end
			section_inherited.texts.add(buffer_inherited.to_s)
		end
		append(content.html)
	end

	private fun process_generate_dot: String do
		var pe = ctx.class_hierarchy[mclass]
		var cla = new HashSet[MClass]
		var sm = new HashSet[MClass]
		var sm2 = new HashSet[MClass]
		sm.add(mclass)
		while cla.length + sm.length < 10 and sm.length > 0 do
			cla.add_all(sm)
			sm2.clear
			for x in sm do
				sm2.add_all(pe.poset[x].direct_smallers)
			end
			var t = sm
			sm = sm2
			sm2 = t
		end
		cla.add_all(pe.greaters)

		var op = new Buffer
		var name = "dep_{mclass.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in cla do
			if c == mclass then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.get_url}\"];\n")
			end
			for c2 in pe.poset[c].direct_greaters do
				if not cla.has(c2) then continue
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
			if not pe.poset[c].direct_smallers.is_empty then
				var others = true
				for c2 in pe.poset[c].direct_smallers do
					if cla.has(c2) then others = false
				end
				if others then
					op.append("\"{c.name}...\"[label=\"\"];\n")
					op.append("\"{c.name}...\"->\"{c.name}\"[style=dotted];\n")
				end
			end
		end
		op.append("\}\n")
		return generate_dot(op.to_s, name, "Dependency graph for class {mclass.name}")
	end
end

#
# Model redefs
#

redef class MModule
	# Return the HTML escaped name of the module
	private fun get_html_name: String do return name.html_escape

	# return short comment for the module
	private fun get_html_short_comment(page: NitdocPage): String do
		var buffer = new Buffer
		if page.ctx.mbuilder.mmodule2nmodule.has_key(self) then
			buffer.append(page.ctx.mbuilder.mmodule2nmodule[self].short_comment)
		end
		return buffer.to_s
	end

	# URL to nitdoc page
	#	module_owner_name.html
	private fun get_url: String do
		if url_cache == null then
			var res = new Buffer
			res.append("module_")
			var mowner = public_owner
			if mowner != null then
				res.append("{public_owner.name}_")
			end
			res.append("{self.name}.html")
			url_cache = res.to_s
		end
		return url_cache.as(not null)
	end
	private var url_cache: nullable String

	# html anchor id for the module in a nitdoc page
	#	MOD_owner_name
	private fun get_anchor: String do
		if anchor_cache == null then
			var res = new Buffer
			res.append("MOD_")
			var mowner = public_owner
			if mowner != null then
				res.append("{public_owner.name}_")
			end
			res.append(self.name)
			anchor_cache = res.to_s
		end
		return anchor_cache.as(not null)
	end
	private var anchor_cache: nullable String

	# Return a link (html a tag) to the nitdoc module page
	#	<a href="url" title="short_comment">html_name</a>
	private fun get_html_link_str(page: NitdocPage): String do
		if get_html_link_cache == null then
			var res = new Buffer
			if page.ctx.mbuilder.mmodule2nmodule.has_key(self) then
				res.append("<a href='{get_url}' title='{page.ctx.mbuilder.mmodule2nmodule[self].short_comment}'>{get_html_name}</a>")
			else
				res.append("<a href='{get_url}'>{get_html_name}</a>")
			end
			get_html_link_cache = res.to_s
		end
		return get_html_link_cache.as(not null)
	end

	private fun get_html_link(page: NitdocPage): String do
		return get_html_link_str(page)
	end
	private var get_html_link_cache: nullable String

	# Return the module signature decorated with html
	#	<span>module html_full_namespace</span>
	private fun get_html_signature(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<span>module ")
		buffer.append(get_html_full_namespace(page))
		buffer.append("</span>")
		return buffer.to_s
	end

	# Return the module full namespace decorated with html
	#	<span>public_owner.html_namespace::html_link</span>
	private fun get_html_full_namespace(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<span>")
		var mowner = public_owner
		if mowner != null then
			buffer.append(public_owner.get_html_namespace(page))
			buffer.append("::")
		end
		buffer.append(get_html_link(page))
		buffer.append("</span>")
		return buffer.to_s
	end

	# Return the module full namespace decorated with html
	#	<span>public_owner.html_namespace</span>
	private fun get_html_namespace(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<span>")
		var mowner = public_owner
		if mowner != null then
			buffer.append(public_owner.get_html_namespace(page))
		else
			buffer.append(get_html_link(page))
		end
		buffer.append("</span>")
		return buffer.to_s
	end

	#Return the full description of the module decorated with html
	private fun get_html_full_desc(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<article class='{self}' id='{get_anchor}'>")
		buffer.append("<h3 class='signature' data-untyped-signature='{get_html_name}'>")
		buffer.append("<span>")
		buffer.append(get_html_link(page))
		buffer.append("</span></h3>")
		buffer.append(get_html_comment(page))
		buffer.append("</article>")
		return buffer.to_s
	end

	# Return the full comment of the module decorated with html
	private fun get_html_comment(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<div class='description'>")
		if page.ctx.mbuilder.mmodule2nmodule.has_key(self) then
			var nmodule = page.ctx.mbuilder.mmodule2nmodule[self]
			if page.ctx.github_gitdir != null then
				var loc = nmodule.doc_location.github(page.ctx.github_gitdir.as(not null))
				buffer.append("<textarea class='baseComment' data-comment-namespace='{full_name}' data-comment-location='{loc}'>{nmodule.full_comment}</textarea>")
			end
			if nmodule.full_comment == "" then
				buffer.append("<p class='info inheritance'>")
				buffer.append("<span class=\"noComment\">no comment for </span>")
			else
				buffer.append("<div class='comment'>{nmodule.full_markdown}</div>")
				buffer.append("<p class='info inheritance'>")
			end
			buffer.append("definition in ")
			buffer.append(get_html_full_namespace(page))
			buffer.append(" {page.show_source(nmodule.location)}</p>")
		end
		buffer.append("</div>")
		return buffer.to_s
	end

	private fun has_mclassdef_for(mclass: MClass): Bool do
		for mmodule in self.in_nesting.greaters do
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.mclass == mclass then return true
			end
		end
		return false
	end

	private fun has_mclassdef(mclassdef: MClassDef): Bool do
		for mmodule in self.in_nesting.greaters do
			for oclassdef in mmodule.mclassdefs do
				if mclassdef == oclassdef then return true
			end
		end
		return false
	end
end

redef class MClass
	# Return the HTML escaped name of the module
	private fun get_html_name: String do return name.html_escape

	#return short comment for the class
	private fun get_html_short_comment(page: NitdocPage): String do
		var buffer = new Buffer
		if page.ctx.mbuilder.mclassdef2nclassdef.has_key(intro) then
			var nclass = page.ctx.mbuilder.mclassdef2nclassdef[intro]
			if nclass isa AStdClassdef then
				buffer.append(nclass.short_comment)
			end
		end
		return buffer.to_s
	end

	# URL to nitdoc page
	#	class_owner_name.html
	private fun get_url: String do
		return "class_{public_owner}_{name}.html"
	end

	# html anchor id for the class in a nitdoc page
	#	MOD_owner_name
	private fun get_anchor: String do
		if anchor_cache == null then
			anchor_cache = "CLASS_{public_owner.name}_{name}"
		end
		return anchor_cache.as(not null)
	end
	private var anchor_cache: nullable String

	# return a link (with signature) to the nitdoc class page
	#	<a href="url" title="short_comment">html_name(signature)</a>
	private fun get_html_link(page: NitdocPage): String do
		if get_html_link_cache == null then
			var buffer = new Buffer
			buffer.append("<a href='{get_url}'")
			if page.ctx.mbuilder.mclassdef2nclassdef.has_key(intro) then
				var nclass = page.ctx.mbuilder.mclassdef2nclassdef[intro]
				if nclass isa AStdClassdef then
					buffer.append(" title=\"{nclass.short_comment}\"")
				end
			end
			buffer.append(">{get_html_name}{get_html_short_signature}</a>")
			get_html_link_cache = buffer.to_s
		end
		return get_html_link_cache.as(not null)
	end
	private var get_html_link_cache: nullable String

	# Return a short link (without signature) to the nitdoc class page
	#	<a href="url" title="short_comment">html_name</a>
	private fun get_html_short_link(page: NitdocPage): String do
		if get_html_short_link_cache == null then
			var res = new Buffer
			res.append("<a href='{get_url}'")
			if page.ctx.mbuilder.mclassdef2nclassdef.has_key(intro) then
				var nclass = page.ctx.mbuilder.mclassdef2nclassdef[intro]
				if nclass isa AStdClassdef then
					res.append(" title=\"{nclass.short_comment}\"")
				end
			end
			res.append(">{get_html_name}</a>")
			get_html_short_link_cache = res.to_s
		end
		return get_html_short_link_cache.as(not null)
	end
	private var get_html_short_link_cache: nullable String

	# Return a link (with signature) to the class anchor
	#	<a href="url" title="short_comment">html_name</a>
	private fun html_link_anchor(page: NitdocPage) do
		if html_link_anchor_cache == null then
			var res = new Buffer
			res.append("<a href='#{get_anchor}'")
			if page.ctx.mbuilder.mclassdef2nclassdef.has_key(intro) then
				var nclass = page.ctx.mbuilder.mclassdef2nclassdef[intro]
				if nclass isa AStdClassdef then
					res.append(" title=\"{nclass.short_comment}\"")
				end
			end
			res.append(">{get_html_name}{get_html_short_signature}</a>")
			html_link_anchor_cache = res.to_s
		end
		page.append(html_link_anchor_cache.as(not null))
	end
	private var html_link_anchor_cache: nullable String

	# Return the generic signature of the class with bounds
	#	[E: <a>MType</a>, F: <a>MType</a>]
	private fun get_html_signature(page: NitdocPage): String do
		var buffer = new Buffer
		if arity > 0 then
			buffer.append("[")
			for i in [0..intro.parameter_names.length[ do
				buffer.append("{intro.parameter_names[i]}: ")
				var buf = new Buffer
				intro.bound_mtype.arguments[i].html_link(page, buf)
				buffer.append(buf.to_s)
				if i < intro.parameter_names.length - 1 then buffer.append(", ")
			end
			buffer.append("]")
		end
		return buffer.to_s
	end

	# Return the generic signature of the class without bounds
	#	[E, F]
	private fun get_html_short_signature: String do
		if arity > 0 then
			return "[{intro.parameter_names.join(", ")}]"
		else
			return ""
		end
	end

	# Return the class namespace decorated with html
	#	<span>intro_module::html_short_link</span>
	private fun get_html_namespace(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append(intro_mmodule.get_html_namespace(page))
		buffer.append("::<span>")
		buffer.append(get_html_short_link(page))
		buffer.append("</span>")
		return buffer.to_s
	end

	private fun get_html_full_desc(page: NitdocModule): String do
		var is_redef = not page.mmodule.in_nesting.greaters.has(intro.mmodule)
		var redefs = mpropdefs_in_module(page)
		var buffer = new Buffer
		if not is_redef or not redefs.is_empty then
			var classes = new Array[String]
			classes.add(kind.to_s)
			if is_redef then classes.add("redef")
			classes.add(visibility.to_s)
			buffer.append("<article class='{classes.join(" ")}' id='{get_anchor}'>")
			buffer.append("<h3 class='signature' data-untyped-signature='{get_html_name}{get_html_short_signature}'>")
			buffer.append("<span>")
			buffer.append(get_html_short_link(page))
			buffer.append(get_html_signature(page))
			buffer.append("</span></h3>")
			buffer.append(get_html_info(page))
			buffer.append(get_html_comment(page))
			buffer.append("</article>")
		end
		return buffer.to_s
	end

	private fun get_html_info(page: NitdocModule): String do
		var buffer = new Buffer
		buffer.append("<div class='info'>")
		if visibility < public_visibility then buffer.append("{visibility.to_s} ")
		if not page.mmodule.in_nesting.greaters.has(intro.mmodule) then buffer.append("redef ")
		buffer.append("{kind} ")
		buffer.append(get_html_namespace(page))
		buffer.append("{get_html_short_signature}</div>")
		return buffer.to_s
	end

	private fun get_html_comment(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<div class='description'>")
		if page isa NitdocModule then
			page.mmodule.linearize_mclassdefs(mclassdefs)
			# comments for each mclassdef contained in current mmodule
			for mclassdef in mclassdefs do
				if not mclassdef.is_intro and not page.mmodule.mclassdefs.has(mclassdef) then continue
				if page.ctx.mbuilder.mclassdef2nclassdef.has_key(mclassdef) then
					var nclass = page.ctx.mbuilder.mclassdef2nclassdef[mclassdef]
					if nclass isa AStdClassdef then
						if page.ctx.github_gitdir != null then
							var loc = nclass.doc_location.github(page.ctx.github_gitdir.as(not null))
							buffer.append("<textarea class='baseComment' data-comment-namespace='{mclassdef.mmodule.full_name}::{name}' data-comment-location='{loc}'>{nclass.full_comment}</textarea>")
						end
						if nclass.full_comment == "" then
							buffer.append("<p class='info inheritance'>")
							buffer.append("<span class=\"noComment\">no comment for </span>")
						else
							buffer.append("<div class='comment'>{nclass.full_markdown}</div>")
							buffer.append("<p class='info inheritance'>")
						end
						if mclassdef.is_intro then
							buffer.append("introduction in ")
						else
							buffer.append("refinement in ")
						end
						buffer.append(mclassdef.mmodule.get_html_full_namespace(page))
						buffer.append(" {page.show_source(nclass.location)}</p>")
					end
				end
			end
		else
			# comments for intro
			if page.ctx.mbuilder.mclassdef2nclassdef.has_key(intro) then
				var nclass = page.ctx.mbuilder.mclassdef2nclassdef[intro]
				if nclass isa AStdClassdef then
					if page.ctx.github_gitdir != null then
						var loc = nclass.doc_location.github(page.ctx.github_gitdir.as(not null))
						buffer.append("<textarea class='baseComment' data-comment-namespace='{intro.mmodule.full_name}::{name}' data-comment-location='{loc}'>{nclass.full_comment}</textarea>")
					end
					if nclass.full_comment == "" then
						buffer.append("<p class='info inheritance'>")
						buffer.append("<span class=\"noComment\">no comment for </span>")
					else
						buffer.append("<div class='comment'>{nclass.full_markdown}</div>")
						buffer.append("<p class='info inheritance'>")
					end
					buffer.append("introduction in ")
					buffer.append(intro.mmodule.get_html_full_namespace(page))
					buffer.append(" {page.show_source(nclass.location)}</p>")
				end
			end
		end
		buffer.append("</div>")
		return buffer.to_s
	end

	private fun mpropdefs_in_module(page: NitdocModule): Array[MPropDef] do
		var res = new Array[MPropDef]
		page.mmodule.linearize_mclassdefs(mclassdefs)
		for mclassdef in mclassdefs do
			if not page.mmodule.mclassdefs.has(mclassdef) then continue
			if mclassdef.is_intro then continue
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < page.ctx.min_visibility then continue
				if mpropdef isa MAttributeDef then continue
				res.add(mpropdef)
			end
		end
		return res
	end
end

redef class MProperty
	# Escape name for html output
	private fun html_name: String do return name.html_escape

	# Return the property namespace decorated with html
	#	<span>intro_module::intro_class::html_link</span>
	private fun get_html_namespace(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append(intro_mclassdef.mclass.get_html_namespace(page))
		buffer.append(intro_mclassdef.mclass.get_html_short_signature)
		buffer.append("::<span>")
		buffer.append(intro.gget_html_link(page))
		buffer.append("</span>")
		return buffer.to_s
	end
end

redef class MType
	# Link to the type definition in the nitdoc page
	private fun html_link(page: NitdocPage, buffer: Buffer) is abstract
end

redef class MClassType
	redef fun html_link(page, buffer) do buffer.append(mclass.get_html_link(page))
end

redef class MNullableType
	redef fun html_link(page, buffer) do
		buffer.append("nullable ")
		mtype.html_link(page, buffer)
	end
end

redef class MGenericType
	redef fun html_link(page, buffer) do
		buffer.append("<a href='{mclass.get_url}'>{mclass.get_html_name}</a>[")
		for i in [0..arguments.length[ do
			arguments[i].html_link(page, buffer)
			if i < arguments.length - 1 then buffer.append(", ")
		end
		buffer.append("]")
	end
end

redef class MParameterType
	redef fun html_link(page, buffer) do
		var name = mclass.intro.parameter_names[rank]
		buffer.append("<a href='{mclass.get_url}#FT_{name}' title='formal type'>{name}</a>")
	end
end

redef class MVirtualType
	redef fun html_link(page, buffer) do
		buffer.append(mproperty.intro.gget_html_link(page))
	end
end

redef class MClassDef
	# Return the classdef namespace decorated with html
	private fun get_html_namespace(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append(mmodule.get_html_full_namespace(page))
		buffer.append("::<span>")
		buffer.append(mclass.get_html_link(page))
		buffer.append("</span>")
		return buffer.to_s
	end
end

redef class MPropDef
	# Return the full qualified name of the mpropdef
	#	module::classdef::name
	private fun full_name: String do
		return "{mclassdef.mclass.public_owner.name}::{mclassdef.mclass.name}::{mproperty.name}"
	end

	# URL into the nitdoc page
	#	class_owner_name.html#anchor
	private fun url: String do
		if url_cache == null then
			url_cache = "{mclassdef.mclass.get_url}#{anchor}"
		end
		return url_cache.as(not null)
	end
	private var url_cache: nullable String

	# html anchor id for the property in a nitdoc class page
	#	PROP_mclass_propertyname
	private fun anchor: String do
		if anchor_cache == null then
			anchor_cache = "PROP_{mclassdef.mclass.public_owner.name}_{mproperty.name.replace(" ", "_")}"
		end
		return anchor_cache.as(not null)
	end
	private var anchor_cache: nullable String

	# Return a link to property into the nitdoc class page
	#	<a href="url" title="short_comment">html_name</a>
	private fun gget_html_link(page: NitdocPage): String do
		var buffer = new Buffer
		if html_link_cache == null then
			var res = new Buffer
			if page.ctx.mbuilder.mpropdef2npropdef.has_key(self) then
				var nprop = page.ctx.mbuilder.mpropdef2npropdef[self]
				res.append("<a href=\"{url}\" title=\"{nprop.short_comment}\">{mproperty.html_name}</a>")
			else
				res.append("<a href=\"{url}\">{mproperty.html_name}</a>")
			end
			html_link_cache = res.to_s
		end
		buffer.append(html_link_cache.as(not null))
		return buffer.to_s
	end
	private var html_link_cache: nullable String

	# return an element a list item for the mpropdef
	#	<li>get_html_link</li>
	private fun get_html_sidebar_item(page: NitdocClass): String do
		var buffer = new Buffer
		if is_intro and mclassdef.mclass == page.mclass then
			buffer.append("<span title='Introduced'>I</span>")
		else if is_intro and mclassdef.mclass != page.mclass then
			buffer.append("<span title='Inherited'>H</span>")
		else
			buffer.append("<span title='Redefined'>R</span>")
		end
		buffer.append(get_html_link(page))
		return buffer.to_s
	end

	# return "intro", "inherit" or "redef" depending of the property of the method in a class
	private fun get_method_property(page: NitdocClass): String do
		var buffer = new Buffer
		if is_intro and mclassdef.mclass == page.mclass then
			buffer.append("intro")
		else if is_intro and mclassdef.mclass != page.mclass then
			buffer.append("inherit")
		else
			buffer.append("redef")
		end
		return buffer.to_s
	end

	# Return a link to property into the nitdoc class page
	#	<a href="url" title="short_comment">html_name</a>
	private fun get_html_link(page: NitdocClass): String do
		if get_html_link_cache == null then
			var buffer = new Buffer
			if page.ctx.mbuilder.mpropdef2npropdef.has_key(self) then
				var nprop = page.ctx.mbuilder.mpropdef2npropdef[self]
				buffer.append("<a href=\"{url}\" title=\"{nprop.short_comment}\">{mproperty.html_name}</a>")
			else
				buffer.append("<a href=\"{url}\">{mproperty.html_name}</a>")
			end
			get_html_link_cache = buffer.to_s
		end
		return get_html_link_cache.as(not null)
	end
	private var get_html_link_cache: nullable String

	private fun get_html_full_desc(page: NitdocPage, ctx: MClass): String is abstract
	private fun get_html_info(page: NitdocPage, ctx: MClass): String is abstract

	private fun get_html_comment(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("<div class='description'>")
		if not is_intro then
			if page.ctx.mbuilder.mpropdef2npropdef.has_key(mproperty.intro) then
				var intro_nprop = page.ctx.mbuilder.mpropdef2npropdef[mproperty.intro]
				if page.ctx.github_gitdir != null then
					var loc = intro_nprop.doc_location.github(page.ctx.github_gitdir.as(not null))
					buffer.append("<textarea class='baseComment' data-comment-namespace='{mproperty.intro.mclassdef.mmodule.full_name}::{mproperty.intro.mclassdef.mclass.name}::{mproperty.name}' data-comment-location='{loc}'>{intro_nprop.full_comment}</textarea>")
				end
				if intro_nprop.full_comment.is_empty then
					buffer.append("<p class='info inheritance'>")
					buffer.append("<span class=\"noComment\">no comment for </span>")
				else
					buffer.append("<div class='comment'>{intro_nprop.full_markdown}</div>")
					buffer.append("<p class='info inheritance'>")
				end
				buffer.append("introduction in ")
				buffer.append(mproperty.intro.mclassdef.get_html_namespace(page))
				buffer.append(" {page.show_source(intro_nprop.location)}</p>")
			end
		end
		if page.ctx.mbuilder.mpropdef2npropdef.has_key(self) then
			var nprop = page.ctx.mbuilder.mpropdef2npropdef[self]
			if page.ctx.github_gitdir != null then
				var loc = nprop.doc_location.github(page.ctx.github_gitdir.as(not null))
				buffer.append("<textarea class='baseComment' data-comment-namespace='{mclassdef.mmodule.full_name}::{mclassdef.mclass.name}::{mproperty.name}' data-comment-location='{loc}'>{nprop.full_comment}</textarea>")
			end
			if nprop.full_comment == "" then
				buffer.append("<p class='info inheritance'>")
				buffer.append("<span class=\"noComment\">no comment for </span>")
			else
				buffer.append("<div class='comment'>{nprop.full_markdown}</div>")
				buffer.append("<p class='info inheritance'>")
			end
			if is_intro then
				buffer.append("introduction in ")
			else
				buffer.append("redefinition in ")
			end
			buffer.append(mclassdef.get_html_namespace(page))
			buffer.append(" {page.show_source(nprop.location)}</p>")
		end
		buffer.append("</div>")
		return buffer.to_s
	end
end

redef class MMethodDef
	redef fun get_html_full_desc(page, ctx): String do
		var buffer = new Buffer
		var classes = new Array[String]
		var is_redef = mproperty.intro_mclassdef.mclass != ctx
		if mproperty.is_init then
			classes.add("init")
		else
			classes.add("fun")
		end
		if is_redef then classes.add("redef")
		classes.add(mproperty.visibility.to_s)
		buffer.append("<article class='{classes.join(" ")}' id='{anchor}'>")
		if page.ctx.mbuilder.mpropdef2npropdef.has_key(self) then
			buffer.append("<h3 class='signature' data-untyped-signature='{mproperty.name}{msignature.untyped_signature(page)}'>")
			buffer.append("<span>{mproperty.html_name}")
			buffer.append(msignature.get_html_signature(page))
			buffer.append("</span></h3>")
		else
			buffer.append("<h3 class='signature' data-untyped-signature='init{msignature.untyped_signature(page)}'>")
			buffer.append("<span>init")
			buffer.append(msignature.get_html_signature(page))
			buffer.append("</span></h3>")
		end
		buffer.append(get_html_info(page, ctx))
		buffer.append(get_html_comment(page))
		buffer.append("</article>")
		return buffer.to_s
	end

	redef fun get_html_info(page, ctx): String do
		var buffer = new Buffer
		buffer.append("<div class='info'>")
		if mproperty.visibility < public_visibility then buffer.append("{mproperty.visibility.to_s} ")
		if mproperty.intro_mclassdef.mclass != ctx then buffer.append("redef ")
		if mproperty.is_init then
			buffer.append("init ")
		else
			buffer.append("fun ")
		end
		buffer.append(mproperty.get_html_namespace(page))
		buffer.append("</div>")
		return buffer.to_s
	end
end

redef class MVirtualTypeDef
	redef fun get_html_full_desc(page, ctx): String do
		var buffer = new Buffer
		var is_redef = mproperty.intro_mclassdef.mclass != ctx
		var classes = new Array[String]
		classes.add("type")
		if is_redef then classes.add("redef")
		classes.add(mproperty.visibility.to_s)
		buffer.append("<article class='{classes.join(" ")}' id='{anchor}'>")
		buffer.append("<h3 class='signature' data-untyped-signature='{mproperty.name}'><span>{mproperty.html_name}: ")
		var buf = new Buffer
		bound.html_link(page, buf)
		buffer.append(buf.to_s)
		buffer.append("</span></h3>")
		buffer.append(get_html_info(page, ctx))
		buffer.append(get_html_comment(page))
		buffer.append("</article>")
		return buffer.to_s
	end

	redef fun get_html_info(page, ctx): String do
		var buffer = new Buffer
		buffer.append("<div class='info'>")
		if mproperty.intro_mclassdef.mclass != ctx then buffer.append("redef ")
		buffer.append("type ")
		buffer.append(mproperty.get_html_namespace(page))
		buffer.append("</div>")
		return buffer.to_s
	end
end

redef class MSignature
	private fun get_html_signature(page: NitdocPage): String do
		var buffer = new Buffer
		if not mparameters.is_empty then
			buffer.append("(")
			for i in [0..mparameters.length[ do
				buffer.append(mparameters[i].get_html_link(page))
				if i < mparameters.length - 1 then buffer.append(", ")
			end
			buffer.append(")")
		end
		if return_mtype != null then
			buffer.append(": ")
			var buf = new Buffer
			return_mtype.html_link(page, buf)
			buffer.append(buf.to_s)
		end
		return buffer.to_s
	end

	private fun untyped_signature(page: NitdocPage): String do
		var res = new Buffer
		if not mparameters.is_empty then
			res.append("(")
			for i in [0..mparameters.length[ do
				res.append(mparameters[i].name)
				if i < mparameters.length - 1 then res.append(", ")
			end
			res.append(")")
		end
		return res.to_s
	end
end

redef class MParameter
	private fun get_html_link(page: NitdocPage): String do
		var buffer = new Buffer
		buffer.append("{name}: ")
		var buf = new Buffer
		mtype.html_link(page, buf)
		buffer.append(buf.to_s)
		if is_vararg then buffer.append("...")
		return buffer.to_s
	end
end

#
# Nodes redefs
#

redef class Location
	fun github(gitdir: String): String do
		var base_dir = getcwd.join_path(gitdir).simplify_path
		var file_loc = getcwd.join_path(file.filename).simplify_path
		var gith_loc = file_loc.substring(base_dir.length + 1, file_loc.length)
		return "{gith_loc}:{line_start},{column_start}--{line_end},{column_end}"
	end
end

redef class ADoc
	private fun short_comment: String do
		return n_comment.first.text.substring_from(2).replace("\n", "").html_escape
	end

	private fun full_comment: String do
		var res = new Buffer
		for t in n_comment do
			var text = t.text
			text = text.substring_from(1)
			if text.first == ' ' then text = text.substring_from(1)
			res.append(text.html_escape)
		end
		var str = res.to_s
		return str.substring(0, str.length - 1)
	end
end

redef class AModule
	private fun short_comment: String do
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			return n_moduledecl.n_doc.short_comment
		end
		return ""
	end

	private fun full_comment: String do
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			return n_moduledecl.n_doc.full_comment
		end
		return ""
	end

	private fun full_markdown: String do
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			return n_moduledecl.n_doc.full_markdown.html
		end
		return ""
	end

	# The doc location or the first line of the block if doc node is null
	private fun doc_location: Location do
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			return n_moduledecl.n_doc.location
		end
		var l = location
		return new Location(l.file, l.line_start, l.line_start, l.column_start, l.column_start)
	end
end

redef class AStdClassdef
	private fun short_comment: String do
		if n_doc != null then return n_doc.short_comment
		return ""
	end

	private fun full_comment: String do
		if n_doc != null then return n_doc.full_comment
		return ""
	end

	private fun full_markdown: String do
		if n_doc != null then return n_doc.full_markdown.html
		return ""
	end

	# The doc location or the first line of the block if doc node is null
	private fun doc_location: Location do
		if n_doc != null then return n_doc.location
		var l = location
		return new Location(l.file, l.line_start, l.line_start, l.column_start, l.column_start)
	end
end

redef class APropdef
	private fun short_comment: String do
		if n_doc != null then return n_doc.short_comment
		return ""
	end

	private fun full_comment: String do
		if n_doc != null then return n_doc.full_comment
		return ""
	end

	private fun full_markdown: String do
		if n_doc != null then return n_doc.full_markdown.html
		return ""
	end

	private fun doc_location: Location do
		if n_doc != null then return n_doc.location
		var l = location
		return new Location(l.file, l.line_start, l.line_start, l.column_start, l.column_start)

	end
end


var nitdoc = new NitdocContext
nitdoc.generate_nitdoc
