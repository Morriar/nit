# Vector Space Model

> match: vsm

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

> match: vsm
> match: vsm::vsm
> match: vsm::Vector
> match: vsm::Document

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

The `vsm` package provides the following features:

> match: vsm

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

> match: vsm::Vector
> match: vsm::Vector::cosine_similarity
> match: vsm::VSMIndex
> match: vsm::StringIndex
> match: vsm::FileIndex
> match: vsm::IndexMatch::similarity

## Vectors

> match: vsm::Vector

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

> match: vsm::Document
> match: vsm::Vector
> match: vsm
> match: vsm::VSMIndex::documents
> match: vsm::vsm
> match: vsm::IndexMatch::document

For text document, the count of each term found in the document if often used to
build vectors.

> match: vsm::Document
> match: vsm::IndexMatch::document
> match: vsm::Vector

### Creating a vector

> match: vsm::Vector
> match: vsm::vsm::TermComparator::vector

~~~
import vsm

var vector = new Vector
vector["term1"] = 2.0
vector["term2"] = 1.0
assert vector["term1"] == 2.0
assert vector["term2"] == 1.0
assert vector.norm.is_approx(2.236, 0.001)
~~~

> match: vsm::Vector
> match: core::MapRead::[]
> match: core::Map::[]=
> match: vsm::Vector::norm
> match: core::Float::is_approx
> match: vsm::example_vsm
> match: vsm::vsm

### Comparing vectors

> match: vsm::Vector

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

> match: vsm::Vector
> match: core::Map::[]=
> match: core::Comparable::>
> match: vsm::Vector::cosine_similarity
> match: vsm::example_vsm
> match: vsm::vsm

## VSMIndex

> match: vsm::VSMIndex

VSMIndex is a Document index based on VSM.

> match: vsm::VSMIndex
> match: vsm::Document
> match: vsm::IndexMatch::document
> match: vsm
> match: vsm::vsm

Using VSMIndex you can index documents associated with their vector.
Documents can then be matched to query vectors.

> match: vsm::Vector
> match: vsm::VSMIndex::documents
> match: vsm::VSMIndex
> match: vsm::Document
> match: vsm::vsm::TermComparator::vector

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

> match: vsm::Vector
> match: core::Map::[]=
> match: vsm::Document
> match: vsm::VSMIndex
> match: vsm::example_vsm
> match: core::Collection::first
> match: vsm::VSMIndex::documents
> match: vsm::IndexMatch
> match: vsm::IndexMatch::document
> match: core::HashSet
> match: vsm::VSMIndex::index_document
> match: vsm::VSMIndex::match_vector
> match: vsm::vsm

## StringIndex

> match: vsm::StringIndex

The StringIndex provides usefull services to index and match strings.

> match: vsm::StringIndex

~~~
import vsm

var index = new StringIndex

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

> match: vsm::StringIndex
> match: vsm::example_vsm
> match: core::Collection::first
> match: vsm::StringIndex::index_string
> match: vsm::Document
> match: vsm::VSMIndex::documents
> match: vsm::IndexMatch
> match: vsm::IndexMatch::document
> match: core::HashSet
> match: vsm::StringIndex::match_string
> match: vsm::vsm

## FileIndex

> match: vsm::FileIndex

The FileIndex is a StringIndex able to index and retrieve files.

> match: vsm::FileIndex
> match: vsm::StringIndex

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

> match: vsm::FileIndex
> match: vsm::example_vsm
> match: vsm::FileIndex::index_files
> match: vsm::vsm

