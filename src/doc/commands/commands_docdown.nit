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

# Doc down related queries
module commands_docdown

import commands::commands_model
import doc_down

# Retrieve the MDoc summary
#
# List all MarkdownHeading found and their ids.
class CmdSummary
	super CmdComment

	# Headings found in the MDoc
	var headings: nullable Array[MdHeading] = null is optional, writable

	redef fun init_command do
		if headings != null then return new CmdSuccess
		var res = super
		if not res isa CmdSuccess then return res
		var mdoc = self.mdoc.as(not null)
		self.headings = mdoc.mdoc_headings
		return res
	end
end
