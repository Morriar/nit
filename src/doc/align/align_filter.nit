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
import align_themes

class MdFilterAll
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]
		for ref in refs do
			if not ref.mentity isa MPackage and not ref.mentity isa MGroup and not ref.mentity isa MModule and not ref.mentity isa MClass then continue
			keep.add ref
		end
		return keep
	end
end

class MdFilterContext
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]
		for ref in refs do
			if context.has_mentity(ref.mentity) then keep.add ref
		end
		return keep
	end
end

class MdFilterSmartContext
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]
		for ref in refs do
			var mentity = ref.mentity
			# if mentity.name.length <= 2 then continue
			if mentity isa MPackage then
				keep.add ref
			else if mentity isa MGroup then
				if not context.has_mentity(ref.mentity) then continue
				keep.add ref
			else if mentity isa MModule then
				if not context.has_mentity(ref.mentity) then continue
				keep.add ref
			else if mentity isa MClass then
				if ref isa MdRefText and not ref.string.chars.first.is_upper then
					var string = ref.string
					if mentity.name.length <= 1 then continue
					var dist = string.levenshtein_distance(mentity.name)
					if dist > 0 and not context.has_mentity(ref.mentity) then continue
				end
				keep.add ref
			else
				if not context.has_mentity(ref.mentity) then continue
				keep.add ref
			end
		end
		return keep
	end
end


class MdFilterMProps
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]
		for ref in refs do
			if ref.mentity isa MProperty then continue
			keep.add ref
		end
		return keep
	end
end


class MdFilterNameConflictsContext
	super MdFilterMEntities

	var context: MEntity

	redef fun filter_mentities_refs(node, refs) do
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

		# print node
		# print keep

		return keep
	end
end


class MdFilterKind
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
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

# Resolve conflicts between a MModule, a MGroup and a MPackage
#
# Select the package with the same name.
class MdFilterPackage
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]

		# Collect mapackages, mgroups and mmodules
		var mentities = new HashSet[MEntity]
		var mclasses = new HashSet[MClass]
		for ref in refs do
			var mentity = ref.mentity
			if mentity isa MPackage or mentity isa MGroup or mentity isa MModule or mentity isa MClass then
				mentities.add mentity
				if mentity isa MClass then mclasses.add mentity
			end
		end

		for ref in refs do
			var mentity = ref.mentity
			var themes = node.md_block.md_themes_names
			if mentity isa MPackage then
				# if not themes.has("package") then
				#	if themes.has("group") then continue
				#	if themes.has("module") then continue
				#	if themes.has("class") then continue
				# end
				keep.add ref
			else if mentity isa MGroup then
				# if not themes.has("group") then
				#	if themes.has("package") then continue
				#	if themes.has("module") then continue
				#	if themes.has("class") then continue
				# end
				# Keep groups only if the package is not here
				if not themes.has("group") then
					if mentities.has(mentity.mpackage) and mentity.mpackage.root == mentity then continue
				end
				keep.add ref
			else if mentity isa MModule then
				# Keep modules only if the group and package are not here
				var mgroup = mentity.mgroup
				if not themes.has("module") then
					if mgroup != null and mgroup.name == mentity.name then
						if mentities.has(mgroup) then continue
						if mentities.has(mgroup.mpackage) then continue
					end
				end
				keep.add ref
			else if mentity isa MProperty then
				if mclasses.not_empty then continue
				# if not themes.has("group") then
				#	if themes.has("package") then continue
				#	if themes.has("module") then continue
				#	if themes.has("class") then continue
				# end
				# Keep groups only if the package is not here
				# if not themes.has("group") then
					# if mentities.has(mentity.mpackage) and mentity.mpackage.root == mentity then continue
				# end
				keep.add ref

			else
				# Keep the rest
				keep.add ref
			end
		end

		return keep
	end
end
