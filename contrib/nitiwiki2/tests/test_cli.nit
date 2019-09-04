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

module test_cli is test

import test_base
intrude import nitiwiki
intrude import config
intrude import opts

redef class CLICommand
	var out: Writer = new StringWriter

	var status = 0

	redef var logger = new Logger(debug_level, out)

	init do opts.out = out

	redef fun print(s) do out.write "{s}\n"

	redef fun exit(status) do self.status = status
end

redef class OptionContext
	var out: Writer = new StringWriter

	redef fun print(s) do out.write "{s}\n"
end

class TestCmd
	super CLICommand

	redef fun run(args) do
		var topts = ""
		var targs = if args.is_empty then "" else " {args.join(" ")}"
		print "{name}{topts}{targs}\n"
	end
end

class TestWikiCmd
	super WikiCommand
end

class TestCLICommands
	super TestBase
	test

	fun every_command_has_help_by_default is test do
		var cmd = new TestCmd("test", "Test description")
		cmd.usage
		assert cmd.out.to_s == """
Usage: test [OPTION]... [ARG]...
Test description

Options:
  -h, -?, --help   Show this help message\n"""
	end

	# TODO test logger

	fun wiki_command_can_load_wiki is test do
		var cmd = new TestWikiCmd("test", "Test description")
		var wiki = cmd.load_wiki(wikis_dir / "simple")
		assert cmd.status == 0
		assert wiki != null
	end

	fun wiki_command_exit_if_cant_build_wiki is test do
		var cmd = new TestWikiCmd("test", "Test description")
		var wiki = cmd.load_wiki(wikis_dir / "not_found")
		assert cmd.status == 1
		assert cmd.out.to_s == """
`tests/wikis/not_found` is not a nitiwiki directory.

You can create a new nitiwiki here by typing:

	nitiwiki --init
"""
		assert wiki == null
	end
end

class TestCmdStatus
	super TestBase
	test

	fun nitiwiki_status_shows_wiki_status is test do
		var cmd = new CmdStatus
		cmd.run(["--root", wikis_dir / "one"])
		assert cmd.status == 0
		assert cmd.out.to_s == " * Index\n"
		# TODO more complex test
	end
end
