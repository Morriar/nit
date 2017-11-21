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

module model_views

import model_visitor
import model_collect

# Provide a configurable view to a model.
#
# This can be useful when you need to filter some mentities from a model
# like private or fictive.
#
# TODO doc usage
class ModelView
	super ModelVisitor

	autoinit(model, mainmodule, filter)

	# The model to view through `self`.
	var model: Model

	# MModule used to flatten mclass hierarchy
	var mainmodule: MModule

	# Searches the MEntity that matches `full_name`.
	fun mentity_by_full_name(full_name: String, filter: nullable ModelFilter): nullable MEntity do
		for mentity in model.collect_mentities(filter) do
			if filter != null and not filter.accept_mentity(mentity) then continue
			if mentity.full_name == full_name then return mentity
		end
		return null
	end

	# Searches the MEntities that matches `full_name`.
	fun mentities_by_name(name: String, filter: nullable ModelFilter): Array[MEntity] do
		var res = new Array[MEntity]
		for mentity in model.collect_mentities(filter) do
			if filter != null and not filter.accept_mentity(mentity) then continue
			if mentity.name == name then res.add mentity
		end
		return res
	end

	# Build an concerns tree with from `self`
	fun to_tree: MEntityTree do
		var v = new ModelTreeVisitor
		v.filter = self.filter
		for mpackage in model.collect_mpackages(filter) do
			v.enter_visit(mpackage)
		end
		return v.tree
	end

	# Build the POSet of `mmodules` importation.
	fun mmodules_poset(mmodules: Set[MModule]): POSet[MModule] do
		return model.mmodule_importation_hierarchy.sub(mmodules)
	end

	# Build the POSet of `mclasses` hierarchy.
	fun mclasses_poset(mainmodule: MModule, mclasses: Set[MClass]): POSet[MClass] do
		return mainmodule.flatten_mclass_hierarchy.sub(mclasses)
	end
end

class LookupNamespaceVisitor
	super ModelVisitor

	var namespace: String

	private var parts: Array[String] is lazy do return namespace.split_with("::")

	var results = new Array[MEntity]

	redef fun visit(mentity) do mentity.accept_namespace_visitor(self)
end

class ModelTreeVisitor
	super ModelVisitor

	var tree = new MEntityTree

	redef fun visit(mentity) do mentity.accept_tree_visitor(self)
end

redef class MEntity
	private fun accept_namespace_visitor(v: LookupNamespaceVisitor) do
		if v.parts.is_empty then return
		if name != v.parts.first then return
		v.parts.shift
		if v.parts.is_empty then
			v.results.add self
			return
		end
		visit_all(v)
	end

	private fun accept_tree_visitor(v: ModelTreeVisitor) do end
end

redef class MPackage
	redef fun accept_tree_visitor(v) do
		v.tree.add(null, self)
		visit_all(v)
	end
end

redef class MGroup
	redef fun accept_tree_visitor(v) do
		var parent = self.parent
		if parent != null then
			v.tree.add(parent, self)
		else
			v.tree.add(mpackage, self)
		end
		visit_all(v)
	end
end

redef class MModule
	redef fun accept_tree_visitor(v) do
		v.tree.add(mgroup, self)
		visit_all(v)
	end
end

redef class MClass
	# We don't want to collect classes from full namespace.
	redef fun accept_namespace_visitor(v) do end
end

redef class MClassDef
	redef fun accept_tree_visitor(v) do
		v.tree.add(mmodule, self)
		visit_all(v)
	end
end

redef class MProperty
	# We don't want to collect properties from full namespace.
	redef fun accept_namespace_visitor(v) do end
end

redef class MPropDef
	redef fun accept_tree_visitor(v) do
		v.tree.add(mclassdef, self)
		visit_all(v)
	end
end
