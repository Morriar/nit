# Vector Space Model

> theme: api
> theme: title

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

> theme: api
> theme: intro
> theme: authors
> theme: examples

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

> theme: intro

The `vsm` package provides the following features:

> theme: api
> theme: intro
> theme: features

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

> theme: api
> theme: features
> theme: api
> theme: api
> theme: intro
> theme: api
> theme: api
> theme: intro
> theme: api
> theme: api
> theme: intro

## Vectors

> theme: api
> theme: features

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

> theme: api

For text document, the count of each term found in the document if often used to
build vectors.

> theme: api

### Creating a vector

> theme: api
> theme: features
> theme: examples

~~~
import vsm

var vector = new Vector
vector["term1"] = 2.0
vector["term2"] = 1.0
assert vector["term1"] == 2.0
assert vector["term2"] == 1.0
assert vector.norm.is_approx(2.236, 0.001)
~~~

> theme: examples

### Comparing vectors

> theme: api
> theme: features
> theme: examples

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

> theme: examples

## VSMIndex

> theme: api
> theme: features

VSMIndex is a Document index based on VSM.

> theme: api

Using VSMIndex you can index documents associated with their vector.
Documents can then be matched to query vectors.

> theme: api

This represents a minimalistic search engine.

> theme: examples

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

> theme: examples

## StringIndex

> theme: api
> theme: features

The StringIndex provides usefull services to index and match strings.

> theme: api
> theme: features
> theme: examples

~~~
import vsm

var index = new StringIndex

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

> theme: examples

## FileIndex

> theme: api
> theme: features

The FileIndex is a StringIndex able to index and retrieve files.

> theme: api

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

> theme: examples

