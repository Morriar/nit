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

class MdTextAlign
	super MdVisitor

	var model: Model

	var mainmodule: MModule

	var context: MEntity is noinit

	fun align_texts(doc: MdDocument, context: MEntity) do
		self.context = context
		enter_visit(doc)
	end

	var sep_re: Regex = "[\n\t ,.?!~`@#$%^&*()+=/\\|\"':;><-]".to_re

	redef fun visit(node) do
		if not node isa MdText then
			node.visit_all(self)
			return
		end
		var text = node.literal
		for word in text.split(sep_re) do
			if word.trim.is_empty then continue

			var ref = new MdRefText(node, word)
			var refs = align_word(node, word).to_a
			refs = filter_refs(refs)
			ref.model_refs.add_all refs
			node.md_refs.add ref
		end
	end

	var name_index: Map[String, Array[MEntity]] is lazy do
		var index = new HashMap[String, Array[MEntity]]
		for mentity in model.collect_mentities do
			var name = lemmatize(mentity.name)
			if not index.has_key(name) then
				index[name] = new Array[MEntity]
			end
			index[name].add mentity
		end
		return index
	end

	var stopwords = ["from", "new", "to", "code", "all", "set", "output", "other"]

	fun align_word(node: MdText, word: String): ArraySet[MdRefMEntity] do
		var res = new ArraySet[MdRefMEntity]

		if word.length <= 1 then return res
		# if stopwords.has(word.to_lower) then return res
		if word.to_lower.has("examp") then word = "examples"
		if word.to_lower.has("test") then word = "tests"

		# Direct match
		var mentities = model.mentities_by_name(word)
		for mentity in mentities do
			if mentity isa MClassDef then continue
			if mentity isa MPropDef then continue
			if mentity isa MProperty then
				if mentity.name.length <= 2 then continue
				if stopwords.has(mentity.name) then continue
				if not context.has_mentity(mentity) then continue
			end
			res.add new MdRefMEntity(node, word, 90.0, mentity)
		end

		# Lemma match
		var name = lemmatize(word)
		if name_index.has_key(name) then
			for mentity in name_index[name] do
				if mentity isa MClassDef then continue
				if mentity isa MPropDef then continue
				if mentity isa MProperty then
					if mentity.name.length <= 2 then continue
					if stopwords.has(mentity.name) then continue
					if not context.has_mentity(mentity) then continue
				end
				res.add new MdRefMEntity(node, word, 80.0, mentity)
			end
		end

		return res
	end

	fun lemmatize(name: String): String do
		name = name.to_lower
		name = name.replace("[^r]ing$".to_re, "e")
		name = name.replace("ies$".to_re, "y")
		name = name.replace("xes$".to_re, "x")
		name = name.replace("s$".to_re, "")
		return name
	end

	fun filter_refs(refs: Collection[MdRefMEntity]): Array[MdRefMEntity] do
		var res = new Array[MdRefMEntity]

		var has_mpackage = false
		var has_mgroup = false
		var has_mmodule = false
		var has_mclass = false
		var mentities = new HashSet[MEntity]
		for ref in refs do
			var mentity = ref.mentity
			if mentity isa MPackage then has_mpackage = true
			if mentity isa MGroup then has_mgroup = true
			if mentity isa MModule then has_mmodule = true
			if mentity isa MClass then has_mclass = true
		end
		for ref in refs do
			var mentity = ref.mentity
			if mentities.has(mentity) then continue
			if has_mpackage and mentity isa MGroup then continue
			if (has_mpackage or has_mgroup) and mentity isa MModule then continue
			# if (has_mpackage or has_mgroup or has_mmodule) and mentity isa MClass then continue
			if (has_mpackage or has_mgroup or has_mmodule or has_mclass) and mentity isa MProperty then continue
			mentities.add mentity
			res.add ref
		end
		return res
	end
end

redef class MdText
	var md_refs = new Array[MdRefText]
end

redef class String
	fun capitalize: String do
		var res = new Buffer
		var chars = self.chars.to_a
		res.add chars.shift.to_upper
		res.append chars.join("")
		return res.to_s
	end
end
