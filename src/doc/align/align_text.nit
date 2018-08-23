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

module align_text

import align_refs

class MdAlignTexts
	super MdAligner

	# var sep_re: Regex = "[\n\t ,.?!~`@#$%^&*()+=/\\|\"':;><-]".to_re
	var sep_re: Regex = "[\n\t ,.]".to_re

	redef fun align_document(document) do
		super
		# var filter = new MdPreferPackages
		# filter.filter_document(document)
	end

	redef fun visit(node) do
		if not node isa MdText then
			node.visit_all(self)
			return
		end
		var text = node.literal
		for word in text.split(sep_re) do
			if word.trim.is_empty then continue
			node.md_refs.add_all align_word(node, word)
		end
	end

	var stopwords = ["from", "new", "to", "code", "all", "set", "output", "other"]

	fun align_word(node: MdText, original_word: String): ArraySet[MdRefMEntity] do
		var res = new ArraySet[MdRefMEntity]

		var word = original_word
		if word.length <= 1 then return res
		# if stopwords.has(word.to_lower) then return res
		if word.to_lower.has("examp") then word = "examples"
		if word.to_lower.has("test") then word = "tests"

		# Direct match
		var direct_matches = new HashSet[MEntity]
		var mentities = model.mentities_by_name(word)
		for mentity in mentities do
			if mentity isa MClassDef then continue
			if mentity isa MPropDef then continue
			if mentity isa MProperty then
				if mentity.name.length <= 2 then continue
				if stopwords.has(mentity.name) then continue
				if not context.has_mentity(mentity) then continue
			end
			res.add new MdRefText(node, mentity, original_word)
			direct_matches.add mentity
		end

		# Lemma match
		var name = model.lemmatize_name(word)
		for mentity in model.mentities_by_lemma(name) do
			if direct_matches.has(mentity) then continue
			if mentity isa MClassDef then continue
			if mentity isa MPropDef then continue
			if mentity isa MProperty then
				if mentity.name.length <= 2 then continue
				if stopwords.has(mentity.name) then continue
				if not context.has_mentity(mentity) then continue
			end
			res.add new MdRefText(node, mentity, original_word)
		end

		return res
	end
end

class MdRefText
	super MdRefMEntity

	var string: String
end

class MdFilterPackageName
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]

		for ref in refs do
			if not ref isa MdRefText then
				keep.add ref
				continue
			end
			var mentity = ref.mentity
			if mentity isa MPackage then
				var dist = ref.string.to_lower.levenshtein_distance(mentity.name.to_lower)
				if dist > 0 then continue
			end
			keep.add ref
		end

		return keep
	end
end


class MdFilterNameDistance
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]

		for ref in refs do
			if not ref isa MdRefText then
				keep.add ref
				continue
			end
			var mentity = ref.mentity
			if mentity isa MPackage then
				var ldist = ref.string.to_lower.levenshtein_distance(mentity.name.to_lower)
				if ldist > 0 then continue
			end
			keep.add ref
		end

		return keep
	end
end


class MdFilterNameConflictsDistance
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]

		var name_conflicts = new HashMap[String, Array[MdRefText]]
		for ref in refs do
			if not ref isa MdRefText then
				keep.add ref
				continue
			end
			if not name_conflicts.has_key(ref.string) then
				name_conflicts[ref.string] = new Array[MdRefText]
			end
			name_conflicts[ref.string].add ref
		end

		for name, conflicts in name_conflicts do
			if conflicts.length == 1 then
				keep.add conflicts.first
				continue
			end

			# Name as a conflict
			var other = new Array[MdRefText]
			var mclasses = new Array[MdRefText]
			var mprops = new Array[MdRefText]
			for ref in conflicts do
				var mentity = ref.mentity
				var ldist = name.to_lower.levenshtein_distance(mentity.name.to_lower)
				if ldist > 1 then continue
				var dist = name.levenshtein_distance(mentity.name)
				if dist == 0 or mentity isa MClass then
					if mentity isa MProperty then
						mprops.add ref
					else if mentity isa MClass then
						mclasses.add ref
					else
						other.add ref
					end
				end
			end

			keep.add_all other
			keep.add_all mclasses
			if other.is_empty and mclasses.is_empty then keep.add_all mprops
		end

		return keep
	end
end

# Resolve conflicts between modules, packages and groups
class MdPreferPackages
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, refs) do
		var keep = new Array[MdRefMEntity]
		var keep_mentities = new HashSet[MEntity]

		# Keep all packages
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MPackage then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep groups only if not the root of a already kept package
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MGroup then continue
			if keep_mentities.has(mentity.mpackage) then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep mmodules only if not already in a kept package or group
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MModule then continue
			var mgroup = mentity.mgroup
			if mgroup != null then
				if keep_mentities.has(mgroup) then continue
				if keep_mentities.has(mgroup.mpackage) then continue
			end
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep all classes
		# var keep_classes = new HashMap[String, MEntity]
		for ref in refs do
			var mentity = ref.mentity
			if not mentity isa MClass then continue
			keep.add ref
			keep_mentities.add mentity
		end

		# Keep all properties
		# for ref in refs do
			# var mentity = ref.mentity
			# if not mentity isa MProperty then continue
			# keep.add ref
			# keep_mentities.add mentity
		# end

		return keep
	end
end

class MdFilterLocalBlock
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, md_refs) do
		if not node isa MdBlock then return md_refs

		var refs = node.all_model_refs

		var span_refs = new HashSet[MEntity]
		var text_refs = new HashSet[MdRefText]

		for ref in refs do
			if ref isa MdRefText then
				text_refs.add ref
			else
				span_refs.add ref.mentity
			end
		end

		if span_refs.not_empty and text_refs.not_empty then
			print span_refs
			print text_refs
		end

		return refs
	end


	#	for theme in node.md_themes do
	#		# print theme
	#		if theme isa MdThemePackage then
	#			res.add_all filter_packages.collect(refs)
	#		end
	#		if theme isa MdThemeGroup then
	#			res.add_all filter_groups.collect(refs)
	#		end
	#		if theme isa MdThemeModule then
	#			res.add_all filter_modules.collect(refs)
	#		end
	#		if theme isa MdThemeClass then
	#			res.add_all filter_classes.collect(refs)
	#		end
	#	end
    #
	#	for theme in node.md_themes do
	#		if theme isa MdThemeIntro or theme isa MdThemeTitle then
	#			res.add_all filter_packages.collect(refs)
	#			return res
	#		end
	#	end
    #
	#	for theme in node.md_themes do
	#		if theme isa MdThemeExamples then
	#			res.add_all filter_examples.collect(refs)
	#		else if theme isa MdThemeTests then
	#			res.add_all filter_tests.collect(refs)
	#		else if theme isa MdThemeAuthors or theme isa MdThemeLicense then
	#			return new Array[MdRefMEntity]
	#		else if theme isa MdThemeFeatures or theme isa MdThemeAPI then
	#			res.add_all filter_packages.collect(refs)
	#			res.add_all filter_groups.collect(refs)
	#			res.add_all filter_modules.collect(refs)
	#			res.add_all filter_classes.collect(refs)
	#		end
	#	end
    #
	#	if res.is_empty then return refs
    #
	#	return res
	# end

	# var filter_packages = new MdCollectKindG[MPackage]
	# var filter_groups = new MdCollectKindG[MGroup]
	# var filter_modules = new MdCollectKindG[MModule]
	# var filter_classes = new MdCollectKindG[MClass]
	# var filter_tests = new MdCollectTests
	# var filter_examples = new MdCollectExamples
end

# TODO propagate refs
	# TODO spans refs
	# TODO up down
	# TODO down up

# Filter context

	# mprops
		# localcontext and supercontext has class
	# mclass
		# localcontext and supercontext has module/group/package
	# module
		# localcontext and super context has group/package
	# group
		# localcontext and super context has package
	# package
		# always
