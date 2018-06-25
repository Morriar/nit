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

module markdown_metrics

import markdown_block_parsing
import markdown_rendering
import counter
import csv

class MdMetricsCollector

	var md_parser: MdParser

	fun analyze_files(paths: Array[String]): MdMetrics do
		var metrics = new MdMetrics
		for path in paths do
			metrics[path] = analyze_file(path)
		end
		return metrics
	end

	fun analyze_file(path: String): MdDocumentMetrics do
		var string = path.to_path.read_all
		var metrics = new MdDocumentMetrics(path)
		analyze_string(metrics, string)
		return metrics
	end

	fun analyze_strings(strings: Array[String]): MdMetrics do
		var metrics = new MdMetrics

		var i = 1
		for string in strings do
			var name = "Document {i}"
			var doc_metrics = new MdDocumentMetrics(name)
			analyze_string(doc_metrics, string)
			metrics[name] = doc_metrics
			i += 1
		end
		return metrics
	end

	fun analyze_string(metrics: MdDocumentMetrics, string: String) do
		metrics.lines = string.split("\n").length
		metrics.words = string.split(" ").length
		metrics.chars = string.length

		var document = md_parser.parse(string)
		var v = new MdMetricsVisitor(metrics)
		v.enter_visit(document)
	end
end

class MdMetrics
	super HashMap[String, MdDocumentMetrics]

	private var node_kinds = [
			"MdDocument",
			"MdBlockQuote", "MdIndentedCodeBlock", "MdFencedCodeBlock", "MdHeading",
			"MdHtmlBlock", "MdUnorderedList", "MdOrderedList", "MdListItem", "MdParagraph",
			"MdThematicBreak",
			"MdSoftLineBreak", "MdHardLineBreak", "MdCode", "MdEmphasis", "MdStrongEmphasis",
			"MdLink", "MdImage", "MdText",
			"MdStrike", "MdSuper", "MdMaths", "MdWikilink"]

	fun to_console: String do
		var buffer = new Buffer
		for path, metrics in self do
			buffer.append metrics.to_console
		end
		return buffer.to_s
	end

	fun to_csv: CsvDocument do
		var doc = new CsvDocument
		doc.header = ["Document", "Lines", "Words", "Chars"]
		for i in [1..6] do
			doc.header.add "Heading {i}"
		end
		doc.header.add "Nb nodes"
		for node in node_kinds do
			doc.header.add node
		end
		doc.header.add_all(["LOC", "avg"])
		for name, metrics in self do
			doc.records.add metrics.to_csv(node_kinds)
		end
		return doc
	end
end

class MdDocumentMetrics

	var name: String

	var lines = 0

	var words = 0

	var chars = 0

	var headings_counter = new Counter[Int]

	var nodes_counter = new Counter[String]

	var codes_counter = new Counter[Int]

	fun to_console: String do
		var buffer = new Buffer

		buffer.append "\n\n# {name} metrics\n\n"

		buffer.append "## Size metrics\n\n"
		buffer.append " * Lines: {lines}\n"
		buffer.append " * Words: {words}\n"
		buffer.append " * Chars: {chars}\n"
		buffer.append "\n"

		buffer.append "## Heading metrics\n\n"
		for heading, count in headings_counter do
			buffer.append " * Heading {heading}: {count}\n"
		end
		buffer.append "\n"

		buffer.append "## Node metrics\n\n"
		buffer.append " * Total: {nodes_counter.sum}\n"
		for node in nodes_counter.sort.reversed do
			buffer.append " * {node}: {nodes_counter[node]}\n"
		end
		buffer.append "\n"

		buffer.append "## Code metrics\n\n"
		buffer.append " * LOC: {codes_counter.sum}\n"
		buffer.append " * avg: {codes_counter.avg}\n"
		var min = codes_counter.min
		if min != null then
			buffer.append " * min: {min} ({codes_counter[min]})\n"
		end
		var max = codes_counter.max
		if max != null then
			buffer.append " * max: {max} ({codes_counter[max]})\n"
		end

		return buffer.to_s
	end

	private fun to_csv(node_kines: Array[String]): Array[String] do
		var line = new Array[String]
		# Doc metrics
		line.add name
		line.add lines.to_s
		line.add words.to_s
		line.add chars.to_s
		# Heading metrics
		for level in [1..6] do
			if headings_counter.has_key(level) then
				line.add headings_counter[level].to_s
			else
				line.add "0"
			end
		end
		# Node metrics
		line.add nodes_counter.sum.to_s
		for node in node_kines do
			if nodes_counter.has_key(node) then
				line.add nodes_counter[node].to_s
			else
				line.add "0"
			end
		end
		# Code metrics
		line.add codes_counter.sum.to_s
		line.add codes_counter.avg.to_s
		return line
	end
end

# Common interface for all markdown renderer
class MdMetricsVisitor
	super MdVisitor

	var metrics: MdDocumentMetrics

	redef fun visit(node) do node.collect_metrics(self)
end

redef class MdNode
	fun collect_metrics(v: MdMetricsVisitor) do
		v.metrics.nodes_counter.inc class_name
		visit_all(v)
	end
end

redef class MdHeading
	redef fun collect_metrics(v) do
		# if level == 1 then
			# var rv = new RawTextVisitor
			# var text = rv.render(self)
			# print text
		# end
		v.metrics.headings_counter.inc level
		super
	end
end

redef class MdCodeBlock
	redef fun collect_metrics(v) do
		var literal = self.literal
		if literal == null then
			v.metrics.codes_counter[v.metrics.codes_counter.length + 1] = 0
		else
			v.metrics.codes_counter[v.metrics.codes_counter.length + 1] = literal.split("\n").length
		end
		super
	end
end

redef class MdHtmlBlock
	redef fun collect_metrics(v) do
		print literal or else " NULL"
		print ""
	end
end

redef class MdHtmlInline
	redef fun collect_metrics(v) do
		# print literal
	end
end

redef class MdCode
	redef fun collect_metrics(v) do
		# print literal
	end
end

redef class MdLink
	redef fun collect_metrics(v) do
		# print destination
	end
end

redef class MdImage
	redef fun collect_metrics(v) do
		# print destination
	end
end
