# `vsm` - Vector Space Model

> Vector Space Model (VSM) is an algebraic model for representing text documents
> (and any objects, in general) as vectors of identifiers, such as, for example,
> index terms.

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

The `vsm` package provides the following features:

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

## `Vector`

> *n-dimensions* vectors are used to represent a text document or an object.

![Diagram for `vsm`](uml-vsm.svg)

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

For text document, the count of each term found in the document if often used to
build vectors.

### Creating a vector

~~~
import vsm

var vector = new Vector
vector["term1"] = 2.0
vector["term2"] = 1.0
assert vector["term1"] == 2.0
assert vector["term2"] == 1.0
assert vector.norm.is_approx(2.236, 0.001)
~~~

### Comparing vectors

~~~
import vsm

var v1 = new Vector
v1["term1"] = 1.0
v1["term2"] = 2.0

var v2 = new Vector
v2["term2"] = 1.0
v2["term3"] = 3.0

var query = new Vector
query["term2"] = 1.0

var s1 = query.cosine_similarity(v1)
var s2 = query.cosine_similarity(v2)
assert s1 > s2
~~~

## `VSMIndex`

VSMIndex is a Document index based on VSM.

> Using VSMIndex you can index documents associated with their vector.
> Documents can then be matched to query vectors.

This represents a minimalistic search engine.

~~~
import vsm

var index = new VSMIndex

var v1 = new Vector
v1["term1"] = 1.0
v1["term2"] = 2.0

var v2 = new Vector
v2["term2"] = 1.0
v2["term3"] = 3.0

var query = new Vector
query["term2"] = 1.0

var d1 = new Document("Doc 1", "/uri/1", v1)
index.index_document(d1)

var d2 = new Document("Doc 2", "/uri/2", v2)
index.index_document(d2)

assert index.documents.length == 2

query = new Vector
query["term1"] = 1.0

var matches = index.match_vector(query)
assert matches.first.document == d1
~~~

## `StringIndex`

The StringIndex provides usefull services to index and match strings.

~~~
import vsm

var index = new StringIndex

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

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

## ## `FileIndex`

The FileIndex is a StringIndex able to index and retrieve files.

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
