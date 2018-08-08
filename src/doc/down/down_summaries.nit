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

module down_summaries

import down_base

redef class ToolContext
	var mdoc_summaries_phase = new PhaseSummaries(self, [mdoc_phase])
end

class PhaseSummaries
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		# TODO Extract exemples
		# TODO Check exemples
		# TODO warn
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

redef class MdDocument

	# MDoc linked to this document if any
	var mdoc: nullable MDoc = null is writable

	# Headings contained in this document if any
	var headings = new Array[MdHeading]
end

