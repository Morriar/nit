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

import wiki_html

class TestWiki2Html
	# test

	# TODO test full render
end

class TestSectionToHtml
	test

	fun test_wiki: Wiki do return new Wiki

	fun html_link_from_root is test do
		var section = new Section("test")
		assert section.html_link(test_wiki.root) == "<a href=\"test\">Test</a>"
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

	# TODO check with config
	# TODO check with index

	# TODO check full render
		# copu assets
		# gen files
		# gen index
		# templates
end

class TestMdPageToHtml
	test

	fun test_wiki: Wiki do return new Wiki
	fun wiki2html: Wiki2Html do return new Wiki2Html(test_wiki, "")

	fun empty_md_to_html is test do
		var page = new MdPage("test", "")
		assert page.md == ""
		assert page.html_body(wiki2html) == ""
	end

	fun simple_md_to_html is test do
		var page = new MdPage("test", "# Test")
		assert page.md == "# Test"
		assert page.html_body(wiki2html) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_without_template is test do
		var page = new MdPage("test", "# Test")
		assert page.md == "# Test"
		assert page.html(wiki2html) == "<h1 id=\"Test\">Test</h1>\n"
	end

	fun simple_md_to_html_with_default_template_empty is test do
		var v = self.wiki2html
		v.default_template = new PageTemplate("")
		var page = new MdPage("test", "# Test")
		assert page.md == "# Test"
		assert page.html(wiki2html) == ""
	end

	fun html_link_from_root is test do
		var page = new MdPage("test", "")
		assert page.html_link(test_wiki.root) == "<a href=\"test.html\">Test</a>"
	end

	fun html_link_from_self is test do
		var page = new MdPage("test", "")
		assert page.html_link(page) == "<a href=\"#\">Test</a>"
	end

	fun html_link_from_unrelated is test do
		var page = new MdPage("test", "")
		var other = new MdPage("test2", "")
		assert page.html_link(other) == "<a href=\"../test.html\">Test</a>"
	end

	# TODO check md links and commands

	# TODO check full render
		# templates
end

class TestAssetToHtml
	test

	fun test_wiki: Wiki do return new Wiki
	fun wiki2html: Wiki2Html do return new Wiki2Html(test_wiki, "")

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
