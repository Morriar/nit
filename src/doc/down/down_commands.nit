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
import phases::catalog_phase
import commands::commands_parser

redef class ToolContext
	# Commands parser for MDoc
	# var cmd_parser: CommandParser is noinit
	var cmd_parser: CommandParser is noinit, writable
end

class CommandsPhase
	super MdPhase

	redef fun process_ast(context, document) do
		var v = new CommandsPhaseVisitor(self, context)
		v.enter_visit(document)
	end
end

private class CommandsPhaseVisitor
	super MdVisitor

	var phase: CommandsPhase
	var context: MEntity

	# Visit each `MdWikilink`
	redef fun visit(node) do
		if not node isa MdWikilink then
			node.visit_all(self)
			return
		end

		var parser = phase.toolcontext.cmd_parser
		var link = node.link
		var name = node.title
		if name != null then link = "{name} | {link}"

		var command = parser.parse(link.write_to_string)
		var error = parser.error

		if error isa CmdError then
			phase.md_warn(context, node.location, "doc-commands", error.to_s)
			return
		end
		if error isa CmdWarning then
			phase.md_warn(context, node.location, "doc-commands", error.to_s)
		end
		node.command = command
		node.visit_all(self)
	end
end

redef class MdWikilink

	# DocCommand parsed from this wikilink if any
	var command: nullable DocCommand = null is writable
end
