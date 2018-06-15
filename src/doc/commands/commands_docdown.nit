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

	# Headings found in the MDoc
	var headings: nullable Array[MdHeading] = null is optional, writable

	redef fun init_command do
		if headings != null then return new CmdSuccess
		var res = super
		if not res isa CmdSuccess then return res
		var mdoc = self.mdoc.as(not null)
		self.headings = mdoc.mdoc_headings
		return res
	end
end

redef class MDoc

	# Markdown AST of the MDoc content
	var mdoc_document: MdDocument is lazy do
		var parser = original_mentity.as(not null).model.mdoc_parser
		var ast = parser.parse(content.join("\n"))
		ast.mdoc = self
		parser.post_process(ast)
		return ast
	end

	# Markdown AST of the synopsis node if any
	var mdoc_synopsis: nullable MdHeading is lazy do
		var ast = mdoc_document
		var first = ast.first_child
		if not first isa MdHeading then return null
		return first
	end

	# Markdown AST of the MDoc content without the synopsis
	var mdoc_comment: Array[MdNode] is lazy do
		var res = new Array[MdNode]
		var ast = mdoc_document
		var synopsis = mdoc_synopsis
		var node = ast.first_child
		while node != null do
			if node != synopsis then res.add node
			node = node.next
		end
		return res
	end

	# Markdown headings from the MDoc document
	var mdoc_headings: Array[MdHeading] = mdoc_document.headings is lazy
end

redef class Model

	# Markdown parser used to analyze MDoc contents
	var mdoc_parser: MdParser is noautoinit, writable
end

# MDoc post-processors

# Post-processing for `MDoc::synopsis`
#
# This post-processor creates a `MdHeading` from the first node of a `MDoc::mdoc_document`
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

# Post-processing of code nodes
#
# This post-processor attach the Nit AST to each `MdCode` and `MdCodeBlock` that
# contains Nit code.
class MDocProcessCodes
	super MdPostProcessor

	# ToolContext used to parse pieces of code
	var toolcontext = new ToolContext is lazy

	# Visit each `MdCode` and `MdCodeBlock`
	redef fun visit(node) do
		if node isa MdCode then
			node.nit_ast = toolcontext.parse_something(node.literal)
			return
		end
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
		super
	end
end

# Post-processing of images
#
# This post-processor copies images and resources to an `output_directory`.
# The original `MdImage::destination` is replaced with the destination of the
# copied file.
class MDocProcessImages
	super MdPostProcessor

	# ToolContext to display errors
	var toolcontext = new ToolContext is lazy

	# Output directory where files are copied
	var output_directory: String

	# Path to the tmp resource directory
	var resources_path: String

	# Visit each `MdImage`
	redef fun visit(node) do
		var document = self.document
		if document == null then return

		var mdoc = document.mdoc
		if mdoc == null then return

		if node isa MdImage then
			# Keep absolute links as is
			var link = node.destination
			if link.has_prefix("http://") or link.has_prefix("https://") then return

			do
				# Get the directory of the doc object to deal with the relative link
				var source = mdoc.location.file
				if source == null then break
				var path = source.filename
				var stat = path.file_stat
				if stat == null then break
				if not stat.is_dir then path = path.dirname

				# Get the full path to the local resource
				var fulllink = path / link.to_s
				stat = fulllink.file_stat
				if stat == null then break

				# Get a collision-free catalog name for the resource
				var hash = fulllink.md5
				var ext = fulllink.file_extension
				if ext != null then hash = hash + "." + ext

				# Copy the local resource in the resource directory of the catalog
				var out_dir = output_directory / "resources"
				out_dir.mkdir
				fulllink.file_copy_to(out_dir / hash)

				# Hijack the link in the Markdown.
				node.destination = resources_path / "resources" / hash

				super
				return
			end

			# Something went bad
			toolcontext.error(mdoc.location, "Error: cannot find local image `{link}`")
			super
			return
		end
		super
	end
end

# Post-processing of MEntity names
#
# This post-processor attaches a `MEntity` to each span code containing a valid name.
class MDocProcessMEntityLinks
	super MdPostProcessor

	# Model where the names are matched with the entities
	var model: Model

	# Mainmodule for linearization
	var mainmodule: MModule

	# Filter to apply on matches
	var filter = new ModelFilter

	# Visit each `MdCode`
	redef fun visit(node) do
		if node isa MdCode then
			var mentity = try_find_mentity(node.literal.trim)
			if mentity != null then
				node.nit_mentity = mentity
			end
		end
		super
	end

	private fun try_find_mentity(text: String): nullable MEntity do
		if text.is_empty then return null

		var document = self.document
		if document == null then return null

		var mdoc = document.mdoc
		if mdoc == null then return null

		var mentity = mdoc.original_mentity
		if mentity == null then return null

		# Check parameters
		if mentity isa MMethod and link_mparameters(mentity.intro, text) then
			return null # Do not link parameters
		end
		if mentity isa MMethodDef and link_mparameters(mentity, text) then
			return null # Do not link parameters
		end

		var model = mentity.model
		var query = text.replace("nullable", "").trim

		if text.has("::") then
			# Direct name match in model
			var match = model.mentity_by_full_name(query, filter)
			if match != null then return match
			# TODO check visi and reach
			return null
		end

		# Check entity
		var mentities = model.mentities_by_name(query, filter)
		if mentities.is_empty then return null
		var match = mentities.first
		if mentities.length > 1 then
			var res = filter_matches(mentity, mentities)
			if res.is_empty then return null
			var best_score = 0
			for match2, score in res do
				if score > best_score then
					match = match2
					best_score = score
				end
			end
		end
		return match
	end

	# Check if `text` matches with a `mmethoddef` parameter
	private fun link_mparameters(mmethoddef: MMethodDef, text: String): Bool do
		var msignature = mmethoddef.msignature
		if msignature == null then return false
		for param in msignature.mparameters do
			if param.name == text then return true
		end
		return false
	end

	private fun filter_matches(mentity: MEntity, matches: Array[MEntity]): Map[MEntity, Int] do
		var res = new HashMap[MEntity, Int]
		for match in matches do
			var score = accept_match(mentity, match)
			if score > 0 then res[match] = score
		end
		return res
	end

	private fun accept_match(mentity, match: MEntity): Int do
		if mentity isa MProperty then mentity = mentity.intro
		if mentity isa MPropDef then
			# if match isa MPropDef then match = match.mproperty
			if match isa MProperty then
				var mclass = mentity.mclassdef.mclass
				if mclass.collect_accessible_mproperties(mainmodule, filter).has(match) then
					return 10
				end
				return 0
			end
		end
		if mentity isa MClass then mentity = mentity.intro
		if mentity isa MClassDef then
			if match isa MPropDef then match = match.mproperty
			if match isa MProperty then
				if mentity.mclass.collect_accessible_mproperties(mainmodule, filter).has(match) then
					return 10
				end
				return 0
			end
		end
		return 1
	end
end

# Post-processing for doc commands
#
# This post-processor attaches the `DocCommands` linked to each `MdWikilink`.
class MDocProcessCommands
	super MdPostProcessor

	# Parser used to process doc commands
	var parser: CommandParser

	# ToolContext to display errors
	var toolcontext: ToolContext

	# Visit each `MdWikilink`
	redef fun visit(node) do
		var document = self.document
		if document == null then return

		var mdoc = document.mdoc
		if mdoc == null then return

		if node isa MdWikilink then
			var link = node.link
			var name = node.title
			if name != null then link = "{name} | {link}"

			var command = parser.parse(link.write_to_string)
			var error = parser.error

			if error isa CmdError then
				toolcontext.error(mdoc.location, error.to_s)
				return
			end
			if error isa CmdWarning then
				toolcontext.warning(mdoc.location, "mdoc", error.to_s)
			end
			node.command = command
		end
		super
	end
end

# Post-processing for table of contents
#
# This post-processor attaches the summary of a `MDoc` to its `MdDocument`.
class MDocProcessSummary
	super MdPostProcessor

	# Visit each `MdHeading`
	redef fun visit(node) do
		var document = self.document
		if document == null then return

		if node isa MdHeading then
			document.headings.add node
		end
		super
	end
end

# Markdown AST nodes

redef class MdDocument

	# MDoc linked to this document if any
	var mdoc: nullable MDoc = null is writable

	# Headings contained in this document if any
	var headings = new Array[MdHeading]
end

redef class MdCodeBlock

	# Nit AST of this code block if any
	var nit_ast: nullable ANode = null is writable
end

redef class MdCode

	# Nit entity related to this span code if any
	#
	# Used to autolink MEntity names in span codes.
	var nit_mentity: nullable MEntity = null is writable

	# Nit AST of this code span if any
	var nit_ast: nullable ANode = null is writable
end

redef class MdWikilink

	# DocCommand parsed from this wikilink if any
	var command: nullable DocCommand = null is writable
end
