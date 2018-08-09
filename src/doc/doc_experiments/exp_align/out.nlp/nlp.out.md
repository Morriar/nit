# Nit wrapper for Stanford CoreNLP

> match: nlp
> match: nlp>
> match: core::abstract_text::Int::strerror_ext
> match: core::NativeArray
> match: core::abstract_collection::CoupleMapIterator

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> match: nlp
> match: nlp>
> match: nlp::NLPToken::word
> match: nlp::NLPProcessor
> match: nlp::NLPClient::language
> match: pthreads::Mutex
> match: nlp::NLPToken::index
> match: core::Regex
> match: nlp::NLPSentence::index
> match: core>text>
> match: dom::XMLAttribute::name
> match: meta::Class::name
> match: nlp::NLPToken
> match: nlp::NLPToken::lemma
> match: core::hash_collection::HashSetIterator::set
> match: core::text
> match: curl::CurlHTTPRequest::body
> match: core::Match
> match: vsm::Document::tfidf
> match: curl::CURLOption::timeout
> match: curl::CURLOption::timeout_ms
> match: core::Numeric
> match: dom::XMLAttribute
> match: core::BytePattern
> match: nlp::NLPDocument
> match: core::Queue::take
> match: core::Object::SELF
> match: core::Set
> match: core::Tm
> match: config
> match: config>
> match: core::Collection
> match: pthreads::pthreads::NativePthreadKey::set
> match: vsm::Vector::inc
> match: core::Text
> match: ini::ini::ConfigNode::name
> match: core::Stream::codec
> match: core::Map
> match: vsm::VSMIndex::inverse_doc_frequency
> match: core::Path
> match: serialization>
> match: serialization
> match: config::Config::tool_description
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::engine_tools::Object::serialization_hash
> match: core::Finalizable::finalize

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> match: nlp
> match: nlp>
> match: nlp::NLPServer::java_cp
> match: core::Sys::run
> match: nlp::NLPJavaProcessor

See http://nlp.stanford.edu/software/corenlp.shtml.

> match: core::abstract_text::AlphaComparator
> match: core::file::Text::file_stat
> match: vsm::VSMIndex::sorter
> match: core::exec::CString::system
> match: core::Path::each_line
> match: core::FileStream::file_stat
> match: vsm::FileIndex::parse_file
> match: core::file::Text::file_lstat

## NLPProcessor

> match: nlp::NLPClient

### Java client

> match: core::CString::char_to_byte_index_cached
> match: core::CString::byte_to_char_index_cached
> match: nlp::NLPServer::port

~~~nit
import nlp

var proc = new NLPJavaProcessor("path/to/StanfordCoreNLP/jars")

var doc = proc.process("String to analyze")

for sentence in doc.sentences do
	for token in sentence.tokens do
		print "{token.lemma}: {token.pos}"
	end
end
~~~

### NLPServer

> match: nlp::NLPClient

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> match: nlp
> match: nlp>
> match: nlp::NLPClient
> match: core::abstract_text::Int::strerror_ext
> match: core::Collection
> match: core::abstract_collection::CoupleMapIterator

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

> match: nlp::NLPServer
> match: core::abstract_text::AlphaComparator
> match: core::file::Text::file_stat
> match: vsm::VSMIndex::sorter
> match: core::exec::CString::system
> match: core::Path::each_line
> match: core::FileStream::file_stat

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

### NLPClient

> match: nlp::NLPClient

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> match: nlp::NLPClient
> match: nlp
> match: nlp>
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex
> match: nlp::NLPProcessor
> match: core::Finalizable::finalize
> match: core::re::NativeRegex
> match: serialization>
> match: serialization
> match: core::FlatText::fast_cstring
> match: core::Object::SELF
> match: core::Object::object_id
> match: core::FlatText::items
> match: core::Bytes::items
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Object::output
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::Map
> match: core::flat::FlatBuffer::with_infos
> match: core::MaybeError
> match: core::Object::output_class_name
> match: pthreads::Mutex
> match: core::math::Float::is_nan
> match: core::Object::hash
> match: core::Pattern::split_in
> match: core::Writer::is_writable
> match: core::Collection::has_exactly
> match: dom::XMLEndTag::matching
> match: dom::XMLStartTag::matching
> match: meta::meta::Object::class_factory
> match: core::Object::is_same_type
> match: serialization::Deserializer::deserialize_class_intern

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

## NLPIndex

> match: nlp::NLPIndex

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> match: nlp
> match: nlp>
> match: vsm::Document::tfidf
> match: nlp::NLPIndex::nlp_processor
> match: nlp::NLPIndex
> match: vsm::Document::terms_frequency
> match: vsm::VSMIndex::inverse_doc_frequency
> match: vsm::Document::terms_count
> match: vsm::IndexMatch::document
> match: vsm::StringIndex
> match: vsm
> match: vsm>
> match: vsm::Vector::inc
> match: nlp::NLPClient
> match: nlp::NLPFileIndex
> match: dom::XMLAttribute
> match: vsm::Document
> match: vsm::VSMIndex::documents
> match: dom::XMLEndTag::matching
> match: dom::XMLStartTag::matching
> match: vsm::VSMIndex::index_document
> match: nlp::NLPProcessor
> match: dom::XMLSpecialTag
> match: nlp::NLPToken::pos
> match: dom::XMLTag::tag_name
> match: vsm::VSMIndex
> match: parser_base::StringProcessor::len
> match: dom::XMLAttrTag::attributes

~~~nit
import nlp

var proc = new NLPJavaProcessor("path/to/StanfordCoreNLP/jars")
var index = new NLPIndex(proc)

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

## TODO

> match: core::file::Text::files

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

> match: core::NativeArray::to_a
> match: opts::OptionEnum
> match: nlp
> match: nlp>
> match: opts::Option
> match: opts::OptionContext::options
> match: config::Config::add_option
> match: opts::Option::value
> match: opts::OptionCount
> match: nlp::NLPSentence::index
> match: nlp::NLPSentence

