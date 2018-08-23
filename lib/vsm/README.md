# `vsm` - Vector Space Modelization for Nit

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

Example from `vsm::example_vsm`:

~~~
# Example using a `FileIndex`
#
# This example shows of to index files from the system and retrieve them
# with text queries.
module example_vsm is example

import vsm
import config

redef class Config

	# --whitelist-exts
	var opt_white_exts = new OptionArray("Allowed file extensions (default is [])",
		"-w", "--whitelist-exts")

	# --blacklist-exts
	var opt_black_exts = new OptionArray("Allowed file extensions (default is [])",
		"-b", "--blacklist-exts")

	redef init do
		opts.add_option(opt_white_exts, opt_black_exts)
	end
end

var config = new Config
config.tool_description = "usage: example_vsm <files>"
config.parse_options(args)

if args.length < 1 then
	config.usage
	exit 1
end

var index = new FileIndex
index.whitelist_exts = config.opt_white_exts.value
index.blacklist_exts = config.opt_black_exts.value

print "Building index..."
index.index_files(args, true)
print "Indexed {index.documents.length} documents"

loop
	print "\nEnter query:"
	printn "> "
	var input = sys.stdin.read_line
	var matches = index.match_string(input)
	printn ""
	for match in matches do
		print match
	end
end
~~~

## Features

![Diagram for `vsm`](uml-vsm.svg)

* `bm25`

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
