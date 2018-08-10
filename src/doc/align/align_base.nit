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

import doc_down

abstract class MdAligner
	super MdVisitor

	var model: Model

	var mainmodule: MModule

	var context: MEntity

	fun align_document(doc: MdDocument) do
		enter_visit(doc)
	end
end

redef class MdNode
	var md_refs = new Array[MdRef] is writable
end

# A reference from the Markdown document to something
abstract class MdRef

	# Source node for this reference
	var node: MdNode

	redef fun to_s do return "{class_name}\{{node}\}"
end

class MdRefMEntity
	super MdRef

	var mentity:  MEntity
end

abstract class MdFilter
	super MdVisitor

	fun filter_document(doc: MdDocument) do
		enter_visit(doc)
	end

	fun filter_node(node: MdNode) do end

	redef fun visit(node) do
		filter_node(node)
		node.visit_all(self)
	end
end

abstract class MdFilterMEntities
	super MdFilter

	redef fun filter_node(node) do
		var keep = new Array[MdRef]
		var mentities_refs = new Array[MdRefMEntity]

		for ref in node.md_refs do
			if ref isa MdRefMEntity then
				mentities_refs.add ref
			else
				keep.add ref
			end
		end
		keep.add_all filter_mentities_refs(mentities_refs)
		node.md_refs = keep
	end

	fun filter_mentities_refs(refs: Array[MdRefMEntity]): Array[MdRefMEntity] is abstract
end

