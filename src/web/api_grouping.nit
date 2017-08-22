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

module api_grouping

import web_base

class DocGroup
	serialize

	var name: nullable Serializable is writable
	var subgroups = new Array[DocGroup] is writable
	var mentities = new Array[MEntity] is writable

	init with_mentities(mentities: Array[MEntity], name: nullable String) do
		init name
		self.mentities = mentities
	end
end

abstract class DocGroupBuilder
	super Comparator

	redef type COMPARED: DocGroup

	private var index = new HashMap[nullable Serializable, DocGroup]

	fun group_mentities(mentities: Array[MEntity]) do
		for mentity in mentities do group_mentity(mentity)
	end

	fun group_mentity(mentity: MEntity) do
		var group = group_for(mentity)
		group.mentities.add mentity
	end

	fun group_for(mentity: MEntity): DocGroup is abstract

	fun group(name: nullable Serializable): DocGroup do
		if not index.has_key(name) then index[name] = new DocGroup(name)
		return index[name]
	end

	fun groups: Array[DocGroup] do
		var groups = index.values.to_a
		sort(groups)
		return groups
	end

	redef fun compare(a, b) do
		var aname = a.name
		var bname = b.name
		if aname == null and bname == null then return 0
		if aname == null and bname != null then return -1
		if aname != null and bname == null then return 1
		return aname.as(not null).to_s <=> bname.as(not null).to_s
	end
end

class NoneGroupBuilder
	super DocGroupBuilder

	redef fun group_for(mentity) do return group(null)
end

class KindGroupBuilder
	super DocGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MPackage then return group("Packages")
		if mentity isa MGroup then return group("Groups")
		if mentity isa MModule then return group("Modules")
		if mentity isa MClass then
			if mentity.kind == interface_kind then return group("Interfaces")
			if mentity.kind == abstract_kind then return group("Abstract Classes")
			if mentity.kind == extern_kind then return group("Extern Classes")
			if mentity.kind == enum_kind then return group("Enums")
			return group("Classes")
		end
		if mentity isa MClassDef then return group_for(mentity.mclass)
		if mentity isa MProperty then
			if mentity isa MAttribute then return group("Attributes")
			if mentity isa MVirtualTypeProp then return group("Virtual Types")
			if mentity isa MMethod then
				if mentity.is_init then return group("Constructors")
				if mentity.intro.is_abstract then return group("Abstract Methods")
				if mentity.intro.is_intern then return group("Intern Methods")
				if mentity.intro.is_extern then return group("Extern Methods")
				return group("Methods")
			end
			return group("Properties")
		end
		if mentity isa MPropDef then return group_for(mentity.mproperty)
		return group("Other")
	end

	var pos: Array[String] = [
		"Packages", "Groups", "Modules",  "Enums", "Interfaces", "Abstract Classes",
		"Classes", "Extern Classes", "Virtual Types", "Constructors", "Attributes",
		"Abstract Methods", "Intern Methods", "Extern Methods", "Methods", "Properties", "Other"]

	redef fun compare(a, b) do
		var aname = a.name
		var bname = b.name
		if pos.has(aname) and not pos.has(bname) then return -1
		if not pos.has(aname) and pos.has(bname) then return 1
		if not pos.has(aname) and not pos.has(bname) then return 0
		return pos.index_of(aname) <=> pos.index_of(bname)
	end
end

class VisibilityGroupBuilder
	super DocGroupBuilder

	redef fun group_for(mentity) do return group(mentity.visibility.to_s)

	private var pos: Array[String] = ["public", "protected", "private"]

	redef fun compare(a, b) do
		var aname = a.name
		var bname = b.name
		if pos.has(aname) and not pos.has(bname) then return -1
		if not pos.has(aname) and pos.has(bname) then return 1
		if not pos.has(aname) and not pos.has(bname) then return 0
		return pos.index_of(aname) <=> pos.index_of(bname)
	end
end

class IntroRedefGroupBuilder
	super DocGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MClassDef then
			if mentity.is_intro then
				return group("Introduced classes")
			else
				return group("Redefined classes")
			end
		else if mentity isa MPropDef then
			if mentity.is_intro then
				return group("Introduced properties")
			else
				return group("Redefined properties")
			end
		end
		return group(null)
	end
end

class PackageGroupBuilder
	super DocGroupBuilder

	var view: ModelView

	redef fun group_for(mentity) do
		if mentity isa MGroup then return group(mentity.mpackage)
		if mentity isa MModule then
			var mpackage = mentity.mpackage
			if mpackage == null then return group(null)
			return group(mpackage)
		end
		if mentity isa MClass then return group_for(mentity.intro_mmodule)
		if mentity isa MClassDef then return group_for(mentity.mmodule)
		if mentity isa MProperty then return group_for(mentity.intro.mclassdef)
		if mentity isa MPropDef then return group_for(mentity.mclassdef)
		return group(null)
	end

	redef fun compare(a, b) do
		var aname = a.name
		var bname = b.name
		if aname isa MEntity and not bname isa MEntity then return -1
		if not aname isa MEntity and bname isa MEntity then return 1
		if not aname isa MEntity and not bname isa MEntity then return 0
		return aname.as(MEntity).collect_parents(view).length <=>
			bname.as(MEntity).collect_parents(view).length
	end
end

class ModuleGroupBuilder
	super PackageGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MClass then return group_for(mentity.intro)
		if mentity isa MClassDef then return group(mentity.mmodule)
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group_for(mentity.mclassdef)
		return group(null)
	end
end

class ClassGroupBuilder
	super PackageGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MClassDef then return group(mentity.mclass)
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group_for(mentity.mclassdef)
		return group(null)
	end
end

class ClassDefGroupBuilder
	super PackageGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group(mentity.mclassdef)
		return group(null)
	end
end

class ReturnGroupBuilder
	super DocGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MAttributeDef then
			var mtype = mentity.static_mtype
			if mtype == null then return group("void")
			return group(mtype.full_name)
		end
		if mentity isa MMethodDef then
			var sign = mentity.msignature
			if sign == null then return group("void")
			var mtype = sign.return_mtype
			if mtype == null then return group("void")
			return group(mtype.full_name)
		end
		if mentity isa MVirtualTypeDef then
			var mtype = mentity.bound
			if mtype == null then return group("void")
			return group(mtype.full_name)
		end
		return group(null)
	end
end

class PosetGroupBuilder
	super DocGroupBuilder

	fun group_poset(pe: POSetElement[MEntity]) do
		for mentity in pe.direct_greaters do
			var group = group("Parents")
			group.mentities.add mentity
		end
		for mentity in pe.direct_smallers do
			var group = group("Children")
			group.mentities.add mentity
		end
	end

	private var pos: Array[String] = ["Parents", "Children"]

	redef fun compare(a, b) do
		var aname = a.name
		var bname = b.name
		if pos.has(aname) and not pos.has(bname) then return -1
		if not pos.has(aname) and pos.has(bname) then return 1
		if not pos.has(aname) and not pos.has(bname) then return 0
		return pos.index_of(aname) <=> pos.index_of(bname)
	end
end
