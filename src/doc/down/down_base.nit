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

abstract class MdPhase
	super MdVisitor

	var toolcontext: ToolContext

	fun process_ast(context: MEntity, ast: MdDocument) do end

	fun warn(location: Location, cat: String, message: String) do
		toolcontext.warning(location, cat, "Warning: {message}")
		toolcontext.check_errors
	end

	fun md_warn(context: MEntity, md_location: MdLocation, cat: String, message: String) do
		var location = context.location
		var mdoc = context.mdoc
		if mdoc != null then location = mdoc.location
		warn(join_location(location, md_location), cat, message)
	end

	fun code_warn(context: MEntity, md_location: MdLocation, nit_location: Location, cat: String, message: String) do
		var location = context.location
		var mdoc = context.mdoc
		if mdoc != null then location = mdoc.location
		warn(join_location(location, md_location, nit_location), cat, message)
	end

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
