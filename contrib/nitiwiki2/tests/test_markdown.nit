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

module test_markdown is test

import wiki_markdown
import test_base

class TestWikiMarkdown
	super TestBase
	test

	fun parse_name_links is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = """
[[p1]]
[[s1]]
[[p2]]
[[s11]]
[[p3]]
[[s12]]
[[s2]]
[[s21]]
[[s211]]
[[p4]]
[[foo]]
""")

		var links = links(page)
		assert links == [
			"/p1",
			"/s1",
			"/s1/p2",
			"/s1/s11",
			"/s1/s11/p3",
			"/s1/s12",
			"/s2",
			"/s2/s21",
			"/s2/s21/s211",
			"/s2/s21/s211/p4",
			"broken"
		]
	end

	fun parse_name_links_with_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = """
[[p1#foo]]
[[s1#foo]]
[[p2#foo]]
[[s11#foo]]
[[p3#foo]]
[[foo#foo]]""")
		wiki.add page

		var links = links(page)
		assert links == [
			"/p1#foo",
			"/s1#foo",
			"/s1/p2#foo",
			"/s1/s11#foo",
			"/s1/s11/p3#foo",
			"broken#foo"
		]
	end

	fun parse_title_links is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = """
[[P1]]
[[S1]]
[[P2]]
[[S11]]
[[P3]]
[[S12]]
[[S2]]
[[S21]]
[[S211]]
[[P4]]
[[Foo]]
""")

		var links = links(page)
		assert links == [
			"/p1",
			"/s1",
			"/s1/p2",
			"/s1/s11",
			"/s1/s11/p3",
			"/s1/s12",
			"/s2",
			"/s2/s21",
			"/s2/s21/s211",
			"/s2/s21/s211/p4",
			"broken"
		]
	end

	fun parse_title_links_with_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = """
[[P1#foo]]
[[S1#foo]]
[[P2#foo]]
[[S11#foo]]
[[P3#foo]]
[[Foo#foo]]
""")

		var links = links(page)
		assert links == [
			"/p1#foo",
			"/s1#foo",
			"/s1/p2#foo",
			"/s1/s11#foo",
			"/s1/s11/p3#foo",
			"broken#foo"
		]
	end

	fun parse_absolute_links is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = """
[[/]]
[[/p1]]
[[/s1]]
[[/s1/p2]]
[[/s1/s11]]
[[/s1/s11/p3]]
[[/s1/s12]]
[[/s2]]
[[/s2/s21]]
[[/s2/s21/s211]]
[[/s2/s21/s211/p4]]
[[/foo]]""")
		wiki.add page

		var links = links(page)
		assert links == [
			"/",
			"/p1",
			"/s1",
			"/s1/p2",
			"/s1/s11",
			"/s1/s11/p3",
			"/s1/s12",
			"/s2",
			"/s2/s21",
			"/s2/s21/s211",
			"/s2/s21/s211/p4",
			"broken"
		]
	end

	fun parse_absolute_links_with_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = """
[[/#foo]]
[[/p1#foo]]
[[/s1#foo]]
[[/s1/p2#foo]]
[[/s1/s11#foo]]
[[/s1/s11/p3#foo]]
[[/foo#foo]]""")
		wiki.add page

		var links = links(page)
		assert links == [
			"/#foo",
			"/p1#foo",
			"/s1#foo",
			"/s1/p2#foo",
			"/s1/s11#foo",
			"/s1/s11/p3#foo",
			"broken#foo"
		]
	end

	fun parse_relative_links_to_self is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test1", md = """
[[./]]
[[.]]
[[#foo]]
[[./#foo]]
[[.#foo]]""")
		wiki.add page

		var links = links(page)
		assert links == [
			"/test1",
			"/test1",
			"/test1#foo",
			"/test1#foo",
			"/test1#foo"
		]
	end

	fun parse_relative_links is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = """
[[../]]
[[../../p1]]
[[../../s1]]
[[../../s1/p2]]
[[../s12]]
[[p2]]
[[./p2]]
[[./s11]]
[[s11]]
[[s11/p3]]
""")

		var s1 = wiki.resource_by_path("/s1")
		assert s1 isa Section
		s1.add page

		var links = links(page)
		assert links == [
			"/s1",
			"/p1",
			"/s1",
			"/s1/p2",
			"/s1/s12",
			"/s1/p2",
			"broken", # TODO should be /s1/p2
			"broken", # TODO should be /s1/s11
			"/s1/s11",
			"broken" # TODO should be /s1/s11/p3
		]
	end

  # TODO test conflicts

  fun parse_links_to_all_resources is test do
		var wiki = new Wiki
		wiki.add new Section(wiki, "s1", "S1")
		wiki.add new Section(wiki, "s2")
		wiki.add new MdPage(wiki, "p1", md = "# P1")
		wiki.add new Asset(wiki, null, "/foo/bar.baz")

		var page = new MdPage(wiki, "test1", md = """
[[/s1]]
[[s1]]
[[S1]]
[[/s1#foo]]
[[s1#foo]]
[[S1#foo]]
[[/p1]]
[[p1]]
[[P1]]
[[/p1#foo]]
[[p1#foo]]
[[P1#foo]]
[[/bar.baz]]
[[bar.baz]]
[[/bar.baz#foo]]
[[bar.baz#foo]]
""")
		wiki.add page

		var links = links(page)
		assert links == [
			"/s1",
			"/s1",
			"/s1",
			"/s1#foo",
			"/s1#foo",
			"/s1#foo",
			"/p1",
			"/p1",
			"/p1",
			"/p1#foo",
			"/p1#foo",
			"/p1#foo",
			"/bar.baz",
			"/bar.baz",
			"/bar.baz#foo",
			"/bar.baz#foo"
		]
	end

	fun test_parser_log_warnings_without_file is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = """
[[foo]] is broken.

Another broken link [[/foo#bar]].
""")

		var s1 = wiki.resource_by_path("/s1")
		assert s1 isa Section
		s1.add page

		var out = new StringWriter
		var parser = new MdPageParser(wiki, new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == """
/s1/test:1,1--1,7: Link to unknown resource `foo`
/s1/test:3,21--3,32: Link to unknown resource `/foo`
"""
	end

	fun test_parser_log_warnings_with_file is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", file = "./page.md", md = """
[[foo]] is broken.

Another broken link [[/foo#bar]].
""")

		var s1 = wiki.resource_by_path("/s1")
		assert s1 isa Section
		s1.add page

		var out = new StringWriter
		var parser = new MdPageParser(wiki, new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == """
./page.md:1,1--1,7: Link to unknown resource `foo`
./page.md:3,21--3,32: Link to unknown resource `/foo`
"""
	end

	# TODO test index?
	# TODO test other commands

	fun links(page: MdPage): Array[String] do
		var parser = new MdPageParser(page.wiki)
		var ast = parser.parse_page(page)
		var v = new MdWikilinkCollector
		v.enter_visit(ast)
		return v.wikilinks
	end
end

private class MdWikilinkCollector
	super MdVisitor

	var wikilinks = new Array[String]

	redef fun visit(node) do
		if node isa MdWikilink then
			wikilinks.add node.debug_string
		end
		node.visit_all self
	end
end

redef class MdWikilink
	fun debug_string: String do
		var link = "broken"
		var target = self.target
		if target != null then
			link = target.path
		end
		var anchor = self.anchor
		if anchor != null then
			link = "{link}#{anchor}"
		end
		return link
	end
end
