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

# Make model entities Serializable.
#
# To avoid cycles, every reference from a MEntity to another is replaced by a
# MEntityRef.
#
# How subobjects are retrieved using the MEntityRef is the responsability of the
# client. Json objects can be returned as this or inflated with concrete objet
# rather than the refs.
#
# TODO consider serialization module?
module model_json

import model::model_collect
import json::static
import json::serialization_write
import loader

redef class MEntity
	serialize

	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("class_name", class_name)
		v.serialize_attribute("full_name", full_name)
		v.serialize_attribute("mdoc", mdoc_or_fallback)
		v.serialize_attribute("visibility", visibility.to_s)
		v.serialize_attribute("modifiers", collect_modifiers)
		v.serialize_attribute("location", location)
	end

	# Serialize the full version of `self` to JSON
	#
	# See: `FullJsonSerializer`
	fun serialize_to_full_json(plain, pretty: nullable Bool): String do
		var stream = new StringWriter
		var serializer = new FullJsonSerializer(stream)
		serializer.plain_json = plain or else false
		serializer.pretty_json = pretty or else false
		serializer.serialize self
		stream.close
		return stream.to_s
	end

	# Return the full json representation of `self` with references.
	#
	# By default, every reference to another MEntity is replaced by a pointer
	# to the MEntity::json_id.
	# Use this method to obtain a full object with mentities instead of pointers.
	fun to_full_json: String do return serialize_to_full_json(plain=true)

	# Same as `to_full_json` but with pretty json.
	fun to_pretty_full_json: String do return serialize_to_full_json(plain=true, pretty=true)

	# Sort mentities by name
	private fun sort_entities(mentities: Collection[MEntity]): Array[MEntity] do
		var sorter = new MEntityNameSorter
		var sorted = mentities.to_a
		sorter.sort(sorted)
		return sorted
	end
end

redef class MDoc
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("content", content.join("\n"))
		v.serialize_attribute("location", location)
	end
end

redef class nitc::Location
	serialize

	redef fun core_serialize_to(v) do
		v.serialize_attribute("column_end", column_end)
		v.serialize_attribute("column_start", column_start)
		v.serialize_attribute("line_end", line_end)
		v.serialize_attribute("line_start", line_start)
		var file = self.file
		if file != null then
			v.serialize_attribute("file", file.filename)
		end
	end
end

redef class MModule
	redef fun core_serialize_to(v) do
		super
	end
end

redef class MClass
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mparameters", mparameters)
		if v isa FullJsonSerializer then
			v.serialize_attribute("intro", intro)
		end
	end
end

redef class MClassDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_intro", is_intro)
		v.serialize_attribute("mparameters", mclass.mparameters)
	end
end

redef class MProperty
	redef fun core_serialize_to(v) do
		super
		if v isa FullJsonSerializer then
			v.serialize_attribute("intro", intro)
		end
	end
end

redef class MMethod
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_init", is_init)
		v.serialize_attribute("msignature", intro.msignature)
	end
end

redef class MAttribute
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("static_mtype", intro.static_mtype)
	end
end

redef class MVirtualTypeProp
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mvirtualtype", mvirtualtype)
		v.serialize_attribute("bound", intro.bound)
	end
end

redef class MPropDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("is_intro", is_intro)
	end
end

redef class MMethodDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("msignature", msignature)
	end
end

redef class MAttributeDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("static_mtype", static_mtype)
	end
end

redef class MVirtualTypeDef
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("bound", bound)
		v.serialize_attribute("is_fixed", is_fixed)
	end
end

redef class MType
	redef fun core_serialize_to(v) do
		v.serialize_attribute("class_name", class_name)
		v.serialize_attribute("name", name)
		v.serialize_attribute("mdoc", mdoc_or_fallback)
	end
end

redef class MSignature
	redef fun core_serialize_to(v) do
		v.serialize_attribute("arity", arity)
		v.serialize_attribute("mparams", mparameters)
		v.serialize_attribute("return_mtype", return_mtype)
		v.serialize_attribute("vararg_rank", vararg_rank)
	end
end

redef class MParameterType
	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("rank", rank)
		v.serialize_attribute("mtype", mclass.intro.bound_mtype.arguments[rank])
	end
end

redef class MParameter
	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("is_vararg", is_vararg)
		v.serialize_attribute("mtype", mtype)
	end
end

# Use the FullJsonSerializer to generate the full json representation of a MEntity.
#
# See MEntity::to_full_json.
class FullJsonSerializer
	super JsonSerializer
end
