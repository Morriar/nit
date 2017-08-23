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

import model::model_collect

abstract class MEntityComparator
	super Comparator

	redef type COMPARED: MEntity
end

class MEntityNoneComparator
	super MEntityComparator

	redef fun compare(a, b) do return 0
end

class MEntityRandomComparator
	super MEntityComparator

	redef fun compare(a, b) do return [-1..1].rand
end

# Sorts mentities by their name (lexicographic order)
class MEntityNameComparator
	super MEntityComparator

	redef fun compare(a, b) do return a.name <=> b.name
end

class MEntityNaturalComparator
	super MEntityComparator

	redef fun compare(a, b) do
		if a isa MModule and b isa MModule then return a.full_name <=> b.full_name

		var aloc = a.location
		if a isa MClass then aloc = a.intro.location
		if a isa MProperty then aloc = a.intro.location

		var bloc = b.location
		if b isa MClass then bloc = b.intro.location
		if b isa MProperty then bloc = b.intro.location

		var afile = aloc.file
		var bfile = bloc.file
		if afile != null and bfile != null then
			if afile != bfile then return afile.filename <=> bfile.filename
			return aloc.line_start <=> bloc.line_start
		end
		return 0
	end
end

class MEntitySizeComparator
	super MEntityComparator

	var view: ModelView

	redef fun compare(a, b) do
		if a isa MPackage and b isa MPackage then
			return b.mgroups.length <=> a.mgroups.length
		end
		if a isa MGroup and b isa MGroup then
			return b.in_nesting.smallers.length + b.mmodules.length <=>
				a.in_nesting.smallers.length + a.mmodules.length
		end
		if a isa MModule and b isa MModule then
			return b.collect_intro_mclassdefs(view).length + b.collect_redef_mclassdefs(view).length <=> a.collect_intro_mclassdefs(view).length + a.collect_redef_mclassdefs(view).length
		end
		if a isa MClass and b isa MClass then
			return b.collect_intro_mpropdefs(view).length <=> a.collect_intro_mpropdefs(view).length
		end
		if a isa MClassDef and b isa MClassDef then
			return b.collect_mpropdefs(view).length <=> a.collect_mpropdefs(view).length
		end
		if a isa MProperty and b isa MProperty then
			return b.collect_mpropdefs(view).length <=> a.collect_mpropdefs(view).length
		end
		return 0
	end
end

class MEntityLOCComparator
	super MEntityComparator

	redef fun compare(a, b) do
		var aloc = a.location.line_end - a.location.line_start
		var bloc = b.location.line_end - b.location.line_start
		return bloc <=> aloc
	end
end

class MEntityLODComparator
	super MEntityComparator

	redef fun compare(a, b) do
		var adoc = a.mdoc
		var bdoc = b.mdoc
		if adoc != null and bdoc != null then
			return bdoc.content.length <=> adoc.content.length
		end
		return 0
	end
end

class MEntityKindComparator
	super MEntityComparator

	var kind_order: Array[String] = [
		"MPackage", "MGroup", "MModule", "MClass", "MClassDef",
		"MProperty", "MVirtualTypeProp", "MAttribute", "MMethod",
		"MPropDef", "MVirtualTypeDef", "MAttributeDef", "MMethodDef"
	] is writable

	redef fun compare(a, b) do
		return kind_order.index_of(a.class_name) <=> kind_order.index_of(b.class_name)
	end
end

class MEntityDepComparator
	super MEntityComparator

	var view: ModelView

	redef fun compare(a, b) do
		if a isa MGroup and b isa MGroup then
			if a.in_nesting.smallers.has(b) then return -1
			if b.in_nesting.smallers.has(a) then return 1
		end
		if a.collect_descendants(view).has(b) then return -1
		if b.collect_descendants(view).has(a) then return 1
		return 0
	end
end

class MEntityDocDepComparator
	super MEntityComparator

	redef fun compare(a, b) do
		if b.has_ref_to(a) then return -1
		if a.has_ref_to(b) then return 1
		return 0
	end
end

redef class MEntity

	# Does this documentation contains the name of `mentity`?
	private fun has_ref_to(mentity: MEntity): Bool do
		var mdoc = self.mdoc
		if mdoc == null then return false
		var re = "\\b{mentity.name.escape_to_re}\\b".to_re
		return mdoc.content.join(" ").has(re)
	end
end

redef class String
	private fun escape_to_re: String do
		if self == "+" then return "\\+"
		if self == "*" then return "\\*"
		if self == "**" then return "\\*\\*"
		if self == "[]" then return "\\[\\]"
		if self == "[]=" then return "\\[\\]="
		return self
	end
end
