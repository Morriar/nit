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

module wiki_config

import wiki_base

import ini

redef class Wiki
	var config = new WikiConfig is writable # FIXME refinement with optional atttributes
end

class WikiConfig

	var root_dir = "." is optional, writable

	var pages_dir = "pages/" is optional, writable

	# Wiki's assets directory
	# TODO
	#
	# A Wiki may have a directory containing assets used to render its content
	# like images, scripts, stylesheets...
	# How this directory will be used depends on the renderer used.
	# For example, a HTML renderer could simply copy the content of this directory
	# to the `public/` one. Or a server renderer could serve the files in place.
	var assets_dir: nullable String = null is optional, writable

	# Output path
	#
	# Directory where the wiki will be rendered.
	# If it does not exist it will be created.
	var out_dir: String = "out/" is optional, writable

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
	var highlighter: nullable String = null is optional, writable

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
	var highlighter_default: nullable String = null is optional, writable


	fun load_from_ini(ini: IniFile) do
		root_dir = ini["wiki.root"] or else root_dir
		pages_dir = ini["wiki.pages"] or else pages_dir
		assets_dir = ini["wiki.assets"] or else assets_dir
		highlighter = ini["wiki.highlighter"] or else highlighter
		highlighter_default = ini["wiki.highlighter.default"] or else highlighter_default
	end
end
