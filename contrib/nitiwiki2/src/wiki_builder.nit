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

# Build wikis from the file system
#
# TODO ignore hidden files?
module wiki_builder

import wiki_markdown
import logger

redef class Wiki
	# Allowed extensions for Markdown pages
	#
	# Files with allowed extensions are considered as pages, other as assets.
	#
	# Default if `md`.
	var allowed_md_exts = ["md"] is writable

	# ~~~
	# var ini = new IniFile
	# ini["wiki.markdown-exts"] = " a, b, c,d"
	#
	# var wiki = new Wiki
	# wiki.configure_from_ini(ini)
	# assert wiki.allowed_md_exts == ["a", "b", "c", "d"]
	# ~~~
	redef fun configure_from_ini(ini) do
		super

		var array = ini["wiki.markdown-exts"]
		if array == null then return

		allowed_md_exts.clear
		var exts = array.split(",")
		for ext in exts do
			allowed_md_exts.add ext.trim
		end
	end
end

# Build wikis from the file system
class WikiBuilder

	# Logger user to display errors and debug informations
	var logger = new Logger(warn_level) is optional

	# Build Wiki from `root_dir`
	#
	# Return null if the wiki cannot be built.
	fun build_wiki(root_dir: String): nullable Wiki do
		if not root_dir.file_exists then return null

		var wiki = new Wiki(root_dir)

		# Load wiki config
		var ini_path = root_dir / wiki.config_file
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found wiki config at {ini_path}"
			wiki.configure_from_ini(ini)
		end

		# Build sections recursively starting from `root_path`
		build_section(wiki.root, root_dir / wiki.src_dir)

		return wiki
	end

	# Build a `section` content
	#
	# Will build content and sub-sections recursively from `dir`.
	private fun build_section(section: Section, dir: String) do
		# Build config
		var ini_path = dir / section.config_file
		var ini = load_ini(ini_path)
		if ini != null then
			logger.debug "Found section config at {ini_path}"
			section.configure_from_ini(ini)
		end

		# Build children
		var files = dir.files
		files_comparator.sort(files)

		for file in files do
			if file == section.config_file then continue

			var sub_path = (dir / file)
			var sub_name = file.strip_extension
			var has_conflict = section.resources_by_name(sub_name).not_empty

			if sub_path.to_path.is_dir then
				# Create a new section
				logger.debug "Found section at {sub_path}"
				var sub_section = new Section(section.wiki, sub_name)
				section.add sub_section
				build_section(sub_section, sub_path)
			else
				# Create a new page
				var ext = if file.has(".") then file.split(".").last else null
				if section.wiki.allowed_md_exts.has(ext) then
					logger.debug "Found page at {sub_path}"
					section.add new MdPage.from_file(section.wiki, sub_path)
				else
					logger.debug "Found asset at {sub_path}"
					section.add new Asset(section.wiki, sub_path.basename, null)
				end
			end
			if has_conflict then
				logger.warn "Section `{section.path}` already contains a resource named `{sub_name}`"
			end
		end
	end

	# Try to load a INI file from `path`
	#
	# Return null if the file doesn't exist.
	private fun load_ini(path: String): nullable IniFile do
		if not path.file_exists then return null
		return new IniFile.from_file(path)
	end

	# Used to sort files by names
	private var files_comparator = new DefaultComparator
end
