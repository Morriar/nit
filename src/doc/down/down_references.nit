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

module down_references

import down_base
import model_index

redef class ToolContext
	var mdoc_refs_phase = new PhaseReferences(self, [mdoc_phase])
end

class PhaseReferences
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		# TODO phase model index
		# TODO Extract exemples
		# TODO Check exemples
		# TODO warn
	end
end

class MDocProcessMEntityLinks
	super MdPostProcessor

	# Model where the names are matched with the entities
	var model: Model

	# Mainmodule for linearization
	var mainmodule: MModule

	# Filter to apply on matches
	var filter = new ModelFilter

	# Visit each `MdCode`
	redef fun visit(node) do
		if node isa MdCode then
			var mentity = try_find_mentity(node.literal.trim)
			if mentity != null then
				node.nit_mentity = mentity
			end
		end
		super
	end

	private fun try_find_mentity(text: String): nullable MEntity do
		if text.is_empty then return null

		var document = self.document
		if document == null then return null

		var mdoc = document.mdoc
		if mdoc == null then return null

		var mentity = mdoc.original_mentity
		if mentity == null then return null

		# Check parameters
		if mentity isa MMethod and link_mparameters(mentity.intro, text) then
			return null # Do not link parameters
		end
		if mentity isa MMethodDef and link_mparameters(mentity, text) then
			return null # Do not link parameters
		end

		var model = mentity.model
		var query = text.replace("nullable", "").trim

		if text.has("::") then
			# Direct name match in model
			var match = model.mentity_by_full_name(query, filter)
			if match != null then return match
			# TODO check visi and reach
			return null
		end

		# Check entity
		var mentities = model.mentities_by_name(query, filter)
		if mentities.is_empty then return null
		var match = mentities.first
		if mentities.length > 1 then
			var res = filter_matches(mentity, mentities)
			if res.is_empty then return null
			var best_score = 0
			for match2, score in res do
				if score > best_score then
					match = match2
					best_score = score
				end
			end
		end
		return match
	end

	# Check if `text` matches with a `mmethoddef` parameter
	private fun link_mparameters(mmethoddef: MMethodDef, text: String): Bool do
		var msignature = mmethoddef.msignature
		if msignature == null then return false
		for param in msignature.mparameters do
			if param.name == text then return true
		end
		return false
	end

	private fun filter_matches(mentity: MEntity, matches: Array[MEntity]): Map[MEntity, Int] do
		var res = new HashMap[MEntity, Int]
		for match in matches do
			var score = accept_match(mentity, match)
			if score > 0 then res[match] = score
		end
		return res
	end

	private fun accept_match(mentity, match: MEntity): Int do
		if mentity isa MProperty then mentity = mentity.intro
		if mentity isa MPropDef then
			# if match isa MPropDef then match = match.mproperty
			if match isa MProperty then
				var mclass = mentity.mclassdef.mclass
				if mclass.collect_accessible_mproperties(mainmodule, filter).has(match) then
					return 10
				end
				return 0
			end
		end
		if mentity isa MClass then mentity = mentity.intro
		if mentity isa MClassDef then
			if match isa MPropDef then match = match.mproperty
			if match isa MProperty then
				if mentity.mclass.collect_accessible_mproperties(mainmodule, filter).has(match) then
					return 10
				end
				return 0
			end
		end
		return 1
	end
end

redef class MdCode

	# Nit entity related to this span code if any
	#
	# Used to autolink MEntity names in span codes.
	var nit_mentity: nullable MEntity = null is writable
end
