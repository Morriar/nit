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

module wiki_lookup

import wiki_base

redef class Wiki

	fun lookup(query: String, context: nullable Resource): Array[Resource] do
		var child_visitor = new LookupVisitor(query)
		# We look into siblings, then into cousins recursively
		if context != null then
			var section = context.section
			while section != null do
				child_visitor.visit(section)
				section = section.section
			end
			# TODO lookup parent scopes
		end
		# Then we look from root
		child_visitor.visit(root)
		return child_visitor.resources.to_a
	end

	fun did_you_mean(query: String, context: nullable Resource): Array[Resource] do
		var v = new DidYouMeanVisitor(query, context)
		v.visit_wiki(self)
		var suggestions = v.similarities.keys.to_a
		var comparator = new DidYouMeanComparator(v.similarities)
		comparator.sort(suggestions)
		return suggestions
	end
end

class Lookup
	var query: String
	var results = new Array[Resource] is optional
	var did_you_mean = new Array[Resource] is optional
	var limit = 10 is optional
	var did_you_mean_limit = 3 is optional
	# TODO parameters (strict etc...)
	# TODO caching?
	# TODO ranking?
end

private class LookupVisitor
	super WikiVisitor

	var resources = new ArraySet[Resource]
	var done = new Set[Resource]
	var query: String

	# Use a breadth first visit so direct children may appear before descandants in conflicts
	redef fun visit(resource) do
		if done.has(resource) then return
		done.add resource
		# TODO move mathcing to resource

		if resource.match_query(query) then
			resources.add resource
		end
		resource.visit_all(self)
	end
end

redef class Resource
	fun match_query(query: String): Bool do
		return query == path or
			   query == name or
			   query == name.strip_extension or
			   query == pretty_name or
			   query == title
	# TODO pretty path
	# TODO md title
	# TODO should strip extension from config
	# else if resource isa MdPage then
	#	for ext in resource.wiki.allowed_md_exts do
	#		if resource.name.strip_extension(ext) == query then
	#			resources.add resource
	#		end
	#	end
	end
end

private class DidYouMeanVisitor
	super WikiVisitor

	var query: String
	var context: nullable Resource
	var similarities = new HashMap[Resource, Int]

	redef fun visit(resource) do
		if resource isa Root or resource == context then
			resource.visit_all(self)
			return
		end

		var sim = query.levenshtein_distance(resource.name)
		var title = resource.title
		if title != null then
			var sim_title = query.levenshtein_distance(title)
			if sim_title < sim then sim = sim_title
		end
		similarities[resource] = sim
		resource.visit_all(self)
	end
end

private class DidYouMeanComparator
	super Comparator

	var similarities: HashMap[Resource, Int]

	redef type COMPARED: Resource

	redef fun compare(a, b) do return similarities[a] <=> similarities[b]
end
