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

module model_ranking_misc

import model_ranking_base

# Always set rank to `0`.
#
# Dummy ranker used to reproduce the model order.
class NoneRanker
	super ModelRanker

	# Keep original order.
	redef fun sort(mentities) do end

	redef fun rank_mentity(concern) do return 0.0
end

# Set a random rank.
#
# Dummy ranker used to produce the *worst* possible result.
#
# Weight is between `0.0` and `100.0`.
class RandomRanker
	super ModelRanker

	redef fun rank_mentity(concern) do return 100.0.rand
end

# Weight entities following alphabetical ordering of names.
class AlphaRanker
	super ModelRanker

	redef fun compare(a, b) do return a.mentity.name <=> b.mentity.name
end

# Weight entities following code declaration order.
#
# Classdefs and Properties are ranked following `location.line_start`.
# Modules are ranked following the alphabetical order (as seen in the IDE).
class NaturalRanker
	super ModelRanker

	# Comparator used for package, group and module names.
	var alpha_comparator = new AlphaRanker

	redef fun compare(a, b) do
		if a isa MClassDef and b isa MClassDef and a.mmodule == b.mmodule then
			return super
		else if a isa MPropDef and b isa MPropDef and a.mclassdef == b.mclassdef then
			return super
		end
		return alpha_comparator.compare(a, b)
	end

	redef fun rank_mclassdef(mclassdef) do
		return 1.0 / mclassdef.location.line_start.to_f
	end

	redef fun rank_mpropdef(mpropdef) do
		return 1.0 / mpropdef.location.line_start.to_f
	end
end

# Use heuristics to sort MProperties.
#
# Mproperties are sorted in this order:
# 1. Virtual Types
# 2. Attributes
# 3. Inits
# 4. Methods (intro)
# 5. Methods (redefs)
class HeuristicalRanker
	super NaturalRanker

	redef fun compare(a, b) do
		if a isa MVirtualTypeDef and (b isa MAttributeDef or b isa MMethodDef) then
			return -1
		else if a isa MAttributeDef and b isa MMethodDef then
			return -1
		else if a isa MMethodDef and b isa MMethodDef then
			if a.mproperty.is_init and not b.mproperty.is_init then
				return -1
			else if a.is_intro and not b.is_intro then
				return -1
			end
		else if a isa MMethodDef and not b isa MMethodDef then
			return 1
		end
		return super
	end
end
