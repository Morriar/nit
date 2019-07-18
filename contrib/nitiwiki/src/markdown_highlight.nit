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

# Extends the wiki with an external highlighter (or any processor) for code blocks
module markdown_highlight
import wiki_links

redef class WikiConfig
	# External highlighter command called to process block code.
	#
	# * key: `wiki.highlighter`
	# * default: empty string, that means no external highlighter
	# * example: `highlight --fragment -S "$1" --inline-css --enclose-pre`
	#
	# The external highlighter is a shell command invoked with `sh -c`.
	# The meta information of the fence is passed as `$1`.
	# *Important*: `$1` is given as is, thus is tainted. You SHOULD protect it with quotes in the command.
	#
	# By default, the highlighter is only called on fenced block code with a meta information.
	# See `wiki.highlighter.default` to force the invocation of the highlighter on any code block.
	#
	# The output of the command will be inserted as is in the generated document.
	# Therefore it is expected that the command returns a valid, complete and balanced HTML fragment.
	# If the highlighter returns nothing (empty output), the internal rendering is used as a fall-back
	# (as if the option was not set).
	#
	# Advanced usages can invoke a custom shell script instead of a standard command to
	# check the argument, filter it, dispatch to various advanced commands, implement ad-hoc behaviors, etc.
	var highlighter: String is lazy do
		return value_or_default("wiki.highlighter", "")
	end

	# Default meta (i.e. language) to use to call the external highlighter.
	#
	# * key: `wiki.highlighter.default`
	# * default: empty string, that means no default meta information.
	# * example: `nit`
	#
	# When set, this configuration forces the external highlighter (see `wiki.highlighter`)
	# to be called also on basic code block (with the indentation) and plain fenced code
	# blocks (without meta information).
	#
	# The value is used as the `$1` argument of the configured highlighter command.
	#
	# Note: has no effect if `wiki.highlighter` is not set.
	var highlighter_default: String is lazy do
		return value_or_default("wiki.highlighter.default", "")
	end
end

redef class WikilinksProcessor
	redef fun visit(node) do
		if not node isa MdCodeBlock then
			super
			return
		end

		var highlighter = wiki.config.highlighter

		# No highlighter, then defaults
		if highlighter.is_empty then
			super
			return
		end

		var code = node.literal
		if code == null then
			super
			return
		end

		print code

		var meta = wiki.config.highlighter_default
		if node isa MdFencedCodeBlock then
			meta = node.info or else meta
		end
		print meta
		print "-----"

		# No meta nor forced meta, then defaults
		if meta.is_empty then
			super
			return
		end

		# Execute the command
		wiki.logger.debug "Executing `{highlighter}` `{meta}` (in {context.src_path.as(not null)})"
		var proc = new ProcessDuplex("sh", "-c", highlighter, "", meta.to_s)
		var res = proc.write_and_read(code)
		if proc.status != 0 then
			wiki.logger.warn "`{highlighter}` `{meta}` returned {proc.status} (in {context.src_path.as(not null)})"
		end

		# Check the result
		if res.is_empty then
			# No result, then defaults
			wiki.logger.debug "  `{highlighter}` produced nothing, process internally instead (in {context.src_path.as(not null)})"
			super
			return
		end

		node.code = res
	end
end

redef class MdCodeBlock

	# Parsed code with highlighting tags
	var code: nullable String = null

	redef fun render_html(v) do
		var info = self.info
		v.add_line
		v.add_raw "<pre>"
		v.add_raw "<code"
		if info != null and not info.is_empty then
			v.add_raw " class=\"language-{info.split(" ").first}\""
		end
		v.add_raw ">"
		var literal = self.literal
		var code = self.code
		if code != null then
			v.add_raw code
		else if literal != null then
			var lines = literal.split("\n")
			for i in [0..lines.length[ do
				var line = lines[i]
				v.add_raw v.html_escape(line, false)
				if i < lines.length - 1 then
					v.add_raw "\n"
				end
			end
		end
		v.add_raw "</code>"
		v.add_raw "</pre>"
		v.add_line
	end
end
