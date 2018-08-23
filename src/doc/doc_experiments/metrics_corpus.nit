import counter
import markdown2

class MetricsV
	super MdVisitor

	var counter: Counter[String]

	# var in_intro = false

	redef fun visit(node) do
		# counter.inc node.class_name
		if node isa MdHeading then
			var text = node.raw_text
			if node.level == 1 then
				counter.inc "Title"
				# in_intro = true
			else if text.has(" - ") then
				counter.inc "API"
				print text
			else if text.to_lower.has("features") then
				counter.inc "Features"
				print text
			else if text.has("Authors") then
				counter.inc "Authors"
				print text
			else if text.has("tests") then
				counter.inc "tests"
				print text
			else if text.has("Started") then
				counter.inc "Starting"
				print text
			else
				# counter.inc text.trim
			end
		else if node isa MdWikilink then
			var cmd = node.link
			var name = node.title
			if name != null then cmd = "{name} | {cmd}"

			var ps = cmd.split(": ")
			if ps.not_empty then
				counter.inc ps.first
			end
		end
		node.visit_all(self)
	end
end

var libs = "lib/".files

var parser = new MdParser
parser.github_mode = true
parser.wikilinks_mode = true

var counter = new Counter[String]
var lcounters = new HashMap[String, Counter[String]]

for lib in libs do
	var lcounter = new Counter[String]

	# counter.inc "lib"

	var readme = "lib" / lib / "README.md"
	if readme.file_exists then
		# counter.inc "readme"
		lcounter["md_lines"] = readme.to_path.read_all.split("\n").length
	end

	var docdown = "lib" / lib / "README.docdown.md.old"
	if docdown.file_exists then
		# counter.inc "docdown"
		var docdown_md = docdown.to_path.read_all
		lcounter["dd_lines"] = docdown_md.split("\n").length
		# Titles
		# Sections
		# Cards

		var ast = parser.parse(docdown_md)
		var v = new MetricsV(counter)
		v.enter_visit ast
	end

	lcounters[lib] = lcounter
end

var md_sum = 0
var dd_sum = 0
for lib, c in lcounters do
	# print lib
	# for k, v in c do
		# print " * {k}: {v}"
	# end
	if c.has_key("md_lines") then
		md_sum += c["md_lines"]
	end
	if c.has_key("dd_lines") then
		dd_sum += c["dd_lines"]
	end
end

# counter["md_lines"] = md_sum / lcounters.length
# counter["dd_lines"] = dd_sum / lcounters.length

for k in counter.sort.reversed do
	print "{k}: {counter[k]}"
end
