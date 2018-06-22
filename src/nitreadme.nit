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

module nitreadme

import doc::doc_tool
import doc::templates::md_commands

redef class ToolContext

	# --force
	var opt_force = new OptionBool("Force update of existing files", "-f", "--force")

	# --check-readme
	var opt_check_readme = new OptionBool("Check README.md files", "--check-readme")

	# --check-docdown
	var opt_check_docdown = new OptionBool("Check README.docdown.md files", "--check-docdown")

	# --copy-docdown
	var opt_copy_docdown = new OptionBool("Copy README.md files to README.docdown.md", "--copy-docdown")

	redef init do
		super
		option_context.add_option(opt_force)
		option_context.add_option(opt_check_readme)
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
	end

	private fun check_docdown(toolcontext: ToolContext) do
		if not has_docdown then
			toolcontext.error(location, "No `README.docdown` file for `{name}`")
			return
		end
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
end

var nitreadme = new NitReadme
nitreadme.start
