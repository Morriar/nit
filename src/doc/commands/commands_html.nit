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

# Render commands results as HTML
module commands_html

import commands::commands_graph
import commands::commands_usage
import commands::commands_ini
import commands::commands_main

import templates::templates_html
import doc_down
import highlight

redef class DocCommand

	# Render results as a HTML string
	fun to_html: Writable do return "<p class='text-danger'>Not yet implemented</p>"
end

redef class CmdMessage

	# Render the message as a HTML string
	fun to_html: Writable is abstract
end

redef class CmdError
	redef fun to_html do return "<p class='text-danger'>Error: {to_s}</p>"
end

redef class CmdWarning
	redef fun to_html do return "<p class='text-warning'>Warning: {to_s}</p>"
end

# Model commands

redef class CmdEntity
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""
		return mentity.html_link
	end
end

redef class CmdLink
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""
		return mentity.html_link(text, title)
	end
end

redef class CmdEntities
	redef fun to_html do
		var mentities = self.results
		if mentities == null then return ""

		var tpl = new Template
		tpl.add "<ul>"
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			tpl.add "<li>"
			tpl.add mentity.html_link
			if mdoc != null then
				tpl.add " - "
				tpl.add mdoc.html_synopsis
			end
			tpl.add "</li>"
		end
		tpl.add "</ul>"
		return tpl.write_to_string
	end
end

redef class CmdComment
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""

		var mdoc = self.mdoc
		var tpl = new Template
		tpl.add "<h3>"
		# FIXME comments left here until I figure out what to do about the presentation options
		# if not opts.has_key("no-link") then
			tpl.add mentity.html_link
		# end
		if mdoc != null then
			# if not opts.has_key("no-link") and not opts.has_key("no-synopsis") then
				tpl.add " - "
			# end
			# if not opts.has_key("no-synopsis") then
				tpl.add mdoc.html_synopsis
			# end
		end
		tpl.add "</h3>"
		if mdoc != null then
			# if not opts.has_key("no-comment") then
				tpl.add mdoc.html_comment
			# end
		end
		return tpl.write_to_string
	end
end

redef class CmdEntityCode
	redef fun to_html do
		var output = render_code(node)
		if output == null then return ""
		return "<pre>{output.write_to_string}</pre>"
	end
end

# Graph commands

redef class CmdGraph
	redef fun to_html do
		var output = render
		if output == null then return ""
		return output.write_to_string
	end
end

# Ini commands

redef class CmdIniDescription
	redef fun to_html do
		var desc = self.desc
		if desc == null then return ""

		return "<p>{desc}</p>"
	end
end

redef class CmdIniGitUrl
	redef fun to_html do
		var url = self.url
		if url == null then return ""

		return "<a href=\"{url}\">{url}</a>"
	end
end

redef class CmdIniCloneCommand
	redef fun to_html do
		var url = self.url
		if url == null then return ""

		return "<pre>git clone {url}</pre>"
	end
end

redef class CmdIniIssuesUrl
	redef fun to_html do
		var url = self.url
		if url == null then return ""

		return "<a href=\"{url}\">{url}</a>"
	end
end

redef class CmdIniMaintainer
	redef fun to_html do
		var name = self.maintainer
		if name == null then return ""

		return "<b>{name.html_escape}</b>"
	end
end

redef class CmdIniContributors
	redef fun to_html do
		var names = self.contributors
		if names == null or names.is_empty then return ""

		var tpl = new Template
		tpl.add "<ul>"
		for name in names do
			tpl.add "<li><b>{name.html_escape}</b></li>"
		end
		tpl.add "</ul>"
		return tpl.write_to_string
	end
end

redef class CmdIniLicense
	redef fun to_html do
		var license = self.license
		if license == null then return ""

		return "<a href=\"https://opensource.org/licenses/{license}\">{license}</a>"
	end
end

redef class CmdLicenseFile
	redef fun to_html do
		var file = self.file
		if file == null then return ""

		return "<a href=\"{file}\">{file.basename}</a>"
	end
end

redef class CmdContribFile
	redef fun to_html do
		var file = self.file
		if file == null then return ""

		return "<a href=\"{file}\">{file.basename}</a>"
	end
end

# Main commands

redef class CmdMainCompile
	redef fun to_html do
		var file = self.file
		if file == null then return ""

		return "<pre>nitc {file.filename}</pre>"
	end
end

redef class CmdManSynopsis
	redef fun to_html do
		var synopsis = self.synopsis
		if synopsis == null then return ""

		return "<pre>{synopsis}</pre>"
	end
end

redef class CmdManOptions
	redef fun to_html do
		var options = self.options
		if options == null or options.is_empty then return ""

		var tpl = new Template
		tpl.addn "<pre>"
		tpl.addn "<table>"
		for opt, desc in options do
			tpl.addn "<tr>"
			tpl.addn "<th valign='top'>{opt}</th>"
			tpl.addn "<td>{desc}</td>"
			tpl.addn "</tr>"
		end
		tpl.addn "</table>"
		tpl.addn "</pre>"

		return tpl.write_to_string
	end
end

redef class CmdTesting
	redef fun to_html do
		var test_entities = self.results
		if test_entities == null then return ""

		var tests = new Array[String]
		for test_entity in test_entities do
			var file = test_entity.location.file
			if file == null then continue
			tests.add file.filename
		end

		return "<pre>nitunit {tests.join(" ")}</pre>"
	end
end
