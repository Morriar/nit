# `vsm` - Vector Space Model

[[toc: vsm]]

> [[doc: vsm::vsm]]

The `vsm` package provides the following features:

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

## [[sign: vsm::Vector]]

> [[doc: vsm::Vector]]

[[uml: vsm | format: svg, mentities: vsm::IndexMatchSorter;vsm::IndexMatch;vsm::StringIndex;vsm::Vector;vsm::FileIndex;vsm::Document;vsm::VSMIndex]]

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

## [[sign: vsm::VSMIndex]]

VSMIndex is a Document index based on VSM.

> [[doc: vsm::VSMIndex]]

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

## [[sign: vsm::StringIndex]]

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

[[code: vsm::example_vsm]]

## [[sign: vsm::FileIndex]]

The FileIndex is a StringIndex able to index and retrieve files.

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

## Authors

This project is maintained by [[ini-maintainer: vsm]].
