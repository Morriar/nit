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

# Provides facilities of exporting a `Model` to a UML class diagram
module uml_class

import uml_base
import model::model_collect

redef class UMLModel
	# Generates a UML class diagram from a `Model`
	fun generate_class_uml: Writable do
		var tpl = new Template
		tpl.add "digraph G \{\n"
		tpl.add """	fontname = "Bitstream Vera Sans"
				fontsize = 8
				node [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
					shape = "record"
				]

				edge [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
				]\n"""
		for mclass in model.collect_mclasses(filter) do
			tpl.add mclass.to_uml(self)
			tpl.add "\n"
		end
		tpl.add "\}"
		return tpl
	end
end

redef class MClass

	redef fun to_uml(model) do
		var name = name.escape_to_dot
		var t = new Template
		t.add "{name} [\n label = \"\{"
		if kind == abstract_kind then
			t.add "abstract\\n{name}"
		else if kind == interface_kind then
			t.add "interface\\n{name}"
		else
			t.add "{name}"
		end
		if arity > 0 then
			t.add "["
			for i in [0..mparameters.length[ do
				if i > 0 then t.add ", "
				t.add mparameters[i].to_uml(model)
			end
			t.add "]"
		end
		if model.show_attributes then
			var mattributes = collect_intro_mattributes(model.filter)
			if mattributes.not_empty then
				t.add "|"
				for i in mattributes do
					t.add i.to_uml(model)
					t.add "\\l"
				end
			end
		end
		if model.show_methods then
			var mmethods = collect_intro_mmethods(model.view)
			if mmethods.not_empty then
				t.add "|"
				for i in mmethods do
					t.add i.to_uml(model)
					t.add "\\l"
				end
			end
		end
		t.add "\}\"\n]\n"
		var g = in_hierarchy(model.mainmodule).direct_greaters
		for i in g do
			if not model.filter.accept_mentity(i) then continue
			t.add "{i.name} -> {name} [dir=back"
			if i.kind == interface_kind then
				t.add " arrowtail=open style=dashed"
			else
				t.add " arrowtail=empty"
			end
			t.add "];\n"
		end
		return t
	end

end

redef class MMethod
	redef fun to_uml(model) do
		var tpl = new Template
		if model.show_visibility then
			tpl.add visibility.to_uml
			tpl.add " "
		end
		tpl.add name.escape_to_dot
		var msignature = intro.msignature
		if msignature != null then
			tpl.add msignature.to_uml(model)
		end
		return tpl
	end
end

redef class MSignature
	redef fun to_uml(model) do
		var t = new Template
		t.add "("
		for i in [0..mparameters.length[ do
			if i > 0 then t.add ", "
			t.add mparameters[i].name.escape_to_dot
			if model.show_types then
				t.add ": "
				t.add mparameters[i].mtype.to_uml(model)
			end
		end
		t.add ")"
		var return_mtype = self.return_mtype
		if model.show_types and return_mtype != null then
			t.add ": "
			t.add return_mtype.to_uml(model)
		end
		return t
	end
end

redef class MAttribute
	redef fun to_uml(model) do
		var tpl = new Template
		if model.show_visibility then
			tpl.add visibility.to_uml
			tpl.add " "
		end
		tpl.add name.escape_to_dot
		if model.show_types then
			tpl.add ": "
			tpl.add intro.static_mtype.as(not null).to_uml(model)
		end
		return tpl
	end
end

redef class MVisibility
	# Returns the visibility as a UML token
	#
	#    assert public_visibility.to_uml == "+"
	#    assert private_visibility.to_uml == "-"
	fun to_uml: Writable do
		if self == private_visibility then
			return "-"
		else if self == protected_visibility then
			return "#"
		else if self == public_visibility then
			return "+"
		else
			return "+"
		end
	end
end

redef class MClassType
	redef fun to_uml(model) do
		return name
	end
end

redef class MGenericType
	redef fun to_uml(model) do
		var t = new Template
		t.add name.substring(0, name.index_of('['))
		t.add "["
		for i in [0..arguments.length[ do
			if i > 0 then t.add ", "
			t.add arguments[i].to_uml(model)
		end
		t.add "]"
		return t
	end
end

redef class MParameterType
	redef fun to_uml(model) do
		var t = new Template
		t.add name.escape_to_dot
		if model.show_types then
			t.add ": "
			t.add mclass.intro.bound_mtype.arguments[rank].to_uml(model)
		end
		return t
	end
end

redef class MVirtualType
	redef fun to_uml(model) do
		return name
	end
end

redef class MNullableType
	redef fun to_uml(model) do
		var t = new Template
		t.add "nullable "
		t.add mtype.to_uml(model)
		return t
	end
end
