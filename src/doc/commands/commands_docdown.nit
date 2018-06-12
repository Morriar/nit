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

# Doc down related queries
module commands_docdown

import commands::commands_parser
import markdown2
private import parser_util

# Retrieve the MDoc summary
#
# List all MarkdownHeading found and their ids.
class CmdSummary
	super CmdComment

	# Markdown processor used to parse the headlines
	var summary_decorator = new CmdSummaryDecorator(true) is lazy

	# Resulting summary
	#
	# Associates each headline to its id.
	var summary: nullable ArrayMap[String, MdHeading] = null is optional, writable

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var mdoc = self.mdoc
		if mdoc == null then
			mdoc = if fallback then mentity.mdoc_or_fallback else mentity.mdoc
			self.mdoc = mdoc
		end
		if mdoc == null then return new WarningNoMDoc(mentity)

		summary_decorator.render(mdoc.mdoc_ast)
		self.summary = summary_decorator.headings
		return res
	end
end

#
class CmdSummaryDecorator
	super HtmlRenderer
end

redef class MDoc

	# Markdown parser used to analyze the MDoc content
	var mdoc_parser: MdParser = original_mentity.as(not null).model.mdoc_parser is lazy

	# Markdown AST of the MDoc content
	var mdoc_ast: MdDocument = mdoc_parser.parse(content.join("\n")) is lazy

	# Raw synopsis
	#
	# * Returns the first line of the MDoc content without the headings `#`.
	# * Returns `null` if the content is empty.
	# * Returns `null` if the content does not start with a Markdown heading.
	redef var synopsis is lazy do
		var ast = mdoc_ast
		var first = ast.first_child
		if not first isa MdHeading then return null
		return first.raw_text
	end
end

redef class Model

	#
	var cmd_parser: CommandParser is noautoinit, writable

	# Markdown parser used to analyze MDoc contents
	var mdoc_parser: MdParser is lazy, writable do
		var parser = new MdParser
		parser.github_mode = true
		parser.wikilinks_mode = true
		parser.post_processors.add new MDocProcessSynopsis
		parser.post_processors.add new MDocProcessSpanCodes
		parser.post_processors.add new MDocProcessMEntityLinks(self)
		parser.post_processors.add new MDocProcessCommands(cmd_parser)
		return parser
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
class MDocProcessMEntityLinks
	super MdPostProcessor

	#
	var model: Model

	#
	var filter = new ModelFilter

	redef fun visit(node) do
		# Visit each span code
		if node isa MdCode then
			var name = node.literal
			name = name.replace("nullable ", "")
			var mentity = try_find_mentity(name)
			if mentity != null then
				node.nit_mentity = mentity
			end
		end
		super
	end

	private fun try_find_mentity(text: String): nullable MEntity do
		var mentity = model.mentity_by_full_name(text, filter)
		if mentity != null then return mentity

		var mentities = model.mentities_by_name(text, filter)
		if mentities.is_empty then
			return null
		else if mentities.length > 1 then
			# TODO smart resolve conflicts
		end
		return mentities.first
	end
end

#
class MDocProcessCommands
	super MdPostProcessor

	# Parser used to process doc commands
	var parser: CommandParser

	redef fun visit(node) do
		# Visit each span code
		if node isa MdWikilink then
			var link = node.link
			var name = node.title
			if name != null then link = "{name} | {link}"

			var command = parser.parse(link.write_to_string)
			var error = parser.error

			if error isa CmdError then
				# TODO render error
				# emit_text error.to_html.write_to_string
				return
			end
			if error isa CmdWarning then
				# TODO render error
				# emit_text error.to_html.write_to_string
			end
			node.command = command
		end
		super
	end
end

redef class MdNode

	#
	fun post_process(v: MdPostProcessor) do visit_all(v)
end

redef class MdCodeBlock
	#
	var nit_ast: nullable ANode = null is writable
end

redef class MdCode
	#
	var nit_mentity: nullable MEntity = null is writable

	#
	var nit_ast: nullable ANode = null is writable
end

redef class MdWikilink

	#
	var command: nullable DocCommand = null is writable
end
