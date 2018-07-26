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

import markdown2
import markdown2::markdown_md_rendering

class ReadmeComparator

	fun compare_files(orig, dest: String) do
		var parser = new ReadmeParser
		var doc_orig = parser.parse_file(orig)
		var doc_dest = parser.parse_file(dest)
		compare_docs(doc_orig, doc_dest)
	end

	fun compare_docs(orig, dest: MdDocument) do
		for block in orig.children do
			if not block isa MdBlock then continue
			if block isa MdBlockQuote then continue

			var oblock = dest.match_block(block)
			if oblock == null then continue
			compare_blocks(block, oblock)
		end
	end

	fun compare_blocks(orig, dest: MdBlock) do
		var orig_spans = orig.span_refs
		var dest_spans = dest.span_refs
		# compare spans
		# compare names
		# compare matches

		# rappel / precision
		if orig_spans.is_empty and dest_spans.is_empty then return
		var p = precision(orig_spans, dest_spans)
		var r = recall(orig_spans, dest_spans)
		print "p: {p}\tr: {r}"
	end

	fun print_block(block: MdBlock) do
		var md_renderer = new MarkdownRenderer
		print md_renderer.render(block)
		block.pretty_print
	end

	fun precision(relevant, retrieved: Array[String]): Float do
		if retrieved.is_empty then return 100.0
		var union = new ArraySet[String]
		union.add_all relevant
		union.add_all retrieved
		return union.length.to_f / retrieved.length.to_f * 100.0
	end

	fun recall(relevant, retrieved: Array[String]): Float do
		if relevant.is_empty then return 100.0
		var union = new ArraySet[String]
		union.add_all relevant
		union.add_all retrieved
		return union.length.to_f / relevant.length.to_f * 100.0
	end

end

class ReadmeParser
	super MdVisitor

	fun parse_file(path: String): MdDocument do
		var md_parser = new MdParser
		var doc = md_parser.parse(path.to_path.read_all)
		parse(doc)
		return doc
	end

	fun parse(doc: MdDocument) do
		for block in doc.children do
			if not block isa MdBlock then continue
			if not block isa MdBlockQuote then
				doc.blocks.add block
				continue
			end
			doc.blocks.last.parse_entry(block.raw_text.split("\n"))
		end
	end
end

redef class MdDocument

	var blocks = new Array[MdBlock]

	fun match_block(orig: MdBlock): nullable MdBlock do
		for block in blocks do
			if orig.raw_text == block.raw_text then return block
		end
		return null
	end
end

redef class MdBlock
	var span_refs = new Array[String]
	var name_refs = new Array[String]
	var matches = new Array[String]

	fun parse_entry(lines: Array[String]) do
		for line in lines do
			if line.has_prefix("span: ") then span_refs.add line.replace("span: ", "")
			if line.has_prefix("name: ") then name_refs.add line.replace("name: ", "")
			if line.has_prefix("match: ") then matches.add line.replace("matches: ", "")
		end
	end

	fun pretty_print do
		var b = new Buffer
		for ref in span_refs do
			b.append "> span: {ref}\n"
		end
		for ref in name_refs do
			b.append "> name: {ref}\n"
		end
		for ref in matches do
			b.append "> match: {ref}\n"
		end
		print b.to_s
	end
end

if args.length != 2 then
	print "./corpus <corpus file> <try match>"
	exit 1
end

var orig = args.first
var dest = args.last

var comparator = new ReadmeComparator
comparator.compare_files(orig, dest)
