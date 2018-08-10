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

module align_structure

import align_base

class MdAlignStructure
	super MdAligner

	var document: MdDocument is noinit

	var sections = new Array[MdSection]

	fun current_section: MdSection do
		assert sections.not_empty
		return sections.last
	end

	redef fun align_document(document) do
		sections.add document.md_root
		enter_visit(document)
	end

	redef fun visit(node) do
		var parent = current_section

		if node isa MdDocument then
			node.visit_all(self)
			return
		end

		if node isa MdHeading then
			while parent.level >= node.level and not parent.is_root do
				sections.pop
				parent = current_section
			end
			var section = new MdSection(parent, node)
			sections.add section
			parent.children.add section
			node.md_section = section
			node.visit_all(self)
			return
		end

		if node isa MdBlock then
			parent.blocks.add node
			node.md_section = parent
		end

		node.visit_all(self)
	end
end

redef class MdDocument
	var md_root = new MdSection(null, null)
end

class MdSection
	var parent: nullable MdSection
	var title: nullable MdHeading

	var is_root: Bool is lazy do return parent == null

	var level: Int is lazy do
		var title = self.title
		if title == null then return 0
		return title.level
	end

	var children = new Array[MdSection]
	var blocks = new Array[MdBlock]

	redef fun to_s do
		var title = self.title
		if title == null then
			return "<root>"
		end
		return "{"#" * title.level} {title.raw_text}"
	end
end

redef class MdBlock
	var md_section: nullable MdSection = null

	var prev_blocks: Array[MdBlock] is lazy do
		var blocks = new Array[MdBlock]
		var prev = self.prev
		while prev isa MdBlock and prev.md_section == md_section do
			blocks.add prev
			prev = prev.prev
		end
		return blocks
	end

	var next_blocks: Array[MdBlock] is lazy do
		var blocks = new Array[MdBlock]
		var next = self.next
		while next isa MdBlock and next.md_section == md_section do
			blocks.add next
			next = next.next
		end
		return blocks
	end
end

class MdSectionVisitor
	super MdVisitor

	fun visit_document(document: MdDocument) do
		visit_section(document.md_root)
	end

	fun visit_section(section: MdSection) do
		var title = section.title
		if title != null then
			visit title
		end
		for block in section.blocks do
			visit block
		end
		for child in section.children do
			visit_section child
		end
	end

	redef fun visit(node) do
		node.visit_all(self)
	end
end

class MdPrintStructure
	super MdSectionVisitor

	redef fun visit_section(section) do
		print section.to_s
		# print "parent: {section.parent or else "NULL"}"
		# print "blocks: {section.blocks}"
		# print "children: {section.children}"
		# print "-----------"
		super
	end

	redef fun visit(node) do
		# print node
		if node isa MdBlock then
			var section = node.md_section
			if section != null then
				print "{" " * section.level}  {node.to_s}"
			else
				print node
			end
		end
		super
	end
end
