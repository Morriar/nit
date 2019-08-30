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

import wiki_base
import config
import logger

# TODO ignore hidden files?

class Nitiwiki
#
	# var config = new WikiConfig

	fun run(args: Sequence[String]) do
		# TODO parse options
		# config.parse_options(args)
		# if config.help then
		#	config.usage
		#	exit 1
		# end
		# # TODO init
		var config_file = "./nitiwiki" # TODO option --root
		if not config_file.file_exists then
			print "Not in a nitiwiki directory."
			print "\nYou can create a new nitiwiki with"
			print "\n\tnitiwiki --init"
			exit 1
		end

		# TODO parse command

		# TODO load config from nitiwiki.ini

		# TODO display help
		# TODO sync, render, fetch
		# TODO clean
		# TODO status
		exit 0
	end

	fun parse_wiki(root_path: String): Wiki do
		var wiki = new Wiki
		return wiki
	end

	# TODO options
		# auto titles
		# breadcrumbs
		# summaries
		# render to format
		# target dir
		# accepted input format
		# render only if needed
end

abstract class WikiCommand
	super Config

	var name: String

	var description: String

	redef fun tool_description do
		var desc = new Buffer
		desc.append "Usage: {name} [OPTION]... [ARG]...\n"
		desc.append description
		return desc.to_s
	end

	fun run(args: Collection[String]) is abstract
end

# class WikiConfig
#	super IniConfig
#
#	redef var default_config_file = "nitiwiki.ini"
#
#	var opt_root = new OptionString("Root directory of the wiki (default: .)", "--root")
#	fun root: String do return opt_root.value or else "."
#
#	var opt_src = new OptionString("Source directory (default: pages/)", "--src", "-s")
#	fun src: String do return opt_src.value or else ini["wiki.src"] or else "pages/"
#
#	var opt_out = new OptionString("Output directory (default: out/)", "--out", "-o")
#	fun out: String do return opt_out.value or else ini["wiki.out"] or else "out/"
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
#
#	var opt_force = new OptionBool("Force rendering.", "--force", "-f")
#	fun force: Bool do return opt_force.value or ini["wiki.force"] == "true"
#
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
#
#	# TODO include file
#	# TODO template
#	# TODO section_template
#	# TODO page_template
#
#	# TODO sync // ssh
#	# TODO fetch // git
#
#	init do
#		super
#		opts.add_option(opt_src, opt_out, opt_md_exts, opt_force, opt_verbose)
#	end
#
#	fun file_exists: Bool do return (root / default_config_file).file_exists
# end

# class WikiCommand
	# var config = new Config
# end

class CmdHello
	# var config: WikiConfig

	fun is_nitiwiki: Bool do return false

	fun run do
		if is_nitiwiki then
			print "Some status"
		else
			print "Not in a nitiwiki directory."
			print "\nYou can create a new nitiwiki by typing:"
			print "\n\tnitiwiki --init"
		end
	end
end

class WikiInit
	super WikiCommand

	# TODO options
	# path
	# colors
	# verbose
	# log

	redef fun run(args) do
		# var path = "."
		# create nitiwiki.ini
		#
		# create pages/
		# create base template
		# create assets/
		# create style.css

		# explain next
		# edit pages
		# nitiwiki status
	end
end

class CmdStatus

	# TODO options
	# path
	# colors
	# verbose
	# log

	fun run do
		# TODO visit and print wiki

		# explain next
		# nitiwiki render
	end
end

class CmdRender
end

class CmdClean
	fun run do
		# wiki.clean_html
		# TODO visit and print wiki

		# explain next
		# nitiwiki render
	end
end

class CmdSync
end

class CmdFetch
end

var nitiwiki = new Nitiwiki
nitiwiki.run(args)
