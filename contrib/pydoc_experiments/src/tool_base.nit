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

# Introduce base concepts for python documentation analysis.
module tool_base

# A librarty dir
abstract class DocLib
	# Path to this dir
	var path: String

	# Basename of this lib
	var name: String is lazy do return path.basename
end

# Python library representation
class PyLib
	super DocLib

	# rst documentation file of this library
	var rst: RstFile is noinit

	# python source file
	var py: PyFile is noinit

	init do
		rst = new RstFile(path / "{name}.rst")
		py = new PyFile(path / "{name}.py")
	end

	# Documentation URL on docs.python.org
	fun doc_url: String do return "https://docs.python.org/2/library/{name}.html"
end

# Nit generated library representation
class NitLib
	super DocLib

	init do path.mkdir

	# Markdown documentation file
	var md: MDFile is noinit, writable

	# Nit stub source file
	var nit: NitFile is noinit, writable

	# Generate the nitdoc of this lib
	fun nitdoc do sys.system "nitdoc -d {path}/doc/ {path}"
end

# A file handled by this tool
abstract class DocFile

	# Path to this file
	var path: String

	# File name with extension
	var filename: String is lazy do return path.basename

	# Python module name (name without extension)
	var module_name: String is lazy do return filename.strip_extension

	# Lines contained in the file
	var lines: Array[String] is lazy do
		var f = new FileReader.open(path)
		var res = f.read_lines
		f.close
		return res
	end
end

# Rst source file representation
class RstFile
	super DocFile
end

# Markdown source file representation
class MDFile
	super DocFile
end

# Python source file representation
class PyFile
	super DocFile

	# Generate a NitFile containing `self` API translated to nit.
	fun to_nit_file(path: String): NitFile do
		var nit = new NitFile(path)
		sys.system "./model.py {self.path} > {path}"
		return nit
	end
end

# Nit source file representation
class NitFile
	super DocFile

	# Compile this file with nitc
	fun compile_to(path: String) do
		sys.system "nitc {self.path} -o {path}"
	end
end
