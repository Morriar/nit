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

module nitiwiki

import wiki_builder
import wiki_html
intrude import config

class Nitiwiki
	# TODO options
	# colors
	# verbose
	# log

	fun run(args: Sequence[String]) do
		# TODO ignore hidden files?
		# TODO parse command
		# TODO display help
	end
end

abstract class CLICommand
	super Config
#	var opt_verbose = new OptionCount("Verbosity level", "--verbose", "-v")
#	fun verbose: Int do
#		if opt_verbose.value == 1 then
#			return info_level
#		else if opt_verbose.value > 1 then
#			return debug_level
#		end
#		return warn_level
#	end
#
#	var logger = new Logger(verbose) is lazy

	# TODO options
	# colors
	# verbose
	# log

		# auto titles
		# breadcrumbs
		# summaries
		# render to format
		# target dir
		# accepted input format
		# render only if needed

	var name: String

	var description: String

	var logger = new Logger(warn_level)

	redef fun tool_description do
		var desc = new Buffer
		desc.append "Usage: {name} [OPTION]... [ARG]...\n"
		desc.append description
		return desc.to_s
	end

	fun run(args: Collection[String]) do parse_options(args)

	# Useful for testing
	private fun exit(status: Int) do sys.exit status
end

class CmdInit
	super WikiCommand

	redef fun run(args) do
		# TODO check only one arg
		var path = "."
		if args.not_empty then path = args.first

		# TODO init
		print path
		# create nitiwiki.ini
		#
		# create pages/
		# create base template
		# create assets/
		# create assets/style.css

		# explain next
		# edit pages
		# nitiwiki status
	end
end

abstract class WikiCommand
	super CLICommand

	init do
		add_option opt_root
	end

#	redef var default_config_file = "nitiwiki.ini"
#
#	var opt_src = new OptionString("Source directory (default: pages/)", "--src", "-s")
#	fun src: String do return opt_src.value or else ini["wiki.src"] or else "pages/"
#
#	var opt_md_exts = new OptionArray("Accepted markdown extensions (default: md)", "--md-exts")
#	fun md_exts: Array[String] do
#		var res = opt_md_exts.value
#		if res.not_empty then return res
#		var str = ini["md-exts"]
#		if str != null then
#			for ext in str.split(";") do
#				res.add ext.trim
#			end
#			return res
#		end
#		return ["md"]
#	end

	var opt_root = new OptionString("Root directory of the wiki (default: .)", "--root")

	fun root_dir: String do return opt_root.value or else "."

	fun is_nitiwiki(root_dir: String): Bool do
		return (root_dir / "nitiwiki.ini").file_exists
	end

	fun load_wiki(root_dir: String): nullable Wiki do
		if not is_nitiwiki(root_dir) then
			if root_dir == "." then
				print "Not in a nitiwiki directory."
			else
				print "`{root_dir}` is not a nitiwiki directory."
			end
			print "\nYou can create a new nitiwiki here by typing:"
			print "\n\tnitiwiki --init"
			exit 1
			return null # FIXME control flow should understand exit?
		end
		var builder = new WikiBuilder # TODO options
		var wiki = builder.build_wiki(root_dir)
		if wiki == null then
			logger.error "Error: Can't load the nitiwiki at `{root_dir}`."
			exit 1
			return null # FIXME control flow should understand exit?
		end
		return wiki
	end
end

class CmdStatus
	super WikiCommand
	noautoinit

	redef var name = "status"
	redef var description = "Show the wiki status"

	redef fun run(args) do
		super

		var wiki = load_wiki(root_dir)
		if wiki == null then return

		var resources = wiki.resources
		if resources.is_empty then
			print "This wiki is empty."
			return
		end

		# TODO Move to wiki html
		for resource in resources do
			# TODO visit and print wiki status
				# use status from generated html
				# show + new, - deleted, * modified, up-to-date
				# use colors
			print " * {resource.title or else resource.name}"
		end

		# TODO explain next: nitiwiki render
	end
end

class CmdRender
	super WikiCommand
	noautoinit
#	var opt_out = new OptionString("Output directory (default: out/)", "--out", "-o")
#	fun out: String do return opt_out.value or else ini["wiki.out"] or else "out/"
#	var opt_force = new OptionBool("Force rendering.", "--force", "-f")
#	fun force: Bool do return opt_force.value or ini["wiki.force"] == "true"

	redef var name = "render"
	redef var description = "Render the wiki as HTML"

	redef fun run(args) do
		super
		var wiki = load_wiki(root_dir).as(not null)
		var wiki2html = new Wiki2Html(wiki) # TODO options
		wiki2html.render

		# TODO explain next: nitiwiki sync
	end
end

class CmdClean
	super WikiCommand
	noautoinit

	redef var name = "clean"
	redef var description = "Remove all output files"

	redef fun run(args) do
		super
		# var wiki = load_wiki(root_dir).as(not null)
		# var wiki2html = new Wiki2Html(wiki) # TODO options
		# TODO wiki2html.clean
	end
end

class CmdSync
	# TODO sync // ssh
end

class CmdFetch
	# TODO fetch // git?
end

var nitiwiki = new Nitiwiki
nitiwiki.run(args)
