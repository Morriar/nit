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

# Markdown rendering of Markdown documents
module markdown_md_rendering

import markdown_rendering
import markdown_github

# Markdown document renderer to Markdown
class MarkdownRenderer
	super MdRenderer

	# Markdown output under construction
	private var md: Buffer is noinit

	# Render `node` as Markdown
	redef fun render(node) do
		md = new Buffer
		enter_visit(node)
		return md.write_to_string
	end

	redef fun visit(node) do node.render_md(self)

	# Last char visited
	#
	# Used to avoid double blank lines.
	private var last_char: nullable Char = null

	# Add `string` to `md`
	private fun add(string: String) do
		md.append(string)
		if not md.is_empty then
			last_char = md.last
		end
	end

	# Add a `md` string to the output
	fun add_md(md: String) do add md

	# Add a blank line to the output
	fun add_line do
		if last_char != null and last_char != '\n' then
			add "\n"
		end
	end
end

private class TextLengthVisitor
	super MdVisitor

	var length = 0

	redef fun visit(node) do node.process_len(self)
end

redef class MdNode

	# Render `self` as Markdown
	fun render_md(v: MarkdownRenderer) do visit_all(v)

	private fun process_len(v: TextLengthVisitor) do visit_all(v)
end

# Blocks

redef class MdBlockQuote
	redef fun render_md(v) do
		var node = first_child
		if node == null then
			v.add_md "> "
		end
		while node != null do
			if not node isa MdParagraph then
				v.add_md "> "
			end
			v.enter_visit(node)
			node = node.next
		end
	end
end

redef class MdIndentedCodeBlock
	redef fun render_md(v) do
		var literal = self.literal
		if literal == null then return

		v.add_line
		var lines = literal.split("\n")
		for i in [0..lines.length[ do
			if i == lines.length - 1 then continue
			var line = lines[i]
			if line.is_empty then
				v.add_md "\n"
			else
				if use_tabs then
					v.add_md "\t"
				else
					v.add_md " " * 4
				end
				v.add_md line
				v.add_line
			end
		end
	end
end

redef class MdFencedCodeBlock
	redef fun render_md(v) do
		var info = self.info
		v.add_line
		v.add_md fence_char.to_s * fence_length
		v.add_md info or else ""
		v.add_line
		v.add_md literal or else ""
		v.add_md fence_char.to_s * fence_length
		v.add_line
	end
end

redef class MdHeading
	redef fun render_md(v) do
		if is_setext then
			visit_all(v)
			var length_visitor = new TextLengthVisitor
			length_visitor.enter_visit(self)
			v.add_line
			if level == 1 then
				v.add "=" * length_visitor.length
			else
				v.add "-" * length_visitor.length
			end
		else
			v.add_md "#" * level
			v.add_md " "
			visit_all(v)
			if has_atx_trailing then
				v.add_md " "
				v.add_md "#" * level
			end
		end
		v.add_line
	end
end

redef class MdUnorderedList
	redef fun render_md(v) do
		var node = first_child
		while node != null do
			v.add_md "{bullet_marker} "
			v.enter_visit(node)
			node = node.next
			v.add_line
		end
	end
end

redef class MdOrderedList
	redef fun render_md(v) do
		var node = first_child
		var nb = start_number
		while node != null do
			v.add_md "{nb}{delimiter}"
			if node.first_child != null then
				v.add_md " "
			end
			v.enter_visit(node)
			node = node.next
			nb += 1
			v.add_line
		end
	end
end

redef class MdParagraph
	redef fun render_md(v) do
		if parent isa MdBlockQuote then
			v.add_md "> "
			var node = first_child
			while node != null do
				v.enter_visit(node)
				if node isa MdSoftLineBreak or node isa MdHardLineBreak then
					v.add_md "> "
				end
				node = node.next
			end
			v.add_line
			return
		end
		# var is_tight = is_in_tight_list
		# if not is_tight then
			# v.add_line
		# end
		visit_all(v)
		# if not is_tight then
			v.add_line
		# end
		if next isa MdParagraph then
			v.add_md "\n"
		end
	end
end

redef class MdThematicBreak
	redef fun render_md(v) do
		v.add_line
		v.add_md original_pattern
		v.add_line
	end
end

redef class MdHtmlBlock
	redef fun render_md(v) do
		v.add_line
		v.add_md literal or else ""
		v.add_line
	end
end

# Inlines

redef class MdHardLineBreak
	redef fun render_md(v) do
		if has_backslash then
			v.add_md "\\"
		else
			v.add_md "  "
		end
		v.add_line
	end

	redef fun process_len(v) do
		super
		v.length += 1
	end
end

redef class MdSoftLineBreak
	redef fun render_md(v) do
		v.add_line
	end

	redef fun process_len(v) do
		super
		v.length += 1
	end
end

redef class MdCode
	redef fun render_md(v) do
		v.add_md delimiter
		v.add_md literal
		v.add_md delimiter
	end

	redef fun process_len(v) do
		super
		v.length += delimiter.length
	end
end

redef class MdDelimited
	redef fun render_md(v) do
		v.add_md delimiter
		visit_all(v)
		v.add_md delimiter
	end

	redef fun process_len(v) do
		super
		v.length += delimiter.length * 2
	end
end

redef class MdHtmlInline
	redef fun render_md(v) do
		v.add_md literal
	end

	redef fun process_len(v) do
		v.length += literal.length
	end
end

redef class MdLinkOrImage
	redef fun render_md(v) do
		var title = self.title
		v.add_md "["
		visit_all(v)
		v.add_md "]"
		v.add_md "("
		if has_brackets then
			v.add "<"
		end
		v.add_md destination
		if has_brackets then
			v.add ">"
		end
		if title != null and not title.is_empty then
			v.add_md " \""
			v.add_md title.replace("\"", "\\\"")
			v.add_md "\""
		end
		v.add_md ")"
	end
end


redef class MdImage
	redef fun render_md(v) do
		v.add_md "!"
		super
	end
end

redef class MdLink
	redef fun render_md(v) do
		if is_autolink then
			v.add_md "<"
			v.add_md destination
			v.add_md ">"
			return
		end
		super
	end
end

redef class MdText
	redef fun render_md(v) do
		v.add_md literal
	end

	redef fun process_len(v) do
		v.length += literal.length
	end
end
