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

module mdoc_phase

import frontend
import parse_examples
import index_phase
import catalog_phase

import doc::down

redef class ToolContext

	var opt_doc_output_path =
		new OptionString("Path where the doc resources are copied", "--doc-tmp-path")

	var opt_doc_resources_path =
		new OptionString("Prefix path to the tmp directory", "--doc-resources-path")

	var default_output_path: nullable String = null

	var default_resources_path: nullable String = null

	init do
		option_context.add_option opt_doc_output_path
		option_context.add_option opt_doc_resources_path
	end

	var mdoc_phase = new MDocPhase(self, [examples_phase])#, catalog_phase, index_phase])

	var mdoc_parser: MdParser is lazy do
		var mdoc_parser = new MdParser
		mdoc_parser.github_mode = true
		mdoc_parser.wikilinks_mode = true
		return mdoc_parser
	end

	var mdoc_phases: Array[MdPhase] is lazy do
		var res = new Array[MdPhase]
		res.add new SynopsisPhase(self)
		res.add new CheckResourcesPhase(self)
		res.add new CodesPhase(self)
		res.add new CommandsPhase(self)
		res.add new SummariesPhase(self)
		return res
	end

	fun parse_markdown(context: MEntity, markdown: String): MdDocument do
		var document = mdoc_parser.parse(markdown)
		for mdoc_phase in mdoc_phases do
			mdoc_phase.process_ast(context, document)
		end
		return document
	end
end

class MDocPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		var model = toolcontext.modelbuilder.model

		toolcontext.cmd_parser = new CommandParser(
			model,
			mainmodule,
			toolcontext.modelbuilder,
			toolcontext.catalog)

		toolcontext.mdoc_phases.add new ReferencesPhase(toolcontext, mainmodule)

		var mentities = new Array[MEntity]
		mentities.add_all model.collect_mgroups
		mentities.add_all model.collect_mmodules
		mentities.add_all model.collect_mclassdefs
		mentities.add_all model.collect_mpropdefs
		for mentity in mentities do process_mentity(mentity)
	end

	fun process_mentity(mentity: MEntity) do
		var mdoc = mentity.mdoc
		if mdoc == null then
			do
				if mentity.is_fictive then return
				if mentity.is_test then return
				if mentity.is_example then return
				if mentity isa MPropDef then
					if not mentity.is_intro then return
					if mentity.mclassdef.is_test then return
					if mentity.mclassdef.mmodule.mdoc == null then return
					if mentity.mclassdef.mmodule.is_example then return
					if mentity.mproperty.visibility == private_visibility then return
					if mentity isa MMethodDef then
						if mentity.mproperty.is_setter then return
						if mentity.mproperty.is_init then return
						if mentity.is_extern then return
					end
				else if mentity isa MClassDef then
					if not mentity.is_intro then return
					if mentity.mmodule.mdoc == null then return
					if mentity.mmodule.is_test then return
					if mentity.mmodule.is_example then return
					if mentity.mclass.visibility == private_visibility then return
				end
			end
			toolcontext.warning(mentity.location, "doc-missing",
				"No MDoc for public entity `{mentity}`")
			return
		end
		mdoc.mdoc_document = toolcontext.parse_markdown(mentity, mdoc.content.join("\n"))
	end
end

redef class MDoc
	# Markdown AST of the MDoc content
	var mdoc_document: MdDocument is noinit

	# Markdown AST of the synopsis node if any
	var mdoc_synopsis: nullable MdHeading is lazy do
		var ast = mdoc_document
		var first = ast.first_child
		if not first isa MdHeading then return null
		return first
	end

	# Markdown AST of the MDoc content without the synopsis
	var mdoc_comment: Array[MdNode] is lazy do
		var res = new Array[MdNode]
		var ast = mdoc_document
		var synopsis = mdoc_synopsis
		var node = ast.first_child
		while node != null do
			if node != synopsis then res.add node
			node = node.next
		end
		return res
	end
end
