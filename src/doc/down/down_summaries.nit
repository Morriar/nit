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

class SummariesPhase
	super MdPhase

	redef fun process_ast(context, document) do
		var v = new MDocProcessSummary(document)
		v.enter_visit(document)
	end
end

# Post-processing for table of contents
#
# This post-processor attaches the summary of a `MDoc` to its `MdDocument`.
class MDocProcessSummary
	super MdVisitor

	var document: MdDocument

	# Visit each `MdHeading`
	redef fun visit(node) do
		if node isa MdHeading then
			document.headings.add node
		end
		node.visit_all(self)
	end
end

redef class MdDocument
	# Headings contained in this document if any
	var headings = new Array[MdHeading]
end
