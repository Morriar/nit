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
import counter

class ReadmeComparator

	var lib: nullable String = null

	fun compare_files(orig, dest: String) do
		# print "lib\tspan_r\tspan_p\tname_r\tname_p"
		var parser = new ReadmeParser
		var doc_orig = parser.parse_file(orig)
		var doc_dest = parser.parse_file(dest)
		lib = orig.basename.replace(".corpus.md", "")
		compare_docs(doc_orig, doc_dest)
	end

	fun compare_docs(orig, dest: MdDocument) do
		var spans_r = 0.0
		var spans_p = 0.0
		var spans_count = 0

		var names_r = 0.0
		var names_p = 0.0
		var names_count = 0

		var matches_r = 0.0
		var matches_p = 0.0
		var matches_count = 0

		for block in orig.children do
			if not block isa MdBlock then continue
			if block isa MdBlockQuote then continue

			var oblock = dest.match_block(block)
			if oblock == null then continue

			# spans
			var orig_spans = block.span_refs
			var dest_spans = oblock.span_refs
			if orig_spans.not_empty and dest_spans.not_empty then
				var span_r = recall(orig_spans, dest_spans)
				var span_p = precision(orig_spans, dest_spans)
				# print "span_r: {span_r}\t{if span_r < 100.0 then "\t" else ""}span_p: {span_p}"
				spans_r += span_r
				spans_p += span_p
				spans_count += 1
			end

			# names
			var orig_names = block.name_refs
			var dest_names = oblock.name_refs
			if orig_names.is_empty and dest_names.is_empty then continue
			var name_r = recall(orig_names, dest_names)
			var name_p = precision(orig_names, dest_names)
			# print "name_r: {name_r}\t{if name_r < 100.0 then "\t" else ""}name_p: {name_p}"
			names_r += name_r
			names_p += name_p
			names_count += 1

			# matches
			var orig_matches = block.matches
			var dest_matches = oblock.matches
			if orig_matches.is_empty and dest_matches.is_empty then continue
			var match_r = recall(orig_matches, dest_matches)
			var match_p = precision(orig_matches, dest_matches)
			# print "name_r: {name_r}\t{if name_r < 100.0 then "\t" else ""}name_p: {name_p}"
			matches_r += match_r
			matches_p += match_p
			matches_count += 1
		end
		printn "{lib or else "NULL"}\t"
		# printn "{spans_r / spans_count.to_f}\t{spans_p / spans_count.to_f}\t"
		# printn "{names_r / names_count.to_f}\t{names_p / names_count.to_f}\n"
		printn "{matches_r / matches_count.to_f}\t{matches_p / matches_count.to_f}\n"
	end

	fun print_block(block: MdBlock) do
		var md_renderer = new MarkdownRenderer
		print md_renderer.render(block)
		block.pretty_print
	end

	fun precision(relevant, retrieved: Array[String]): Float do
		if retrieved.is_empty then return 0.0
		var inter = new Array[String]
		for doc in relevant do
			if retrieved.has(doc) then inter.add doc
		end
		return inter.length.to_f / retrieved.length.to_f * 100.0
	end

	fun recall(relevant, retrieved: Array[String]): Float do
		if relevant.is_empty then return 100.0
		var inter = new Array[String]
		for doc in relevant do
			if retrieved.has(doc) then inter.add doc
		end
		return inter.length.to_f / relevant.length.to_f * 100.0
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

# if args.length != 2 then
	# print "./corpus <corpus file> <try match>"
	# exit 1
# end

# var orig = args.first
# var dest = args.last

class MdSpans
	super MdVisitor

	redef fun visit(node) do
		if node isa MdCode then
			print node.literal
		end
		node.visit_all(self)
	end
end

var corpus_path = "src/doc/doc_experiments/exp_align/corpus.matches"
(corpus_path / "../out").mkdir
var files = corpus_path.files
default_comparator.sort(files)
for file in files do

	# print ""
	# print file
	var lib = file.replace(".corpus.md", "")
#
	sys.system "./nitreadme lib/{lib} --check-docdown > src/doc/doc_experiments/exp_align/out/{lib}.out.md"

	# var md = "src/doc/doc_experiments/exp_align/corpus/{lib}.corpus.md".to_path.read_all
	# var doc = (new MdParser).parse(md)
	# var v = new MdSpans
	# v.enter_visit(doc)

	var comparator = new ReadmeComparator
	comparator.compare_files(
		"src/doc/doc_experiments/exp_align/corpus.matches/{lib}.corpus.md",
		"src/doc/doc_experiments/exp_align/out/{lib}.out.md")

	# break
	# sys.system "meld " +
		# "src/doc/doc_experiments/exp_align/corpus.names/{lib}.corpus.md " +
		# "src/doc/doc_experiments/exp_align/out/{lib}.out.md"

end
