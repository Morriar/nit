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

class DocGroup[E]
	serialize

	var id: nullable String is writable
	var name: nullable Serializable is writable
	var subgroups = new Array[DocGroup[E]] is writable
	var elements = new Array[E] is writable

	init with_elements(id: nullable String, name: nullable Serializable, elements: Array[E]) do
		init(id, name)
		self.elements = elements
	end
end

abstract class DocGroupBuilder[E]
	super Comparator

	redef type COMPARED: DocGroup[E]

	private var index = new HashMap[nullable Serializable, DocGroup[E]]

	fun group_elements(elements: Array[E]) do
		for element in elements do group_element(element)
	end

	fun group_element(element: E) do
		var group = group_for(element)
		group.elements.add element
	end

	fun group_for(element: E): DocGroup[E] is abstract

	fun group(id: nullable String, name: nullable Serializable): DocGroup[E] do
		if not index.has_key(name) then index[name] = new DocGroup[E](id, name)
		return index[name]
	end

	fun groups: Array[DocGroup[E]] do
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

class NoneGroupBuilder[E]
	super DocGroupBuilder[E]

	redef fun group_for(element) do return group(null, null)
end

class KindGroupBuilder
	super DocGroupBuilder[MEntity]

	redef fun group_for(mentity) do
		if mentity isa MPackage then return group("packages", "Packages")
		if mentity isa MGroup then return group("groups", "Groups")
		if mentity isa MModule then return group("modules", "Modules")
		if mentity isa MClass then
			if mentity.kind == interface_kind then return group("interfaces", "Interfaces")
			if mentity.kind == abstract_kind then return group("abs_classes", "Abstract Classes")
			if mentity.kind == extern_kind then return group("extern_classes", "Extern Classes")
			if mentity.kind == enum_kind then return group("enums", "Enums")
			return group("classes", "Classes")
		end
		if mentity isa MClassDef then return group_for(mentity.mclass)
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then
			if mentity isa MAttributeDef then return group("attrs", "Attributes")
			if mentity isa MVirtualTypeDef then return group("vts", "Virtual Types")
			if mentity isa MMethodDef then
				if mentity.mproperty.is_init then return group("consts", "Constructors")
				if mentity.is_abstract then return group("abs_mmethods", "Abstract Methods")
				if mentity.is_intern then return group("intern_mmethods", "Intern Methods")
				if mentity.is_extern then return group("extern_mmethods", "Extern Methods")
				return group("mmethods", "Methods")
			end
			return group("mprops", "Properties")
		end
		return group("other", "Other")
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
	super DocGroupBuilder[MEntity]

	redef fun group_for(mentity) do return group(mentity.visibility.to_s, mentity.visibility.to_s)

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
	super DocGroupBuilder[MEntity]

	redef fun group_for(mentity) do
		if mentity isa MClassDef then
			if mentity.is_intro then
				return group("intro_classes", "Introduced classes")
			else
				return group("redef_classes", "Redefined classes")
			end
		else if mentity isa MPropDef then
			if mentity.is_intro then
				return group("intro_mprops", "Introduced properties")
			else
				return group("redef_mprops", "Redefined properties")
			end
		end
		return group(null)
	end
end

class PackageGroupBuilder
	super DocGroupBuilder[MEntity]

	var view: ModelView

	redef fun group_for(mentity) do
		if mentity isa MGroup then return group(mentity.mpackage.full_name, mentity.mpackage)
		if mentity isa MModule then
			var mpackage = mentity.mpackage
			if mpackage == null then return group(null)
			return group(mpackage.full_name, mpackage)
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
		if mentity isa MClassDef then return group(mentity.mmodule.full_name, mentity.mmodule)
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group_for(mentity.mclassdef)
		return group(null)
	end
end

class ClassGroupBuilder
	super PackageGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MClassDef then return group(mentity.mclass.full_name, mentity.mclass)
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group_for(mentity.mclassdef)
		return group(null)
	end
end

class ClassDefGroupBuilder
	super PackageGroupBuilder

	redef fun group_for(mentity) do
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MPropDef then return group(mentity.mclassdef.full_name, mentity.mclassdef)
		return group(null)
	end
end

class ReturnGroupBuilder
	super DocGroupBuilder[MEntity]

	redef fun group_for(mentity) do
		if mentity isa MProperty then return group_for(mentity.intro)
		if mentity isa MAttributeDef then
			var mtype = mentity.static_mtype
			if mtype == null then return group("void", "void")
			return group(mtype.full_name, mtype)
		end
		if mentity isa MMethodDef then
			var sign = mentity.msignature
			if sign == null then return group("void", "void")
			var mtype = sign.return_mtype
			if mtype == null then return group("void", "void")
			return group(mtype.full_name, mtype)
		end
		if mentity isa MVirtualTypeDef then
			var mtype = mentity.bound
			if mtype == null then return group("void", "void")
			return group(mtype.full_name, mtype)
		end
		return group(null)
	end
end

redef class MEntity
	var allowed_groups: Array[String] = ["none", "kind"]
	var default_group = "kind"

	redef fun core_serialize_to(v) do
		super
		if v isa FullJsonSerializer then
			v.serialize_attribute("allowed_groups", allowed_groups)
			v.serialize_attribute("default_group", default_group)
		end
	end
end

redef class MModule
	redef var allowed_groups = ["none", "kind", "intro-redef", "visibility"]
end

redef class MClass
	redef var allowed_groups = ["none", "kind", "package", "module", "intro-redef", "visibility"]
end
