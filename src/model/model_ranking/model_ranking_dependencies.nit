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

# TODO also with doc as html and nitdoc parser
module model_ranking_dependencies

import model_ranking_base
import model_views

# Weight concerns based on dependencies.
class DepRanker
	super ModelRanker

	# Main module used to resolve class hierarchy
	var mainmodule: MModule

	redef fun rank_mmodule(mmodule) do
		return mmodule.in_importation.smallers.length.to_f
	end

	redef fun rank_mclass(mclass) do
		return mclass.in_hierarchy(mainmodule).smallers.length.to_f
	end

	redef fun rank_mclassdef(mclassdef) do
		var poe = mclassdef.in_hierarchy
		if poe == null then return 0.0
		return poe.smallers.length.to_f
	end
end

# Weight mentities based on documentation dependency.
class DocDepRanker
	super ModelRanker

	# Model view to analyse
	var view: ModelView

	redef fun rank_mentity(mentity) do
		# POSet of documentation dependencies.
		var dep_poset = new POSet[MEntity]
		for oentity in view.mentities do
			if mentity == oentity then continue
			if mentity.has_ref_to(oentity) then
				dep_poset.add_edge(mentity, oentity)
			end
		end

		if dep_poset.has(mentity) then
			return dep_poset[mentity].smallers.length.to_f
		end
		return 0.0
	end
end

redef class MEntity

	# Does this documentation contains the name of `mentity`?
	private fun has_ref_to(mentity: MEntity): Bool do
		var mdoc = self.mdoc
		if mdoc == null then return false
		var re = "\\b{mentity.name.escape_to_re}\\b".to_re
		return mdoc.content.join(" ").has(re)
	end
end

redef class String
	private fun escape_to_re: String do
		if self == "+" then return "\\+"
		if self == "*" then return "\\*"
		if self == "**" then return "\\*\\*"
		if self == "[]" then return "\\[\\]"
		if self == "[]=" then return "\\[\\]="
		return self
	end
end
