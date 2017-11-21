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
#
# Generate API documentation in HTML format from nit source code.
module nitdoc

import doc::static
import counter

redef class ToolContext
	# Nitdoc generation phase.
	var docphase: Phase = new Nitdoc(self, null)

	# Directory where the Nitdoc is rendered.
	var opt_dir = new OptionString("Output directory", "-d", "--dir")

	# Do not generate documentation for attributes.
	var opt_no_attributes = new OptionBool("Ignore the attributes", "--no-attributes")

	# Do not generate documentation for private properties.
	var opt_private = new OptionBool("Also generate private API", "--private")

	# File pattern used to link documentation to source code.
	var opt_test = new OptionBool("Print test data (metrics and structure)", "--test")

	# Use a shareurl instead of copy shared files.
	#
	# This is usefull if you don't want to store the Nitdoc templates with your
	# documentation.
	var opt_shareurl = new OptionString("Use shareurl instead of copy shared files", "--shareurl")

	# Use a custom title for the homepage.
	var opt_custom_title = new OptionString("Custom title for homepage", "--custom-title")

	# Display a custom brand or logo in the documentation top menu.
	var opt_custom_brand = new OptionString("Custom link to external site", "--custom-brand")

	# Display a custom introduction text before the packages overview.
	var opt_custom_intro = new OptionString("Custom intro text for homepage", "--custom-overview-text")
	# Display a custom footer on each documentation page.
	#
	# Generally used to display the documentation or product version.
	var opt_custom_footer = new OptionString("Custom footer text", "--custom-footer-text")

	# Piwik tracker URL.
	#
	# If you want to monitor your visitors.
	var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: `nitlanguage.org/piwik/`)", "--piwik-tracker")

	# Piwik tracker site id.
	var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	# Do not produce HTML files
	var opt_no_render = new OptionBool("Do not render HTML files", "--no-render")

	redef init do
		super
		option_context.add_option(
			opt_dir, opt_no_attributes, opt_private, opt_test,
			opt_share_dir, opt_shareurl, opt_custom_title,
			opt_custom_footer, opt_custom_intro, opt_custom_brand,
			opt_piwik_tracker, opt_piwik_site_id,
			opt_no_render)
	end
end

# Nitdoc phase explores the model and generate pages for each mentities found
private class Nitdoc
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var min_visibility = private_visibility
		if not toolcontext.opt_private.value then min_visibility = protected_visibility
		var accept_attribute = true
		if toolcontext.opt_no_attributes.value then accept_attribute = false

		var catalog = new Catalog(toolcontext.modelbuilder)
		catalog.build_catalog(mainmodule.model.mpackages)

		var filters = new ModelFilter(
			min_visibility,
			accept_attribute = accept_attribute,
			accept_fictive = false)
		var doc = new DocModel(mainmodule.model, mainmodule, filters, toolcontext, toolcontext.modelbuilder, catalog)

		doc.share_url = toolcontext.opt_shareurl.value
		doc.custom_brand = toolcontext.opt_custom_brand.value
		doc.custom_title = toolcontext.opt_custom_title.value
		doc.custom_footer = toolcontext.opt_custom_footer.value
		doc.custom_intro = toolcontext.opt_custom_intro.value
		doc.tracker_url = toolcontext.opt_piwik_tracker.value
		doc.piwik_site_id = toolcontext.opt_piwik_site_id.value

		# Prepare output dir
		var output_dir = toolcontext.opt_dir.value or else "doc"
		output_dir.mkdir

		# Copy assets
		var share_dir = toolcontext.opt_share_dir.value or else "share/nitdoc"
		sys.system("cp -r -- {share_dir.escape_to_sh}/* {output_dir.escape_to_sh}/")

		# Make pages
		doc.add_page new PageHome("overview", "Overview")

		for mpackage in doc.model.collect_mpackages(doc.filter) do
			doc.add_page new PageMPackage(mpackage)
		end
		for mgroup in doc.model.collect_mgroups(doc.filter) do
			doc.add_page new PageMGroup(mgroup)
		end
		for mmodule in doc.model.collect_mmodules(doc.filter) do
			doc.add_page new PageMModule(mmodule)
		end
		for mclass in doc.model.collect_mclasses(doc.filter) do
			doc.add_page new PageMClass(mclass)
		end
		for mproperty in doc.model.collect_mproperties(doc.filter) do
			doc.add_page new PageMProperty(mproperty)
		end
		for name, person in doc.catalog.persons do
			doc.add_page new PagePerson(person)
		end
		for tag in doc.catalog.tag2proj.keys do
			doc.add_page new PageTag(tag)
		end

		doc.build_structure

		if not toolcontext.opt_no_render.value then
			doc.render_html(output_dir)
			doc.create_index_file("{output_dir}/quicksearch-list.js")
		end

		if toolcontext.opt_test.value then
			# Pages metrics
			var page_counter = new Counter[String]
			var pages = doc.pages.keys.to_a
			default_comparator.sort(pages)
			for title in pages do
				var page = doc.pages[title]
				page_counter.inc page.class_name
				# print page.pretty_print.write_to_string
			end
			print "Generated {doc.pages.length} pages"
			page_counter.print_elements(100)
			# Model metrics
			var model_counter = new Counter[String]
			var mentities = doc.model.collect_mentities(doc.filter)
			for mentity in mentities do
				model_counter.inc mentity.class_name
			end
			print "Found {mentities.length} mentities"
			model_counter.print_elements(100)
		end
	end
end

redef class Catalog

	# Build the catalog from `mpackages`
	fun build_catalog(mpackages: Array[MPackage]) do
		# Compute the poset
		for p in mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in mpackages do
			package_page(mpackage)
			git_info(mpackage)
			mpackage_stats(mpackage)
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitdoc [OPTION]... <file.nit>...\n"
tpl.add "Generates HTML pages of API documentation from Nit source files."
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
