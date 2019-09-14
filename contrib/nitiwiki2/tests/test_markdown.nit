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

	fun links_can_be_names is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = strip_indent("""
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
		"""))

		var links = links(page)
		assert links == [
			"/p1 (DummyPage)",
			"/s1 (Section)",
			"/s1/p2 (DummyPage)",
			"/s1/s11 (Section)",
			"/s1/s11/p3 (DummyPage)",
			"/s1/s12 (Section)",
			"/s2 (Section)",
			"/s2/s21 (Section)",
			"/s2/s21/s211 (Section)",
			"/s2/s21/s211/p4 (DummyPage)",
			"broken"
		]
	end

	fun links_can_be_name_with_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = strip_indent("""
		[[p1#foo]]
		[[s1#foo]]
		[[p2#foo]]
		[[s11#foo]]
		[[p3#foo]]
		[[foo#foo]]"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/p1#foo (DummyPage)",
			"/s1#foo (Section)",
			"/s1/p2#foo (DummyPage)",
			"/s1/s11#foo (Section)",
			"/s1/s11/p3#foo (DummyPage)",
			"broken#foo"
		]
	end

	fun links_can_be_titles is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = strip_indent("""
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
		"""))

		var links = links(page)
		assert links == [
			"/p1 (DummyPage)",
			"/s1 (Section)",
			"/s1/p2 (DummyPage)",
			"/s1/s11 (Section)",
			"/s1/s11/p3 (DummyPage)",
			"/s1/s12 (Section)",
			"/s2 (Section)",
			"/s2/s21 (Section)",
			"/s2/s21/s211 (Section)",
			"/s2/s21/s211/p4 (DummyPage)",
			"broken"
		]
	end

	fun links_can_be_titles_with_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test", md = strip_indent("""
		[[P1#foo]]
		[[S1#foo]]
		[[P2#foo]]
		[[S11#foo]]
		[[P3#foo]]
		[[Foo#foo]]
		"""))

		var links = links(page)
		assert links == [
			"/p1#foo (DummyPage)",
			"/s1#foo (Section)",
			"/s1/p2#foo (DummyPage)",
			"/s1/s11#foo (Section)",
			"/s1/s11/p3#foo (DummyPage)",
			"broken#foo"
		]
	end

	fun conflicts_produce_warnings is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "foo")
		wiki.add s1
		var s2 = new Section(wiki, "foo")
		s1.add s2
		var p1 = new DummyPage(wiki, "foo")
		s2.add p1

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s2.add page

		var out = new StringWriter
		var parser = new MdPageParser(new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == strip_indent("""
		/foo/foo/page:1,1--1,7: Link to conflicting resources: `/foo/foo`, `/foo/foo/foo`, `/foo`
		/foo/foo/page:1,9--1,15: Link to conflicting resources: `/foo/foo`, `/foo/foo/foo`, `/foo`"""
		)
	end

	fun conflicts_always_select_closest_parent is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "foo")
		wiki.add s1
		var s2 = new Section(wiki, "foo")
		s1.add s2
		var p1 = new DummyPage(wiki, "foo")
		s2.add p1

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s2.add page
		assert links(page) == ["/foo/foo (Section)", "/foo/foo (Section)"]
	end

	fun conflicts_then_select_closest_child is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "bar")
		wiki.add s1
		var s2 = new Section(wiki, "foo")
		s1.add s2
		var p1 = new DummyPage(wiki, "foo")
		s2.add p1

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s1.add page
		assert links(page) == ["/bar/foo (Section)", "/bar/foo (Section)"]
	end

	fun conflicts_then_select_closest_sibling is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "foo")
		wiki.add s1
		var s2 = new Section(wiki, "bar")
		s1.add s2
		var p1 = new DummyPage(wiki, "foo")
		s2.add p1

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s2.add page
		assert links(page) == ["/foo/bar/foo (DummyPage)", "/foo/bar/foo (DummyPage)"]
	end

	fun conflicts_then_select_closest_ancestor is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "foo")
		wiki.add s1
		var s2 = new Section(wiki, "foo")
		s1.add s2
		var s3 = new Section(wiki, "bar")
		s2.add s3

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s3.add page
		assert links(page) == ["/foo/foo (Section)", "/foo/foo (Section)"]
	end

	fun conflicts_always_select_closest_cousin is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "baz")
		wiki.add s1
		var s2 = new Section(wiki, "foo")
		s1.add s2
		var p1 = new DummyPage(wiki, "foo")
		s2.add p1
		var s3 = new Section(wiki, "bar")
		wiki.add s3
		var s4 = new Section(wiki, "bar")
		s3.add s4
		var p2 = new DummyPage(wiki, "bar")
		s4.add p2

		var page = new MdPage(wiki, "page", md = "[[foo]] [[Foo]]")
		s4.add page
		assert links(page) == ["/baz/foo (Section)", "/baz/foo (Section)"]
	end

	fun links_can_be_absolute_path is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = strip_indent("""
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
		[[/foo]]"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/ (Root)",
			"/p1 (DummyPage)",
			"/s1 (Section)",
			"/s1/p2 (DummyPage)",
			"/s1/s11 (Section)",
			"/s1/s11/p3 (DummyPage)",
			"/s1/s12 (Section)",
			"/s2 (Section)",
			"/s2/s21 (Section)",
			"/s2/s21/s211 (Section)",
			"/s2/s21/s211/p4 (DummyPage)",
			"broken"
		]
	end

	fun absolute_links_can_have_anchors is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = strip_indent("""
		[[/#foo]]
		[[/p1#foo]]
		[[/s1#foo]]
		[[/s1/p2#foo]]
		[[/s1/s11#foo]]
		[[/s1/s11/p3#foo]]
		[[/foo#foo]]"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/#foo (Root)",
			"/p1#foo (DummyPage)",
			"/s1#foo (Section)",
			"/s1/p2#foo (DummyPage)",
			"/s1/s11#foo (Section)",
			"/s1/s11/p3#foo (DummyPage)",
			"broken#foo"
		]
	end

	fun links_can_point_to_self is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test1", md = strip_indent("""
		[[./]]
		[[.]]
		[[#foo]]
		[[./#foo]]
		[[.#foo]]"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/test1 (MdPage)",
			"/test1 (MdPage)",
			"/test1#foo (MdPage)",
			"/test1#foo (MdPage)",
			"/test1#foo (MdPage)"
		]
	end

	fun links_can_be_relative_paths is test do
		var wiki = wiki_nested
		var page = new MdPage(wiki, "test1", md = strip_indent("""
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
		"""))

		var s1 = wiki.resource_by_path("/s1")
		assert s1 isa Section
		s1.add page

		var links = links(page)
		assert links == [
			"/s1 (Section)",
			"/p1 (DummyPage)",
			"/s1 (Section)",
			"/s1/p2 (DummyPage)",
			"/s1/s12 (Section)",
			"/s1/p2 (DummyPage)",
			"/s1/p2 (DummyPage)",
			"/s1/s11 (Section)",
			"/s1/s11 (Section)",
			"/s1/s11/p3 (DummyPage)"
		]
	end

	fun links_can_point_to_all_kind_of_resources is test do
		var wiki = new Wiki
		wiki.add new Section(wiki, "s1", "S1")
		wiki.add new Section(wiki, "s2")
		wiki.add new MdPage(wiki, "p1", md = "# P1")
		wiki.add new Asset(wiki, "bar.baz", null, "/foo/bar.baz")

		var page = new MdPage(wiki, "test1", md = strip_indent("""
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
		"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/s1 (Section)",
			"/s1 (Section)",
			"/s1 (Section)",
			"/s1#foo (Section)",
			"/s1#foo (Section)",
			"/s1#foo (Section)",
			"/p1 (MdPage)",
			"/p1 (MdPage)",
			"/p1 (MdPage)",
			"/p1#foo (MdPage)",
			"/p1#foo (MdPage)",
			"/p1#foo (MdPage)",
			"/bar.baz (Asset)",
			"/bar.baz (Asset)",
			"/bar.baz#foo (Asset)",
			"/bar.baz#foo (Asset)"
		]
	end

	fun links_can_have_a_title is test do
		var wiki = new Wiki
		wiki.add new Section(wiki, "s1")
		var page = new MdPage(wiki, "test1", md = strip_indent("""
		[[title|/s1]]
		[[ title | s1 ]]
		[[title | S1]]
		[[title|/s1#foo]]
		[[title | /s1#foo]]
		"""))
		wiki.add page

		var links = links(page)
		assert links == [
			"/s1 (Section) - title",
			"/s1 (Section) - title",
			"/s1 (Section) - title",
			"/s1#foo (Section) - title",
			"/s1#foo (Section) - title"
		]
	end

	fun parser_can_log_warnings_without_file_location is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = strip_indent("""
		[[foo]] is broken.

		Another broken link [[/foo#bar]].
		"""))
		wiki.add page

		var out = new StringWriter
		var parser = new MdPageParser(new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == strip_indent("""
		/test:1,1--1,7: Link to unknown resource `foo`
		/test:3,21--3,32: Link to unknown resource `/foo`""")
	end

	fun parser_can_log_warnings_with_file_location is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", file = "./page.md", md = strip_indent("""
		[[foo]] is broken.

		Another broken link [[/foo#bar]].
		"""))

		wiki.add page

		var out = new StringWriter
		var parser = new MdPageParser(new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == strip_indent("""
		./page.md:1,1--1,7: Link to unknown resource `foo`
		./page.md:3,21--3,32: Link to unknown resource `/foo`""")
	end

	fun parser_can_suggest_good_links is test do
		var wiki = new Wiki
		wiki.add new DummyPage(wiki, "foo")
		wiki.add new DummyPage(wiki, "bar")
		wiki.add new DummyPage(wiki, "baz")
		var page = new MdPage(wiki, "test", md = "[[boo]]")
		wiki.add page

		var out = new StringWriter
		var parser = new MdPageParser(new Logger(warn_level, out))
		parser.parse_page(page)

		assert out.to_s == "/test:1,1--1,7: Link to unknown resource `boo`. Did you mean `/foo`?\n"
	end

	# TODO test index?
	# TODO test other commands

	private fun links(page: MdPage): Array[String] do
		var parser = new MdPageParser
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
		if target != null then
			link = "{link} ({target.class_name})"
		end
		var title = self.title
		if title != null then
			link = "{link} - {title}"
		end
		return link
	end
end
