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

module down_synopsis

import down_base

redef class ToolContext
	var mdoc_synopsis_phase = new DocSynopsisPhase(self, [mdoc_phase])
end

class DocSynopsisPhase
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		var first = mdoc.mdoc_document.first_child
		if first == null then return
		if first isa MdHeading then return
		# Check rule for README
		if mdoc.original_mentity isa MGroup then
			if not first isa MdHeading or first.level != 1 then
				warn(join_location(mdoc.location, first.location), "mdoc",
					"Warning: README synopsis should be a MdHeading 1")
			end
		else
			if not first isa MdParagraph then
				warn(join_location(mdoc.location, first.location), "mdoc",
					"Warning: MDoc synopsis should be a MdParagraph")
			end
		end
		# Replace node
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
