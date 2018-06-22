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

module doc_tool

import frontend
import doc::commands

redef class ToolContext
	# --no-private
	var opt_no_private = new OptionBool("Do not show private entities", "--no-private")

	init do
		super
		option_context.add_option(opt_no_private)
	end
end

class DocTool

	# Tool options

	# Tool usage description
	var tool_description: String do
		var tpl = new Template
		tpl.add "Usage: doctool [OPTION]... <file.nit>...\n"
		tpl.add "A tool about documentation."
		return tpl.write_to_string
	end

	# Tool context
	var toolcontext: ToolContext is noinit

	# Tool arguments from command line
	#
	# Without parsed options.
	var arguments: Array[String] is noinit

	# Parse options
	#
	# Initializes the `toolcontext` and `arguments`.
	private fun parse_options do
		var toolcontext = new ToolContext
		toolcontext.tooldescription = tool_description.write_to_string
		toolcontext.process_options(args)
		self.toolcontext = toolcontext
		self.arguments = toolcontext.option_context.rest
	end

	# Tool model

	# Tool model containing the entities to document
	var model: Model is noinit

	# ModelBuilder used to build `model`
	var modelbuilder: ModelBuilder is noinit

	# MModules from command line
	var mmodules: Array[MModule] is noinit

	# Mainmodule used for linearization
	var mainmodule: MModule is noinit

	# Parse the code
	#
	# Initializes the `model`, `modelbuilder`, `mmodules` and `mainmodule`.
	private fun parse_code do
		print "Parsing code..."
		var model = new Model
		var modelbuilder = new ModelBuilder(model,  toolcontext)
		var mmodules = modelbuilder.parse_full(arguments)
		if mmodules.is_empty then return
		modelbuilder.run_phases
		toolcontext.run_global_phases(mmodules)
		var mainmodule = toolcontext.make_main_module(mmodules)

		self.model = model
		self.modelbuilder = modelbuilder
		self.mmodules = mmodules
		self.mainmodule = mainmodule
	end

	# Model filter
	var filter = new ModelFilter(
		min_visibility = if toolcontext.opt_no_private.value then
			protected_visibility else private_visibility,
		accept_fictive = false,
		accept_attribute = true,
		accept_generated = true,
		accept_test = true,
		accept_redef = true,
		accept_extern = true,
		accept_empty_doc = true,
		accept_example = true,
		accept_broken = false) is lazy

	# Tool catalog of mpackages
	var catalog: Catalog is noinit

    # Parse the mpackages catalog
	#
	# Initializes the `catalog`.
	private fun parse_catalog do
		var catalog = new Catalog(modelbuilder)
		var mpackages = model.collect_mpackages(filter)
		# Compute the poset
		for p in mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			catalog.deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					catalog.deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in mpackages do
			catalog.package_page(mpackage)
			catalog.git_info(mpackage)
			catalog.mpackage_stats(mpackage)
		end
		self.catalog = catalog
	end

	# Tool MDoc handling

	# Commands parser for MDoc
	var cmd_parser: CommandParser is noinit

	# Makrdown parser for MDoc
	var mdoc_parser: MdParser is noinit

	# MDoc post-processors to apply
	#
	# Clients can redefine this list.
	var mdoc_post_processors: Array[MdPostProcessor] is lazy, writable do
		var post_processors = new Array[MdPostProcessor]
		post_processors.add new MDocProcessSynopsis
		post_processors.add new MDocProcessCodes
		post_processors.add new MDocProcessMEntityLinks(model, mainmodule)
		post_processors.add new MDocProcessCommands(cmd_parser, toolcontext)
		post_processors.add new MDocProcessSummary
		return post_processors
	end

	# Parse MDoc comments
	#
	# Intializes `cmd_parser` and `mdoc_parser`.
	fun parse_mdoc do
		var cmd_parser = new CommandParser(model, mainmodule, modelbuilder, catalog)
		self.cmd_parser = cmd_parser

		var mdoc_parser = new MdParser
		mdoc_parser.github_mode = true
		mdoc_parser.wikilinks_mode = true
		for post_processor in mdoc_post_processors do
			mdoc_parser.post_processors.add post_processor
		end
		model.mdoc_parser = mdoc_parser

		self.mdoc_parser = mdoc_parser
	end

	# Initialize the tool
	fun start do
		parse_options
		parse_code
		parse_catalog
		parse_mdoc
		execute
	end

	# Run the tool action
	#
	# Should not be called directly.
	# See `start`.
	protected fun execute do end
end
