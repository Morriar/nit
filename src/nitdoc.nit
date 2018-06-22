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

# Generator of static API documentation for the Nit language
#
# Generate API documentation in HTML format from Nit source code.
module nitdoc

import doc_tool
import doc::static

redef class ToolContext

	# Directory where the Nitdoc is rendered
	var opt_dir = new OptionString("Output directory", "-d", "--dir")

	# Use a shareurl instead of copy shared files
	#
	# This is usefull if you don't want to store the Nitdoc templates with your
	# documentation.
	var opt_shareurl = new OptionString("Use shareurl instead of copy shared files", "--shareurl")

	# Use a custom title for the homepage
	var opt_custom_title = new OptionString("Custom title for homepage", "--custom-title")

	# Display a custom brand or logo in the documentation top menu
	var opt_custom_brand = new OptionString("Custom link to external site", "--custom-brand")

	# Display a custom introduction text before the packages overview
	var opt_custom_intro = new OptionString("Custom intro text for homepage", "--custom-overview-text")

	# Display a custom footer on each documentation page
	#
	# Generally used to display the documentation or product version.
	var opt_custom_footer = new OptionString("Custom footer text", "--custom-footer-text")

	# Piwik tracker URL
	#
	# If you want to monitor your visitors.
	var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: `nitlanguage.org/piwik/`)", "--piwik-tracker")

	# Piwik tracker site id
	var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	# Do not generate dot/graphviz diagrams
	var opt_nodot = new OptionBool("Do not generate graphs with graphviz", "--no-dot")

	# Do not include highlighted code
	var opt_nocode = new OptionBool("Do not generate code with nitlight", "--no-code")

	# File pattern used to link documentation to source code.
	var opt_source = new OptionString("Format to link source code (%f for filename, " +
		"%l for first line, %L for last line) only works with option --no-code", "--source")

	# Disable HTML rendering
	var opt_norender = new OptionBool("DO not render any HTML", "--no-render")

	# Test mode
	#
	# Display test data and remove the progress bar
	var opt_test = new OptionBool("Output test data", "--test")

	redef init do
		super
		option_context.add_option(
			opt_share_dir, opt_shareurl, opt_custom_title,
			opt_custom_footer, opt_custom_intro, opt_custom_brand,
			opt_piwik_tracker, opt_piwik_site_id,
			opt_nodot, opt_nocode, opt_source, opt_norender, opt_test)
	end
end

redef class DocModel

	# Generate a documentation page
	fun gen_page(page: DocPage, output_dir: String) do
		page.apply_structure(self)
		page.render(self).write_to_file("{output_dir}/{page.html_url}")
	end
end

# Nitdoc phase explores the model and generate pages for each mentity found
class Nitdoc
	super DocTool

	redef fun tool_description do
		var tpl = new Template
		tpl.add "Usage: nitdoc [OPTION]... <file.nit>...\n"
		tpl.add "Generates HTML pages of API documentation from Nit source files."
		return tpl.write_to_string
	end

	redef var mdoc_post_processors is lazy do
		var processors = super
		processors.add new MDocProcessImages(output_dir, "/")
		return processors
	end

	# Static documentation to build
	var doc = new DocModel(model, mainmodule, modelbuilder, catalog, filter) is lazy

	# Output directory
	var output_dir: String = toolcontext.opt_dir.value or else "doc"

	redef fun execute do

		var test_mode = toolcontext.opt_test.value
		var no_render = toolcontext.opt_norender.value

		doc.no_dot = toolcontext.opt_nodot.value
		doc.no_code = toolcontext.opt_nocode.value
		doc.code_url = toolcontext.opt_source.value
		doc.share_url = toolcontext.opt_shareurl.value
		doc.custom_brand = toolcontext.opt_custom_brand.value
		doc.custom_title = toolcontext.opt_custom_title.value
		doc.custom_footer = toolcontext.opt_custom_footer.value
		doc.custom_intro = toolcontext.opt_custom_intro.value
		doc.tracker_url = toolcontext.opt_piwik_tracker.value
		doc.piwik_site_id = toolcontext.opt_piwik_site_id.value

		# Prepare output dir
		if not no_render then
			output_dir.mkdir
			# Copy assets
			var share_dir = toolcontext.opt_share_dir.value or else "{toolcontext.share_dir}/nitdoc"
			sys.system("cp -r -- {share_dir.escape_to_sh}/* {output_dir.escape_to_sh}/")
		end

		# Collect model to document
		var mpackages = model.collect_mpackages(filter)
		var mgroups = model.collect_mgroups(filter)
		var nmodules = model.collect_mmodules(filter)
		var mclasses = model.collect_mclasses(filter)
		var mprops = model.collect_mproperties(filter)

		var mentities = new Array[MEntity]
		mentities.add_all mpackages
		mentities.add_all mgroups
		mentities.add_all nmodules
		mentities.add_all mclasses
		mentities.add_all mprops

		var persons = doc.catalog.persons
		var tags = doc.catalog.tag2proj.keys

		# Prepare progress bar
		var count = 0
		var pages = 1 # count homepage
		pages += mentities.length
		pages += persons.length
		pages += tags.length

		print "Generating documentation pages..."
		var progress = new TermProgress(pages, 0)
		if not test_mode then progress.display

		# Make pages
		count += 1
		if not test_mode then progress.update(count, "homepage")
		if not no_render then doc.gen_page(new PageHome("Overview"), output_dir)

		for mentity in mentities do
			count += 1
			if not test_mode then progress.update(count, "page {count}/{pages}")
			if not no_render then doc.gen_page(new PageMEntity(mentity), output_dir)
		end
		for name, person in persons do
			count += 1
			if not test_mode then progress.update(count, "page {count}/{pages}")
			if not no_render then doc.gen_page(new PagePerson(person), output_dir)
		end
		for tag in tags do
			count += 1
			if not test_mode then progress.update(count, "page {count}/{pages}")
			if not no_render then doc.gen_page(new PageTag(tag), output_dir)
		end

		if not test_mode then  print "" # finalise progress
		if not no_render then
			doc.create_index_file("{output_dir}/quicksearch-list.js")
			print "Documentation produced in `{output_dir}`"
		end

		if test_mode then
			print "Generated {count}/{pages} pages"
			print " PageHome: 1"
			print " PageMPackage: {mpackages.length}"
			print " PageMGroup: {mgroups.length}"
			print " PageMModule: {nmodules.length}"
			print " PageMClass: {mclasses.length}"
			print " PageMProperty: {mprops.length}"
			print " PagePerson: {persons.length}"
			print " PageTag: {tags.length}"
		end
	end
end

var nitdoc = new Nitdoc
nitdoc.start
