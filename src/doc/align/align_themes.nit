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

class MdAlignThemes
	super MdAligner
	super MdSectionVisitor

	redef fun visit_section(section) do
		var title = section.title
		if title == null then
			super
			return
		end

		var parent = section.parent
		if parent == null then
			super
			return
		end

		var text = title.raw_text

		if parent.is_root then
			section.md_theme = new MdThemeTitle
		else if match_license(title, text) then
			section.md_theme = new MdThemeIntro
		else
			section.md_theme = new MdThemeOther
		end
		super
	end

	redef fun visit(node) do
		node.visit_all(self)

		if node isa MdBlock then
			if has_code(node) then
				node.md_themes.add new MdThemeAPI
			end
		end

		if node isa MdListBlock then
			if node isa MdUnorderedList then
				node.md_themes.add new MdThemeFeatures
			end
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
	var re_title_usage: Regex = "(usage)".to_re
	var re_title_features: Regex = "(feature|content)".to_re
	var re_title_examples: Regex = "(example)".to_re
	var re_title_todos: Regex = "(todo)".to_re
	var re_title_tests: Regex = "(test|nitunit)".to_re
	var re_title_contrib: Regex = "(contribute|contributing)".to_re
	var re_title_authors: Regex = "(credit|contributor|author)".to_re
	var re_title_license: Regex = "(license|licensing|copyright)".to_re
	var re_title_refs: Regex = "(reference|see)".to_re

	fun align_heading(node: MdHeading) do
		var text = node.raw_text
		var ltxt = text.to_lower

		if ltxt.has(re_title_intro) then
			node.md_themes.add new MdThemeIntro
		else if ltxt.has(re_title_install) then
			node.md_themes.add new MdThemeInstall
		else if ltxt.has(re_title_usage) then
			node.md_themes.add new MdThemeUsage
		else if ltxt.has(re_title_features) then
			node.md_themes.add new MdThemeFeatures
		else if ltxt.has(re_title_todos) then
			node.md_themes.add new MdThemeTODO
		else if ltxt.has(re_title_examples) then
			node.md_themes.add new MdThemeExamples
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

		if ltxt.has(re_title_intro) then
			node.md_themes.add new MdThemeIntro
		else if ltxt.has(re_title_install) then
			node.md_themes.add new MdThemeInstall
		else if ltxt.has(re_title_usage) then
			node.md_themes.add new MdThemeUsage
		else if ltxt.has(re_title_features) then
			node.md_themes.add new MdThemeFeatures
		else if ltxt.has(re_title_todos) then
			node.md_themes.add new MdThemeTODO
		else if ltxt.has(re_title_examples) then
			node.md_themes.add new MdThemeExamples
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
		end
	end

	fun align_blockcode(node: MdCodeBlock) do
		if node isa MdIndentedCodeBlock then
			node.md_themes.add new MdThemeExamples
		else if node isa MdFencedCodeBlock then
			var lang = node.info
			if lang == null then
				node.md_themes.add new MdThemeExamples
			else
				lang = lang.to_lower
				if lang == "nit" or lang == "nitish" then
					node.md_themes.add new MdThemeExamples
				else if lang == "bash" or lang == "sh" then
					var literal = node.literal
					if literal != null and literal.has(re_title_tests) then
						node.md_themes.add new MdThemeTests
					else
						node.md_themes.add new MdThemeInstall
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

	# TODO Propagate
		# Intro text
		# Features by API
		# List by todo

	var re_author: Regex = "[A-Z][a-z]+ [A-Z][a-z]+".to_re

	fun match_author_name(text: String): Bool do return text.has(re_author)

	var re_authors: Regex = "(credit|contributor|author)".to_re
	fun match_author_title(text: String): Bool do return text.to_lower.has(re_authors)

	fun match_license(node: MdNode, text: String): Bool do
		return text.to_lower.has("license")
	end
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

class MdThemeInstall
	super MdTheme
	redef fun to_s do return "install"
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
