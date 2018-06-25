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

module suggest_align

import doc::templates::md_commands
import code_index
import mdoc_index
import name_index
intrude import model_index

class MDocAligner

	var mdoc_index: MDocIndex

	var name_index: NameIndex

	var md_parser: MdParser

	var context: MEntity

	fun align_markdown(markdown: String) do
		var document = md_parser.parse(markdown)
		align_document(document)
	end

	fun align_mdoc(mdoc: MDoc) do
		var document = mdoc.mdoc_document
		align_document(document)
	end

	fun align_document(document: MdDocument) do
		# align_references(document) FIXME we expect MDocProcessMEntityLinks did it's job
		align_nlp(document)
		# TODO extract code data
	end

	var nlp_visitor = new MDocNLPReferencesVisitor(mdoc_index, name_index, context) is lazy

	fun align_nlp(document: MdDocument) do
		nlp_visitor.enter_visit(document)
	end
end

class MDocNLPReferencesVisitor
	super MdVisitor

	var mdoc_index: MDocIndex

	var name_index: NameIndex

	var context: MEntity

	# Number of nodes visited
	var nodes: Int is noinit

	redef fun visit(node) do node.extract_nlp_references(self)

	fun extract_nlp_references(node: MdNode) do
		var v = new RawTextVisitor
		var text = v.render(node)

		var matches = new MDocNLPMatches.from_matches(mdoc_index.match_string(text))
		node.nlp_references = matches.filter_attributes.filter_namespace(context.full_name).above_threshold #.limit(3) do
		# matches = new MDocNLPMatches.from_matches(name_index.match_string(text))
		# for match in matches.filter_namespace(context.full_name).above_threshold.limit(1) do
			# var mentity = match.document.mentity
			# node.name_references.add mentity
		# end
	end
end

class MDocNLPMatches
	super Array[vsm::IndexMatch[MDocDocument]]

	init from_matches(matches: Array[vsm::IndexMatch[MDocDocument]]) do
		self.add_all matches
	end

	var avg: Float is lazy do
		var sum = 0.0
		for match in self do
			sum += match.similarity
		end
		return sum / self.length.to_f
	end

	var std_dev: Float is lazy do
		var sum = 0.0
		for match in self do
			sum += (match.similarity - avg).pow(2.0)
		end
		return (sum / self.length.to_f).sqrt
	end

	var threshold: Float is lazy do return avg + std_dev

	fun filter_attributes: MDocNLPMatches do
		var res = new MDocNLPMatches
		for match in self do
			if not match.document.mentity.name.has_suffix("=") then res.add match
		end
		return res
	end

	fun filter_namespace(namespace: String): MDocNLPMatches do
		var res = new MDocNLPMatches
		for match in self do
			if match.document.mentity.full_name.has_prefix(namespace) then res.add match
		end
		return res
	end

	fun above_threshold: MDocNLPMatches do
		var res = new MDocNLPMatches
		for match in self do
			if match.similarity >= threshold then res.add match
		end
		return res
	end

	fun limit(count: Int): MDocNLPMatches do
		var res = new MDocNLPMatches
		for match in self do
			if count <= 0 then break
			res.add match
			count -= 1
		end
		return res
	end
end

# MdNode redefs

redef class MdNode

	fun spans: Int do
		var res = 0
		for child in children do
			res += child.spans
		end
		return res
	end

	fun span_references: Array[MEntity] do
		var res = new Array[MEntity]
		for child in children do
			res.add_all child.span_references
		end
		return res
	end

	fun text_references: Array[MEntity] do
		var res = new Array[MEntity]
		for child in children do
			res.add_all child.text_references
		end
		return res
	end

	fun nlp_nodes: Int do
		var res = 0
		for child in children do
			res += child.nlp_nodes
		end
		return res
	end

	var target_mentities = new Counter[MEntity]
	var name_references = new Array[MEntity]
	var nlp_references = new MDocNLPMatches

	private fun extract_nlp_references(v: MDocNLPReferencesVisitor) do visit_all(v)

	fun main_targets: Counter[MEntity] do
		var roots = new Counter[MEntity]

		var targets = target_mentities
		if targets.is_empty then return roots

		var filters = [
			new MEntityKindFilter[MPackage],
			new MEntityKindFilter[MGroup],
			new MEntityKindFilter[MModule],
			new MEntityKindFilter[MClass],
			new MEntityKindFilter[MClassDef],
			new MEntityKindFilter[MProperty],
			new MEntityKindFilter[MPropDef]: MEntityKindFilter[MEntity]]

		for filter in filters do
			var mentities = filter.filter(targets.keys)
			for mentity in mentities do
				for root in roots.keys do
					if root.has_mentity(mentity) then
						roots[root] += targets[mentity]
						continue label mentities
					end
				end
				roots[mentity] += targets[mentity]
			end label mentities
		end

		# var kinds_sorter = new MEntityKindComparator
		# var mentities = targets.keys.to_a
		# kinds_sorter.sort(mentities)
#
		# for mentity in mentities do
			# if mentity isa MPackage then
				# roots.inc mentity
			# else if mentity isa MGroup then
			# end
		# end
		return roots
	end
end

redef class MdBlock
	redef fun name_references do
		var res = new Array[MEntity]
		for child in children do
			for ref in child.nlp_references do res.add ref.document.mentity
		end
		return res
	end

	redef var target_mentities is lazy do
		var res = new Counter[MEntity]
		for child in children do
			res.add_all child.target_mentities
		end
		return res
	end

	redef fun nlp_references do
		var res = new MDocNLPMatches
		for child in children do
			res.add_all child.nlp_references
		end
		return res
	end
end

redef class MdHeading
	redef fun nlp_nodes do return 1
	redef var name_references = new Array[MEntity]
	redef var nlp_references = new MDocNLPMatches
	redef fun extract_nlp_references(v) do v.extract_nlp_references(self)

	redef var target_mentities is lazy do
		var res = new Counter[MEntity]
		for ref in span_references do res[ref] += 5
		for ref in text_references do res[ref] += 3
		for ref in nlp_references do res[ref.document.mentity] += 1
		var next = self.next
		while next != null do
			if next isa MdHeading and next.level <= level then break
			res.add_all next.target_mentities
			next = next.next
		end
		return res
	end
end

redef class MdParagraph
	redef fun nlp_nodes do return 1
	redef var name_references = new Array[MEntity]
	redef var nlp_references = new MDocNLPMatches
	redef fun extract_nlp_references(v) do v.extract_nlp_references(self)

	redef var target_mentities is lazy do
		var res = new Counter[MEntity]
		for ref in span_references do res[ref] += 5
		for ref in text_references do res[ref] += 3
		for ref in nlp_references do res[ref.document.mentity] += 1
		return res
	end
end

redef class MdCode
	redef fun spans do return 1

	redef fun span_references do
		var res = new Array[MEntity]
		var mentity = self.nit_mentity
		if mentity != null then res.add mentity
		return res
	end
end

redef class MdText
	redef fun text_references do return nit_mentities
end

# Compare two matches by their MEntity kind
#
# Usefull to order the mentities by kind in this order:
# packages, groups, modules and classes, properties.
class MEntityKindComparator
	super Comparator

	redef type COMPARED: MEntity

	# See `MEntity::compare_mentity`
	redef fun compare(o1, o2) do
		return o1.mentity_kind_rank <=> o2.mentity_kind_rank
	end
end

class MEntityKindFilter[E: MEntity]

	fun filter(mentities: Collection[MEntity]): Array[E] do
		var res = new Array[E]
		for mentity in mentities do if mentity isa E then res.add mentity
		return res
	end
end
