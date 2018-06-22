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

# Render commands results as Markdown
module md_commands

import commands_docdown

import highlight
intrude import markdown2::markdown_md_rendering

redef class DocCommand

	# Render results as a Markdown string
	fun to_md: Writable do return "**Not yet implemented**"
end

redef class CmdMessage

	# Render the message as a HTML string
	fun to_md: Writable is abstract
end

redef class CmdError
	redef fun to_md do return "**Error: {to_s}**"
end

redef class CmdWarning
	redef fun to_md do return "**Warning: {to_s}**"
end

# Model commands

redef class CmdEntity
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""
		return "`{mentity.name}`"
	end
end

redef class CmdEntities
	redef fun to_md do
		var mentities = self.results
		if mentities == null then return ""

		var tpl = new Template
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			tpl.add "* `{mentity}`"
			if mdoc != null then
				tpl.add " - "
				tpl.add mdoc.md_synopsis
			end
			tpl.add "\n"
		end
		return tpl.write_to_string
	end
end

redef class CmdComment
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""

		var mdoc = self.mdoc
		var tpl = new Template
		tpl.add "### `{mentity}`"
		if mdoc != null then
			tpl.add " - "
			tpl.add mdoc.md_synopsis
		end
		if mdoc != null then
			var comment = mdoc.md_comment.write_to_string
			if not comment.is_empty then
				tpl.add "\n"
				tpl.add "\n"
				tpl.add comment
			end
		end
		return tpl.write_to_string
	end

	redef fun render_comment do
		var mdoc = self.mdoc
		if mdoc == null then return null

		if format == "md" then
			if full_doc then return mdoc.md_documentation
			return mdoc.md_synopsis
		end
		return super
	end
end

redef class CmdEntityLink
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""
		return "`{mentity}`"
	end
end

redef class CmdCode
	redef fun to_md do
		var node = self.node
		if node == null then return ""

		var code = render_code(node)
		var tpl = new Template
		tpl.addn "~~~"
		tpl.add code.write_to_string
		tpl.addn "~~~"
		return tpl.write_to_string
	end

	redef fun render_code(node) do
		if format == "ansi" then
			var hl = new AnsiHighlightVisitor
			hl.highlight_node node
			return hl.result
		end
		return super
	end
end

redef class CmdAncestors
	redef fun to_md do return super # FIXME lin
end

redef class CmdParents
	redef fun to_md do return super # FIXME lin
end

redef class CmdChildren
	redef fun to_md do return super # FIXME lin
end

redef class CmdDescendants
	redef fun to_md do return super # FIXME lin
end

redef class CmdFeatures
	redef fun to_md do return super # FIXME lin
end

redef class CmdLinearization
	redef fun to_md do return super # FIXME lin
end

# Usage commands

redef class CmdNew
	redef fun to_md do return super # FIXME lin
end

redef class CmdCall
	redef fun to_md do return super # FIXME lin
end

redef class CmdReturn
	redef fun to_md do return super # FIXME lin
end

redef class CmdParam
	redef fun to_md do return super # FIXME lin
end

# Graph commands

redef class CmdGraph
	redef fun to_md do
		var output = render
		if output == null then return ""
		return output.write_to_string
	end
end

# Ini commands

redef class CmdIniDescription
	redef fun to_md do
		var desc = self.desc
		if desc == null then return ""

		return desc
	end
end

redef class CmdIniGitUrl
	redef fun to_md do
		var url = self.url
		if url == null then return ""
		return "[{url}]({url})"
	end
end

redef class CmdIniCloneCommand
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~bash"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdIniIssuesUrl
	redef fun to_md do
		var url = self.url
		if url == null then return ""
		return "[{url}]({url})"
	end
end

redef class CmdIniMaintainer
	redef fun to_md do
		var name = self.maintainer
		if name == null then return ""
		return "**{name}**"
	end
end

redef class CmdIniContributors
	redef fun to_md do
		var names = self.contributors
		if names == null or names.is_empty then return ""

		var tpl = new Template
		for name in names do
			tpl.addn "* **{name}**"
		end
		return tpl.write_to_string
	end
end

redef class CmdIniLicense
	redef fun to_md do
		var license = self.license
		if license == null then return ""
		return "[{license}](https://opensource.org/licenses/{license})"
	end
end

redef class CmdEntityFile
	redef fun to_md do
		var file = self.file
		if file == null then return ""
		return "[{file.basename}]({file_url or else ""})"
	end
end

redef class CmdEntityFileContent
	redef fun to_md do
		var content = self.content
		if content == null then return ""

		var tpl = new Template
		tpl.addn "~~~"
		tpl.add content
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

# Main commands

redef class CmdMains
	redef fun to_md do return super # FIXME lin
end

redef class CmdMainCompile
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~bash"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdManSynopsis
	redef fun to_md do
		var synopsis = self.synopsis
		if synopsis == null then return ""

		var tpl = new Template
		tpl.addn "~~~"
		tpl.addn synopsis
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdManOptions
	redef fun to_md do
		var options = self.options
		if options == null or options.is_empty then return ""

		var tpl = new Template
		tpl.addn "~~~"
		for opt, desc in options do
			tpl.addn "* {opt}\t\t{desc}"
		end
		tpl.addn "~~~"

		return tpl.write_to_string
	end
end

redef class CmdTesting
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~bash"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

# MDoc

redef class MDoc

	# Markdown renderer to Markdown
	var mdoc_md_renderer = new MDocMdRenderer is lazy, writable

	# Markdown renderer for inlined Markdown
	var mdoc_md_inline_renderer = new MDocMdInlineRenderer is lazy, writable

	# Renders the synopsis as a Markdown string
	var md_synopsis: Writable is lazy do
		var synopsis = mdoc_synopsis
		if synopsis == null then return ""
		return mdoc_md_inline_renderer.render(synopsis)
	end

	# Renders the comment without the synopsis as a Markdown string
	var md_comment: Writable is lazy do
		mdoc_md_renderer.reset
		for node in mdoc_comment do
			mdoc_md_renderer.enter_visit(node)
			mdoc_md_renderer.md.append "\n"
		end
		return mdoc_md_renderer.md.write_to_string
	end

	# Renders the synopsis and the comment as a Markdown string
	var md_documentation: Writable is lazy do
		return mdoc_md_renderer.render(mdoc_document)
	end
end

# Markdown renderer to Markdown
class MDocMdRenderer
	super MarkdownRenderer
end

# Markdown renderer to inline Markdown
class MDocMdInlineRenderer
	super MDocMdRenderer

	redef fun visit(node) do node.render_md_inline(self)
end

redef class MdNode
	# Render `self` as HTML without any block
	fun render_md_inline(v: MDocMdInlineRenderer) do render_md(v)
end

redef class MdWikilink
	redef fun render_md(v) do
		var command = self.command
		if command == null then return
		v.add_raw command.to_md.write_to_string.r_trim
	end
end
