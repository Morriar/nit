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
	autoinit wiki, save_html, logger, highlighter, highlighter_default

	init do
		super
		out_path = "out/" # We don't really use it as we mock the output
	end

	# Also save HTMl content of pages?
	var save_html = true is optional, writable

	# Output of the render
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
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = "# Test")

		var v = new MockWiki2Html(wiki, true)
		v.visit(page)
		assert v.test_output == """
$ write to out/test.html
<h1 id="Test">Test</h1>\n"""
	end

	fun render_page_with_default_template is test do
		var wiki = new Wiki(default_template = new PageTemplate("<html>%BODY%</html>\n"))
		var page = new MdPage(wiki, "test", md = "# Test")

		var v = new MockWiki2Html(wiki, true)
		v.visit(page)
		assert v.test_output == """
$ write to out/test.html
<html><h1 id="Test">Test</h1>
</html>\n"""
	end

	fun render_section is test do
		var wiki = new Wiki
		var section = new Section(wiki, "s1")
		section.add new MdPage(wiki, "p1", md = "# P1")
		section.add new MdPage(wiki, "p2", md = "# P2")

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
		var wiki = new Wiki
		var section = new Section(wiki, "s1", is_hidden = true)
		section.add new MdPage(wiki, "p1", md = "# P1")
		section.add new MdPage(wiki, "p2", md = "# P2")

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
		var wiki = new Wiki(default_template = new PageTemplate("<html>%BODY%</html>\n"))
		var section = new Section(wiki, "s1")
		section.add new MdPage(wiki, "p1", md = "# P1")
		section.add new MdPage(wiki, "p2", md = "# P2")

		var v = new MockWiki2Html(wiki, true)
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
		var wiki = new Wiki(default_template = new PageTemplate("<html>%BODY%</html>\n"))
		var section = new Section(wiki, "s1")
		section.default_template = new PageTemplate("<s1>%BODY%</s1>\n")
		section.add new MdPage(wiki, "p1", md = "# P1")
		section.add new MdPage(wiki, "p2", md = "# P2")

		var v = new MockWiki2Html(wiki, true)
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
		var wiki = new Wiki(default_template = new PageTemplate("<html>%BODY%</html>\n"))
		var section = new Section(wiki, "s1")
		section.default_template = new PageTemplate("<s1>%BODY%</s1>\n")
		section.add new MdPage(wiki, "p1", md = "# P1")
		section.add new MdPage(wiki, "p2", md = "# P2")

		var s11 = new Section(wiki, "s11")
		s11.default_template = new PageTemplate("<s11>%BODY%</s11>\n")
		s11.add new MdPage(wiki, "p11", md = "# P11")
		section.add s11

		var s12 = new Section(wiki, "s12")
		s12.add new MdPage(wiki, "p12", md = "# P12")
		section.add s12

		var v = new MockWiki2Html(wiki, true)
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
		wiki2html.render
		return wiki2html.test_output.to_s
	end
end

class TestSectionToHtml
	test

	fun html_link_from_root is test do
		var wiki = new Wiki
		var section = new Section(wiki, "test")
		assert section.html_link(wiki.root) == "<a href=\"test\">Test</a>"
	end

	fun html_link_from_self is test do
		var wiki = new Wiki
		var section = new Section(wiki, "test")
		assert section.html_link(section) == "<a href=\"#\">Test</a>"
	end

	fun html_link_from_unrelated is test do
		var wiki = new Wiki
		var section = new Section(wiki, "test")
		var other = new Section(wiki, "test2")
		assert section.html_link(other) == "<a href=\"../test\">Test</a>"
	end

	# TODO gen auto index
end

class TestMdPageToHtml
	test

	fun empty_md_to_html is test do
		var wiki = new Wiki
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = "")
		assert page.html_body(v) == ""
	end

	fun simple_md_to_html is test do
		var wiki = new Wiki
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = "# Test")
		assert page.html_body(v) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_without_template is test do
		var wiki = new Wiki
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = "# Test")
		assert page.html(v) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_with_default_template_empty is test do
		var wiki = new Wiki(default_template = new PageTemplate(""))
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = "# Test")
		assert page.html(v) == ""
	end

	fun simple_md_to_html_with_default_template_simple is test do
		var wiki = new Wiki(default_template = new PageTemplate("<div>%BODY%</div>"))
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = "# Test")
		assert page.html(v) == "<div><h1 id=\"Test\">Test</h1>\n</div>"
	end

	fun md_code_blocs_are_not_highlighted_by_default is test do
		var wiki = new Wiki
		var v = new MockWiki2Html(wiki, false)
		var page = new MdPage(wiki, "test", md = """
A code example:

	print \"Hello, World!\"

Another example:

~~~
print \"Hello, World!\"
~~~""")
		assert page.html(v) == """
<p>A code example:</p>
<pre><code>print &quot;Hello, World!&quot;
</code></pre>
<p>Another example:</p>
<pre><code>print &quot;Hello, World!&quot;
</code></pre>
"""
	end

	fun md_code_blocs_can_have_a_default_language is test do
		var wiki = new Wiki
		var v = new MockWiki2Html(wiki, false, highlighter_default = "nit")
		var page = new MdPage(wiki, "test", md = """
A code example:

	print \"Hello, World!\"

Another example:

~~~
print \"Hello, World!\"
~~~""")
		assert page.html(v) == """
<p>A code example:</p>
<pre><code class="language-nit">print &quot;Hello, World!&quot;
</code></pre>
<p>Another example:</p>
<pre><code class="language-nit">print &quot;Hello, World!&quot;
</code></pre>
"""
	end

	fun md_code_blocs_can_be_highlighted is test do
		var wiki = new Wiki
		var stdout = new StringWriter
		var logger = new Logger(info_level, stdout)
		var v = new MockWiki2Html(wiki, false, logger = logger,
			highlighter = "tests/highlighters/simple", highlighter_default = "nit")
		var page = new MdPage(wiki, "test", md = """
A code example:

	print \"Hello, World!\"

Another example:

~~~
print \"Hello, World!\"
~~~

~~~js
print \"Hello, World!\"
~~~
""")
		assert page.html(v) == """
<p>A code example:</p>
<nit>
print "Hello, World!"
</nit>
<p>Another example:</p>
<nit>
print "Hello, World!"
</nit>
<js>
print "Hello, World!"
</js>
"""
		assert stdout.to_s == """
Executing `tests/highlighters/simple` `nit` (in /test:3,1--3,25)
Executing `tests/highlighters/simple` `nit` (in /test:7,1--9,3)
Executing `tests/highlighters/simple` `js` (in /test:11,1--13,3)
"""
	end

	fun rendered_warn_if_problem_with_hilighter is test do
		var wiki = new Wiki
		var stdout = new StringWriter
		var logger = new Logger(info_level, stdout)
		var v = new MockWiki2Html(wiki, false, logger = logger,
			highlighter = "tests/highlighters/broken")

		var page = new MdPage(wiki, "test", md = """
~~~nit
print \"Hello, World!\"
~~~""")
		assert page.html(v) == """
<pre><code class="language-nit">print &quot;Hello, World!&quot;
</code></pre>
"""

		assert stdout.to_s == """
Executing `tests/highlighters/broken` `nit` (in /test:1,1--3,3)
/test:1,1--3,3: `tests/highlighters/broken` `nit` returned 42
/test:1,1--3,3: `tests/highlighters/broken` `nit` produced nothing
"""
	end

	# TODO test all variables

	fun html_link_from_root is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = "")
		assert page.html_link(wiki.root) == "<a href=\"test.html\">Test</a>"
	end

	fun html_link_from_self is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = "")
		assert page.html_link(page) == "<a href=\"#\">Test</a>"
	end

	fun html_link_from_unrelated is test do
		var wiki = new Wiki
		var page = new MdPage(wiki, "test", md = "")
		var other = new MdPage(wiki, "test2", md = "")
		assert page.html_link(other) == "<a href=\"../test.html\">Test</a>"
	end

	fun render_wikilinks_links is test do
		var wiki = new Wiki
		var p1 = new MdPage(wiki, "p1", md = "")
		wiki.add p1
		var p2 = new MdPage(wiki, "p2", md = """
[[p1]]
[[p1#foo]]
[[title | p1]]
[[title | p1#foo]]""")
		wiki.add p2

		var v = new MockWiki2Html(wiki, false)
		assert p2.html(v) == """
<p><a href="../p1.html">P1</a>
<a href="../p1.html#foo">P1</a>
<a href="../p1.html">title</a>
<a href="../p1.html#foo">title</a></p>
"""
	end

	# TODO check commands
end

class TestAssetToHtml
	test

	fun html_link_from_root is test do
		var wiki = new Wiki
		var asset = new Asset(wiki, null, "/foo/bar/baz/test.jpg")
		assert asset.html_link(wiki.root) == "<a href=\"test.jpg\">test.jpg</a>"
	end

	fun html_link_from_self is test do
		var wiki = new Wiki
		var asset = new Asset(wiki, null, "/foo/bar/baz/test.jpg")
		assert asset.html_link(asset) == "<a href=\"#\">test.jpg</a>"
	end

	fun html_link_from_unrelated is test do
		var wiki = new Wiki
		var asset = new Asset(wiki, null, "/foo/bar/baz/test.jpg")
		var other = new Asset(wiki, null, "/baz/bar/foo/test2")
		assert asset.html_link(other) == "<a href=\"../test.jpg\">test.jpg</a>"
	end
end
