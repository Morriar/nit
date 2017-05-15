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

import nitc::frontend
import nitc::model::model_views
import nitc::model::model_collect
intrude import value_tree
import counter

redef class ToolContext
	var opt_experts_dir = new OptionString("Expert dir", "--experts")

	redef init do
		super
		option_context.add_option opt_experts_dir
	end
end

class Expert
	var dir: String
	var files = new Array[TOCFile]
	fun name: String do return dir.basename

	redef fun to_s do return name
end

class TOCFile
	var expert: Expert
	var file: String

	fun name: String do return file.basename
	fun content: String do return file.to_path.read_all
	fun lines: Array[String] do return content.split("\n")
	fun tree: ValueTree do return new ValueTree.from_file(file)

	redef fun to_s do return file
end

class ExpFiltering

	var view: ModelView
	var exp_dir: String

	var experts = new Array[Expert]

	init do load_files

	# Get expert files from `exp_dir`
	private fun load_files do
		for dir in exp_dir.files do
			var expert = new Expert(exp_dir / dir)
			for file in (exp_dir / dir).files do
				expert.files.add new TOCFile(expert, exp_dir / dir / file)
			end
			experts.add expert
		end
	end

	fun all_files: Array[TOCFile] do
		var all_files = new Array[TOCFile]
		for expert in experts do all_files.add_all expert.files
		return all_files
	end
end

redef class ValueNode
	private fun make_namespace(node: ValueNode): String do
		var name = node.value.trim
		if name.has_prefix("-") or name.has_prefix("*") and not name.length == 1 then
			name = name.substring(1, name.length)
		end
		var parent = node.parent
		if parent != null then
			if node.value.trim.has_prefix("#") then
				return make_namespace(parent)
			end
			return "{make_namespace(parent)}::{name}"
		end
		return "{name}::{name}"
	end
end

redef class ModelView
	fun find_by_namespace(namespace: String): nullable MEntity do
		var parts = namespace.split("::")
		if parts.is_empty then return null

		var mpackage: nullable MPackage = null
		if parts.length >= 1 then
			for mentity in mpackages do
				if mentity.name == parts.first then
					mpackage = mentity
					break
				end
			end
		end
		if mpackage == null or parts.length == 1 then return mpackage
		var mgroup: nullable MGroup = null
		if parts.length >= 2 then
			for mentity in mpackage.mgroups do
				if mentity.name == parts[1] then
					mgroup = mentity
					break
				end
			end
		end
		if mgroup == null or parts.length == 2 then return mgroup

		var mmodule: nullable MModule = null
		if parts.length >= 3 then
			for mentity in mgroup.mmodules do
				if mentity.name == parts[2] then
					mmodule = mentity
					break
				end
			end
		end
		if mmodule == null or parts.length == 3 then return mmodule

		var mclassdef: nullable MClassDef = null
		if parts.length >= 4 then
			for mentity in mmodule.mclassdefs do
				if mentity.name == parts[3] then
					mclassdef = mentity
					break
				end
			end
		end
		if mclassdef == null or parts.length == 4 then return mclassdef

		var mproperty: nullable MProperty = null
		if parts.length >= 5 then
			for mentity in mclassdef.mclass.collect_accessible_mproperties(self) do
				if mentity.name == parts[4] then
					mproperty = mentity
					break
				end
			end
		end
		return mproperty
	end
end


var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

var experts_dir = toolcontext.opt_experts_dir.value
if experts_dir == null then
	print "must specify --experts"
	exit 1
	abort
end

var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

var view = model.private_view
var exp = new ExpFiltering(view, experts_dir)

print "Found {exp.experts.length} experts:"
for expert in exp.experts do print " * {expert}"

print "\nFound {exp.all_files.length} files:"

var lines_counter = new Counter[String]
var kind_counter = new Counter[String]
var expert_counter = new Counter[Expert]
var delete_counter = new Counter[String]

var kinds = ["MPackage", "Mgroup", "MModule", "MClass", "MProperty"]
for file in exp.all_files do
	print " * {file}"

	var tree = file.tree

	# Clean tree
	for id, node in tree.ids do
		var txt = node.value

		if txt.has_prefix("#") then
			for child in node.children do
				child.parent = node.parent
				child.parent.as(not null).children.add child
			end
			tree.remove_node(node)
		end
	end

	var line = 0
	for id, node in tree.ids do
		lines_counter.inc("lines")
		line += 1
		if node.depth >= kinds.length then
			print line
		end
		kind_counter.inc(kinds[node.depth])
		var txt = node.value
		if txt.has_prefix("~~") then
			txt = txt.substring(2, txt.length - 4)
			lines_counter.inc("deleted")
			expert_counter.inc(file.expert)
			delete_counter.inc(kinds[node.depth])

			if txt.has_prefix("-") then
				txt = txt.substring(1, txt.length)
				delete_counter.inc("MProperty (private)")
			else if txt.has_prefix("#") then
				txt = txt.substring(1, txt.length)
				delete_counter.inc("MProperty (protected)")
			end

			if txt.has_prefix("_") then
				delete_counter.inc("MAttribute")
			else if txt.has_suffix("=") then
				delete_counter.inc("MMethod (setter)")
			else
				print txt
				delete_counter.inc("MMethod (getter)")
			end
		end
	end


		# if node.depth == 0 then
		#	counter.inc("MPackage")
		# else if node.depth == 1 then
		#	counter.inc("MModule")
		# else if node.depth == 2 then
		#	counter.inc("MClass")
		# else if node.depth == 3 then
		#	counter.inc("MPropdef")
		# else
		#	counter.inc("unknow")
		# end

		# node.value = node.make_namespace(node)

		# var mentity = view.find_by_namespace(node.value)
		# if mentity == null then
			# print "ERROR: {node.value} not found"
		# end
	# end
	# var lines_after = 0
	# for id, node in tree.ids do
		# lines_after += 1
	# end
	# abort
	# print tree.to_str
end

print "Lines:"
lines_counter.print_elements(lines_counter.length)

print "Kinds:"
kind_counter.print_elements(kind_counter.length)

print "Experts:"
expert_counter.print_elements(expert_counter.length)

print "Deleted Kinds:"
delete_counter.print_elements(delete_counter.length)
