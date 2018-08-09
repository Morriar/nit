# Vector Space Model

> match: vsm::Vector (conf: 0.141)
> match: vsm> (conf: 0.139)
> match: vsm (conf: 0.139)

Vector Space Model (VSM) is an algebraic model for representing text documents
(and any objects, in general) as vectors of identifiers, such as, for example,
index terms.

> match: vsm> (conf: 0.251)
> match: vsm (conf: 0.251)
> match: vsm::Vector (conf: 0.198)
> match: vsm::VSMIndex::match_vector (conf: 0.113)
> match: vsm::VSMIndex (conf: 0.113)
> match: vsm::vsm::TermComparator::vector (conf: 0.113)
> match: vsm::Document::tfidf (conf: 0.083)
> match: vsm::Document::terms_count (conf: 0.073)
> match: vsm::VSMIndex::inverse_doc_frequency (conf: 0.072)
> match: vsm::Document::terms_frequency (conf: 0.07)
> match: vsm::VSMIndex::terms_doc_count (conf: 0.069)
> match: vsm::IndexMatch::document (conf: 0.068)
> match: vsm::VSMIndex::index_document (conf: 0.067)
> match: vsm::VSMIndex::documents (conf: 0.065)
> match: vsm::VSMIndex::inversed_index (conf: 0.062)
> match: vsm::StringIndex::parse_string (conf: 0.061)
> match: vsm::vsm (conf: 0.06)
> match: vsm::Vector::inc (conf: 0.058)
> match: vsm::vsm::TermComparator (conf: 0.044)
> match: vsm::VSMIndex::DOC (conf: 0.042)
> match: vsm::VSMIndex::update_index (conf: 0.042)
> match: vsm>examples> (conf: 0.04)

It is used in information filtering, information retrieval, indexing and
relevancy rankings.

> match: vsm> (conf: 0.102)
> match: vsm (conf: 0.102)
> match: vsm::VSMIndex::inverse_doc_frequency (conf: 0.044)
> match: vsm::vsm (conf: 0.038)
> match: vsm::StringIndex (conf: 0.037)
> match: vsm::FileIndex (conf: 0.034)
> match: vsm::VSMIndex::update_index (conf: 0.032)

The `vsm` package provides the following features:

> match: vsm> (conf: 0.114)
> match: vsm (conf: 0.114)

* Vector comparison with cosine similarity.
* Vector indexing and matching with tf * idf.
* File indexing and matching to free text queries.

> match: vsm::IndexMatch::similarity (conf: 0.211)
> match: vsm::Vector (conf: 0.122)
> match: vsm> (conf: 0.145)
> match: vsm (conf: 0.145)
> match: vsm::Vector (conf: 0.109)
> match: vsm> (conf: 0.124)
> match: vsm (conf: 0.124)
> match: vsm::FileIndex (conf: 0.072)

## Vectors

> match: vsm::vsm::TermComparator::vector (conf: 0.346)
> match: vsm::Vector (conf: 0.303)

With VSM, documents are represented by a n-dimensions vector.
Each dimension represent an attribute of the document or object.

> match: vsm> (conf: 0.224)
> match: vsm (conf: 0.224)
> match: vsm::Vector (conf: 0.221)
> match: vsm::IndexMatch::document (conf: 0.153)
> match: vsm::VSMIndex (conf: 0.138)
> match: vsm::VSMIndex::match_vector (conf: 0.117)
> match: vsm::VSMIndex::documents (conf: 0.112)
> match: vsm::VSMIndex::index_document (conf: 0.108)
> match: vsm::VSMIndex::inverse_doc_frequency (conf: 0.092)
> match: vsm::Document::tfidf (conf: 0.09)
> match: vsm::vsm::TermComparator::vector (conf: 0.089)
> match: vsm::Document::terms_count (conf: 0.077)
> match: vsm::Document::terms_frequency (conf: 0.074)
> match: vsm::Document (conf: 0.07)
> match: vsm::bm25::VSMIndex::average_document_length (conf: 0.06)
> match: vsm::Vector::sorted_dimensions (conf: 0.059)

For text document, the count of each term found in the document if often used to
build vectors.

> match: vsm::Document::terms_count (conf: 0.215)
> match: vsm> (conf: 0.191)
> match: vsm (conf: 0.191)
> match: vsm::IndexMatch::document (conf: 0.172)
> match: vsm::Vector (conf: 0.162)
> match: vsm::Document::terms_frequency (conf: 0.161)
> match: vsm::VSMIndex::terms_doc_count (conf: 0.154)
> match: vsm::Document::tfidf (conf: 0.15)
> match: vsm::VSMIndex (conf: 0.129)
> match: vsm::VSMIndex::match_vector (conf: 0.126)
> match: vsm::VSMIndex::documents (conf: 0.125)
> match: vsm::VSMIndex::inverse_doc_frequency (conf: 0.122)
> match: vsm::VSMIndex::index_document (conf: 0.119)
> match: vsm::vsm::TermComparator::vector (conf: 0.1)
> match: vsm::Document (conf: 0.078)
> match: vsm::bm25::VSMIndex::average_document_length (conf: 0.067)
> match: vsm::VSMIndex::inversed_index (conf: 0.066)

### Creating a vector

> match: vsm::vsm::TermComparator::vector (conf: 0.244)
> match: vsm::Vector (conf: 0.215)
> match: vsm::VSMIndex::match_vector (conf: 0.154)
> match: vsm> (conf: 0.145)
> match: vsm (conf: 0.145)
> match: vsm::VSMIndex (conf: 0.116)

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

> match: vsm::vsm::TermComparator::vector (conf: 0.244)
> match: vsm::Vector (conf: 0.215)

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

> match: vsm::VSMIndex (conf: 0.306)

VSMIndex is a Document index based on VSM.

> match: vsm::VSMIndex (conf: 0.267)
> match: vsm::Document (conf: 0.251)
> match: vsm> (conf: 0.126)
> match: vsm (conf: 0.126)
> match: vsm::IndexMatch::document (conf: 0.098)
> match: vsm::VSMIndex::documents (conf: 0.077)
> match: vsm::StringIndex::index_string (conf: 0.071)
> match: vsm::VSMIndex::index_document (conf: 0.065)
> match: vsm::StringIndex (conf: 0.051)
> match: vsm::Document::title (conf: 0.049)
> match: vsm::Document::uri (conf: 0.049)
> match: vsm::VSMIndex::update_index (conf: 0.049)

Using VSMIndex you can index documents associated with their vector.
Documents can then be matched to query vectors.

> match: vsm::VSMIndex (conf: 0.327)
> match: vsm> (conf: 0.234)
> match: vsm (conf: 0.234)
> match: vsm::VSMIndex::match_vector (conf: 0.194)
> match: vsm::Vector (conf: 0.179)
> match: vsm::IndexMatch::document (conf: 0.151)
> match: vsm::vsm::TermComparator::vector (conf: 0.151)
> match: vsm::VSMIndex::index_document (conf: 0.112)
> match: vsm::VSMIndex::documents (conf: 0.109)
> match: vsm::Document (conf: 0.093)
> match: vsm::Document::terms_frequency (conf: 0.085)
> match: vsm::VSMIndex::inverse_doc_frequency (conf: 0.078)
> match: vsm::VSMIndex::DOC (conf: 0.078)
> match: vsm::Document::tfidf (conf: 0.076)
> match: vsm::StringIndex::match_string (conf: 0.075)
> match: vsm::Document::terms_count (conf: 0.073)
> match: vsm::Vector::cosine_similarity (conf: 0.069)
> match: vsm::VSMIndex::inversed_index (conf: 0.058)
> match: vsm::VSMIndex::update_index (conf: 0.055)
> match: vsm::VSMIndex::terms_doc_count (conf: 0.053)
> match: vsm::bm25::VSMIndex::average_document_length (conf: 0.051)

This represents a minimalistic search engine.

> match: vsm> (conf: 0.086)
> match: vsm (conf: 0.086)

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

> match: vsm::StringIndex (conf: 0.319)

The StringIndex provides usefull services to index and match strings.

> match: vsm::StringIndex (conf: 0.146)
> match: vsm> (conf: 0.13)
> match: vsm (conf: 0.13)
> match: vsm::StringIndex::match_string (conf: 0.093)
> match: vsm::StringIndex::index_string (conf: 0.069)
> match: vsm::StringIndex::parse_string (conf: 0.068)

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

> match: vsm::FileIndex (conf: 0.441)

The FileIndex is a StringIndex able to index and retrieve files.

> match: vsm::FileIndex (conf: 0.189)
> match: vsm> (conf: 0.132)
> match: vsm (conf: 0.132)
> match: vsm::StringIndex (conf: 0.121)
> match: vsm::FileIndex::whitelist_exts (conf: 0.073)
> match: vsm::FileIndex::index_file (conf: 0.065)
> match: vsm::FileIndex::blacklist_exts (conf: 0.064)
> match: vsm::FileIndex::index_files (conf: 0.06)

~~~nit
import vsm

var index = new FileIndex

index.index_files(["/path/to/doc/1", "/path/to/doc/2"])
~~~

