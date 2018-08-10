# Nit wrapper for Stanford CoreNLP

> match: config
> match: config::config
> match: config>
> match: core
> match: core::Bytes::chexdigest
> match: core::NativeArray
> match: core::Text::escape_to_nit
> match: core::Text::unescape_nit
> match: core::abstract_collection::CoupleMapIterator
> match: core::abstract_text::Byte::native_byte_to_s
> match: core::abstract_text::Int::native_int_to_s
> match: core::abstract_text::Int::strerror_ext
> match: core::bytes::Text::unescape_to_bytes
> match: core::codec_base
> match: core::core
> match: core::fixed_ints_text::Int16::native_to_s
> match: core::fixed_ints_text::Int32::native_to_s
> match: core::fixed_ints_text::Int8::native_to_s
> match: core::fixed_ints_text::UInt16::native_to_s
> match: core::fixed_ints_text::UInt32::native_to_s
> match: core::flat::CString::to_s_with_length
> match: core::flat::UnicodeFlatString
> match: core::gc
> match: core::queue
> match: core>
> match: curl::native_curl::CURLSList::new
> match: meta
> match: meta::meta
> match: meta>
> match: nlp
> match: nlp::NLPServer
> match: nlp::NLPServer::java_cp
> match: nlp::stanford
> match: nlp>
> match: pthreads
> match: pthreads>
> match: serialization
> match: serialization::serialization_core
> match: serialization>

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> match: config
> match: config::Config::tool_description
> match: config::IniConfig
> match: config::config
> match: config>
> match: core
> match: core::Array::*
> match: core::Array::with_capacity
> match: core::Array::with_native
> match: core::ArrayCmp
> match: core::ArraySet
> match: core::ArraySet::with_capacity
> match: core::Buffer::append
> match: core::Buffer::camel_case
> match: core::Buffer::capitalize
> match: core::Buffer::from_text
> match: core::Buffer::snake_case
> match: core::Buffer::times
> match: core::Buffer::with_cap
> match: core::Buffer::written
> match: core::BytePattern
> match: core::Bytes::append_text
> match: core::Bytes::chexdigest
> match: core::Bytes::split_once_on
> match: core::CString
> match: core::CString::[]=
> match: core::CString::memset
> match: core::CircularArray
> match: core::CircularArray::enlarge
> match: core::Codec
> match: core::Collection
> match: core::Collection::has_exactly
> match: core::Collection::not_empty
> match: core::Couple
> match: core::DisjointSet
> match: core::DisjointSet::all_in_same_subset
> match: core::DisjointSet::in_same_subset
> match: core::Error::cause
> match: core::FileReader::open
> match: core::FileReader::reopen
> match: core::FileStat::atime
> match: core::FileStat::ctime
> match: core::FileStat::is_file
> match: core::FileStat::last_access_time
> match: core::FileStat::last_modification_time
> match: core::FileStat::last_status_change_time
> match: core::FileStat::mtime
> match: core::FileStream::set_buffering_mode
> match: core::Finalizable::finalize
> match: core::FlatBuffer::with_capacity
> match: core::FlatText
> match: core::FlatText::items
> match: core::Float::is_approx
> match: core::HashSet
> match: core::ISODate
> match: core::Int::digit_count
> match: core::Int::digit_count_base_10
> match: core::Iterator
> match: core::Iterator::finish
> match: core::Iterator::next_by
> match: core::Iterator::start
> match: core::Iterator::to_step
> match: core::ListIterator::item=
> match: core::Map
> match: core::Map::[]=
> match: core::MapComparator::map
> match: core::MapIterator::finish
> match: core::MapIterator::start
> match: core::MapRead::not_empty
> match: core::MapRead::provide_default_value
> match: core::Match
> match: core::Match::after
> match: core::Match::length
> match: core::Match::string
> match: core::Match::text_after
> match: core::Match::text_before
> match: core::MaybeError
> match: core::MinHeap
> match: core::NativeArray::[]=
> match: core::Numeric
> match: core::Numeric::to_i
> match: core::Object::==
> match: core::Object::SELF
> match: core::Object::hash
> match: core::Object::is_same_instance
> match: core::Object::is_same_type
> match: core::Object::object_id
> match: core::Object::output_class_name
> match: core::Path
> match: core::Path::dir
> match: core::Path::exists
> match: core::Path::filename
> match: core::Path::read_all_bytes
> match: core::Pointer
> match: core::ProcessDuplex::write_and_read
> match: core::ProcessReader::stream_in
> match: core::Queue
> match: core::Queue::take
> match: core::Queue::take_all
> match: core::Reader::append_line_to
> match: core::Reader::raw_read_byte
> match: core::Reader::raw_read_bytes
> match: core::Reader::read_bytes_to_cstring
> match: core::Reader::read_word
> match: core::Ref
> match: core::Regex
> match: core::Regex::not_bol
> match: core::Regex::not_eol
> match: core::Sequence::[]=
> match: core::Sequence::first=
> match: core::Sequence::insert
> match: core::Sequence::insert_all
> match: core::Sequence::last=
> match: core::Sequence::modulo=
> match: core::Set
> match: core::Set::intersection
> match: core::Set::new_set
> match: core::Set::union
> match: core::Stdin
> match: core::Stream::codec
> match: core::Stream::finish
> match: core::Stream::lookahead
> match: core::Stream::start
> match: core::StringReader
> match: core::StringWriter
> match: core::Sys
> match: core::Sys::run
> match: core::Task
> match: core::Text
> match: core::Text::*
> match: core::Text::a_to
> match: core::Text::bytes
> match: core::Text::chars
> match: core::Text::empty
> match: core::Text::escape_to_c
> match: core::Text::escape_to_mk
> match: core::Text::escape_to_sh
> match: core::Text::first
> match: core::Text::html_escape
> match: core::Text::is_empty
> match: core::Text::is_numeric
> match: core::Text::substring
> match: core::Text::to_camel_case
> match: core::Text::to_cmangle
> match: core::Text::to_snake_case
> match: core::TimeT::difftime
> match: core::TimeT::update
> match: core::Tm
> match: core::Tm::gmtime
> match: core::Tm::gmtime_from_timet
> match: core::Tm::localtime
> match: core::Tm::localtime_from_timet
> match: core::Writable
> match: core::abstract_collection::StepIterator
> match: core::abstract_text
> match: core::abstract_text::CString::to_s_unsafe
> match: core::abstract_text::Char::is_alphanumeric
> match: core::abstract_text::Char::is_numeric
> match: core::abstract_text::Collection::join
> match: core::abstract_text::Float::to_precision
> match: core::abstract_text::Int::fill_buffer
> match: core::abstract_text::Int::to_base
> match: core::abstract_text::Object::class_name
> match: core::abstract_text::Object::native_class_name
> match: core::abstract_text::Sys::args
> match: core::abstract_text::Sys::program_args
> match: core::abstract_text::Sys::program_name
> match: core::array
> match: core::array::ArrayMap::last_index
> match: core::array::ArraySetIterator
> match: core::bitset::Int::bits
> match: core::bitset::Int::highest_bit
> match: core::bitset::Int::setbit
> match: core::bytes::Int::to_bytes
> match: core::circular_array
> match: core::circular_array::CircularArray::native
> match: core::circular_array::CircularArray::offset
> match: core::codec_base
> match: core::environ::String::setenv
> match: core::file
> match: core::file::Int::isatty
> match: core::file::NativeFile::set_buffering_type
> match: core::file::NativeFileStat::atime
> match: core::file::NativeFileStat::ctime
> match: core::file::NativeFileStat::mtime
> match: core::file::Sys::getc
> match: core::file::Sys::gets
> match: core::file::Sys::stdin
> match: core::file::Text::file_exists
> match: core::file::Text::files
> match: core::file::Text::relpath
> match: core::file::Text::simplify_path
> match: core::file::Text::to_program_name
> match: core::file::Writable::write_to_file
> match: core::fixed_ints
> match: core::fixed_ints_text
> match: core::fixed_ints_text::Text::get_numext
> match: core::fixed_ints_text::Text::get_numhead
> match: core::fixed_ints_text::Text::strip_numext
> match: core::fixed_ints_text::Text::strip_numhead
> match: core::flat
> match: core::flat::CString::set_char_at
> match: core::flat::FlatBuffer::reset
> match: core::flat::FlatBuffer::with_infos
> match: core::hash_collection::HashCollection::raz
> match: core::hash_collection::HashCollection::store
> match: core::hash_collection::HashSetIterator
> match: core::hash_collection::HashSetIterator::set
> match: core::hash_collection::HashSetNode
> match: core::kernel
> match: core::math::Collection::rand
> match: core::math::Collection::sample
> match: core::math::Float::log
> match: core::math::Float::log_base
> match: core::math::Sys::atan2
> match: core::math::Sys::srand_from
> match: core::native
> match: core::native::Int::u8len
> match: core::numeric
> match: core::numeric::Text::to_n
> match: core::queue
> match: core::queue::Sequence::as_fifo
> match: core::queue::Sequence::as_lifo
> match: core::queue::SimpleCollection::as_random
> match: core::range::Int::times
> match: core::re
> match: core::re::NativeRegex
> match: core::re::NativeRegex::regcomp
> match: core::re::NativeRegex::regexec
> match: core::ropes
> match: core::ropes::RopeByteReverseIterator::subs
> match: core::ropes::RopeCharReverseIterator::subs
> match: core::sorter
> match: core::sorter::Sys::default_reverse_comparator
> match: core::stream
> match: core::string_search::Text::prefix
> match: core::string_search::Text::search_last
> match: core::string_search::Text::search_last_up_to
> match: core::string_search::Text::suffix
> match: core::test_abstract_text
> match: core::text
> match: core::time
> match: core::time::Sys::get_time
> match: core::union_find
> match: core::union_find::DisjointSet::nodes
> match: core::union_find::DisjointSetNode
> match: core::union_find::DisjointSetNode::rank
> match: core>
> match: core>text>
> match: counter
> match: counter::Counter::pack
> match: counter::counter
> match: counter>
> match: curl::CURLInfoDouble::appconnect_time
> match: curl::CURLInfoDouble::connect_time
> match: curl::CURLInfoDouble::namelookup_time
> match: curl::CURLInfoDouble::pretransfer_time
> match: curl::CURLInfoDouble::redirect_time
> match: curl::CURLInfoDouble::starttransfer_time
> match: curl::CURLInfoDouble::total_time
> match: curl::CURLOption::timeout
> match: curl::CURLOption::timeout_ms
> match: curl::CURLOption::transfert_text
> match: curl::CURLOption::unix_socket_path
> match: curl::CURLOption::wild_card_match
> match: curl::CURLStatusCode::request_entity_too_large
> match: curl::CurlFileResponseSuccess::total_time
> match: curl::CurlHTTPRequest
> match: curl::CurlHTTPRequest::body
> match: curl::CurlHTTPRequest::download_to_file
> match: curl::CurlHTTPRequest::execute
> match: curl::CurlHTTPRequest::method
> match: curl::CurlHTTPRequest::unix_socket_path
> match: curl::CurlHTTPRequest::user_agent
> match: curl::CurlMail::body
> match: curl::CurlMail::set_outgoing_server
> match: curl::HeaderMap
> match: curl::NativeCurl::easy_setopt
> match: curl::NativeCurl::escape
> match: curl::NativeCurl::register_read_datas_callback
> match: curl::curl::CurlHTTPRequest::prepare_request
> match: curl::curl::CurlHTTPRequest::set_body
> match: curl::curl::CurlHTTPRequest::set_curl_callback
> match: curl::curl::CurlHTTPRequest::set_curl_http_header
> match: curl::curl::CurlHTTPRequest::set_curl_options
> match: curl::curl::CurlHTTPRequest::set_method
> match: curl::curl::CurlRequest::answer_failure
> match: curl::curl::Sys::curl
> match: curl::native_curl::NativeCurl::native_setopt_file
> match: curl::native_curl::NativeCurl::native_setopt_int
> match: curl::native_curl::NativeCurl::native_setopt_slist
> match: curl::native_curl::NativeCurl::native_setopt_string
> match: dom::BadXMLAttribute
> match: dom::CDATA
> match: dom::PCDATA
> match: dom::XMLAttribute
> match: dom::XMLAttribute::name
> match: dom::XMLDoctypeTag::content
> match: dom::XMLEntity
> match: dom::XMLEntity::location
> match: dom::XMLEntity::parent=
> match: dom::XMLProcessingInstructionTag::content
> match: dom::XMLProcessor
> match: dom::XMLTag::tag_name
> match: dom::parser::XMLProcessor::parse_tag_name
> match: dom::xml_entities
> match: dom::xml_entities::XMLEntities
> match: dom::xml_entities::XMLEntities::entities
> match: ini::ConfigTree::[]=
> match: ini::ini::ConfigNode::name
> match: ini::ini::ConfigTree::set_array
> match: ini::ini::ConfigTree::set_node
> match: meta
> match: meta::Class::name
> match: meta::GetName
> match: meta::meta
> match: meta::meta::Object::class_factory
> match: meta>
> match: nlp
> match: nlp::NLPClient::language
> match: nlp::NLPDocument
> match: nlp::NLPDocument::sentences
> match: nlp::NLPFileIndex
> match: nlp::NLPJavaProcessor::java_cp
> match: nlp::NLPProcessor
> match: nlp::NLPSentence
> match: nlp::NLPSentence::index
> match: nlp::NLPServer
> match: nlp::NLPServer::java_cp
> match: nlp::NLPToken
> match: nlp::NLPToken::begin_offset
> match: nlp::NLPToken::end_offset
> match: nlp::NLPToken::index
> match: nlp::NLPToken::lemma
> match: nlp::NLPToken::word
> match: nlp::nlp
> match: nlp::stanford
> match: nlp>
> match: opts::Option::init_opt
> match: opts::Option::names
> match: opts::OptionArray::init
> match: opts::OptionBool::init
> match: opts::OptionContext::options_before_rest
> match: opts::OptionCount
> match: opts::OptionCount::init
> match: opts::OptionEnum
> match: opts::OptionEnum::init
> match: opts::OptionEnum::value_name
> match: opts::OptionFloat::init
> match: opts::OptionInt::init
> match: opts::OptionString::init
> match: opts::OptionText
> match: opts::OptionText::init
> match: parser_base
> match: parser_base::Location
> match: parser_base::StringProcessor::current_location
> match: parser_base::parser_base
> match: parser_base>
> match: poset
> match: poset::POSet
> match: poset::POSet::sub
> match: poset::POSetElement::direct_greaters
> match: poset::POSetElement::direct_smallers
> match: poset::POSetElement::greaters
> match: poset::POSetElement::smallers
> match: poset::poset
> match: poset>
> match: pthreads
> match: pthreads::Barrier
> match: pthreads::Mutex
> match: pthreads::pthreads::NativePthreadKey::set
> match: pthreads::pthreads::NativePthreadMutexAttr::set_type_errorcheck
> match: pthreads::pthreads::NativePthreadMutexAttr::set_type_normal
> match: pthreads::pthreads::NativePthreadMutexAttr::set_type_recursive
> match: pthreads>
> match: serialization
> match: serialization::AsyncCache
> match: serialization::AttributeError::attribute_name
> match: serialization::AttributeTypeError::expected_type
> match: serialization::CachingSerializer::link
> match: serialization::Deserializer::deserialize
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Deserializer::keep_going
> match: serialization::SerializerCache
> match: serialization::engine_tools
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::engine_tools::Text::strip_nullable
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: serialization::serialization_core
> match: serialization>
> match: vsm
> match: vsm::Document::terms_count
> match: vsm::Document::terms_frequency
> match: vsm::Document::tfidf
> match: vsm::StringIndex::parse_string
> match: vsm::VSMIndex
> match: vsm::VSMIndex::inverse_doc_frequency
> match: vsm::VSMIndex::inversed_index
> match: vsm::VSMIndex::terms_doc_count
> match: vsm::Vector
> match: vsm::Vector::cosine_similarity
> match: vsm::Vector::inc
> match: vsm::vsm
> match: vsm::vsm::TermComparator
> match: vsm>

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> match: core
> match: core::Finalizable
> match: core::MapRead::get_or_null
> match: core::Queue
> match: core::Reader::read_line
> match: core::Regex::compile
> match: core::Sys::is_windows
> match: core::Sys::run
> match: core::Task
> match: core::Text::has_substring
> match: core::Text::to_snake_case
> match: core::Writable::write_to_bytes
> match: core::abstract_collection::CoupleMapIterator
> match: core::abstract_text::Int::strerror_ext
> match: core::file::Text::mkdir
> match: core::file::Text::relpath
> match: core::file::Text::to_program_name
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::flat::FlatText::chars_to_html_escape
> match: core::queue
> match: core::ropes
> match: core>
> match: curl::CurlHTTPRequest::delegate
> match: curl::CurlMail::set_outgoing_server
> match: curl::curl::Sys::curl
> match: nlp
> match: nlp::NLPJavaProcessor
> match: nlp::NLPJavaProcessor::java_cp
> match: nlp::NLPServer
> match: nlp::NLPServer::java_cp
> match: nlp::NLPServer::port
> match: nlp::nlp_server::Config::opt_java_cp
> match: nlp::stanford
> match: nlp>
> match: pthreads
> match: pthreads::pthreads::Sys::native_pthread_self
> match: pthreads::pthreads::Sys::thread
> match: pthreads>
> match: serialization
> match: serialization>

See http://nlp.stanford.edu/software/corenlp.shtml.

> match: core::AbstractArrayRead::sub
> match: core::Buffer::camel_case
> match: core::Buffer::capitalize
> match: core::Buffer::snake_case
> match: core::CachedAlphaComparator
> match: core::DefaultReverseComparator
> match: core::FileStream::file_stat
> match: core::FinalizableOnce::finalize_once
> match: core::ISODate
> match: core::MapRead::[]
> match: core::Path
> match: core::Path::dir
> match: core::Path::each_line
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::Path::simplified
> match: core::Pattern::search_in
> match: core::Reader::each_line
> match: core::Reader::read_lines
> match: core::Text::capitalized
> match: core::Text::html_escape
> match: core::abstract_text::AlphaComparator
> match: core::abstract_text::Sys::alpha_comparator
> match: core::exec::CString::system
> match: core::file::FileStat::stat
> match: core::file::Text::file_lstat
> match: core::file::Text::file_stat
> match: core::file::Text::realpath
> match: core::fixed_ints
> match: core::math::Collection::sample
> match: core::ropes
> match: core::sorter::MapRead::keys_sorted_by_values
> match: core::sorter::MapRead::to_map_comparator
> match: curl::CURLStatusCode::see_other
> match: nlp
> match: nlp::NLPIndex::accept_token
> match: nlp::NLPServer
> match: nlp::nlp
> match: nlp::stanford
> match: nlp>
> match: poset::POSet
> match: poset::POSet::has_edge
> match: poset::POSet::show_dot
> match: pthreads
> match: pthreads>
> match: serialization
> match: serialization>
> match: vsm::FileIndex::index_dir
> match: vsm::FileIndex::index_file
> match: vsm::FileIndex::index_files
> match: vsm::FileIndex::parse_file
> match: vsm::StringIndex::index_string
> match: vsm::StringIndex::match_string
> match: vsm::VSMIndex::sorter

## NLPProcessor

> match: nlp
> match: nlp::NLPClient
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex
> match: nlp::NLPProcessor
> match: nlp>

### Java client

> match: config
> match: config::config
> match: config>
> match: core::CString::byte_to_char_index_cached
> match: core::CString::char_to_byte_index_cached
> match: core::DisjointSet
> match: core::MaybeError
> match: core::ropes
> match: curl::CURLInfoLong::rtsp_client_cseq
> match: nlp
> match: nlp::NLPJavaProcessor
> match: nlp::NLPJavaProcessor::java_cp
> match: nlp::NLPServer::java_cp
> match: nlp::NLPServer::port
> match: nlp::nlp_server::Config::opt_java_cp
> match: nlp>
> match: serialization
> match: serialization::AsyncCache
> match: serialization>
> match: vsm::VSMIndex::DOC

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

> match: nlp
> match: nlp::NLPClient
> match: nlp::NLPServer
> match: nlp>

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> match: config
> match: config::config
> match: config>
> match: core::Collection
> match: core::MapRead::provide_default_value
> match: core::Object::object_id
> match: core::Path
> match: core::Task
> match: core::Writable
> match: core::abstract_collection::CoupleMapIterator
> match: core::abstract_text::Int::strerror_ext
> match: core::fixed_ints
> match: core::kernel
> match: core::queue
> match: core::queue::SimpleCollection::as_random
> match: core::re::NativeRegex::regexec
> match: core::ropes
> match: core::sorter
> match: dom::XMLAttribute
> match: dom::XMLProcessor
> match: meta
> match: meta::meta
> match: meta>
> match: nlp
> match: nlp::NLPClient
> match: nlp::NLPProcessor
> match: nlp::NLPServer
> match: nlp>
> match: poset::POSet::sub
> match: pthreads
> match: pthreads>
> match: serialization::serialization_core
> match: vsm
> match: vsm::VSMIndex::inverse_doc_frequency
> match: vsm>

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

> match: core::AbstractArrayRead::sub
> match: core::Buffer::camel_case
> match: core::Buffer::capitalize
> match: core::Buffer::snake_case
> match: core::CachedAlphaComparator
> match: core::DefaultReverseComparator
> match: core::FileStream::file_stat
> match: core::FinalizableOnce::finalize_once
> match: core::ISODate
> match: core::MapRead::[]
> match: core::Path
> match: core::Path::dir
> match: core::Path::each_line
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::Path::simplified
> match: core::Pattern::search_in
> match: core::Reader::each_line
> match: core::Reader::read_lines
> match: core::Text::capitalized
> match: core::Text::html_escape
> match: core::abstract_text::AlphaComparator
> match: core::abstract_text::Sys::alpha_comparator
> match: core::exec::CString::system
> match: core::file::FileStat::stat
> match: core::file::Text::file_lstat
> match: core::file::Text::file_stat
> match: core::file::Text::realpath
> match: core::fixed_ints
> match: core::math::Collection::sample
> match: core::ropes
> match: core::sorter::MapRead::keys_sorted_by_values
> match: core::sorter::MapRead::to_map_comparator
> match: curl::CURLStatusCode::see_other
> match: nlp
> match: nlp::NLPIndex::accept_token
> match: nlp::NLPServer
> match: nlp::nlp
> match: nlp::stanford
> match: nlp>
> match: poset::POSet
> match: poset::POSet::has_edge
> match: poset::POSet::show_dot
> match: pthreads
> match: pthreads>
> match: serialization
> match: serialization>
> match: vsm::FileIndex::index_dir
> match: vsm::FileIndex::index_file
> match: vsm::FileIndex::index_files
> match: vsm::FileIndex::parse_file
> match: vsm::StringIndex::index_string
> match: vsm::StringIndex::match_string
> match: vsm::VSMIndex::sorter

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

### NLPClient

> match: nlp
> match: nlp::NLPClient
> match: nlp>

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> match: nlp
> match: nlp::NLPClient
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex
> match: nlp::NLPProcessor
> match: nlp::NLPServer
> match: nlp>

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

## NLPIndex

> match: nlp
> match: nlp::NLPIndex
> match: nlp>

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> match: config
> match: config::config
> match: config>
> match: core::Regex::extended
> match: core::Writable
> match: core::abstract_text::BufferByteView
> match: core::abstract_text::BufferCharView
> match: core::re::Sys::flag_extended
> match: dom::XMLAttrTag
> match: dom::XMLAttrTag::attributes
> match: dom::XMLAttribute
> match: dom::XMLCommentTag
> match: dom::XMLDoctypeTag
> match: dom::XMLEndTag
> match: dom::XMLEndTag::matching
> match: dom::XMLOnelinerTag
> match: dom::XMLProcessingInstructionTag
> match: dom::XMLProcessor::parse_document
> match: dom::XMLPrologTag
> match: dom::XMLSpecialTag
> match: dom::XMLStartTag
> match: dom::XMLStartTag::matching
> match: dom::XMLTag
> match: dom::XMLTag::tag_name
> match: dom::dom::XMLStartTag::data
> match: dom::parser::XMLProcessor::parse_args
> match: dom::parser::XMLProcessor::parse_doctype
> match: dom::parser::XMLProcessor::parse_tag_name
> match: dom::parser::XMLProcessor::read_end_tag
> match: dom::parser::XMLProcessor::read_prolog_tag
> match: dom::parser::XMLProcessor::read_special_tag
> match: dom::parser::XMLProcessor::read_start_tag
> match: dom::parser::XMLProcessor::read_tag
> match: dom::xml_entities
> match: nlp
> match: nlp::NLPClient
> match: nlp::NLPClient::annotators
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex
> match: nlp::NLPIndex::blacklist_pos
> match: nlp::NLPIndex::nlp_processor
> match: nlp::NLPIndex::whitelist_pos
> match: nlp::NLPProcessor
> match: nlp::NLPToken::pos
> match: nlp>
> match: parser_base::Location
> match: parser_base::StringProcessor::len
> match: parser_base::StringProcessor::src
> match: vsm
> match: vsm::Document
> match: vsm::Document::terms_count
> match: vsm::Document::terms_frequency
> match: vsm::Document::tfidf
> match: vsm::FileIndex::index_file
> match: vsm::IndexMatch::document
> match: vsm::StringIndex
> match: vsm::StringIndex::match_string
> match: vsm::StringIndex::parse_string
> match: vsm::VSMIndex
> match: vsm::VSMIndex::DOC
> match: vsm::VSMIndex::documents
> match: vsm::VSMIndex::index_document
> match: vsm::VSMIndex::inverse_doc_frequency
> match: vsm::VSMIndex::inversed_index
> match: vsm::VSMIndex::match_vector
> match: vsm::VSMIndex::terms_doc_count
> match: vsm::VSMIndex::update_index
> match: vsm::Vector
> match: vsm::Vector::inc
> match: vsm::vsm
> match: vsm::vsm::TermComparator
> match: vsm>

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

> match: config
> match: config::Config::add_option
> match: config::Config::args
> match: config::Config::help
> match: config::Config::opt_help
> match: config::Config::opt_stub_man
> match: config::Config::opts
> match: config::Config::parse_options
> match: config::Config::stub_man_options
> match: config::Config::tool_description
> match: config::Config::usage
> match: config::IniConfig::config_file
> match: config::IniConfig::ini
> match: config::config
> match: config>
> match: core::Buffer::append_substring_impl
> match: core::FlatText::fast_cstring
> match: core::NativeArray::to_a
> match: core::Reader::read_line
> match: core::abstract_text::CString::to_s_unsafe
> match: core::math::Collection::sample
> match: core::queue::Sequence::as_fifo
> match: core::queue::Sequence::as_lifo
> match: curl::CURLCode::unknown_option
> match: curl::NativeCurl::easy_perform
> match: curl::NativeCurl::easy_setopt
> match: curl::curl::CurlHTTPRequest::prepare_request
> match: curl::curl::CurlHTTPRequest::set_curl_options
> match: curl::native_curl::NativeCurl::native_setopt_file
> match: curl::native_curl::NativeCurl::native_setopt_int
> match: curl::native_curl::NativeCurl::native_setopt_slist
> match: curl::native_curl::NativeCurl::native_setopt_string
> match: nlp
> match: nlp::NLPDocument
> match: nlp::NLPDocument::sentences
> match: nlp::NLPProcessor
> match: nlp::NLPSentence
> match: nlp::NLPSentence::index
> match: nlp::NLPToken::index
> match: nlp>
> match: opts
> match: opts::Option
> match: opts::Option::VALUE
> match: opts::Option::add_aliases
> match: opts::Option::default_value
> match: opts::Option::helptext
> match: opts::Option::hidden
> match: opts::Option::init
> match: opts::Option::init_opt
> match: opts::Option::mandatory
> match: opts::Option::names
> match: opts::Option::read
> match: opts::Option::read_param
> match: opts::Option::value
> match: opts::OptionArray
> match: opts::OptionBool
> match: opts::OptionContext
> match: opts::OptionContext::add_option
> match: opts::OptionContext::errors
> match: opts::OptionContext::options
> match: opts::OptionContext::options_before_rest
> match: opts::OptionContext::parse
> match: opts::OptionContext::rest
> match: opts::OptionContext::usage
> match: opts::OptionCount
> match: opts::OptionEnum
> match: opts::OptionFloat
> match: opts::OptionInt
> match: opts::OptionParameter
> match: opts::OptionString
> match: opts::OptionText
> match: opts::opts
> match: opts>
> match: serialization::CachingSerializer::link
> match: vsm::VSMIndex::update_index

