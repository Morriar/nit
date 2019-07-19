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

import test_base

class TestWikiHtml
	super TestBase
	test

	fun render is test do
	# TODO
	end

	# TODO copy assets
	# TODO make sitemap

	# fun has_template is test do
	# TODO html
	# end
    #
	# fun load_template is test do
	# TODO html
	# end
    #
	# fun has_sideblock is test do
	# TODO html
	# end
end

class TestSectionHtml
	super TestBase
	test

	# TODO tpl link
	# TODO out path
	# TODO copy files
	# TODO tpl tree

	# fun sidebar is test do
	# end
    #
	# fun templates_files is test do
	#	# TODO
	# end
    #
	# fun is_new is test do
	#	# TODO
	# end
    #
	# fun is_dirty is test do
	#	# TODO
	# end
    #
	# fun render is test do
	#	# FIXME should be in html
	# end

end

class TestArticleHtml
	super TestBase
	test

	# TODO tpl link
	# TODO out path
	# TODO load_template
	# TODO tpl_page
	# TODO tpl_header
	# TODO tpl_article
	# TODO tpl_sidebar
	# TODO tp_summary
	# TODO tpl_menu
	# TODO tpl_trail
	# TODO tpl_footer
	# TODO render
	# TODO copy files
	# TODO tpl tree
	# TODO is dirty
end

# TODO sitemap
# TODO section index
