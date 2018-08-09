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
# limitations under the License.i

module align_filter

import align_base

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

class MdFilterContext
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(refs) do
		var keep = new Array[MdRefMEntity]
		for ref in refs do
			if context.has_mentity(ref.mentity) then keep.add ref
		end
		return keep
	end
end

class MdFilterNameConflicts
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(refs) do
		var keep = new Array[MdRefMEntity]
		var names = new HashMap[String, Array[MdRefMEntity]]

		for ref in refs do
			var name = ref.mentity.name
			if not names.has_key(name) then
				names[name] = new Array[MdRefMEntity]
			end
			names[name].add ref
		end

		for name, mrefs in names do
			if mrefs.length == 1 then
				keep.add mrefs.first
				continue
			end

			# Resolve name conflicts
			var subrefs = new Array[MdRefMEntity]
			for ref in mrefs do
				if not context.has_mentity(ref.mentity) then continue
				subrefs.add ref
			end
			if subrefs.not_empty then
				keep.add_all subrefs
			else
				keep.add_all mrefs
			end
		end

		return keep
	end
end


class MdFilterKind
	super MdFilterMEntities

	redef fun filter_mentities_refs(refs) do
		var keep = new Array[MdRefMEntity]
		var keep_mentities = new HashSet[MEntity]

		# Keep all packages
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MPackage then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep groups only if not the root of a already kept package
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MGroup then continue
			if keep_mentities.has(mentity.mpackage) then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep mmodules only if not already in a kept package or group
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MModule then continue
			var mgroup = mentity.mgroup
			if mgroup != null then
				if keep_mentities.has(mgroup) then continue
				if keep_mentities.has(mgroup.mpackage) then continue
			end
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep all classes
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MClass then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep mproperties only if not a same name is already kept
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MProperty then continue
			for oentity in keep_mentities do
				if oentity isa MClass or oentity isa MProperty then continue
				if oentity.name == mentity.name then continue label mprop
			end
			keep.add ref
			keep_mentities.add mentity
		end label mprop

		return keep
	end
end
