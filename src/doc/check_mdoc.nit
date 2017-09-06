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

# Check the documentation of all modules, classes and properties.
module check_mdoc

import modelize_class
import modelize_property

redef class ToolContext
	var mdoc_phase: Phase = new MDocPhase(self, [modelize_class_phase, modelize_property_phase])
end

private class MDocPhase
	super Phase


	redef fun process_nclassdef(nclassdef) do
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return
		var mclass = mclassdef.mclass

		if nclassdef isa AStdClassdef then
			var ndoc = nclassdef.n_doc
			if ndoc == null and mclassdef.is_intro and mclass.visibility >= public_visibility then
				toolcontext.modelbuilder.advice(nclassdef, "missing-doc",
					"Documentation warning: Undocumented public class `{mclass}`")
			end
		end
	end

	redef fun process_npropdef(npropdef) do
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return
		var mproperty = mpropdef.mproperty

		var ndoc = npropdef.n_doc
		if ndoc == null and mpropdef.is_intro and mproperty.visibility >= protected_visibility and mpropdef.name != "new" then
			toolcontext.modelbuilder.advice(npropdef, "missing-doc",
				"Documentation warning: Undocumented property `{mpropdef.mproperty}`")
		end
	end
end
