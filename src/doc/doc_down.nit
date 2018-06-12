# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Handle markdown formatting in Nit comments.
module doc_down

import markdown
import markdown2
import htmlight
private import parser_util

redef class MDoc

	# Markdown parser used to analyze the MDoc content
	var mdoc_parser: MdParser = original_mentity.as(not null).model.mdoc_parser is lazy

	# Markdown AST of the MDoc content
	var mdoc_ast: MdDocument = mdoc_parser.parse(content.join("\n")) is lazy

	# Markdown renderer to HTML
	var mdoc_html_renderer: MDocHtmlRenderer is lazy do
		return original_mentity.as(not null).model.mdoc_html_renderer
	end

	# Markdown renderer to inline HTML
	var mdoc_html_inline_renderer: MDocHtmlInlineRenderer is lazy do
		return original_mentity.as(not null).model.mdoc_html_inline_renderer
	end

	# Raw synopsis
	#
	# * Returns the first line of the MDoc content without the headings `#`.
	# * Returns `null` if the content is empty.
	# * Returns `null` if the content does not start with a Markdown heading.
	var synopsis: nullable String is lazy do
		var ast = mdoc_ast
		var first = ast.first_child
		if not first isa MdHeading then return null
		return first.raw_text
	end

	# Comment without synopsis HTML escaped
	var comment: String is lazy do
		var lines = content.to_a
		if not lines.is_empty then lines.shift
		return lines.join("\n")
	end

	# Full comment HTML escaped.
	var documentation: String is lazy do return content.join("\n")

	private var markdown_proc: MarkdownProcessor is lazy, writable do
		return original_mentity.as(not null).model.nitdoc_md_processor
	end

	private var inline_proc: MarkdownProcessor is lazy, writable do
		return original_mentity.as(not null).model.nitdoc_inline_processor
	end

	# Renders the synopsis as a HTML comment block.
	var html_synopsis: nullable Writable is lazy do
		var ast = mdoc_ast
		var first = ast.first_child
		if not first isa MdHeading then return null
		var syn = mdoc_html_inline_renderer.render(first)

		var res = new Template
		# var syn = inline_proc.process(content.first)
		res.add "<span class=\"synopsys nitdoc\">{syn}</span>"
		return res
	end

	# Renders the synopsis as a HTML comment block.
	var md_synopsis: Writable is lazy do
		if content.is_empty then return ""
		return content.first
	end

	# Renders the comment without the synopsis as a HTML comment block.
	var html_comment: Writable is lazy do
		var lines = content.to_a
		if not lines.is_empty then lines.shift
		return lines_to_html(lines)
	end

	#
	var md_comment: Writable is lazy do
		if content.is_empty then return ""
		var lines = content.to_a
		lines.shift
		return lines.join("\n")
	end

	# Renders the synopsis and the comment as a HTML comment block.
	var html_documentation: Writable is lazy do
		var ast = mdoc_ast
		var res = mdoc_html_renderer.render(ast)
		return "<div class=\"nitdoc\">{res}</div>"
	end

	# Renders the synopsis and the comment as a HTML comment block.
	var md_documentation: Writable is lazy do return lines_to_md(content.to_a)

	# Renders markdown line as a HTML comment block.
	private fun lines_to_html(lines: Array[String]): Writable do
		var res = new Template
		var decorator = markdown_proc.decorator.as(NitdocDecorator)
		decorator.current_mdoc = self
		res.add "<div class=\"nitdoc\">"
		# do not use DocUnit as synopsys
		if not lines.is_empty then
			if not lines.first.has_prefix("    ") and
			   not lines.first.has_prefix("\t") then
				# parse synopsys
				var syn = inline_proc.process(lines.shift)
				res.add "<h1 class=\"synopsys\">{syn}</h1>"
			end
		end
		# check for annotations
		for i in [0 .. lines.length[ do
			var line = lines[i]
			if line.to_upper.has_prefix("ENSURE") or line.to_upper.has_prefix("REQUIRE") then
				var html = inline_proc.process(line)
				lines[i] = "<p class=\"contract\">{html}</p>"
			else if line.to_upper.has_prefix("TODO") or line.to_upper.has_prefix("FIXME") then
				var html = inline_proc.process(line)
				lines[i] = "<p class=\"todo\">{html}</p>"
			end
		end
		# add other lines
		res.add markdown_proc.process(lines.join("\n"))
		res.add "</div>"
		decorator.current_mdoc = null
		return res
	end

	private fun lines_to_md(lines: Array[String]): Writable do
		var res = new Template
		if not lines.is_empty then
			var syn = lines.first
			if not syn.has_prefix("    ") and not syn.has_prefix("\t") and
			  not syn.trim.has_prefix("#") then
				lines.shift
				res.add "# {syn}\n"
			end
		end
		res.add lines.join("\n")
		return res
	end
end

# The specific markdown decorator used internally to process MDoc object.
#
# You should use the various methods of `MDoc` like `MDoc::html_documentation`
#
# The class is public so specific behavior can be plugged on it.
class NitdocDecorator
	super HTMLDecorator

	private var toolcontext = new ToolContext

	# The currently processed mdoc.
	#
	# Unfortunately, this seems to be the simpler way to get the currently processed `MDoc` object.
	var current_mdoc: nullable MDoc = null

	redef fun add_code(v, block) do
		var meta = block.meta or else "nit"

		# Do not try to highlight non-nit code.
		if meta != "nit" and meta != "nitish" then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		# Try to parse code
		var code = block.raw_content
		var ast = toolcontext.parse_something(code)
		if ast isa AError then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		v.add "<pre class=\"nitcode\"><code>"
		var hl = new HtmlightVisitor
		hl.line_id_prefix = ""
		hl.highlight_node(ast)
		v.add(hl.html)
		v.add "</code></pre>\n"
	end

	redef fun add_span_code(v, text, from, to) do
		# Try to parse it
		var code = code_from_text(text, from, to)
		var ast = toolcontext.parse_something(code)

		if ast isa AError then
			v.add "<code class=\"rawcode\">"
			append_code(v, text, from, to)
		else
			v.add "<code class=\"nitcode\">"
			var hl = new HtmlightVisitor
			hl.line_id_prefix = ""
			hl.highlight_node(ast)
			v.add(hl.html)
		end
		v.add "</code>"
	end

	private fun code_from_text(buffer: Text, from, to: Int): String do
		var out = new FlatBuffer
		for i in [from..to[ do out.add buffer[i]
		return out.write_to_string
	end
end

# Decorator for span elements.
#
# Because inline comments can appear as span elements,
# InlineDecorator do not decorate things like paragraphs or headers.
private class InlineDecorator
	super NitdocDecorator

	redef fun add_paragraph(v, block) do
		v.emit_in block
	end

	redef fun add_headline(v, block) do
		# save headline
		var line = block.block.first_line
		if line == null then return
		var txt = line.value
		var id = strip_id(txt)
		var lvl = block.depth
		headlines[id] = new HeadLine(id, txt, lvl)

		v.emit_in block
	end

	redef fun add_code(v, block) do
		# Try to parse code
		var ast = toolcontext.parse_something(block.block.text.to_s)
		if ast isa AError then
			v.add "<code>"
			v.emit_in block
			v.add "</code>"
			return
		end
		v.add "<code class=\"nitcode\">"
		var hl = new HtmlightVisitor
		hl.highlight_node(ast)
		v.add(hl.html)
		v.add "</code>"
	end
end

redef class Model

	# Markdown parser used to analyze MDoc contents
	var mdoc_parser: MdParser is lazy, writable do
		var parser = new MdParser
		parser.github_mode = true
		parser.wikilinks_mode = true
		parser.post_processors.add new MDocProcessSynopsis
		parser.post_processors.add new MDocProcessSpanCodes
		# TODO post processing
			# code blocks
			# commands
			# entities links
		return parser
	end

	# Markdown renderer to HTML
	var mdoc_html_renderer = new MDocHtmlRenderer is lazy, writable

	# Markdown renderer for inlined HTML
	var mdoc_html_inline_renderer = new MDocHtmlInlineRenderer is lazy, writable

	# Get a markdown processor for Nitdoc comments.
	var nitdoc_md_processor: MarkdownProcessor is lazy, writable do
		var proc = new MarkdownProcessor
		proc.decorator = new NitdocDecorator
		return proc
	end

	# Get a markdown inline processor for Nitdoc comments.
	#
	# This processor is specificaly designed to inlinable doc elements like synopsys.
	var nitdoc_inline_processor: MarkdownProcessor is lazy, writable do
		var proc = new MarkdownProcessor
		proc.decorator = new InlineDecorator
		return proc
	end
end

#
interface MdPostProcessor
	super MdVisitor

	#
	fun post_process(parser: MdParser, document: MdDocument) do
		enter_visit(document)
	end

	redef fun visit(node) do node.post_process(self)
end

#
redef class MdParser
	#
	var post_processors = new Array[MdPostProcessor]

	redef fun parse(input) do
		var res = super
		for processor in post_processors do
			processor.post_process(self, res)
		end
		return res
	end
end

#
class MDocProcessSynopsis
	super MdPostProcessor

	redef fun post_process(parser, document) do
		var first = document.first_child
		if first == null then return
		if first isa MdHeading then return
		if first isa MdParagraph then
			var heading = new MdHeading(first.location, 1)

			var child = first.first_child
			while child != null do
				child.unlink
				heading.append_child(child)
				child = first.first_child
				if child isa MdLineBreak then break
			end
			first.insert_before(heading)
			if first.first_child == null then
				first.unlink
			end
		end
	end
end

#
class MDocProcessSpanCodes
	super MdPostProcessor

	#
	var toolcontext = new ToolContext is lazy

	redef fun visit(node) do
		# Visit each block code
		if node isa MdCodeBlock then
			var literal = node.literal
			if literal != null then
				if node isa MdFencedCodeBlock then
					var meta = node.info or else "nit"
					if meta == "nit" or meta == "nitish" then
						node.nit_ast = toolcontext.parse_something(literal)
					end
				end
				if node isa MdIndentedCodeBlock then
					node.nit_ast = toolcontext.parse_something(literal)
					return
				end
			end
		end
		# Visit each span code
		if node isa MdCode then
			node.nit_ast = toolcontext.parse_something(node.literal)
			return
		end
		super
	end
end

#
class MDocHtmlRenderer
	super HtmlRenderer
end

#
class MDocHtmlInlineRenderer
	super HtmlRenderer

	redef fun visit(node) do node.render_html_inline(self)
end

redef class MdNode

	#
	fun post_process(v: MdPostProcessor) do visit_all(v)

	# Render `self` as HTML without any block
	fun render_html_inline(v: MDocHtmlInlineRenderer) do render_html(v)
end

redef class MdBlock
	redef fun render_html_inline(v) do visit_all(v)
end

redef class MdHeading
	redef fun render_html(v) do
		var parent = self.parent
		if v isa MDocHtmlRenderer and parent != null and parent.first_child == self then
			# v.add_line
			v.add_raw "<h{level} class=\"synopsys\">"
			visit_all(v)
			v.add_raw "</h{level}>"
			# v.add_line
			return
		end
		super
	end
end

redef class MdCodeBlock
	#
	var nit_ast: nullable ANode = null is writable

	redef fun render_html(v) do
		var meta = info or else "nit"
		var ast = nit_ast

		if ast == null then
			v.add_raw "<pre class=\"{meta}\"><code>"
			v.add_raw v.html_escape(literal or else "", false)
			v.add_raw "</code></pre>\n"
			return
		else if ast isa AError then
			v.add_raw "<pre class=\"{meta}\"><code>"
			v.add_raw v.html_escape(literal or else "", false)
			v.add_raw "</code></pre>\n"
			return
		end

		var hl = new HtmlightVisitor
		hl.line_id_prefix = ""
		hl.highlight_node(ast)

		v.add_raw "<pre class=\"nitcode\"><code>"
		v.add_raw hl.html.write_to_string
		v.add_raw "</code></pre>\n"
	end
end

redef class MdLineBreak
	redef fun render_html_inline(v) do end
end

redef class MdCode
	#
	var nit_ast: nullable ANode = null is writable

	redef fun render_html_inline(v) do
		var ast = nit_ast
		if ast == null or ast isa AError then
			v.add_raw "<code class=\"rawcode\">"
			v.add_raw v.html_escape(literal, false)
			v.add_raw "</code>"
			return
		end
		# TODO links?
		var hl = new HtmlightVisitor
		hl.line_id_prefix = ""
		hl.highlight_node(ast)

		v.add_raw "<code class=\"nitcode\">"
		v.add_raw hl.html.write_to_string
		v.add_raw "</code>"
	end
end
