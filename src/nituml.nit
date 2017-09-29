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

# UML generator in dot format.
module nituml

import modelbuilder
import frontend
import frontend::parse_examples
import uml

redef class ToolContext

	# Phase that generates UML diagrams from model entities.
	var umlphase: Phase = new UMLPhase(self, [examples_phase])

	# --center
	var opt_center = new OptionString("If this option is set, generate a diagram" +
		"only for this entity full name", "-c", "--center")

	# --pdepth
	var opt_pdepth = new OptionInt("Limit the depth of drawn parents (default is no limit)",
		-1, "--pdepth")

	# --cdepth
	var opt_cdepth = new OptionInt("Limit the depth of drawn children (default is no limit)",
		-1, "--cdepth")

	# --max-parents
	var opt_max_parents = new OptionInt("Limit the number of drawn direct parents for each" +
		"entity (default no limit)", -1, "--max-parents")

	# --max-children
	var opt_max_children = new OptionInt("Limit the number of drawn direct children for each" +
		"entity (default no limit)", -1, "--max-children")

	# --ortho-edges
	var opt_ortho_edges = new OptionBool("Use orthogonal edges", "--ortho-edges")

	# --no-colors-modules
	var opt_no_colors = new OptionBool("Do not use colors", "--no-colors")

	# --no-cluster-packages
	var opt_no_cluster_packages = new OptionBool("Do not clusterize groups into packages",
		"--no-cluster-packages")

	# --no-cluster-groups
	var opt_no_cluster_groups = new OptionBool("Do not clusterize modules into groups",
		"--no-cluster-groups")

	# --no-cluster-modules
	var opt_no_cluster_modules = new OptionBool("Do not clusterize classes into modules",
		"--no-cluster-modules")

	# --no-compact-groups
	var opt_no_compact_groups = new OptionBool("Do not compact groups modules into packages",
		"--no-compact-groups")

	# --no-compact-modules
	var opt_no_compact_modules = new OptionBool("Do not compact classes into modules",
		"--no-compact-modules")

	# --hide-groups
	var opt_hide_groups = new OptionBool("Hide groups inside packages",
		"--hide-groups")

	# --hide-modules
	var opt_hide_modules = new OptionBool("Hide modules inside groups",
		"--hide-modules")

	# --hide-classes
	var opt_hide_classes = new OptionBool("Hide classes and classdefs inside modules",
		"--hide-classes")

	# --hide-vtypes
	var opt_hide_vtypes = new OptionBool("Hide virtual types in classes and classdefs",
		"--hide-vtypes")

	# --hide-attributes
	var opt_hide_attributes = new OptionBool("Hide attributes inside classes and classdefs",
		"--hide-attributes")

	# --hide-methods
	var opt_hide_methods = new OptionBool("Hide methods inside classes and classdefs",
		"--hide-methods")

	# --hide-types
	var opt_hide_types = new OptionBool("Hide types in classes and methods signatures",
		"--hide-types")

	# --hide-visibility
	var opt_hide_visibility = new OptionBool("Hide visibility markers for classes and properties",
		"--hide-visibility")

	# --show-accessors
	var opt_show_accessors = new OptionBool("Show getters and setters",
		"--show-accessors")

	# --show-redefs
	var opt_show_redefs = new OptionBool("Show redefinitions",
		"--show-redefs")

	# --show-examples
	var opt_show_examples = new OptionBool("Show entities annotated with `is example`",
		"--show-examples")

	# --show-tests
	var opt_show_tests = new OptionBool("Show entities annotated with `is test`",
		"--show-tests")

	# What to generate?
	var opt_gen = new OptionEnum(["packages", "groups", "modules", "classes", "classdefs"], "Choose which type of uml diagram to generate", 0, "--diagram")

	# Generate private?
	var opt_privacy = new OptionBool("Generates private API", "-p", "--private")

	# Show result with dot
	var opt_show = new OptionBool("Show result with dot", "-s", "--show")

	redef init do
		option_context.add_option(
			opt_pdepth, opt_cdepth, opt_max_parents, opt_max_children,
			opt_no_colors, opt_no_compact_groups, opt_no_compact_modules,
			opt_no_cluster_packages, opt_no_cluster_groups, opt_no_cluster_modules,
			opt_hide_groups, opt_hide_modules, opt_hide_classes, opt_hide_vtypes,
			opt_hide_attributes, opt_hide_methods, opt_hide_types, opt_hide_visibility,
			opt_show_accessors, opt_show_redefs, opt_show_examples, opt_show_tests,
			opt_ortho_edges, opt_gen, opt_privacy, opt_show, opt_center)
		super
	end
end

private class UMLPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var model = toolcontext.modelbuilder.model

		var filter = new ModelFilter(
			min_visibility = if toolcontext.opt_privacy.value then
				private_visibility else protected_visibility,
			accept_test = toolcontext.opt_show_tests.value,
			accept_example = toolcontext.opt_show_examples.value,
			accept_redef = toolcontext.opt_show_redefs.value,
			accept_accessor = toolcontext.opt_show_accessors.value,
			accept_fictive = false
		)

		var uml_opts = new UMLDiagramOptions
		uml_opts.ortho_edges = toolcontext.opt_ortho_edges.value
		uml_opts.no_colors = toolcontext.opt_no_colors.value
		uml_opts.show_methods = not toolcontext.opt_hide_methods.value
		uml_opts.show_attributes = not toolcontext.opt_hide_attributes.value
		uml_opts.show_classes = not toolcontext.opt_hide_classes.value
		uml_opts.show_modules = not toolcontext.opt_hide_modules.value
		uml_opts.show_groups = not toolcontext.opt_hide_groups.value
		uml_opts.show_types = not toolcontext.opt_hide_types.value
		uml_opts.show_vtypes = not toolcontext.opt_hide_vtypes.value
		uml_opts.show_visibility = not toolcontext.opt_hide_visibility.value
		uml_opts.clusterize_groups = not toolcontext.opt_no_cluster_packages.value
		uml_opts.clusterize_modules = not toolcontext.opt_no_cluster_groups.value
		uml_opts.clusterize_classes = not toolcontext.opt_no_cluster_modules.value
		uml_opts.compact_groups = not toolcontext.opt_no_compact_groups.value
		uml_opts.compact_modules = not toolcontext.opt_no_compact_modules.value

		var max_parents = toolcontext.opt_max_parents.value
		uml_opts.max_parents = if max_parents < 0 then null else max_parents
		var max_children = toolcontext.opt_max_children.value
		uml_opts.max_children = if max_children < 0 then null else max_children

		var pdepth: nullable Int = toolcontext.opt_pdepth.value
		if pdepth != null and pdepth < 0 then pdepth = null
		var cdepth: nullable Int = toolcontext.opt_cdepth.value
		if cdepth != null and cdepth < 0 then cdepth = null

		var opt_center = toolcontext.opt_center.value
		var center: nullable MEntity = null
		if opt_center != null then
			center = model.mentity_by_full_name(opt_center)
			if center == null then
				print "Error: cannot find `{opt_center}`"
				exit 1
				return
			end
		end

		var diagram = new UMLDiagram(model, mainmodule, filter, uml_opts)

		uml_opts.clusterize_groups = false
		uml_opts.clusterize_modules = false
		uml_opts.clusterize_classes = false
		# uml_opts.show_methods = # false
		# uml_opts.show_attributes = false
		var mentities = new Array[MEntity]
		mentities.add model.mentity_by_full_name("markdown2::MdRenderer").as(not null)
		mentities.add model.mentity_by_full_name("markdown2::HtmlRenderer").as(not null)
		mentities.add model.mentity_by_full_name("markdown2::MarkdownRenderer").as(not null)
		mentities.add model.mentity_by_full_name("markdown2::ManRenderer").as(not null)
		mentities.add model.mentity_by_full_name("markdown2::LatexRenderer").as(not null)
		diagram.draw_mentities(mentities)
		diagram.draw_inheritance(mentities)
		# diagram.draw_parents(mentities, pdepth)
		# diagram.draw_children(mentities, pdepth)

		# if center != null then
		#	uml_opts.center = center
		#	diagram.draw_mentities([center])
		#	diagram.draw_parents([center], pdepth)
		#	diagram.draw_children([center], cdepth)
		# else
		#	var mentities = new HashSet[MEntity]
		#	if toolcontext.opt_gen.value == 0 then
		#		mentities.add_all model.collect_mpackages(filter)
		#	else if toolcontext.opt_gen.value == 1 then
		#		for mmodule in mmodules do
		#			var mgroup = mmodule.mgroup
		#			if mgroup != null and filter.accept_mentity(mmodule) then mentities.add(mgroup)
		#		end
		#	else if toolcontext.opt_gen.value == 2 then
		#		for mmodule in mmodules do
		#			if filter.accept_mentity(mmodule) then mentities.add(mmodule)
		#		end
		#	else if toolcontext.opt_gen.value == 3 then
		#		for mmodule in mmodules do
		#			mentities.add_all(mmodule.collect_intro_mclasses(filter))
		#		end
		#	else if toolcontext.opt_gen.value == 4 then
		#		for mmodule in mmodules do
		#			mentities.add_all(mmodule.collect_intro_mclassdefs(filter))
		#			mentities.add_all(mmodule.collect_redef_mclassdefs(filter))
		#		end
		#	else
		#		print "no diag"
		#	end
		#	diagram.draw_mentities(mentities)
		#	diagram.draw_parents(mentities, pdepth)
		#	diagram.draw_children(mentities, cdepth)
		# end
		var dot = diagram.to_dot
		print dot
		if toolcontext.opt_show.value then show_dot(dot)
	end

	# Show dot in graphviz (blocking)
	fun show_dot(dot: Writable) do
		var f = new ProcessWriter("dot", "-Txlib")
		f.write dot.write_to_string
		f.close
		f.wait
	end

	# fun generate_class_uml(view: ModelView, mclasses: Array[MClass]): Writable do
	#	var tpl = new Template
	#	tpl.add "digraph G \{\n"
	#	tpl.add """	fontname = "Bitstream Vera Sans"
	#			fontsize = 8
	#			node [
	#				fontname = "Bitstream Vera Sans"
	#				fontsize = 8
	#				shape = "record"
	#			]
    #
	#			edge [
	#				fontname = "Bitstream Vera Sans"
	#				fontsize = 8
	#			]\n"""
	#	for mclass in mclasses do
	#		tpl.add mclass.to_uml(view)
	#		tpl.add "\n"
	#	end
	#	tpl.add "\}"
	#	return tpl
	# end
end

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
