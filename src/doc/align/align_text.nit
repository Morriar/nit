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

module align_text

import align_base

class MdAlignTexts
	super MdAligner

	var sep_re: Regex = "[\n\t ,.?!~`@#$%^&*()+=/\\|\"':;><-]".to_re

	redef fun visit(node) do
		if not node isa MdText then
			node.visit_all(self)
			return
		end
		var text = node.literal
		for word in text.split(sep_re) do
			if word.trim.is_empty then continue
			node.md_refs.add_all align_word(node, word)
		end
	end

	# TODO move to `ModelIndex`
	var name_index: Map[String, Array[MEntity]] is lazy do
		var index = new HashMap[String, Array[MEntity]]
		for mentity in model.collect_mentities do
			var name = lemmatize_name(mentity.name)
			if not index.has_key(name) then
				index[name] = new Array[MEntity]
			end
			index[name].add mentity
		end
		return index
	end

	var stopwords = ["from", "new", "to", "code", "all", "set", "output", "other"]

	fun align_word(node: MdText, original_word: String): ArraySet[MdRefMEntity] do
		var res = new ArraySet[MdRefMEntity]

		var word = original_word
		if word.length <= 1 then return res
		# if stopwords.has(word.to_lower) then return res
		if word.to_lower.has("examp") then word = "examples"
		if word.to_lower.has("test") then word = "tests"

		# Direct match
		var direct_matches = new HashSet[MEntity]
		var mentities = model.mentities_by_name(word)
		for mentity in mentities do
			if mentity isa MClassDef then continue
			if mentity isa MPropDef then continue
			if mentity isa MProperty then
				if mentity.name.length <= 2 then continue
				if stopwords.has(mentity.name) then continue
				if not context.has_mentity(mentity) then continue
			end
			res.add new MdRefText(node, mentity, original_word)
			direct_matches.add mentity
		end

		# Lemma match
		var name = lemmatize_name(word)
		if name_index.has_key(name) then
			for mentity in name_index[name] do
				if direct_matches.has(mentity) then continue
				if mentity isa MClassDef then continue
				if mentity isa MPropDef then continue
				if mentity isa MProperty then
					if mentity.name.length <= 2 then continue
					if stopwords.has(mentity.name) then continue
					if not context.has_mentity(mentity) then continue
				end
				res.add new MdRefText(node, mentity, original_word)
			end
		end

		return res
	end

	# TODO use NLP
	fun lemmatize_name(name: String): String do
		name = name.to_lower
		name = name.replace("[^r]ing$".to_re, "e")
		name = name.replace("ies$".to_re, "y")
		name = name.replace("xes$".to_re, "x")
		name = name.replace("s$".to_re, "")
		return name
	end
end

class MdRefText
	super MdRefMEntity

	var string: String
end
