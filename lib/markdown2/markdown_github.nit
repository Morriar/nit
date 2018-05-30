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

module markdown_github

import markdown_block_parsing

redef class MdParser

	# FIXME optional in redef?
	var github_mode = false is optional, writable

	redef var inline_parser do
		var parser = new MdInlineParser
		parser.github_mode = github_mode
		return parser
	end
end

redef class MdInlineParser

	# FIXME optional in redef?
	var github_mode = false is optional, writable


	redef fun calculate_delimiter_processors(delimiter_processors) do
		var map = super
		add_delimiter_processor(new MdStrikeProcessor, map)
		add_delimiter_processor(new MdSuperProcessor, map)
		return map
	end
end

class MdStrikeProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '~'
	redef var min_length = 1
	redef fun delimiter_use(opener, closer) do return opener.original_length

	redef fun process(opener, closer, delimiter_use) do
		var node = new MdStrike(
				new MdLocation(
					opener.location.line_start,
					opener.location.column_start,
					closer.location.line_end,
					closer.location.column_end),
			opening_delimiter.to_s * delimiter_use)
		var tmp = opener.next
		while tmp != null and tmp != closer do
			var next = tmp.next
			node.append_child(tmp)
			tmp = next
		end
		opener.insert_after(node)
	end
end

class MdStrike
	super MdDelimited
end

class MdSuperProcessor
	super MdEmphasisDelimiterProcessor
	noautoinit

	redef var delimiter_char = '^'
	redef var min_length = 1
	redef fun delimiter_use(opener, closer) do return opener.original_length

	redef fun process(opener, closer, delimiter_use) do
		var node = new MdSuper(
			new MdLocation(
				opener.location.line_start,
				opener.location.column_start,
				closer.location.line_end,
				closer.location.column_end),
			opening_delimiter.to_s * delimiter_use)
		var tmp = opener.next
		while tmp != null and tmp != closer do
			var next = tmp.next
			node.append_child(tmp)
			tmp = next
		end
		opener.insert_after(node)
	end
end

class MdSuper
	super MdDelimited
end

# TODO table
# TODO todo lists
