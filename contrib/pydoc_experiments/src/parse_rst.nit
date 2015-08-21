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

# Parse `.rst` file written for Sphinx
module parse_rst

import tool_base

redef class RstFile

	# Translate rst to markdown using Pandoc
	fun to_md_file(path: String): MDFile do
		var md = new MDFile(path)
		# TODO should be done in Nit!
		# sys.system "rst2md.py -r 3 {self.path} {md.path} > /dev/null 2>&1"
		return md
	end

	# List documented classes in rst file
	fun documented_classes: Array[String] do
		return parse_directives(".. class:: ")
	end

	# List documented methods in the rst file
	fun documented_methods: Array[String] do
		return parse_directives(".. method:: ")
	end

	# List documented functions in the rst file
	fun documented_functions: Array[String] do
		return parse_directives(".. function:: ")
	end

	# List directives containing `pattern`
	private fun parse_directives(pattern: String): Array[String] do
		var res = new Array[String]
		for line in lines do
			line = line.trim
			if line.has_prefix(pattern) then
				res.add line.substring_from(pattern.length)
			end
		end
		return res
	end
end
