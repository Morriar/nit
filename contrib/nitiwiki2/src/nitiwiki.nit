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
	var commands: Map[String, CLICommand] is lazy do
		var commands = new Map[String, CLICommand]
		commands["init"] = new CmdInit
		commands["status"] = new CmdStatus
		commands["render"] = new CmdRender
		commands["clean"] = new CmdClean
		commands["synch"] = new CmdSynch
		return commands
	end

	fun print_usage do
		print "usage: nitiwiki <command> [options] [<args>]\n"
		print_commands
	end

	fun print_commands do
		print "Use one of the following Nitiwiki commands:\n"
		for name, command in commands do
			print "\t{name}\t{command.description}"
		end
		print "\nSee `nitikiwi <command> --help` for more help."
	end

	fun run(args: Sequence[String]): Int do
		if args.is_empty then
			print_usage
			return 1
		end

		var command = args.shift
		if not commands.has_key(command) then
			print "Error: Unknown command `{command}`\n"
			var hint = did_you_mean(command)
			if hint != null then
				print "Did you mean `{hint.name}`?\n"
			end
			print_commands
			return 1
		end

		return commands[command].run(args)
	end

	fun did_you_mean(name: String): nullable CLICommand do
		var min_lev = null
		var min_cmd = null

		for command_name, command in commands do
			var lev = name.levenshtein_distance(command_name)
			if min_lev == null or lev < min_lev then
				min_lev = lev
				min_cmd = command
			end
		end

		return min_cmd
	end
end

abstract class CLICommand
	super Config

	var name: String

	var description: String

	var opt_verbose = new OptionCount("Verbosity level", "--verbose", "-v")

	init do add_option opt_verbose

	var logger = new Logger(info_level - opt_verbose.value) is lazy

	var usage_line = "usage: nitiwiki {name} [-v]" is lazy

	redef fun tool_description do
		var desc = new Buffer
		desc.append usage_line
		desc.append "\n\n"
		desc.append description
		return desc.to_s
	end

	fun run(args: Collection[String]): Int do
		parse_options(args)
		return 0
	end
end

class CmdInit
	super CLICommand
	noautoinit

	redef var name = "init"
	redef var description = "Create a new nitiwiki"
	redef var usage_line = "{super} <root>" is lazy

	redef fun run(args) do
		super

		if self.args.length > 1 then
			usage
			return 1
		end

		var root = "."
		if self.args.not_empty then root = self.args.first

		# We don't want to overwrite existing wikis
		var ini_path = root / "nitiwiki.ini"
		if ini_path.file_exists then
			print "`{root}` is already a nitiwiki."
			print "\nYou can see its status by typing:"
			print "\n\tnitiwiki status"
			return 1
		end

		sys.system "mkdir -p {root}"

		# Create config
		var ini = new Template
		ini.addn "[wiki]\n"
		ini.addn "; Sources directory"
		ini.addn "src = src/\n"
		ini.addn "; Output directory"
		ini.addn "out = out/\n"
		ini.addn "; Default page template"
		ini.addn "template = template.html"
		ini.write_to_file(ini_path)
		logger.debug "Created configuration file `{ini_path}`"

		# Create `src/`
		var src_dir = root / "src"
		sys.system "mkdir -p {src_dir}"
		logger.debug "Created src directory `{src_dir}`"

		# Create `src/index.md`
		var index = new Template
		index.addn "# My Nitiwiki\n"
		index.addn "Hello, World!"
		var index_path = src_dir / "index.md"
		index.write_to_file(index_path)
		logger.debug "Created index page `{index_path}`"

		# Create `template.html`
		var tpl = new Template
		tpl.addn "<!doctype html>"
		tpl.addn "<head>"
		tpl.addn "  <title>My Nitiwiki</title>"
		tpl.addn "</head>"
		tpl.addn "<body>"
		tpl.addn "%BODY%"
		tpl.addn "</body>"
		tpl.addn "</html>"
		var tpl_path = root / "template.html"
		tpl.write_to_file(tpl_path)
		logger.debug "Created base template `{tpl_path}`"

		# Help users figuring out what's next
		if root == "." then
			print "Initialized new wiki in current directory.\n"
		else
			print "Initialized new wiki in `{root}`.\n"
		end
		print "You can customize its content by editing:\n"
		print " * `{ini_path}` for the configuration"
		print " * `{src_dir}` for the source src in Markdown format"
		print " * `{tpl_path}` for the src template"
		print "\nThen render your wiki to HTML by typing:"
		print "\n\tnitiwiki init"

		return 0
	end
end

abstract class WikiCommand
	super CLICommand

	var opt_root = new OptionString("Root directory of the wiki (default: .)", "--root")

	init do add_option opt_root

	redef var usage_line = "{super} [--root=<root>]" is lazy

	fun root_dir: String do return opt_root.value or else "."

	fun load_wiki(root_dir: String): nullable Wiki do
		if not (root_dir / "nitiwiki.ini").file_exists then
			if root_dir == "." then
				print "Not in a nitiwiki directory."
			else
				print "`{root_dir}` is not a nitiwiki directory."
			end
			print "\nYou can create a new nitiwiki here by typing:"
			print "\n\tnitiwiki init"
			return null
		end
		var builder = new WikiBuilder(logger)
		var wiki = new Wiki(root_dir)
		builder.build_wiki(wiki)

		return wiki
	end
end

class CmdStatus
	super WikiCommand
	noautoinit

	redef var name = "status"
	redef var description = "Show the wiki status"

	var opt_no_color = new OptionBool("Do not colorize output (default: false)", "--no-color")

	init do add_option opt_no_color

	redef fun run(args) do
		super

		if opt_help.value then
			usage
			return 0
		end

		var wiki = load_wiki(root_dir)
		if wiki == null then return 1

		var resources = wiki.resources
		if resources.is_empty then
			print "This wiki is empty."
			return 0
		end

		var added = new Array[Resource]
		var edited = new Array[Resource]

		for resource in resources do
			if resource.is_new then
				added.add resource
			else if resource.is_dirty then
				edited.add resource
			end
		end

		if added.is_empty and edited.is_empty then
			print "Wiki up-to-date."
			return 0
		end

		if added.not_empty then
			print "New resources:\n"
			for resource in added do
				if opt_no_color.value then
					print " + {resource.path}"
				else
					print " + {resource.path}".green
				end
			end
			print ""
		end

		if edited.not_empty then
			print "Modified resources:\n"
			for resource in edited do
				if opt_no_color.value then
					print " * {resource.path}"
				else
					print " * {resource.path}".yellow
				end
			end
			print ""
		end

		var deleted = deleted_files(wiki)
		if deleted.not_empty then
			print "Deleted resources:\n"
			for resource in deleted do
				if opt_no_color.value then
					print " - {resource}"
				else
					print " - {resource}".red
				end
			end
			print ""
		end

		print "Render your wiki to HTML by typing:"
		print "\n\tnitiwiki render"

		return 0
	end

	fun deleted_files(wiki: Wiki): Array[String] do
		var deleted = new Array[String]
		for file in read_files(wiki.out_dir) do
			file = file.replace_first(wiki.out_dir, "")
			var path = "/{file}".simplify_path
			if wiki.resource_by_path(path) != null then continue
			for ext in wiki.allowed_md_exts do
				var md_path = "{path.strip_extension}.{ext}"
				if wiki.resource_by_path(md_path) != null then continue label file
			end
			deleted.add path
		end label file
		return deleted
	end

	fun read_files(path: String): Array[String] do
		var files = new Array[String]
		if not path.file_exists then return files

		var pipe = new ProcessReader("find", path)
		while not pipe.eof do
			var file = pipe.read_line
			if file == "" then break # last line
			files.add file.trim
		end
		pipe.close
		pipe.wait

		var s = new DefaultComparator
		s.sort(files)
		return files
	end
end

class CmdRender
	super WikiCommand
	noautoinit

	var opt_force = new OptionBool("Force rendering.", "--force", "-f")

	redef init do add_option opt_force

	redef var name = "render"
	redef var description = "Render the wiki as HTML"

	redef fun run(args) do
		super

		var wiki = load_wiki(root_dir).as(not null)

		var wiki2html = new Wiki2Html(wiki, opt_force.value, logger)
		wiki2html.render

		print "Rendered wiki as HTML to `{wiki.out_dir}`.\n"

		print "Push your rendered wiki to your server by typing:"
		print "\n\tnitiwiki sync"

		return 0
	end
end

class CmdClean
	super WikiCommand
	noautoinit

	redef var name = "clean"
	redef var description = "Remove all output files"

	redef fun run(args) do
		super
		var wiki = load_wiki(root_dir).as(not null)
		var wiki2html = new Wiki2Html(wiki, false, logger)
		wiki2html.clean

		print "Removed `{wiki.root_dir / wiki.out_dir}`."

		return 0
	end
end

class CmdSynch
	super WikiCommand
	noautoinit

	redef var name = "sync"
	redef var description = "Synchronize the local out directory with a distant location with rsync"

	redef fun run(args) do
		# TODO sync
		abort
	end
end

var nitiwiki = new Nitiwiki
exit nitiwiki.run(args)
