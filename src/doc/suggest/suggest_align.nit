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
import mentities_index
import mdoc_index
import name_index
intrude import model_index

class MDocAligner

	var mentity_index: MEntityIndex

	var md_parser: MdParser

	var context: MEntity

	fun align_mdoc(mdoc: MDoc) do
		var document = mdoc.mdoc_document

		# Align pieces of code
		code_visitor.enter_visit(document)

		# Align NLP
		nlp_visitor.enter_visit(document)

	end

	var code_visitor = new MDocCodeReferencesVisitor(mentity_index, context) is lazy
	var nlp_visitor = new MDocNLPReferencesVisitor(mentity_index, context) is lazy
end

# class MDocStructureVisitor
	# super MdVisitor
#
	# redef fun visit(node) do node.enhance_structure(self)
# end

class MDocCodeReferencesVisitor
	super MdVisitor

	var mentity_index: MEntityIndex

	var context: MEntity

	# TODO
	var name_pt = "[a-zA-Z_][a-zA-Z0-9_=]*"
	# TODO
	var name_re: Regex = name_pt.to_re

	var keywords = [
		"end", "not", "null", "var", "do", "then", "catch", "else", "loop", "is",
		"import", "module", "package", "class", "enum", "universal", "interface", "extern",
		"abstract", "intern", "fun", "new", "private", "public", "protected", "intrude", "readable",
		"writable", "redef", "if", "while", "for", "with", "assert", "and", "or", "in", "is",
		"isa", "once", "break", "contrinue", "return", "abort", "nullable", "special",
		"self", "true", "false"]

	redef fun visit(node) do
		if node isa MdCodeBlock then
			var vector = new Vector
			if node.nit_ast != null then
				var code_vector = mentity_index.vectorize_node(node.nit_ast.as(not null), true)
				# print code_vector
				if not code_vector.is_empty then
					for key, count in code_vector do
						vector[key] += count
					end
				end
				print vector
			end
			var info = node.info
			if vector.is_empty and (info == null or info == "nitish" or info == "nit") then
				var literal = node.literal
				if literal != null then
					for name in literal.search_all(name_re) do
						if not keywords.has(name.to_s.trim) then vector.inc "tid: {name}"
					end
				end
			end
			if vector.not_empty then
				vector.inc "in: {context.full_name}"
				vector.inc "!kind: MPropDef"
				vector.inc "!kind: MClassDef"
				var index_matches = mentity_index.match_vector(vector)
				var matches = new MDocNLPMatches.from_matches(index_matches).limit(5)
				node.code_references = matches
			end
		end
		node.visit_all(self)
	end
end

class MDocNLPReferencesVisitor
	super MdVisitor

	var mentity_index: MEntityIndex

	var context: MEntity

	# Number of nodes visited
	var nodes: Int is noinit

	redef fun visit(node) do
		if node isa MdHeading or node isa MdParagraph then
			var v = new RawTextVisitor
			var text = v.render(node)

			var vector = new Vector
			vector.inc "in: {context.full_name}"
			vector.inc "!kind: MPropDef"
			vector.inc "!kind: MClassDef"
			vector.inc "!kind: MAttribute"
			vector.inc "!setter: true"

			for ref in node.span_references do
				vector.inc "full_name: {ref.full_name}"
			end

			for word in text.split("[ \n]+".to_re) do
				vector.inc "name: {word}"
				vector.inc "comment: {word}"
				vector.inc "sign: {word}"
				vector.inc "tid: {word}"
			end

			var nlp_vector = mentity_index.vectorize_string(text)
			for lemma, freq in nlp_vector do
				vector["name: {lemma or else "null"}"] += freq
				vector["name: {(lemma or else "null").as(String).capitalize}"] += freq
				vector["comment: {lemma or else "null"}"] += freq
				vector["comment: {(lemma or else "null").as(String).capitalize}"] += freq
				vector["nlp: {lemma or else "null"}"] += freq
				vector["sign: {lemma or else "null"}"] += freq
				vector["sign: {(lemma or else "null").as(String).capitalize}"] += freq
				vector["tid: {lemma or else "null"}"] += freq
				vector["tid: {(lemma or else "null").as(String).capitalize}"] += freq
			end
			var matches = new MDocNLPMatches.from_matches(mentity_index.match_vector(vector)).limit(5)
			node.nlp_references = matches#.filter_attributes.filter_namespace(context.full_name)#.above_threshold #.limit(3) do
			# matches = new MDocNLPMatches.from_matches(name_index.match_string(text))
			# for match in matches.filter_namespace(context.full_name).above_threshold.limit(1) do
				# var mentity = match.document.mentity
				# node.name_references.add mentity
			# end
		end
		node.visit_all(self)
	end
end

redef class String
	fun capitalize: String do
		return "{chars.first.to_upper}{substring(1, length)}"
	end
end

class MEntityMatches
	super HashMap[MEntity, Float]

	redef fun [](mentity) do
		if not has_key(mentity) then return 0.0
		return super
	end
end

class MDocNLPMatches
	super Array[vsm::IndexMatch[MEntityDocument]]

	init from_matches(matches: Array[vsm::IndexMatch[MEntityDocument]]) do
		self.add_all matches
	end

	fun boost_mentity(mentity: MEntity, boost: Float) do
		var matched = false
		for match in self do
			if match.document.mentity != mentity then continue
			match.similarity += 1.0
			matched = true
		end
		if not matched then
			self.add new vsm::IndexMatch[MEntityDocument](new MEntityDocument(mentity), boost)
		end
	end

	fun sort: MDocNLPMatches do
		var sorter = new IndexMatchSorter
		sorter.sort(self)
		return self
	end

	fun boost_mentities(mentities: Array[MEntity], boost: Float) do
		for mentity in mentities do boost_mentity(mentity, boost)
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

# class MDocAlignerVisitor
	# super MdVisitor
#
	# redef fun visit(node) do node.align(self)
# end

# MdNode redefs

redef class MdNode

	# Preliminary targets
	# var preliminary_targets: MDocNLPMatches is lazy do
	#	var matches = new MDocNLPMatches
	#	for ref in nlp_references do
	#		matches.add new vsm::IndexMatch[MDocDocument](ref.document, ref.similarity)
	#	end
	#	matches.boost_mentities(span_references, 1.0)
	#	return matches
	# end

	# fun enhance_structure(v: MDocStructureVisitor) do visit_all(v)

	# fun align(v: MDocAlignerVisitor) do visit_all(v)

	# fun spans: Int do
		# var res = 0
		# for child in children do
			# res += child.spans
		# end
		# return res
	# end

	var span_references = new Array[MEntity]

	# fun text_references: Array[MEntity] do
	#	var res = new Array[MEntity]
	#	for child in children do
	#		res.add_all child.text_references
	#	end
	#	return res
	# end
    #
	# fun nlp_nodes: Int do
	#	var res = 0
	#	for child in children do
	#		res += child.nlp_nodes
	#	end
	#	return res
	# end

	# var target_mentities = new Counter[MEntity]
	# fun target_mentities: MDocNLPMatches is abstract
	# var name_references = new Array[MEntity]
	var nlp_references = new MDocNLPMatches

	# fun main_targets: Counter[MEntity] do
		# var roots = new Counter[MEntity]
#
		# var targets = target_mentities
		# if targets.is_empty then return roots

		# var filters = [
			# new MEntityKindFilter[MPackage],
			# new MEntityKindFilter[MGroup],
			# new MEntityKindFilter[MModule],
			# new MEntityKindFilter[MClass],
			# new MEntityKindFilter[MClassDef],
			# new MEntityKindFilter[MProperty],
			# new MEntityKindFilter[MPropDef]: MEntityKindFilter[MEntity]]

		# for filter in filters do
			# var mentities = filter.filter(targets.keys)
			# for mentity in mentities do
				# for root in roots.keys do
					# if root.has_mentity(mentity) then
						# roots[root] += targets[mentity]
						# continue label mentities
					# end
				# end
				# roots[mentity] += targets[mentity]
			# end label mentities
		# end

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
		# return roots
	# end
end

redef class MdDocument
	# redef var target_mentities is lazy do
	#	var matches = new MDocNLPMatches
	#	for match in preliminary_targets.sort do
	#		if match.document.mentity isa MPackage then
	#			matches.add new vsm::IndexMatch[MDocDocument](match.document, match.similarity)
	#		end
	#	end
	#	if matches.is_empty then
	#		for match in preliminary_targets do
	#			if match.document.mentity isa MGroup then
	#				matches.add new vsm::IndexMatch[MDocDocument](match.document, match.similarity)
	#			end
	#		end
	#	end
	#	if matches.is_empty then
	#		for match in preliminary_targets do
	#		   if match.document.mentity isa MModule then
	#			   matches.add new vsm::IndexMatch[MDocDocument](match.document, match.similarity)
	#			end
	#		end
	#	end
	#	return matches
	# end
end

redef class MdBlock
	# redef var preliminary_targets is lazy do
		# var matches = super
		# for child in children do
			# for submatch in child.preliminary_targets do
				# matches.boost_mentity(submatch.document.mentity, submatch.similarity)
			# end
		# end
		# return matches
	# end

	# var parent_section: nullable MdHeading = null
	# var prev_blocks = new Array[MdBlock]
	# var next_block = new Array[MdBlock]
	# var children_blocks = new Array[MdBlock]

	# redef fun enhance_structure(v) do
		# for child in children do

		# end
	# end

	# redef fun name_references do
	#	var res = new Array[MEntity]
	#	for child in children do
	#		for ref in child.nlp_references do res.add ref.document.mentity
	#	end
	#	return res
	# end

	# redef var target_mentities is lazy do
		# var res = new Counter[MEntity]
		# for child in children do
			# res.add_all child.target_mentities
		# end
		# return res
	# end

	# redef fun nlp_references do
		# var res = new MDocNLPMatches
		# for child in children do
			# res.add_all child.nlp_references
		# end
		# return res
	# end
end

redef class MdCodeBlock
	var code_references = new MDocNLPMatches
end

redef class MdHeading

	# redef var target_mentities is lazy do
	#	var parent = self.parent
	#	if level == 1 and parent isa MdDocument then
	#		# TODO packages with only one module
	#		return parent.target_mentities
	#	end
	#	var matches = new MDocNLPMatches
	#	for match in preliminary_targets do
	#		matches.boost_mentity(match.document.mentity, match.similarity)
	#	end
	#	var next = self.next
	#	while next != null do
	#		if next isa MdHeading and next.level <= level then break
	#		for submatch in next.preliminary_targets do
	#			matches.boost_mentity(submatch.document.mentity, submatch.similarity)
	#		end
	#		next = next.next
	#	end
	#	if level == 2 then
	#		var res = new MDocNLPMatches
	#		# TODO select class or module
	#		for m in matches do
	#			if m.document.mentity isa MModule or m.document.mentity isa MClass then
	#				res.add m
	#			end
	#		end
	#		return res
	#	end
	#	if level == 3 then
	#		var res = new MDocNLPMatches
	#		# TODO select class or module
	#		for m in matches do
	#			if m.document.mentity isa MClass or m.document.mentity isa MProperty then
	#				res.add m
	#			end
	#		end
	#		return res
	#	end
	#	if level >= 4 then
	#		var res = new MDocNLPMatches
	#		# TODO select class or module
	#		for m in matches do
	#			if m.document.mentity isa MProperty then
	#				res.add m
	#			end
	#		end
	#		return res
	#	end
    #
	#	return matches
	# end

	# TODO Already used

	# redef var preliminary_targets is lazy do
		# var matches = super
		# var next = self.next
		# while next != null do
			# if next isa MdHeading and next.level <= level then break
			# for submatch in next.preliminary_targets do
				# matches.boost_mentity(submatch.document.mentity, submatch.similarity)
			# end
			# next = next.next
		# end
		# return matches
	# end

    #
	# var prev_sections = new Array[MdBlock]
	# var next_sections = new Array[MdBlock]
	# var children_sections = new Array[MdBlock]
    #
	# redef fun nlp_nodes do return 1
	# redef var name_references = new Array[MEntity]
	# redef var nlp_references = new MDocNLPMatches

	# redef var target_mentities is lazy do
		# var res = new Counter[MEntity]
		# for ref in span_references do res[ref] += 5
		# for ref in text_references do res[ref] += 3
		# for ref in nlp_references do res[ref.document.mentity] += 1
		# var next = self.next
		# while next != null do
			# if next isa MdHeading and next.level <= level then break
			# res.add_all next.target_mentities
			# next = next.next
		# end
		# return res
	# end
end

redef class MdParagraph
	# redef fun nlp_nodes do return 1
	# redef var name_references = new Array[MEntity]
	# redef var nlp_references = new MDocNLPMatches

	# redef var target_mentities is lazy do
		# var res = new Counter[MEntity]
		# for ref in span_references do res[ref] += 5
		# for ref in text_references do res[ref] += 3
		# for ref in nlp_references do res[ref.document.mentity] += 1
		# return res
	# end

	# redef var target_mentities is lazy do
	#	var matches = new MDocNLPMatches
	#	for match in preliminary_targets do
	#		matches.boost_mentity(match.document.mentity, match.similarity)
	#	end
	#	var prev = self.prev
	#	while prev != null do
	#		if prev isa MdHeading then break
	#		for match in prev.preliminary_targets do
	#			matches.boost_mentity(match.document.mentity, match.similarity)
	#		end
	#		break
	#		# prev = prev.prev
	#	end
	#	return matches
	# end
    #
    #
	# redef fun align(v) do
	#	super
	# end
end

redef class MdCode
	# redef fun spans do return 1

	redef fun span_references do
		var res = new Array[MEntity]
		var mentity = self.nit_mentity
		if mentity != null then res.add mentity
		return res
	end
end

redef class MdText
	# redef fun text_references do return nit_mentities
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

# Pour un paragraphe
	# Monter le poids via la section parente
	# Monter le poids via les paragraphes avant / aprés
	# Heurstique mod/class/prop

# Pour un section
	# Monter le poids via la section parentes
	# Monter le poids via les children
	# Heuristique mod/class/prop

# Pour un document
	# Monter les poids via les enfants
