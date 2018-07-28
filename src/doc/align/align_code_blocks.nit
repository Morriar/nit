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

module align_code_blocks

import align_base
import mentities_index

class MdCodeBlockAlign
	super MdVisitor

	var mentity_index: MEntityIndex

	var context: MEntity is noinit

	fun align_code_blocks(doc: MdDocument, context: MEntity) do
		self.context = context
		enter_visit(doc)
	end

	redef fun visit(node) do
		if node isa MdCodeBlock then
			visit_code(node)
			return
		end
		node.visit_all(self)
	end

	fun visit_code(node: MdCodeBlock) do
		var nit_ast = node.nit_ast
		if nit_ast == null then
			visit_raw_code(node)
			return
		end

		var code_vector = mentity_index.vectorize_node(nit_ast, true)
		if code_vector.is_empty then return

		# Find code usages
		var vector = new Vector
		for key, count in code_vector do
			if not key isa String then continue
			if key.has_prefix("import: ") then
				vector["full_name: {key.substring(8, key.length)}"] += count
			else if key.has_prefix("super: ") then
				vector["full_name: {key.substring(7, key.length)}"] += count
			else if key.has_prefix("redef: ") then
				vector["full_name: {key.substring(7, key.length)}"] += count
			else if key.has_prefix("call: ") then
				vector["full_name: {key.substring(6, key.length).replace("\\(.*\\)".to_re, "")}"] += count
			else if key.has_prefix("new: ") then
				vector["full_name: {key.substring(5, key.length).replace("\\(.*\\)".to_re, "")}"] += count
			end
			# vector["{key or else "null"}"] += count
		end
		if vector.not_empty then
			# vector.inc "+in: {context.full_name}"
			vector.inc "-kind: MPropDef"
			vector.inc "-kind: MClassDef"
			vector.inc "-in: core::Sys"
			vector.inc "-full_name: core::Object"
			vector.inc "-full_name: core::Object::!="
			vector.inc "-full_name: core::Object::=="
			vector.inc "-full_name: core::Int"
			vector.inc "-full_name: core::Float"
			vector.inc "-full_name: core::Array"
			vector.inc "-full_name: core::String"
			vector.inc "-full_name: core::Collection::is_empty"
			vector.inc "-full_name: core::Collection::length"
			vector.inc "-full_name: serialization::Serializer::serialize_attribute"
			vector.inc "-full_name: serialization::Serializable::from_deserializer"
			vector.inc "-full_name: serialization::Deserializer::deserialize_class_intern"
			node.code_refs = matches_to_refs(mentity_index.match_query(vector), node)
			#.filter_context(context)
			#.limit(5)
		end

		# Examples
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
		node.example_refs = matches_to_refs(example_matches.sort.limit(1), node)
	end

	fun visit_raw_code(node: MdCodeBlock) do
		var info = node.info
		if info != null and info != "nitish" and info != "nit" then return

		var vector = new Vector
		var literal = node.literal
		if literal != null then
			for name in literal.search_all(name_re) do
				if not keywords.has(name.to_s.trim) then vector.inc "tid: {name}"
			end
		end
		if vector.not_empty then
			# vector.inc "+in: {context.full_name}"
			# vector.inc "-kind: MPropDef"
			# vector.inc "-kind: MClassDef"
			node.code_refs = matches_to_refs(mentity_index.match_query(vector), node)
			#.filter_context(context)
			#.limit(5)
		end
	end

	var name_re: Regex = "[a-zA-Z_][a-zA-Z0-9_=]*".to_re

	var keywords = [
		"end", "not", "null", "var", "do", "then", "catch", "else", "loop", "is",
		"import", "module", "package", "class", "enum", "universal", "interface", "extern",
		"abstract", "intern", "fun", "new", "private", "public", "protected", "intrude", "readable",
		"writable", "redef", "if", "while", "for", "with", "assert", "and", "or", "in", "is",
		"isa", "once", "break", "contrinue", "return", "abort", "nullable", "special",
		"self", "true", "false"]

	private fun matches_to_refs(matches: MDocMatches, node: MdNode): Array[MdRefCode] do
		var res = new Array[MdRefCode]
		for match in matches do
			res.add new MdRefCode(node, node.raw_text, match.similarity, match.document.mentity)
		end
		return res
	end
end

redef class MdCodeBlock
	var code_refs = new Array[MdRefCode]
	var example_refs = new Array[MdRefCode]
end

class MdRefCode
	super MdRefMEntity
end
