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

# TODO use docdown.md instead of docdown
# TODO check codes
# TODO check link names
# TODO check commands

# TODO check all mdocs

module nitreadme

import doc::doc_tool
import suggest_insert
import name_index
import mentities_index

redef class ToolContext

	# --force
	var opt_force = new OptionBool("Force update of existing files", "-f", "--force")

	# --check-readme
	var opt_check_readme = new OptionBool("Check README.md files", "--check-readme")

	# --gen-readme
	var opt_gen_readme = new OptionBool("Generate README.md files", "--gen-readme")

	# --check-docdown
	var opt_check_docdown = new OptionBool("Check README.docdown.md files", "--check-docdown")

	# --copy-docdown
	var opt_copy_docdown = new OptionBool("Copy README.md files to README.docdown.md", "--copy-docdown")

	redef init do
		super
		option_context.add_option(opt_force)
		option_context.add_option(opt_check_readme, opt_gen_readme)
		option_context.add_option(opt_check_docdown, opt_copy_docdown)
	end
end

class NitReadme
	super DocTool

	redef var tool_description do
		var tpl = new Template
		tpl.add "Usage: nitpackage [OPTION]... <file.nit>...\n"
		tpl.add "Helpful features about packages."
		return tpl.write_to_string
	end

	redef var mdoc_post_processors is lazy do
		var post_processors = new Array[MdPostProcessor]
		post_processors.add new MDocProcessSynopsis(toolcontext)
		post_processors.add new MDocProcessCodes(toolcontext)
		post_processors.add new MDocProcessMEntityLinks(toolcontext, model, mainmodule)
		post_processors.add new MDocProcessTextReferences(toolcontext, model, mainmodule)
		post_processors.add new MDocProcessCommands(toolcontext, cmd_parser)
		post_processors.add new MDocProcessImages(toolcontext, "/dev/null", "path")
		post_processors.add new MDocProcessSummary
		return post_processors
	end

	redef fun execute do

		var nlp_proc = new NLPClient("http://localhost:9000")
		# var mdoc_index = new CommentsIndex(nlp_proc)
		# mdoc_index.index_model(model)

		# var name_index = new NameIndex(nlp_proc, null, toolcontext)
		# for mentity in model.collect_mentities(filter) do
			# if mentity isa MModule or mentity isa MClassDef then
				# name_index.index_mentity(mentity)
			# end
		# end
		# name_index.update_index

		var mentity_index = new MEntityIndex(toolcontext, nlp_proc)
		mentity_index.index_model(model, null)

		# var v = new Vector
		# v.inc "full_name: vsm"
		# v.inc "name: index"
		# v.inc "boost: full_name"
		# v.inc "boost: full_name: vsm"
		# v.inc "boost: full_name; 5"
		# v.inc "boost: full_name: vsm; 10"
		# v.inc "-in: core::flat"
		# v.inc "name: VSMIndex"
		# v.inc "name: vsm"
		# v.inc "full_name: vsm::StringIndex"
		# v.inc "sign: IndexMatch"
		# v.inc "sign: auto"
		# v.inc "sign: update"
		# v.inc "sign: IndexMatch"
		# v.inc "sign: similarity"
		# v.inc "in: vsm"
		# v.inc "!visibility: private"
		# v.inc "!kind: MClassDef"
		# v.inc "!kind: MPropDef"
		# v.inc "kind: MProperty"
		# v.inc "kind: MMethod"
		# v.inc "!kind: MMethodDef"
		# v.inc "!setter: true"
		# v.inc "name: inversed_index"
		# v.inc "name: inversed_index"
		# v.inc "kind: MAttribute"
		# v.inc "!is_intro: false"
		# v.inc "nlp: Vector"
		# v.inc "nlp: cosine"
		# v.inc "nlp: similarity"
		# v.inc ""
		# var i = 4
		# for match in mentity_index.match_vector(v) do
			# i -= 1
			# if i == 0 then break
			# print match
			# print match.document.terms_count
			# print ""
		# end
		# print "------------------"
		# if true then return

		# process packages
		var mpackages = extract_mpackages(mmodules)
		for mpackage in mpackages do

			# Fictive and buggy packages are ignored
			if not mpackage.has_source then
				toolcontext.warning(mpackage.location, "no-source",
					"Warning: `{mpackage}` has no source file")
				continue
			end

			# Check README.md
			if toolcontext.opt_check_readme.value then
				mpackage.check_readme(toolcontext)
				continue
			end

			# Check README.docdown
			if toolcontext.opt_check_docdown.value then
				mpackage.check_docdown(toolcontext, mainmodule, mentity_index)
				continue
			end

			# Copy README.md as README.docdown.md
			if toolcontext.opt_copy_docdown.value then
				if not mpackage.has_docdown or toolcontext.opt_force.value then
					var path = mpackage.copy_docdown(toolcontext)
					if path != null then
						toolcontext.info("copied README `{path}`", 0)
					end
				end
			end

			# Generate README.md
			if toolcontext.opt_gen_readme.value then
				if not mpackage.has_readme or toolcontext.opt_force.value then
					var path = mpackage.gen_readme(toolcontext, mainmodule)
					if path != null then
						toolcontext.info("generated README `{path}`", 0)
					end
				end
			end
		end
	end

	# Extract the list of packages from the mmodules passed as arguments
	fun extract_mpackages(mmodules: Collection[MModule]): Collection[MPackage] do
		var mpackages = new ArraySet[MPackage]
		for mmodule in mmodules do
			var mpackage = mmodule.mpackage
			if mpackage == null then continue
			mpackages.add mpackage
		end
		return mpackages.to_a
	end
end

class CommentsIndex
	super MDocIndex

	fun index_model(model: Model) do

		var filter = new ModelFilter(
			min_visibility = protected_visibility,
			accept_attribute = false,
			accept_fictive = false,
			accept_broken = false,
			accept_test = false,
			accept_example = false
		)

		for mentity in model.collect_mentities(filter) do
			if mentity isa MGroup and mentity.mpackage.root == mentity then continue
			if mentity isa MClassDef then continue
			if mentity isa MPropDef then continue
			index_mentity(mentity)
		end
		update_index
	end
end

redef class MPackage

	# README

	private fun check_readme(toolcontext: ToolContext) do
		if not has_readme then
			toolcontext.error(location, "No `README.md` file for `{name}`")
			return
		end
		# TODO check synchro from docdown
	end

	private fun check_docdown(toolcontext: ToolContext, mainmodule: MModule, mentity_index: MEntityIndex) do
		# if not has_docdown then
			# toolcontext.error(location, "No `README.docdown` file for `{name}`")
			# return
		# end
		var mdoc = mdoc_or_fallback
		if mdoc == null then
			toolcontext.error(location, "No `mdoc` for `{name}`")
			return
		end
		mdoc.mdoc_document
		# var aligner = new MDocAligner(toolcontext.modelbuilder.model)
		# aligner.align(mdoc)

		# for doc in index.documents do
			# if doc.mentity.full_name.has_prefix("vsm") then
				# print doc.mentity.full_name
				# print doc.tfidf.tmp.join(", ", ": ")
				# print ""
			# end
		# end

		var aligner = new MDocAligner(model, mainmodule, mentity_index, toolcontext.modelbuilder.model.mdoc_parser, self)
		aligner.align_mdoc(mdoc)

		# var suggest = new MDocSuggester(self, mentity_index)
		# suggest.suggest(mdoc.mdoc_document)

		# for mentity in model.collect_mentities do
			# var smdoc = mentity.mdoc_or_fallback
			# if smdoc != null then smdoc.mdoc_document
		# end
		# var checker = new MDocChecker(toolcontext)
		# checker.check_mdoc(self)
	end

	private fun copy_docdown(toolcontext: ToolContext): nullable String do
		if not has_readme then
			toolcontext.error(location, "No `README.md` file for `{name}`")
			return null
		end

		var readme_path = self.readme_path.as(not null)
		var docdown_path = self.docdown_path.as(not null)
		sys.system "cp {readme_path} {docdown_path}"
		return docdown_path
	end

	private fun gen_readme(toolcontext: ToolContext, mainmodule: MModule): nullable String do
		if not has_docdown then
			toolcontext.error(location, "No `README.docdown.md` file for `{name}`")
			return null
		end

		var model = toolcontext.modelbuilder.model

		var docdown_path = self.docdown_path.as(not null)
		var docdown = docdown_path.to_path.read_all

		var renderer = new MDocMdRenderer
		var ast = model.mdoc_parser.parse(docdown)
		ast.mdoc = mdoc_or_fallback
		model.mdoc_parser.post_process(ast)
		var md = renderer.render(ast)
		var readme_path = self.readme_path.as(not null)
		md.write_to_file(readme_path)
		return readme_path
	end
end

var nitreadme = new NitReadme
nitreadme.start
