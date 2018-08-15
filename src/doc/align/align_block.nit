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

class MdTopDownPropagation
	super MdVisitor

	# var last_context: nullable MdContext = null

	redef fun visit(node) do
		if not node isa MdBlock then
			node.visit_all(self)
			return
		end

		var local_context = new MdContext
		var refs = node.all_md_refs
		for ref in refs do
			if ref isa MdRefSpan then
				local_context.spans_refs.add ref
				local_context.mentities.add ref.mentity
			else if ref isa MdRefText then
				local_context.texts_refs.add ref
				local_context.mentities.add ref.mentity
			else if ref isa MdRefCode then
				local_context.codes_refs.add ref
				local_context.mentities.add ref.mentity
			else
				local_context.other_refs.add ref
			end
		end
		# node.local_context = local_context
		# last_context = local_context
		node.visit_all(self)
	end
end

class MdContext
	var spans_refs = new Array[MdRefSpan]

	var texts_refs = new Array[MdRefText]

	var codes_refs = new Array[MdRefCode]

	var other_refs = new Array[MdRef]

	var mentities = new HashSet[MEntity]

	fun add(ref: MdRef) do
		if ref isa MdRefSpan then
			spans_refs.add ref
			mentities.add ref.mentity
		else if ref isa MdRefText then
			texts_refs.add ref
			mentities.add ref.mentity
		else if ref isa MdRefCode then
			codes_refs.add ref
			mentities.add ref.mentity
		else
			other_refs.add ref
		end
	end

	fun add_all(refs: Collection[MdRef]) do
		for ref in refs do add ref
	end

	fun accept_mentity(mentity: MEntity): Bool do
		for oentity in mentities do
			# if mentity == oentity then continue
			if oentity.has_mentity(mentity) then return true
		end
		return false
	end
end

redef class MdNode
	var block_context: MdContext is lazy do
		var context = new MdContext
		for ref in md_block.all_md_refs do
			if ref.node == self then continue
			context.add ref
		end
		return context
	end
end

redef class MdSection
	var local_context: MdContext is lazy do
		var context = new MdContext

		var title = self.title
		if title != null then
			context.add_all title.all_md_refs
		end
		for block in self.blocks do
			context.add_all block.all_md_refs
		end
		return context
	end
end

class MdFilterHeadings
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
		var block = node.md_block
		if not block isa MdHeading then return refs

		var section = node.md_block.md_section
		if section == null then return refs
		var parent = section.parent

		var keep = new Array[MdRefMEntity]
		if (parent == null or parent.is_root) and refs.is_empty then
			keep.add new MdRefText(node, context, "")
		end

		for ref in refs do
			var mentity = ref.mentity
			if not ref isa MdRefText then
				keep.add ref
				continue
			end

			if parent == null or parent.is_root then
				if not context.has_mentity(mentity) then continue
				if mentity isa MProperty then continue
				if mentity isa MClass then
					mentity = mentity.intro_mmodule
				end
				if mentity isa MModule then
					var mgroup = mentity.mgroup
					if mgroup == null then
						keep.add new MdRefText(ref.node, mentity, ref.string)
						continue
					end
					mentity = mgroup
				end
				if mentity isa MGroup then
					mentity = mentity.mpackage
				end
				keep.add new MdRefText(ref.node, mentity, ref.string)
				continue
			end

			if not context.has_mentity(mentity) then continue
			if block.level < 3 and mentity isa MProperty then continue
			if parent.local_context.accept_mentity(mentity) then keep.add ref
		end
		# return refs
		return keep
	end
end

class MdFilterParagraphs
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
		var block = node.md_block
		if not block isa MdParagraph then return refs

		var keep = new Array[MdRefMEntity]
		for ref in refs do
			var mentity = ref.mentity
			if not ref isa MdRefText then
				keep.add ref
				continue
			end

			var section = node.md_block.md_section
			if section == null then
				keep.add ref
				continue
			end

			var parent = section.parent
			if parent == null or parent.is_root then
				# if not context.has_mentity(mentity) then continue
				# if mentity isa MProperty then continue
				# if mentity isa MClass then
				#	mentity = mentity.intro_mmodule
				# end
				# if mentity isa MModule then
				#	var mgroup = mentity.mgroup
				#	if mgroup == null then
				#		keep.add new MdRefText(ref.node, mentity, ref.string)
				#		continue
				#	end
				#	mentity = mgroup
				# end
				# if mentity isa MGroup then
				#	mentity = mentity.mpackage
				# end
				# keep.add new MdRefText(ref.node, mentity, ref.string)
				# if mentity isa MPackage then
					# keep.add new MdRefText(ref.node, mentity, ref.string)
				# end
				keep.add ref
				continue
			end

			# if not context.has_mentity(mentity) then continue
			# if block.level < 3 and mentity isa MProperty then continue
			# if parent.local_context.accept_mentity(mentity) then keep.add ref
			if mentity isa MProperty then
				# TODO check mclass in ancestors/ neigh
				var mclasses = new Array[MClass]
				for oref in node.block_context.spans_refs do
					var oentity = oref.mentity
					if oentity isa MClass then mclasses.add oentity
				end
				for oref in parent.local_context.spans_refs do
					var oentity = oref.mentity
					if oentity isa MClass then mclasses.add oentity
				end
				for mclass in mclasses do
					if mclass.has_mentity(mentity) then
						keep.add ref
						continue
					end
				end
			else
				keep.add ref
				# if parent.local_context.accept_mentity(mentity) then keep.add ref
			end

		end
		# return refs
		return keep
	end
end


# class MdFilterLocalContext

# end

# class MdBlockAlign
#	super MdVisitor
#
#	var model: Model
#
#	var mainmodule: MModule
#
#	var context: MEntity is noinit
#
#	fun align_blocks(doc: MdDocument, context: MEntity) do
#		self.context = context
#		enter_visit(doc)
#	end
#
#	redef fun visit(node) do
#		if not node isa MdBlock then
#			node.visit_all(self)
#			return
#		end
#		# var refs = node.model_refs
#		# for ref in refs do
#			# print "> match: {ref}"
#		# end
#	end
# end
#
# class MdBlockRefsVisitor
#	super MdVisitor
#
#	var refs = new Array[MdRef]
#
#	redef fun visit(node) do
#		if node isa MdText then
#			refs.add_all node.md_refs
#		else if node isa MdCode then
#			if node.md_ref != null then refs.add node.md_ref.as(not null)
#		else if node isa MdCodeBlock then
#			refs.add_all node.example_refs
#			refs.add_all node.code_refs
#		else if node isa MdBlock then
#			refs.add_all node.nlp_refs
#		end
#		node.visit_all(self)
#	end
# end
#
# redef class MdBlock
#	var model_refs: Array[MdRefMEntity] is lazy do
#		var v = new MdBlockRefsVisitor
#		v.enter_visit(self)
#
#		var scores = new ScoreMap
#		for ref in v.refs do
#			if ref isa MdRefName then
#				for r in ref.model_refs do
#					if not scores.has_key(r.mentity) then scores[r.mentity] = 0.0
#					scores[r.mentity] += r.confidence
#				end
#			end
#			if ref isa MdRefText then
#				for r in ref.model_refs do
#					if not scores.has_key(r.mentity) then scores[r.mentity] = 0.0
#					scores[r.mentity] += r.confidence
#				end
#			end
#			if ref isa MdRefCode then
#				if not scores.has_key(ref.mentity) then scores[ref.mentity] = 0.0
#				scores[ref.mentity] += ref.confidence
#			end
#			if ref isa MdRefNLP then
#				if not scores.has_key(ref.mentity) then scores[ref.mentity] = 0.0
#				scores[ref.mentity] += ref.confidence
#			end
#		end
#
#		# TODO scaffold refs
#		# TODO structure refs
#		# TODO average readme, align with package
#
#		var res = new Array[MdRefMEntity]
#		for key in scores.sorted_keys do
#			res.add new MdRefMEntity(self, "", scores[key], key)
#		end
#		return res
#	end
# end
#
# private class ScoreMap
#	super Comparator
#	super HashMap[MEntity, Float]
#
#	redef type COMPARED: MEntity
#
#	fun sorted_keys: Array[MEntity] do
#		var res = keys.to_a
#		sort(res)
#		return res
#	end
#
#	redef fun compare(a, b) do return self[b] <=> self[a]
# end
