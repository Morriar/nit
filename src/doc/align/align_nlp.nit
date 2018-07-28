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

module align_nlp

import align_base
import mentities_index

class MdNLPAlign
	super MdVisitor

	var mentity_index: MEntityIndex

	var context: MEntity is noinit

	fun align_nlp(doc: MdDocument, context: MEntity) do
		self.context = context
		enter_visit(doc)
	end

	redef fun visit(node) do
		if node isa MdHeading then
			visit_nlp(node)
		else if node isa MdParagraph then
			visit_nlp(node)
			return
		else
			node.visit_all(self)
		end
	end

	fun visit_nlp(node: MdBlock) do
		var text = node.raw_text
		if text.is_empty then return

		var vector = new Vector
		vector.inc "in: {context.full_name}"
		vector.inc "-kind: MPropDef"
		vector.inc "-kind: MClassDef"
		vector.inc "-kind: MAttribute"
		vector.inc "-setter: true"

		# TODO use full_name, name?
		# for ref in node.span_references do
			# vector.inc "full_name: {ref.full_name}"
		# end

		# for word in text.split("[ \n]+".to_re) do
			# vector.inc "name: {word}"
			# vector.inc "comment: {word}"
			# vector.inc "sign: {word}"
			# vector.inc "tid: {word}"
		# end

		var nlp_vector = mentity_index.vectorize_string(text)
		print nlp_vector
		for lemma, freq in nlp_vector do
			vector[lemma] = freq
			# vector["name: {lemma or else "null"}"] += freq
			# vector["name: {(lemma or else "null").as(String).capitalize}"] += freq
			# vector["comment: {lemma or else "null"}"] += freq
			# vector["comment: {(lemma or else "null").as(String).capitalize}"] += freq
			# vector["nlp: {lemma or else "null"}"] += freq
			# vector["sign: {lemma or else "null"}"] += freq
			# vector["sign: {(lemma or else "null").as(String).capitalize}"] += freq
			# vector["tid: {lemma or else "null"}"] += freq
			# vector["tid: {(lemma or else "null").as(String).capitalize}"] += freq
		end
		# node.nlp_refs = matches_to_refs(mentity_index.match_query(vector).above_threshold, node)
		#.limit(5)
	end

	private fun matches_to_refs(matches: MDocMatches, node: MdNode): Array[MdRefNLP] do
		var res = new Array[MdRefNLP]
		for match in matches do
			res.add new MdRefNLP(node, node.raw_text, match.similarity, match.document.mentity)
		end
		return res
	end
end

redef class MdBlock
	var nlp_refs: Array[MdRefNLP] is lazy do
		var res = new Array[MdRefNLP]
		for child in children do
			if not child isa MdBlock then continue
			res.add_all child.nlp_refs
		end
		return res
	end
end

redef class MdHeading
	redef var nlp_refs = new Array[MdRefNLP]
end

redef class MdParagraph
	redef var nlp_refs = new Array[MdRefNLP]
end

class MdRefNLP
	super MdRefMEntity
end
