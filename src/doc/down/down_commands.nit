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

module down_commands

import down_base
import commands::commands_parser

redef class ToolContext
	var mdoc_commands_phase = new PhaseCommands(self, [mdoc_phase])
end

class PhaseCommands
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		# TODO Extract exemples
		# TODO Check exemples
		# TODO warn
	end
end

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

redef class MdWikilink

	# DocCommand parsed from this wikilink if any
	var command: nullable DocCommand = null is writable
end
