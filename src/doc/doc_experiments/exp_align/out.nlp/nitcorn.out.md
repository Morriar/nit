# Lightweight framework for Web applications development

> match: nitcorn::nitcorn

## Features

> match: nitcorn>

Dynamic content is served by subclassing `Action` and implementing `answer`.
This method receives an `HttpRequest` and must return an `HttpResponse`.
_nitcorn_ provides `FileServer`, a simple `Action` to serve static files.

> match: nitcorn::Action
> match: nitcorn>
> match: nitcorn
> match: nitcorn::FileServer
> match: nitcorn::HTCPCPAction
> match: nitcorn::FileServer::default_file
> match: core::file::FileStream::file
> match: nitcorn::nitcorn
> match: nitcorn::reactor::Action::prepare_respond_and_close
> match: curl::CurlHTTPRequest::method
> match: core::file::Int::fd_to_stream
> match: nitcorn::HttpRequest::method
> match: nitcorn::restful
> match: nitcorn::reactor::Action::answer
> match: core::Object::SELF
> match: core::Collection
> match: template::Template
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Reader::read_all
> match: core::Buffer::from_text
> match: pthreads>
> match: pthreads
> match: core::file::Sys::wipe_write
> match: core::Reader::read_all_bytes
> match: curl::curl::CurlFileResponseSuccess::file
> match: core::file::Text::file_copy_to
> match: template::template::Template::content
> match: core::queue::Sequence::as_fifo
> match: core::FileStream::fd
> match: core::FileReader::from_fd
> match: core::Finalizable::finalize
> match: core::Task
> match: pthreads::ThreadPool
> match: core::Object::is_same_type
> match: curl::curl::CurlRequest::answer_failure
> match: nitcorn::RestfulTask::action
> match: serialization>
> match: serialization
> match: core::FileStat
> match: core::Path::copy
> match: nitcorn::RestfulAction
> match: core::abstract_text::CString::fill_from
> match: core::Path
> match: nitcorn::HttpRequest
> match: core::Path::read_all_bytes
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Path::read_all
> match: core::FileWriter::from_fd
> match: core::Path::rmdir
> match: nitcorn::StaticAction
> match: core::Path::delete
> match: core::Path::filename
> match: core::Path::stat
> match: core::Path::each_line
> match: core::Path::exists
> match: nitcorn::FileServer::cache_control
> match: serialization::Deserializer::deserialize_attribute
> match: json>
> match: json
> match: core::Object::output
> match: libevent::Connection::write_file
> match: nitcorn::Route
> match: core::file::Text::file_extension
> match: core::file::Text::file_exists
> match: nitcorn::vararg_routes::UriPart
> match: core::Object::output_class_name
> match: nitcorn::Route::handler
> match: curl::CurlMail::body
> match: nitcorn::vararg_routes::UriString
> match: core::Error::message
> match: core::Process
> match: core::Path::open_wo
> match: nitcorn::HttpServer::delegate_answer
> match: core::Writable
> match: core::Buffer::capitalize
> match: core::Buffer::new
> match: core::Path::open_ro
> match: core::Reader::read_nonwhitespace
> match: core::fixed_ints_text::UInt32::to_s_len
> match: core::fixed_ints_text::UInt16::to_s_len
> match: core::fixed_ints_text::Int8::to_s_len
> match: core::fixed_ints_text::Int32::to_s_len
> match: core::Couple
> match: json::dynamic
> match: template::Template::new_sub
> match: serialization::Deserializer::deserialize_class
> match: nitcorn::ServerConfig::virtual_hosts
> match: nitcorn::FileServer::answer_default
> match: core::file::NativeFileStat::is_reg
> match: nitcorn::HttpRequestParser
> match: core::Collection::has_exactly
> match: nitcorn::MyAction::complex_args
> match: core::abstract_text::Byte::byte_to_s_len

`HttpRequest` contains the GET and POST arguments as well as session data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

> match: nitcorn::sessions::HttpRequest::session
> match: nitcorn::sessions::HttpResponse::session
> match: nitcorn::Session
> match: nitcorn>
> match: nitcorn
> match: curl::CurlHTTPRequest::data
> match: curl::CurlHTTPRequest::body
> match: nitcorn::ErrorTemplate::code
> match: nitcorn::sessions::Sys::sessions
> match: curl::CURLSList::append
> match: curl::CURLOption::get
> match: nitcorn::sessions
> match: curl::NativeCurl::easy_getinfo_chars
> match: core::Path::exists
> match: core::list::ListIterator::list
> match: nitcorn::HttpResponse::body
> match: nitcorn::Session::id_hash
> match: nitcorn::HttpResponse::files
> match: curl::NativeCurl::easy_getinfo_long
> match: curl::NativeCurl::easy_getinfo_slist
> match: more_collections::UnrolledList
> match: curl::NativeCurl::easy_getinfo_double
> match: nitcorn::http_request::HttpRequestParser::body
> match: nitcorn::HttpRequest::body
> match: core::file::Sys::wipe_write
> match: nitcorn::reactor::Action::answer
> match: curl::CURLOption::append
> match: core::file::FileStream::file
> match: nitcorn::ErrorTemplate::body
> match: core::Process::status
> match: nitcorn::HttpRequest::all_args
> match: nitcorn::HttpStatusCodes::[]
> match: nitcorn::HttpStatusCodes::init
> match: curl::CURLOption::post
> match: nitcorn::MyAction::complex_args
> match: core::exec::NativeProcess::status
> match: core::Path::files
> match: curl::CURLOption::postfields
> match: curl::CURLCode::code
> match: pthreads::pthreads::NativePthreadKey::get
> match: nitcorn::HttpRequest::string_arg
> match: nitcorn::restful
> match: core::Path::delete
> match: template::Template::addn
> match: nitcorn::HttpResponse
> match: core::file::Int::fd_to_stream
> match: nitcorn::HttpStatusCodes
> match: nitcorn::HttpResponse::status_code
> match: core::Collection::has_only
> match: more_collections::MultiHashMap::remove_one
> match: nitcorn::HttpRequest::int_arg
> match: curl::HeaderMap::[]
> match: core::exec::Process::data
> match: curl::curl::CurlFileResponseSuccess::file
> match: core::abstract_text::CString::to_s_unsafe
> match: core::Path
> match: nitcorn::ErrorTemplate
> match: nitcorn::HttpRequest::bool_arg

Each `Action` may be associated to many instances of `Route`.
These routes can simply identify the root of a service,
but also define parameters within the URI.

> match: nitcorn::Route
> match: nitcorn>
> match: nitcorn
> match: nitcorn::Route::handler
> match: nitcorn::Routes
> match: nitcorn::FileServer::root
> match: nitcorn::vararg_routes
> match: json::serialization_read::JsonDeserializer::root
> match: nitcorn::Routes::routes
> match: nitcorn::vararg_routes::UriParam::name
> match: pthreads::Mutex
> match: nitcorn::Action
> match: nitcorn::VirtualHost::routes
> match: core::Finalizable::finalize
> match: nitcorn::Routes::[]
> match: serialization::Deserializer
> match: nitcorn::reactor::Action::answer
> match: serialization::Serializer
> match: core::Object::SELF
> match: serialization>
> match: serialization
> match: core::Map
> match: core::bytes::Int::to_bytes
> match: serialization::Deserializer::deserialize_class_intern
> match: meta
> match: meta>
> match: core::Collection
> match: more_collections::UnrolledList::nodes_length
> match: meta::meta
> match: core::Object
> match: core::Object::hash
> match: core::Sys
> match: core::ProcessDuplex
> match: nitcorn::vararg_routes::UriPart
> match: core::re::NativeMatchArray::[]
> match: nitcorn::nitcorn
> match: nitcorn::MyAction::complex_args
> match: serialization::Serializable
> match: core::flat::FlatText::chars_to_escape_to_c
> match: json::JsonDeserializer::class_name_heuristic
> match: core::String
> match: core::Collection::count
> match: json>
> match: json
> match: core::Object::object_id
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::DeserializerCache::[]=
> match: core>collection>
> match: core::Writable
> match: core::Cloneable
> match: pthreads::ConcurrentCollection::mutex
> match: core::Codec::max_lookahead
> match: curl::CurlHTTPRequest::execute
> match: nitcorn::HttpStatusCodes
> match: json::JsonSerializer::plain_json
> match: pthreads>
> match: pthreads
> match: nitcorn::sessions::HttpResponse::session
> match: libevent::Connection::close_requested
> match: nitcorn::restful
> match: core::Reader
> match: core::Writer
> match: core::math::Int::sqrt
> match: core::flat::FlatText::chars_to_html_escape
> match: core::FlatText::fast_cstring
> match: core::union_find::DisjointSetNode::parent
> match: core::Bytes::items
> match: json::JsonDeserializer::attributes_path
> match: performance_analysis::PerfMap
> match: core::Duplex
> match: core::SimpleCollection
> match: core::Writer::is_writable

_nitcorn_ instances are configured dynamically in Nit code with the interfaces and routes created as needed.

> match: nitcorn>
> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn::ErrorTemplate::code
> match: curl::CURLCode::code
> match: nitcorn::Route
> match: nitcorn::Interface
> match: core::Writable
> match: pthreads::pthreads::NativePthread::create
> match: core::Cloneable
> match: nitcorn::HttpStatusCodes::codes
> match: core::Object::object_id
> match: serialization>
> match: serialization
> match: serialization::Serializable::from_deserializer
> match: nitcorn::VirtualHost::interfaces
> match: nitcorn::VirtualHost::init
> match: json::static::Text::json_need_escape
> match: nitcorn::Routes
> match: core::flat::FlatText::chars_to_escape_to_c
> match: nitcorn::vararg_routes
> match: nitcorn::Interfaces
> match: nitcorn::Routes::routes
> match: core::Object::hash
> match: nitcorn::Route::handler
> match: nitcorn::vararg_routes::UriParam::name
> match: nitcorn::VirtualHost::routes
> match: core::Object::SELF
> match: curl::native_curl::NativeCurl::native_register_read_datas_callback
> match: nitcorn::Routes::[]
> match: json::serialization_read::Text::deserialize_json
> match: core::FileStat
> match: nitcorn::pthreads
> match: core::Writable::write_to_bytes
> match: nitcorn::ProxyAction::target
> match: core::Task
> match: nitcorn::Interface::name
> match: nitcorn::HttpStatusCodes
> match: core::Finalizable::finalize
> match: core::Int::code_point
> match: json::JsonSerializer::plain_json
> match: core::native::UInt32::code_point
> match: core::Process::execute
> match: core::Queue
> match: curl::CURLStatusCode::created
> match: core::Array::from
> match: nitcorn::restful
> match: core::Char::code_point
> match: curl::CurlMail::set_outgoing_server
> match: core::Text::to_snake_case
> match: core::Text::substring_from
> match: core::BytesWriter
> match: nitcorn::HttpFactory
> match: libevent::ConnectionListener
> match: core::FlatBuffer::from
> match: more_collections::UnrolledList::nodes_length
> match: core::exec::Sys::system
> match: nitcorn::HttpResponse::status_code
> match: core::Finalizable
> match: opts::Option::init
> match: json::JsonDeserializer::class_name_heuristic
> match: nitcorn::ErrorTemplate
> match: core::CString::new
> match: core::Range::init
> match: core::Text::has_substring
> match: nitcorn::FileServer::error_page
> match: core::Sys
> match: core::Char::+
> match: core::Char::-
> match: curl::CurlHTTPRequest::execute

_nitcorn_ plays well with other Nit services and tools such as `serialization`, `mongodb`, `sqlite` and `nitiwiki`.
It also benefits from the full power of the Nit language:
class refinement can be used to customize default services and merge many applications in a single server,
and the FFI enables calling services in different languages.

> match: nitcorn>
> match: nitcorn
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Deserializer
> match: serialization::Serializer
> match: serialization>
> match: serialization
> match: json>
> match: json
> match: serialization::Deserializer::deserialize_class_intern
> match: json::JsonSerializer::plain_json
> match: serialization::serialization
> match: pthreads::Mutex
> match: serialization::Serializable::core_serialize_to
> match: json::JsonDeserializer::class_name_heuristic
> match: nitcorn::restful
> match: serialization::Serializer::serialize_core
> match: libevent::NativeBufferEvent::enable
> match: core::Finalizable::finalize
> match: core::re::NativeRegex
> match: more_collections::DefaultMap
> match: pthreads::ConcurrentCollection::mutex
> match: core::Collection
> match: core::Task
> match: json::serialization_write::Serializable::serialize_to_json
> match: pthreads>
> match: pthreads
> match: more_collections::DefaultMap::default
> match: nitcorn::nitcorn
> match: core::abstract_text::CString::to_s_full
> match: core::Ref
> match: core::NativeArray
> match: nitcorn::MyAction::complex_args
> match: serialization::Serializer::serialize
> match: nitcorn::reactor::Action::prepare_respond_and_close
> match: core::Path
> match: core::Sys
> match: core::Object::is_same_type
> match: curl::native_curl::CURLSList::new
> match: json::json
> match: nitcorn::HttpServer
> match: more_collections::UnrolledList
> match: core::Object
> match: more_collections::more_collections::UnrolledNode::full
> match: core::Object::!=
> match: core::Object::SELF
> match: core::Codec::max_lookahead
> match: core::Object::object_id
> match: core::re::Regex::native_match
> match: core::flat::UnicodeFlatString
> match: more_collections::UnrolledList::nodes_length
> match: meta
> match: meta>
> match: json::JsonSerializer
> match: core::Stream::finish
> match: template::Template
> match: core::core
> match: meta::meta
> match: core::FlatText::fast_cstring
> match: core::Text::unescape_nit
> match: serialization::engine_tools::Object::serialization_hash
> match: curl::curl::Sys::curl
> match: core::sorter::Comparator::merge
> match: libevent::NativeEventBase
> match: core::Bytes::items
> match: json::JSONStringParser::parse_json_string
> match: core::fixed_ints_text::UInt32::native_to_s
> match: core::fixed_ints_text::Int16::native_to_s
> match: core::fixed_ints_text::UInt16::native_to_s
> match: core::fixed_ints_text::Int8::native_to_s
> match: core::fixed_ints_text::Int32::native_to_s
> match: json::static::Text::json_to_nit_string
> match: serialization::engine_tools::Object::is_same_serialized
> match: core::Comparable::OTHER
> match: serialization::Serializer::serialize_reference
> match: core::abstract_text::CString::to_s_unsafe
> match: serialization::SafeDeserializer::check_subtypes
> match: core::abstract_text::Byte::native_byte_to_s
> match: pthreads::Barrier

## Examples

> match: json::static::Text::parse_json
> match: pthreads>examples>
> match: curl>examples>
> match: serialization>examples>
> match: nitcorn>examples>
> match: template>examples>
> match: privileges>examples>

A minimal example follows with a custom `Action` and using `FileServer`.

> match: nitcorn::Action
> match: json::static::Text::parse_json
> match: nitcorn::FileServer
> match: nitcorn>
> match: nitcorn
> match: nitcorn::nitcorn_reverse_proxy
> match: curl::CurlHTTPRequest
> match: pthreads>examples>
> match: curl::CURLOption::follow_location
> match: curl>examples>
> match: core::flat::FlatString::with_infos
> match: curl::CURLOption::custom_request
> match: base64::base64::Text::encode_base64
> match: serialization>examples>
> match: base64::base64::Bytes::encode_base64
> match: nitcorn>examples>
> match: template>examples>
> match: privileges>examples>
> match: core::Text::capitalized
> match: serialization::Serializer::current_object
> match: base64::base64::Text::decode_base64
> match: base64::base64::Bytes::decode_base64
> match: core::Path::link_stat
> match: serialization::Serializable::core_serialize_to
> match: core::re::NativeRegex
> match: core::Buffer::capitalize
> match: nitcorn::HTCPCPAction
> match: nitcorn::RestfulTask::action
> match: curl::CurlHTTPRequest::execute
> match: core::Regex::not_eol
> match: core::MaybeError
> match: nitcorn::MyAction::async_service

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _nitcorn_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

> match: nitcorn>
> match: nitcorn
> match: json::static::Text::parse_json
> match: nitcorn::MyData::more
> match: nitcorn::ServerConfig
> match: nitcorn::HttpFactory::config
> match: nitcorn::nitcorn
> match: pthreads>examples>
> match: nitcorn::VirtualHost::server_config
> match: curl>examples>
> match: serialization>examples>
> match: nitcorn>examples>
> match: core::Queue::take
> match: template>examples>
> match: privileges>examples>
> match: core::flat::FlatText::chars_to_html_escape
> match: core::sorter::Comparator::merge
> match: pthreads::Mutex
> match: curl::CurlHTTPRequest
> match: core::flat::FlatText::chars_to_escape_to_c
> match: libevent::NativeEventBase
> match: serialization>
> match: serialization
> match: nitcorn::MyAction::complex_args
> match: serialization::Deserializer::deserialize_class
> match: nitcorn::VirtualHost
> match: core::Queue::peek
> match: core::Finalizable::finalize
> match: core::Collection::count
> match: nitcorn::HTCPCServer
> match: libevent::Connection::read_callback
> match: core::Codec::max_lookahead
> match: nitcorn::nitcorn_reverse_proxy
> match: pthreads::Mutex::lock
> match: curl::CurlResponseFailed
> match: nitcorn::Session
> match: opts::OptionContext::usage
> match: core::Object::SELF
> match: nitcorn::FileServer
> match: nitcorn::pthreads
> match: nitcorn::HttpServer
> match: performance_analysis::PerfMap
> match: template::Template
> match: performance_analysis::performance_analysis::Sys::perfs
> match: json>
> match: json
> match: serialization::Deserializer::deserialize_class_intern
> match: template::Template::is_frozen
> match: nitcorn::VirtualHosts::config

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

> match: nitcorn>
> match: nitcorn
> match: core::union_find::DisjointSet::find
> match: json::JsonSerializer::plain_json
> match: serialization>
> match: serialization
> match: nitcorn::FileServer::root
> match: nitcorn::nitcorn
> match: nitcorn::pthreads
> match: core::ProcessDuplex
> match: core::re::NativeRegex
> match: core::Finalizable::finalize
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Map
> match: core::Bytes::items
> match: core::Writer::is_writable
> match: pthreads::Mutex
> match: pthreads::ConcurrentCollection::mutex
> match: core::Object::SELF
> match: core::Reader
> match: core::Writer
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: more_collections::UnrolledList::nodes_length
> match: core::Iterator::start
> match: core::MapIterator::start
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Object::output
> match: core::bytes::Int::to_bytes
> match: nitcorn::MyAction::complex_args
> match: serialization::DeserializerCache
> match: core::re::NativeMatchArray::[]
> match: core::Duplex
> match: core::SimpleCollection
> match: core::Comparable::OTHER
> match: core::Object::output_class_name
> match: serialization::Serializable
> match: core::RemovableCollection
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Stream::start
> match: core::Task
> match: core::Cloneable
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Error::message
> match: core::Object::is_same_type
> match: nitcorn::HttpFactory::and_libevent
> match: pthreads>
> match: pthreads
> match: core::abstract_text::Sys::alpha_comparator
> match: core::FlatText::fast_cstring
> match: core::Writable
> match: nitcorn::HTCPCPAction
> match: json>
> match: json
> match: serialization::Serializer::serialize_core
> match: core::BytePattern
> match: serialization::Serializer::current_object
> match: nitcorn::token::Sys::generate_token
> match: json::JsonMapRead
> match: template::Template
> match: json::JsonSequenceRead
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::object_id
> match: serialization::SafeDeserializer
> match: nitcorn::reactor::Action::prepare_respond_and_close
> match: core::file::Text::files
> match: nitcorn::restful
> match: serialization::Deserializer::deserialize_attribute
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::FlatText::items
> match: serialization::Serializable::core_serialize_to
> match: curl::CurlHTTPRequest::execute
> match: poset::POSet
> match: nitcorn::HTCPCServer
> match: meta::meta::Object::get_class
> match: core::flat::FlatText::chars_to_escape_to_c
> match: nitcorn::vararg_routes
> match: nitcorn::vararg_routes::UriPart
> match: core::DisjointSet

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful interface.

> match: nitcorn>
> match: nitcorn
> match: nitcorn::nitcorn
> match: libevent::ConnectionListener::base
> match: core::abstract_text::Int::fill_buffer
> match: libevent::NativeEventBase::reinit
> match: core::math::Float::log_base
> match: core::Match::string
> match: nitcorn::pthreads
> match: core::abstract_text::Int::to_base
> match: core::Buffer::with_cap
> match: core::Int::digit_count_base_10
> match: base64
> match: core::Text::a_to
> match: base64>
> match: parser_base
> match: parser_base>
> match: core::Finalizable::finalize
> match: core::Int::digit_count
> match: nitcorn::HttpFactory
> match: serialization>
> match: serialization
> match: core::Object::hash
> match: nitcorn::HTCPCServer
> match: libevent::NativeEventBase::dispatch
> match: json::JsonDeserializer::class_name_heuristic
> match: nitcorn::HTCPCPAction
> match: core::Collection::has_exactly
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Writable::write_to_string
> match: nitcorn::token
> match: core::Sys
> match: json::serialization_read::Text::deserialize_json
> match: json::JsonSerializer::plain_json
> match: core::FlatText::items
> match: core::ProcessDuplex
> match: core::flat::FlatBuffer::with_infos
> match: core::Object::output
> match: core::Map
> match: core::Error::message
> match: pthreads::Mutex
> match: more_collections::UnrolledList::nodes_length
> match: core::codec_base
> match: core::Writable
> match: nitcorn::restful
> match: core::Buffer::written
> match: nitcorn>
> match: nitcorn
> match: nitcorn::restful
> match: nitcorn::nitcorn
> match: nitcorn::Interface
> match: core::Writable
> match: nitcorn::VirtualHost::interfaces
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn::Interfaces
> match: core::Cloneable
> match: core::Process
> match: nitcorn::FileServer
> match: core::Couple
> match: core::ropes::RopeCharIteratorPiece
> match: pthreads::ThreadPool
> match: nitcorn::ProxyAction::target
> match: nitcorn::Interface::name
> match: nitcorn::nitcorn_hello_world
> match: json::JSONStringParser
> match: nitcorn::MyData
> match: parser_base
> match: serialization::Serializer::serialize_reference
> match: parser_base>
> match: core::Finalizable::finalize
> match: serialization>
> match: serialization
> match: libevent::ConnectionListener
> match: core::Process::from_a
> match: json::serialization_read::JsonDeserializer::convert_object
> match: more_collections::HashMap2
> match: core::Finalizable
> match: core::Path::open_wo
> match: more_collections::HashMap3
> match: core::Path::open_ro
> match: json::JsonDeserializer::class_name_heuristic
> match: more_collections::MultiHashMap
> match: core::Collection::has_exactly
> match: template::Template
> match: core::Queue
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Writable::write_to_string
> match: more_collections::HashMap4
> match: core::Sys
> match: json::serialization_read::Text::deserialize_json
> match: json::JsonSerializer::plain_json
> match: core::Object::hash
> match: nitcorn::token::Sys::generate_token
> match: nitcorn>
> match: nitcorn
> match: core::list::ListIterator::list
> match: nitcorn::Action
> match: nitcorn::Interfaces
> match: nitcorn::RestfulAction
> match: nitcorn::Interface
> match: nitcorn::restful
> match: more_collections::more_collections::UnrolledIterator::list
> match: core::ropes::RopeCharIteratorPiece
> match: nitcorn::MyAction
> match: core::List
> match: more_collections::UnrolledList
> match: nitcorn::VirtualHost::interfaces
> match: core>collection>
> match: core::Collection::not_empty
> match: core::MapRead::not_empty
> match: core::ListIterator
> match: core::list::ListIterator::node
> match: curl::CURLSList::append
> match: nitcorn::ProxyAction::target
> match: nitcorn::Routes
> match: core::list::List::tail
> match: core::list::List::head
> match: nitcorn::Interface::name
> match: core::Writable
> match: curl::HeaderMap::[]
> match: core::Cloneable
> match: curl::CURLOption::custom_request
> match: base64::base64::Text::encode_base64
> match: base64::base64::Bytes::encode_base64
> match: core::List::from
> match: curl::CURLSList
> match: curl::CURLOption::dir_list_only
> match: core::HashSet::from
> match: serialization::Serializer::current_object
> match: pthreads::ConcurrentList
> match: core::HashMap::from
> match: base64::base64::Text::decode_base64
> match: base64::base64::Bytes::decode_base64
> match: core::List::slice
> match: nitcorn::vararg_routes::HttpRequest::params

### Simple hello world server

> match: nitcorn::FileServer
> match: nitcorn::nitcorn_hello_world
> match: nitcorn>
> match: nitcorn
> match: core::Process
> match: core::Couple
> match: nitcorn::ServerConfig
> match: nitcorn::Session

~~~
import nitcorn

# Simple Action to display the Hello World page and the get arguments
class HelloWorldAction
	super Action

	redef fun answer(http_request, turi)
	do
		var title = "Hello World!"
		var args = http_request.get_args.join(",", ":")

		var response = new HttpResponse(200)
		response.body = """
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>{{{title}}}</title>
</head>
<body>
	<h1>{{{title}}}</h1>
	<p>GET args: {{{args}}}</p>
</body>
</html>"""
		return response
	end
end

# Listen on `localhost:8080`
var vh = new VirtualHost("localhost:8080")

# Serve `http://localhost:8080/hello.html` with our custom action
vh.routes.add new Route("/hello.html", new HelloWorldAction)

# Serve everything else under `http://localhost:8080/` using a `FileServer` with a root at "/var/www/"
vh.routes.add new Route(null, new FileServer("/var/www/"))

# Launch server
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~

## Credits

This nitcorn library is a fork from an independent project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

> match: nitcorn>
> match: nitcorn
> match: pthreads::pthreads::NativePthread::create
> match: nitcorn::nitcorn
> match: libevent::NativeEventBase::reinit
> match: nitcorn::token
> match: curl::Curl
> match: core::file::Text::relpath
> match: nitcorn::pthreads
> match: serialization>
> match: serialization
> match: curl::CURLStatusCode::created
> match: core::Array::from
> match: core::Finalizable::finalize
> match: curl::curl::Sys::curl
> match: core::Text::substring_from
> match: core::FlatBuffer::from
> match: more_collections::UnrolledList::nodes_length
> match: opts::Option::init
> match: core::CString::new
> match: core::Range::init
> match: curl>
> match: curl
> match: nitcorn::VirtualHost::init
> match: core::Text::substring
> match: core::Array::with_items
> match: serialization::Serializable::from_deserializer
> match: core::Error::message
> match: core::ArraySet::with_capacity
> match: core::Array::with_capacity
> match: core::FlatBuffer::with_capacity
> match: nitcorn::HTCPCServer
> match: libevent>
> match: libevent
> match: core::Array::filled_with
> match: core::FileStat
> match: core::Range::without_last
> match: nitcorn::HttpFactory::and_libevent
> match: libevent::NativeEventBase::new
> match: core::String
> match: libevent::ConnectionFactory
> match: json::JsonDeserializer::class_name_heuristic

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

> match: core::Finalizable::finalize
> match: curl::curl::Sys::curl
> match: serialization>
> match: serialization
> match: json::JsonDeserializer::class_name_heuristic
> match: nitcorn>
> match: nitcorn
> match: curl::Curl
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Collection::has_exactly
> match: json::JsonSerializer::plain_json
> match: more_collections::UnrolledList::nodes_length
> match: core::Error::message
> match: core::Bytes::items
> match: core::Sys
> match: serialization::Serializer::current_object
> match: core::Object::output
> match: core::Object::SELF
> match: core::Writable::write_to_string
> match: pthreads::ConcurrentCollection::mutex
> match: core::Text::to_camel_case
> match: json::JsonDeserializer::attributes_path
> match: nitcorn::HttpFactory::config
> match: core::Object::output_class_name
> match: core::FlatText::items
> match: core::Collection::has_all
> match: core::FileStat
> match: core::Sys::is_windows
> match: serialization::Serializer::serialize_core
> match: core::Task
> match: core::MapRead::has_key
> match: core::Collection::has_any
> match: core::Object::is_same_type
> match: core::Writable::write_to_bytes
> match: core::Object::is_same_instance
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::hash
> match: more_collections::BestDistance::update
> match: pthreads::JoinTask
> match: json>
> match: json
> match: core::ProcessDuplex
> match: core::FlatText::fast_cstring
> match: core::Text::to_snake_case
> match: nitcorn::restful
> match: core::Collection::has
> match: core::flat::FlatBuffer::with_infos
> match: pthreads>
> match: core::Map
> match: pthreads
> match: pthreads::Mutex
> match: libevent::Connection::close_requested
> match: core::Object::!=
> match: core::Object::object_id
> match: core::FinalizableOnce
> match: serialization::Serializable::core_serialize_to
> match: core::Writable
> match: nitcorn::MyAction::complex_args
> match: core::Buffer::written
> match: core::re::NativeRegex
> match: core::CString::char_to_byte_index_cached
> match: core::CString::byte_to_char_index_cached
> match: core::Text::has_substring
> match: core::math::Float::is_nan
> match: core::Object::==
> match: core::Range::step
> match: opts::OptionContext::options_before_rest
> match: core::abstract_collection::RefIterator
> match: core::bytes::Int::to_bytes
> match: pthreads::Mutex::try_lock
> match: serialization::Deserializer::deserialize_attribute
> match: core::re::NativeRegex::malloc
> match: core::Reader

