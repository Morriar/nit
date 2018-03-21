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

module doc_suggest

import doc_parser
import doc::commands
import doc::commands::commands_json
import model::model_nlp

class SuggestionEngine

	var view: ModelView
	var modelbuilder: ModelBuilder
	var index: ModelNLPIndex

	var target_name: nullable String

	var doc: DocModel

	var target: nullable MEntity is lazy do
		var target_name = self.target_name
		if target_name == null then return null
		var target = view.mentity_by_full_name(target_name)
		if target == null then
			var targets = view.mentities_by_name(target_name)
			if targets.not_empty then target = targets.first
		end
		return target
	end

	var sorter = new CardSorter

	var last_debug: nullable DebugMode = null

	fun doc_suggestions(doc: DocModel, cursor: nullable nitc::Location): Array[DocCard2] do
		var debug = new DebugMode
		var suggest = new Array[DocCard2]

		# TODO errors and warnings
		# TODO top level cards
		# suggest.add_all toplevel_suggestions

		if cursor != null then
			debug.line = cursor.line_start
			debug.char = cursor.column_start

			var block = doc.block_at(cursor) or else doc
			debug.current_block = block

			# if suggest.is_empty then
				suggest.add_all block_suggestions(block)
			# end
		# else
			# var block = doc
			# debug.current_block = block
		end

		# debug.current_section = block
		# debug.current_sentence = sentence
		# debug.current_refs = block.all_refs.to_a
		# debug.current_targets = extract_targets(block.all_refs).keys.to_a
		# debug.found_cards = block.all_cards.to_a
		last_debug = debug

		return suggest
	end

	fun toplevel_suggestions: Array[DocCard2] do
		var cards = new Array[DocCard2]

		var target_name = self.target_name
		var target = self.target
		if target_name == null and doc.is_empty then
			# TODO suggest form metrics instead of rand
			var mpackages = view.mpackages.to_a
			mpackages.shuffle
			var suggestions = new Array[String]
			for mentity in mpackages.subarray(0, 3) do
				suggestions.add mentity.full_name
			end
			cards.add new CardSuggestTargets(1.0, suggestions)
		else if target_name != null and target == null then
			var suggestions = new Array[String]
			for mentity in view.find(target_name, 3) do
				suggestions.add mentity.full_name
			end
			cards.add new CardBadTarget(1.0, target_name, suggestions)
		else if doc.is_empty and target != null then
			cards.add new CardTipBegin(1.0, target)
		else if target_name != null and doc.all_subsections.is_empty then
			cards.add new CardTipHeadings(1.0, target_name)
		else if doc.all_refs.is_empty and doc.all_cards.is_empty then
			cards.add new CardTipRefs(1.0)
		end
		return cards
	end

	fun block_suggestions(block: DocBlock): Array[DocCard2] do
		var cards = new Array[DocCard2]
		# TODO extract block target
		var mentities = block_mentities(block)
		for mentity, score in mentities do
			for card in mentity_suggestions(mentity, score) do
				if cards.has(card) then continue
				cards.add card
			end
		end
		sorter.sort(cards)
		for card in cards do print "{card.command_string}: {card.score}"
		return cards
	end

	# Extract `mentities` relevant to the current `block`
	fun block_mentities(block: DocBlock): ArrayMap[MEntity, Float] do
		var mentities = new ArrayMap[MEntity, Float]
		for ref in block.refs do
			var cmd = new CmdEntity(view, mentity_name = ref)
			var res = cmd.init_command
			if res isa CmdSuccess then mentities[cmd.mentity.as(not null)] = 1.0
		end
		for match, score in nlp_matches(block) do
			if not mentities.has_key(match) then mentities[match] = score
		end
		return mentities
	end

	fun mentity_suggestions(mentity: MEntity, mentity_score: Float): Array[DocCard2] do
		var cards = new Array[DocCard2]

		var cmd = new CmdEntity(view, mentity = mentity)
		var res = cmd.init_command
		if res isa CmdSuccess then cards.add new CardEntity(cmd, mentity_score)
		cards.add_all suggest_examples(mentity, mentity_score - 0.001)
		cards.add_all suggest_uml(mentity, mentity_score - 0.002)
		# TODO suggest list
		return cards
	end

	fun suggest_examples(mentity: MEntity, base_score: Float): Array[CardExample] do
		var cards = new Array[CardExample]

		var cmd = new CmdExamples(view, modelbuilder, mentity, format = "html")
		var res = cmd.init_command
		if res isa CmdSuccess then
			for example in cmd.results.as(not null) do
				var ecmd = new CmdEntityCode(view, modelbuilder, mentity = example.mentity, format = "html")
				ecmd.init_command
				cards.add new CardExample(ecmd, base_score - cards.length.to_f / 100.0)
				break
			end
		end

		return cards
	end

	fun suggest_uml(mentity: MEntity, base_score: Float): Array[CardUML] do
		var cards = new Array[CardUML]

		if mentity isa MProperty or mentity isa MPropDef then return cards

		var cmd = new CmdInheritanceGraph(view, mentity, format = "svg")
		var res = cmd.init_command
		if res isa CmdSuccess then
			cards.add new CardUML(cmd, base_score - cards.length.to_f / 100.0)
		end

		return cards
	end

	# fun suggest_features(target: MEntity): nullable CardFeatures do
	#	var features = new Array[MEntity]
    #
	#	var filters = new ModelFilter(
	#		protected_visibility, false, true, false, false, false)
	#	var view = new ModelView(self.view.model, self.view.mainmodule, filters)
    #
	#	if target isa MPackage then
	#		features.add_all target.collect_mgroups(view)
	#		features.add_all target.collect_mmodules(view)
	#	else if target isa MGroup then
	#		features.add_all target.collect_mgroups(view)
	#		features.add_all target.collect_mmodules(view)
	#	else if target isa MModule then
	#		features.add_all target.collect_local_mclassdefs(view)
	#	else if target isa MClass then
	#		features.add_all target.collect_intro_mproperties(view)
	#	else if target isa MClassDef then
	#		features.add_all target.collect_mpropdefs(view)
	#	end
	#	return new CardFeatures(1.0, target, features)
	# end

	# fun suggest_license(target: MPackage): nullable CardLicense do
	#	var ini = target.ini
	#	if ini == null then return null
	#	var license = ini["package.license"]
	#	if license == null then return null
	#	return new CardLicense(0.9, target, license)
	# end

		# var target = section_target(doc, section)
		# if target != null then
		#	suggest.add new DocMEntity(1.0, target)
        #
		#	var usage = suggest_usage(target)
		#	if usage != null then suggest.add usage
        #
		#	var features = suggest_features(0.8, target)
		#	if features != null then suggest.add features
		# end

		# if target isa MPackage then
		#	# Add mentity
		#	# Add features
		#	# Add usage
		# else if target isa MGroup then
		# else if target isa MModule then
		# else if target isa MClass then
		# else if target isa MClassDef then
		# else if target isa MProperty then
		# else if target isa MPropDef then
		# end

		# for mentity in section.mentities do
		# end

	# fun suggest(doc: DocContext, line_pos: nullable Int): Array[DocCard2] do
	#	var suggest = new Array[DocCard2]
    #
	#	if doc.is_empty then
	#		suggest.add new DocTipEmpty(1.0, [view.mpackages.rand, view.mpackages.rand])
	#		suggest.add new DocTipHeadings(0.9)
	#		suggest.add new DocTipQuickLinks(0.8)
	#		suggest.add new DocTipCards(0.7)
	#		return suggest
	#	end
    #
	#	var s= doc.section_at_line(line_pos or else 0)
	#	for section in doc.sections do
	#		if line_pos != null and s != section then continue
	#		suggest.add_all suggest_section(doc, section)
	#	end
	#	return suggest
	# end

	# fun suggest_usage(mentity: MEntity): nullable DocUsage do
	#	return null
	# end

	fun nlp_matches(block: DocBlock): ArrayMap[MEntity, Float] do
		var res = new ArrayMap[MEntity, Float]
		var target = self.target

		var vector = index.parse_string(block.raw_content)
		var matches = index.match_vector(vector)
		for match in matches do
			var mentity = view.mentity_by_full_name(match.document.title)
			if mentity == null then continue
			if target != null and not target.has_mentity(view, mentity) then continue
			if res.has_key(mentity) then continue
			res[mentity] = match.similarity
			if res.length >= 5 then break
		end
		return res
	end

	# fun extract_targets(mentities: Collection[MEntity]): Counter[MEntity] do
	#	# extract mproperties
	#	var mproperties = new Counter[MProperty]
	#	var mprops_rest = new HashSet[MEntity]
	#	for mentity in mentities do
	#		if mentity isa MProperty then
	#			mproperties.inc mentity
	#		else if mentity isa MPropDef then
	#			mproperties.inc mentity.mproperty
	#		else
	#			mprops_rest.add mentity
	#		end
	#	end
	#	if mproperties.length == 1 and mprops_rest.is_empty then return mproperties
    #
	#	# extract mclasses
	#	var mclasses = new Counter[MClass]
	#	var mclasses_rest = new HashSet[MEntity]
	#	for mentity in mprops_rest do
	#		if mentity isa MClass then
	#			mclasses.inc mentity
	#		else if mentity isa MClassDef then
	#			mclasses.inc mentity.mclass
	#		else
	#			mclasses_rest.add mentity
	#		end
	#	end
	#	for mproperty, value in mproperties do
	#		mclasses[mproperty.intro_mclassdef.mclass] += value
	#	end
	#	if mclasses.length == 1 and mclasses_rest.is_empty then return mclasses
    #
	#	# extract modules
	#	var mmodules = new Counter[MModule]
	#	var mmodules_rest = new HashSet[MEntity]
	#	for mentity in mclasses_rest do
	#		if mentity isa MModule then
	#			mmodules.inc mentity
	#		else
	#			mmodules_rest.add mentity
	#		end
	#	end
	#	for mclass, value in mclasses do
	#		mmodules[mclass.intro_mmodule] += value
	#	end
	#	if mmodules.length == 1 and mmodules_rest.is_empty then return mmodules
    #
	#	# extract groups
	#	var mgroups = new Counter[MGroup]
	#	var mgroups_rest = new HashSet[MEntity]
	#	for mentity in mmodules_rest do
	#		if mentity isa MGroup then
	#			mgroups.inc mentity
	#		else
	#			mgroups_rest.add mentity
	#		end
	#	end
	#	for mmodule, value in mmodules do
	#		var mgroup = mmodule.mgroup
	#		if mgroup == null then continue
	#		mgroups[mgroup] += value
	#	end
	#	if mgroups.length == 1 and mgroups_rest.is_empty then return mgroups
    #
	#	# extract packages
	#	var mpackages = new Counter[MPackage]
	#	for mentity in mgroups_rest do
	#		if mentity isa MPackage then mpackages.inc mentity
	#	end
	#	for mgroup, value in mgroups do
	#		mpackages[mgroup.mpackage] += value
	#	end
	#	return mpackages
	# end
end

class DebugMode
	serialize

	var line: nullable Int = null
	var char: nullable Int = null
	var current_section: nullable DocSection = null
	var current_block: nullable DocBlock = null
	# var current_sentence: nullable String = null
	var current_refs = new Array[MEntity]
	var current_targets = new Array[MEntity]
	var found_cards = new Array[String]
end

class CardSorter
	super Comparator

	redef type COMPARED: DocCard2

	redef fun compare(a, b) do return b.score <=> a.score
end

redef class DocBlock
	var suggestions = new ArraySet[DocCard2]
end

redef class DocComposite
	redef fun suggestions do
		var res = new ArraySet[DocCard2]
		for block in content do res.add_all block.suggestions
		return res
	end
end

abstract class DocCard2
	serialize

	var score: Float

	# Code command to insert
	fun command_string: String is abstract

	redef fun to_s do return "{command_string}({score})"

	redef fun ==(o) do
		if o isa DocCard2 then return command_string == o.command_string
		return super
	end

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("kind", class_name)
		v.serialize_attribute("command_string", command_string)
	end
end

abstract class CardCommand
	super DocCard2
	serialize
	autoinit(command, score)

	type CMD: DocCommand

	var command: CMD

	redef fun command_string do return command.to_s

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("command_options", command.to_json_options)
	end
end

# Scafolding

class CardFeatures
	super DocCard2
	serialize

	var mentity: MEntity

	var features: Array[MEntity]

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("features", features)
	end

	redef var command_string = "[[list: {mentity.full_name} | features]]" is lazy
end

class CardUsage
	super DocCard2
	serialize

	redef var command_string = "[[usage]]"
end

class CardLicense2
	super DocCard2
	serialize

	var license: String

	redef var command_string is lazy do return "[[license: {license}]]"

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("license", license)
	end
end

class CardTesting2
	super DocCard2
	serialize

	var mentity: MEntity

	redef var command_string is lazy do return "[[tests: {mentity.full_name}]]"
end

# Free doc

class CardEntity
	super CardCommand
	serialize

	redef type CMD: CmdEntity

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mentity", command.mentity)
		var mentity = command.mentity
		var mdoc = null
		if mentity != null then mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			v.serialize_attribute("synopsis", mdoc.html_synopsis.write_to_string)
			if not mdoc.comment.trim.is_empty then
				v.serialize_attribute("doc", mdoc.html_comment.write_to_string)
			end
		end
	end
end

class CardEntityLink
	super CardEntity
	serialize

	redef type CMD: CmdLink
end

class CardExample
	super CardEntity
	serialize

	redef type CMD: CmdEntityCode

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("example", command.to_json)
	end
end

class CardUML
	super CardEntity
	serialize

	redef type CMD: CmdInheritanceGraph

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("svg", command.render)
	end
end


# Tips

abstract class CardTip2
	super DocCard2
	serialize

	var is_tip = true
end

class CardBadTarget
	super CardTip2
	serialize

	var target_name: String

	var suggestions: Array[String]

	redef var command_string = ""
end

class CardSuggestTargets
	super CardTip2
	serialize

	var suggestions: Array[String]

	redef var command_string = ""
end

class CardTipHeadings
	super CardTip2
	serialize

	var target_name: String

	redef var command_string = "# `{target_name}`\n\n" is lazy
end

class CardTipRefs
	super CardTip2
	serialize

	redef var command_string = "[[help: links]]"
end

class CardTipCards
	super CardTip2
	serialize

	redef var command_string = "[[help: cards]]"
end

class CardTipBegin
	super CardTip2
	serialize

	var target: MEntity

	redef var command_string = "# `{target.full_name}`\n\n[[doc: {target.full_name}]]" is lazy
end

class CardTipTarget
	super CardTip2
	serialize

	var target_name: String

	redef var command_string = "[[doc: {target_name}]]" is lazy
end
