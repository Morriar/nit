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

module down_base

import phases_base
import markdown2

redef class ToolContext
	var mdoc_phase = new ParseMDocPhase(self, [typing_phase, examples_phase])
end

abstract class MDocPhase
	super DocPhase

	redef fun process_nmodule(nmodule) do
		var mmodule = nmodule.mmodule
		if mmodule != null then
			try_process_mdoc(nmodule.mmodule)
			var mgroup = mmodule.mgroup
			if mgroup != null and mgroup.name == mmodule.name then
				try_process_mdoc(mgroup)
			end
		end
	end

	redef fun process_nclassdef(nclassdef) do
		try_process_mdoc(nclassdef.mclassdef)
	end

	redef fun process_npropdef(npropdef) do
		try_process_mdoc(npropdef.mpropdef)
	end

	private fun try_process_mdoc(mentity: nullable MEntity) do
		if mentity == null then return
		var mdoc = mentity.mdoc
		if mdoc == null then return
		process_mdoc(mdoc)
	end

	fun process_mdoc(mdoc: MDoc) do end

	fun join_location(nit: Location, md: MdLocation, code: nullable Location): Location do
		var line_start = nit.line_start
		var line_end = nit.line_start
		var column_start = nit.column_start
		var column_end = nit.column_start

		# print nit
		# print md
		line_start += md.line_start - 1
		line_end += md.line_end - 1
		column_start += md.column_start
		column_end += md.column_end

		if code != null then
			# print code
			line_start += code.line_start
			# line_end = code.line_end
			column_start += code.column_start
			# column_end = code.column_end - 2
		end

		var file = nit.file
		if file != null and not file.filename.has_suffix(".md") then
			# column_start += 1
		end

		return new Location(nit.file, line_start, line_end, column_start, column_end)
	end
end

class ParseMDocPhase
	super MDocPhase

	# Markdown parser used to analyze MDoc contents
	var mdoc_parser = new MdParser

	redef fun try_process_mdoc(mentity) do
		if mentity == null then return
		var mdoc = mentity.mdoc
		if mdoc == null then
			do
				if mentity.is_fictive then return
				if mentity.is_test then return
				if mentity.is_example then return
				if mentity isa MPropDef then
					if not mentity.is_intro then return
					if mentity.mclassdef.is_test then return
					if mentity.mclassdef.mmodule.mdoc == null then return
					if mentity.mclassdef.mmodule.is_example then return
					if mentity.mproperty.visibility == private_visibility then return
					if mentity isa MMethodDef then
						if mentity.mproperty.is_init then return
						if mentity.is_extern then return
					end
				else if mentity isa MClassDef then
					if not mentity.is_intro then return
					if mentity.mmodule.mdoc == null then return
					if mentity.mmodule.is_test then return
					if mentity.mmodule.is_example then return
					if mentity.mclass.visibility == private_visibility then return
				end
			end
			warn(mentity.location, "doc-missing", "No MDoc for public entity `{mentity}`")
			return
		end
		process_mdoc(mdoc)
	end

	redef fun process_mdoc(mdoc) do
		mdoc.mdoc_document = mdoc_parser.parse(mdoc.content.join("\n"))
	end
end

redef class MDoc
	# Markdown AST of the MDoc content
	var mdoc_document: MdDocument is noinit

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
end
