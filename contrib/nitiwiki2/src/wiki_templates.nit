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

module wiki_templates

import wiki_markdown
import template::macro

redef class Wiki
	var default_template_file: nullable String = null is writable

	# Wiki's default template
	#
	# A wiki may have a default template to render the pages.
	# The format of this template and how it is used if left to clients.
	var default_template: nullable PageTemplate is lazy, writable do
		var template_path = default_template_file
		if template_path == null then return null
		return load_template(root_dir / template_path)
	end

	private fun load_template(path: String): nullable PageTemplate do
		if not path.file_exists then return null
		return new PageTemplate(path.to_path.read_all)
	end

	redef fun configure_from_ini(ini) do
		super
		default_template_file = ini["wiki.template"] or else default_template_file
	end
end

redef class Section
	var default_template_file: nullable String = null is writable

	# Section default template
	#
	# A section may have a default template to render the pages it containts.
	# The format of this template and how it is used if left to clients.
	var default_template: nullable PageTemplate is lazy, writable do
		var template_path = default_template_file
		if template_path == null then return null
		return wiki.load_template(wiki.root_dir / template_path)
	end

	# Template to apply to this section content (recursive)
	#
	# The template can be `default_template` or the parent `template` is any.
	fun template: nullable PageTemplate do
		if default_template != null then return default_template
		var parent = self.section
		if parent == null then return wiki.default_template
		return parent.template
	end

	redef fun configure_from_ini(ini) do
		super
		default_template_file = ini["section.template"] or else default_template_file
	end
end

redef class MdPage
	fun template: nullable PageTemplate do
		var parent = self.section
		if parent == null then return wiki.default_template
		return parent.template
	end
end

# A Page template
#
# Page content can be wrapped with a template.
# Page templates can use macros (see `PageVars`) to display generated
# variables from the Wiki such as dates, versions, strings etc.
class PageTemplate

	# Template string
	var string: String

	# Compile `string` as a Template string
	#
	# All the macros from the template `string` are replaced by `vars`.
	fun compile(vars: TemplateVars): Template do
		var tpl = new TemplateString(string)
		if tpl.has_macro("BODY") then
			tpl.replace("BODY", vars.body or else "")
		end
		return tpl
	end
end

# PageTemplate Vars
class TemplateVars
	# Page title
	var title: nullable String = null is optional, writable

	# Page content
	var body: nullable String = null is optional, writable

	# TODO wiki title
	# TODO subtitle?
	# TODO logo?

	# TODO root path
	# TODO assets path
	# TODO section_title
	# TODO section_link

	# TODO trail
	# TODO menu
	# TODO summary
	# TODO year
	# TODO date
	# TODO gen_time
end

