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

redef class PyFile

	# Generate a NitFile containing `self` API translated to nit.
	fun to_nit_file(path: String): NitFile do
		var nit = new NitFile(path)
		sys.system "model.py > {path}"
		return nit
	end
end
