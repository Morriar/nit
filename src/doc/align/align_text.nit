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

import align_refs

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
		var words = new Array[String]
		for word in text.split(sep_re) do
			if word.trim.is_empty then continue
			words.add word
		end
		var ref = new MdRefText(text)
		for word in words do
			var refs = align_word(word).to_a
			refs = filter_refs(word, refs)
			ref.mentities.add_all refs
		end
		node.md_refs.add ref
	end

	var stopwords = ["from", "new", "to", "code", "all", "set", "output"]

	fun align_word(word: String): ArraySet[MEntity] do
		var res = new ArraySet[MEntity]

		if word.length <= 1 then return res
		if stopwords.has(word.to_lower) then return res
		if word.to_lower.has("examp") then word = "examples"
		if word.to_lower.has("test") then word = "tests"

		# Align packages
		var mpackage = model.mentity_by_full_name(word.to_lower)
		if mpackage != null then
			res.add mpackage
		end

		# Align groups
		var full_name = "{context.full_name}>{word.to_lower}>"
		var mgroup = model.mentity_by_full_name(full_name)
		if mgroup != null then
			res.add mgroup
		end

		# Align modules
		full_name = "{context.full_name}::{word.to_lower}"
		var mmodule = model.mentity_by_full_name(full_name)
		if mmodule != null then
			res.add mmodule
		end

		# Align classes
		var name = word.capitalize
		var mclasses = model.mentities_by_name(name)
		res.add_all mclasses

		name = name.replace("ies$".to_re, "y")
		name = name.replace("xes$".to_re, "x")
		name = name.replace("s$".to_re, "")
		if name.length > 1 then
			mclasses = model.mentities_by_name(name)
			res.add_all mclasses
		end

		# Align mprops
		name = word.to_lower
		var mprops = model.mentities_by_name(name)
		for mprop in mprops do
			if mprop isa MProperty then res.add mprop
		end

		return res
	end

	fun filter_refs(word: String, refs: Collection[MEntity]): Array[MEntity] do
		var res = new Array[MEntity]

		var has_mpackage = false
		var has_mmodule = false
		var has_mclass = false
		for mentity in refs do
			if mentity isa MPackage then has_mpackage = true
			if mentity isa MModule then has_mmodule = true
			if mentity isa MClass then has_mclass = true
		end
		for mentity in refs do
			if has_mpackage and mentity isa MGroup then continue
			if has_mpackage and mentity isa MModule then continue
			if (has_mpackage or has_mmodule or has_mclass) and mentity isa MProperty then continue
			if (mentity isa MProperty or mentity isa MClass) and not context.has_mentity(mentity) then continue
			res.add mentity
		end
		return res
	end
end

redef class MdText
	var md_refs = new Array[MdRefText]
end

class MdRefText
	super MdRef

	var mentities = new Array[MEntity]
	# fun align_ref(v: MdSpanAlign) do end
	# fun sort_refs(v: MdSpanAlign) do end
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
