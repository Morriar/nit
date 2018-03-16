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

import doc::cards::cards_base
import doc::commands

class ReadmeScaffolder

	var view: ModelView

	var md_processor: MarkdownProcessor

	fun scaffold(mpackage: MPackage): Array[CardScaffolding] do
		var cards = new Array[CardScaffolding]

		# TODO card tips

		# README title
		# TODO no desc
		cards.add new CardTitle(md_processor, mpackage)

		# Overview
		# TODO no features
		cards.add new CardOverview(md_processor, mpackage)


		# Getting started
		# TODO no nitc, no main, no run, no opts
		var mains = new Array[MEntity]
		var cmd_mains = new CmdMains(view, mpackage)
		var res_mains = cmd_mains.init_command
		if res_mains isa CmdSuccess then mains.add_all cmd_mains.results.as(not null)
		cards.add new CardGettingStarted(md_processor, mpackage, mains)

		# Testing
		# TODO no tests
		cards.add new CardTesting(md_processor, mpackage)

		# Issues
		# TODO no issues
		cards.add new CardIssues(md_processor, mpackage)

		# Contributing
		# TODO no url, no file
		cards.add new CardContributing(md_processor, mpackage)

		# License
		# TODO no license, no file
		cards.add new CardLicense(md_processor, mpackage)

		# Authors
		# TODO no maintainer, no more-contrib
		cards.add new CardAuthors(md_processor, mpackage)

		return cards
	end
end

abstract class CardScaffolding
	super DocCard
	serialize

	var md_processor: MarkdownProcessor

	var mentity: MEntity

	# Markdown content to insert into the document
	fun markdown: String is abstract

	fun html: Writable do
		return md_processor.process(markdown)
	end

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_scaffolding", true)
		v.serialize_attribute("markdown", markdown)
		v.serialize_attribute("html", html)
	end
end

class CardTitle
	super CardScaffolding
	serialize

	redef var title = "Readme Title"
	redef var description = "Provide a good title and a short description of your project."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "# [[{mentity.full_name}]]\n"
		tpl.addn "[[ini-desc: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardOverview
	super CardScaffolding
	serialize

	redef var title = "Project Overview"
	redef var description = "List the most interesting features of your project to explain what it does and why it is useful."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Overview\n"
		tpl.addn "Main features:"
		tpl.addn "[[defs: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardGettingStarted
	super CardScaffolding
	serialize

	redef var title = "Project Installation & Compilation"
	redef var description = "Explain how a new user can obtain a working copy of your project and run it."

	var mains: nullable Array[MEntity]

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Getting Started\n"

		tpl.addn "These instructions will get you a copy of the project up and running on your local machine.\n"

		tpl.addn "### Dependencies\n"
		tpl.addn "This project requires the following packages:"
		tpl.addn "[[parents: {mentity.full_name}]]\n"

		tpl.addn "### Getting the sources\n"
		tpl.addn "Clone the source from the git repository:\n"
		tpl.addn "[[git-clone: {mentity.full_name}]]\n"


		var mains = self.mains
		if mains != null then
			for main in mains do
				tpl.addn "### Run [[{main.full_name}]]\n"
				tpl.addn "Compile [[{main.full_name}]] with the following command:"
				tpl.addn "[[main-compile: {main.full_name}]]\n"
				tpl.addn "Then run it with:\n"
				tpl.addn "[[main-run: {main.full_name}]]\n"
				tpl.addn "Options:\n"
				tpl.addn "[[main-opts: {main.full_name}]]\n"
			end
		end

		return tpl.write_to_string
	end
end

class CardTesting
	super CardScaffolding
	serialize

	redef var title = "Testing"
	redef var description = "Explain how to run the test units for your project."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Running the tests\n"
		tpl.addn "Run the nitunit automated tests with the following command:"
		tpl.addn "[[testing: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardIssues
	super CardScaffolding
	serialize

	redef var title = "Issues"
	redef var description = "Explain how your users can contact you or raise an issue."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Issues\n"
		tpl.addn "Raise an issue or ask a question on [[ini-issues: {mentity.full_name}]].\n"
		return tpl.write_to_string
	end
end

class CardContributing
	super CardScaffolding
	serialize

	redef var title = "Contributing"
	redef var description = "Explain how other users can contribute to your project."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Contributing\n"
		tpl.addn "This project is versioned with git."
		tpl.addn "We accept pull requests on [[ini-git: {mentity.full_name}]].\n"
		tpl.addn "Please read [[contrib-file: {mentity.full_name}]] for details on our code of conduct, and the process for submitting pull requests to us.\n"
		return tpl.write_to_string
	end
end

class CardAuthors
	super CardScaffolding
	serialize

	redef var title = "Authors"
	redef var description = "List the authors and contributors of your project."

	# var maintainer: nullable String
	# var contributors: nullable Array[String]

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Authors\n"
		tpl.addn "This project is maintained by [[ini-maintainer: {mentity.full_name}]].\n"
		tpl.addn "Thanks to the contribution of:"
		tpl.addn "[[ini-contributors: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardLicense
	super CardScaffolding
	serialize

	redef var title = "License"
	redef var description = "Give the license of your project so your users know how they may use it."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## License\n"

		tpl.addn "This project is licensed under the [[ini-license: {mentity.full_name}]] license.\n"
		# TODO link to nitweb
		tpl.addn "See the [[license-file: {mentity.full_name}]] file for details.\n"
		return tpl.write_to_string
	end
end
