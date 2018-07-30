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

module align_refs

import ref_parser

class MdCodeAlign
	super MdVisitor

	var ref_parser = new MdCodeParser

	var model: Model

	var mainmodule: MModule

	var context: MEntity is noinit

	var spans = new Counter[String]

	fun align_spans(doc: MdDocument, context: MEntity) do
		self.spans.clear
		self.context = context
		enter_visit(doc)
		# for span, count in spans do
			# print "{context}\t{span}\t{count}"
		# end
	end

	redef fun visit(node) do
		if not node isa MdCode then
			node.visit_all(self)
			return
		end
		var ref = ref_parser.parse_code(node)
		if ref == null then return

		spans.inc ref.class_name
		node.md_ref = ref
		ref.align_ref(self)
		ref.sort_refs(self)

		# Parse sign/gen
		# Parse call
	end
end

redef class MdCode
	var md_ref: nullable MdRef = null
end

redef class MdRef
	fun align_ref(v: MdCodeAlign) do end
	fun sort_refs(v: MdCodeAlign) do end
end

redef class MdRefPath

	redef fun align_ref(v) do
		if string.file_exists then
			path = string.to_path
			return
		end
		var file = v.context.location.file
		if file != null then
			var filename = file.filename
			var p = null
			if filename.to_path.is_dir then
				p = filename / string
			else if filename.file_exists then
				p = filename.dirname / string
			end
			if p != null and p.file_exists then
				path = p.to_path
			end
		end
	end
end

redef class MdRefCommand

	redef fun align_ref(v) do
		var parts = string.split(" ")
		if not parts.is_empty then
			self.command = parts.shift
			self.args.add_all parts
		end
	end
end

redef class MdRefName

	redef fun align_ref(v) do
		model_refs.add_all align_name(string, v.model)
	end

	fun align_name(string: String, model: Model): Array[MdRefMEntity] do
		var refs = new Array[MdRefMEntity]
		var mentities = model.mentities_by_name(string)
		for mentity in mentities do
			var confidence = 100.0 / mentities.length.to_f
			refs.add new MdRefMEntity(node, string, confidence, mentity)
		end
		return refs
	end

	fun align_qname(string: String, model: Model, mainmodule: MModule): Array[MdRefMEntity] do
		var refs = new Array[MdRefMEntity]

		# Match full_name
		var mentity = model.mentity_by_full_name(string)
		if mentity != null then return [new MdRefMEntity(node, string, 100.0, mentity)]

		# Match partial name
		var pack_name = null
		var group_name = null
		# var mod_name = null
		var class_name = null
		var prop_name = null

		for part in string.split("::") do
			if part.chars.first.is_upper then
				class_name = part
				continue
			end
			if class_name != null then
				prop_name = part
				continue
			end
			if pack_name == null then
				pack_name = part
				group_name = part
				# mod_name = part
			end
			if group_name == null then
				group_name = part
				# mod_name = part
			end
		end

		var mprops = new Array[MProperty]
		if prop_name != null then
			for mprop in model.mentities_by_name(prop_name) do
				if mprop isa MProperty then mprops.add mprop
			end
		end

		var mclasses = new Array[MClass]
		if class_name != null then
			for mclass in model.mentities_by_name(class_name) do
				if mclass isa MClass then mclasses.add mclass
			end
		end

		for mprop in mprops do
			for mclass in mclasses do
				if mclass.collect_accessible_mproperties(mainmodule).has(mprop) then
					var confidence = 100.0 / mprops.length.to_f
					refs.add new MdRefMEntity(node, string, confidence, mprop)
				end
			end
		end

		return refs
	end

	redef fun sort_refs(v) do

		# Locate conflicts
		var name_conflicts = new HashMap[String, Array[MdRefMEntity]]
		for ref in model_refs do
			var name = ref.mentity.name
			if not name_conflicts.has_key(name) then
				name_conflicts[name] = new Array[MdRefMEntity]
			end
			name_conflicts[name].add ref
		end

		# Remove conflicts
		var res = new Array[MdRefMEntity]
		for name, refs in name_conflicts do
			if refs.length == 1 then
				res.add refs.first
				continue
			end

			# Filter by context
			# var in_context = new Array[MdRefMEntity]
			# for ref in refs do
			#	if v.context.has_mentity(ref.mentity) then
			#		in_context.add ref
			#	end
			# end
			# if in_context.length == 1 then
			#	res.add_all in_context
			#	continue
			# end

			var left = new Array[MdRefMEntity]
			# if in_context.not_empty then
				# left.add_all in_context
			# else
				left.add_all refs
			# end

			# Filter by kind
			var mpackage = null
			var mgroup = null
			var mmodule = null
			# print left
			for ref in left do
				var mentity = ref.mentity
				if mentity isa MPackage then
					mpackage = mentity
				else if mentity isa MGroup then
					mgroup = mentity
				else if mentity isa MModule then
					mmodule = mentity
				end
			end
			for ref in left do
				var mentity = ref.mentity
				if mentity isa MPackage then
					res.add ref
				else if mentity isa MGroup and mpackage == null then
					res.add ref
				else if mentity isa MModule and mpackage == null and mgroup == null then
					res.add ref
				else if mpackage == null and mgroup == null and mmodule == null then
					res.add ref
				end
			end
			# for ref in refs do
				# res.add ref
			# end
		end

		model_refs = res
	end
end

redef class MdRefQName

	redef fun align_ref(v) do
		model_refs.add_all align_qname(string, v.model, v.mainmodule)
	end
end

redef class MdRefSignature

	redef fun align_ref(v) do
		var string = self.string
		string = string.replace("\\(.*\\)".to_re, "")
		string = string.replace("\\[.*\\]".to_re, "")
		string = string.replace(".*\\.".to_re, "")
		if string.has("::") then
			model_refs.add_all align_qname(string, v.model, v.mainmodule)
		else
			model_refs.add_all align_name(string, v.model)
		end
	end
end
