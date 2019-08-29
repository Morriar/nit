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

import wiki_markdown
import logger

class WikiBuilder

	var logger = new Logger(warn_level) is optional

	# TODO move to config
	var section_config = "section.ini" is optional

	# TODO move to config
	var allowed_md_exts = ["md"] is optional, writable

	fun build_wiki(root_dir: String): nullable Wiki do
		if not root_dir.file_exists then return null

		var wiki = new Wiki
		wiki.config.root_dir = root_dir

		# Load wiki config
		var ini_path = root_dir / "nitiwiki.ini"
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found wiki config at {ini_path}"
			# TODO wiki name?
			wiki.config.load_from_ini(ini)

			var tpl = ini["wiki.template"]
			if tpl != null then wiki.default_template = load_template(root_dir / tpl)
		end

		# Build sections recursively starting from `root_path`
		build_section(wiki, wiki.root, root_dir / wiki.config.pages_dir)

		return wiki
	end

	private fun build_section(wiki: Wiki, section: Section, dir: String) do
		# Build config
		var ini_path = dir / section_config
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found section config at {ini_path}"

			section.is_hidden = ini["section.hidden"] == "true"
			section.title = ini["section.title"]
			var ini_tpl = ini["section.template"]
			if ini_tpl != null then section.default_template = load_template(dir / ini_tpl)
		end

		# Build children
		var files = dir.files
		files_comparator.sort(files)

		for file in files do
			if file == section_config then continue

			var sub_path = (dir / file)
			var sub_name = file.strip_extension
			var has_conflict = section.resources_by_name(sub_name).not_empty

			if sub_path.to_path.is_dir then
				# Create a new section
				logger.debug "Found section at {sub_path}"
				var sub_section = new Section(wiki, sub_name)
				section.add sub_section
				build_section(wiki, sub_section, sub_path)
			else
				# Create a new page
				var ext = if file.has(".") then file.split(".").last else null
				if allowed_md_exts.has(ext) then
					logger.debug "Found page at {sub_path}"
					section.add new MdPage.from_file(wiki, sub_path)
				else
					logger.debug "Found asset at {sub_path}"
					section.add new Asset(wiki, null, sub_path)
				end
			end
			if has_conflict then
				logger.warn "Section `{section.path}` already contains a resource named `{sub_name}`"
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
