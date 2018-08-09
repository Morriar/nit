# read and write JSON formatted text

> match: json::json
> match: core::Writer::write
> match: json::serialization_read::JsonDeserializer::text
> match: core::Reader::read
> match: json>
> match: json
> match: core>text>
> match: core::text
> match: core::Text
> match: core::Text::format
> match: core::Duplex
> match: core::file::Sys::poll
> match: core::ProcessDuplex::write_and_read

These services can be useful to communicate with a remote server or client,
save data locally or even debug and understand the structure of a Nit object.
There is a single API to write JSON, and three API to read depending on the use case.

> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: serialization>
> match: serialization
> match: json::JsonValue
> match: core::ProcessDuplex
> match: core::re::NativeRegex
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Writer::write
> match: core::Duplex
> match: json::JsonDeserializer::class_name_heuristic
> match: json::json
> match: core::Reader
> match: core::Writer::is_writable
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Text::to_camel_case
> match: core::Map
> match: core::Object::output
> match: core::Finalizable::finalize
> match: core::Reader::read
> match: serialization::Deserializer
> match: core::bytes::Int::to_bytes
> match: core::Object::output_class_name
> match: core::FlatText::fast_cstring
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer
> match: json::serialization_read::Text::deserialize_json
> match: core::Writer::write_byte
> match: core::Writer
> match: core::Writer::write_char
> match: json::JsonStore
> match: serialization::Deserializer::deserialize_attribute
> match: core::Path
> match: core::Object::is_same_instance
> match: core::Object::object_id
> match: core::Reader::each_line
> match: core::abstract_text::CString::to_s_unsafe
> match: core::Writable::write_to_string
> match: core::Writable
> match: json::serialization_read::JsonDeserializer::convert_object
> match: core::Bytes::items
> match: core::Object::SELF
> match: core::Collection
> match: core::abstract_text::Sys::alpha_comparator
> match: core::Error::message
> match: json::JsonStore::has_key
> match: json::JsonStore::store_object
> match: core::MaybeError
> match: core::Finalizable
> match: core::BytesWriter
> match: core::Reader::read_char
> match: core::CircularArray
> match: core::Reader::eof
> match: core::Text::chomp
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::AsyncCache::use_even
> match: core::math::Int::is_even
> match: json::JsonSerializer::pretty_json
> match: core::Writable::write_to_bytes
> match: core::Pattern::split_in
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::flat::FlatBuffer::with_infos
> match: core::ProcessDuplex::write_and_read
> match: json::store::JsonStore::store_json
> match: core::Stream::finish
> match: core::Path::read_all_bytes
> match: serialization::DeserializerCache::has_id
> match: serialization::Serializer::current_object
> match: core::FileWriter
> match: core::DisjointSet

## Write JSON

> match: core::Writer::write
> match: json::json
> match: json>
> match: json
> match: json::JsonSerializer::pretty_json

Writing Nit objects to JSON format can be useful to communicate with a remote service,
save data locally or even debug and understand the structure of an object.
There is two related services to write JSON object, the method
`serialize_to_json` and the object `JsonSerializer`.
The method `serialize_to_json` is actually a shortcut to `JsonSerializer`, both
share the same features.

> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: core::Writer::write
> match: json::JsonSerializer
> match: core::Object::object_id
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization::Deserializer::deserialize_class_intern
> match: serialization::Deserializer::deserialize_attribute
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::serialization_read::JsonDeserializer::convert_object
> match: json::json
> match: json::serialization_read::Text::deserialize_json
> match: core::Finalizable::finalize
> match: core::Object::is_same_instance
> match: serialization>
> match: serialization
> match: serialization::Deserializer
> match: core::Writable::write_to_bytes
> match: json::JsonSerializer::pretty_json
> match: serialization::Deserializer::notify_of_creation
> match: serialization::Serializer::serialize
> match: serialization::Serializer
> match: serialization::Serializer::serialize_attribute
> match: core::Writable::write_to_string
> match: core::Object::SELF
> match: core::Writer::is_writable
> match: serialization::Deserializer::deserialize_class
> match: core::Object::output
> match: serialization::DeserializerCache::has_id
> match: core::Collection
> match: json::JsonStore::store_object
> match: serialization::inspect::InspectSerializer
> match: core::Finalizable
> match: serialization::SerializerCache::id_for
> match: core::bytes::Int::to_bytes
> match: core::Object::output_class_name
> match: json::JsonValue
> match: serialization::SerializerCache::new_id_for
> match: core::Map
> match: core::ProcessDuplex
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializer::current_object
> match: serialization::AttributeTypeError::attribute
> match: core::abstract_text::Object::native_class_name
> match: json::JsonValue::is_map
> match: core::Writer
> match: serialization::DeserializerCache::[]=
> match: serialization::SerializerCache::has_object
> match: core::Text::bytes
> match: core::Object
> match: core::Object::hash
> match: core::Cloneable::clone
> match: poset::POSetElement::element
> match: core::Writable
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Duplex
> match: core::Text::chars
> match: core::Pointer::address_is_null
> match: core::Sys
> match: serialization::AttributeError::receiver
> match: json::JsonDeserializer::attributes_path
> match: json::JsonMapRead

### Write plain JSON

> match: core::Writer::write
> match: json::json
> match: json>
> match: json
> match: json::serialization_write::Serializable::to_json
> match: json::serialization_write::Serializable::to_pretty_json
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::JsonSerializer::pretty_json
> match: json::JsonValue
> match: json::JsonSerializer::plain_json

Passing the argument `plain=true` to `serialize_to_json` generates plain and clean JSON.
This format is non-Nit program, it cannot be fully deserialized back to Nit objects.
The argument `pretty=true` generates JSON for humans, with more spaces and line breaks.

> match: json::serialization_write::Serializable::serialize_to_json
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: json::serialization_write::Serializable::to_pretty_json
> match: json::serialization_write::Serializable::to_json
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization>
> match: serialization
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Finalizable::finalize
> match: json::json
> match: json::JsonSerializer::pretty_json
> match: json::serialization_read::Text::deserialize_json
> match: serialization::Deserializer::deserialize_attribute
> match: core::file::NativeFileStat::is_dir
> match: core::abstract_text::CString::to_s_unsafe
> match: core::Process::arguments
> match: core::math::Float::is_nan
> match: parser_base::Location::line
> match: serialization::SafeDeserializer::check_subtypes
> match: core::file::NativeFileStat::is_chr
> match: core::stream::LineIterator::line
> match: parser_base::StringProcessor::line
> match: core::file::NativeFileStat::is_blk
> match: core::Reader::append_line_to
> match: json::serialization_read::JsonDeserializer::convert_object
> match: serialization::Deserializer::keep_going
> match: core::Object::output
> match: core::abstract_text::Sys::native_argc
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::abstract_text::Sys::native_argv
> match: core::Error::message
> match: core::Object::SELF
> match: core::Object::is_same_instance
> match: core::Object::output_class_name
> match: json::JsonMapRead
> match: core::Reader::read_line
> match: core::Iterator
> match: core::Text::justify
> match: core::Text::chomp
> match: core::Reader::each_line
> match: core::file::NativeFileStat::is_reg
> match: core::Object::is_same_type
> match: core::file::NativeFileStat::is_sock
> match: json::JsonValue
> match: core::file::NativeFileStat::is_fifo
> match: core::abstract_text::Sys::args
> match: core::Bytes::items
> match: core::file::NativeFileStat::is_lnk
> match: serialization::Serializable
> match: json::serialization_read::JsonDeserializer::text
> match: core::Ref
> match: core::Object::object_id
> match: serialization::Deserializer::deserialize
> match: core::ProcessDuplex
> match: core::Bool::to_i
> match: json::JsonSequenceRead
> match: core::flat::FlatBuffer::with_infos

The Nit objects to write must subclass `Serializable` and implement its services.
Most classes from the `core` library are already supported, including collections, numeric values, etc.
For your local objects, you can annotate them with `serialize` to automate subclassing
`Serializable` and the implementation of its services.

> match: json>
> match: json
> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: serialization::Serializable
> match: core::Collection
> match: serialization::Serializer::serialize
> match: serialization::Deserializer
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializer
> match: core::Numeric
> match: core::Finalizable::finalize
> match: core::Object::is_same_instance
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Writer::write
> match: core::Object
> match: serialization::Deserializer::deserialize_attribute
> match: json::serialization_read::JsonDeserializer::convert_object
> match: serialization::Deserializer::deserialize_class_intern
> match: core>collection>
> match: core::MaybeError::value
> match: serialization::Serializer::try_to_serialize
> match: core::Path
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::MapRead::provide_default_value
> match: core>
> match: core
> match: serialization::serialization_core
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializer::current_object
> match: core::Collection::has_exactly
> match: json::JsonValue
> match: serialization::Deserializer::deserialize_class
> match: core::Writable::write_to_bytes
> match: core::Object::object_id
> match: core::re::NativeRegex
> match: json::JsonValue::is_map
> match: json::JsonValue::to_numeric
> match: serialization::engine_tools::Object::serialization_hash
> match: core::core
> match: core::Writer::is_writable
> match: core::Collection::has_all
> match: serialization::SerializerCache::sent
> match: core::Map::[]=
> match: core::RemovableCollection
> match: core::abstract_text::Object::native_class_name
> match: json::JsonValue::value
> match: core::bytes::Int::to_bytes
> match: core::Collection::has_any
> match: core::hash_collection::HashMapNode::value
> match: json::JsonSerializer::pretty_json
> match: core::Map
> match: json::serialization_read::Text::deserialize_json
> match: core::ProcessDuplex
> match: serialization::inspect::InspectSerializer
> match: serialization::Deserializer::notify_of_creation

#### Example

> match: json::static::Text::parse_json
> match: serialization>examples>

~~~
import json

class Person
    serialize

    var name: String
    var year_of_birth: Int
    var next_of_kin: nullable Person
end

var bob = new Person("Bob", 1986)
assert bob.serialize_to_json(pretty=true, plain=true) == """
{
	"name": "Bob",
	"year_of_birth": 1986,
	"next_of_kin": null
}"""

var alice = new Person("Alice", 1978, bob)
assert alice.serialize_to_json(pretty=true, plain=true) == """
{
	"name": "Alice",
	"year_of_birth": 1978,
	"next_of_kin": {
		"name": "Bob",
		"year_of_birth": 1986,
		"next_of_kin": null
	}
}"""

# You can also build JSON objects as a `Map`
var charlie = new Map[String, nullable Serializable]
charlie["name"] = "Charlie"
charlie["year_of_birth"] = 1968
charlie["next_of_kin"] = alice
assert charlie.serialize_to_json(pretty=true, plain=true) == """
{
	"name": "Charlie",
	"year_of_birth": 1968,
	"next_of_kin": {
		"name": "Alice",
		"year_of_birth": 1978,
		"next_of_kin": {
			"name": "Bob",
			"year_of_birth": 1986,
			"next_of_kin": null
		}
	}
}"""
~~~

### Write JSON with metadata

> match: core::Writer::write
> match: json::json
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: json::JsonSerializer::pretty_json
> match: json::JsonValue

By default, `serialize_to_json` and `JsonSerializer` include metadate in the generated JSON.
This metadata is used by `JsonDeserializer` when reading the JSON code to recreate
the Nit object with the exact original type.
The metadata allows to avoid repeating an object and its resolves cycles in the serialized objects.

> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::serialization_read::JsonDeserializer::convert_object
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization>
> match: serialization
> match: serialization::Serializer::serialize
> match: json::JsonValue
> match: core::Object::object_id
> match: json::serialization_read::Text::deserialize_json
> match: json::json
> match: core::Object::SELF
> match: json::JsonSerializer
> match: core::Object::is_same_instance
> match: core::Finalizable
> match: json::JsonValue::is_map
> match: serialization::Deserializer::deserialize_class_intern
> match: json::serialization_write::JsonSerializer::first_attribute
> match: json::JsonDeserializer
> match: core::file::Text::rmdir
> match: json::serialization_read::JsonDeserializer::root
> match: serialization::SerializerCache
> match: serialization::Serializer::serialize_attribute
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Serializer::current_object
> match: serialization::SerializerCache::id_for
> match: json::JsonStore::store_object
> match: serialization::SerializerCache::new_id_for
> match: json::JsonSerializer::pretty_json
> match: serialization::engine_tools::Object::is_same_serialized
> match: core::Reader::read
> match: json::serialization_read::JsonDeserializer::path
> match: serialization::DeserializerCache::[]=
> match: core::Text::bytes
> match: core::Object
> match: serialization::AttributeTypeError::attribute
> match: poset::POSetElement::element
> match: json::serialization_write::Serializable::to_json
> match: core::Finalizable::finalize
> match: core::Object::hash
> match: core::Text::chars
> match: serialization::SerializerCache::has_object
> match: serialization::Deserializer::deserialize_class
> match: serialization::AttributeError::receiver
> match: serialization::inspect::InspectSerializer
> match: json::JsonMapRead
> match: serialization::Deserializer::notify_of_creation
> match: core::abstract_text::Object::native_class_name
> match: serialization::DeserializerCache::has_id
> match: json::JSONStringParser::parse_json_object
> match: json::serialization_write::Serializable::to_pretty_json
> match: json::store::JsonStore::store_json
> match: core::Writable::write_to_bytes
> match: serialization::DeserializerCache::object_for
> match: json::JSONStringParser
> match: core::Pointer::address_is_null
> match: json::JsonDeserializer::attributes_path

For more information on Nit serialization, see: ../serialization/README.md

> match: serialization::serialization
> match: json>
> match: json
> match: serialization>
> match: serialization
> match: core::Path::each_line
> match: core::Path::stat
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::FileStat
> match: serialization::engine_tools::Object::serialization_hash
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::NativeArray
> match: core::Reader::read_lines

## Read JSON

> match: json::json
> match: core::Reader::read

There are a total of 3 API to read JSON:

> match: json>
> match: json
> match: core::Reader::read
> match: core::Reader::eof
> match: core::Comparable
> match: core::Reader
> match: core::Reader::each_line
> match: json::json
> match: core::Discrete
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Duplex
> match: core::Reader::read_char
> match: json::JsonSerializer::plain_json
> match: core::Reader::raw_read_bytes
> match: core::ProcessDuplex
> match: core::PollableReader::poll_in
> match: core::Iterator::is_ok
> match: core::MapIterator::is_ok
> match: core::Collection::is_empty
> match: core::MapRead::is_empty
> match: json::static::Text::json_need_escape
> match: core::MapRead::has_key
> match: json::JsonStore::has_key
> match: core::BytesReader::bytes
> match: poset::POSetElement::<=
> match: core::stream::LineIterator::line
> match: core::FileReader
> match: core::BytesReader
> match: poset::POSetElement::<
> match: core::StringReader::source
> match: core::re::NativeRegex
> match: poset::POSet::has_direct_edge
> match: core::Reader::read_all
> match: core::MaybeError::is_error
> match: serialization::DeserializerCache::has_id
> match: core::Path::read_all_bytes
> match: core::file::NativeDir::readdir
> match: core::Path::read_all
> match: core::Reader::read_all_bytes
> match: json::JSONStringParser
> match: core::Text::to_camel_case
> match: core::file::Sys::gets
> match: core::Path::read_lines
> match: json::JsonValue
> match: core::file::Sys::getc
> match: core::Finalizable::finalize
> match: serialization>
> match: serialization
> match: core::Reader::raw_read_byte
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Sys
> match: core::Reader::read_word
> match: poset::POSet::has_edge
> match: core::Path::stat

* `JsonDeserializer` reads JSON to recreate complex Nit objects (discussed here),
* the module `json::dynamic` provides an easy API to explore JSON objects,
* the module `json::static` offers a low-level service to parse JSON and create basic Nit objects.

> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: core::Reader::read
> match: json::JsonDeserializer
> match: json::serialization_read::JsonDeserializer::convert_object
> match: json::json
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::JSONStringParser::parse_json_string
> match: json::JsonSerializer
> match: core::Reader::raw_read_bytes
> match: core::NativeArray
> match: json::JsonValue
> match: json>
> match: json
> match: json::json
> match: json::serialization_read::JsonDeserializer::convert_object
> match: json::JsonValue::is_map
> match: json::serialization_read::JsonDeserializer::root
> match: json::store::JsonStore::store_json
> match: json::JsonStore::store_object
> match: json::JsonArray
> match: json::JsonValue::value
> match: json::serialization_read::JsonDeserializer::text
> match: json::JsonSerializer::plain_json
> match: json::JsonDeserializer
> match: json::JsonMapRead
> match: core::Object::is_same_type
> match: core::Path
> match: json::JsonSerializer::pretty_json
> match: json::static::Char::is_json_separator
> match: json::JsonParseError
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JsonSequenceRead
> match: json::JSONStringParser
> match: json>
> match: json
> match: json::json
> match: json::JsonValue
> match: json::serialization_read::JsonDeserializer::convert_object
> match: json::JsonSerializer::plain_json
> match: json::JSONStringParser
> match: json::JSONStringParser::parse_json_string
> match: json::serialization_read::JsonDeserializer::root
> match: serialization::Deserializer
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JSONStringParser::parse_json_object
> match: json::JsonSerializer
> match: json::static::Text::json_to_nit_string
> match: json::JsonValue::is_map
> match: serialization::Serializer
> match: json::JsonSerializer::pretty_json
> match: json::JSONStringParser::parse_json_array
> match: serialization>
> match: serialization
> match: core::CString::atoi

The class `JsonDeserializer` reads JSON code to recreate objects.
It can use the metadata in the JSON code, to recreate precise Nit objects.
Otherwise, JSON objects are recreated to simple Nit types: `Map`, `Array`, etc.
Errors are reported to the attribute `JsonDeserializer::errors`.

> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: json::JsonDeserializer::class_name_heuristic
> match: json::serialization_read::JsonDeserializer::convert_object
> match: core::MaybeError::error
> match: serialization>
> match: serialization
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::object_id
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Object::SELF
> match: serialization::Deserializer::deserialize_attribute
> match: json::JsonValue
> match: json::json
> match: core::Error
> match: serialization::AttributeTypeError::attribute
> match: core::re::NativeRegex::regerror
> match: core::file::Text::chdir
> match: core::Error::cause
> match: json::JSONStringParser
> match: core::Finalizable
> match: json::JsonDeserializer
> match: core::Finalizable::finalize
> match: json::JsonMapRead
> match: core::Object::hash
> match: json::JsonValue::get
> match: json::JsonValue::is_map
> match: core::Object::is_same_instance
> match: core::Map
> match: core::re::NativeRegex
> match: json::JsonSerializer
> match: serialization::Deserializer::deserialize_class
> match: core::Path::read_all_bytes
> match: core::exec::Sys::system
> match: core::Path::read_all
> match: core::Error::message
> match: core::Path::read_lines
> match: serialization::Deserializer::keep_going
> match: json::JSONStringParser::parse_json_string
> match: core::Task
> match: serialization::SafeDeserializer::check_subtypes
> match: core::file::Sys::print_error
> match: core::Object
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JsonSerializer::pretty_json
> match: serialization::SerializerCache::new_id_for
> match: json::serialization_read::JsonDeserializer::root
> match: serialization::Serializer::serialize_attribute
> match: core::ProcessDuplex
> match: serialization::AttributeError::receiver
> match: core::Reader
> match: core::Path::files
> match: core::file::Text::rmdir
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::Object::is_same_type
> match: poset::POSetElement
> match: serialization::Serializer::current_object
> match: meta
> match: meta>
> match: core::MaybeError
> match: core::bytes::Int::to_bytes
> match: core::abstract_text::Object::native_class_name

The type to recreate is either declared or inferred:

> match: core::Object::SELF
> match: json>
> match: json
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization>
> match: serialization
> match: core::Object::is_same_type
> match: serialization::SafeDeserializer::check_subtypes
> match: meta::GetName
> match: core::Finalizable::finalize
> match: core::file::NativeFileStat::is_sock
> match: core::file::NativeFileStat::is_fifo
> match: core::file::NativeFileStat::is_lnk
> match: json::JsonSerializer::plain_json
> match: serialization::AttributeTypeError::expected_type
> match: meta::meta::Object::get_class
> match: core::Text::empty
> match: meta::meta::Object::CLASS
> match: core::PollableReader
> match: core::Collection::has_exactly
> match: serialization::AttributeTypeError
> match: serialization::SafeDeserializer
> match: core::Object
> match: core::Writable::write_to_string
> match: core::Object::hash
> match: meta::meta::Object::class_factory
> match: core::FlatText::items
> match: core::ProcessDuplex
> match: serialization::engine_tools::Text::strip_nullable
> match: json::serialization_read::Text::deserialize_json
> match: core::Map
> match: core::Object::output
> match: core::flat::FlatBuffer::with_infos
> match: core::Error::message
> match: core::Sys
> match: core::Object::output_class_name
> match: core::Text::SELFTYPE
> match: core::Buffer::written
> match: core::Writable
> match: core::Bytes::items
> match: core::math::Float::is_nan
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: core::Writable::write_to_bytes
> match: serialization::Serializer::serialize_core
> match: core::FileStat

1. The JSON object defines a `__class` key with the name of the Nit class as value.
   This attribute is generated by the `JsonSerializer` with other metadata,
   it can also be specified by other external tools.
2. A refinement of `JsonDeserializer::class_name_heuristic` identifies the Nit class.
3. If all else fails, `JsonDeserializer` uses the static type of the attribute,
   or the type name passed to `deserialize`.

> match: json>
> match: json
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: json::serialization_write::Serializable::serialize_to_json
> match: meta::Class::name
> match: core::Object
> match: core::re::NativeRegex
> match: serialization::Deserializer::deserialize_attribute
> match: core::Map
> match: core::Sys
> match: core::Finalizable::finalize
> match: meta
> match: meta>
> match: core::Object::is_same_type
> match: core::Object::output_class_name
> match: meta::meta
> match: core::Map::[]=
> match: core::Comparable::OTHER
> match: serialization::Deserializer::deserialize_class_intern
> match: core::abstract_text::Object::native_class_name
> match: core::abstract_text::Object::class_name
> match: core::MapIterator::key
> match: core::MapRead::provide_default_value
> match: core::MaybeError::value
> match: meta::meta::Object::CLASS
> match: serialization::AttributeTypeError::attribute
> match: serialization::Serializable
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Object::SELF
> match: core::Object::object_id
> match: serialization::SafeDeserializer::check_subtypes
> match: json::JsonValue::get
> match: core::Collection::has_exactly
> match: core::Object::!=
> match: json::JsonSerializer
> match: core::Task
> match: core::Bytes::items
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializer::serialize_core
> match: poset::POSetElement
> match: core::FileStat
> match: core::ProcessDuplex
> match: core::MapRead::get_or_null
> match: core::bytes::Int::to_bytes
> match: core::Object::is_same_instance
> match: core::Comparable::>
> match: core::Comparable::<=
> match: core::Comparable::>=
> match: json::JsonKeyError::key
> match: core>collection>
> match: json::JsonValue::value
> match: core::Object::output
> match: serialization::Deserializer::keep_going
> match: core::Stderr
> match: core::FinalizableOnce
> match: core::hash_collection::HashNode::key
> match: core::Stdout
> match: core::hash_collection::HashMapNode::value
> match: core::Stdin
> match: core::Array::+
> match: json::serialization_read::JsonDeserializer::convert_object
> match: core::re::NativeMatchArray::[]
> match: json::JsonDeserializer::class_name_heuristic
> match: json::JsonDeserializer
> match: json>
> match: json
> match: serialization::Serializable::core_serialize_to
> match: meta::meta::Object::CLASS
> match: serialization>
> match: serialization
> match: core::NativeArray
> match: meta
> match: meta>
> match: json::JsonSerializer::plain_json
> match: meta::meta
> match: core::Object::SELF
> match: serialization::AttributeTypeError::expected_type
> match: meta::Class::name
> match: meta::GetName
> match: json>
> match: json
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization::AttributeTypeError
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::AttributeTypeError::attribute
> match: serialization::Deserializer::keep_going
> match: serialization::engine_tools::Text::strip_nullable
> match: serialization::Deserializer::deserialize
> match: json::JsonDeserializer
> match: core::Object::is_same_type
> match: serialization>
> match: serialization
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: meta::meta::Object::class_factory
> match: serialization::AttributeError::attribute_name
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Ref
> match: core::Char::to_i
> match: core::file::NativeFileStat::is_sock
> match: core::file::NativeFileStat::is_fifo
> match: core::file::NativeFileStat::is_lnk
> match: serialization::SafeDeserializer::whitelist
> match: meta::meta::Object::CLASS

The method `deserialize_json` is a shortcut to `JsonDeserializer` which prints
errors to the console. It is fit only for small scripts and other quick and dirty usage.

> match: json>
> match: json
> match: json::serialization_read::Text::deserialize_json
> match: core::MaybeError::error
> match: core::Finalizable::finalize
> match: core::Object::SELF
> match: core::file::Sys::print
> match: core::Object::output
> match: core::Sys
> match: core::Object::is_same_type
> match: core::Object::output_class_name
> match: core::Error::message
> match: serialization>
> match: serialization
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Error::cause
> match: core::FinalizableOnce
> match: core::Collection::has_exactly
> match: serialization::SafeDeserializer::check_subtypes
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Error
> match: json::JsonSerializer::plain_json
> match: core::re::NativeRegex::regerror
> match: serialization::Serializer::serialize_core
> match: core::Path::read_all_bytes
> match: core::abstract_collection::RefIterator
> match: core::Path::files
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::file::Sys::print_error
> match: core::Regex::compile
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Bytes::items
> match: serialization::Serializable::serialize_to
> match: core::Pattern::search_index_in
> match: core::Comparable::OTHER
> match: serialization::Deserializer::deserialize
> match: core::Task
> match: core::FinalizableOnce::finalize_once
> match: core::IOError
> match: serialization::Deserializer::deserialize_attribute
> match: core::Text::to_camel_case
> match: core::Object::object_id
> match: core::re::NativeRegex
> match: core::Text::to_snake_case
> match: core::Object::hash
> match: core::FlatText::items
> match: core::FlatText::fast_cstring
> match: core::file::Text::simplify_path
> match: core::file::Text::relpath
> match: core::Reader::append_line_to
> match: core::MapRead::has_key
> match: core::Collection::has_all
> match: core::FileStat
> match: core::Map
> match: core::Collection::has_any
> match: core::Writable::write_to_bytes
> match: core::Sys::main
> match: core::Stream::lookahead
> match: core::Range::step

#### Example

> match: json::static::Text::parse_json
> match: serialization>examples>

~~~
import json

class Triangle
    serialize

    var corners = new Array[Point]
    redef var to_s is serialize_as("name")
end

class Point
    serialize

    var x: Int
    var y: Int
end

# Metadata on each JSON object tells the deserializer what is its Nit type,
# and it supports special types such as generic collections.
var json_with_metadata = """{
    "__class": "Triangle",
    "corners": {"__class": "Array[Point]",
                "__items": [{"__class": "Point", "x": 0, "y": 0},
                            {"__class": "Point", "x": 3, "y": 0},
                            {"__class": "Point", "x": 2, "y": 2}]},
    "name": "some triangle"
}"""

var deserializer = new JsonDeserializer(json_with_metadata)
var object = deserializer.deserialize
assert deserializer.errors.is_empty
assert object != null

# However most non-Nit services won't add the metadata and instead produce plain JSON.
# Without a "__class", the deserializer relies on `class_name_heuristic` and the static type.
# The type of the root object to deserialize can be specified by an argument passed to `deserialize`.
var plain_json = """{
    "corners": [{"x": 0, "y": 0},
                {"x": 3, "y": 0},
                {"x": 2, "y": 2}],
    "name": "the same triangle"
}"""

deserializer = new JsonDeserializer(plain_json)
object = deserializer.deserialize("Triangle")
assert deserializer.errors.is_empty # If false, `object` is invalid
~~~

#### Missing attributes and default values

> match: core::MaybeError::value
> match: core::MapRead::provide_default_value
> match: json::JsonValue::value
> match: core::hash_collection::HashMapNode::value
> match: serialization::AttributeTypeError::attribute
> match: serialization::Deserializer::keep_going
> match: core::Stderr
> match: core::Stdout
> match: core::Stdin
> match: serialization::Deserializer::deserialize_attribute
> match: core::Map::[]=
> match: core::MinHeap::default
> match: serialization::AttributeMissingError
> match: core::math::Float::round
> match: json>
> match: json
> match: serialization::Deserializer::deserialize_attribute_missing

When reading JSON, some attributes expected by Nit classes may be missing.
The JSON object may come from an external API using optional attributes or
from a previous version of your program without the attributes.
When an attribute is not found, the deserialization engine acts in one of three ways:

> match: json>
> match: json
> match: serialization::AttributeTypeError::attribute
> match: serialization::Deserializer::keep_going
> match: serialization>
> match: serialization
> match: serialization::Deserializer::deserialize_attribute
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Finalizable::finalize
> match: json::JsonSerializer::plain_json
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::AttributeMissingError
> match: json::serialization_write::JsonSerializer::first_attribute
> match: json::serialization_read::Text::deserialize_json
> match: serialization::AttributeError
> match: serialization::AttributeError::receiver
> match: core::Object::SELF
> match: serialization::Serializer::serialize_attribute
> match: serialization::inspect::InspectSerializer
> match: core::String
> match: serialization::AttributeTypeError::expected_type
> match: poset::POSetElement
> match: serialization::Deserializer::deserialize_attribute_missing
> match: core::FlatText::fast_cstring
> match: core::re::NativeRegex
> match: json::json
> match: json::JsonValue
> match: serialization::SafeDeserializer
> match: poset::POSet::has_direct_edge
> match: core::Reader::read_char
> match: serialization::AttributeError::attribute_name
> match: core::Ref
> match: serialization::AttributeTypeError
> match: core::file::Text::to_program_name
> match: core::FileStat
> match: core::Object::object_id
> match: serialization::Deserializer::deserialize
> match: core::Reader::read
> match: core::Stream::lookahead
> match: core::Writable::write_to_string
> match: core::Collection::has_exactly
> match: core::Object::output_class_name
> match: core::Finalizable
> match: core::Collection::has_all
> match: core::MapRead::provide_default_value
> match: core::FinalizableOnce
> match: core::Object::is_same_instance
> match: core::Error::message
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JsonSerializer::pretty_json
> match: core::MaybeError
> match: serialization::Serializer::warn
> match: core::Object
> match: core::Reader

1. If the attribute has a default value or if it is annotated by `lazy`,
   the engine leave the attribute to the default value. No error is raised.
2. If the static type of the attribute is nullable, the engine sets
   the attribute to `null`. No error is raised.
3. Otherwise, the engine raises an error and does not set the attribute.
   The caller must check for `errors` and must not read from the attribute.

> match: core::MaybeError::value
> match: core::MapRead::provide_default_value
> match: serialization::Deserializer::keep_going
> match: json>
> match: json
> match: serialization>
> match: serialization
> match: core::Stderr
> match: json::JsonValue::value
> match: serialization::AttributeTypeError::attribute
> match: core::hash_collection::HashMapNode::value
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Serializer::serialize_core
> match: core::Finalizable::finalize
> match: core::Map::[]=
> match: core::Stdout
> match: core::Stdin
> match: core::MaybeError::error
> match: core::MinHeap::default
> match: core::MapRead::has_key
> match: core::MaybeError
> match: core::file::Text::mkdir
> match: core::math::Float::round
> match: core::Object::==
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Collection::has_exactly
> match: core::Collection::has_any
> match: json::JsonValue::is_error
> match: core::Collection::has_all
> match: serialization::SafeDeserializer::check_subtypes
> match: core::FileStream::set_buffering_mode
> match: core::Error::message
> match: core::Range::step
> match: json::JsonValue::get
> match: core::Reader::read_byte
> match: serialization::AttributeError
> match: serialization::Serializer::try_to_serialize
> match: core::Error::cause
> match: poset::poset::MapRead::lookup_values
> match: core::Object::SELF
> match: json::JsonValue::to_error
> match: serialization::inspect::InspectSerializer
> match: core::Map
> match: serialization::Deserializer::deserialize
> match: json::JsonSerializer::plain_json
> match: core::Object::!=
> match: core::MapRead::values
> match: json::JsonValue::is_numeric
> match: json::JsonValue::is_int
> match: json::JsonValue::is_string
> match: json::JsonValue::is_array
> match: json::JsonValue::is_null
> match: core::Error
> match: core::Buffer::new
> match: core::re::NativeRegex::regerror
> match: serialization::SafeDeserializer
> match: core::Numeric::zero
> match: json::JsonValue::is_float
> match: core::Path::read_all_bytes
> match: serialization::engine_tools::Object::serialization_hash
> match: core::CString::char_to_byte_index_cached
> match: core::CString::byte_to_char_index_cached
> match: core::Numeric::is_zero
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::hash_collection::Set::new
> match: core::Path::files
> match: core::Path::read_all
> match: json::JsonValue::is_bool
> match: json>
> match: json
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Deserializer::keep_going
> match: serialization::AttributeTypeError::attribute
> match: core::Object::SELF
> match: core::MaybeError::error
> match: serialization>
> match: serialization
> match: core::hash_collection::HashSetIterator::set
> match: core::Path::stat
> match: serialization::SafeDeserializer::check_subtypes
> match: json::serialization_read::Text::deserialize_json
> match: core::Path::read_all_bytes
> match: core::Path::files
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::Finalizable::finalize
> match: core::Set
> match: serialization::AttributeTypeError::expected_type
> match: serialization::AttributeError
> match: core::Error::cause
> match: serialization::SafeDeserializer
> match: core::Path::delete
> match: core::Path::copy
> match: core::Error::message
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization::inspect::InspectSerializer
> match: core::FlatText::items
> match: serialization::AttributeTypeError
> match: serialization::Deserializer::deserialize
> match: serialization::engine_tools::Text::strip_nullable
> match: core::Object
> match: core::Error
> match: core::re::NativeRegex::regerror
> match: serialization::Serializer::serialize_attribute
> match: core::Buffer::written
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: core::Path::each_line
> match: core::flat::FlatBuffer::with_infos
> match: core::IOError
> match: core::Regex::compile
> match: json::JsonSerializer::plain_json
> match: core::FileStream::file_stat
> match: core::Set::union
> match: core::Set::intersection
> match: core::FileReader::open
> match: core::Object::is_same_type
> match: serialization::Deserializer::deserialize_attribute_missing
> match: json::JsonValue::get
> match: serialization::AttributeError::receiver
> match: json::serialization_write::JsonSerializer::first_attribute
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Serializer::warn
> match: serialization::AttributeError::attribute_name
> match: serialization::AttributeMissingError
> match: core::file::Text::mkdir
> match: core::bytes::Int::to_bytes
> match: core::MaybeError::error
> match: json>
> match: json
> match: serialization::Deserializer::keep_going
> match: serialization::AttributeTypeError::attribute
> match: core::Error
> match: core::Error::message
> match: core::Error::cause
> match: serialization::AttributeError
> match: core::hash_collection::HashSetIterator::set
> match: core::Path::read_all_bytes
> match: serialization::Deserializer::deserialize_attribute
> match: core::Regex::compile
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::re::NativeRegex::regerror
> match: core::Path::rmdir
> match: core::Reader::read
> match: core::file::Text::chdir
> match: core::file::Text::rmdir
> match: serialization>
> match: serialization
> match: serialization::Deserializer::errors
> match: core::Path::files
> match: serialization::SafeDeserializer::accept
> match: core::Reader::read_byte
> match: serialization::Deserializer::deserialize
> match: core::Path::delete
> match: core::Path::copy
> match: core::Sys::errno
> match: core::Path::exists
> match: serialization::inspect::InspectSerializer
> match: core::Set
> match: core::Stream::last_error

~~~
import json

class MyConfig
    serialize

    var width: Int # Must be in JSON or an error is raised
    var height = 4
    var volume_level = 8 is lazy
    var player_name: nullable String
    var tmp_dir: nullable String = "/tmp" is lazy
end

# ---
# JSON object with all expected attributes -> OK
var plain_json = """
{
    "width": 11,
    "height": 22,
    "volume_level": 33,
    "player_name": "Alice",
    "tmp_dir": null
}"""
var deserializer = new JsonDeserializer(plain_json)
var obj = deserializer.deserialize("MyConfig")

assert deserializer.errors.is_empty
assert obj isa MyConfig
assert obj.width == 11
assert obj.height == 22
assert obj.volume_level == 33
assert obj.player_name == "Alice"
assert obj.tmp_dir == null

# ---
# JSON object missing optional attributes -> OK
plain_json = """
{
    "width": 11
}"""
deserializer = new JsonDeserializer(plain_json)
obj = deserializer.deserialize("MyConfig")

assert deserializer.errors.is_empty
assert obj isa MyConfig
assert obj.width == 11
assert obj.height == 4
assert obj.volume_level == 8
assert obj.player_name == null
assert obj.tmp_dir == "/tmp"

# ---
# JSON object missing the mandatory attribute -> Error
plain_json = """
{
    "player_name": "Bob",
}"""
deserializer = new JsonDeserializer(plain_json)
obj = deserializer.deserialize("MyConfig")

# There's an error, `obj` is partial
assert deserializer.errors.length == 1

# Still, we can access valid attributes
assert obj isa MyConfig
assert obj.player_name == "Bob"
~~~

