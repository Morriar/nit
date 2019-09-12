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
	super TestBase
	test

	fun builder: WikiBuilder do return new WikiBuilder(
		logger = new Logger(debug_level)
	)

	fun build_wiki_empty is test do
		var wiki = builder.build_wiki(wikis_dir / "empty")
		assert wiki != null
		assert wiki.root.children.is_empty
	end

	fun build_wiki_not_found is test do
		var wiki = builder.build_wiki(wikis_dir / "not_found")
		assert wiki == null
	end

	fun build_wiki_simple is test do
		var wiki = builder.build_wiki(wikis_dir / "simple")
		assert wiki != null
		assert wiki.content(2) == """
		 P /index
		 P /page1
		 P /page2
		 S /section1
		 P /section1/index
		 S /section1/section11
		 P /section1/section11/index
		 S /section1/section12
		 P /section1/section12/index
		 S /section2
		 P /section2/index
		 S /section2/section21
		 P /section2/section21/index
		 S /section2/section21/section211
		 P /section2/section21/section211/index
		 -S- /section2/section22
		 P /section2/section22/index\n"""
	end

	fun build_wiki_assets is test do
		var wiki = builder.build_wiki(wikis_dir / "assets")
		assert wiki != null
		assert wiki.content(2) == """
		 A /.asset
		 A /asset1
		 A /asset2
		 P /index
		 P /page1
		 S /section1
		 A /section1/asset.1
		 P /section1/index
		 S /section1/section11
		 A /section1/section11/asset
		 P /section1/section11/index\n"""
		end

	fun build_wiki_allowed_md_exts_for_pages is test do
		var builder = self.builder
		builder.allowed_md_exts = ["md", "mdown"]
		var wiki = builder.build_wiki(wikis_dir / "md_exts")
		assert wiki != null
		assert wiki.content(2) == """
		 P /index
		 P /page1
		 A /page2.markdown
		 S /section1
		 A /section1/index.markdown
		 P /section1/page1\n"""
	end

	fun build_log_what_it_does is test do
		var stdout = new StringWriter
		var builder = new WikiBuilder(logger = new Logger(debug_level, out = stdout))
		builder.build_wiki(wikis_dir / "assets")
		assert stdout.to_s == """
Found wiki config at tests/wikis/assets/nitiwiki.ini
Found asset at tests/wikis/assets/pages/.asset
Found asset at tests/wikis/assets/pages/asset1
Found asset at tests/wikis/assets/pages/asset2
Found page at tests/wikis/assets/pages/index.md
Found page at tests/wikis/assets/pages/page1.md
Found section at tests/wikis/assets/pages/section1
Found asset at tests/wikis/assets/pages/section1/asset.1
Found page at tests/wikis/assets/pages/section1/index.md
Found section at tests/wikis/assets/pages/section1/section11
Found asset at tests/wikis/assets/pages/section1/section11/asset
Found page at tests/wikis/assets/pages/section1/section11/index.md
"""
	end

	fun build_warn_if_name_conflicts is test do
		var stdout = new StringWriter
		var builder = new WikiBuilder(logger = new Logger(debug_level, out = stdout))
		builder.build_wiki(wikis_dir / "conflicts")
		assert stdout.to_s == """
Found section at tests/wikis/conflicts/pages/bar
Found section at tests/wikis/conflicts/pages/bar/bar
Found page at tests/wikis/conflicts/pages/bar/bar/bar.md
Found section at tests/wikis/conflicts/pages/bar/foo
Found section at tests/wikis/conflicts/pages/bar/foo/foo
Found page at tests/wikis/conflicts/pages/bar/foo/foo/foo.md
Found page at tests/wikis/conflicts/pages/bar/foo/foo.md
Section `/bar/foo` already contains a resource named `foo`
Found page at tests/wikis/conflicts/pages/bar/foo.md
Section `/bar` already contains a resource named `foo`
Found page at tests/wikis/conflicts/pages/bar.md
Section `/` already contains a resource named `bar`
Found section at tests/wikis/conflicts/pages/foo
Found section at tests/wikis/conflicts/pages/foo/bar
Found page at tests/wikis/conflicts/pages/foo/bar/bar.md
Found section at tests/wikis/conflicts/pages/foo/foo
Found page at tests/wikis/conflicts/pages/foo/foo/index.md
Found page at tests/wikis/conflicts/pages/foo/foo.md
Section `/foo` already contains a resource named `foo`
Section `/` already contains a resource named `foo`
Found page at tests/wikis/conflicts/pages/foo.md
Section `/` already contains a resource named `foo`
"""
	end
end
