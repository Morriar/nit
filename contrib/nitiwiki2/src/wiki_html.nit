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

module wiki_html

import wiki_base
import markdown2

class Wiki2Html
	super WikiVisitor

	var wiki: Wiki

	var out_path: String

	fun run do visit_wiki(wiki)

	redef fun visit(entry) do entry.accept_html_visitor(self)

	fun copy(from, to: String) do
		sys.system "cp -R -- {from.escape_to_sh} {to.escape_to_sh}"
	end

	fun touch(path: String) do
		sys.system "touch -- {path.escape_to_sh}"
	end

	# TODO sitemap
	# Build the wiki sitemap page.
	# private fun make_sitemap: WikiSitemap do
	#	var sitemap = new WikiSitemap(self, "sitemap")
	#	sitemap.is_dirty = true
	#	return sitemap
	# end
end

redef class Entry
	fun accept_html_visitor(v: Wiki2Html) is abstract

	fun html_title: String do return pretty_name

	fun html_link(context: Entry): String is abstract
end

redef class Section

	redef fun accept_html_visitor(v) do
		(v.out_path / path).mkdir
		# TODO copy_files(src_path, out_path)
		# TODO add index
		# TODO add sitemap
		# TODO section config?
		visit_all(v)
	end

	# fun out_dir(v: Wiki2Html): String do
		# return (v.out_path / out_path).escape_to_sh
	# end

	# fun copy_files(out_path: String) do
	#	assert has_source
	#	var dir = src_full_path.as(not null).to_s
	#	for name in dir.files do
	#		if name == wiki.config_filename then continue
	#		if name.has_suffix(".md") then continue
	#		if has_child(name) then continue
	#		var src = wiki.expand_path(dir, name)
	#		var out = wiki.expand_path(out_full_path, name)
	#		if not wiki.need_render(src, out) then continue
	#		sys.system "cp -R -- {src.escape_to_sh} {out_full_path.escape_to_sh}"
	#	end
	# end

	redef fun html_link(context) do
		var index = self.index
		if index != null then
			return index.html_link(context)
		end
		return "<a href=\"{context.path_to(self)}.html\">{html_title}</a>"
	end
end

redef class MdPage
	redef fun accept_html_visitor(v) do
		var html = self.html(v)
		html.write_to_file "{(v.out_path / path)}.html"
	end

	redef fun html_link(context) do
		return "<a href=\"{context.path_to(self)}.html\">{html_title}</a>"
	end

	fun html(v: Wiki2Html): String do
		var parser = new MdParser
		parser.github_mode = true
		parser.wikilinks_mode = true
		parser.post_processors.add new MdProcessCommands(v, self)
		parser.post_processors.add new MdProcessHighlight(v, self)
		# TODO check links
		var ast = parser.parse(md)
		var renderer = new WikiHtmlRenderer(true, v, self)
		return renderer.render(ast)
	end
end

class WikiMdProcessor
	super MdPostProcessor

	var v: Wiki2Html
	var context: nullable Entry
end

class MdProcessCommands
	super WikiMdProcessor

	redef fun post_process(parser, doc) do
		# TODO
	end
end

class MdProcessHighlight
	super WikiMdProcessor

	redef fun post_process(parser, doc) do
		# TODO
	end
end

class WikiHtmlRenderer
	super HtmlRenderer

	var v: Wiki2Html
	var context: nullable Entry

	# TODO menu
	# TODO summary
	# TODO template
	# TODO template vars
	# TODO add breadcrumbs, trail, etc.
end
