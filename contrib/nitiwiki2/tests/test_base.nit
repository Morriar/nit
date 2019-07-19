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

abstract class TestBase
	fun wiki_simple: Wiki do
		var wiki =new Wiki
		wiki.add new Section("s1")
		wiki.add new Section("s2")
		wiki.add new DummyPage("p1")
		wiki.add new DummyPage("p2")
		return wiki
	end

	fun wiki_nested: Wiki do
		var wiki = new Wiki
		wiki.add new DummyPage("p1")
		var s1 = new Section("s1")
		wiki.add s1
		s1.add new DummyPage("p2")
		var s11 = new Section("s11")
		s1.add s11
		s11.add new DummyPage("p3")
		var s12 = new Section("s12")
		s1.add s12
		var s2 = new Section("s2")
		wiki.add s2
		var s21 = new Section("s21")
		s2.add s21
		var s211 = new Section("s211")
		s21.add s211
		s211.add new DummyPage("p4")
		return wiki
	end
end

class TestWiki
	super TestBase
	test

	fun every_wiki_has_a_root is test do
		var wiki = new Wiki
		assert wiki.root.name == "<root>"
		assert wiki.entries.length == 1
		assert wiki.to_ansi == "<root>\n"
	end

	fun wiki_contains_entries is test do
		var wiki = wiki_simple
		assert wiki.to_ansi == """<root>
  s1
  s2
  p1
  p2\n"""
	end

	fun entries_can_be_nested is test do
		var wiki = wiki_nested
		assert wiki.entries.length == 11
		assert wiki.to_ansi == """<root>
  p1
  s1
    p2
    s11
      p3
    s12
  s2
    s21
      s211
        p4\n"""
	end
end

class TestEntries
	super TestBase
	test

	fun entries_can_be_searched_by_name is test do
		var wiki = new Wiki
		wiki.add new Section("foo")
		wiki.add new Section("foo")
		wiki.add new DummyPage("foo")
		wiki.add new DummyPage("foo")
		wiki.add new DummyPage("bar")

		assert wiki.entries_by_name("foo").length == 4
		assert wiki.entries_by_name("bar").length == 1
		assert wiki.entries_by_name("not_found").length == 0
	end

	fun entries_have_a_path is test do
		var wiki = wiki_nested
		assert test_path(wiki, "s1") isa Section
		assert test_path(wiki, "s2") isa Section
		assert test_path(wiki, "s1/s11") isa Section
		assert test_path(wiki, "s1/s12") isa Section
		assert test_path(wiki, "s2/s21") isa Section
		assert test_path(wiki, "s2/s21/s211") isa Section
		assert test_path(wiki, "p1") isa Page
		assert test_path(wiki, "s1/p2") isa Page
		assert test_path(wiki, "s1/s11/p3") isa Page
		assert test_path(wiki, "s2/s21/s211/p4") isa Page
	end

	fun entry_have_relative_path_to_another is test do
		var wiki = wiki_nested
		assert test_path_to(wiki, "s1", "s1") == ""
		assert test_path_to(wiki, "s1", "s2") == "../s2"
		assert test_path_to(wiki, "s1", "s1/s11") == "s11"
		assert test_path_to(wiki, "s1", "s1/s12") == "s12"
		assert test_path_to(wiki, "s1", "s2/s21") == "../s2/s21"
		assert test_path_to(wiki, "s1", "s2/s21/s211") == "../s2/s21/s211"
		assert test_path_to(wiki, "s1", "p1") == "../p1"
		assert test_path_to(wiki, "s1", "s1/p2") == "p2"
		assert test_path_to(wiki, "s1", "s1/s11/p3") == "s11/p3"
		assert test_path_to(wiki, "s1", "s2/s21/s211/p4") == "../s2/s21/s211/p4"
	end

	fun can_display_prettier_names is test do
		assert (new DummyPage("")).pretty_name == ""
		assert (new DummyPage(" ")).pretty_name == " "
		assert (new DummyPage("_")).pretty_name == " "
		assert (new DummyPage("f")).pretty_name == "F"
		assert (new DummyPage("foo")).pretty_name == "Foo"
		assert (new DummyPage("Foo")).pretty_name == "Foo"
		assert (new DummyPage("ééé")).pretty_name == "ééé" # FIXME?
		assert (new DummyPage("foo bar")).pretty_name == "Foo Bar"
		assert (new DummyPage("foo/bar")).pretty_name == "Foo/Bar"
		assert (new DummyPage("foo_bar")).pretty_name == "Foo Bar"
		assert (new DummyPage(" foo ")).pretty_name == " Foo "
	end

	private fun test_path(wiki: Wiki, path: String): Entry do
		var e = wiki.entry_by_path(path)
		assert e != null
		return e
	end

	private fun test_path_to(wiki: Wiki, from, to: String): String do
		var f = wiki.entry_by_path(from)
		assert f != null
		var t = wiki.entry_by_path(to)
		assert t != null
		return f.path_to(t)
	end
end

class TestSection
	test

	fun section_can_have_an_index is test do
		var s = new Section("foo")
		assert s.index == null
		assert not s.has_index
		s.add new Section("foo")
		assert not s.has_index
		s.add new Section("index")
		assert not s.has_index
		s.add new DummyPage("foo")
		assert not s.has_index
		var index = new DummyPage("index")
		s.add index
		assert s.has_index
		assert s.index == index
	end
end

class DummyPage
	super Page
end
