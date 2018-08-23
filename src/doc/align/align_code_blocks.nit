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

class MdAlignBlockCodes
	super MdAligner

	var mentity_index: MEntityIndex

	redef fun visit(node) do
		if node isa MdCodeBlock then
			visit_code(node)
			return
		end
		node.visit_all(self)
	end

	fun visit_code(node: MdCodeBlock) do
		var nit_ast = node.nit_ast
		if nit_ast == null or nit_ast isa AError then
			visit_raw_code(node)
			return
		end

		var code_vector = mentity_index.vectorize_node(nit_ast, true)
		if code_vector.is_empty then
			visit_raw_code(node)
			return
		end

		# if node.location.line_start != 182 then return
		# print node

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
			vector.inc "-is_fictive: true"
			vector.inc "-in: core::kernel"
			vector.inc "-in: core>collection>"
			vector.inc "-in: core>text>"
			# vector.inc "-full_name: serialization::Serializable"
			vector.inc "-full_name: serialization::Serializable::core_serialize_to"
			# vector.inc "-full_name: serialization::Serializer"
			vector.inc "-full_name: serialization::Serializer::serialize_attribute"
			vector.inc "-full_name: serialization::Serializable::from_deserializer"
			# vector.inc "-full_name: serialization::Deserializer"
			vector.inc "-full_name: serialization::Deserializer::deserialize_attribute"
			vector.inc "-full_name: serialization::Deserializer::deserialize_class"
			vector.inc "-full_name: serialization::Deserializer::deserialize_class_intern"
			vector.inc "-full_name: core::file::Sys::print"
			node.md_refs.add_all matches_to_refs(mentity_index.match_query(vector), node)
		end

		# Examples
		var example_query = new Vector
		example_query.add_all code_vector
		example_query.inc "in: {context.full_name}"
		example_query.inc "+in: {context.full_name}"
		example_query.inc "+is_example: true"
		example_query.inc "+kind: MModule"
		# print example_query
		var example_all_matches = mentity_index.match_query(example_query)
		var example_matches = new MDocMatches
		for match in example_all_matches do
			match.similarity = code_vector.cosine_similarity(match.document.code_vector)
			if match.similarity > 0.0 then example_matches.add match
		end
		for match in example_matches.sort.limit(1) do
			# res.add new MdRefCode(node, match.document.mentity)
			node.md_refs.add new MdRefExample(node, match.document.mentity, match.similarity)
		end
	end

	fun visit_raw_code(node: MdCodeBlock) do
		var info = node.info
		if info != null and info != "nitish" and info != "nit" then return

		var literal = node.literal
		if literal == null then return

		var vector = new Vector
		vector.inc "-kind: MPropDef"
		vector.inc "-kind: MClassDef"

		# for def in literal.search_all(def_re) do

		# end

		# for match in literal.search_all(call_re) do
			# var call = match.to_s.trim
			# if keywords.has(call) then continue
			# var names = call.search_all(name_re)
			# if names.is_empty then continue
			# var name = names.first
			# print call
			# print name
			# print "--"
			# var args = c.search_all(arg_re)
			# if args.not_empty then args.shift
			# vector.inc "call: {names.first.to_s.trim}({args.length})"
		# end
		# print vector

		for name in literal.search_all(name_re) do
			var id = name.to_s.trim
			if keywords.has(id) then continue
			vector.inc "name: {id}"
		end
		if vector.not_empty then
			for ref in matches_to_refs(mentity_index.match_query(vector), node) do
				if not context.has_mentity(ref.mentity) then continue
				node.md_refs.add ref
			end
		end
	end

	var name_pt = "([a-zA-Z_][a-zA-Z0-9_=]*)"
	var name_re: Regex = name_pt.to_re is lazy

	var arg_pt = "([^,()]*)"
	var arg_re: Regex = arg_pt.to_re is lazy
	var args_pt = "({arg_pt}(, ?{arg_pt})*)"
	var sign_pt = "(\\({args_pt}?\\))"
	var sign_re: Regex = sign_pt.to_re is lazy

	var def_pt = "fun {name_pt}({sign_pt})?"
	var def_re: Regex = def_pt.to_re is lazy

	var call_pt = "({name_pt}(\\.{name_pt})*({sign_pt})?)"
	var call_re: Regex = call_pt.to_re is lazy

	var keywords = [
		"end", "not", "null", "var", "do", "then", "catch", "else", "loop", "is",
		"import", "module", "package", "class", "enum", "universal", "interface", "extern",
		"abstract", "intern", "fun", "new", "private", "public", "protected", "intrude", "readable",
		"writable", "redef", "if", "while", "for", "with", "assert", "and", "or", "in", "is",
		"isa", "once", "break", "contrinue", "return", "abort", "nullable", "special", "super",
		"self", "true", "false"]

	private fun matches_to_refs(matches: MDocMatches, node: MdNode): Array[MdRefCode] do
		var res = new Array[MdRefCode]
		for match in matches do
			res.add new MdRefCode(node, match.document.mentity)
		end
		return res
	end
end

class MdRefCode
	super MdRefMEntity

	# var token: String
end

class MdRefExample
	super MdRefMEntity

	var similarity: Float

end
