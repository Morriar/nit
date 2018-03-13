# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module doc_cards

import cards::cards_base
import doc::commands

class ReadmeScaffolder

	var view: ModelView

	fun scaffold(mpackage: MPackage): Array[CardScaffolding] do
		var cards = new Array[CardScaffolding]

		var ini = mpackage.ini
		var cmd: DocCommand
		# cards.add new CardTitle(mpackage)

		var old_filters = view.filter
		view.filter = new ModelFilter(
			min_visibility = protected_visibility,
			accept_fictive = false,
			accept_redef = false,
			accept_extern = true,
			accept_attribute = false,
			accept_empty_doc = true,
			accept_test = false,
			accept_example = false)
		view.filter = old_filters
        #
		# cmd = new CmdFeatures(view, mpackage)
		# var res = cmd.init_command
		# if res isa CmdSuccess then
		#	cards.add new CardOverview(cmd.results)
		# end

		cmd = new CmdParents(view, mpackage)
		cmd.init_command
		var git = null
		if ini != null then
			git = ini["upstream.git"]
		end
		cards.add new CardGettingStarted(mpackage, cmd.results, git)

		old_filters = view.filter
		view.filter = new ModelFilter(
			min_visibility = protected_visibility,
			accept_fictive = false,
			accept_redef = false,
			accept_extern = false,
			accept_attribute = false,
			accept_empty_doc = true,
			accept_test = true,
			accept_example = false)
		view.filter = old_filters

		# cmd = new CmdFeatures(view, mpackage)
		# res = cmd.init_command
		# var results = cmd.results
		# var tests = new Array[MEntity]
		# if results != null then
		#	for mentity in results do
		#		if mentity.is_test then tests.add mentity
		#	end
		# end
		# if tests.not_empty then
		#	cards.add new CardTesting(tests)
		# end

		# if ini != null then
		#	var issues = ini["upstream.issues"]
		#	if issues != null then
		#		cards.add new CardIssues(issues)
		#	end
		# end

		# var git = null
		# if ini != null then
		#	git = ini["upstream.git"]
		# end
		# var source_file = mpackage.location.file
		# var contrib_file = null
		# if source_file != null then
		#	var file = source_file.filename / "CONTRIBUTING.md"
		#	if file.file_exists then contrib_file = file
		# end
		# if git != null or contrib_file != null then
		#	cards.add new CardContributing(git, contrib_file)
		# end

		# if ini != null then
		#	var license = ini["package.license"]
		#	if license != null then
		#		var source_file = mpackage.location.file
		#		var license_file = null
		#		if source_file != null then
		#			var file = source_file.filename / "LICENSE"
		#			if file.file_exists then license_file = file
		#		end
		#		cards.add new CardLicense(license, license_file)
		#	end
		# end

		# if ini != null then
		#	var maintainer = ini["package.maintainer"]
		#	var contributors = null
        #
		#	var contrib_string = ini["package.more_contributors"]
		#	if contrib_string != null then
		#		contributors = contrib_string.split(", ")
		#	end
		#	if maintainer != null or contributors != null then
		#		cards.add new CardAuthors(maintainer, contributors)
		#	end
		# end

		return cards
	end
end

abstract class CardScaffolding
	super DocCard
	serialize

	# Markdown content to insert into the document
	fun content: String is abstract

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_scaffolding", true)
		v.serialize_attribute("content", content)
	end
end

class CardTitle
	super CardScaffolding
	serialize

	redef var title = "Readme Title"
	redef var description = "Provide a good title and a short description of your project."

	var mentity: MEntity

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "# {mentity.full_name}\n"
		tpl.addn "**TODO**: Add a short description of your project.\n"
		return tpl.write_to_string
	end
end

class CardOverview
	super CardScaffolding
	serialize

	redef var title = "Project Overview"
	redef var description = "List the most interesting features of your project to explain what it does and why it is useful."

	var features: nullable Array[MEntity]

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "## Overview\n"

		tpl.addn "Main features:"
		var features = self.features
		if features != null then
			for mentity in features do
				tpl.add "* [[{mentity.full_name}]]"
				var mdoc = mentity.mdoc_or_fallback
				if mdoc != null then
					var synopsis = mdoc.synopsis
					if not synopsis.is_empty then
						tpl.add ": {mdoc.synopsis}"
					end
				end
				tpl.add "\n"
			end
			tpl.add "\n"
		end
		return tpl.write_to_string
	end
end

class CardGettingStarted
	super CardScaffolding
	serialize

	redef var title = "Project Installation & Compilation"
	redef var description = "Explain how a new user can obtain a working copy of your project and run it."

	var mpackage: MPackage

	var dependencies: nullable Array[MEntity]

	var git: nullable String

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "## Getting Started\n"

		tpl.addn "These instructions will get you a copy of the project up and running on your local machine.\n"

		var dependencies = self.dependencies
		if dependencies != null then
			tpl.addn "### Dependencies\n"
			tpl.addn "This project requires the following packages:"
			for mentity in dependencies do
				tpl.add "* [[{mentity.full_name}]]"
				var mdoc = mentity.mdoc_or_fallback
				if mdoc != null then
					var synopsis = mdoc.synopsis
					if not synopsis.is_empty then
						tpl.add ": {mdoc.synopsis}"
					end
				end
				tpl.add "\n"
			end
			tpl.add "\n"
		end

		var git = self.git
		if git != null then
			tpl.addn "### Getting the sources\n"
			tpl.addn "~~~sh"
			tpl.addn "$> git clone {git}"
			tpl.addn "~~~\n"
		end

		tpl.addn "### Compiling\n"
		# TODO compilation string, find main

		tpl.addn "### Running\n"
		# TODO command line string, run main
		# TODO find options

		return tpl.write_to_string
	end
end

class CardTesting
	super CardScaffolding
	serialize

	redef var title = "Testing"
	redef var description = "Explain how to run the nitunits for your project."

	var tests: Array[MEntity]

	redef var content is lazy do

		var tpl = new Template
		tpl.addn "## Running the tests\n"
		tpl.addn "Run the nitunit automated tests with the following command:\n"

		tpl.addn "~~~sh"
		tpl.add "nitunit "
		for test in tests do
			var file = test.location.file
			if file == null then continue
			tpl.add file.filename
			if test != tests.last then tpl.add ", "
		end
		tpl.addn "\n~~~\n"

		return tpl.write_to_string
	end
end

class CardIssues
	super CardScaffolding
	serialize

	redef var title = "Issues"
	redef var description = "Explain how your users can contact you or raise an issue."

	var url: String

	redef var content is lazy do
		var url_title = url
		if url.has("github.com") then url_title = "GitHub"

		var tpl = new Template
		tpl.addn "## Issues\n"
		tpl.addn "Raise an issue or ask a question on [{url_title}]({url}).\n"
		return tpl.write_to_string
	end
end

class CardContributing
	super CardScaffolding
	serialize

	redef var title = "Contributing"
	redef var description = "Explain how other users can contribute to your project."

	var git: nullable String
	var contrib_file: nullable String

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "## Contributing\n"

		var git = self.git
		if git != null then
			var url_title = git
			if git.has("github.com") then url_title = "GitHub"
			tpl.addn "This project is versioned with git."
			tpl.addn "We accept pull requests on [{url_title}]({git}).\n"
		end

		var file = self.contrib_file
		if file != null then
			# TODO link to nitweb
			tpl.addn "Please read [CONTRIBUTING.md]({file}) for details on our code of conduct, and the process for submitting pull requests to us."
		end
		tpl.add "\n"

		return tpl.write_to_string
	end
end

class CardAuthors
	super CardScaffolding
	serialize

	redef var title = "Authors"
	redef var description = "List the authors and contributors of your project."

	var maintainer: nullable String
	var contributors: nullable Array[String]

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "## Authors\n"

		var maintainer = self.maintainer
		if maintainer != null then
			tpl.addn "* {maintainer} - *maintainer*"
		end

		var contributors = self.contributors
		if contributors != null and contributors.not_empty then
			for contributor in contributors do
				tpl.addn "* {contributor} - *contributor*"
			end
		end
		tpl.add "\n"
		return tpl.write_to_string
	end
end

class CardLicense
	super CardScaffolding
	serialize

	redef var title = "License"
	redef var description = "Give the license of your project so your users know how they may use it."

	var license: String
	var license_file: nullable String

	redef var content is lazy do
		var tpl = new Template
		tpl.addn "## License\n"

		tpl.addn "This project is licensed under the **{license} license**."

		var file = self.license_file
		if file != null then
			# TODO link to nitweb
			tpl.addn "See the [LICENSE.md]({file}) file for details.\n"
		end
		return tpl.write_to_string
	end
end
