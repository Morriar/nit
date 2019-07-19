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

module test_base is test

intrude import wiki_base

abstract class TestBase
	# Path helpers
	# FIXME nitunit should provide a service to get the file path

	var tests_configs: String = "tests/data/configs" is lazy
	var tests_wikis: String = "tests/data/wikis" is lazy
end

class TestWiki
	super TestBase
	test

	fun new_wiki_empty is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))
		wiki.parse
		assert wiki.config.wiki_name == "Empty"
		assert wiki.entries.length == 1
		var root = wiki.entries.values.first
		assert root isa WikiSection
		assert root.title == "Empty"
		assert root.is_root
		assert root == wiki.root_section
	end

	fun new_wiki_not_found is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_configs / "config_not_found"))
		# wiki.parse # FIXME handle errors
		print wiki
	end

	fun new_wiki_one_file is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "one/config.ini"))
		wiki.parse
		assert wiki.entries.length == 2
		var section = wiki.entries.values.first
		assert section isa WikiSection
		assert section.title == "One"
		var article = wiki.entries.values.to_a.last
		assert article isa WikiArticle
		assert article.title == "One"
	end

	fun new_wiki_simple is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "simple/config.ini"))
		wiki.parse
		assert wiki.entries.length == 18
	end

	fun list_md_files is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))
		# assert wiki.list_md_files("not_found").is_empty # FIXME
		assert wiki.list_md_files(tests_wikis / "empty").is_empty
		assert wiki.list_md_files(tests_wikis / "simple") == [
			"tests/data/wikis/simple/pages/index.md",
			"tests/data/wikis/simple/pages/page1.md",
			"tests/data/wikis/simple/pages/page2.md",
			"tests/data/wikis/simple/pages/section1/index.md",
			"tests/data/wikis/simple/pages/section1/section11/index.md",
			"tests/data/wikis/simple/pages/section1/section12/index.md",
			"tests/data/wikis/simple/pages/section2/index.md",
			"tests/data/wikis/simple/pages/section2/section21/index.md",
			"tests/data/wikis/simple/pages/section2/section21/section211/index.md",
			"tests/data/wikis/simple/pages/section2/section22/index.md"
		]
	end

	fun new_section is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))
		wiki.parse

		var section = wiki.new_section("not_found")
		assert section.title == "Not Found" # FIXME wtf?

		section = wiki.new_section(tests_wikis)
		assert section.title == "Wikis" # FIXME wtf?

		section = wiki.new_section(tests_wikis / "empty") # FIXME wtf?
		assert section.title == "Empty" # FIXME wtf?

		section = wiki.new_section(tests_wikis / "empty/pages") # FIXME wtf?
		assert section == wiki.root_section
		assert section.title == "Empty" # FIXME wtf?

		section = wiki.new_section(tests_wikis / "empty/pages/foo")
		assert section.parent == wiki.root_section
		assert section.title == "Foo"

		section = wiki.new_section(tests_wikis / "empty/pages/baz/bar/foo")
		assert section.title == "Foo"
		assert section.parent.as(not null).title == "Bar"
		assert section.parent.as(not null).parent.as(not null).title == "Baz"

		section = wiki.new_section(tests_wikis / "empty/pages/bar/baz////")
		assert section.title == "Baz"
		assert section.parent.as(not null).title == "Bar"
	end

	fun new_article is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))
		wiki.parse

		var article = wiki.new_article("not_found")
		assert article.title == "Not Found" # FIXME wtf?

		# article = wiki.new_article(tests_wikis) # FIXME wtf?

		article = wiki.new_article(tests_wikis / "empty")
		assert article.title == "Empty" # FIXME wtf?

		# article = wiki.new_article(tests_wikis / "empty/pages") # FIXME wtf?

		article = wiki.new_article(tests_wikis / "empty/pages/foo")
		assert article.parent == wiki.root_section
		assert article.title == "Foo"

		# article = wiki.new_article(tests_wikis / "empty/pages/foo/bar/baz") # FIXME :(

		article = wiki.new_article(tests_wikis / "empty/pages/baz/bar/foo")
		assert article.parent.as(not null).title == "Bar"
		assert article.title == "Foo"
	end

	fun expand_path is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))

		assert wiki.expand_path("") == "/"
		assert wiki.expand_path("foo") == "foo"
		assert wiki.expand_path("/foo") == "/foo"
		assert wiki.expand_path("//foo") == "/foo"
		assert wiki.expand_path("/foo/") == "/foo"
		assert wiki.expand_path("/foo//") == "/foo"
		assert wiki.expand_path("foo", "/bar") == "/bar"
		assert wiki.expand_path("foo", "bar") == "foo/bar"
		assert wiki.expand_path("/foo", "/bar") == "/bar"
		assert wiki.expand_path("/foo", "bar") == "/foo/bar"
		assert wiki.expand_path("/foo", "bar/") == "/foo/bar"
		assert wiki.expand_path("/foo", "bar//") == "/foo/bar"
		assert wiki.expand_path("/foo", "bar//baz/") == "/foo/bar/baz"
	end

	fun pretty_name is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_wikis / "empty/config.ini"))

		assert wiki.pretty_name("") == ""
		assert wiki.pretty_name(" ") == " "
		assert wiki.pretty_name("_") == " "
		assert wiki.pretty_name("f") == "F"
		assert wiki.pretty_name("foo") == "Foo"
		assert wiki.pretty_name("Foo") == "Foo"
		assert wiki.pretty_name("ééé") == "ééé" # FIXME
		assert wiki.pretty_name("foo bar") == "Foo Bar"
		assert wiki.pretty_name("foo/bar") == "Foo/Bar"
		assert wiki.pretty_name("foo_bar") == "Foo Bar"
		assert wiki.pretty_name(" foo ") == " Foo "
	end
end

class TestEntry
	super TestBase
	test

	var wiki_empty = new Nitiwiki(new WikiConfig(tests_configs / "empty.ini"))

	fun children is test do
		var wiki = wiki_empty
		var s1 = new WikiSection(wiki, "S1")
		var s2 = new WikiSection(wiki, "S2")
		var s3 = new WikiSection(wiki, "S3")
		var s4 = new WikiSection(wiki, "S4")
		var a1 = new WikiArticle(wiki, "A1")
		var a2 = new WikiArticle(wiki, "A2")
		var a3 = new WikiArticle(wiki, "A3")
		var a4 = new WikiArticle(wiki, "A4")

		s1.add_child s2
		s1.add_child s3
		s1.add_child a1
		s1.add_child a2
		s2.add_child s4
		s2.add_child a3
		s4.add_child a4

		assert s1.children.length == 4
		assert s2.children.length == 2
		assert s4.children.length == 1
	end

	fun breadcrumbs is test do
		var wiki = wiki_empty
		var s1 = new WikiSection(wiki, "S1")
		var s2 = new WikiSection(wiki, "S2")
		var s3 = new WikiSection(wiki, "S3")
		var s4 = new WikiSection(wiki, "S4")
		var a1 = new WikiArticle(wiki, "A1")
		var a2 = new WikiArticle(wiki, "A2")
		var a3 = new WikiArticle(wiki, "A3")
		var a4 = new WikiArticle(wiki, "A4")

		s1.add_child s2
		s1.add_child s3
		s1.add_child a1
		s1.add_child a2
		s2.add_child s4
		s2.add_child a3
		s4.add_child a4

		assert s1.breadcrumbs.is_empty # FIXME should be s1 to be consitent?
		assert s2.breadcrumbs.to_s == "[S2]"
		assert s3.breadcrumbs.to_s == "[S3]"
		assert s4.breadcrumbs.to_s == "[S2,S4]"
		assert a1.breadcrumbs.to_s == "[A1 (S1)]"
		assert a2.breadcrumbs.to_s == "[A2 (S1)]"
		assert a3.breadcrumbs.to_s == "[S2,A3 (S2)]"
		assert a4.breadcrumbs.to_s == "[S2,S4,A4 (S4)]"
	end
end

class TestSection
	super TestBase
	test

	var wiki_empty = new Nitiwiki(new WikiConfig(tests_configs / "empty.ini"))

	fun new_section_root is test do
		var section = new WikiSection(wiki_empty, "Test Root")
		assert section.name == "Test Root"
		assert section.title == "MyWiki" # FIXME should be Test Index
		assert section.has_source # FIXME should be false?
		assert not section.has_config
		# assert section.create_time == -1 # FIXME
		# assert section.last_edit_time == -1 # FIXME
		# assert section.last_render_time == -1 # FIXME
		assert section.parent == null
		assert section.is_root
		assert section.children.is_empty
		assert section.breadcrumbs.length == 0
		assert section.src_path == "pages"
		assert section.src_full_path == "./pages"
		# assert section.out_path == null # FIXME
		# assert section.out_full_path == null # FIXME
		# assert section.is_new # FIXME
		# assert not section.is_dirty # FIXME
		assert not section.is_hidden
	end

	fun new_section_not_root is test do
		var wiki = wiki_empty
		var parent = new WikiSection(wiki, "Test Parent")
		var section = new WikiSection(wiki, "Test Root")
		section.parent = parent
		assert section.name == "Test Root"
		assert section.title == "Test Root"
		assert section.has_source # FIXME should be false?
		assert not section.has_config
		# assert section.create_time == -1 # FIXME
		# assert section.last_edit_time == -1 # FIXME
		# assert section.last_render_time == -1 # FIXME
		assert section.parent == parent
		assert section.children.is_empty
		# assert not parent.children.is_empty # FIXME
		assert not section.is_root
		assert section.breadcrumbs.length == 1
		assert section.src_path == "pages/Test Root" # FIXME escape?
		assert section.src_full_path == "./pages/Test Root" # FIXME escape?
		# assert section.out_path == null # FIXME
		# assert section.out_full_path == null # FIXME
		# assert section.is_new # FIXME
		# assert not section.is_dirty # FIXME
		assert not section.is_hidden
	end

	fun with_config_not_found is test do
		var section = new WikiSection(wiki_empty, "Test Root")
		section.config = new SectionConfig(tests_configs / "section_not_found")
		assert section.name == "Test Root"
		assert section.title == "MyWiki" # FIXME should be null?
		assert section.has_source # FIXME should be false?
		assert section.has_config # FIXME should be false
		# assert section.create_time == -1 # FIXME
		# assert section.last_edit_time == -1 # FIXME
		# assert section.last_render_time == -1 # FIXME
		assert section.children.is_empty
		assert section.is_root
		assert section.breadcrumbs.length == 0
		assert section.src_path == "pages" # FIXME escape?
		assert section.src_full_path == "./pages" # FIXME escape?
		# assert section.out_path == null # FIXME
		# assert section.out_full_path == null # FIXME
		# assert section.is_new # FIXME
		# assert not section.is_dirty # FIXME
		assert not section.is_hidden
	end

	fun with_config_empty is test do
		var section = new WikiSection(wiki_empty, "Test Root")
		section.config = new SectionConfig(tests_configs / "empty.ini")
		assert section.name == "Test Root"
		assert section.title == "MyWiki"
		assert section.has_source
		assert section.has_config
		# assert section.create_time == -1 # FIXME
		# assert section.last_edit_time == -1 # FIXME
		# assert section.last_render_time == -1 # FIXME
		assert section.children.is_empty
		assert section.is_root
		assert section.breadcrumbs.length == 0
		assert section.src_path == "pages" # FIXME escape?
		assert section.src_full_path == "./pages" # FIXME escape?
		# assert section.out_path == null # FIXME
		# assert section.out_full_path == null # FIXME
		# assert section.is_new # FIXME
		# assert not section.is_dirty # FIXME
		assert not section.is_hidden
	end

	fun with_config_dummy is test do
		var section = new WikiSection(wiki_empty, "Test Root")
		section.config = new SectionConfig(tests_configs / "section_dummy.ini")
		assert section.name == "Test Root"
		assert section.title == "Test Title"
		assert section.has_source
		assert section.has_config
		# assert section.create_time == -1 # FIXME
		# assert section.last_edit_time == -1 # FIXME
		# assert section.last_render_time == -1 # FIXME
		assert section.children.is_empty
		assert section.is_root
		assert section.breadcrumbs.length == 0
		assert section.src_path == "pages" # FIXME escape?
		assert section.src_full_path == "./pages" # FIXME escape?
		# assert section.out_path == null # FIXME
		# assert section.out_full_path == null # FIXME
		# assert section.is_new # FIXME
		# assert not section.is_dirty # FIXME
		assert section.is_hidden
	end
end

class TestArticle
	super TestBase
	test

	var wiki_empty = new Nitiwiki(new WikiConfig(tests_configs / "empty.ini"))

	var tests_articles: String = "tests/data/articles" is lazy

	fun new_article_index is test do
		var article = new WikiArticle(wiki_empty, "Test Index")
		assert article.name == "Test Index"
		assert article.title == "MyWiki" # FIXME should be Test Index
		assert not article.has_source
		assert article.create_time == -1
		assert article.last_edit_time == -1
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == null
		assert article.is_root
		assert article.children.is_empty
		assert article.src_path == null
		assert article.src_full_path == null
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.content == null
		assert article.md == null
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end

	fun new_article_not_index is test do
		var wiki = new Nitiwiki(new WikiConfig(tests_configs / "dummy.ini"))
		var parent = new WikiSection(wiki, "Parent")
		var article = new WikiArticle(wiki, "Test Title")
		article.parent = parent
		assert not article.has_source
		assert article.create_time == -1
		assert article.last_edit_time == -1
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == parent
		assert not article.is_root
		assert article.children.is_empty
		# assert not parent.children.is_empty # FIXME
		assert article.src_path == null
		assert article.src_full_path == null
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.title == "Test Title"
		assert article.content == null
		assert article.md == null
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end

	fun from_source_not_found is test do
		var article = new WikiArticle.from_source(wiki_empty, tests_articles / "article_not_found")
		assert article.title == "MyWiki" # FIXME should be null
		assert article.has_source # FIXME should be false
		# assert article.create_time == -1 # FIXME
		# assert article.last_edit_time == -1 # FIXME
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == null
		assert article.is_root
		assert article.children.is_empty
		assert article.src_path == "tests/data/articles/article_not_found"
		assert article.src_full_path == "tests/data/articles/article_not_found"
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.content == "" # FIXME should be null
		assert article.md == "" # FIXME should be null
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end

	fun from_source_empty is test do
		var article = new WikiArticle.from_source(wiki_empty, tests_articles / "empty.md")
		assert article.title == "MyWiki" # FIXME should be null
		assert article.has_source
		assert article.create_time > 0
		assert article.last_edit_time > 0
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == null
		assert article.is_root
		assert article.children.is_empty
		assert article.src_path == "tests/data/articles/empty.md"
		assert article.src_full_path == "tests/data/articles/empty.md"
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.content == ""
		assert article.md == ""
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end

	fun from_source_simple is test do
		var article = new WikiArticle.from_source(wiki_empty, tests_articles / "simple.md")
		assert article.title == "MyWiki" # FIXME should be Test Title
		assert article.has_source
		assert article.create_time > 0
		assert article.last_edit_time > 0
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == null
		assert article.is_root
		assert article.children.is_empty
		assert article.src_path == "tests/data/articles/simple.md"
		assert article.src_full_path == "tests/data/articles/simple.md"
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.content == "# Test Title\n\nAnd an intro.\n"
		assert article.md == "# Test Title\n\nAnd an intro.\n" # FIXME why two field?
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end

	fun from_source_with_parent is test do
		var wiki = wiki_empty
		var parent = new WikiSection(wiki, "Parent")
		var article = new WikiArticle.from_source(wiki_empty, tests_articles / "simple.md")
		article.parent = parent
		assert article.title == "Simple" # FIXME should read from md?
		assert article.has_source
		assert article.create_time > 0
		assert article.last_edit_time > 0
		# assert article.last_render_time == -1 # FIXME
		assert article.parent == parent
		assert not article.is_root
		assert article.children.is_empty
		assert article.src_path == "tests/data/articles/simple.md"
		assert article.src_full_path == "tests/data/articles/simple.md"
		# assert article.out_path == null # FIXME
		# assert article.out_full_path == null # FIXME
		assert article.content == "# Test Title\n\nAnd an intro.\n"
		assert article.md == "# Test Title\n\nAnd an intro.\n" # FIXME why two field?
		# assert article.is_new # FIXME
		# assert not article.is_dirty # FIXME
	end
end

class TestConfig
	super TestBase
	test

	fun config_from_empty_file is test do
		var config = new WikiConfig(tests_configs / "empty.ini")
		assert config.wiki_name == "MyWiki"
	end

	fun config_from_file_not_found is test do
		var config = new WikiConfig(tests_configs / "config_not_found")
		assert config.wiki_name == "MyWiki"
	end

	fun config_from_dummy_file is test do
		var config = new WikiConfig(tests_configs / "dummy.ini")
		assert config.wiki_name == "Test Name"
		assert config.wiki_desc  == "Test desc"
		assert config.wiki_logo  == "test/logo.png"
		assert config.md_ext == "testmd"
		assert config.root_dir == "test/wiki"
		assert config.source_dir == "test/src"
		assert config.templates_dir == "test/templates"
		assert config.template_file == "test/templates/template.tpl"
		assert config.header_file == "test/templates/header.tpl"
		assert config.menu_file == "test/templates/menu.tpl"
		assert config.footer_file == "test/templates/footer.tpl"
		assert not config.auto_summary
		assert not config.auto_breadcrumbs
		assert config.sidebar == "right"
		assert config.sidebar_blocks.length == 3
		assert config.sidebar_blocks.first == "test_block1"
		assert config.sidebar_blocks.last == "test_block3"
		assert config.sidebar_dir == "test/sidebar"
		assert config.rsync_dir == "/test/root"
		assert config.git_origin == "ssh://test"
		assert config.git_branch == "test_branch"
		assert config.last_changes == "http://test/changes"
		assert config.edit == "http://test/edit"
	end
end

class TestSectionConfig
	super TestBase
	test

	fun config_from_empty_file is test do
		var config = new SectionConfig(tests_configs / "config_empty.ini")
		assert not config.is_hidden
		assert config.title == null
	end

	fun config_from_file_not_found is test do
		var config = new SectionConfig(tests_configs / "config_not_found.ini")
		assert not config.is_hidden
		assert config.title == null
	end

	fun config_from_dummy_ini is test do
		var config = new SectionConfig(tests_configs / "section_dummy.ini")
		assert config.is_hidden
		assert config.title == "Test Title"
		assert config.template_file == "test/templates/template.tpl"
		assert config.header_file == "test/templates/header.tpl"
		assert config.menu_file == "test/templates/menu.tpl"
		assert config.footer_file == "test/templates/footer.tpl"
	end
end
