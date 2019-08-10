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

module wiki_builder

import wiki_base
import wiki_html # TODO remove onve moved template?
import ini
import logger

class WikiBuilder

	var logger = new Logger(warn_level) is optional
	var pages_path = "pages/" is optional
	var section_config = "section.ini" is optional
	var allowed_md_exts = ["md"] is optional, writable

	fun build_wiki(root_path: String): nullable Wiki do
		if not root_path.file_exists then return null

		var wiki = new Wiki

		# Load wiki config
		var ini_path = root_path / "nitiwiki.ini"
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found wiki config at {ini_path}"
			# TODO wiki name?
			wiki.assets_dir = ini["wiki.assets"]
			var tpl = ini["wiki.template"]
			if tpl != null then wiki.root.template = load_template(root_path / tpl)
		end

		# Build sections recursively starting from `root_path`
		build_section(wiki.root, root_path / pages_path)

		return wiki
	end

	private fun build_section(section: Section, path: String) do
		# Build config
		var ini_path = path / section_config
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found section config at {ini_path}"

			section.is_hidden = ini["section.hidden"] == "true"
			section.title = ini["section.title"]
			var ini_tpl = ini["section.template"]
			if ini_tpl != null then section.template = load_template(path / ini_tpl)
		end

		# Build children
		var files = path.files
		files_comparator.sort(files)

		for file in files do
			if file == section_config then continue

			var sub_path = (path / file)
			var sub_name = file.strip_extension

			if sub_path.to_path.is_dir then
				# Create a new section
				logger.debug "Found section at {sub_path}"
				var sub_section = new Section(sub_name)
				section.add sub_section
				build_section(sub_section, sub_path)
			else
				# Create a new page
				var ext = if file.has(".") then file.split(".").last else null
				if allowed_md_exts.has(ext) then
					logger.debug "Found page at {sub_path}"
					section.add new MdPage.from_file(sub_name, sub_path)
				else
					logger.debug "Found asset at {sub_path}"
					section.add new Asset(sub_path)
				end
			end
		end
	end

	private fun load_ini(path: nullable String): nullable IniFile do
		if path == null then return null
		if not path.file_exists then return null
		return new IniFile.from_file(path)
	end

	private fun load_template(path: nullable String): nullable PageTemplate do
		if path == null then return null
		if not path.file_exists then return null
		return new PageTemplate(path.to_path.read_all)
	end

	private var files_comparator = new DefaultComparator
end
