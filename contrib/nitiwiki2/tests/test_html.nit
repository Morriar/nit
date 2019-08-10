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

module test_html is test

import wiki_builder
import wiki_html

class MockWiki2Html
	super Wiki2Html
	autoinit wiki, save_html

	redef fun out_path do return "out/"
	var save_html = true is optional, writable
	var test_output = new Buffer

	redef fun mkdir(path) do
		test_output.append "$ mkdir -p -- {path.escape_to_sh}\n"
	end

	redef fun copy(from, to) do
		test_output.append "$ cp -R -- {from.escape_to_sh} {to.escape_to_sh}\n"
	end

	redef fun write_to_file(string, file) do
		test_output.append "$ write to {file}\n"
		if save_html then
			test_output.append string
		end
	end
end

class TestWiki2Html
	test

	private var tests_wikis: String = "tests/wikis" is lazy

	private fun builder: WikiBuilder do return new WikiBuilder(
		logger = new Logger(debug_level)
	)

	fun render_page is test do
		var page = new MdPage("test", md = "# Test")

		var v = new MockWiki2Html(new Wiki, true)
		v.visit(page)
		assert v.test_output == """
$ write to out/test.html
<h1 id="Test">Test</h1>\n"""
	end

	fun render_page_with_default_template is test do
		var page = new MdPage("test", md = "# Test")

		var v = new MockWiki2Html(new Wiki, true)
		# TODO move in base so we have the constructor?
		v.default_template = new PageTemplate("<html>%BODY%</html>\n")
		v.visit(page)
		assert v.test_output == """
$ write to out/test.html
<html><h1 id="Test">Test</h1>
</html>\n"""
	end

	fun render_section is test do
		var section = new Section("s1")
		section.add new MdPage("p1", md = "# P1")
		section.add new MdPage("p2", md = "# P2")

		var v = new MockWiki2Html(new Wiki, true)
		v.visit(section)
		assert v.test_output == """
$ mkdir -p -- 'out/s1'
$ write to out/s1/p1.html
<h1 id="P1">P1</h1>
$ write to out/s1/p2.html
<h1 id="P2">P2</h1>\n"""
	end

	fun render_section_hidden_is_also_rendered is test do
		var section = new Section("s1", is_hidden = true)
		section.add new MdPage("p1", md = "# P1")
		section.add new MdPage("p2", md = "# P2")

		var v = new MockWiki2Html(new Wiki, true)
		v.visit(section)
		assert v.test_output == """
$ mkdir -p -- 'out/s1'
$ write to out/s1/p1.html
<h1 id="P1">P1</h1>
$ write to out/s1/p2.html
<h1 id="P2">P2</h1>\n"""
	end

	fun render_section_with_default_template is test do
		var section = new Section("s1")
		section.add new MdPage("p1", md = "# P1")
		section.add new MdPage("p2", md = "# P2")

		var v = new MockWiki2Html(new Wiki, true)
		v.default_template = new PageTemplate("<html>%BODY%</html>\n")
		v.visit(section)
		assert v.test_output == """
$ mkdir -p -- 'out/s1'
$ write to out/s1/p1.html
<html><h1 id="P1">P1</h1>
</html>
$ write to out/s1/p2.html
<html><h1 id="P2">P2</h1>
</html>\n"""
	end

	fun render_section_with_section_template is test do
		var section = new Section("s1")
		section.template = new PageTemplate("<s1>%BODY%</s1>\n")
		section.add new MdPage("p1", md = "# P1")
		section.add new MdPage("p2", md = "# P2")

		var v = new MockWiki2Html(new Wiki, true)
		v.default_template = new PageTemplate("<html>%BODY%</html>\n")
		v.visit(section)
		assert v.test_output == """
$ mkdir -p -- 'out/s1'
$ write to out/s1/p1.html
<s1><h1 id="P1">P1</h1>
</s1>
$ write to out/s1/p2.html
<s1><h1 id="P2">P2</h1>
</s1>\n"""
	end

	fun render_section_with_section_template_nested is test do
		var section = new Section("s1")
		section.template = new PageTemplate("<s1>%BODY%</s1>\n")
		section.add new MdPage("p1", md = "# P1")
		section.add new MdPage("p2", md = "# P2")

		var s11 = new Section("s11")
		s11.template = new PageTemplate("<s11>%BODY%</s11>\n")
		s11.add new MdPage("p11", md = "# P11")
		section.add s11

		var s12 = new Section("s12")
		s12.add new MdPage("p12", md = "# P12")
		section.add s12

		var v = new MockWiki2Html(new Wiki, true)
		v.default_template = new PageTemplate("<html>%BODY%</html>\n")
		v.visit(section)
		assert v.test_output == """
$ mkdir -p -- 'out/s1'
$ write to out/s1/p1.html
<s1><h1 id="P1">P1</h1>
</s1>
$ write to out/s1/p2.html
<s1><h1 id="P2">P2</h1>
</s1>
$ mkdir -p -- 'out/s1/s11'
$ write to out/s1/s11/p11.html
<s11><h1 id="P11">P11</h1>
</s11>
$ mkdir -p -- 'out/s1/s12'
$ write to out/s1/s12/p12.html
<s1><h1 id="P12">P12</h1>
</s1>\n"""
	end

	fun render_wiki_empty is test do
		assert render_wiki("empty", true) == "$ mkdir -p -- 'out/'\n"
	end

	fun render_wiki_one is test do
		assert render_wiki("one", true) == """
$ mkdir -p -- 'out/'
$ write to out/index.html
<h1 id="Root_One">Root One</h1>\n"""
	end

	fun render_wiki_simple is test do
		assert render_wiki("simple", false) == """
$ mkdir -p -- 'out/'
$ write to out/index.html
$ write to out/page1.html
$ write to out/page2.html
$ mkdir -p -- 'out/section1'
$ write to out/section1/index.html
$ mkdir -p -- 'out/section1/section11'
$ write to out/section1/section11/index.html
$ mkdir -p -- 'out/section1/section12'
$ write to out/section1/section12/index.html
$ mkdir -p -- 'out/section2'
$ write to out/section2/index.html
$ mkdir -p -- 'out/section2/section21'
$ write to out/section2/section21/index.html
$ mkdir -p -- 'out/section2/section21/section211'
$ write to out/section2/section21/section211/index.html
$ mkdir -p -- 'out/section2/section22'
$ write to out/section2/section22/index.html\n"""
	end

	fun render_wiki_conflicts is test do
		assert render_wiki("conflicts", false) == """
$ mkdir -p -- 'out/'
$ mkdir -p -- 'out/bar'
$ mkdir -p -- 'out/bar/bar'
$ write to out/bar/bar/bar.html
$ mkdir -p -- 'out/bar/foo'
$ mkdir -p -- 'out/bar/foo/foo'
$ write to out/bar/foo/foo/foo.html
$ write to out/bar/foo/foo.html
$ write to out/bar/foo.html
$ write to out/bar.html
$ mkdir -p -- 'out/foo'
$ mkdir -p -- 'out/foo/bar'
$ write to out/foo/bar/bar.html
$ mkdir -p -- 'out/foo/foo'
$ write to out/foo/foo/index.html
$ write to out/foo/foo.html
$ write to out/foo.html\n"""
	end

	fun render_wiki_with_template_from_config is test do
		assert render_wiki("templates", true) == """
$ mkdir -p -- 'out/'
$ write to out/index.html
<ROOT>%BODY</ROOT>\n"""
	end

	fun render_wiki_with_template_from_sections is test do
		assert render_wiki("templates_section", true) == """
$ mkdir -p -- 'out/'
$ write to out/index.html
<ROOT>%BODY</ROOT>
$ mkdir -p -- 'out/s1'
$ write to out/s1/index.html
<S1>%BODY</S1>
$ mkdir -p -- 'out/s1/section11'
$ write to out/s1/section11/index.html
<S11>%BODY</S11>
$ mkdir -p -- 'out/s1/section12'
$ write to out/s1/section12/index.html
<S1>%BODY</S1>\n"""
	end

	# TODO
	fun render_wiki_with_assets is test do
		assert render_wiki("assets", false) == """
$ mkdir -p -- 'out/'
$ cp -R -- 'tests/wikis/assets/pages/.asset' 'out/.asset'
$ cp -R -- 'tests/wikis/assets/pages/asset1' 'out/asset1'
$ cp -R -- 'tests/wikis/assets/pages/asset2' 'out/asset2'
$ write to out/index.html
$ write to out/page1.html
$ mkdir -p -- 'out/section1'
$ cp -R -- 'tests/wikis/assets/pages/section1/asset.1' 'out/section1/asset.1'
$ write to out/section1/index.html
$ mkdir -p -- 'out/section1/section11'
$ cp -R -- 'tests/wikis/assets/pages/section1/section11/asset' 'out/section1/section11/asset'
$ write to out/section1/section11/index.html
$ cp -R -- 'tests/wikis/assets/assets/*' 'out/'\n"""
	end

	private fun render_wiki(name: String, with_html: Bool): String do
		var wiki = builder.build_wiki(tests_wikis / name)
		assert wiki != null

		var wiki2html = new MockWiki2Html(wiki, with_html)
		# TODO this is ugly
		wiki2html.root_path = tests_wikis / name
		wiki2html.run
		return wiki2html.test_output.to_s
	end
end

class TestSectionToHtml
	test

	fun html_link_from_root is test do
		var section = new Section("test")
		assert section.html_link(new Root("test")) == "<a href=\"test\">Test</a>"
	end

	fun html_link_from_self is test do
		var section = new Section("test")
		assert section.html_link(section) == "<a href=\"#\">Test</a>"
	end

	fun html_link_from_unrelated is test do
		var section = new Section("test")
		var other = new Section("test2")
		assert section.html_link(other) == "<a href=\"../test\">Test</a>"
	end

	# TODO gen auto index
end

class TestMdPageToHtml
	test

	fun test_wiki: Wiki do return new Wiki
	fun wiki2html: Wiki2Html do return new MockWiki2Html(test_wiki, false)

	fun empty_md_to_html is test do
		var page = new MdPage("test", md = "")
		assert page.html_body(wiki2html) == ""
	end

	fun simple_md_to_html is test do
		var page = new MdPage("test", md = "# Test")
		assert page.html_body(wiki2html) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_without_template is test do
		var page = new MdPage("test", md = "# Test")
		assert page.html(wiki2html) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_with_default_template_empty is test do
		var v = self.wiki2html
		v.default_template = new PageTemplate("")
		var page = new MdPage("test", md = "# Test")
		assert page.html(v) == ""
	end

	fun simple_md_to_html_with_default_template_simple is test do
		var v = self.wiki2html
		v.default_template = new PageTemplate("<div>%BODY%</div>")
		var page = new MdPage("test", md = "# Test")
		assert page.html(v) == "<div><h1 id=\"Test\">Test</h1>\n</div>"
	end

	# TODO test all variables

	fun html_link_from_root is test do
		var page = new MdPage("test", md = "")
		assert page.html_link(test_wiki.root) == "<a href=\"test.html\">Test</a>"
	end

	fun html_link_from_self is test do
		var page = new MdPage("test", md = "")
		assert page.html_link(page) == "<a href=\"#\">Test</a>"
	end

	fun html_link_from_unrelated is test do
		var page = new MdPage("test", md = "")
		var other = new MdPage("test2", md = "")
		assert page.html_link(other) == "<a href=\"../test.html\">Test</a>"
	end

	# TODO check md links and commands
end

class TestAssetToHtml
	test

	fun test_wiki: Wiki do return new Wiki
	fun wiki2html: Wiki2Html do return new MockWiki2Html(test_wiki, false)

	fun html_link_from_root is test do
		var asset = new Asset("/foo/bar/baz/test.jpg")
		assert asset.html_link(test_wiki.root) == "<a href=\"test.jpg\">test.jpg</a>"
	end

	fun html_link_from_self is test do
		var asset = new Asset("/foo/bar/baz/test.jpg")
		assert asset.html_link(asset) == "<a href=\"#\">test.jpg</a>"
	end

	fun html_link_from_unrelated is test do
		var asset = new Asset("/foo/bar/baz/test.jpg")
		var other = new Asset("/baz/bar/foo/test2")
		assert asset.html_link(other) == "<a href=\"../test.jpg\">test.jpg</a>"
	end
end
