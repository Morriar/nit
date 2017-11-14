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
import commands::commands_html

intrude import doc_down
intrude import markdown::wikilinks

# Retrieve the MDoc summary
#
# List all MarkdownHeading found and their ids.
class CmdSummary
	super CmdComment

	# Markdown processor used to parse the headlines
	var markdown_processor: nullable MarkdownProcessor = null is optional, writable

	# Resulting summary
	#
	# Associates each headline to its id.
	var summary: nullable ArrayMap[String, HeadLine] = null is optional, writable

	redef fun init_command do
		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		var markdown_processor = self.markdown_processor
		if markdown_processor == null then
			markdown_processor = new MarkdownProcessor
			self.markdown_processor = markdown_processor
		end

		var mdoc = self.mdoc
		if mdoc == null then
			mdoc = if fallback then mentity.mdoc_or_fallback else mentity.mdoc
			self.mdoc = mdoc
		end
		if mdoc == null then return new WarningNoMDoc(mentity)

		markdown_processor.process(mdoc.md_documentation.write_to_string)

		var summary = new ArrayMap[String, HeadLine]
		summary.add_all markdown_processor.decorator.headlines
		self.summary = summary
		return res
	end
end

# Custom Markdown processor able to process doc commands
class CmdDecorator
	super NitdocDecorator

	redef type PROCESSOR: CmdMarkdownProcessor

	# View used by wikilink commands to find model entities
	var view: ModelView

	redef fun add_span_code(v, buffer, from, to) do
		var text = new FlatBuffer
		buffer.read(text, from, to)
		var name = text.write_to_string
		name = name.replace("nullable ", "")
		var mentity = try_find_mentity(view, name)
		if mentity == null then
			super
		else
			v.add "<code>"
			v.emit_text mentity.html_link.write_to_string
			v.add "</code>"
		end
	end

	private fun try_find_mentity(view: ModelView, text: String): nullable MEntity do
		var mentity = view.mentity_by_full_name(text)
		if mentity != null then return mentity

		var mentities = view.mentities_by_name(text)
		if mentities.is_empty then
			return null
		else if mentities.length > 1 then
			# TODO smart resolve conflicts
		end
		return mentities.first
	end

	redef fun add_wikilink(v, token) do
		v.render_wikilink(token, view)
	end
end

# Same as `InlineDecorator` but with wikilink commands handling
class CmdInlineDecorator
	super InlineDecorator

	redef type PROCESSOR: CmdMarkdownProcessor

	# View used by wikilink commands to find model entities
	var view: ModelView

	redef fun add_wikilink(v, token) do
		v.render_wikilink(token, view)
	end
end

# Custom MarkdownEmitter for commands
class CmdMarkdownProcessor
	super MarkdownProcessor

	# Parser used to process doc commands
	var parser: CommandParser

	# Render a wikilink
	fun render_wikilink(token: TokenWikiLink, model: ModelView) do
		var link = token.link
		if link == null then return
		var name = token.name
		if name != null then link = "{name} | {link}"

		var cmd = link.write_to_string
		if cmd.is_empty then
			var error = new CmdParserError("Empty wikilink")
			emit_text error.to_html.write_to_string
			return
		end

		var command = parser.parse(cmd)
		var error = parser.error

		# If not a command, try a comment command
		if command == null and error isa CmdParserError then
			error = null
			command = new CmdEntity(parser.view, mentity_name = cmd)
			var status = command.parser_init(cmd, new HashMap[String, String])
			if not status isa CmdSuccess then error = status
		end

		if error isa CmdError then
			emit_text error.to_html.write_to_string
			return
		end
		if error isa CmdWarning then
			emit_text error.to_html.write_to_string
		end
		add command.as(not null).to_html
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
