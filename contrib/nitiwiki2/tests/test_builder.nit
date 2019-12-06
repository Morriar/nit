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
		var wiki = new Wiki(wikis_dir / "empty")
		assert builder.build_wiki(wiki)
		assert wiki.root.children.is_empty
	end

	fun build_wiki_not_found is test do
		var wiki = new Wiki(wikis_dir / "not_found")
		assert not builder.build_wiki(wiki)
	end

	fun build_wiki_simple is test do
		var wiki = new Wiki(wikis_dir / "simple")
		assert builder.build_wiki(wiki)
		assert wiki.content == strip_indent("""
		 * /index.md (MdPage)
		 * /page1.md (MdPage)
		 * /page2.md (MdPage)
		 * /section1 (Section)
		 * /section1/index.md (MdPage)
		 * /section1/section11 (Section)
		 * /section1/section11/index.md (MdPage)
		 * /section1/section12 (Section)
		 * /section1/section12/index.md (MdPage)
		 * /section2 (Section)
		 * /section2/index.md (MdPage)
		 * /section2/section21 (Section)
		 * /section2/section21/index.md (MdPage)
		 * /section2/section21/section211 (Section)
		 * /section2/section21/section211/index.md (MdPage)
		 * /section2/section22 (Section) -- hidden
		 * /section2/section22/index.md (MdPage)""")
	end

	fun build_wiki_assets is test do
		var wiki = new Wiki(wikis_dir / "assets")
		assert builder.build_wiki(wiki)
		assert wiki.content == strip_indent("""
		 * /.asset (Asset)
		 * /asset1 (Asset)
		 * /asset2 (Asset)
		 * /css (Section)
		 * /css/style.css (Asset)
		 * /index.md (MdPage)
		 * /page1.md (MdPage)
		 * /script.js (Asset)
		 * /section1 (Section)
		 * /section1/asset.1 (Asset)
		 * /section1/index.md (MdPage)
		 * /section1/section11 (Section)
		 * /section1/section11/asset (Asset)
		 * /section1/section11/index.md (MdPage)""")
		end

	fun build_wiki_allowed_md_exts_for_src is test do
		var builder = self.builder
		var wiki = new Wiki(wikis_dir / "md_exts")
		assert builder.build_wiki(wiki)
		assert wiki.content == strip_indent("""
		 * /index.md (MdPage)
		 * /page1.mdown (MdPage)
		 * /page2.markdown (Asset)
		 * /section1 (Section)
		 * /section1/index.markdown (Asset)
		 * /section1/page1.mdown (MdPage)""")
	end

	fun build_log_what_it_does is test do
		var stdout = new StringWriter
		var builder = new WikiBuilder(logger = new Logger(debug_level, out = stdout))
		var wiki = new Wiki(wikis_dir / "assets")
		assert builder.build_wiki(wiki)
		assert stdout.to_s == strip_indent("""
		Found wiki config at tests/wikis/assets/nitiwiki.ini
		Found asset at tests/wikis/assets/src/.asset
		Found asset at tests/wikis/assets/src/asset1
		Found asset at tests/wikis/assets/src/asset2
		Found section at tests/wikis/assets/src/css
		Found asset at tests/wikis/assets/src/css/style.css
		Found page at tests/wikis/assets/src/index.md
		Found page at tests/wikis/assets/src/page1.md
		Found asset at tests/wikis/assets/src/script.js
		Found section at tests/wikis/assets/src/section1
		Found asset at tests/wikis/assets/src/section1/asset.1
		Found page at tests/wikis/assets/src/section1/index.md
		Found section at tests/wikis/assets/src/section1/section11
		Found asset at tests/wikis/assets/src/section1/section11/asset
		Found page at tests/wikis/assets/src/section1/section11/index.md""")
	end
end
