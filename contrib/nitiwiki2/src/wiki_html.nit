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

import logger
import wiki_base
import markdown2

class Wiki2Html
	super WikiVisitor

	# TODO template config
	# TODO wiki config?

	var wiki: Wiki

	var out_path: String

	var default_template: nullable String = null is optional, writable

	var logger = new Logger(warn_level) is optional

	private var sections_stack = new Array[Section]

	private fun current_section: nullable Section do
		if sections_stack.is_empty then return null
		return sections_stack.last
	end

	private fun current_template: nullable String do
		var section = current_section
		if section == null then return default_template
		return section.config.default_template
	end

	fun run do visit_wiki(wiki)

	redef fun visit(entry) do entry.accept_html_visitor(self)

	fun copy(from, to: String) do
		sys.system "cp -R -- {from.escape_to_sh} {to.escape_to_sh}"
	end

	# fun touch(path: String) do
		# sys.system "touch -- {path.escape_to_sh}"
	# end

	# TODO render only if needed

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

	fun html_link(context: Entry): String do
		var path = context.path_to(self)
		if path.is_empty then
			return "<a href=\"#\">{html_title}</a>"
		end
		return "<a href=\"{path}\">{html_title}</a>"
	end
end

redef class Section

	redef fun accept_html_visitor(v) do
		v.sections_stack.push self
		(v.out_path / path).mkdir
		# TODO copy_files(src_path, out_path)
		# TODO add index
		# TODO add sitemap
		# TODO section config
		visit_all(v)
		v.sections_stack.pop
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
		return super
	end
end

redef class SectionConfig
	var default_template: nullable String = null is optional

	redef init from_ini(ini) do
		super
		default_template = ini["section.template"]
	end
end

redef class MdPage
	redef fun accept_html_visitor(v) do
		var html = self.html(v)
		html.write_to_file "{(v.out_path / path)}.html"
	end

	redef fun html_link(context) do
		var path = context.path_to(self)
		if path.is_empty then
			return "<a href=\"#\">{html_title}</a>"
		end
		return "<a href=\"{path}.html\">{html_title}</a>"
	end

	fun html_body(v: Wiki2Html): String do
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

	fun html(v: Wiki2Html): String do
		var tpl_path = v.current_template
		if tpl_path == null then return html_body(v)

		var tpl = new PageTemplate(
			path = tpl_path,
			body = html_body(v)
		)
		return tpl.write_to_string
	end
end

redef class Asset
	redef fun html_title do return name
end

class PageTemplate
	super Template

	var path: nullable String

	var title: nullable String = null is optional
	var body: nullable String = null is optional

	# TODO trail
	# TODO menu
	# TODO summary
end

class WikiMdProcessor
	super MdPostProcessor

	var v: Wiki2Html
	var context: nullable Entry
end

class MdProcessCommands
	super WikiMdProcessor

	redef fun post_process(parser, doc) do
		# TODO wikilinks
			# name, title, file, assets
		# TODO assets
	end
end

class MdProcessHighlight
	super WikiMdProcessor

	redef fun post_process(parser, doc) do
		# TODO highlight
	end
end

class WikiHtmlRenderer
	super HtmlRenderer

	var v: Wiki2Html
	var context: nullable Entry

	# TODO links
	# TODO wikilinks
end
