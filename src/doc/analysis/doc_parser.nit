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

module doc_parser

import location
import markdown::decorators
import markdown::wikilinks

# Abstract representation of a documentation file or comment
#
# Documentation files are markdown formated pieces of text such as READMEs and
# MDoc comments.
class DocModel
	super DocSection

	noautoinit

	redef var md_location = new Location(null, 1, 1, 1, 1)
	redef var title = ""
	redef var level = 0
	redef var parent = null

	redef fun block_at(location) do
		# print self
		# print is_empty
		# print "loc: {self.location}"
		# print "--"
		for sub in content do
			# print sub
			# print sub.location
			if sub.has_location(location) then
				return sub.block_at(location)
			end
		end
		return self
	end

	fun section_at(location: Location): nullable DocSection do
		var sections = all_subsections.reversed
		for section in sections do
			if section.has_location(location) then return section
		end
		if sections.not_empty then return sections.first
		return self
	end

	redef fun to_s do return "DocModel"
end

# Documentation blocks

# The base class for sections, paragraphs, code blocks etc...
abstract class DocBlock

	# Parent block if any
	var parent: nullable DocComposite

	private var md_location: Location

	fun raw_content: String do return to_s

	fun location: Location do return md_location

	fun has_location(location: Location): Bool do
		return location.located_in(self.location)
	end

	fun block_at(location: Location): nullable DocBlock do
		if has_location(location) then return self
		return null
	end

	fun section: nullable DocSection do
		var parent = self.parent
		while parent != null do
			if parent isa DocSection then return parent
			parent = parent.parent
		end
		return null
	end

	var refs = new ArraySet[String]

	fun all_refs: ArraySet[String] do return refs

	var cards = new ArraySet[String]

	fun all_cards: ArraySet[String] do return cards
end

# Documentation block composed of other sub blocks
#
# Composite doc blocks accept children.
# Usefull to factorize code for sections, lists and list-items, etc.
abstract class DocComposite
	super DocBlock

	type COMPOSITE: DocBlock

	var content = new Array[COMPOSITE]

	# Is the block empty?
	#
	# An block is empty if it does not contain any subcontent block.
	fun is_empty: Bool do return content.is_empty

	redef fun all_refs do
		var res = new ArraySet[String]
		res.add_all refs
		for block in content do res.add_all block.all_refs
		return res
	end

	redef fun all_cards do
		var res = new ArraySet[String]
		res.add_all cards
		for block in content do res.add_all block.all_cards
		return res
	end

	redef fun raw_content do
		var buffer = new Buffer
		for sub in content do
			buffer.append sub.raw_content
		end
		return buffer.write_to_string
	end

	redef fun location do
		if is_empty then return md_location
		return new Location(null, md_location.line_start, content.last.location.line_end,
			md_location.column_start, content.last.location.column_end)
	end

	redef fun block_at(location) do
		if not has_location(location) then return null
		for sub in content do
			if sub.has_location(location) then
				return sub.block_at(location)
			end
		end
		return self
	end
end

# Documentastion section
#
# Sections are extracted from markdown headings.
class DocSection
	super DocComposite

	# Heading lebel
	var level: Int

	# Section heading title
	var title: String

	# Direct subsections
	fun subsections: Array[DocSection] do
		var res = new Array[DocSection]
		for sub in content do
			if not sub isa DocSection then continue
			res.add sub
		end
		return res
	end

	# All subsections (direct and indirect)
	fun all_subsections: Array[DocSection] do
		var res = new Array[DocSection]
		for sub in content do
			if not sub isa DocSection then continue
			res.add sub
			res.add_all sub.all_subsections
		end
		return res
	end

	redef fun to_s do
		var buffer = new Buffer
		if level > 0 then buffer.append "{"#" * level} "
		buffer.append title
		buffer.append " ({location})"
		return buffer.write_to_string
	end

	redef fun raw_content do
		var buffer = new Buffer
		buffer.append to_s
		buffer.append "\n\n"
		buffer.append super
		return buffer.write_to_string
	end
end

class DocParagraph
	super DocBlock

	var text: String

	redef fun to_s do return "{text} ({location})"
end

class DocCode
	super DocBlock

	var code: String

	redef fun to_s do return "{code} ({location})"
end

class DocList
	super DocComposite

	redef type COMPOSITE: DocListItem

	redef fun raw_content do
		var buffer = new Buffer
		for item in content do
			buffer.append item.raw_content
		end
		return buffer.write_to_string
	end

	redef fun to_s do
		var buffer = new Buffer
		for item in content do
			buffer.append item.to_s
			buffer.append "\n"
		end
		buffer.append "({location})"
		return buffer.write_to_string
	end
end

class DocListItem
	super DocComposite

	var text: String

	redef fun raw_content do return text

	redef fun to_s do return "* {text.trim} ({location})"
end

class DocParser

	fun parse_string(string: String): DocModel do
		var doc = new DocModel
		var decorator = new DocParserDecorator(doc)
		var parser = new MarkdownProcessor
		parser.decorator = decorator
		parser.process(string)
		return decorator.doc
	end

	fun parse_file(file: String): DocModel do
		return parse_string(file.to_path.read_all)
	end
end

# The specific markdown decorator used internally to process MDoc object.
#
# You should use the various methods of `MDoc` like `MDoc::html_documentation`
#
# The class is public so specific behavior can be plugged on it.
class DocParserDecorator
	super MdDecorator

	var doc: DocModel

	var current_parent: Array[DocComposite] is lazy do return [doc: DocComposite]
	var current_paragraph: nullable DocParagraph = null

	fun add_to_parent(block: DocBlock) do
		if current_parent.is_empty then return
		current_parent.last.content.add block
	end

	redef fun add_headline(v, block) do
		var first_line = block.block.first_line
		var txt = if first_line ==  null then "" else first_line.value
		var level = block.depth

		var md_loc = block.block.location
		var loc = new nitc::Location(null, md_loc.line_start, md_loc.line_end,
			md_loc.column_start, md_loc.column_end)

		var parent: nullable DocSection = null
		loop
			if current_parent.is_empty then break
			var last = current_parent.last
			if last isa DocSection and last.level < level then
				parent = last
				break
			end
			current_parent.pop
		end

		var section = new DocSection(parent, loc, level, txt)
		add_to_parent(section)
		current_parent.add section
		super
	end

	redef fun add_paragraph(v, block) do
		var text = block.block.text
		var loc = block.block.location.to_location
		var parent = if current_parent.not_empty then current_parent.last else null
		var par = new DocParagraph(parent, loc, text)
		add_to_parent(par)
		current_paragraph = par
		super
		current_paragraph = null
	end

	redef fun add_code(v, block) do
		var text = block.block.text
		var loc = block.block.location.to_location
		var parent = if current_parent.not_empty then current_parent.last else null
		var code = new DocCode(parent, loc, text)
		add_to_parent(code)
		super
	end

	private fun add_list(v: MarkdownProcessor, block: BlockList) do
		var loc = block.block.location.to_location
		var parent = if current_parent.not_empty then current_parent.last else null
		var list = new DocList(parent, loc)
		add_to_parent(list)
		current_parent.add list
	end

	redef fun add_unorderedlist(v, block) do
		add_list(v, block)
		super
		current_parent.pop
	end

	redef fun add_orderedlist(v, block) do
		add_list(v, block)
		super
		current_parent.pop
	end

	redef fun add_listitem(v, block) do
		var loc = block.block.location.to_location
		var parent = if current_parent.not_empty then current_parent.last else null
		var item = new DocListItem(parent, loc, block.block.text)
		add_to_parent(item)
		current_parent.add item
		super
		current_parent.pop
	end

	redef fun add_span_code(v, buffer, from, to) do
		var parent: nullable DocBlock = null
		if current_paragraph != null then
			parent = current_paragraph
		else if current_parent.not_empty then
			parent = current_parent.last
		end

		if parent != null then
			var text = new FlatBuffer
			buffer.read(text, from, to)
			parent.refs.add text.write_to_string.replace("nullable ", "")
		end
		super
	end

	redef fun add_wikilink(v, token) do
		var parent: nullable DocBlock = null
		if current_paragraph != null then
			parent = current_paragraph
		else if current_parent.not_empty then
			parent = current_parent.last
		end

		var name = token.name
		var link = token.link

		var card = ""
		if name != null and link != null then
			card = "[[{name.to_s}|{link.to_s}]]"
		else if name != null then
			card = "[[{name.to_s}]]"
		else if link != null then
			card = "[[{link.to_s}]]"
		end

		if parent != null then
			parent.cards.add card
		end
		super
	end
end

redef class Text
	# Read `self` between `nstart` and `nend` (excluded) and writte chars to `out`.
	private fun read(out: FlatBuffer, nstart, nend: Int): Int do
		var pos = nstart
		while pos < length and pos < nend do
			out.add self[pos]
			pos += 1
		end
		if pos == length then return -1
		return pos
	end
end

redef class MDLocation
	fun to_location: nitc::Location do
		return new nitc::Location(null, line_start, line_end, column_start, column_end)
	end
end
