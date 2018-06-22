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
		var post_processors = super
		post_processors.add new MDocProcessImages(toolcontext, "/dev/null", "path")
		return post_processors
	end

	redef fun execute do
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
				mpackage.check_docdown(toolcontext)
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

redef class MPackage

	# README

	private fun check_readme(toolcontext: ToolContext) do
		if not has_readme then
			toolcontext.error(location, "No `README.md` file for `{name}`")
			return
		end
		# TODO check synchro from docdown
	end

	private fun check_docdown(toolcontext: ToolContext) do
		if not has_docdown then
			toolcontext.error(location, "No `README.docdown` file for `{name}`")
			return
		end
		var mdoc = mdoc_or_fallback
		if mdoc == null then
			toolcontext.error(location, "No `mdoc` for `{name}`")
			return
		end
		mdoc.mdoc_document
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

class MDocChecker
	super MdVisitor

	var toolcontext: ToolContext

	private var current_mentity: MEntity is noinit

	private var current_mdoc: MDoc is noinit

	fun check_mdoc(mentity: MEntity) do
		var mdoc = mentity.mdoc_or_fallback
		if mdoc == null then
			toolcontext.error(mentity.location, "No `mdoc` for `{mentity.name}`")
			return
		end

		self.current_mdoc = mdoc
		self.current_mentity = mentity

		var document = mdoc.mdoc_document
		check_synopsis(document)
		enter_visit(document)
	end

	fun check_synopsis(document: MdDocument) do
		if not current_mentity isa MPackage then return

		var first = document.first_child
		if not first isa MdHeading then
			print "no heading"
			return
		end
		if first.level != 1 then
			print "no level 1"
			return
		end
	end

	redef fun visit(node) do node.check_mdoc(self)
end

redef class MdNode
	fun check_mdoc(v: MDocChecker) do visit_all(v)
end

redef class MdCode
	redef fun check_mdoc(v) do
		# print literal
		super
	end
end

redef class MdCodeBlock
	redef fun check_mdoc(v) do
		if info != null and info != "nit" then return

		var ast = nit_ast
		if ast == null then return

		if ast isa AError then
			var offset = 0
			var mdoc_location = v.current_mdoc.location
			var location = new Location(
				mdoc_location.file,
				self.location.line_start + offset + 1 + ast.location.line_start,
				self.location.line_start + offset + 1 + ast.location.line_end,
				self.location.column_start + ast.location.column_start - 2,
				self.location.column_start + ast.location.column_end - 2)
			v.toolcontext.warning(location, "mdoc-check", ast.message)
			v.toolcontext.check_errors
		end
		super
	end
end

redef class MdWikilink
	redef fun check_mdoc(v) do
		print "wik"
		super
	end
end

var nitreadme = new NitReadme
nitreadme.start
