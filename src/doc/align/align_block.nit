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

module align_block

import align_refs
import align_text

class MdBlockAlign
	super MdVisitor

	var model: Model

	var mainmodule: MModule

	var context: MEntity is noinit

	fun align_blocks(doc: MdDocument, context: MEntity) do
		self.context = context
		enter_visit(doc)
	end

	redef fun visit(node) do
		if not node isa MdBlock then
			node.visit_all(self)
			return
		end
		# var refs = node.model_refs
		# for ref in refs do
			# print "> match: {ref}"
		# end
	end
end

class MdBlockRefsVisitor
	super MdVisitor

	var refs = new Array[MdRef]

	redef fun visit(node) do
		if node isa MdText then
			refs.add_all node.md_refs
		else if node isa MdCode then
			if node.md_ref != null then refs.add node.md_ref.as(not null)
		end
		node.visit_all(self)
	end
end

redef class MdBlock
	var model_refs: Array[MdRef] is lazy do
		var v = new MdBlockRefsVisitor
		v.enter_visit(self)
		return v.refs
	end
end
