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

module down_codes

import down_base
private import parser_util

class CodesPhase
	super MdPhase

	redef fun process_ast(context, document) do
		var v = new CodesPhaseVisitor(self, context)
		v.enter_visit(document)
	end
end

private class CodesPhaseVisitor
	super MdVisitor

	var phase: CodesPhase
	var context: MEntity

	# Visit each `MdCode` and `MdCodeBlock`
	redef fun visit(node) do
		if node isa MdCode then
			node.nit_ast = phase.toolcontext.parse_something(node.literal)
			return
		end
		if node isa MdCodeBlock then
			var literal = node.literal
			if literal != null then
				if node isa MdFencedCodeBlock then
					var meta = node.info or else "nit"
					if meta != "nit" and meta != "nitish" then return
				end
				var ast = phase.toolcontext.parse_something(literal)
				check_error(node, ast)
				node.nit_ast = ast
				return
			end
		end
		node.visit_all(self)
	end

	fun check_error(md: MdNode, node: ANode): Bool do
		if node isa AError then
			phase.code_warn(context, md.location, node.location, "doc-codes", node.message)
			return false
		end
		return true
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
