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
end
