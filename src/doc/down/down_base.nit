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

import modelize
import modelbuilder
import markdown2

redef class ToolContext
	var mdoc_phase = new MDocPhase(self) is lazy
end

abstract class DocPhase
	super Phase

	fun warn(location: Location, cat: String, message: String) do
		toolcontext.warning(location, cat, message)
		toolcontext.check_errors
	end

	fun join_location(nit_location: Location, md_location: MdLocation): Location do
		var location = new Location(
			nit_location.file,
			nit_location.line_start + md_location.line_start - 1,
			nit_location.line_start + md_location.line_end - 1,
			nit_location.column_start + md_location.column_start,
			nit_location.column_start + md_location.column_end)
		return location
	end

end

class MDocPhase
	super DocPhase

	# Markdown parser used to analyze MDoc contents
	var mdoc_parser: MdParser is noautoinit, writable

	redef fun process_nmodule(nmodule) do
		var mmodule = nmodule.mmodule
		try_process_mdoc(mmodule)
		if mmodule == null then return

		var mgroup = mmodule.mgroup
		if mgroup != null and mgroup.name == mmodule.name then
			process_mgroup(mgroup)
		end
	end

	fun process_mgroup(mgroup: MGroup) do
		try_process_mdoc(mgroup)
		if mgroup.mpackage.root == mgroup then
			process_mpackage(mgroup.mpackage)
		end
	end

	fun process_mpackage(mpackage: MPackage) do
		try_process_mdoc(mpackage)
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
		if mdoc == null then
			# TODO warn mdoc empty
			return
		end
		process_mdoc(mdoc)
	end

	fun process_mdoc(mdoc: MDoc) do
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
