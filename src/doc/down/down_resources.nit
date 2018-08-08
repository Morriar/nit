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

module down_resources

import down_base

class CheckResourcesPhase
	super MdPhase

	redef fun process_ast(context, document) do
		var v = new CheckResourcesPhaseVisitor(self, context)
		v.enter_visit(document)
	end

	fun process_resource(context: MEntity, node: MdLinkOrImage) do
		# Keep absolute links as is
		var link = node.destination
		if link.has_prefix("http://") or link.has_prefix("https://") then return

		# Try from mentity context
		do
			var source = context.location.file
			if source == null then break
			var path = source.filename
			var stat = path.file_stat
			if stat == null then break
			if not stat.is_dir then path = path.dirname

			var fulllink = path / link.to_s
			if not check_file(fulllink) then break
			node.nit_file = fulllink.to_path
			return
		end

		# Try from local context
		do
			var fulllink = "." / link.to_s
			if not check_file(fulllink) then break
			node.nit_file = fulllink.to_path
			return
		end

		# Something went bad
		md_warn(context, node.location, "doc-resources",
			"Cannot find local resource `{link}`")
	end

	private fun check_file(path: String): Bool do
		# TODO check allowed files
		return path.file_stat != null
	end
end

private class CheckResourcesPhaseVisitor
	super MdVisitor

	var phase: CheckResourcesPhase
	var context: MEntity

	# Visit each `MdImage`
	redef fun visit(node) do
		if node isa MdLinkOrImage then
			phase.process_resource(context, node)
		end
		node.visit_all(self)
	end
end

class CopyResourcesPhase
	super MdPhase

	# Output directory where files are copied
	var output_directory: String

	# Path to the tmp resource directory
	var resources_path = "." is optional

	redef fun process_ast(context, document) do
		var v = new CopyResourcesPhaseVisitor(self, context)
		v.enter_visit(document)
	end
end

private class CopyResourcesPhaseVisitor
	super MdVisitor

	var phase: CopyResourcesPhase
	var context: MEntity

	# Visit each `MdLink` and `MdImage`
	redef fun visit(node) do
		if not node isa MdLinkOrImage then return

		var path = node.nit_file
		if path == null then return
		if path.is_dir then return
		var fulllink = path.to_s

		# Get a collision-free catalog name for the resource
		var hash = fulllink.md5
		var ext = fulllink.file_extension
		if ext != null then hash = hash + "." + ext

		# Copy the local resource in the resource directory of the catalog
		var out_dir = phase.output_directory / "resources"
		out_dir.mkdir
		fulllink.file_copy_to(out_dir / hash)

		# Hijack the link in the Markdown.
		node.original_destination = node.destination
		node.destination = phase.resources_path / "resources" / hash

		super
	end
end

redef class MdLinkOrImage
	var nit_file: nullable Path = null

	var original_destination: String = destination is lazy
end
