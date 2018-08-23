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

module align_commands

import align_base

class MdAlignWiikilinks
	super MdAligner

	redef fun visit(node) do
		if node isa MdWikilink then
			align_md_command(node)
		end
		node.visit_all(self)
	end

	fun align_md_command(node: MdWikilink) do
		var cmd = node.command
		if cmd == null then return
		if not cmd isa CmdEntity then return
		var mentity = cmd.mentity
		if mentity == null then return
		node.md_refs.add new MdRefWikilink(node, mentity, cmd)
	end
end

class MdRefWikilink
	super MdRefMEntity

	var command: DocCommand
end
