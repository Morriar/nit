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
import doc::templates::md_commands
import mdoc_index

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
		# post_processors.add new MDocProcessMEntityLinks(toolcontext, model, mainmodule)
		post_processors.add new MDocProcessTextReferences(toolcontext, model, mainmodule)
		post_processors.add new MDocProcessCommands(toolcontext, cmd_parser)
		post_processors.add new MDocProcessImages(toolcontext, "/dev/null", "path")
		post_processors.add new MDocProcessSummary
		return post_processors
	end

	redef fun execute do

		var nlp_proc = new NLPClient("http://localhost:9000")
		var mdoc_index = new CommentsIndex(nlp_proc)
		mdoc_index.index_model(model)

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
				mpackage.check_docdown(toolcontext, mdoc_index)
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
			accept_broken = false
		)

		for mentity in model.collect_mentities(filter) do
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

	private fun check_docdown(toolcontext: ToolContext, index: CommentsIndex) do
		# if not has_docdown then
			# toolcontext.error(location, "No `README.docdown` file for `{name}`")
			# return
		# end
		var mdoc = mdoc_or_fallback
		if mdoc == null then
			toolcontext.error(location, "No `mdoc` for `{name}`")
			return
		end
		# mdoc.mdoc_document
		# var aligner = new MDocAligner(toolcontext.modelbuilder.model)
		# aligner.align(mdoc)

		# for doc in index.documents do
			# if doc.mentity.full_name.has_prefix("vsm") then
				# print doc.mentity.full_name
				# print doc.tfidf.tmp.join(", ", ": ")
				# print ""
			# end
		# end

		var test = new SuggestVisitor(index, self)
		test.enter_visit(mdoc.mdoc_document)

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

class SuggestVisitor
	super MdVisitor

	var mdoc_index: CommentsIndex

	var mpackage: MPackage

	redef fun visit(node) do
		if node isa MdHeading or node isa MdParagraph then
			var v = new RawTextVisitor
			var text = v.render(node)
			print text
			print ""
			var matches = mdoc_index.match_string(text)
			var i = 0

			var res = new Array[vsm::IndexMatch[MDocDocument]]
			var avg = 0.0
			var std = 0.0
			for match in matches do
				if not match.document.mentity.full_name.has_prefix("{mpackage.full_name}::") then continue
				if match.document.mentity.full_name.has_suffix("=") then continue
				res.add match
				avg += match.similarity
			end
			avg = avg / matches.length.to_f
			for r in res do
				std += (r.similarity - avg).pow(2.0)
			end
			std = (std / matches.length.to_f).sqrt
			print avg
			print std

			var th = avg + std
			print th

			for match in res do
				if match.similarity < th then continue
				# if i >= 3 then break
				print "> {match}"
				print "  {match.document.tfidf}"
				i += 1
			end
			print ""
			return
		end
		node.visit_all(self)
	end
end

class MDocAligner
	super MdVisitor

	var model: Model is writable

	var filter: nullable ModelFilter = null is optional, writable

	private var references_visitor = new MDocReferencesVisitor is lazy

	fun align(mdoc: MDoc) do
		enter_visit mdoc.mdoc_document
		print "Block: {total_block}, Spans: {total_spans}, Texts: {total_texts}, MEntities: {total_matches}"
	end

	var total_block = 0
	var total_spans = 0
	var total_texts = 0
	var total_matches = 0

	redef fun visit(node) do
		if node isa MdHeading or node isa MdParagraph then
			total_block += 1
			var mentities = references_visitor.collect_mentities(node)
			total_spans += references_visitor.spans
			total_texts += references_visitor.texts
			total_matches += mentities.length

			if references_visitor.texts > 0 then
				var renderer = new MarkdownRenderer
				var md = renderer.render(node)
				print md
				print ""
				print "{references_visitor.spans} spans"
				for mentity in mentities do
					print "> {mentity.full_name}"
				end
				print ""
				print ""
			end
		end
		node.visit_all(self)
	end
end

class MDocReferencesVisitor
	super MdVisitor

	var spans = 0
	var texts = 0

	private var mentities: Array[MEntity] is noinit

	fun collect_mentities(node: MdNode): Array[MEntity] do
		spans = 0
		texts = 0
		mentities = new Array[MEntity]
		enter_visit(node)
		return mentities
	end

	redef fun visit(node) do node.extract_references(self)
end

redef class MdNode
	private fun extract_references(v: MDocReferencesVisitor) do visit_all(v)
end

redef class MdCode
	redef fun extract_references(v) do
		v.spans += 1
		var mentity = self.nit_mentity
		if mentity == null then return
		v.mentities.add mentity
	end
end

redef class MdText
	redef fun extract_references(v) do
		v.texts += 1
		v.mentities.add_all nit_mentities
	end
end

var nitreadme = new NitReadme
nitreadme.start
