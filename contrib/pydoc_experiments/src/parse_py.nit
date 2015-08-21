# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Parse the content of a Python source code file.
#
# Recognized elements:
# * module DocString
# * class declaration and DocString
# * method declaration, parameters and DocString
# * function (top level) declaration and DocString
#
# TODO
# * load imports recursively
module parse_py

import tool_base
import template

redef class PyFile

	# Python module delcared in this file
	var py_module: nullable PyModule = null

	# Generate a NitFile containing `self` API translated to nit.
	fun to_nit_file(path: String): NitFile do
		var nit = new NitFile(path)
		to_nit.write_to_file nit.path
		return nit
	end

	# Translate the python API contained in `self` to a Nit one.
	fun to_nit: Template do
		parse
		var mod = py_module
		assert mod != null
		return mod.to_nit
	end

	# Parse this file
	#
	# Set the `py_module`.
	fun parse do
		if py_module != null then return
		py_module = new PyModule(module_name)

		var i = 0
		while i < lines.length do
			var line = lines[i]
			# Module documentation
			if line.has_prefix("\"\"\"") then
				var comment = new Array[String]
				i = parse_comment(lines, comment, i)
				if not comment.is_empty then py_module.as(not null).doc = comment
			# Class token
			else if line.l_trim.has_prefix("class ") then
				i = parse_class(lines, i)
			# Methods (indent at 4)
			else if line.has_prefix("    def") then
				i = parse_meth(lines, i)
			# Function token (no indent)
			else if line.has_prefix("def ") then
				i = parse_func(lines, i)
			end
			i += 1
		end

		# py_module = mod
	end

	# Parse a class block, block end line
	fun parse_class(input: Array[String], line: Int): Int do
		# parse class header
		var klass = parse_class_decl(input[line])
		if klass != null then
			py_module.as(not null).classes.add klass
			# try to parse comment
			var comment = new Array[String]
			line = parse_comment(input, comment, line + 1)
			if not comment.is_empty then klass.doc = comment
		end
		return line
	end

	# Parse a DocString comment delimited by `"""`
	fun parse_comment(input: Array[String], comment: Array[String], line_pos: Int): Int do
		if line_pos < 0 or line_pos >= input.length then return -1
		var line = input[line_pos].l_trim
		if is_comment_delim(line, 0) then
			var buff = new Buffer
			var pos = read(line, buff, 0, 3)
			buff.clear
			pos = read_until(line, buff, pos, '"')
			var str = buff.write_to_string
			if not str.is_empty then
				comment.add str
			end
			if is_comment_delim(line, pos) then return line_pos

			while line_pos >= 0 and line_pos < input.length - 1 do
				line_pos += 1
				line = input[line_pos].l_trim
				buff.clear
				pos = read_until(line, buff, 0, '"')
				str = buff.write_to_string
				if is_comment_delim(line, pos) then
					if not str.is_empty then comment.add str
					return line_pos
				else
					comment.add str
				end
			end
		end
		return line_pos
	end

	# Is there a comment delimitor at this position?
	fun is_comment_delim(input: String, pos: Int): Bool do
		if pos < 0 or pos >= input.length then return false
		if input[pos] != '"' then return false
		if pos + 1 < input.length and input[pos + 1] != '"' then return false
		if pos + 2 < input.length and input[pos + 1] != '"' then return false
		return true
	end

	# Parse a class declaration
	fun parse_class_decl(line: String): nullable PyClass do
		var buff = new Buffer
		var pos = skip_spaces(line, 0)

		# Parse `class`
		pos = read(line, buff, pos, 6) # read `class`
		var kw = buff.write_to_string
		if not kw == "class " then return null
		pos = skip_spaces(line, pos)

		# Parse class name
		buff.clear
		pos = read_until(line, buff, pos, ':', '(')
		var name = buff.write_to_string

		var klass = new PyClass(name.trim)

		# Parse supers
		if pos < line.length and line[pos] == '(' then
			pos += 1
			buff.clear
			pos = read_until(line, buff, pos, ')', ',')
			klass.bases.add new PyClass(buff.write_to_string.trim)
			while pos < line.length and line[pos] == ',' do
				buff.clear
				pos = read_until(line, buff, pos + 1, ')', ',')
				var base_name = buff.write_to_string.trim
				klass.bases.add new PyClass(base_name)
				pos += 1
			end
		end
		return klass
	end

	# Parse a function
	fun parse_func(input: Array[String], line: Int): Int do
		if input.is_empty then return line
		# parse func header
		var func = parse_func_decl(null, input[line])
		if func != null then
			py_module.as(not null).functions.add func
			# try to parse comment
			var comment = new Array[String]
			line = parse_comment(input, comment, line + 1)
			if not comment.is_empty then func.doc = comment
		end
		return line
	end

	# Parse a function
	fun parse_meth(input: Array[String], line: Int): Int do
		var mod = py_module
		if input.is_empty then return line
		# parse func header
		var c: nullable PyClass = null
		if mod != null and not mod.classes.is_empty then c = mod.classes.last
		var func = parse_func_decl(c, input[line].l_trim)
		assert mod != null
		if func != null then
			if mod.classes.is_empty then
				mod.functions.add func
			else
				mod.classes.last.methods.add func
			end
			# try to parse comment
			var comment = new Array[String]
			line = parse_comment(input, comment, line + 1)
			if not comment.is_empty then func.doc = comment
		end
		return line
	end

	# Parse a function declaration
	fun parse_func_decl(py_class: nullable PyClass, line: String): nullable PyFunction do
		var buff = new Buffer

		var pos = skip_spaces(line, 0)

		# Parse `class`
		pos = read(line, buff, pos, 4) # read `def`
		var kw = buff.write_to_string
		if not kw == "def " then return null
		pos = skip_spaces(line, pos)

		# Parse func name
		buff.clear
		pos = read_until(line, buff, pos, ':', '(')
		var name = buff.write_to_string

		var func = new PyFunction(name.trim, py_class)

		# Parse args
		if pos < line.length and line[pos] == '(' then
			pos += 1
			buff.clear
			pos = read_until(line, buff, pos, ')', ',')
			var pname = buff.write_to_string.trim
			if not pname.is_empty then func.params.add pname
			while pos >= 0 and pos < line.length and line[pos] == ',' do
				pos += 1
				buff.clear
				pos = read_until(line, buff, pos, ')', ',')
				pname = buff.write_to_string.trim
				if not pname.is_empty then func.params.add pname
			end
		end
		return func
	end

	# List of character considered as spaces
	private var spaces: Array[Char] =  [' ', '\t', '\n', '\r']

	# Is this character a space?
	private fun is_space(char: Char): Bool do
		return spaces.has(char)
	end

	# Advance cursor to next non-space character
	private fun skip_spaces(input: String, from: Int): Int do
		var pos = from
		while is_space(input[pos]) do pos += 1
		return pos
	end

	# Read the input between `from` and `to` inclusively.
	private fun read(input: String, buffer: Buffer, from, to: Int): Int do
		var pos = from
		while pos < to do
			buffer.add input[pos]
			pos += 1
		end
		return pos
	end

	private fun read_until(input: String, buffer: Buffer, from: Int, until: Char...): Int do
		var pos = from
		if pos < 0 or pos >= input.length then return -1
		var c = input[pos]
		while not until.has(c) do
			buffer.add c
			pos += 1
			if pos >= input.length then return -1
			c = input[pos]
		end
		return pos
	end
end

# A python model
class PyModel
	# Known modules
	var modules = new Array[PyModule]
end

# A python code enitty like classes, methods and functions.
abstract class PyEntity

	# Name of that entity
	var name: String

	# DocString attached to that entity
	var doc: nullable Array[String] = null

	# Does this entity has a documentation attached?
	fun has_doc: Bool do return doc != null

	redef fun to_s do return "<{class_name}:{name}>"

	# Translate this python entity to a Nit one
	fun to_nit: Template is abstract

	# Return `self.name` adapted to be a valid Nit identifier
	fun nit_name: String do return name
end

# A python module
class PyModule
	super PyEntity

	# Imported modules
	var imports = new Array[PyModule]

	# List of classes declared in this module
	var classes = new Array[PyClass]

	# List of top level functions (not methods)
	var functions = new Array[PyFunction]

	redef fun to_nit do
		var tpl = new Template

		var doc = self.doc; if doc != null then for l in doc do tpl.addn "# {l}"
		tpl.addn "\nmodule {nit_name}\n"

		# unknown classes before
		for c in classes do
			for b in c.bases do
				if not has_class(b) then
					tpl.add b.to_nit
				end
			end
		end

		for c in classes do tpl.add c.to_nit
		for f in functions do tpl.add f.to_nit
		return tpl
	end

	# Does this module has the class?
	fun has_class(py_class: PyClass): Bool do
		for c in classes do
			if c.name == py_class.name then return true
		end
		return false
	end
end

# A python class
class PyClass
	super PyEntity

	# Superclasses
	var bases = new Array[PyClass]

	# Methods contained in that class
	var methods = new Array[PyFunction]

	redef fun to_nit do
		var tpl = new Template

		var doc = self.doc; if doc != null then for l in doc do tpl.addn "# {l}"
		tpl.addn "class {nit_name}"

		for s in bases do
			tpl.addn "\tsuper {s.nit_name}"
		end
		if not bases.is_empty then tpl.addn ""

		for m in methods do
			tpl.add m.to_nit
		end
		tpl.addn "end\n"
		return tpl
	end

	redef fun nit_name do
		if name.has_prefix("_") then
			name = name.substring_from(1)
		end
		if not name.is_empty then
			name = "{name.first.to_upper}{name.substring_from(1)}"
		end
		return name
	end

	# Does `self` as a definition for `method`?
	fun has_method(method: PyFunction): Bool do
		for m in methods do
			if m.name == method.name then return true
		end
		return false
	end
end

# A Python function
class PyFunction
	super PyEntity

	# The class containing self.
	#
	# `null` if top level.
	var py_class: nullable PyClass

	# Function parameters (untyped because python...).
	var params = new Array[String]

	redef fun to_s do return "<{class_name}:{name}({params.join(", ")})>"

	redef fun to_nit do
		var tpl = new Template

		var doc = self.doc; if doc != null then for l in doc do tpl.addn "# {l}"

		# no init at top level
		if nit_name == "init" and py_class == null then return tpl

		# redef
		var def = ""
		if py_class != null then def = "\t"
		if is_redef then def = "{def}redef "

		# params
		var str_params = new Array[String]
		while not params.is_empty do
			var param = params.shift
			if param == "self" then continue
			str_params.add "{param_name(param)}: Object"
		end
		var sign = ""
		if not str_params.is_empty then sign = "({str_params.join(", ")})"

		if nit_name == "init" then
			tpl.add "{def}init{sign} do end\n"
		else
			tpl.add "{def}fun {nit_name}{sign} is abstract\n"
		end
		return tpl
	end

	redef var nit_name is lazy do
		var i = 0
		var py_class = self.py_class
		if py_class != null then
			for m in py_class.methods do
				if m.name == name then i += 1
			end
		end

		if name == "compile" then name = "ccompile"
		if name == "localeconv" then name = "llocaleconv"
		if name == "format" then name = "fformat"
		if name == "setlocale" then name = "ssetlocale"
		if name.has_prefix("__") and name.has_suffix("__") then
			name = name.substring(2, name.length - 4)
		end
		while name.has_prefix("_") do
			name = name.substring_from(1)
		end

		if i > 1 then name = "{name}{i}"
		return name
	end

	private fun param_name(name: String): String do
		if name == "true" then return "ttrue"
		if name == "false" then return "ffalse"
		if name == "type" then return "ttype"
		if name.has_prefix("'") and name.has_suffix("'") then
			name = name.substring(1, name.length - 2)
		end
		while name.has_prefix("*") do
			name = name.substring_from(1)
		end
		if not name.is_empty then
			name = "{name.first.to_lower}{name.substring_from(1)}"
		end
		return name.split_with("=").first
	end

	private fun is_redef: Bool do
		var py_class = self.py_class
		if py_class == null then return false
		for c in py_class.bases do
			if c.has_method(self) then return true
		end
		return false
	end
end
