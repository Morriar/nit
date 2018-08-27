import counter
import markdown2

class MdMetrics
	super MdVisitor

	var counter = new Counter[String]

	redef fun visit(node) do
		if node isa MdWikilink then
			var parts = node.raw_text.split(": ")
			if parts.length == 1 then
				counter.inc "link"
			else
				counter.inc parts.first
			end
		end
		counter.inc node.class_name
		node.visit_all(self)
	end
end

var dir = "exp_experts"

var files = dir.files
default_comparator.sort(files)

var parser = new MdParser
parser.github_mode = true
parser.wikilinks_mode = true


for file in files do
	if not file.has_suffix("docdown.md") then continue
	# if not file.has_suffix(".md") then continue
	# if file.has_suffix(".docdown.md") then continue

	var lib = file.strip_extension(".docdown.md")
	var path = (dir / file).to_path
	var md = path.read_all
	var ast = parser.parse(md)

	# Collect metrics
	var m = new MdMetrics
	m.enter_visit(ast)

	print lib

	for k, v in m.counter do
		print "{k}\t{v}"
	end

end

