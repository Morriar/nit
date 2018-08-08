# This file is part of NIT ( http://www.nitlanguage.org ).
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

module down_codeblocks

import down_base
private import parser_util

redef class ToolContext
	var mdoc_codeblocks_phase = new DocCodeBlocksPhase(self, [mdoc_phase])
end

class DocCodeBlocksPhase
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		# TODO Extract exemples
		# TODO Check exemples
		# TODO warn
	end
end

class MDocProcessCodes
	super MdPostProcessor

	# ToolContext used to parse pieces of code
	var toolcontext = new ToolContext is lazy

	# Visit each `MdCode` and `MdCodeBlock`
	redef fun visit(node) do
		if node isa MdCode then
			node.nit_ast = toolcontext.parse_something(node.literal)
			return
		end
		if node isa MdCodeBlock then
			var literal = node.literal
			if literal != null then
				if node isa MdFencedCodeBlock then
					var meta = node.info or else "nit"
					if meta == "nit" or meta == "nitish" then
						node.nit_ast = toolcontext.parse_something(literal)
					end
				end
				if node isa MdIndentedCodeBlock then
					node.nit_ast = toolcontext.parse_something(literal)
					return
				end
			end
		end
		super
	end
end

redef class MdCodeBlock

	# Nit AST of this code block if any
	var nit_ast: nullable ANode = null is writable
end

redef class MdCode

	# Nit AST of this code span if any
	var nit_ast: nullable ANode = null is writable
end

