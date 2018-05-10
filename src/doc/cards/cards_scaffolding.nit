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

module cards_scaffolding

import doc::cards::cards_base
import doc::commands

abstract class CardScaffolding
	super DocCard

	# MEntity related to this scaffolding card
	var mentity: MEntity

	# Markdown content to insert into the document
	fun markdown: String is abstract
end

class CardTitle
	super CardScaffolding

	var no_desc: Bool

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "# [[{mentity.full_name}]]\n"
		if no_desc then
			tpl.addn "**TODO**: Add a short description of your project.\n"
		else
			tpl.addn "[[ini-desc: {mentity.full_name}]].\n"
		end
		return tpl.write_to_string
	end
end

class CardOverview
	super CardScaffolding

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Overview\n"
		tpl.addn "Main features:\n"
		tpl.addn "[[defs: {mentity.full_name} | no-test, no-example]]\n"
		return tpl.write_to_string
	end
end

class CardGettingStarted
	super CardScaffolding

	var no_parent: Bool
	var no_git: Bool
	var mains: nullable Array[MEntity]
	var main_with_synopsis: HashSet[MEntity]
	var main_with_options: HashSet[MEntity]

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Getting Started\n"

		tpl.addn "These instructions will get you a copy of the project up and running on your local machine.\n"

		if not no_parent then
			tpl.addn "### Dependencies\n"
			tpl.addn "This project requires the following packages:\n"
			tpl.addn "[[parents: {mentity.full_name}]]\n"
		end

		if not no_git then
			tpl.addn "### Getting the sources\n"
			tpl.addn "Clone the source from the git repository:\n"
			tpl.addn "[[git-clone: {mentity.full_name}]]\n"
		end

		var mains = self.mains
		if mains != null then
			for main in mains do
				tpl.addn "### Run [[{main.full_name}]]\n"
				tpl.addn "Compile [[{main.full_name}]] with the following command:\n"
				tpl.addn "[[main-compile: {main.full_name}]]\n"

				if main_with_synopsis.has(main) then
					tpl.addn "Then run it with:\n"
					tpl.addn "[[main-run: {main.full_name}]]\n"
				end
				if main_with_options.has(main) then
					tpl.addn "Options:\n"
					tpl.addn "[[main-opts: {main.full_name}]]\n"
				end
			end
		end

		return tpl.write_to_string
	end
end

class CardTesting
	super CardScaffolding

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Running the tests\n"
		tpl.addn "Run the nitunit automated tests with the following command:\n"
		tpl.addn "[[testing: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardIssues
	super CardScaffolding

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Issues\n"
		tpl.addn "Raise an issue or ask a question on [[ini-issues: {mentity.full_name}]].\n"
		return tpl.write_to_string
	end
end

class CardContributing
	super CardScaffolding

	var no_git: Bool
	var no_contrib_file: Bool

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Contributing\n"

		if not no_git then
			tpl.addn "This project is versioned with git."
			tpl.addn "We accept pull requests on [[ini-git: {mentity.full_name}]].\n"
		end

		if not no_contrib_file then
			tpl.addn "Please read [[contrib-file: {mentity.full_name}]] for details on our code"
			tpl.addn "of conduct, and the process for submitting pull requests to us.\n"
		end
		return tpl.write_to_string
	end
end

class CardAuthors
	super CardScaffolding

	var no_author: Bool
	var no_contrib: Bool

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Authors\n"

		if not no_author then
			tpl.addn "This project is maintained by [[ini-maintainer: {mentity.full_name}]].\n"
		end
		if not no_contrib then
			tpl.addn "Thanks to the contribution of:\n"
			tpl.addn "[[ini-contributors: {mentity.full_name}]]\n"
		end
		return tpl.write_to_string
	end
end

class CardLicense
	super CardScaffolding

	var no_license: Bool
	var no_license_file: Bool

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## License\n"

		if not no_license then
			tpl.addn "This project is licensed under the [[ini-license: {mentity.full_name}]]"
			tpl.addn "license.\n"
		end

		if not no_license_file then
			tpl.addn "See the [[license-file: {mentity.full_name}]] file for details.\n"
		end
		return tpl.write_to_string
	end
end
