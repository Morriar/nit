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

# UML generator in dot format.
module nituml

import modelbuilder
import frontend
import uml

redef class ToolContext

	# Phase that generates UML diagrams from model entities.
	var umlphase: Phase = new UMLPhase(self, null)

	# What to generate?
	var opt_gen = new OptionEnum(["class", "package"], "Choose which type of uml diagram to generate", 0, "--diagram")

	# Generate private?
	var opt_privacy = new OptionBool("Generates private API", "-p", "--private")

	# Show result with dot
	var opt_show = new OptionBool("Show result with dot", "-s", "--show")

	redef init do
		option_context.add_option(opt_gen, opt_privacy, opt_show)
		super
	end
end

private class UMLPhase
	super Phase
	redef fun process_mainmodule(mainmodule, mmodules)
	do
		var view = new ModelView(mainmodule.model,
			min_visibility = if toolcontext.opt_privacy.value then
				private_visibility else protected_visibility,
			include_fictive = false,
			include_empty_doc = true,
			include_test = false,
			include_attribute = true)


		var diagram: UMLDiagram
		if toolcontext.opt_gen.value == 1 then
			var mclassdefs = new Array[MClassDef]
			for mmodule in mmodules do
				mclassdefs.add_all(mmodule.collect_intro_mclassdefs(view))
				mclassdefs.add_all(mmodule.collect_redef_mclassdefs(view))
			end
			diagram = new UMLClassDefDiagram(view, mainmodule)
			diagram.draw(mclassdefs)
		else
			var mclasses = new Array[MClass]
			for mmodule in mmodules do
				mclasses.add_all(mmodule.collect_intro_mclasses(view))
			end
			diagram = new UMLClassDiagram(view, mainmodule)
			diagram.draw(mclasses)
		end
		var dot = diagram.to_dot
		print dot
		if toolcontext.opt_show.value then show_dot(dot)
	end

	# Show dot in graphviz (blocking)
	fun show_dot(dot: Writable) do
		var f = new ProcessWriter("dot", "-Txlib")
		f.write dot.write_to_string
		f.close
		f.wait
	end
end

# process options
var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
