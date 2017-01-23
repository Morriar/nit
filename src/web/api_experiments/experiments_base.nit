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

# Nitweb experiment base utilities
module experiments_base

import api_model

# The experiment corpus
class ExpCorpus
	super RepoObject
	serialize

	# Entities stored in that corpus
	var mentities = new Array[String]

	# Get a mentity from `self` or a new one with `50%` chances
	fun get_random(view: ModelView): nullable MEntity do
		var rand = 100.rand
		if rand <= 50 or mentities.is_empty then
			return new_random(view)
		else
			return load_random(view)
		end
	end

	# Load a random mentity from `view` with name in `mentities`
	fun load_random(view: ModelView): nullable MEntity do
		var ref = mentities.rand
		return view.mentity_by_full_name(ref)
	end

	# Select a new random mentity from `view` and register it in `self`
	fun new_random(view: ModelView): nullable MEntity do
		var r = 100.rand
		var mentity: nullable MEntity
		if r <= 25 then
			mentity = random_mpackage(view)
		else if r <= 50 then
			mentity = random_mmodule(view)
		else if r <= 75 then
			mentity = random_mclass(view)
		else
			mentity = random_mproperty(view)
		end
		if mentity != null then
			mentities.add mentity.full_name
		end
		return mentity
	end

	# Return a random package from view
	fun random_mpackage(view: ModelView): nullable MPackage do
		for mpackage in view.mpackages.to_shuffle do
			if mentities.has(mpackage.full_name) then continue
			if not accept_mentity(mpackage) then continue
			return mpackage
		end
		return null
	end

	# Return a random module from view
	fun random_mmodule(view: ModelView): nullable MModule do
		for mmodule in view.mmodules.to_shuffle do
			if mentities.has(mmodule.full_name) then continue
			if not accept_mentity(mmodule) then continue
			return mmodule
		end
		return null
	end

	# Return a random class from view
	fun random_mclass(view: ModelView): nullable MClass do
		for mclass in view.mclasses.to_shuffle do
			if mentities.has(mclass.full_name) then continue
			if not accept_mentity(mclass) then continue
			return mclass
		end
		return null
	end

	# Return a random property from view
	fun random_mproperty(view: ModelView): nullable MProperty do
		for mproperty in view.mproperties.to_shuffle do
			if mentities.has(mproperty.full_name) then continue
			if not accept_mentity(mproperty) then continue
			return mproperty
		end
		return null
	end

	# Can we include `mentity` in this corpus?
	fun accept_mentity(mentity: MEntity): Bool do
		var mdoc = mentity.mdoc_or_fallback
		if mdoc == null then return false
		if mdoc.content.length == 0 then return false
		if mentity isa MModule and mentity.is_test_suite then return false
		if mentity isa MClass then
			if mentity.visibility == private_visibility then return false
			if mentity.name == "Sys" then return false
		end
		if mentity isa MProperty and mentity.visibility == private_visibility then return false
		return true
	end

	# Session creation time
	var created_at: Int = get_time * 1000

	# Is this corpus empty?
	fun is_empty: Bool do return mentities.is_empty
end

# Corpus repository
#
# We only store one corpus for all experiments
class ExpCorpusRepo
	super MongoRepository[ExpCorpus]
end
