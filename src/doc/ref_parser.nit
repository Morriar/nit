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

module ref_parser

class RefParser
	fun parse(string: String): MdRef do
		if is_option(string) then
			return new MdRefOption(string)
		else if is_path(string) then
			return new MdRefPath(string)
		else if is_command(string) then
			return new MdRefCommand(string)
		else if is_file(string) then
			return new MdRefFile(string)
		else if is_annot(string) then
			return new MdRefAnnot(string)
		else if is_name(string) then
			return new MdRefName(string)
		else if is_qname(string) then
			return new MdRefQName(string)
		else if is_signature(string) then
			return new MdRefSignature(string)
		else if is_generic(string) then
			return new MdRefGeneric(string)
		else if is_call(string) then
			return new MdRefCall(string)
		else
			return new MdRefOther(string)
		end

	end

	var option_re: Regex = "^--?[a-zA-Z0-9]+".to_re

	fun is_option(string: String): Bool do
		return string.has(option_re)
	end

	fun is_path(string: String): Bool do
		return string.has("/")
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

abstract class MdRef
	var string: String
end

class MdRefOption
	super MdRef
end

class MdRefPath
	super MdRef
end

class MdRefCommand
	super MdRef
end

class MdRefFile
	super MdRef
end

class MdRefAnnot
	super MdRef
end

class MdRefName
	super MdRef
end

class MdRefQName
	super MdRef
end

class MdRefSignature
	super MdRef
end

class MdRefGeneric
	super MdRef
end

class MdRefCall
	super MdRef
end

class MdRefOther
	super MdRef
end

# var lines = "spans.uniq".to_path.read_all.split("\n")

# var parser = new RefParser
# for line in lines do
	# parser.parse(line)
# end
