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

module test_builder is test

import wiki_builder
import test_base

class TestWikiBuilder
	test

	private var tests_wikis: String = "tests/wikis" is lazy

	private fun builder: WikiBuilder do return new WikiBuilder(
		logger = new Logger(debug_level)
	)

	fun build_wiki_empty is test do
		var wiki = builder.build_wiki(tests_wikis / "empty")
		assert wiki != null
		assert wiki.root.children.is_empty
	end

	fun build_wiki_not_found is test do
		var wiki = builder.build_wiki(tests_wikis / "not_found")
		assert wiki == null
	end

	fun build_wiki_simple is test do
		var wiki = builder.build_wiki(tests_wikis / "simple")
		assert wiki != null
		assert wiki.to_ansi(false, true) == """<Root>
  Index
  Page1
  Page2
  Section1
    Index
    Section11
      Index
    Section12
      Index
  Section2
    Index
    Section 2.1
      Index
      Section 2.1.1
        Index
    -Section22
      Index\n"""
	end

	fun build_wiki_assets is test do
		var wiki = builder.build_wiki(tests_wikis / "assets")
		assert wiki != null
		assert wiki.to_ansi(true, true) == """<Root>
  .Asset
  Asset1
  Asset2
  Index
  Page1
  Section1
    Asset.1
    Index
    Section11
      Asset
      Index\n"""
	end

	fun build_wiki_allowed_md_exts is test do
		var builder = self.builder
		builder.allowed_md_exts = ["md", "mdown"]
		var wiki = builder.build_wiki(tests_wikis / "md_exts")
		assert wiki != null
		assert wiki.to_ansi(false, true) == """<Root>
  Index
  Page1
  Section1
    Page1\n"""
	end
end
