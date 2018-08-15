# Vector Space Model

> match: vsm::Vector
> match: vsm

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

> match: vsm::Vector
> match: vsm>examples>
> match: vsm::Document
> match: vsm
> match: vsm::vsm::TermComparator
> match: vsm::example_vsm
> match: vsm::VSMIndex
> match: vsm::IndexMatch

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

> match: vsm
> match: vsm::StringIndex
> match: vsm::FileIndex

The `vsm` package provides the following features:

> match: vsm
> match: vsm::example_vsm
> match: vsm::VSMIndex::inverse_doc_frequency

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

> match: vsm::Vector
> match: vsm
> match: vsm::IndexMatchSorter
> match: vsm::Vector
> match: vsm
> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm::IndexMatch
> match: vsm::IndexMatchSorter
> match: vsm::VSMIndex
> match: vsm
> match: vsm::FileIndex
> match: vsm::VSMIndex
> match: vsm::StringIndex
> match: vsm::IndexMatch
> match: vsm::IndexMatchSorter
> match: vsm::Vector
> match: vsm::example_vsm

## Vectors

> match: vsm::Vector
> match: vsm
> match: vsm::VSMIndex

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

> match: vsm::Vector
> match: vsm::Document
> match: vsm
> match: vsm::VSMIndex
> match: vsm::example_vsm

For text document, the count of each term found in the document if often used to
build vectors.

> match: vsm::Document
> match: vsm::Vector
> match: vsm::vsm::TermComparator
> match: vsm
> match: vsm::VSMIndex
> match: vsm::example_vsm

### Creating a vector

> match: vsm::Vector
> match: vsm
> match: vsm::VSMIndex

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

> match: vsm::Vector
> match: vsm
> match: vsm::VSMIndex
> match: vsm::vsm::TermComparator

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

## VSMIndex

> match: vsm::VSMIndex
> match: vsm::Document
> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm

VSMIndex is a Document index based on VSM.

> match: vsm::Document
> match: vsm::VSMIndex
> match: vsm
> match: vsm::example_vsm
> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm::IndexMatch

Using VSMIndex you can index documents associated with their vector.
Documents can then be matched to query vectors.

> match: vsm::VSMIndex
> match: vsm::Document
> match: vsm::Vector
> match: vsm
> match: vsm::IndexMatch
> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm::IndexMatchSorter
> match: vsm::example_vsm

This represents a minimalistic search engine.

> match: vsm
> match: vsm::Vector

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

## StringIndex

> match: vsm::StringIndex
> match: vsm

The StringIndex provides usefull services to index and match strings.

> match: vsm::StringIndex
> match: vsm
> match: vsm::VSMIndex
> match: vsm::IndexMatch
> match: vsm::IndexMatchSorter
> match: vsm::example_vsm

~~~
import vsm

var index = new StringIndex

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

## FileIndex

> match: vsm::FileIndex
> match: vsm
> match: vsm::example_vsm

The FileIndex is a StringIndex able to index and retrieve files.

> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm
> match: vsm::example_vsm
> match: vsm::VSMIndex
> match: vsm::IndexMatch

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

