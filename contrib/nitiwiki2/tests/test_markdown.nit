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

class TestWikiMarkdown
	test

	fun parse_link_broken is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = """
[[/foo]]
[[foo]]
[[Foo]]
[[/foo#foo]]
[[foo#foo]]
[[Foo#foo]]
		""")

		var links = links(page.ast)
		assert links == [
			"broken",
			"broken",
			"broken",
			"broken#foo",
			"broken#foo",
			"broken#foo"
		]
	end

	fun parse_link_self is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test1", md = """
[[/test1]]
[[test1]]
[[Test1]]
[[#foo]]
[[/test1#foo]]
[[test1#foo]]
[[Test1#foo]]""")
		wiki.add page

		var links = links(page.ast)
		assert links == [
			"/test1",
			"/test1",
			"/test1",
			"/test1#foo",
			"/test1#foo",
			"/test1#foo",
			"/test1#foo"
		]
	end

	fun parse_link_others is test do
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

		var links = links(page.ast)
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

	fun parse_link_nested_root is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "s1", "S1")
		s1.add new MdPage(wiki, "p1", md = "# P1")
		var s11 = new Section(wiki, "s11", "S11")
		s11.add new MdPage(wiki, "p11", md = "# P11")
		s1.add s11
		wiki.add s1

		var page = new MdPage(wiki, "test1", md = """
[[/s1]]
[[/s1/p1]]
[[p1]]
[[P1]]
[[/s1/p1#foo]]
[[p1#foo]]
[[P1#foo]]
[[/s1/s11]]
[[/s1/s11/p11]]
[[p11]]
[[P11]]
""")
		wiki.add page

		var links = links(page.ast)
		assert links == [
			"/s1",
			"/s1/p1",
			"/s1/p1",
			"/s1/p1",
			"/s1/p1#foo",
			"/s1/p1#foo",
			"/s1/p1#foo",
			"/s1/s11",
			"/s1/s11/p11",
			"/s1/s11/p11",
			"/s1/s11/p11"
		]
	end

	fun parse_link_nested_parent is test do
		var wiki = new Wiki
		var s1 = new Section(wiki, "s1", "S1")
		s1.add new MdPage(wiki, "p1", md = "")
		var s11 = new Section(wiki, "s11")
		s1.add s11
		s11.add new MdPage(wiki, "p11", md = "")
		var s2 = new Section(wiki, "s2", "S2")
		s2.add new MdPage(wiki, "p2", md = "")
		wiki.add s1
		wiki.add s2

		var page = new MdPage(wiki, "test1", md = """
[[./]]
[[/]]
[[/s1/p1]]
[[../]]
[[../p11]]
[[../../]]
[[../../p1]]
[[../../../]]
[[../../../s2]]
[[../../../s2/p2]]
""")
		s11.add page

		var links = links(page.ast)
		assert links == [
			"/s1/s11/test1",
			"/",
			"/s1/p1",
			"/s1/s11",
			"/s1/s11/p11",
			"/s1",
			"/s1/p1",
			"/",
			"/s2",
			"/s2/p2"
		]
	end

	# TODO test contexts
	# TODO test nested_children
	# TODO test nested_siblings
	# TODO test conflicts
	# TODO test logger
	# TODO test index?
	# TODO test sitemap?
	# TODO test other commands

	fun links(ast: MdDocument): Array[String] do
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
