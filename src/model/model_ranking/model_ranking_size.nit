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

# TOC generation approaches based on size
#
# Size is a generic concept here where it can be about the number of line of code,
# the number of line of documentation or the number of properties.
#
# See included analysis for more details.
module model_ranking_size

import model_ranking_base
import frontend

# Weight concerns based on their size.
# TODO excludes intros / redefs?
class SizeRanker
	super ModelRanker

	# Rank = mmodule.mclassdefs.length
	redef fun rank_mmodule(mmodule) do
		return mmodule.mclassdefs.length.to_f
	end

	# Rank = mclassdef.mpropdefs.length
	redef fun rank_mclassdef(mclassdef) do
		return mclassdef.mpropdefs.length.to_f
	end

	redef fun rank_mpropdef(mpropdef) do
		if mpropdef isa MMethod then
			var msignature = mpropdef.intro.msignature
			if msignature == null then return 0.0
			return msignature.arity.to_f
		end
		return 0.0
	end
end

# Weight concerns based on the number of line of code
#
# TODO exclude lod from loc?
class LOCRanker
	super ModelRanker

	# Model builder used to access AST.
	var modelbuilder: ModelBuilder

	redef fun rank_mmodule(mmodule) do
		var amod = modelbuilder.mmodule2node(mmodule)
		if amod == null then return 0.0
		var file = amod.location.file
		if file == null then return 0.0
		return (file.line_starts.length).to_f
	end

	redef fun rank_mclassdef(mclassdef) do
		var loc = mclassdef.location
		return (loc.line_end - loc.line_start).to_f
	end

	redef fun rank_mpropdef(mpropdef) do
		var loc = mpropdef.location
		return (loc.line_end - loc.line_start).to_f
	end
end

# Weight concerns based on the number of line of documentation
class LODRanker
	super ModelRanker

	redef fun rank_mpackage(mentity) do
		var doc = mentity.mdoc
		if doc == null then return 0.0
		return doc.content.length.to_f
	end

	redef fun rank_mmodule(mentity) do
		var doc = mentity.mdoc
		if doc == null then return 0.0
		return doc.content.length.to_f
	end

	redef fun rank_mclassdef(mentity) do
		var doc = mentity.mdoc
		if doc == null then return 0.0
		return doc.content.length.to_f
	end

	redef fun rank_mpropdef(mentity) do
		var doc = mentity.mdoc
		if doc == null then return 0.0
		return doc.content.length.to_f
	end
end
