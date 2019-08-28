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

	var force = false is optional, writable

	var logger = new Logger(warn_level) is optional

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
	var highlighter: nullable String = null is optional, writable

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
	var highlighter_default: nullable String = null is optional, writable

	fun render do visit_wiki(wiki)

	redef fun visit_wiki(wiki) do
		if not wiki.root.need_render(self) then
			logger.debug "Wiki already up-to-date"
			return
		end

		super

		var assets_dir = wiki.assets_dir
		if assets_dir == null then return

		var root_dir = wiki.root_dir
		assert root_dir != null
		var src_path = root_dir / assets_dir
		var out_path = self.out_path / "assets/"

		if mtime(src_path) < mtime(out_path) then
			logger.debug "Assets from {src_path} already up-to-date at {out_path}"
		else
			logger.debug "Copy assets from {src_path} to {out_path}"
			copy(src_path, out_path)
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
		var parser = new MdPageParser(wiki)
		return parser.parse_page(page)
	end

	fun ctime(path: String): Int do
		var stat = path.file_stat
		if stat == null then return -1
		return stat.ctime
	end

	fun mtime(path: String): Int do
		var stat = path.file_stat
		if stat == null then return -1
		return stat.mtime
	end

	fun is_new(resource: Resource): Bool do
		return not (out_path / resource.out_path).file_exists
	end

	fun is_dirty(resource: Resource): Bool do
		if is_new(resource) then return true
		return last_modification_time(resource) > last_rendering_time(resource)
	end

	fun creation_time(resource: Resource): Int do
		if resource isa MdPage then
			var file = resource.file
			if file == null then return -1
			return ctime(file)
		else if resource isa Asset then
			return ctime(resource.src_path)
		end
		var root_dir = wiki.root_dir
		assert root_dir != null
		return ctime(root_dir / wiki.pages_dir / resource.out_path)
	end

	fun last_modification_time(resource: Resource): Int do
		if resource isa MdPage then
			var file = resource.file
			if file == null then return -1
			return mtime(file)
		else if resource isa Asset then
			return mtime(resource.src_path)
		else if resource isa Section then
			var max = -1
			for child in resource.children do
				var time = last_modification_time(child)
				if time > max then max = time
			end
			return max
		end
		var root_dir = wiki.root_dir
		assert root_dir != null
		return mtime(root_dir / wiki.pages_dir / resource.out_path)
	end

	fun last_rendering_time(resource: Resource): Int do
		if resource isa Section then
			var max = -1
			for child in resource.children do
				var time = last_rendering_time(child)
				if time > max then max = time
			end
			return max
		end
		return mtime(out_path / resource.out_path)
	end

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

	private fun out_path: String do return path.substring(1, path.length - 1)

	private fun need_render(v: Wiki2Html): Bool do return v.is_dirty(self) or v.force
end

redef class Section
	redef fun accept_html_visitor(v) do
		if not need_render(v) then
			v.logger.debug "Section {self} already up-to-date at {out_path}"
			return
		end

		var out_path = v.out_path / self.out_path
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
		if not need_render(v) then
			v.logger.debug "Page {self} already up-to-date at {out_path}"
			return
		end

		var out_path = v.out_path / self.out_path
		v.logger.debug "Render page {self} to {out_path}"
		var html = self.html(v)
		v.write_to_file(html, out_path)
	end

	redef fun href_to(context) do
		var href = super
		if href == "#" then return href
		return "{href}.html"
	end

	redef fun out_path do return "{super}.html"

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
		if not need_render(v) then
			v.logger.debug "Asset {self} already up-to-date at {out_path}"
			return
		end

		var root = wiki.root_dir
		assert root != null
		var out_path = v.out_path / self.out_path
		v.logger.debug "Copy asset {self} to {out_path}"
		v.copy(root / wiki.pages_dir / path.substring(1, path.length - 1), "{out_path}")
	end

	redef fun html_title do return name
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

		self.info = self.info or else v.wiki_renderer.highlighter_default

		var highlighter = v.wiki_renderer.highlighter
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
