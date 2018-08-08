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

# DocDown services
#
# Used to retrieve Markdown AST nodes from MDoc content.
module doc_down

import commands::commands_parser
import markdown2
private import parser_util

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

# A Markdown post-processor for MDoc comments
class MDocPostProcessor
	super MdPostProcessor

	# ToolContext used to parse pieces of code
	var toolcontext: ToolContext

	private fun warn(location: Location, cat: String, message: String) do
		# toolcontext.warning(location, cat, message)
		# toolcontext.check_errors
	end

	private fun location(nit_location: Location, md_location: MdLocation): Location do
		var location = new Location(
			nit_location.file,
			nit_location.line_start + md_location.line_start - 1,
			nit_location.line_start + md_location.line_end - 1,
			nit_location.column_start + md_location.column_start,
			nit_location.column_start + md_location.column_end)
		return location
	end
end

# MDoc post-processors

# Post-processing for `MDoc::synopsis`
#
# This post-processor creates a `MdHeading` from the first node of a `MDoc::mdoc_document`
class MDocProcessSynopsis
	super MDocPostProcessor

	redef fun post_process(parser, document) do
		var mdoc = document.mdoc
		if mdoc == null then return

		var mentity = mdoc.original_mentity
		if mentity == null then return

		var first = document.first_child
		if first == null then return

		# Check rule for README
		if mdoc.original_mentity isa MGroup then
			if not first isa MdHeading or first.level != 1 then
				warn(location(mdoc.location, first.location), "mdoc-struct",
					"Warning: README synopsis should be a MdHeading 1")
			end
		else
			if not first isa MdParagraph then
				warn(location(mdoc.location, first.location), "mdoc-struct",
					"Warning: MDoc synopsis should be a MdParagraph")
			end
		end

		if first isa MdParagraph then
			var heading = new MdHeading(first.location, 1)

			var child = first.first_child
			while child != null do
				child.unlink
				heading.append_child(child)
				child = first.first_child
				if child isa MdLineBreak then break
			end
			first.replace(heading)
		end
	end
end

# Post-processing of code nodes
#
# This post-processor attach the Nit AST to each `MdCode` and `MdCodeBlock` that
# contains Nit code.
class MDocProcessCodes
	super MDocPostProcessor

	# Visit each `MdCode` and `MdCodeBlock`
	redef fun visit(node) do
		var doc = document
		if doc == null then return
		var mdoc = doc.mdoc
		if mdoc == null then return

		if node isa MdCode then
			node.nit_ast = toolcontext.parse_something(node.literal)
			return
		end
		if node isa MdCodeBlock then
			var literal = node.literal
			if literal != null then
				var ast: nullable ANode = null
				if node isa MdFencedCodeBlock then
					var meta = node.info or else "nit"
					if meta == "nit" or meta == "nitish" then
						ast = toolcontext.parse_something(literal)
					end
				end
				if node isa MdIndentedCodeBlock then
					ast = toolcontext.parse_something(literal)
					return
				end
				# if ast != null and not ast isa AError and not ast isa AModule then
					# if ast isa ABlockExpr then
						# var n_propdef = new AMainMethPropdef
						# n_propdef.n_block = ast
#
						# var n_classdef = new AMainClassdef
						# n_classdef.n_propdefs.add n_propdef
#
						# var mod = new AModule
						# mod.location = new Location
						# mod.n_classdefs.add n_classdef
						# ast = mod
					# end
				# end
				node.nit_ast = ast
				if (node.info == null or node.info == "nit") and ast isa AError then
					var location = new Location(
						mdoc.location.file,
						node.location.line_start + 1 + ast.location.line_start,
						node.location.line_start + 1 + ast.location.line_end,
						node.location.column_start + ast.location.column_start - 2,
						node.location.column_start + ast.location.column_end - 2)
					warn(location, "mdoc-code", ast.message)
				end
			end
			return
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
	super MDocPostProcessor

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
			warn(location(mdoc.location, node.location), "mdoc-resources",
				"Warning: cannot find local image `{link}`")
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
	super MDocPostProcessor

	# Model where the names are matched with the entities
	var model: Model

	# Mainmodule for linearization
	var mainmodule: MModule

	# Filter to apply on matches
	var filter = new ModelFilter

	# TODO
	var name_pt = "[a-zA-Z_][a-zA-Z0-9_=]*"
	# TODO
	var name_re: Regex = name_pt.to_re

	# TODO
	var qname_pt = "{name_pt}(::{name_pt})*"

	# TODO
	var qname_re: Regex = qname_pt.to_re

	var brackets_pt = "\\[.*\\]"
	var parens_pt = "\\(.*\\)"

	#
	var signature_re: Regex = "\\(([^(]*)(,([^(])*)*\\)".to_re

	var reference_pt = "^{qname_pt}({brackets_pt}|{parens_pt})?$"
	var reference_re: Regex = reference_pt.to_re

	var keywords = [
		"end", "not", "null", "var", "do", "then", "catch", "else", "loop", "is",
		"import", "module", "package", "class", "enum", "universal", "interface", "extern",
		"abstract", "intern", "fun", "new", "private", "public", "protected", "intrude", "readable",
		"writable", "redef", "if", "while", "for", "with", "assert", "and", "or", "in", "is",
		"isa", "once", "break", "contrinue", "return", "abort", "nullable", "special"]

	var bool_mentity: nullable MEntity is lazy do
		return model.mentity_by_full_name("core::Bool")
	end

	# Visit each `MdCode`
	redef fun visit(node) do
		if node isa MdCode then
			var text = node.literal.trim
			var mentity = try_find_mentity(text)
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

		var original_mentity = mdoc.original_mentity
		if original_mentity == null then return null

		# TODO + / - * ... ?
		# if not text.has(name_re) then return null

		if not text.has(reference_re) then
			return null
		end

		# Check qualified names
		var qn_match = text.search(qname_re)
		if qn_match == null then return null
		var qname = qn_match.to_s

		# Check keywords
		if qname == "self" then return original_mentity
		if qname == "true" or qname == "false" then return bool_mentity
		if keywords.has(qname) then return null

		# Check parameter names
		if original_mentity isa MMethod and link_mparameters(original_mentity.intro, text) then
			return null # Do not link parameters
		 else if original_mentity isa MMethodDef and link_mparameters(original_mentity, text) then
			return null # Do not link parameters
		end

		# Find by full name
		do
			var mentity = model.mentity_by_full_name(qname, filter)
			if mentity != null then return mentity
		end

		# Find by name
		var mentities = model.mentities_by_name(qname, filter)
		if mentities.length == 1 then return mentities.first

		if mentities.length > 1 then
			mentities = disambiguise(original_mentity, mentities)
			if mentities.length == 1 then return mentities.first
			# TODO Show warning?
			if mentities.length > 1 then
				# warn_conflicts(mdoc, node, mentities)
				return null
			end
		end

		var mpackage_name = null
		var mmodule_name = null
		var mclass_name = null
		var mprop_name = null

		var parts = qname.split("::")
		if parts.length == 1 then
			if qname == "self" then return original_mentity
			if qname == "true" or qname == "false" then return bool_mentity
			if keywords.has(qname) then return null
			mprop_name = qname
		else
			for part in parts do
				if part.is_upper then
					mprop_name = part
				else if part.chars.first.is_upper then
					mclass_name = part
				else
					if mclass_name != null then
						mprop_name = part
					else if mpackage_name != null then
						mmodule_name = part
					else
						mpackage_name = part
					end
				end
			end
		end

		# Match full names
		if mpackage_name != null then
			var full_name = mpackage_name
			if mmodule_name != null then
				full_name = "{full_name}::{mmodule_name}"
			else if mclass_name != null then
				full_name = "{full_name}::{class_name}"
				if mprop_name != null then
					full_name = "{full_name}::{mprop_name}"
				end
			end
			var mentity = model.mentity_by_full_name(full_name, filter)
			if mentity != null then return mentity
		end

		# Match semi-qualified names
		if mclass_name != null and mprop_name != null then
			var mclass = null
			var mclasses = model.mentities_by_name(mclass_name)
			if mclasses.is_empty then return null

			if mclasses.length == 1 then
				mclass = mclasses.first
			else
				mclasses = disambiguise(original_mentity, mclasses)
			end
			if mclasses.length == 1 then
				mclass = mclasses.first
			else
				# TODO Show warning?
				if mclasses.length > 1 then
					# warn_conflicts(mdoc, node, mentities)
				end
				return null
			end

			var mprops = model.mentities_by_name(mprop_name)
			if mprops.is_empty then return null
			if mprops.length == 1 then return mprops.first
			mprops = disambiguise(mclass, mprops)
			if mprops.length == 1 then return mprops.first
			# TODO Show warning?
			if mprops.length > 1 then
				# warn_conflicts(mdoc, node, mentities)
			end
		end
		return null
	end

	private fun warn_conflicts(mdoc: MDoc, node: MdNode, conflicts: Array[MEntity]) do
		var conflict_str = new Buffer
		var i = 0
		for conflict in conflicts do
			conflict_str.append "`{conflict.full_name}`"
			if i < conflicts.length - 2 then conflict_str.append ", "
			if i < conflicts.length - 1 then conflict_str.append " and "
			i += 1
		end
		var message = "Warning: Reference conflict between {conflict_str}"
		warn(location(mdoc.location, node.location), "mdoc-refs", message)
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

	private fun disambiguise(original_mentity: MEntity, mentities: Array[MEntity]): Array[MEntity] do
		var matches = new Array[MEntity]
		if original_mentity isa MPropDef then original_mentity = original_mentity.mclassdef
		if original_mentity isa MProperty then original_mentity = original_mentity.intro.mclassdef
		if original_mentity isa MClassDef then
			matches = has_mentities(original_mentity, mentities)
			if matches.length >= 1 then return matches
			original_mentity = original_mentity.mclass
		end
		if original_mentity isa MClass then
			matches = has_mentities(original_mentity, mentities)
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_ancestors(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			original_mentity = original_mentity.intro_mmodule
		end
		if original_mentity isa MModule then
			matches = has_mentities(original_mentity, mentities)
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_parents(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_ancestors(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			var mgroup = original_mentity.mgroup
			if mgroup != null then original_mentity = mgroup
		end
		if original_mentity isa MGroup then
			matches = has_mentities(original_mentity, mentities)
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_parents(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_ancestors(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			original_mentity = original_mentity.mpackage
		end
		if original_mentity isa MPackage then
			matches = has_mentities(original_mentity, mentities)
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_ancestors(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
			if matches.length >= 1 then return matches
			for parent in original_mentity.collect_ancestors(mainmodule, filter) do
				matches.add_all has_mentities(parent, mentities)
			end
		end
		return matches
	end

	private fun has_mentities(original_mentity: MEntity, mentities: Array[MEntity]): Array[MEntity] do
		var matches = new Array[MEntity]
		for mentity in mentities do
			if original_mentity.has_mentity(mentity, filter) then matches.add mentity
		end
		return matches
	end
end

class MDocProcessTextReferences
	super MDocProcessMEntityLinks

	# Visit each `MdCode`
	redef fun visit(node) do
		if node isa MdText then
			var text = node.literal.trim
			for word in text.split(" ") do
				if word.length < 3 then continue #or not word.chars.first.is_upper then continue
				var mentity = try_find_mentity(word)
				if mentity != null then
					node.nit_mentities.add mentity
				end
			end
		end
		super
	end
end

# Post-processing for doc commands
#
# This post-processor attaches the `DocCommands` linked to each `MdWikilink`.
class MDocProcessCommands
	super MDocPostProcessor

	# Parser used to process doc commands
	var parser: CommandParser

	# Visit each `MdWikilink`
	redef fun visit(node) do
		# var document = self.document
		# if document == null then return
		# print "la"

		# var mdoc = document.mdoc
		# if mdoc == null then return

		print "-- {node}"
		if node isa MdWikilink then
			var link = node.link
			var name = node.title
			if name != null then link = "{name} | {link}"

			var command = parser.parse(link.write_to_string)
			var error = parser.error

			if error isa CmdError then
				# warn(location(mdoc.location, node.location), "mdoc-cmd", error.to_s)
				return
			end
			if error isa CmdWarning then
				# warn(location(mdoc.location, node.location), "mdoc-cmd", error.to_s)
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

redef class MdText
	# TODO
	var nit_mentities = new Array[MEntity]
end

redef class MdWikilink

	# DocCommand parsed from this wikilink if any
	var command: nullable DocCommand = null is writable
end
