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

# A Markdown parser for Nit.
module nitmd

import markdown_metrics
import markdown_html_rendering
import markdown_md_rendering
import markdown_man_rendering
import markdown_latex_rendering

import config

var opt_to = new OptionString("Specify output format (html, md, man, latex)", "-t", "--to")
var opt_metrics = new OptionBool("Collect metrics about the document", "--metrics")
var opt_csv = new OptionString("Export metrics to CSV file", "--csv")

var usage = new Buffer
usage.append "Usage: nitmd [-t format] [file.md ...]\n"
usage.append "Translate Markdown documents to other formats.\n\n"
usage.append "If no argument, read the Markdown input from `stdin`."

var config = new Config
config.add_option(opt_to, opt_metrics, opt_csv)
config.tool_description = usage.write_to_string
config.parse_options(args)

var parser = new MdParser

# Read stdin
var md = null
if config.args.is_empty then
	md = sys.stdin.read_all
end

# Show metrics
if opt_metrics.value then
	# Only collect metrics
	var collector = new MdMetricsCollector(parser)
	var metrics: MdMetrics
	if md != null then
		metrics = collector.analyze_strings([md])
	else
		metrics = collector.analyze_files(config.args)
	end
	var csv = opt_csv.value
	if csv == null then
		print metrics.to_console
	else
		metrics.to_csv.write_to_file(csv)
	end
	exit 0
end

# Parse inputs
var documents = new Array[MdDocument]
if md != null then
	documents.add parser.parse(md)
else
	for file in config.args do
		if not file.file_exists then
			print "Error: '{file}' not found"
			continue
		end
		md = file.to_path.read_all
		documents.add parser.parse(md)
	end
end

# Render the output
var renderer: MdRenderer
var to = opt_to.value
if to == null or to == "html" then
	renderer = new HtmlRenderer
else if to == "md" then
	renderer = new MarkdownRenderer
else if to == "man" then
	renderer = new ManRenderer
else if to == "latex" then
	renderer = new LatexRenderer
else
	print "Unknown output format: {to}"
	exit 1
	return
end
for document in documents do
	printn renderer.render(document)
end
