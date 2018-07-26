# Vector Space Model

> name: vsm::Vector

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

> name: vsm::Vector
> name: vsm
> name: vsm::Vector
> name: vsm::Document

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

The `vsm` package provides the following features:

> span: vsm

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

> name: vsm::Vector
> name: vsm::Vector

## Vectors

> name: vsm::Vector

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

> name: vsm
> name: vsm::Document
> name: vsm::Vector
> name: vsm::Document

For text document, the count of each term found in the document if often used to
build vectors.

> name: vsm::Document
> name: vsm::Document::terms
> name: vsm::Vector

### Creating a vector

> name: vsm::Vector

~~~
var vector = new Vector
vector["term1"] = 2.0
vector["term2"] = 1.0
assert vector["term1"] == 2.0
assert vector["term2"] == 1.0
assert vector.norm.is_approx(2.236, 0.001)
~~~

### Comparing vectors

> name: vsm::Vector

~~~
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

> name: vsm::VSMIndex

VSMIndex is a Document index based on VSM.

> name: vsm::VSMIndex
> name: vsm::Document
> name: vsm

Using VSMIndex you can index documents associated with their vector.
Documents can then be matched to query vectors.

> name: vsm::VSMIndex
> name: vsm::Document
> name: vsm::vector
> name: vsm::Document
> name: vsm::Vector

This represents a minimalistic search engine.

~~~
var index = new VSMIndex

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

> name: vsm::StringIndex

The StringIndex provides usefull services to index and match strings.

> name: vsm::StringIndex
> name: core::String

~~~
index = new StringIndex

d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

## FileIndex

> name: vsm::FileIndex

The FileIndex is a StringIndex able to index and retrieve files.

> name: vsm::FileIndex
> name: vsm::StringIndex

~~~nit
index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

