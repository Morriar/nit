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

module align_block

import align_refs
import align_text
import align_code_blocks
import align_nlp

class MdBlockAlign
	super MdVisitor

	var model: Model

	var mainmodule: MModule

	var context: MEntity is noinit

	fun align_blocks(doc: MdDocument, context: MEntity) do
		self.context = context
		enter_visit(doc)
	end

	redef fun visit(node) do
		if not node isa MdBlock then
			node.visit_all(self)
			return
		end
		# var refs = node.model_refs
		# for ref in refs do
			# print "> match: {ref}"
		# end
	end
end

class MdBlockRefsVisitor
	super MdVisitor

	var refs = new Array[MdRef]

	redef fun visit(node) do
		if node isa MdText then
			refs.add_all node.md_refs
		else if node isa MdCode then
			if node.md_ref != null then refs.add node.md_ref.as(not null)
		else if node isa MdCodeBlock then
			refs.add_all node.example_refs
			refs.add_all node.code_refs
		else if node isa MdBlock then
			refs.add_all node.nlp_refs
		end
		node.visit_all(self)
	end
end

redef class MdBlock
	var model_refs: Array[MdRefMEntity] is lazy do
		var v = new MdBlockRefsVisitor
		v.enter_visit(self)

		var scores = new ScoreMap
		for ref in v.refs do
			if ref isa MdRefName then
				for r in ref.model_refs do
					if not scores.has_key(r.mentity) then scores[r.mentity] = 0.0
					scores[r.mentity] += r.confidence
				end
			end
			if ref isa MdRefText then
				for r in ref.model_refs do
					if not scores.has_key(r.mentity) then scores[r.mentity] = 0.0
					scores[r.mentity] += r.confidence
				end
			end
			if ref isa MdRefCode then
				if not scores.has_key(ref.mentity) then scores[ref.mentity] = 0.0
				scores[ref.mentity] += ref.confidence
			end
			if ref isa MdRefNLP then
				if not scores.has_key(ref.mentity) then scores[ref.mentity] = 0.0
				scores[ref.mentity] += ref.confidence
			end
		end

		# TODO scaffold refs
		# TODO structure refs

		var res = new Array[MdRefMEntity]
		for key in scores.sorted_keys do
			res.add new MdRefMEntity(self, "", scores[key], key)
		end
		return res
	end
end

private class ScoreMap
	super Comparator
	super HashMap[MEntity, Float]

	redef type COMPARED: MEntity

	fun sorted_keys: Array[MEntity] do
		var res = keys.to_a
		sort(res)
		return res
	end

	redef fun compare(a, b) do return self[b] <=> self[a]
end
