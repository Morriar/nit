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

import wiki_builder
import markdown2

class Wiki2Html
	super WikiVisitor

	# Wiki to render
	var wiki: Wiki

	# Output path
	#
	# Directory where the wiki will be rendered.
	# If it does not exist it will be created.
	var out_path: String = "out/" is optional, writable

	var logger = new Logger(warn_level) is optional

	fun render do visit_wiki(wiki)

	redef fun visit_wiki(wiki) do
		super

		var assets_dir = wiki.assets_dir
		if assets_dir != null then
			var src_path = wiki.root_dir
			assert src_path != null
			logger.debug "Copy assets from {src_path / assets_dir} to {out_path}"
			copy(src_path / assets_dir / "*", out_path)
		end

		# TODO index
		# TODO add sitemap
	end

	redef fun visit(resource) do resource.accept_html_visitor(self)

	private var sections_stack = new Array[Section]

	private fun current_section: nullable Section do
		if sections_stack.is_empty then return null
		return sections_stack.last
	end

	private fun current_template: nullable PageTemplate do
		var section = current_section
		if section == null then return wiki.default_template
		return section.template or else wiki.default_template
	end

	# utils

	fun mkdir(path: String) do
		sys.system "mkdir -p -- {path.escape_to_sh}"
	end

	fun copy(from, to: String) do
		sys.system "cp -R -- {from.escape_to_sh} {to.escape_to_sh}"
	end

	fun write_to_file(string, file: String) do
		string.write_to_file(file)
	end

	fun parse_md_page(page: MdPage): MdDocument do
		var parser = new MdPageParser(wiki)
		return parser.parse_page(page)
	end

	# fun touch(path: String) do
		# sys.system "touch -- {path.escape_to_sh}"
	# end

	# TODO render only if needed
	# TODO --force option

	# TODO sitemap
	# Build the wiki sitemap page.
	# private fun make_sitemap: WikiSitemap do
	#	var sitemap = new WikiSitemap(self, "sitemap")
	#	sitemap.is_dirty = true
	#	return sitemap
	# end
end

redef class Resource
	fun accept_html_visitor(v: Wiki2Html) is abstract

	fun html_title: String do return pretty_name

	fun html_link(context: Resource): String do
		return "<a href=\"{href_to(context)}\">{html_title}</a>"
	end

	fun href_to(context: Resource): String do
		var path = context.path_to(self)
		if path.is_empty then return "#"
		return path
	end
end

redef class Section
	redef fun accept_html_visitor(v) do
		var out_path = v.out_path / path.substring(1, path.length - 1)
		v.logger.debug "Render section {self} to {out_path}"
		v.sections_stack.push self
		v.mkdir out_path
		# TODO add index
		visit_all(v)
		v.sections_stack.pop
	end

	redef fun html_link(context) do
		var index = self.index
		if index != null then
			return index.html_link(context)
		end
		return super
	end
end

redef class MdPage
	redef fun accept_html_visitor(v) do
		var out_path = "{(v.out_path / path.substring(1, path.length - 1))}.html"
		v.logger.debug "Render page {self} to {out_path}"
		var html = self.html(v)
		v.write_to_file(html, out_path)
	end

	redef fun href_to(context) do
		var href = super
		if href == "#" then return href
		return "{href}.html"
	end

	fun html_body(v: Wiki2Html): String do
		# TODO check html links
		var ast = v.parse_md_page(self)
		var renderer = new WikiHtmlRenderer(true, v, self)
		return renderer.render(ast)
	end

	fun html(v: Wiki2Html): String do
		var page_template = v.current_template
		if page_template == null then return html_body(v)
		return page_template.compile(new TemplateVars(
			# TODO other vars
			body = html_body(v)
		)).write_to_string
	end
end

redef class Asset
	redef fun accept_html_visitor(v) do
		var root = wiki.root_dir
		assert root != null
		var out_path = v.out_path / path.substring(1, path.length - 1)
		v.logger.debug "Copy asset {self} to {out_path}"
		v.copy(root / wiki.pages_dir / path.substring(1, path.length - 1), "{out_path}")
	end

	redef fun html_title do return name
end

class WikiHtmlRenderer
	super HtmlRenderer

	var v: Wiki2Html
	var context: Resource

	# TODO code highlight
end

redef class MdWikilink
	redef fun render_html(v) do
		if not v isa WikiHtmlRenderer then
			super
			return
		end
		var target = self.target
		var anchor = self.anchor
		var title = self.title

		if target == null and anchor == null then
			v.add_raw "<a class=\"broken\">{title or else "broken"}</a>"
			return
		end

		v.add_raw "<a href=\""
		if target != null then
			v.add_raw target.href_to(v.context)
		end
		if anchor != null then
			v.add_raw "#{anchor}"
		end
		v.add_raw "\""
		if target == null and anchor == null then
			v.add_raw " class=\"broken\""
		end
		v.add_raw ">"
		if target == null and anchor == null then
			v.add_raw title or else "broken"
		else if target == null then
			v.add_raw title or else v.context.html_title
		else
			v.add_raw title or else target.html_title
		end
		v.add_raw "</a>"
	end
end
