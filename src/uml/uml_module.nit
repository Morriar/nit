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

# Services for generation of a UML package diagram based on a `Model`
module uml_module

import uml_base
import uml_class

redef class UMLModel
	# Generates a UML package diagram from a `Model`
	fun generate_package_uml: Writable do
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
		tpl.add mainmodule.to_uml(self)
		tpl.add "\}"
		return tpl
	end
end

redef class MModule
	redef fun to_uml(model) do
		var name = self.name.escape_to_dot
		var t = new Template
		t.add "subgraph cluster{name} \{\n"
		t.add "label = \"{name}\"\n"
		for i in mclassdefs do
			if not model.filter.accept_mentity(i) then continue
			t.add i.to_uml(model)
		end
		t.add "\}\n"
		return t
	end
end

redef class MClassDef

	redef fun to_uml(model) do
		var name = self.name.escape_to_dot
		var t = new Template
		t.add "{mmodule.name.escape_to_dot}{name} [\n\tlabel = \"\{"
		if mclass.kind == abstract_kind then
			t.add "abstract\\n{name}"
		else if mclass.kind == interface_kind then
			t.add "interface\\n{name}"
		else
			t.add "{name}"
		end
		if mclass.arity > 0 then
			t.add "["
			var mparameters = mclass.mparameters
			t.add mparameters.first.name
			for i in [1 .. mparameters.length[ do
				t.add ", "
				t.add mparameters[i].name
			end
			t.add "]"
		end
		t.add "|"
		for i in mpropdefs do
			if not i isa MAttributeDef then continue
			if not model.filter.accept_mentity(i) then continue
			t.add i.to_uml(model)
			t.add "\\l"
		end
		t.add "|"
		for i in mpropdefs do
			if not i isa MMethodDef then continue
			if not model.filter.accept_mentity(i) then continue
			t.add i.to_uml(model)
			t.add "\\l"
		end
		t.add "\}\""
		if is_intro then
			t.add "color=\"{model.intro_colour}\""
		else
			t.add "color=\"{model.redef_colour}\""
		end
		t.add "\n]\n"
		var supers = collect_parents(model.view)
		for i in supers do
			if i.mmodule != mmodule then continue
			t.add "{i.mmodule}{i.name} -> {mmodule}{name} [dir=back"
			if i.mclass.kind == interface_kind then
				t.add " arrowtail=open style=dashed"
			else
				t.add " arrowtail=empty"
			end
			t.add "]\n"
		end
		return t
	end
end
