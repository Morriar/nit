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

import wiki_base

redef class Wiki
	fun content: String do
		var tpl = new Template
		for resource in resources do
			tpl.addn " * {resource.debug_string}"
		end
		return tpl.write_to_string
	end
end

redef class Resource
	fun debug_string: String do return "{path} ({class_name})"
end

redef class Section
	redef fun debug_string do
		if is_hidden then return "{super} -- hidden"
		return super
	end
end

abstract class TestBase

	# FIXME nitunit should provide a way to access it
	var tests_dir: String = "tests/" is lazy

	# Where the test wikis sources are located
	var wikis_dir: String = tests_dir / "wikis/" is lazy

	fun wiki_simple: Wiki do
		var wiki = new Wiki
		wiki.add new Section(wiki, "s1")
		wiki.add new Section(wiki, "s2")
		wiki.add new DummyPage(wiki, "p1")
		wiki.add new DummyPage(wiki, "p2")
		return wiki
	end

	fun wiki_nested: Wiki do
		var wiki = new Wiki
		wiki.add new DummyPage(wiki, "p1")
		var s1 = new Section(wiki, "s1")
		wiki.add s1
		s1.add new DummyPage(wiki, "p2")
		var s11 = new Section(wiki, "s11")
		s1.add s11
		s11.add new DummyPage(wiki, "p3")
		var s12 = new Section(wiki, "s12")
		s1.add s12
		var s2 = new Section(wiki, "s2")
		wiki.add s2
		var s21 = new Section(wiki, "s21")
		s2.add s21
		var s211 = new Section(wiki, "s211")
		s21.add s211
		s211.add new DummyPage(wiki, "p4")
		return wiki
	end

	fun strip_indent(string: String, level: nullable Int): String do
		var res = new Buffer
		var re = "^{"\t" * (level or else 2)}".to_re
		for line in string.split("\n") do
			res.append line.replace(re, "")
			res.append "\n"
		end
		return res.to_s
	end
end

class TestWiki
	super TestBase
	test

	fun every_wiki_has_a_root is test do
		var wiki = new Wiki
		assert wiki.root.name == "<root>"
		assert wiki.resources.length == 0
		assert wiki.content == ""
	end

	fun wiki_contains_resources is test do
		var wiki = wiki_simple
		assert wiki.content == strip_indent("""
		 * /s1 (Section)
		 * /s2 (Section)
		 * /p1 (DummyPage)
		 * /p2 (DummyPage)""")
	end

	fun resources_can_be_nested is test do
		var wiki = wiki_nested
		assert wiki.resources.length == 10
		assert wiki.content == strip_indent("""
		 * /p1 (DummyPage)
		 * /s1 (Section)
		 * /s1/p2 (DummyPage)
		 * /s1/s11 (Section)
		 * /s1/s11/p3 (DummyPage)
		 * /s1/s12 (Section)
		 * /s2 (Section)
		 * /s2/s21 (Section)
		 * /s2/s21/s211 (Section)
		 * /s2/s21/s211/p4 (DummyPage)""")
	end
end

class TestResources
	super TestBase
	test

	fun can_display_prettier_names is test do
		var wiki = new Wiki
		assert (new DummyPage(wiki, "")).pretty_name == ""
		assert (new DummyPage(wiki, " ")).pretty_name == " "
		assert (new DummyPage(wiki, "_")).pretty_name == " "
		assert (new DummyPage(wiki, "f")).pretty_name == "F"
		assert (new DummyPage(wiki, "foo")).pretty_name == "Foo"
		assert (new DummyPage(wiki, "Foo")).pretty_name == "Foo"
		assert (new DummyPage(wiki, "ééé")).pretty_name == "ééé" # FIXME?
		assert (new DummyPage(wiki, "foo bar")).pretty_name == "Foo Bar"
		assert (new DummyPage(wiki, "foo/bar")).pretty_name == "Foo/Bar"
		assert (new DummyPage(wiki, "foo_bar")).pretty_name == "Foo Bar"
		assert (new DummyPage(wiki, " foo ")).pretty_name == " Foo "
		assert (new DummyPage(wiki, "foo.md")).pretty_name == "Foo"
		assert (new DummyPage(wiki, "Foo.bar.nit")).pretty_name == "Foo.Bar"
	end
end

class TestSection
	super TestBase
	test

	fun section_has_no_title_by_default is test do
		var wiki = new Wiki
		var s = new Section(wiki, "test")
		assert s.name == "test"
		assert s.title == null
		assert s.pretty_name == "Test"

		s = new Section(wiki, "test", title = "My Title")
		assert s.name == "test"
		assert s.title == "My Title"
		assert s.pretty_name == "My Title"
	end

	fun section_is_not_hidden_by_default is test do
		var wiki = new Wiki
		var s = new Section(wiki, "test")
		assert not s.is_hidden

		s = new Section(wiki, "test", is_hidden = true)
		assert s.is_hidden
	end

	fun section_can_have_children is test do
		var wiki = new Wiki
		var r1 = new Section(wiki, "foo")
		var r2 = new Section(wiki, "bar")
		var r3 = new DummyPage(wiki, "baz")

		wiki.add r1
		r1.add r2
		r2.add r3

		assert wiki.resources == [r1, r2, r3: Resource]
		assert wiki.root.children == [r1]
		assert wiki.root.resources == [r1, r2, r3: Resource]
		assert r1.children == [r2]
		assert r1.resources == [r2, r3: Resource]
		assert r2.children == [r3]
		assert r2.resources == [r3]
	end
end

class DummyPage
	super Page
end
