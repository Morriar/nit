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
import doc::templates::md_commands
import doc::templates::html_commands

class ReadmeScaffolder

	var model: Model

	var mainmodule: MModule

	var mdoc_parser: MdParser

	fun scaffold(mpackage: MPackage): Array[DocCard] do
		var cards = new Array[DocCard]

		var no_ini = mpackage.ini == null

		if no_ini then
			cards.add new CardTipIni(mdoc_parser, mpackage)
		end

		var filter = new ModelFilter

		# README title
		var no_desc = no_ini or not mpackage.ini.as(not null).has_key("package.desc")
		if not no_ini and no_desc then
			cards.add new CardTipIniDesc(mdoc_parser)
		end
		cards.add new CardTitle(mdoc_parser, mpackage, no_desc)

		# Overmodel
		var cmd_features = new CmdFeatures(model, filter, mpackage)
		var res_features = cmd_features.init_command
		var no_features = not res_features isa CmdSuccess

		if not no_features then
			cards.add new CardOverview(mdoc_parser, mpackage)
		end

		# Getting started

		var cmd_parents = new CmdParents(model, mainmodule, filter, mpackage)
		var res_parents = cmd_parents.init_command
		var no_parent = not res_parents isa CmdSuccess

		var mains = new Array[MEntity]
		var cmd_mains = new CmdMains(model, filter, mpackage)
		var res_mains = cmd_mains.init_command
		if res_mains isa CmdSuccess then mains.add_all cmd_mains.results.as(not null)

		var no_git = no_ini or not mpackage.ini.as(not null).has_key("upstream.git")
		if not no_ini and no_git then
			cards.add new CardTipIniGit(mdoc_parser)
		end

		var man_synopsis = new HashSet[MEntity]
		var man_opts = new HashSet[MEntity]
		for main in mains do
			var cmd_man = new CmdManFile(model, filter, main)
			var res_man = cmd_man.init_command
			var no_man = not res_man isa CmdSuccess

			if no_man then
				cards.add new CardTipMan(mdoc_parser, main)
				continue
			end

			var cmd_syn = new CmdManSynopsis(model, filter, main)
			var res_syn = cmd_syn.init_command
			var no_syn = not res_syn isa CmdSuccess

			if no_syn then
				cards.add new CardTipManSynopsis(mdoc_parser, main)
			else
				man_synopsis.add main
			end

			var cmd_opts = new CmdManOptions(model, filter, main)
			var res_opts = cmd_opts.init_command
			var no_opts = not res_opts isa CmdSuccess

			if no_opts then
				cards.add new CardTipManOptions(mdoc_parser, main)
			else
				man_opts.add main
			end
		end
		cards.add new CardGettingStarted(mdoc_parser, mpackage,
			no_parent, no_git, mains, man_synopsis, man_opts)

		# Testing
		var cmd_tests = new CmdTesting(model, filter, mpackage)
		var res_tests = cmd_tests.init_command
		var no_tests = not res_tests isa CmdSuccess

		if no_tests then
			cards.add new CardTipTests(mdoc_parser)
		else
			cards.add new CardTesting(mdoc_parser, mpackage)
		end

		# Issues
		var no_issues = no_ini or not mpackage.ini.as(not null).has_key("upstream.issues")
		if not no_ini and no_issues then
			cards.add new CardTipIniIssues(mdoc_parser)
		else
			cards.add new CardIssues(mdoc_parser, mpackage)
		end

		# Contributing
		if not no_ini and no_git then
			cards.add new CardTipIniContrib(mdoc_parser)
		end

		var cmd_contrib = new CmdContribFile(model, filter, mpackage)
		var res_contrib = cmd_contrib.init_command
		var no_contrib_file = not res_contrib isa CmdSuccess

		if no_contrib_file then
			cards.add new CardTipContribFile(mdoc_parser)
		end
		if not no_git or not no_contrib_file then
			cards.add new CardContributing(mdoc_parser, mpackage, no_git, no_contrib_file)
		end

		# License
		var no_license = no_ini or not mpackage.ini.as(not null).has_key("package.license")
		if not no_ini and no_license then
			cards.add new CardTipIniLicense(mdoc_parser)
		end

		var cmd_license = new CmdLicenseFile(model, filter, mpackage)
		var res_license = cmd_license.init_command
		var no_license_file = not res_license isa CmdSuccess

		if no_license_file then
			cards.add new CardTipLicenseFile(mdoc_parser)
		end
		if not no_license or not no_license_file then
			cards.add new CardLicense(mdoc_parser, mpackage, no_license, no_license_file)
		end

		# Authors
		var no_author = no_ini or not mpackage.ini.as(not null).has_key("package.maintainer")
		if not no_ini and no_author then
			cards.add new CardTipIniAuthor(mdoc_parser)
		end
		var no_contrib = no_ini or not mpackage.ini.as(not null).has_key("package.more_contributors")
		if not no_ini and no_contrib then
			cards.add new CardTipIniContributors(mdoc_parser)
		end
		if not no_author or not no_contrib then
			cards.add new CardAuthors(mdoc_parser, mpackage, no_author, no_contrib)
		end

		return cards
	end
end

# Tips

abstract class CardTip
	super DocCard
	serialize

	redef var icon = "info-sign"

	var mdoc_parser: MdParser is noserialize

	var mdoc_renderer = new MDocHtmlRenderer is noserialize

	redef fun description do
		var ast = mdoc_parser.parse(markdown)
		mdoc_parser.post_process(ast)
		return mdoc_renderer.render(ast)
	end

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_tip", true)
	end
end

class CardTipCommand
	super CardTip
	serialize

	var command: String

	redef var title = "Card preview"

	redef fun markdown do return "[[{command}]]"
end

class CardTipIni
	super CardTip
	serialize

	redef var id is lazy do return "tip-ini-{mentity.full_name}"

	var mentity: MEntity is noserialize

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

	redef var id is lazy do return "tip-ini-desc"

	redef var title = "Add a project short description"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "DocDown uses the package description from the `package.ini` file.\n"
		tpl.addn "Add the key `package.desc` into the file:\n"
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

	redef var id is lazy do return "tip-ini-git"

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

	redef var id is lazy do return "tip-ini-issues"

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

	redef var id is lazy do return "tip-ini-contrib"

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

	redef var id is lazy do return "tip-ini-authors"

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

	redef var id is lazy do return "tip-ini-contribs"

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

class CardTipExamples
	super CardTip
	serialize

	redef var id is lazy do return "tip-examples"

	redef var title = "Create testable examples"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Explain how to use your code with the `is example` annotation.\n"
		tpl.addn "See the [NitUnit documentation](https://nitlanguage.org/tools/nitunit.html) to"
		tpl.addn "learn how to use NitUnit to test your examples."
		return tpl.write_to_string
	end
end

class CardTipTests
	super CardTip
	serialize

	redef var id is lazy do return "tip-testing"

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

	redef var id is lazy do return "tip-ini-license"

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

	redef var id is lazy do return "tip-file-contrib"

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

	redef var id is lazy do return "tip-file-license"

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

	redef var id is lazy do return "tip-man-{main.full_name}"

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

	redef var id is lazy do return "tip-man-syn-{main.full_name}"

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

	redef var id is lazy do return "tip-man-opts-{main.full_name}"

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

class CardTipFinished
	super CardTip
	serialize

	redef var id is lazy do return "tip-finished"

	redef var title = "Your README is ready!"

	redef fun markdown do
		var tpl = new Template
		tpl.addn "Use the button on the bottom of the screen to render it.\n"
		return tpl.write_to_string
	end
end

# Scaffolding

abstract class CardScaffolding
	super DocCard
	serialize

	redef var icon = "file"

	var mdoc_parser: MdParser is noserialize

	var mdoc_renderer = new MDocHtmlRenderer is noserialize

	var mentity: MEntity is noserialize

	fun html: Writable do
		var ast = mdoc_parser.parse(markdown)
		ast.mdoc = mentity.mdoc
		mdoc_parser.post_process(ast)
		return mdoc_renderer.render(ast)
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

	redef var id is lazy do return "scaff-title-{mentity.full_name}"

	redef fun commands do
		var res = super
		res.add "{mentity.full_name}"
		res.add "ini-desc: {mentity.full_name}"
		return res
	end

	var no_desc: Bool is noserialize

	redef var title = "Add a descriptive title"
	redef var description = "A good README starts with a title and a short description of your project."

	init from_mpackage(mdoc_parser: MdParser, mpackage: MPackage) do
		var no_desc = true
		var ini = mpackage.ini
		if ini != null then
			no_desc = ini.has_key("package.desc")
		end
		init(mdoc_parser, mpackage, no_desc)
	end

	redef var markdown is lazy do
		var tpl = new Template
		tpl.add "# [[{mentity.full_name}]]"
		if no_desc then
			tpl.addn " - **TODO**: Add a short description of your project.\n"
		else
			tpl.addn " - [[ini-desc: {mentity.full_name}]]\n"
		end
		return tpl.write_to_string
	end
end

class CardOverview
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-overview-{mentity.full_name}"

	redef var title = "Project Overview"
	redef var description = "List the most interesting features of your project to explain what it does and why it is useful."

	redef fun options do
		var options = new HashMap[String, String]
		options["filter-entities"] = ""
		return options
	end

	redef var markdown is lazy do
		var tpl = new Template
		# tpl.addn "## Overview\n"
		tpl.addn "Main features:"
		tpl.addn "[[defs: {mentity.full_name}]]\n"
		return tpl.write_to_string
	end
end

class CardTOC
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-toc-{mentity.full_name}"

	redef var title = "Table of contents"
	redef var description = "Add a table of contents so readers can jump directly to what they are looking for."

	redef var markdown is lazy do
		var tpl = new Template
		# tpl.addn "## Contents\n"
		tpl.addn "[[toc: {mentity.full_name}]]"
		return tpl.write_to_string
	end
end


class CardGettingStarted
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-starting-{mentity.full_name}"

	redef var title = "Project Installation & Compilation"
	redef var description = "Explain how a new user can obtain a working copy of your project and run it."

	var no_parent: Bool is noserialize
	var no_git: Bool is noserialize
	var mains: nullable Array[MEntity] is noserialize
	var main_with_synopsis: HashSet[MEntity] is noserialize
	var main_with_options: HashSet[MEntity] is noserialize
	var is_nit = false is optional, writable

	redef fun options do
		var options = new HashMap[String, String]
		options["filter-mains"] = ""
		return options
	end

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Getting Started\n"

		tpl.addn "These instructions will get you a copy of the project up and running on your local machine.\n"

		if not no_parent then
			tpl.addn "### Dependencies\n"
			tpl.addn "This project requires the following packages:\n"
			tpl.addn "[[parents: {mentity.full_name}]]\n"
		end

		if not no_git and not is_nit then
			tpl.addn "### Getting the sources\n"
			tpl.addn "Clone the source from the git repository:\n"
			tpl.addn "[[git-clone: {mentity.full_name}]]\n"
		end

		var mains = self.mains
		if mains != null then
			for main in mains do
				tpl.addn "### Run `{main.name}`\n"
				tpl.addn "Compile `{main.name}` with the following command:\n"
				tpl.addn "[[main-compile: {main.full_name}]]\n"

				# if main_with_synopsis.has(main) then
					tpl.addn "Then run it with:\n"
					tpl.addn "[[main-run: {main.full_name}]]\n"
				# end
				if main_with_options.has(main) then
					tpl.addn "Options:\n"
					tpl.addn "[[main-opts: {main.full_name}]]\n"
				end
			end
		end

		return tpl.write_to_string
	end
end

class CardAPI
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-api-{mentity.full_name}"

	var level: Int

	redef var title = "???"
	redef var description = "???"

	redef var markdown is lazy do
		var mentity = self.mentity
		var tpl = new Template
		tpl.add "{"#" * level} "
		if mentity isa MProperty then
			tpl.add "`{mentity.intro.mclassdef.mclass.name}::{mentity.name}`"
		else
			tpl.add "`{mentity.name}`"
		end

		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			var syn = mdoc.md_synopsis.write_to_string
			if not syn.is_empty then
				tpl.addn " - {syn.replace("# ", "")}"
			else
				tpl.addn "\n"
			end
		else
			tpl.addn "\n"
		end
		tpl.addn "[[doc: {mentity.full_name} | no-synopsis]]\n"

		var cmd_features = new CmdFeatures(mentity.model,
			new ModelFilter(
				min_visibility = public_visibility,
				accept_redef = false,
				accept_test = false,
				accept_example = false
			), mentity)
		var res_features = cmd_features.init_command

		if res_features isa CmdSuccess and cmd_features.results.as(not null).not_empty then
			if mentity isa MClass then
				tpl.addn "Properties:\n"
				tpl.addn "[[features: {mentity.full_name} | min-visibility: public, no-redef]]"
			end
		end
		return tpl.write_to_string
	end
end

class CardExamples
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-testing-{mentity.full_name}"

	redef fun commands do
		var res = super
		if examples.length > 1 then
			var names = new Array[String]
			for mentity in examples do
				names.add mentity.full_name
			end
			res.add "features: {mentity.full_name} | mentities: {names.join(";")}"
		else if examples.not_empty then
			res.add "code: {examples.first.full_name} | format: html"
		end
		return res
	end


	redef var title = "Usage examples" is lazy
	redef var description = "Explain how to use your project with code examples."

	var examples: Array[MEntity]

	redef var markdown is lazy do
		var tpl = new Template
		tpl.addn "## Example{if examples.length > 1 then "s" else ""}\n"
		if examples.length > 1 then
			var names = new Array[String]
			for mentity in examples do
				names.add mentity.full_name
			end
			tpl.addn "[[features: {mentity.full_name} | mentities: {names.join(";")}]]\n"
		else if examples.not_empty then
			tpl.addn "[[code: {examples.first.full_name} | format: html]]\n"
		end
		return tpl.write_to_string
	end
end

class CardTesting
	super CardScaffolding
	serialize

	redef var id is lazy do return "scaff-testing-{mentity.full_name}"

	redef var title = "Testing"
	redef var description = "Explain how to run the test units for your project."

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
	serialize

	redef var id is lazy do return "scaff-issues-{mentity.full_name}"

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

	redef var id is lazy do return "scaff-contrib-{mentity.full_name}"

	var no_git: Bool is noserialize
	var no_contrib_file: Bool is noserialize

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

	redef var id is lazy do return "scaff-authors-{mentity.full_name}"

	var no_author: Bool is noserialize
	var no_contrib: Bool is noserialize

	redef var title = "Authors"
	redef var description = "List the authors and contributors of your project."

	init from_mentity(mdoc_parser: MdParser, mentity: MEntity) do
		var ini = mentity.as(MPackage).ini
		var no_author = ini == null or not ini.has_key("package.maintainer")
		var no_contrib = ini == null or not ini.has_key("package.more_contributors")
		init(mdoc_parser, mentity, no_author, no_contrib)
	end

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

	redef var id is lazy do return "scaff-license-{mentity.full_name}"

	var no_license: Bool is noserialize
	var no_license_file: Bool is noserialize

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
