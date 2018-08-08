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
import phases_catalog
import commands::commands_parser

redef class ToolContext

	var cmd_parser_phase = new CmdParserPhase(self, [catalog_phase])

	var commands_phase = new CommandsPhase(self, [mdoc_phase, cmd_parser_phase: MDocPhase])

	# Commands parser for MDoc
	# var cmd_parser: CommandParser is noinit
	var cmd_parser: CommandParser is noinit
end

class CmdParserPhase
	super MDocPhase

	redef fun process_mainmodule(mainmodule, mmodules) do
		toolcontext.cmd_parser = new CommandParser(
			toolcontext.modelbuilder.model,
			mainmodule,
			toolcontext.modelbuilder,
			toolcontext.catalog)
	end
end

class CommandsPhase
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		var v = new CommandsPhaseVisitor(self, mdoc, toolcontext.cmd_parser)
		v.enter_visit(mdoc.mdoc_document)
	end
end

private class CommandsPhaseVisitor
	super MdVisitor

	var phase: CommandsPhase
	var mdoc: MDoc

	# Parser used to process doc commands
	var parser: CommandParser

	# Visit each `MdWikilink`
	redef fun visit(node) do
		if node isa MdWikilink then
			var link = node.link
			var name = node.title
			if name != null then link = "{name} | {link}"

			var command = parser.parse(link.write_to_string)
			var error = parser.error

			if error isa CmdError then
				phase.warn(phase.join_location(mdoc.location, node.location),
					"doc-commands", error.to_s)
				return
			end
			if error isa CmdWarning then
				phase.warn(phase.join_location(mdoc.location, node.location),
					"doc-commands", error.to_s)
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
