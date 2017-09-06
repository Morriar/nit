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

# Check the documentation of all modules, classes and properties.
module check_mdoc

import modelize_class
import modelize_property
import markdown

redef class ToolContext
	var mdoc_phase: Phase = new MDocPhase(self, [modelize_class_phase, modelize_property_phase])
end

private class MDocPhase
	super Phase

	fun process_mdoc(ndoc: ADoc): CheckMDocDecorator do
		var proc = new MarkdownProcessor
		var decorator = new CheckMDocDecorator(toolcontext)
		proc.emitter.decorator = decorator

		var text = ndoc.to_mdoc.content.join("\n")
		proc.process(text)

		return decorator
	end

	redef fun process_nmodule(nmodule) do
		var mmodule = nmodule.mmodule
		if mmodule == null then return

		var ndecl = nmodule.n_moduledecl
		if ndecl == null then return

		var ndoc = ndecl.n_doc
		if ndoc == null then return

		var v = process_mdoc(ndoc)
		if not v.has_example then
			toolcontext.modelbuilder.advice(nmodule, "missing-example",
				"Documentation warning: No example provided for module `{mmodule}`")
		end
	end

	redef fun process_nclassdef(nclassdef) do
		var mclassdef = nclassdef.mclassdef
		if mclassdef == null then return
		var mclass = mclassdef.mclass

		if nclassdef isa AStdClassdef then
			var ndoc = nclassdef.n_doc
			if ndoc != null and mclassdef.is_intro and mclass.visibility >= public_visibility then
				var v = process_mdoc(ndoc)
				if not v.has_example then
					toolcontext.modelbuilder.advice(nclassdef, "missing-example",
						"Documentation warning: No example provided for public class `{mclass}`")
				end
				var n_formaldefs = nclassdef.n_formaldefs
				for n_formaldef in n_formaldefs do
					var pname = n_formaldef.n_id.text
					if not v.refs_to.has(pname) then
						toolcontext.modelbuilder.advice(n_formaldef, "missing-doc",
							"Documentation warning: Undocumented formal parameter `{pname}`")
					end
				end
			else if ndoc == null and mclassdef.is_intro and mclass.visibility >= public_visibility then
				toolcontext.modelbuilder.advice(nclassdef, "missing-doc",
					"Documentation warning: Undocumented public class `{mclass}`")
			end
		end
	end

	redef fun process_npropdef(npropdef) do
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return
		var mproperty = mpropdef.mproperty

		var ndoc = npropdef.n_doc
		if ndoc != null and mpropdef.is_intro and mproperty.visibility >= protected_visibility then
			var v = process_mdoc(ndoc)
			if not v.has_example then
				toolcontext.modelbuilder.advice(npropdef, "missing-example",
					"Documentation warning: No example provided for public property `{mproperty}`")
			end
			if npropdef isa AMethPropdef then
				var n_signature = npropdef.n_signature
				if n_signature != null then
					for param in n_signature.n_params do
						var pname = param.n_id.text
						if not v.refs_to.has(pname) then
							toolcontext.modelbuilder.advice(param, "missing-doc",
								"Documentation warning: Undocumented parameter `{pname}`")
						end
					end
				end
			end
		else if ndoc == null and mpropdef.is_intro and mproperty.visibility >= protected_visibility and mpropdef.name != "new" then
			toolcontext.modelbuilder.advice(npropdef, "missing-doc",
				"Documentation warning: Undocumented property `{mpropdef.mproperty}`")
		end
	end
end

private class CheckMDocDecorator
	super HTMLDecorator

	var toolcontext: ToolContext

	var has_example = false

	var refs_to = new HashSet[String]

	redef fun add_code(v, block) do
		has_example = true
	end

	redef fun add_span_code(v, text, from, to) do
		var code = code_from_text(text, from, to)
		refs_to.add code
	end

	fun code_from_text(buffer: Text, from, to: Int): String do
		var out = new FlatBuffer
		for i in [from..to[ do out.add buffer[i]
		return out.write_to_string
	end
end
