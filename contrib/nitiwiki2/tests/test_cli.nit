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

	redef var logger = new Logger(debug_level, out)

	init do opts.out = out

	redef fun print(s) do out.write "{s}\n"
end

redef class OptionContext
	var out: Writer = new StringWriter

	redef fun print(s) do out.write "{s}\n"
end

class TestWikiCmd
	super WikiCommand
end

class TestCLICommands
	super TestBase
	test

	# TODO test logger

	fun wiki_command_can_load_wiki is test do
		var cmd = new TestWikiCmd("test", "Test description")
		var wiki = cmd.load_wiki(wikis_dir / "simple")
		assert wiki != null
	end

	fun wiki_command_print_error_if_cant_build_wiki is test do
		var cmd = new TestWikiCmd("test", "Test description")
		var wiki = cmd.load_wiki(wikis_dir / "not_found")
		assert cmd.out.to_s == strip_indent("""
		`tests/wikis/not_found` is not a nitiwiki directory.

		You can create a new nitiwiki here by typing:

			nitiwiki init""")
		assert wiki == null
	end
end

class TestCmdStatus
	super TestBase
	test

	fun nitiwiki_status_shows_wiki_bad_wiki is test do
		var cmd = new CmdStatus
		assert cmd.run(["--root", wikis_dir / "not_found"]) == 1
		assert cmd.out.to_s == strip_indent("""
		`tests/wikis/not_found` is not a nitiwiki directory.

		You can create a new nitiwiki here by typing:

			nitiwiki init""")
	end

	fun nitiwiki_status_shows_wiki_status_empty is test do
		var cmd = new CmdStatus
		assert cmd.run(["--root", wikis_dir / "empty"]) == 0
		assert cmd.out.to_s == strip_indent("""
		Found wiki config at tests/wikis/empty/nitiwiki.ini
		This wiki is empty.""")
	end

	fun nitiwiki_status_shows_wiki_status_simple is test do
		var cmd = new CmdStatus
		assert cmd.run(["--root", wikis_dir / "simple"]) == 0
		assert cmd.out.to_s == strip_indent("""
		Found wiki config at tests/wikis/simple/nitiwiki.ini
		Found page at tests/wikis/simple/src/index.md
		Found page at tests/wikis/simple/src/page1.md
		Found page at tests/wikis/simple/src/page2.md
		Found section at tests/wikis/simple/src/section1
		Found page at tests/wikis/simple/src/section1/index.md
		Found section at tests/wikis/simple/src/section1/section11
		Found page at tests/wikis/simple/src/section1/section11/index.md
		Found section at tests/wikis/simple/src/section1/section12
		Found section config at tests/wikis/simple/src/section1/section12/section.ini
		Found page at tests/wikis/simple/src/section1/section12/index.md
		Found section at tests/wikis/simple/src/section2
		Found page at tests/wikis/simple/src/section2/index.md
		Found section at tests/wikis/simple/src/section2/section21
		Found section config at tests/wikis/simple/src/section2/section21/section.ini
		Found page at tests/wikis/simple/src/section2/section21/index.md
		Found section at tests/wikis/simple/src/section2/section21/section211
		Found section config at tests/wikis/simple/src/section2/section21/section211/section.ini
		Found page at tests/wikis/simple/src/section2/section21/section211/index.md
		Found section at tests/wikis/simple/src/section2/section22
		Found section config at tests/wikis/simple/src/section2/section22/section.ini
		Found page at tests/wikis/simple/src/section2/section22/index.md
		New resources:

		 + /index.md
		 + /page1.md
		 + /page2.md
		 + /section1
		 + /section1/index.md
		 + /section1/section11
		 + /section1/section11/index.md
		 + /section1/section12
		 + /section1/section12/index.md
		 + /section2
		 + /section2/index.md
		 + /section2/section21
		 + /section2/section21/index.md
		 + /section2/section21/section211
		 + /section2/section21/section211/index.md
		 + /section2/section22
		 + /section2/section22/index.md

		Render them to HTML by typing:

			nitiwiki render""")
	end
end
