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
import align_refs
import align_text
import align_block
import align_code_blocks

class MDocAligner

	var model: Model
	var mainmodule: MModule

	var mentity_index: MEntityIndex

	var md_parser: MdParser

	var context: MEntity

	fun align_mdoc(mdoc: MDoc) do
		var document = mdoc.mdoc_document

		# span_align.align_spans(document, context)
		# text_align.align_texts(document, context)
		# block_align.align_blocks(document, context)
		code_block_align.align_code_blocks(document, context)

		span_visitor.enter_visit(document)

		# Align pieces of code
		# code_visitor.enter_visit(document)

		# Align NLP
		# nlp_visitor.enter_visit(document)

		# Create document structure
		# var sections_builder = new MDocSectionBuilder
		# var root = sections_builder.build_root(document)

		# var section_visitor = new MDocSectionVisitor
		# section_visitor.enter_section(root)
	end

	var span_align = new MdCodeAlign(model, mainmodule) is lazy
	var text_align = new MdTextAlign(model, mainmodule) is lazy
	var block_align = new MdBlockAlign(model, mainmodule) is lazy
	var code_block_align = new MdCodeBlockAlign(mentity_index) is lazy
	var span_visitor = new MDocSpanReferencesVisitor is lazy
	var code_visitor = new MDocCodeReferencesVisitor(mentity_index, context) is lazy
	var nlp_visitor = new MDocNLPReferencesVisitor(mentity_index, context) is lazy
end

class MDocSpanReferencesVisitor
	super MdVisitor

	var md_renderer = new MarkdownRenderer

	redef fun enter_visit(node) do
		if node isa MdDocument then
			for block in node.children do
				if not block isa MdBlock then continue
				if block isa MdBlockQuote then continue
				refs.clear
				code_refs.clear
				example_refs.clear
				block_refs.clear
				text_refs.clear
				span_refs.clear
				name_refs.clear
				visit(block)
				print md_renderer.render(block)
				# if refs.not_empty then
				#	var need_space = false
				#	for ref in refs do
				#		if ref isa MdRefPath and ref.path != null then
				#			print "> span: {ref.path.as(not null)}"
				#			need_space = true
				#		end
				#		if ref isa MdRefCommand and ref.command != null then
				#			print "> span: {ref.command.as(not null)} {ref.args.join(" ")}".trim
				#			need_space = true
				#		end
				#		if ref isa MdRefName then
				#			for n in ref.mentities do
				#				print "> span: {n.full_name}".trim
				#				need_space = true
				#				# break
				#			end
				#		end
				#	end
				#	if need_space then print ""
				# end
				# if text_refs.not_empty then
				#	var need_space = false
				#	for ref in text_refs do
				#		for mentity in ref.mentities do
				#			print "> name: {mentity.full_name}"
				#			need_space = true
				#		end
				#	end
				#	if need_space then print ""
				# end

				var need_space = false
				for ref in example_refs do
					print "> example: {ref.mentity.full_name}"
					need_space = true
				end
				for ref in code_refs do
					print "> code: {ref.mentity.full_name}"
					need_space = true
				end
				if need_space then print ""

				if block_refs.not_empty then
					need_space = false
					for ref in block_refs do
						if ref isa MdRefMEntity then
							print "> match: {ref.mentity.full_name}"
							# ({ref.confidence})"
							need_space = true
						end
						# if ref isa MdRefPath and ref.path != null then
						#	print "> match: {ref.path.as(not null)}"
						#	need_space = true
						# end
						# if ref isa MdRefCommand and ref.command != null then
						#	print "> match: {ref.command.as(not null)} {ref.args.join(" ")}".trim
						#	need_space = true
						# end
						# if ref isa MdRefName then
						#	for n in ref.model_refs do
						#		print "> match: {n.mentity.full_name}".trim
						#		need_space = true
						#		# break
						#	end
						# end
						# if ref isa MdRefText then
						#	for n in ref.model_refs do
						#		print "> match: {n.mentity.full_name}"
						#		need_space = true
						#	end
						# end
					end
					if need_space then print ""
				end
			end
		end
	end

	var span_refs = new Array[MEntity]
	var name_refs = new Array[MEntity]
	var refs = new Array[MdRef]
	var text_refs = new Array[MdRefText]
	var block_refs = new Array[MdRef]
	var code_refs = new Array[MdRefCode]
	var example_refs = new Array[MdRefCode]

	redef fun visit(node) do
		if node isa MdBlock then
			block_refs.add_all node.model_refs
			if node isa MdCodeBlock then
				code_refs.add_all node.code_refs
				example_refs.add_all node.example_refs
			end
			return
		# else if node isa MdCode then
		#	var ref = node.nit_mentity
		#	if ref != null then span_refs.add ref
			# if node.md_ref != null then refs.add node.md_ref.as(not null)
		# else if node isa MdText then
			# text_refs.add_all node.md_refs
		end
		node.visit_all(self)
	end
end

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
						if not key isa String then continue
						if key.has_prefix("import: ") then
							vector["full_name: {key.substring(8, key.length)}"] += count
						else if key.has_prefix("call: ") then
							vector["full_name: {key.substring(6, key.length)}"] += count
						else if key.has_prefix("new: ") then
							vector["full_name: {key.substring(5, key.length)}"] += count
						end

						# vector["{key or else "null"}"] += count
					end

					var example_query = new Vector
					example_query.add_all code_vector
					example_query.inc "+in: {context.full_name}"
					example_query.inc "+is_example: true"
					example_query.inc "+kind: MModule"
					var example_all_matches = mentity_index.match_query(example_query)
					var example_matches = new MDocMatches
					for match in example_all_matches do
						match.similarity = code_vector.cosine_similarity(match.document.code_vector)
						if match.similarity > 0.0 then example_matches.add match
					end
					node.example_references = example_matches.sort.above_threshold
					# .limit(3)
				end
				# print vector
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
				# vector.inc "+in: {context.full_name}"
				# vector.inc "-kind: MPropDef"
				# vector.inc "-kind: MClassDef"
				node.code_references = mentity_index.match_query(vector).filter_context(context)
				#.limit(5)
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
			vector.inc "-kind: MPropDef"
			vector.inc "-kind: MClassDef"
			vector.inc "-kind: MAttribute"
			vector.inc "-setter: true"

			for ref in node.span_references do
				vector.inc "full_name: {ref.full_name}"
			end

			for word in text.split("[ \n]+".to_re) do
				vector.inc "name: {word}"
				# vector.inc "comment: {word}"
				vector.inc "sign: {word}"
				vector.inc "tid: {word}"
			end

			var nlp_vector = mentity_index.vectorize_string(text)
			for lemma, freq in nlp_vector do
				vector["name: {lemma or else "null"}"] += freq
				# vector["name: {(lemma or else "null").as(String).capitalize}"] += freq
				# vector["comment: {lemma or else "null"}"] += freq
				# vector["comment: {(lemma or else "null").as(String).capitalize}"] += freq
				vector["nlp: {lemma or else "null"}"] += freq
				vector["sign: {lemma or else "null"}"] += freq
				# vector["sign: {(lemma or else "null").as(String).capitalize}"] += freq
				vector["tid: {lemma or else "null"}"] += freq
				# vector["tid: {(lemma or else "null").as(String).capitalize}"] += freq
			end
			node.nlp_references = mentity_index.match_query(vector).above_threshold#.limit(5)
		end
		node.visit_all(self)
	end
end

# redef class String
	# fun capitalize: String do
		# return "{chars.first.to_upper}{substring(1, length)}"
	# end
# end

class MDocSection

	var heading: nullable MdHeading
	var parent_section: nullable MDocSection

	var children_sections = new Array[MDocSection]
	var children_blocks = new Array[MdBlock]

	var level: Int is lazy do
		var heading = self.heading
		if heading == null then return 0
		return heading.level
	end

	fun visit_all(v: MDocSectionVisitor) do
		var index = 0
		for block in children_blocks do
			v.visit_block(self, block, index)
			index += 1
		end
		index = 0
		for section in children_sections do
			v.visit_section(section, index)
			index += 1
		end
	end

	fun prev_sections(section_index: Int): Array[MDocSection] do
		if section_index < 0 or section_index >= children_sections.length then
			return new Array[MDocSection]
		end
		return children_sections.subarray(0, section_index)
	end

	fun next_sections(section_index: Int): Array[MDocSection] do
		if section_index + 1 < 0 or section_index + 1 >= children_sections.length then
			return new Array[MDocSection]
		end
		return children_sections.subarray(section_index + 1, children_sections.length - (section_index + 1))
	end

	fun prev_blocks(block_index: Int): Array[MdBlock] do
		if block_index < 0 or block_index >= children_blocks.length then
			return new Array[MdBlock]
		end
		return children_blocks.subarray(0, block_index)
	end

	fun next_blocks(block_index: Int): Array[MdBlock] do
		if block_index + 1 < 0 or block_index + 1 >= children_blocks.length then
			return new Array[MdBlock]
		end
		return children_blocks.subarray(block_index + 1, children_blocks.length - (block_index + 1))
	end

	redef fun to_s do
		var heading = self.heading
		if heading == null then return "<ROOT>"
		var v = new RawTextVisitor
		return "{"#" * heading.level} {v.render(heading).trim}"
	end
end

class MDocSectionBuilder
	super MdVisitor

	var root: MDocSection is noinit

	var current_sections = new Array[MDocSection]

	fun build_root(document: MdDocument): MDocSection do
		self.root = new MDocSection(null, null)
		self.current_sections.clear
		self.current_sections.add root
		visit(document)
		return self.root
	end

	redef fun visit(node) do
		var current_section = current_sections.last
		if node isa MdHeading then
			while current_section.level >= node.level do
				current_sections.pop
				current_section = current_sections.last
			end
			var section = new MDocSection(node, current_section)
			section.children_blocks.add node
			current_section.children_sections.add section
			current_sections.add section
		else if node isa MdBlock then
			current_section.children_blocks.add node
		end
		node.visit_all(self)
	end
end


class MDocSectionVisitor
	fun enter_section(section: MDocSection) do visit_section(section, 0)

	fun visit_section(section: MDocSection, section_index: Int) do
		# print section
		# var parent = section.parent_section
		# print " * parent: {parent or else "NO PARENT"}"
		# print " * children: {section.children_sections}"
		# if parent != null then
			# print " * prevs: {parent.prev_sections(section_index)}"
			# print " * nexts: {parent.next_sections(section_index)}"
		# end
		section.visit_all(self)
	end

	fun visit_block(section: MDocSection, block: MdBlock, block_index: Int) do
		# print block.class_name
		# print " * prev: {section.prev_blocks(block_index)}"
		# print " * next: {section.next_blocks(block_index)}"
	end
end

redef class MdNode

	var span_references = new Array[MEntity]

	var nlp_references = new MDocMatches
end

redef class MdCodeBlock
	var code_references = new MDocMatches
	var example_references = new MDocMatches
end

redef class MdCode
	redef fun span_references do
		var res = new Array[MEntity]
		var mentity = self.nit_mentity
		if mentity != null then res.add mentity
		return res
	end
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
