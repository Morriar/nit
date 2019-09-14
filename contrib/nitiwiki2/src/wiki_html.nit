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

import wiki_markdown
import template::macro
import markdown2

redef class Wiki
	# Output path
	#
	# Directory where the wiki will be rendered.
	# If it does not exist it will be created.
	var out_dir: String = "out/" is writable

	# Wiki's assets directory
	# TODO
	#
	# A Wiki may have a directory containing assets used to render its content
	# like images, scripts, stylesheets...
	# How this directory will be used depends on the renderer used.
	# For example, a HTML renderer could simply copy the content of this directory
	# to the `public/` one. Or a server renderer could serve the files in place.
	# TODO move to base?
	var assets_dir: nullable String = null is writable

	var default_template_file: nullable String = null is writable

	var default_template_string: nullable String is lazy, writable do
		var file = self.default_template_file
		if file == null then return null
		file = root_dir / file
		if not file.file_exists then return null
		return file.to_path.read_all
	end

	# External highlighter command called to process block code.
	#
	# * key: `wiki.highlighter`
	# * default: empty string, that means no external highlighter
	# * example: `highlight --fragment -S "$1" --inline-css --enclose-pre`
	#
	# The external highlighter is a shell command invoked with `sh -c`.
	# The meta information of the fence is passed as `$1`.
	# *Important*: `$1` is given as is, thus is tainted. You SHOULD protect it with quotes in the command.
	#
	# By default, the highlighter is only called on fenced block code with a meta information.
	# See `wiki.highlighter.default` to force the invocation of the highlighter on any code block.
	#
	# The output of the command will be inserted as is in the generated document.
	# Therefore it is expected that the command returns a valid, complete and balanced HTML fragment.
	# If the highlighter returns nothing (empty output), the internal rendering is used as a fall-back
	# (as if the option was not set).
	#
	# Advanced usages can invoke a custom shell script instead of a standard command to
	# check the argument, filter it, dispatch to various advanced commands, implement ad-hoc behaviors, etc.
	var highlighter: nullable String = null is writable

	# Default meta (i.e. language) to use to call the external highlighter.
	#
	# * key: `wiki.highlighter.default`
	# * default: empty string, that means no default meta information.
	# * example: `nit`
	#
	# When set, this configuration forces the external highlighter (see `wiki.highlighter`)
	# to be called also on basic code block (with the indentation) and plain fenced code
	# blocks (without meta information).
	#
	# The value is used as the `$1` argument of the configured highlighter command.
	#
	# Note: has no effect if `wiki.highlighter` is not set.
	var highlighter_default: nullable String = null is writable

	var edit_url: nullable String = null is writable

	var last_changes_url: nullable String = null is writable

	redef fun configure_from_ini(ini) do
		super
		out_dir = ini["wiki.out"] or else out_dir
		assets_dir = ini["wiki.assets"] or else assets_dir
		highlighter = ini["wiki.highlighter"] or else highlighter
		highlighter_default = ini["wiki.highlighter.default"] or else highlighter_default
		default_template_file = ini["wiki.template"] or else default_template_file
		edit_url = ini["wiki.edit"] or else edit_url
		last_changes_url = ini["wiki.last_changes"] or else last_changes_url
	end

	# html

	fun html_toc(context: nullable Resource): String do
		var v = new WikiHtmlToc(context)
		v.visit_wiki(self)
		return v.html.write_to_string
	end
end

class Wiki2Html
	super WikiVisitor

	# Wiki to render
	var wiki: Wiki

	var force = false is optional, writable

	var logger = new Logger(warn_level) is optional

	fun render do visit_wiki(wiki)

	fun clean do
		sys.system "rm -rf {wiki.out_dir}"
	end

	redef fun visit_wiki(wiki) do
		if not need_render(wiki.root) then
			logger.debug "Wiki already up-to-date"
			return
		end

		super

		var assets_dir = wiki.assets_dir
		if assets_dir == null then return

		var src_path = wiki.root_dir / assets_dir
		# TODO should we copy them to root?
		var out_path = wiki.out_dir / "assets/"

		if src_path.mtime < out_path.mtime then
			logger.debug "Assets from {src_path} already up-to-date at {out_path}"
		else
			logger.debug "Copy assets from {src_path} to {out_path}"
			copy(src_path, out_path)
		end

		# TODO index
		# TODO sitemap
	end

	redef fun visit(resource) do resource.accept_html_visitor(self)

	# utils

	fun mkdir(path: String) do
		sys.system "mkdir -p -- {path.escape_to_sh}"
	end

	fun touch(path: String) do
		sys.system "touch -- {path.escape_to_sh}"
	end

	fun copy(from, to: String) do
		sys.system "cp -R -- {from.escape_to_sh} {to.escape_to_sh}"
	end

	fun write_to_file(string, file: String) do
		string.write_to_file(file)
	end

	fun parse_md_page(page: MdPage): MdDocument do
		var parser = new MdPageParser(logger)
		return parser.parse_page(page)
	end

	private fun need_render(resource: Resource): Bool do return force or resource.is_dirty

	fun timestamp_to_date(timestamp: Int): String do
		return (new Tm.localtime_from_timet(new TimeT.from_i(timestamp))).to_s
	end
end

redef class Resource

	fun out_path: String do return wiki.out_dir / trim_path

	# Strip the `/` prefix so it can be used with the `/` operator.
	# FIXME: should the `/` method handle that?
	private fun trim_path: String do return path.substring(1, path.length - 1)

	# html

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

	# status

	fun creation_time: Int do
		return (wiki.root_dir / wiki.pages_dir / trim_path).ctime
	end

	fun last_modification_time: Int do
		return (wiki.root_dir / wiki.pages_dir / trim_path).mtime
	end

	fun last_rendering_time: Int do return out_path.mtime

	fun is_new: Bool do return not out_path.file_exists

	fun is_dirty: Bool do return is_new or last_modification_time > last_rendering_time

	private fun accept_html_toc_visitor(v: WikiHtmlToc) do
		var attrs = if v.context == self then " class=\"active\"" else ""
		v.html.add "{v.indent}<li{attrs}>{name}</li>\n" # TODO html name
	end
end

redef class Section

	# template

	var default_template_file: nullable String = null is writable

	var default_template_string: nullable String is lazy, writable do
		var file = self.default_template_file
		if file == null then return null
		file = wiki.root_dir / file
		if not file.file_exists then return null
		return file.to_path.read_all
	end

	fun template_string: nullable String do
		if default_template_string != null then return default_template_string
		var parent = self.section
		if parent == null then return wiki.default_template_string
		return parent.template_string
	end

	# html

	redef fun accept_html_visitor(v) do
		if not v.need_render(self) then
			v.logger.debug "Section {name} already up-to-date at {out_path}"
			return
		end

		v.logger.debug "Render section {name} to {out_path}"
		v.mkdir out_path
		visit_all(v)
		# TODO add index
	end

	redef fun html_link(context) do
		var index = self.index
		if index != null then
			return index.html_link(context)
		end
		return super
	end

	# status

	redef fun last_modification_time do
		var max = -1
		for child in children do
			var time = child.last_modification_time
			if time > max then max = time
		end
		return max
	end

	redef fun last_rendering_time do
		var max = -1
		for child in children do
			var time = child.last_rendering_time
			if time > max then max = time
		end
		return max
	end

	redef fun configure_from_ini(ini) do
		super
		default_template_file = ini["section.template"] or else default_template_file
	end

	redef fun accept_html_toc_visitor(v) do
		if is_hidden then return
		v.html.add "{v.indent}<li>{name}\n" # TODO html_name
		v.indent_level += 1
		v.html.add "{v.indent}<ul>\n"
		v.indent_level += 1
		visit_all(v)
		v.indent_level -= 1
		v.html.add "{v.indent}</ul>\n"
		v.indent_level -= 1
		v.html.add "{v.indent}</li>\n"
	end
end

redef class MdPage
	redef fun out_path do return "{super}.html"

	# template

	fun template_string: nullable String do
		var parent = self.section
		if parent == null then return wiki.default_template_string
		return parent.template_string
	end

	# html

	redef fun accept_html_visitor(v) do
		if not v.need_render(self) then
			v.logger.debug "Page {name} already up-to-date at {out_path}"
			return
		end

		v.logger.debug "Render page {name} to {out_path}"
		var html = self.html(v)
		v.write_to_file(html, out_path)
	end

	redef fun href_to(context) do
		var href = super
		if href == "#" then return href
		return "{href}.html"
	end

	fun html(v: Wiki2Html): String do
		# TODO should use the same syntax than commands?
		var section = self.section
		var string = self.template_string or else "%BODY%"
		var template = new TemplateString(string)

		var wiki_toc = "<ul>\n{wiki.html_toc(self)}</ul>"

		template.insert("BODY", html_body(v))
		template.insert("WIKI_ROOT", wiki.root.href_to(self))
		# TODO template.insert("WIKI_ASSETS", wiki.assets_dir)?
		template.insert("WIKI_TOC", wiki_toc) # TODO active, classes

		template.insert("PAGE_TITLE", pretty_name) # TODO should be html title
		template.insert("PAGE_CREATED_AT", v.timestamp_to_date(creation_time).to_s)
		template.insert("PAGE_UPDATED_AT", v.timestamp_to_date(last_modification_time))
		template.insert("PAGE_SRC", file)
		template.insert("PAGE_URL", trim_path)
		# template.insert("PAGE_TOC", menu) # TODO
		# template.insert("PAGE_TRAIL", TRAIL) # TODO trail

		if section != null then
			# template.insert("PAGE_TOC", section.html_toc) # TODO
		end

		var tm = new Tm.localtime
		template.insert("DATE", tm.to_s)
		template.insert("YEAR", (tm.year + 1900).to_s)

		# TODO section summary / map
		return template.write_to_string
	end

	fun html_body(v: Wiki2Html): String do
		# TODO check html links
		var ast = v.parse_md_page(self)
		var renderer = new WikiHtmlRenderer(true, v, self)
		return renderer.render(ast)
	end

	# status

	redef fun creation_time do
		var file = self.file
		if file == null then return -1
		return file.ctime
	end

	redef fun last_modification_time do
		var file = self.file
		if file == null then return -1
		return file.mtime
	end
end

redef class Asset

	# html

	redef fun accept_html_visitor(v) do
		if not v.need_render(self) then
			v.logger.debug "Asset {name} already up-to-date at {out_path}"
			return
		end

		v.logger.debug "Copy asset {name} to {out_path}"
		var from = wiki.root_dir / wiki.pages_dir / path.substring(1, path.length - 1)
		v.copy(from, "{out_path}")
	end

	redef fun html_title do return name

	# status

	redef fun creation_time do return src_path.ctime

	redef fun last_modification_time do return src_path.mtime

	redef fun accept_html_toc_visitor(v) do
		if not v.show_assets then return
		super
	end
end

redef class TemplateString
	private fun insert(macro: String, string: nullable String) do
		if has_macro(macro) then replace(macro, string or else "")
	end
end

class WikiHtmlRenderer
	super HtmlRenderer

	var wiki_renderer: Wiki2Html
	var context: Resource

	private fun location(node: MdNode): String do
		var context = self.context
		if context isa MdPage then
			return "{context.file or else context.path}:{node.location}"
		end
		return "{context.path}:{node.location}"
	end
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

redef class MdCodeBlock
	redef fun render_html(v) do
		if not v isa WikiHtmlRenderer then
			super
			return
		end

		self.info = self.info or else v.context.wiki.highlighter_default

		var highlighter = v.context.wiki.highlighter
		if highlighter == null then
			super
			return
		end

		var info = self.info
		if info == null then
			super
			return
		end

		var literal = self.literal
		if literal == null then
			super
			return
		end

		var logger = v.wiki_renderer.logger
		var loc = v.location(self)

		# Execute the command
		logger.info("Executing `{highlighter}` `{info}` (in {loc})")
		var proc = new ProcessDuplex("sh", highlighter, info)
		var res = proc.write_and_read(literal)
		if proc.status != 0 then
			logger.warn("{loc}: `{highlighter}` `{info}` returned {proc.status}")
		end

		# Check the result
		if res.is_empty then
			# No result, then defaults
			logger.warn("{loc}: `{highlighter}` `{info}` produced nothing")
			super
			return
		end
		v.add_raw(res)
	end
end

redef class String
	private fun ctime: Int do
		var stat = self.file_stat
		if stat == null then return -1
		return stat.ctime
	end

	private fun mtime: Int do
		var stat = self.file_stat
		if stat == null then return -1
		return stat.mtime
	end
end

class WikiHtmlToc
	super WikiVisitor

	var context: nullable Resource = null is optional, writable

	var show_assets: Bool = false is optional, writable

	var html = new Template

	var indent_level = 0

	fun indent: String do return "\t" * indent_level

	redef fun visit(resource) do resource.accept_html_toc_visitor(self)
end
