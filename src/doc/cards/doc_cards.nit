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

	fun scaffold(mpackage: MPackage): Array[DocCard] do
		var cards = new Array[DocCard]

		var no_ini = mpackage.ini == null

		if no_ini then
			cards.add new CardTipIni(md_processor, mpackage)
		end

		# README title
		var no_desc = no_ini or not mpackage.ini.as(not null).has_key("package.desc")
		if not no_ini and no_desc then
			cards.add new CardTipIniDesc(md_processor)
		end
		cards.add new CardTitle(md_processor, mpackage, no_desc)

		# Overview
		var cmd_features = new CmdFeatures(view, mpackage)
		var res_features = cmd_features.init_command
		var no_features = not res_features isa CmdSuccess

		if not no_features then
			cards.add new CardOverview(md_processor, mpackage)
		end

		# Getting started

		var cmd_parents = new CmdParents(view, mpackage)
		var res_parents = cmd_parents.init_command
		var no_parent = not res_parents isa CmdSuccess

		var mains = new Array[MEntity]
		var cmd_mains = new CmdMains(view, mpackage)
		var res_mains = cmd_mains.init_command
		if res_mains isa CmdSuccess then mains.add_all cmd_mains.results.as(not null)

		var no_git = no_ini or not mpackage.ini.as(not null).has_key("upstream.git")
		if not no_ini and no_git then
			cards.add new CardTipIniGit(md_processor)
		end

		var man_synopsis = new HashSet[MEntity]
		var man_opts = new HashSet[MEntity]
		for main in mains do
			var cmd_man = new CmdManFile(view, main)
			var res_man = cmd_man.init_command
			var no_man = not res_man isa CmdSuccess

			if no_man then
				cards.add new CardTipMan(md_processor, main)
				continue
			end

			var cmd_syn = new CmdManSynopsis(view, main)
			var res_syn = cmd_syn.init_command
			var no_syn = not res_syn isa CmdSuccess

			if no_syn then
				cards.add new CardTipManSynopsis(md_processor, main)
			else
				man_synopsis.add main
			end

			var cmd_opts = new CmdManOptions(view, main)
			var res_opts = cmd_opts.init_command
			var no_opts = not res_opts isa CmdSuccess

			if no_opts then
				cards.add new CardTipManOptions(md_processor, main)
			else
				man_opts.add main
			end
		end
		cards.add new CardGettingStarted(md_processor, mpackage,
			no_parent, no_git, mains, man_synopsis, man_opts)

		# Testing
		var cmd_tests = new CmdTesting(view, mpackage)
		var res_tests = cmd_tests.init_command
		var no_tests = not res_tests isa CmdSuccess

		if no_tests then
			cards.add new CardTipTests(md_processor)
		else
			cards.add new CardTesting(md_processor, mpackage)
		end

		# Issues
		var no_issues = no_ini or not mpackage.ini.as(not null).has_key("upstream.issues")
		if not no_ini and no_issues then
			cards.add new CardTipIniIssues(md_processor)
		else
			cards.add new CardIssues(md_processor, mpackage)
		end

		# Contributing
		if not no_ini and no_git then
			cards.add new CardTipIniContrib(md_processor)
		end

		var cmd_contrib = new CmdContribFile(view, mpackage)
		var res_contrib = cmd_contrib.init_command
		var no_contrib_file = not res_contrib isa CmdSuccess

		if no_contrib_file then
			cards.add new CardTipContribFile(md_processor)
		end
		if not no_git or not no_contrib_file then
			cards.add new CardContributing(md_processor, mpackage, no_git, no_contrib_file)
		end

		# License
		var no_license = no_ini or not mpackage.ini.as(not null).has_key("package.license")
		if not no_ini and no_license then
			cards.add new CardTipIniLicense(md_processor)
		end

		var cmd_license = new CmdLicenseFile(view, mpackage)
		var res_license = cmd_license.init_command
		var no_license_file = not res_license isa CmdSuccess

		if no_license_file then
			cards.add new CardTipLicenseFile(md_processor)
		end
		if not no_license or not no_license_file then
			cards.add new CardLicense(md_processor, mpackage, no_license, no_license_file)
		end

		# Authors
		var no_author = no_ini or not mpackage.ini.as(not null).has_key("package.maintainer")
		if not no_ini and no_author then
			cards.add new CardTipIniAuthor(md_processor)
		end
		var no_contrib = no_ini or not mpackage.ini.as(not null).has_key("package.more_contributors")
		if not no_ini and no_contrib then
			cards.add new CardTipIniContributors(md_processor)
		end
		if not no_author or not no_contrib then
			cards.add new CardAuthors(md_processor, mpackage, no_author, no_contrib)
		end

		return cards
	end
end

# Tips

abstract class CardTip
	super DocCard
	serialize

	redef var icon = "info-sign"

	var md_processor: MarkdownProcessor

	# Markdown content to insert into the document
	fun markdown: String is abstract

	redef fun description do
		return md_processor.process(markdown).write_to_string
	end

	redef fun core_serialize_to(v) do
		v.serialize_attribute("icon", icon)
		v.serialize_attribute("is_tip", true)
		v.serialize_attribute("description", description)
	end
end

class CardTipIni
	super CardTip
	serialize

	var mentity: MEntity

	redef var title = "Add a package.ini file"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "DocDown uses the `package.ini` file to provide you with suggestions for"
		tpl.addn "your README.\n"
		tpl.addn "Here an example of what it should look like:\n"
		tpl.addn "~~~\n"
		tpl.addn "[package]"
		tpl.addn "name={mentity.full_name}"
		tpl.addn "desc=Add a short description of your project"
		tpl.addn "tags=comma separated list of tags"
		tpl.addn "maintainer=maintainer name"
		tpl.addn "license=project license"
		tpl.addn "version=project version"
		tpl.addn "[upstream]"
		tpl.addn "homepage=project homepage url"
		tpl.addn "git=git clone url"
		tpl.addn "issues=issues management tool url"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniDesc
	super CardTip
	serialize

	redef var title = "Add a project short description"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "DocDown uses the package description from the `package.ini` file.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[package]"
		tpl.addn "desc=Add a short description of your project"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniGit
	super CardTip
	serialize

	redef var title = "Provide a Git repository"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Help your users get your project easily by providing a Git repository for them to clone.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[upstream]"
		tpl.addn "git=URL to your Git repository"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniIssues
	super CardTip
	serialize

	redef var title = "Provide a way to raise issues"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Help your users ask questions and raise issues by providing the address of your issues management tool.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[upstream]"
		tpl.addn "issues=URL to your issues management tool"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniContrib
	super CardTip
	serialize

	redef var title = "Explain how users can contribute"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Ask code contributions by providing the address of your Git repository.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[upstream]"
		tpl.addn "git=URL to your Git repository"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniAuthor
	super CardTip
	serialize

	redef var title = "Be proud of your work"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Claim ownership of your code by providing a maintainer name.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[package]"
		tpl.addn "maintainer=Your Name <your mail address>"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipIniContributors
	super CardTip
	serialize

	redef var title = "Thank your contributors"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Praise users that contributed to your project by providing a contributor list.\n"
		tpl.addn "~~~\n"
		tpl.addn "[package]"
		tpl.addn "more_contributors=comma separated list of names"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipTests
	super CardTip
	serialize

	redef var title = "Test your code with NitUnit"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Avoid bugs and regression with NitUnit tests.\n"
		tpl.addn "See the [NitUnit documentation](https://nitlanguage.org/tools/nitunit.html) to"
		tpl.addn "learn how to use NitUnit to test your project."
		return tpl.write_to_string
	end
end

class CardTipIniLicense
	super CardTip
	serialize

	redef var title = "Give your project license"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Explain how users can use your project by providing a license.\n"
		tpl.addn "Add this key into your `package.ini` file:\n"
		tpl.addn "~~~\n"
		tpl.addn "[package]"
		tpl.addn "license=Package License"
		tpl.addn "~~~\n"
		return tpl.write_to_string
	end
end

class CardTipContribFile
	super CardTip
	serialize

	redef var title = "Explain your contribution rules"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Explain how users can contribute to your project.\n"
		tpl.addn "Add a `CONTRIBUTING` file to your project.\n"
		return tpl.write_to_string
	end
end

class CardTipLicenseFile
	super CardTip
	serialize

	redef var title = "Explain your license details"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Provide details about your project license.\n"
		tpl.addn "Add a `LICENSE` file to your project.\n"
		return tpl.write_to_string
	end
end

class CardTipMan
	super CardTip
	serialize

	var main: MEntity

	redef var title = "Add a manpage for your binary"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Provide the synopsis and the options of the [[{main.full_name}]] binary.\n"
		tpl.addn "Add a file named `man/{main}.man` in your project.\n"
		tpl.addn "See the [manpage manual](http://www.tldp.org/HOWTO/Man-Page/q3.html) for more details about the man page format.\n"
		return tpl.write_to_string
	end
end

class CardTipManSynopsis
	super CardTip
	serialize

	var main: MEntity

	redef var title = "Document the synopsis of your binary in the manpage"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Provide the synopsis of the [[{main.full_name}]] binary.\n"
		tpl.addn "Use the following syntax in your manpage:\n"
		tpl.addn "~~~"
		tpl.addn "# SYNOPSIS"
		tpl.addn "	{main} [options] <arguments>"
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

class CardTipManOptions
	super CardTip
	serialize

	var main: MEntity

	redef var title = "Document the options of your binary in the manpage"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Explain the options of the [[{main.full_name}]] binary.\n"
		tpl.addn "Use the following syntax in your manpage:\n"
		tpl.addn "~~~"
		tpl.addn "# OPTIONS"
		tpl.addn ""
		tpl.addn "### `-o`, `--option`"
		tpl.addn "Option description"
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

# Scaffolding

abstract class CardScaffolding
	super DocCard
	serialize

	redef var icon = "file"

	var md_processor: MarkdownProcessor

	var mentity: MEntity

	# Markdown content to insert into the document
	fun markdown: String is abstract

	fun html: Writable do
		return md_processor.process(markdown)
	end

	redef fun core_serialize_to(v) do
		v.serialize_attribute("icon", icon)
		v.serialize_attribute("is_scaffolding", true)
		v.serialize_attribute("markdown", markdown)
		v.serialize_attribute("html", html)
	end
end

class CardTitle
	super CardScaffolding
	serialize

	var no_desc: Bool

	redef var title = "Readme Title"
	redef var description = "Provide a good title and a short description of your project."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "# [[{mentity.full_name}]]\n"
		if no_desc then
			tpl.addn "**TODO**: Add a short description of your project.\n"
		else
			tpl.addn "[[ini-desc: {mentity.full_name}]]\n"
		end
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
			tpl.addn "This project requires the following packages:"
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
				tpl.addn "Compile [[{main.full_name}]] with the following command:"
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

	var no_git: Bool
	var no_contrib_file: Bool

	redef var title = "Contributing"
	redef var description = "Explain how other users can contribute to your project."

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
	serialize

	var no_author: Bool
	var no_contrib: Bool

	redef var title = "Authors"
	redef var description = "List the authors and contributors of your project."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Authors\n"

		if not no_author then
			tpl.addn "This project is maintained by [[ini-maintainer: {mentity.full_name}]].\n"
		end
		if not no_contrib then
			tpl.addn "Thanks to the contribution of:"
			tpl.addn "[[ini-contributors: {mentity.full_name}]]\n"
		end
		return tpl.write_to_string
	end
end

class CardLicense
	super CardScaffolding
	serialize

	var no_license: Bool
	var no_license_file: Bool

	redef var title = "License"
	redef var description = "Give the license of your project so your users know how they may use it."

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## License\n"

		if not no_license then
			tpl.addn "This project is licensed under the [[ini-license: {mentity.full_name}]]"
			tpl.addn "license.\n"
		end

		if not no_license_file then
			# TODO link to nitweb
			tpl.addn "See the [[license-file: {mentity.full_name}]] file for details.\n"
		end
		return tpl.write_to_string
	end
end
