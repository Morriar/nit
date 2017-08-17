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

module model_filters

import model

# A list of filters that can be applied on a MEntity.
#
# See ModelFilter.
class ModelFilters
	super Array[ModelFilter]

	# Is `mentity` accepted by all the `filters`?
	#
	# If one of the `filters` returns `false` then the `mentity` is not accepted.
	fun accept_mentity(mentity: MEntity): Bool do
		for filter in self do
			if not filter.accept_mentity(mentity) then return false
		end
		return true
	end
end

# A filter that can be applied on a MEntity.
interface ModelFilter

	# Is `mentity` accepted by this filter?
	fun accept_mentity(mentity: MEntity): Bool is abstract
end

# Rejects entities with a visibility strictly below `min_visibility`.
class VisibilityFilter
	super ModelFilter

	# Minimum visibility an MEntity must have to be accepted.
	var min_visibility: MVisibility

	redef fun accept_mentity(mentity) do
		return mentity.visibility >= min_visibility
	end
end

# Rejects entities with no documentation.
class EmptyDocFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		return mentity.mdoc_or_fallback != null
	end
end

# Rejects nitunit related entities.
class TestFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		if mentity isa MProperty then return accept_mentity(mentity.intro)
		if mentity isa MMethodDef then
			if mentity.is_before then return false
			if mentity.is_before_all then return false
			if mentity.is_after then return false
			if mentity.is_after_all then return false
		end
		return not mentity.is_test
	end
end

# Rejects attributes.
class AttributeFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		if mentity isa MAttribute then return false
		if mentity isa MAttributeDef then return false
		return true
	end
end

# Reject fictive entities.
class FictiveFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		return not mentity.is_fictive
	end
end

# Reject entities where the full_name does not contain `string`.
class StringFilter
	super ModelFilter

	var string: String

	redef fun accept_mentity(mentity) do
		return mentity.full_name.has(string)
	end
end

# Reject redefinitions for mclassdefs and propdefs.
class RedefFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		if mentity isa MClassDef then
			return mentity.is_intro
		else if mentity isa MPropDef then
			return mentity.is_intro
		end
		return true
	end
end

# Reject extern mentities.
class ExternFilter
	super ModelFilter

	redef fun accept_mentity(mentity) do
		if mentity isa MMethodDef then
			return not mentity.is_extern
		end
		return true
	end
end

class InheritedFilter
	super ModelFilter

	var context: MEntity

	redef fun accept_mentity(mentity) do
		if context isa MPackage then
			if mentity isa MGroup then return mentity.mpackage == context
			if mentity isa MModule then return mentity.mpackage == context
		end
		if context isa MGroup then
			if mentity isa MModule then return mentity.mgroup == context
		end
		if context isa MModule then
			if mentity isa MClass then return mentity.intro.mmodule == context
			if mentity isa MClassDef then return mentity.mmodule == context
		end
		if context isa MClass then
			if mentity isa MProperty then return mentity.intro_mclassdef.mclass == context
			if mentity isa MPropDef then return mentity.mclassdef.mclass == context
		end
		if context isa MClassDef then
			if mentity isa MProperty then return mentity.intro_mclassdef == context
			if mentity isa MPropDef then return mentity.mclassdef == context
		end
		return true
	end
end
