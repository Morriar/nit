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

module align_themes

import align_structure
import align_refs
import align_text

class MdAlignThemes
	super MdAligner
	super MdSectionVisitor

	redef fun visit(node) do
		node.visit_all(self)

		if node isa MdBlock then
			if has_md_ref(node) then
				node.md_themes.add new MdThemeAPI
			end
		end

		if node isa MdListBlock then
			node.md_themes.add new MdThemeFeatures
		end

		if node isa MdHeading then
			var section = node.md_section
			if section != null then
				var parent = section.parent
				if parent != null and parent.is_root then
					node.md_themes.add new MdThemeTitle
					return
				end
			end
			align_heading(node)
			# var text = node.raw_text
			# if match_author_title(text) then
				# node.md_themes.add new MdThemeAuthor
			# end
		else if node isa MdCodeBlock then
			align_blockcode(node)
		else if node isa MdParagraph then
			align_paragraph(node)
		else if node isa MdBlock then
			# node.md_themes.add new MdThemeOther
		end
		# if node isa MdDocument then
			# visit_document(node)
			# return
		# end
		# if not node isa MdText then
			# node.visit_all(self)
			# return
		# end
		# var text = node.literal
		# for word in text.split(sep_re) do
			# if word.trim.is_empty then continue
			# node.md_refs.add_all align_word(node, word)
		# end
	end

	var re_title_intro: Regex = "(preview|intro|provide)".to_re
	var re_title_install: Regex = "(pre-req|prereq|dependenc|install|set-up|setup)".to_re
	var re_title_usage: Regex = "(compile|usage)".to_re
	var re_title_features: Regex = "(feature|content|service)".to_re
	var re_title_examples: Regex = "(example)".to_re
	var re_title_todos: Regex = "(todo|known|bug)".to_re
	var re_title_tests: Regex = "(test|nitunit)".to_re
	var re_title_contrib: Regex = "(contribute|contributing)".to_re
	var re_title_authors: Regex = "(credit|contributor|author)".to_re
	var re_title_license: Regex = "(license|licensing|copyright)".to_re
	var re_title_refs: Regex = "(reference|see)".to_re
	var re_nit_tools: Regex = "(nit)[a-z]+".to_re

	fun align_heading(node: MdHeading) do
		var text = node.raw_text
		var ltxt = text.to_lower

		if ltxt.has(re_title_intro) then
			node.md_themes.add new MdThemeIntro
		else if ltxt.has(re_title_examples) then
			node.md_themes.add new MdThemeExamples
		else if ltxt.has(re_title_install) or ltxt.has(re_title_usage) then
			node.md_themes.add new MdThemeUsage
		else if ltxt.has(re_title_features) then
			node.md_themes.add new MdThemeFeatures
		else if ltxt.has(re_title_todos) then
			node.md_themes.add new MdThemeTODO
		else if ltxt.has(re_title_contrib) then
			node.md_themes.add new MdThemeContribute
		else if ltxt.has(re_title_tests) then
			node.md_themes.add new MdThemeTests
		else if ltxt.has(re_title_authors) then
			node.md_themes.add new MdThemeAuthors
		else if ltxt.has(re_title_license) then
			node.md_themes.add new MdThemeLicense
		else if ltxt.has(re_title_refs) then
			node.md_themes.add new MdThemeRefs
		else
			node.md_themes.add new MdThemeFeatures
		end
	end

	fun align_paragraph(node: MdParagraph) do
		var text = node.raw_text
		var ltxt = text.to_lower

		var section = node.md_section
		if section != null then
			var parent = section.parent
			if parent == null or  parent.is_root then
				node.md_themes.add new MdThemeIntro
			end
		end

		if text.has(re_author) then
			if section != null then
				var title = section.title
				if title != null then
					for theme in title.md_themes do
						if not (theme isa MdThemeLicense or theme isa MdThemeAuthors) then continue
						node.md_themes.add new MdThemeAuthors
					end
				end
			end
		end

		if ltxt.has(re_title_examples) then
			node.md_themes.add new MdThemeExamples
		else if ltxt.has(re_title_install) or ltxt.has(re_title_usage) or text.has(re_nit_tools) then
			node.md_themes.add new MdThemeUsage
		else if ltxt.has(re_title_features) then
			node.md_themes.add new MdThemeFeatures
		else if ltxt.has(re_title_todos) then
			node.md_themes.add new MdThemeTODO
		else if ltxt.has(re_title_contrib) then
			node.md_themes.add new MdThemeContribute
		else if ltxt.has(re_title_tests) then
			node.md_themes.add new MdThemeTests
		else if ltxt.has(re_title_license) then
			node.md_themes.add new MdThemeLicense
		else if ltxt.has(re_title_refs) then
			node.md_themes.add new MdThemeRefs
		end

		if ltxt.has(re_package) then
			node.md_themes.add new MdThemePackage
		end
		if ltxt.has(re_group) then
			node.md_themes.add new MdThemeGroup
		end
		if ltxt.has(re_module) then
			node.md_themes.add new MdThemeModule
		end
		if ltxt.has(re_class) then
			node.md_themes.add new MdThemeClass
		end
	end

	fun align_blockcode(node: MdCodeBlock) do
		if node isa MdIndentedCodeBlock then
			node.md_themes.add new MdThemeExamples
			var blocks = node.prev_blocks
			if blocks.not_empty then
				blocks.first.md_themes.add new MdThemeExamples
			end
			blocks = node.next_blocks
			if blocks.not_empty then
				blocks.first.md_themes.add new MdThemeExamples
			end
		else if node isa MdFencedCodeBlock then
			var lang = node.info
			if lang == null then
				node.md_themes.add new MdThemeExamples
				var blocks = node.prev_blocks
				if blocks.not_empty then
					blocks.first.md_themes.add new MdThemeExamples
				end
				blocks = node.next_blocks
				if blocks.not_empty then
					blocks.first.md_themes.add new MdThemeExamples
				end
			else
				lang = lang.to_lower
				if lang == "nit" or lang == "nitish" then
					node.md_themes.add new MdThemeExamples
				else if lang == "bash" or lang == "sh" then
					var literal = node.literal
					if literal != null and literal.has(re_title_tests) then
						node.md_themes.add new MdThemeTests
					else# if literal != null and literal.has(re_nit_tools) then
						node.md_themes.add new MdThemeUsage
					end
				end
			end
		end
	end


	fun has_code(node: MdNode): Bool do
		var v = new HasCodeVisitor
		v.enter_visit(node)
		return v.has_code
	end

	fun has_md_ref(node: MdNode): Bool do
		var v = new MdRefsVisitor
		v.enter_visit(node)
		return v.refs.not_empty
	end

	# TODO list = features
	# TODO authors
	# TODO Propagate
		# Intro text
		# Features by API
		# Authors
		# List by todo

	var re_author: Regex = " [A-Z][a-z]+ [A-Z][a-z]+".to_re
	var re_package: Regex = "package".to_re
	var re_group: Regex = "group".to_re
	var re_module: Regex = "module".to_re
	var re_class: Regex = "class".to_re
end

redef class MdSection
	var md_theme: nullable MdTheme = null
end

redef class MdBlock
	var md_themes = new Array[MdTheme]
end

abstract class MdTheme
end

class MdThemeTitle
	super MdTheme
	redef fun to_s do return "title"
end

# TODO
class MdThemeIntro
	super MdTheme
	redef fun to_s do return "intro"
end

class MdThemeFeatures
	super MdTheme
	redef fun to_s do return "features"
end

# TODO
class MdThemeUsage
	super MdTheme
	redef fun to_s do return "usage"
end

class MdThemeLicense
	super MdTheme
	redef fun to_s do return "license"
end

class MdThemeAuthors
	super MdTheme
	redef fun to_s do return "authors"
end

class MdThemeAPI
	super MdTheme
	redef fun to_s do return "api"
end

class MdThemeIssues
	super MdTheme
	redef fun to_s do return "issues"
end

class MdThemeContribute
	super MdTheme
	redef fun to_s do return "contribute"
end

class MdThemeTests
	super MdTheme
	redef fun to_s do return "tests"
end

class MdThemeExamples
	super MdTheme
	redef fun to_s do return "examples"
end

class MdThemeTODO
	super MdTheme
	redef fun to_s do return "todo"
end

class MdThemeRefs
	super MdTheme
	redef fun to_s do return "refs"
end

class MdThemePackage
	super MdTheme
	redef fun to_s do return "package"
end

class MdThemeGroup
	super MdTheme
	redef fun to_s do return "group"
end

class MdThemeModule
	super MdTheme
	redef fun to_s do return "module"
end

class MdThemeClass
	super MdTheme
	redef fun to_s do return "class"
end

class MdThemeOther
	super MdTheme
	redef fun to_s do return "other"
end

private class HasCodeVisitor
	super MdVisitor

	var has_code = false

	redef fun visit(node) do
		if node isa MdCode then has_code = true
		node.visit_all(self)
	end
end

private class MdRefsVisitor
	super MdVisitor

	var refs = new Array[MdRef]

	redef fun visit(node) do
		refs.add_all node.md_refs
		node.visit_all(self)
	end
end

class MdFilterLocalTheme
	super MdFilterMEntities

	redef fun filter_mentities_refs(node, md_refs) do
		if not node isa MdBlock then return md_refs

		var refs = node.all_model_refs

		var res = new Array[MdRefMEntity]
		for theme in node.md_themes do
			# print theme
			if theme isa MdThemePackage then
				res.add_all filter_packages.collect(refs)
			end
			if theme isa MdThemeGroup then
				res.add_all filter_groups.collect(refs)
			end
			if theme isa MdThemeModule then
				res.add_all filter_modules.collect(refs)
			end
			if theme isa MdThemeClass then
				res.add_all filter_classes.collect(refs)
			end
		end

		for theme in node.md_themes do
			if theme isa MdThemeIntro or theme isa MdThemeTitle then
				res.add_all filter_packages.collect(refs)
				return res
			end
		end

		for theme in node.md_themes do
			if theme isa MdThemeExamples then
				res.add_all filter_examples.collect(refs)
			else if theme isa MdThemeTests then
				res.add_all filter_tests.collect(refs)
			else if theme isa MdThemeAuthors or theme isa MdThemeLicense then
				return new Array[MdRefMEntity]
			else if theme isa MdThemeFeatures or theme isa MdThemeAPI then
				res.add_all filter_packages.collect(refs)
				res.add_all filter_groups.collect(refs)
				res.add_all filter_modules.collect(refs)
				res.add_all filter_classes.collect(refs)
			end
		end

		if res.is_empty then return refs

		return res
	end

	var filter_packages = new MdCollectKindG[MPackage]
	var filter_groups = new MdCollectKindG[MGroup]
	var filter_modules = new MdCollectKindG[MModule]
	var filter_classes = new MdCollectKindG[MClass]
	var filter_tests = new MdCollectTests
	var filter_examples = new MdCollectExamples
end

class MdCollectKindG[K: MEntity]
	fun collect(refs: Array[MdRefMEntity]): Array[MdRefMEntity] do
		var res = new Array[MdRefMEntity]
		for ref in refs do
			if ref.mentity isa K then res.add ref
		end
		return res
	end
end

class MdCollectTests
	fun collect(refs: Array[MdRefMEntity]): Array[MdRefMEntity] do
		var res = new Array[MdRefMEntity]
		for ref in refs do
			if ref.mentity.is_test then res.add ref
		end
		return res
	end
end

class MdCollectExamples
	fun collect(refs: Array[MdRefMEntity]): Array[MdRefMEntity] do
		var res = new Array[MdRefMEntity]
		for ref in refs do
			if ref.mentity.is_example then res.add ref
		end
		return res
	end
end
