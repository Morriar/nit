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

module down_images

import down_base

redef class ToolContext
	var mdoc_images_phase = new PhaseImages(self, [mdoc_phase])
end

class PhaseImages
	super MDocPhase

	redef fun process_mdoc(mdoc) do
		# TODO Extract exemples
		# TODO Check exemples
		# TODO warn
	end
end

class MDocProcessImages
	super MdPostProcessor

	# ToolContext to display errors
	var toolcontext = new ToolContext is lazy

	# Output directory where files are copied
	var output_directory: String

	# Path to the tmp resource directory
	var resources_path: String

	# Visit each `MdImage`
	redef fun visit(node) do
		var document = self.document
		if document == null then return

		var mdoc = document.mdoc
		if mdoc == null then return

		if node isa MdImage then
			# Keep absolute links as is
			var link = node.destination
			if link.has_prefix("http://") or link.has_prefix("https://") then return

			do
				# Get the directory of the doc object to deal with the relative link
				var source = mdoc.location.file
				if source == null then break
				var path = source.filename
				var stat = path.file_stat
				if stat == null then break
				if not stat.is_dir then path = path.dirname

				# Get the full path to the local resource
				var fulllink = path / link.to_s
				stat = fulllink.file_stat
				if stat == null then break

				# Get a collision-free catalog name for the resource
				var hash = fulllink.md5
				var ext = fulllink.file_extension
				if ext != null then hash = hash + "." + ext

				# Copy the local resource in the resource directory of the catalog
				var out_dir = output_directory / "resources"
				out_dir.mkdir
				fulllink.file_copy_to(out_dir / hash)

				# Hijack the link in the Markdown.
				node.destination = resources_path / "resources" / hash

				super
				return
			end

			# Something went bad
			toolcontext.error(mdoc.location, "Error: cannot find local image `{link}`")
			super
			return
		end
		super
	end
end
