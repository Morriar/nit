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

module model_ranking_base

import model

# ModelRanking is basically an array that can be sorted ModelRankers.
#
# It contains MEntityRanks that holds mentities linked to their calculated rank.
class ModelRanking
	super Array[MEntityRank]

	init from_mentities(collection: Array[MEntity]) do
		for mentity in collection do
			add new MEntityRank(mentity)
		end
	end

	fun rank(ranker: ModelRanker) do
		ranker.rank self
		ranker.sort self
	end

	fun to_mentities: Array[MEntity] do
		var res = new Array[MEntity]
		for rank in self do
			res.add rank.mentity
		end
		return res
	end
end

class MEntityRank

	var mentity: MEntity
	var rank = 0.0

	redef fun to_s do return "{mentity} ({rank})"
end

abstract class ModelRanker
	super Comparator

	redef type COMPARED: MEntityRank

	redef fun compare(a, b) do return b.rank <=> a.rank

	fun rank(ranking: ModelRanking) do
		for rank in ranking do
			rank.rank = rank_mentity(rank.mentity)
		end
	end

	# Compute the rank of the concerns.
	#
	# The rank is calculated differently by all subclasses.
	fun rank_mentity(mentity: MEntity): Float do
		if mentity isa MPackage then
			return rank_mpackage(mentity)
		else if mentity isa MGroup then
			return rank_mgroup(mentity)
		else if mentity isa MModule then
			return rank_mmodule(mentity)
		else if mentity isa MClass then
			return rank_mclass(mentity)
		else if mentity isa MClassDef then
			return rank_mclassdef(mentity)
		else if mentity isa MProperty then
			return rank_mproperty(mentity)
		else if mentity isa MPropDef then
			return rank_mpropdef(mentity)
		end
		return 0.0
	end

	# Rank a MPackage
	protected fun rank_mpackage(mpackage: MPackage): Float do return 0.0

	# Rank a MGroup
	#
	# The default behaviour for a group is to aggregate the rank of its modules
	protected fun rank_mgroup(mgroup: MGroup): Float do
		var w = 0.0
		for mmodule in mgroup.mmodules do
			w += rank_mmodule(mmodule)
		end
		return w
	end

	# Weight a MModule
	protected fun rank_mmodule(mmodule: MModule): Float do return 0.0

	# Weight a MClass
	#
	# The default behaviour for a class is to aggregate the rank of its mclassdefs
	protected fun rank_mclass(mclass: MClass): Float do
		var w = 0.0
		for mclassdef in mclass.mclassdefs do
			w += rank_mclassdef(mclassdef)
		end
		return w
	end

	# Weight a MClassDef
	protected fun rank_mclassdef(mclassdef: MClassDef): Float do return 0.0

	# Weight a MProperty
	# The default behaviour for a property is to aggregate the rank of its mpropdefs
	protected fun rank_mproperty(mprop: MProperty): Float do
		var w = 0.0
		for mpropdef in mprop.mpropdefs do
			w += rank_mpropdef(mpropdef)
		end
		return w
	end

	# Weight a MPropdef
	protected fun rank_mpropdef(mpropdef: MPropDef): Float do return 0.0
end
