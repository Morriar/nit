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

module suggest_insert

import suggest_align

class MDocSuggester

	var context: MEntity

	var index: MEntityIndex

	fun suggest(document: MdDocument) do

		var example_replacement = new SuggestCodeInsert(index)
		example_replacement.suggest(document)

		# suggest_links(document)
		# suggest_docs(document)
		# suggest_features(document)
		# suggest_uml(document)
		# suggest_examples(document)
		# suggest_see_also(document)

		var v = new Test
		v.enter_visit(document)
		# print "Total: {document.spans} spans, {document.span_references.length} span names"
		# print "Total: {document.nlp_nodes} blocks, {document.text_references.length} text matches"
		# print "Total: {document.nlp_nodes} blocks, {document.name_references.length} nlp names"
		# print "Total: {document.nlp_nodes} blocks, {document.nlp_references.length} nlp matches"
	end

	fun suggest_links(document: MdDocument) do
		# Talking a lot about something
		# Include link first time
	end

	fun suggest_docs(document: MdDocument) do
		# Matching a lot like a certain doc
		# Include doc
	end

	fun suggest_features(document: MdDocument) do
		# Talking about multiple features
		# Features are related
		# Include list
	end

	fun suggest_uml(document: MdDocument) do
		# Talking about multiple package/modules/classes
	end

	fun suggest_examples(document: MdDocument) do
		# Taling about a module
		# Talking
	end

	fun suggest_see_also(document: MdDocument) do
	end
end

class Test
	super MdVisitor

	var renderer = new MarkdownRenderer

	redef fun visit(node) do
		# if node isa MdDocument then
			# print "> Document soft targets:"
			# for ref in node.target_mentities.sort do
				# print "> * {ref.document.mentity.full_name} ({ref.similarity})"
			# end
			# print ""
			# node.visit_all(self)
			# return
		# end

		if node isa MdHeading or node isa MdParagraph then
			var md = renderer.render(node)
			print md
			# print ""
			# var nlp_refs = node.nlp_references
			# if nlp_refs.length > 0 then
				# print "> NLP references:"
				# for match in nlp_refs do
					# print "> * {match.document.mentity.full_name} ({match.similarity})"
					# print ">   {match.matched_terms.join(", ")}"
					# print ">   {match.document.terms_count}"
				# end
				# print ""
			# end
			# print ""
		else if node isa MdCodeBlock then
			print "~~~"
			print node.literal or else ""
			print "~~~"
			# print ""
			# var refs = node.code_references
			# if refs.length > 0 then
				# print "> Code references:"
				# for match in refs do
					# print "> * {match.document.mentity.full_name} ({match.similarity})"
					# print ">   {match.matched_terms.join(", ")}"
					# print ">   {match.document.terms_count}"
				# end
				# print ""
			# end
			# print ""
			print ""
			var refs = node.example_references
			if refs.length > 0 then
				print "> Example references:"
				for match in refs do
					print "> * {match.document.mentity.full_name} ({match.similarity})"
					# print ">   {match.matched_terms.join(", ")}"
					# print ">   {match.document.terms_count}"
				end
				print ""
			end
			print ""

		end

		# print ""
		# var cards = node.suggested_cards
		# if cards.length > 0 then
			# print "> Cards:"
			# for card in cards do
				# print "> * {card}"
			# end
			# print ""
		# end
		# print ""


			# print "> Heading soft targets:"
			# for ref in node.target_mentities.sort do
				# print "> * {ref.document.mentity.full_name} ({ref.similarity})"
			# end
			# print ""

			# var main_refs = node.main_targets
			# if main_refs.length > 0 then
				# print "> Main Targets:"
				# for mentity in main_refs.sort.reversed do
					# print "> * {mentity.full_name} ({main_refs[mentity]})"
				# end
				# print ""
			# end

			# var target_refs = node.target_mentities
			# if target_refs.length > 0 then
				# print "> Targets:"
				# for mentity in target_refs.sort.reversed do
					# print "> * {mentity.full_name} ({target_refs[mentity]})"
				# end
				# print ""
			# end

			# var prelim_refs = node.preliminary_targets
			# if prelim_refs.length > 0 then
			#	print "> Prelim references:"
			#	for doc in prelim_refs.sort do
			#		print "> * {doc.document.mentity.full_name} ({doc.similarity})"
			#	end
			# end

			# var span_refs = node.span_references
			# if span_refs.length > 0 then
			#	print "> Span references:"
			#	for mentity in span_refs do
			#		print "> * {mentity.full_name}"
			#	end
			# end
            #
			# var text_refs = node.text_references
			# if text_refs.length > 0 then
			#	print "> Text references:"
			#	for mentity in text_refs do
			#		print "> * {mentity.full_name}"
			#	end
			# end
            #
			# var name_refs = node.name_references
			# if name_refs.length > 0 then
			#	print "> Name references:"
			#	for mentity in name_refs do
			#		print "> * {mentity.full_name}"
			#	end
			# end
            #
			# var nlp_refs = node.nlp_references
			# if nlp_refs.length > 0 then
			#	print "> NLP references:"
			#	for match in nlp_refs do
			#		print "> * {match.document.mentity.full_name} ({match.similarity})"
			#		# print ">   {match.document.terms_count}"
			#	end
			#	print ""
			# end
			# print ""
		# end
		node.visit_all(self)
	end
end

class SuggestCodeInsert
	super MdVisitor

	var index: MEntityIndex

	fun suggest(node: MdNode) do enter_visit(node)

	redef fun visit(node) do
		if not node isa MdCodeBlock then
			node.visit_all(self)
			return
		end

		# var vector = node.code_vector
		# if vector == null then
			# node.visit_all(self)
			# return
		# end

		# var query = new Vector
		# for key, count in vector do
			# query["{key or else "null"}"] += count
		# end
		# print query
		# query["+is_example: true"] = 1.0

		# var v = new Vector
		# v.inc "+full_name: popcorn::example_hello"
		# var tmp = index.match_query(v)
		# print tmp.first.document.terms_count

		# var matches = index.match_query(query)
		# for match in matches do
			# print vector.cosine_similarity(match.document.code_vector)
		# end
		# print matches
		# for match in matches do
			# if not match.document.terms_count.keys.has_all(query.keys) then continue
			# print match
		# # end
		# print ""
		# Match examples with same code
		# Include suggestion replace code
	end
end

redef class MdNode
	var suggested_cards = new Array[MdCard]
end

class MdCard
	var string: String
end
