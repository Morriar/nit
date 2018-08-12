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

		var block_count = 0
		var block_ok = 0
		var block_ko = 0
		var block_pt = 0


		var block_spans = 0
		var block_spans_ok = 0
		var block_spans_ko = 0
		var block_spans_pt = 0

		var spans_r = 0.0
		var spans_p = 0.0
		var spans_count = 0

		var names_r = 0.0
		var names_p = 0.0
		var names_count = 0

		var exs_r = 0.0
		var exs_p = 0.0
		var exs_count = 0

		var codes_r = 0.0
		var codes_p = 0.0
		var codes_count = 0

		var matches_r = 0.0
		var matches_p = 0.0
		var matches_count = 0

		for block in orig.children do
			if not block isa MdBlock then continue
			if block isa MdBlockQuote then continue

			block_count += 1

			var oblock = dest.match_block(block)
			if oblock == null then continue

			# spans
			var orig_spans = block.span_refs
			var dest_spans = oblock.span_refs
			if dest_spans.not_empty then block_spans += 1
			if orig_spans.not_empty and dest_spans.not_empty then
				var span_r = recall(orig_spans, dest_spans)
				var span_p = precision(orig_spans, dest_spans)
				# print "span_r: {span_r}\t{if span_r < 100.0 then "\t" else ""}span_p: {span_p}"
				spans_r += span_r
				spans_p += span_p
				spans_count += 1
				if span_r == 100.0 then
					block_spans_ok += 1
				else if span_r > 0.0 then
					block_spans_pt += 1
				else
					block_spans_ko += 1
				end
			end

			# names
			var orig_names = block.name_refs
			var dest_names = oblock.name_refs
			# if dest_names.not_empty then block_names += 1
			if orig_names.not_empty  then
				var name_r = recall(orig_names, dest_names)
				var name_p = precision(orig_names, dest_names)
				# print "name_r: {name_r}\t{if name_r < 100.0 then "\t" else ""}name_p: {name_p}"
				names_r += name_r
				names_p += name_p
				names_count += 1
			end

			# examples
			var orig_exs = block.example_refs
			var dest_exs = oblock.example_refs
			if orig_exs.not_empty then
				var ex_r = recall(orig_exs, dest_exs)
				var ex_p = precision(orig_exs, dest_exs)
				# print "name_r: {name_r}\t{if name_r < 100.0 then "\t" else ""}name_p: {name_p}"
				exs_r += ex_r
				exs_p += ex_p
				exs_count += 1
			end

			# code refs
			var orig_codes = block.code_refs
			var dest_codes = oblock.code_refs
			# if dest_codes.not_empty then block_codes += 1
			if orig_codes.not_empty then
				var code_r = recall(orig_codes, dest_codes)
				var code_p = precision(orig_codes, dest_codes)
				# print "name_r: {code_r}\t{if code_r < 100.0 then "\t" else ""}code_p: {code_p}"
				codes_r += code_r
				codes_p += code_p
				codes_count += 1
			end

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

			if orig_matches.not_empty and match_r == 100.0 then
				block_ok += 1
			else if orig_matches.not_empty and match_r > 0.0 then
				block_pt += 1
			else if orig_matches.not_empty then
				block_ko += 1
			end

		end
		printn "{lib or else "NULL"}\t"
		# printn "{block_count}\t{block_spans_ok}\t{block_spans_pt}\t{block_spans_ko}\n"
		# printn "{block_count}\t{block_ok}\t{block_pt}\t{block_ko}\n"
		# printn "{spans_r / spans_count.to_f}\t{spans_p / spans_count.to_f}\n"
		printn "{names_r / names_count.to_f}\t{names_p / names_count.to_f}\n"
		# printn "{exs_r / exs_count.to_f}\t{exs_p / exs_count.to_f}\t"
		# printn "{codes_r / codes_count.to_f}\t{codes_p / codes_count.to_f}\n"
		# printn "{matches_r / matches_count.to_f}\t{matches_p / matches_count.to_f}\n"
	end

	fun print_block(block: MdBlock) do
		var md_renderer = new MarkdownRenderer
		print md_renderer.render(block)
		block.pretty_print
	end

	fun precision(relevant, retrieved: ArraySet[String]): Float do
		if retrieved.is_empty then return 100.0
		var inter = new Array[String]
		for doc in relevant do
			if retrieved.has(doc) then inter.add doc
		end
		return inter.length.to_f / retrieved.length.to_f * 100.0
	end

	fun recall(relevant, retrieved: ArraySet[String]): Float do
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
			if orig isa MdCodeBlock and block isa MdCodeBlock then
				if orig.literal == block.literal then return block
			else
				if orig.raw_text == block.raw_text then return block
			end
		end
		return null
	end
end

redef class MdBlock
	var span_refs = new ArraySet[String]
	var name_refs = new ArraySet[String]
	var example_refs = new ArraySet[String]
	var code_refs = new ArraySet[String]
	var matches = new ArraySet[String]

	fun parse_entry(lines: Array[String]) do
		for line in lines do
			if line.has_prefix("span: ") then span_refs.add line.replace("span: ", "")
			if line.has_prefix("name: ") then name_refs.add line.replace("name: ", "")
			if line.has_prefix("code: ") then code_refs.add line.replace("code: ", "")
			if line.has_prefix("example: ") then example_refs.add line.replace("example: ", "")
			if line.has_prefix("match: ") then matches.add line.replace("match: ", "")
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
		for ref in example_refs do
			b.append "> example: {ref}\n"
		end
		for ref in code_refs do
			b.append "> code: {ref}\n"
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

	var spans = 0

	redef fun visit(node) do
		if node isa MdCode then
			spans += 1
			# print node.literal
		end
		node.visit_all(self)
	end
end

class MdBlockCodes
	super MdVisitor

	var blocks = 0
	var kinds = new Counter[String]

	redef fun visit(node) do
		if node isa MdCodeBlock then
			blocks += 1

			var info = node.info
			if info == null or info == "nit" then
				kinds.inc "nit"
			else if info == "nitish" then
				kinds.inc "nitish"
			else if info == "bash" then
				kinds.inc "bash"
			else
				kinds.inc "other"
			end
			# print node.literal
		end
		node.visit_all(self)
	end
end

var corpus = "names"
var corpus_path = "src/doc/doc_experiments/exp_align/corpus.{corpus}"
(corpus_path / "../out.{corpus}").mkdir
var files = corpus_path.files
default_comparator.sort(files)

# var libs = ["android", "app", "github", "json", "nitcorn", "nlp", "popcorn", "serialization", "vsm"]
# var libs = ["json", "serialization", "vsm"]

for file in files do
	# print ""
	# print file
	var lib = file.replace(".corpus.md", "")
	# if not libs.has(lib) then continue
	# if lib != "pthreads" then continue

	# sys.system "./nitreadme lib/{lib} --keep-going --check-docdown"
	sys.system "./nitreadme lib/{lib} --keep-going --check-docdown > src/doc/doc_experiments/exp_align/out.{corpus}/{lib}.out.md 2>/dev/null"

	# var md = "src/doc/doc_experiments/exp_align/corpus.spans/{lib}.corpus.md".to_path.read_all
	# var doc = (new MdParser).parse(md)
	# var v = new MdSpans
	# v.enter_visit(doc)
	# print "{lib}\t{v.spans}"
	# var v = new MdBlockCodes
	# v.enter_visit(doc)
	# for kind, count in v.kinds do
		# print "{lib}\t{kind}\t{count}"
	# end

	var comparator = new ReadmeComparator
	comparator.compare_files(
		"src/doc/doc_experiments/exp_align/corpus.{corpus}/{lib}.corpus.md",
		"src/doc/doc_experiments/exp_align/out.{corpus}/{lib}.out.md")

	# break
	# sys.system "meld " +
		# "src/doc/doc_experiments/exp_align/corpus.{corpus}/{lib}.corpus.md " +
		# "src/doc/doc_experiments/exp_align/out.{corpus}/{lib}.out.md"

end
