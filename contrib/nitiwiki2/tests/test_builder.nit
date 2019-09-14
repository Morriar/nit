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
		assert wiki.content == strip_indent("""
		 P /index.md
		 P /page1.md
		 P /page2.md
		 S /section1
		 P /section1/index.md
		 S /section1/section11
		 P /section1/section11/index.md
		 S /section1/section12
		 P /section1/section12/index.md
		 S /section2
		 P /section2/index.md
		 S /section2/section21
		 P /section2/section21/index.md
		 S /section2/section21/section211
		 P /section2/section21/section211/index.md
		 -S- /section2/section22
		 P /section2/section22/index.md""")
	end

	fun build_wiki_assets is test do
		var wiki = builder.build_wiki(wikis_dir / "assets")
		assert wiki != null
		assert wiki.content == strip_indent("""
		 A /.asset
		 A /asset1
		 A /asset2
		 P /index.md
		 P /page1.md
		 S /section1
		 A /section1/asset.1
		 P /section1/index.md
		 S /section1/section11
		 A /section1/section11/asset
		 P /section1/section11/index.md""")
		end

	fun build_wiki_allowed_md_exts_for_src is test do
		var builder = self.builder
		builder.allowed_md_exts = ["md", "mdown"]
		var wiki = builder.build_wiki(wikis_dir / "md_exts")
		assert wiki != null
		assert wiki.content == strip_indent("""
		 P /index.md
		 P /page1.mdown
		 A /page2.markdown
		 S /section1
		 A /section1/index.markdown
		 P /section1/page1.mdown""")
	end

	fun build_log_what_it_does is test do
		var stdout = new StringWriter
		var builder = new WikiBuilder(logger = new Logger(debug_level, out = stdout))
		builder.build_wiki(wikis_dir / "assets")
		assert stdout.to_s == strip_indent("""
		Found wiki config at tests/wikis/assets/nitiwiki.ini
		Found asset at tests/wikis/assets/src/.asset
		Found asset at tests/wikis/assets/src/asset1
		Found asset at tests/wikis/assets/src/asset2
		Found page at tests/wikis/assets/src/index.md
		Found page at tests/wikis/assets/src/page1.md
		Found section at tests/wikis/assets/src/section1
		Found asset at tests/wikis/assets/src/section1/asset.1
		Found page at tests/wikis/assets/src/section1/index.md
		Found section at tests/wikis/assets/src/section1/section11
		Found asset at tests/wikis/assets/src/section1/section11/asset
		Found page at tests/wikis/assets/src/section1/section11/index.md""")
	end

	fun build_warn_if_name_conflicts is test do
		var stdout = new StringWriter
		var builder = new WikiBuilder(logger = new Logger(debug_level, out = stdout))
		builder.build_wiki(wikis_dir / "conflicts")
		assert stdout.to_s == strip_indent("""
		Found section at tests/wikis/conflicts/src/bar
		Found section at tests/wikis/conflicts/src/bar/bar
		Found page at tests/wikis/conflicts/src/bar/bar/bar.md
		Found section at tests/wikis/conflicts/src/bar/foo
		Found section at tests/wikis/conflicts/src/bar/foo/foo
		Found page at tests/wikis/conflicts/src/bar/foo/foo/foo.md
		Found page at tests/wikis/conflicts/src/bar/foo/foo.md
		Section `/bar/foo` already contains a resource named `foo`
		Found page at tests/wikis/conflicts/src/bar/foo.md
		Section `/bar` already contains a resource named `foo`
		Found page at tests/wikis/conflicts/src/bar.md
		Section `/` already contains a resource named `bar`
		Found section at tests/wikis/conflicts/src/foo
		Found section at tests/wikis/conflicts/src/foo/bar
		Found page at tests/wikis/conflicts/src/foo/bar/bar.md
		Found section at tests/wikis/conflicts/src/foo/foo
		Found page at tests/wikis/conflicts/src/foo/foo/index.md
		Found page at tests/wikis/conflicts/src/foo/foo.md
		Section `/foo` already contains a resource named `foo`
		Section `/` already contains a resource named `foo`
		Found page at tests/wikis/conflicts/src/foo.md
		Section `/` already contains a resource named `foo`""")
	end
end
