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

module test_links is test

import wiki_links
import test_base

class TestWikiLinks
	super TestBase
	test

	fun lookup_entry_by_name_simple is test do
		var wiki_root = tests_wikis / "simple"
		var wiki = new Nitiwiki(new WikiConfig(wiki_root / "config.ini"))
		wiki.parse

		# From index
		for k, v in wiki.entries do
			print k
			print v
		end
		var context = wiki.entries[wiki_root / "pages/index.md"]
		assert wiki.lookup_entry_by_name(context, "") == null
		assert wiki.lookup_entry_by_name(context, "not_found") == null
		assert wiki.lookup_entry_by_name(context, "pages") isa WikiSection
		assert wiki.lookup_entry_by_name(context, "index") isa WikiArticle
		assert wiki.lookup_entry_by_name(context, "section211") isa WikiSection

		# var entry = wiki.lookup_entry_by_name(context, "index") == null
	end
end

# Nitiwki
# lookup_entry_by_name
# lookup_entry_by_title
# lookup_entry_by_path
# trails

# WikiEntry
# href
# dir_href
# root_href
# href_from
# a_from
# lookup_entry_by_name
# lookup_entry_by_title
# render_sidebar_wikilinks

# WikiSection
# index
# dir_href
# render

# WikiArticle
# headlines
# is_index
# href
# render

# WikiDecorator
