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

module align_refs

import align_base

class MdAlignCodes
	super MdAligner

	redef fun visit(node) do
		if node isa MdCode then
			align_md_code(node)
		end
		node.visit_all(self)
	end

	fun align_md_code(node: MdCode) do
		var string = node.literal.trim

		if is_option(string) then
			align_option_ref(node, string)
		else if is_command(string) then
			align_command_ref(node, string)
		else if is_path(string) or is_file(string) then
			align_path_ref(node, string)
		else if is_annot(string) then
			align_annot_ref(node, string)
		else if is_name(string) then
			align_name_ref(node, string)
		else if is_qname(string) then
			align_qname_ref(node, string)
		else if is_signature(string) or is_generic(string) or is_call(string) then
			align_signature_ref(node, string)
		end
	end

	fun align_option_ref(node: MdCode, string: String) do
		node.md_refs.add new MdRefOption(node, string)
	end

	fun align_command_ref(node: MdCode, string: String) do
		var command = string
		var args = new Array[String]

		var parts = string.split(" ")
		if not parts.is_empty then
			command = parts.shift
			args.add_all parts # FIXME this will never work with complicated commands
		end

		node.md_refs.add new MdRefCommand(node, command, args)
	end

	fun align_path_ref(node: MdNode, string: String) do
		var path: nullable Path = null
		if string.file_exists then
			path = string.to_path
		else
			var file = context.location.file
			if file != null then
				var filename = file.filename
				var p = null
				if filename.to_path.is_dir then
					p = filename / string
				else if filename.file_exists then
					p = filename.dirname / string
				end
				if p != null and p.file_exists then
					path = p.to_path
				end
			end
		end
		node.md_refs.add new MdRefPath(node, path)
	end

	fun align_annot_ref(node: MdCode, string: String) do
		node.md_refs.add new MdRefAnnot(node, string)
	end

	fun align_name_ref(node: MdCode, string: String) do
		for mentity in model.mentities_by_name(string) do
			node.md_refs.add new MdRefMEntity(node, mentity)
		end
	end

	fun align_qname_ref(node: MdCode, string: String) do
		# Match full_name
		var mentity = model.mentity_by_full_name(string)
		if mentity != null then
			node.md_refs.add new MdRefMEntity(node, mentity)
			return
		end

		# Match partial name
		var pack_name = null
		var group_name = null
		# var mod_name = null
		var class_name = null
		var prop_name = null

		for part in string.split("::") do
			if part.chars.first.is_upper then
				class_name = part
				continue
			end
			if class_name != null then
				prop_name = part
				continue
			end
			if pack_name == null then
				pack_name = part
				group_name = part
				# mod_name = part
			end
			if group_name == null then
				group_name = part
				# mod_name = part
			end
		end

		var mprops = new Array[MProperty]
		if prop_name != null then
			for mprop in model.mentities_by_name(prop_name) do
				if mprop isa MProperty then mprops.add mprop
			end
		end

		var mclasses = new Array[MClass]
		if class_name != null then
			for mclass in model.mentities_by_name(class_name) do
				if mclass isa MClass then mclasses.add mclass
			end
		end

		for mprop in mprops do
			for mclass in mclasses do
				if mclass.collect_accessible_mproperties(mainmodule).has(mprop) then
					node.md_refs.add new MdRefMEntity(node, mprop)
				end
			end
		end
	end

	fun align_signature_ref(node: MdCode, string: String) do
		string = string.replace("\\(.*\\)".to_re, "")
		string = string.replace("\\[.*\\]".to_re, "")
		string = string.replace(".*\\.".to_re, "")
		if string.has("::") then
			align_qname_ref(node, string)
		else
			align_name_ref(node, string)
		end
	end

	# Parsing utils

	var option_re: Regex = "^--?[a-zA-Z0-9]+".to_re

	fun is_option(string: String): Bool do
		return string.has(option_re)
	end

	fun is_path(string: String): Bool do
		return string != "/" and string.has("/")
	end

	var file_re: Regex = "\\.(nit|html|md|json)$".to_re

	fun is_file(string: String): Bool do
		return string.has(file_re)
	end

	var command_re: Regex = "^(nit.*)".to_re

	fun is_command(string: String): Bool do
		return string.has(command_re)
	end

	var name_pt = "(([a-zA-Z_][a-zA-Z0-9_]*)|(\\[\\]=?)|(==))"
	var name_re: Regex = "^{name_pt}$".to_re

	fun is_name(string: String): Bool do
		return string.has(name_re)
	end

	var qname_pt = "{name_pt}(::{name_pt})*"
	var qname_re: Regex = "^{qname_pt}$".to_re

	fun is_qname(string: String): Bool do
		return string.has(qname_re)
	end

	var arg_pt = "([a-zA-Z0-9_]+)"
	var args_pt = "({arg_pt}(, ?{arg_pt})*)"
	var sign_pt = "(\\({args_pt}?\\))"
	var sign_re: Regex = sign_pt.to_re

	fun is_signature(string: String): Bool do
		return string.has(sign_re)
	end

	var gen_pt = "(\\[{args_pt}?\\])"
	var gen_re: Regex = gen_pt.to_re

	fun is_generic(string: String): Bool do
		return string.has(gen_re)
	end

	var call_pt = "^({name_pt}\\.{name_pt}(\\.{name_pt})*)$"
	var call_re: Regex = call_pt.to_re

	fun is_call(string: String): Bool do
		return string.has(call_re)
	end

	var annot_re: Regex = "^((is )?(actor|example|lazy|(no)?serialize|test|threaded))$".to_re

	fun is_annot(string: String): Bool do
		return string.has(annot_re)
	end
end

class MdRefPath
	super MdRef

	var path: nullable Path
end

# A reference to an option
class MdRefOption
	super MdRef

	var option: String
end

class MdRefCommand
	super MdRef

	var command: String
	var args: Array[String]
end

class MdRefAnnot
	super MdRef

	var annot: String
end
