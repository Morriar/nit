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

module index_phase

import typing
import model_index

redef class ToolContext

	var index_phase = new IndexPhase(self, [typing_phase])

	fun index_model do
		var model = modelbuilder.model
		for mentity in model.collect_mentities do
			if mentity isa MClassDef or mentity isa MPropDef then continue
			model.index.index mentity
			model.mentities_by_full_name[mentity.full_name] = mentity
		end
	end
end

# Catalog building phase
class IndexPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do toolcontext.index_model
end

redef class Model
	# Keep a direct link to mentities by full name to speed up `mentity_from_uri`
	redef var mentities_by_full_name = new HashMap[String, MEntity]

	# ModelIndex used to perform searches
	redef var index = new ModelIndex
end
