# Abstract serialization services

> match: serialization::Serializer
> match: serialization::Deserializer
> match: serialization::serialization
> match: json::serialization_write::Serializable::accept_json_serializer

The serialization services are based on the `serialize` and the `noserialize` annotations,
the `Serializable` interface and the implementations of `Serializer` and `Deserializer`.

> match: serialization>
> match: serialization
> match: serialization::Serializer
> match: serialization::Deserializer
> match: serialization::Serializable
> match: serialization::serialization
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::E::semi_private
> match: serialization::Serializer::serialize
> match: serialization::Serializable::serialize_to
> match: core::Writable
> match: core::Collection
> match: serialization::Serializer::serialize_reference
> match: serialization::Serializer::current_object
> match: serialization::Serializer::serialize_attribute
> match: json::JsonSerializer::plain_json
> match: core::abstract_text::Int::fill_buffer
> match: serialization::serialization_core
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Cloneable
> match: serialization::Serializer::serialize_core
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializable::core_serialize_to
> match: core::math::Float::log_base
> match: core::Match::string
> match: core::Queue
> match: core::Finalizable::finalize
> match: serialization::serialization_core::Serializable::serialize_to_or_delay
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::Serializer::try_to_serialize
> match: core::Buffer::with_cap
> match: core::abstract_text::Int::to_base
> match: core::Int::digit_count_base_10
> match: json>
> match: json

## The `serialize` annotation

> match: serialization>
> match: serialization
> match: serialization::Serializer::serialize

A class annotated with `serialize` identifies it as a subclass of Serializable and
triggers the generation of customized serialization and deserialization services.

> match: serialization>
> match: serialization
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer::serialize
> match: serialization::Deserializer
> match: serialization::serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::Serializer::try_to_serialize
> match: serialization::Serializable
> match: serialization::DuplexCache
> match: serialization::Serializer::serialize_attribute
> match: json::JsonSerializer::plain_json
> match: serialization::Serializer::serialize_reference
> match: serialization::serialization_core::Serializable::serialize_to_or_delay

~~~
import serialization

# Simple serializable class identifying a human
class Person
	serialize

	# First and last name
	var name: String

	# Year of birth (`null` if unknown)
	var birth: nullable Int

	redef fun ==(o) do return o isa SELF and name == o.name and birth == o.birth
	redef fun hash do return name.hash
end
~~~

The `Person` class also defines `==` and `hash`, this is optional but we will use it to make an important point.
By definition of a serializable class, an instance can be serialized to a stream, then deserialized.
The deserialized instance will not be the same instance, but they should be equal.
So, in this case, we can compare both instances with `==` to test their equality.

> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: core::Object::object_id
> match: core::Object::SELF
> match: serialization::Serializable
> match: core::Object::hash
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Finalizable::finalize
> match: core::FileStat
> match: core::Sys
> match: meta
> match: meta>
> match: meta::meta
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Buffer::written
> match: core::Writable
> match: serialization::Deserializer::keep_going
> match: core::flat::FlatBuffer::with_infos
> match: core::Map
> match: core::re::NativeRegex
> match: serialization::Deserializer::deserialize_attribute
> match: core::file::NativeFile
> match: core::Collection::has_exactly
> match: serialization::Deserializer::deserialize_class
> match: serialization::Serializable::from_deserializer
> match: core::Object::output_class_name
> match: core::Cloneable
> match: core::Range::step
> match: core::math::Float::is_nan
> match: core::ProcessDuplex
> match: core::Writer::is_writable
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Bytes::items
> match: core::Object::is_same_instance
> match: json::serialization_write::Serializable::serialize_to_json
> match: json>
> match: json
> match: serialization::Serializer::serialize
> match: core::Object::output
> match: core::Reader
> match: core::FlatText::fast_cstring
> match: serialization::Deserializer::deserialize
> match: core::Writer
> match: core::Error::message
> match: core::file::Sys::wipe_write
> match: core::Object
> match: serialization::Serializer::serialize_attribute
> match: core::Text::to_camel_case
> match: core::Task
> match: core::Writable::write_to_string
> match: serialization::SafeDeserializer::accept
> match: core::Comparable::OTHER
> match: core::FinalizableOnce
> match: serialization::E::phantom
> match: core::Duplex
> match: serialization::DirectSerializable
> match: serialization::Serializer::serialize_core
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer::try_to_serialize
> match: poset::POSet
> match: core::Object::is_same_type
> match: serialization::SafeDeserializer
> match: core::re::NativeMatchArray::[]
> match: core::Finalizable
> match: serialization::RestrictedSerializer
> match: core::Text::escape_to_mk
> match: core::bytes::Int::to_bytes
> match: serialization::engine_tools::Object::serialization_hash
> match: core::bytes::Text::hexdigest_to_bytes
> match: core::Stream::start

Some conditions applies to the classes that can be annotated as `serialize`.
All attributes of the class must be serializable, runtime errors will be
raised when trying to serialize non-serializable attributes.

> match: serialization>
> match: serialization
> match: serialization::Serializable
> match: json::JsonSerializer::plain_json
> match: serialization::Serializer::serialize_attribute
> match: json>
> match: json
> match: serialization::Deserializer::keep_going
> match: serialization::Serializer::serialize
> match: serialization::E::semi_private
> match: serialization::AttributeTypeError::attribute
> match: core::Finalizable::finalize
> match: serialization::E::phantom
> match: meta
> match: meta>
> match: serialization::Serializer::try_to_serialize
> match: meta::meta
> match: serialization::Deserializer::deserialize_attribute
> match: core::Error
> match: core::FileStat
> match: core::Object::output_class_name
> match: core::Object::SELF
> match: core::MaybeError::error
> match: core::Error::cause
> match: core::Sys
> match: serialization::Serializable::serialize_to
> match: serialization::Serializer::serialize_core
> match: core::re::NativeRegex
> match: json::serialization_write::JsonSerializer::first_attribute
> match: meta::meta::Object::CLASS
> match: core::Error::message
> match: core::Buffer::written
> match: core::ProcessDuplex
> match: serialization::Serializer::current_object
> match: core::flat::FlatBuffer::with_infos
> match: core::Object::output
> match: core::re::NativeRegex::regerror
> match: core::Collection::has_exactly
> match: core::Task
> match: serialization::serialization_core
> match: serialization::custom_serialization
> match: core::Map
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::DirectSerializable
> match: poset::POSetElement

In the class `Person`, all attributes are typed with classes the standards library.
These common types are defined defined as serializable by this project.
The attributes could also be typed with user-defined `serialize`
classes or any other subclass of `Serializable`.

> match: serialization>
> match: serialization
> match: core::Object::SELF
> match: serialization::Serializable
> match: meta
> match: meta>
> match: meta::meta::Object::CLASS
> match: meta::meta
> match: core::Sys
> match: json>
> match: json
> match: core::Object::is_same_type
> match: core::Object
> match: serialization::Serializer::serialize_attribute
> match: json::JsonSerializer::plain_json
> match: serialization::AttributeTypeError::attribute
> match: core::re::NativeRegex
> match: serialization::AttributeTypeError::expected_type
> match: core>collection>
> match: core::file::NativeFile
> match: meta::meta::Object::get_class
> match: core::Finalizable::finalize
> match: core::Error
> match: poset::POSetElement
> match: serialization::E::semi_private
> match: serialization::AttributeTypeError
> match: serialization::E::phantom
> match: meta::GetName
> match: serialization::SafeDeserializer::check_subtypes
> match: meta::meta::Object::class_factory
> match: serialization::Deserializer::keep_going
> match: serialization::Deserializer::deserialize_attribute
> match: core::Stdout
> match: core::Object::output_class_name
> match: core::Error::message
> match: core::FileStat
> match: serialization::Serializer::try_to_serialize
> match: core::ListIterator
> match: core::Task
> match: serialization::serialization_core
> match: core::file::NativeFileStat::is_sock
> match: core::file::NativeFileStat::is_fifo
> match: core::file::NativeFileStat::is_lnk
> match: serialization::Serializer::serialize_core
> match: serialization::Serializer::serialize

~~~
import serialization

# Simple serializable class identifying a human
class Person
	serialize

	# First and last name
	var name: String

	# Year of birth (`null` if unknown)
	var birth: nullable Int

	redef fun ==(o) do return o isa SELF and name == o.name and birth == o.birth
	redef fun hash do return name.hash
end

# This `serialize` class is composed of two `serialize` attributes
class Partnership
	serialize

	var partner_a: Person
	var partner_b: Person

	redef fun ==(o) do return o isa SELF and partner_a == o.partner_a and partner_b == o.partner_b
	redef fun hash do return partner_a.hash + 1024*partner_b.hash
end
~~~

### Scope of the `serialize` annotation

> match: serialization>
> match: serialization
> match: serialization::Serializer::serialize

`serialize` can annotate class definitions, modules and attributes:

> match: serialization>
> match: serialization
> match: serialization::Serializable
> match: serialization::AttributeTypeError::attribute
> match: serialization::Serializer::serialize
> match: core>collection>
> match: json::JsonSerializer::plain_json
> match: json>
> match: json
> match: core::Sys::main
> match: serialization::E::semi_private
> match: meta::meta::Object::CLASS
> match: serialization::E::phantom
> match: core::re::NativeRegex
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializable::serialize_to

* The annotation on a class applies only to the class definition,
  only attributes declared locally will be serialized.
  However, each definition of a class (a refinement or specialization) can be annotated with `serialize`.

* A module declaration annotated with `serialize` states that all its class definitions
  and locally declared attributes are serializable.

  ~~~
  module shared_between_clients is serialize
  import serialization
  ~~~

* Attribute annotated with `serialize` states that it is to be serialized, when the rest of the class does not.
  The class will become subclass to `Serializable` but its attributes are not to be serialized by default.
  Only the attributes with the `serialize` annotation will be serialized.

  ~~~
  import serialization

  # Only serialize the `name`
  class UserCredentials
      var name: String is serialize
      var avatar_path: String = "/somepath/"+name is lazy
  end
  ~~~

> match: serialization>
> match: serialization
> match: serialization::Serializable
> match: serialization::E::semi_private
> match: meta::meta::Object::CLASS
> match: json::JsonSerializer::plain_json
> match: meta
> match: meta>
> match: core::Object::output_class_name
> match: meta::meta
> match: serialization::Serializer::serialize
> match: core::Sys
> match: core::FinalizableOnce
> match: core::re::NativeRegex
> match: json>
> match: json
> match: core::Object::output
> match: serialization::Serializable::core_serialize_to
> match: json::serialization_write::JsonSerializer::first_attribute
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializable::serialize_to
> match: core::FileStat
> match: serialization::DirectSerializable
> match: core::Object
> match: serialization::E::phantom
> match: core::ListIterator
> match: core::Object::hash
> match: serialization::Serializer::current_object
> match: serialization::E
> match: meta::Class
> match: core::file::NativeFile
> match: core::Task
> match: core::Object::SELF
> match: core::Finalizable::finalize
> match: core::Sys::main
> match: core::Buffer::written
> match: serialization::Serializer::try_to_serialize
> match: core::Error
> match: serialization::Deserializer::deserialize_class_intern
> match: poset::POSetElement
> match: core::Comparable
> match: core::ProcessDuplex
> match: core::abstract_text::Object::class_name
> match: meta::Class::name
> match: serialization>
> match: serialization
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializer::serialize
> match: serialization::Serializable
> match: json>
> match: json
> match: serialization::Serializer::try_to_serialize
> match: serialization::AttributeTypeError::attribute
> match: serialization::serialization_core
> match: core::Sys::main
> match: serialization::E::semi_private
> match: json::JsonSerializer::plain_json
> match: core>collection>
> match: serialization::E::phantom
> match: core::re::NativeRegex
> match: serialization::Serializable::serialize_to
> match: meta::meta::Object::CLASS
> match: core::Sys
> match: core>codecs>
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Deserializer::keep_going
> match: core::Finalizable::finalize
> match: meta
> match: meta>
> match: json::serialization_write::JsonSerializer::first_attribute
> match: poset::POSetElement
> match: serialization::DirectSerializable
> match: meta::meta
> match: core::codecs
> match: serialization::Serializer::current_object
> match: core::Object::hash
> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: serialization::E::semi_private
> match: serialization::Serializer::serialize
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializable::serialize_to
> match: serialization::Serializer::try_to_serialize
> match: serialization::Serializable
> match: serialization::AttributeTypeError::attribute
> match: core::Finalizable::finalize
> match: json>
> match: json
> match: serialization::Deserializer::keep_going
> match: serialization::E::phantom
> match: core::FileStat
> match: json::serialization_write::JsonSerializer::first_attribute
> match: serialization::Serializer::serialize_core
> match: core::Object::output_class_name
> match: core::flat::FlatBuffer::with_infos
> match: serialization::serialization_core::Serializable::serialize_to_or_delay
> match: serialization::Serializer::current_object
> match: core::Object::SELF
> match: core::Buffer::written
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Sys
> match: core::Range::step
> match: core::Object::output
> match: core::Error::message
> match: serialization::DirectSerializable
> match: core::FinalizableOnce
> match: core::Collection::has_exactly
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Serializer::serialize_reference
> match: serialization::custom_serialization
> match: meta
> match: meta>
> match: json::serialization_write::Collection::serialize_to_pure_json
> match: json::serialization_write::Serializable::to_json
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::serialization_core
> match: core::math::Float::is_nan
> match: core::FlatText::fast_cstring
> match: meta::meta
> match: core::flat::FlatText::chars_to_escape_to_c
> match: serialization::AsyncCache
> match: core::re::NativeRegex
> match: core::Collection::has_all
> match: core::file::Text::simplify_path

## The `noserialize` annotation

The `noserialize` annotation mark an exception in a `serialize` module or class definition.

> match: serialization>
> match: serialization
> match: serialization::E::semi_private
> match: serialization::Serializer::serialize
> match: core>collection>
> match: core::Sys::main
> match: meta::meta::Object::CLASS

* By default a module is `noserialize`. There is no need to declare it as such.

* A class definition annotated with `noserialize` within a `serialize` module will not be made serializable.

* A `noserialize` attribute within a class or module annotated with `serialize` will not serialize this attribute.
  The class will still be made subclass of `Serializable` and it won't affect the other attributes.
  The `noserialize` attribute will not be set at deserialization.
  Usually, it will also be annotated with `lazy` to get its value by another mean after the object has been deserialized.

  ~~~
  import serialization

  # Once again, only serialize the `name`
  class UserCredentials
      serialize

      var name: String
      var avatar_path: String = "/somepath/"+name is noserialize, lazy
  end
  ~~~

> match: serialization>
> match: serialization
> match: core::MapRead::has_key
> match: core::Finalizable::finalize
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Collection::has_exactly
> match: core::Range::step
> match: serialization::Serializer::serialize_core
> match: core::Text::to_camel_case
> match: core::flat::FlatText::chars_to_escape_to_c
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: serialization::E::semi_private
> match: core::Sys
> match: core::Collection::has_all
> match: core::Bytes::items
> match: core::Writable::write_to_bytes
> match: core::Text::to_snake_case
> match: core::Collection::has_any
> match: core::Object::output
> match: core::Buffer::times
> match: core::MaybeError::is_error
> match: core::Object::SELF
> match: core::Object::output_class_name
> match: core::FlatText::items
> match: core::Error::message
> match: core::Iterator::is_ok
> match: core::MapIterator::is_ok
> match: core::MinHeap::default
> match: core::re::NativeRegex
> match: core::Sys::main
> match: core::FileStat
> match: core::Collection::is_empty
> match: core::MapRead::is_empty
> match: poset::POSet::has_direct_edge
> match: core>collection>
> match: core::Reader::eof
> match: core::Task
> match: poset::POSetElement::<
> match: core::Writable::write_to_string
> match: core::Object::hash
> match: serialization::Deserializer::deserialize_class_intern
> match: poset::POSetElement::<=
> match: core::ProcessDuplex
> match: core::FlatText::fast_cstring
> match: core>codecs>
> match: core::Object::object_id
> match: core::file::Text::to_program_name
> match: core::flat::FlatBuffer::with_infos
> match: core::Map
> match: core::Text::has_substring
> match: core::MapRead::provide_default_value
> match: core::CString::char_to_byte_index_cached
> match: core::CString::byte_to_char_index_cached
> match: core::FileStream::set_buffering_mode
> match: serialization>
> match: serialization
> match: serialization::Serializer::serialize
> match: serialization::Serializable
> match: json::JsonSerializer::plain_json
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializer::try_to_serialize
> match: serialization::E::semi_private
> match: meta
> match: meta>
> match: meta::meta
> match: core::FileStat
> match: core::Sys::main
> match: core::Buffer::written
> match: core>collection>
> match: serialization::serialization_core
> match: serialization::DirectSerializable
> match: core::flat::FlatBuffer::with_infos
> match: json>
> match: json
> match: core::re::NativeRegex
> match: serialization::Serializable::serialize_to
> match: meta::meta::Object::CLASS
> match: serialization::E::phantom
> match: core::Object
> match: core::Range::step
> match: core::Regex::not_eol
> match: core::Object::output_class_name
> match: core::Regex::not_bol
> match: core::Sys
> match: core::Error::message
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core>codecs>
> match: core::math::Float::is_nan
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::file::Sys::wipe_write
> match: core::Object::hash
> match: serialization::Deserializer::keep_going
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Text::escape_to_mk
> match: serialization>
> match: serialization
> match: serialization::E::semi_private
> match: serialization::Deserializer::keep_going
> match: serialization::AttributeTypeError::attribute
> match: json::JsonSerializer::plain_json
> match: core::Buffer::written
> match: serialization::Deserializer::deserialize_attribute
> match: json>
> match: json
> match: core::Finalizable::finalize
> match: core::FileStat
> match: core::flat::FlatBuffer::with_infos
> match: core::file::Sys::wipe_write
> match: serialization::Serializer::serialize_attribute
> match: core::Range::step
> match: serialization::E::phantom
> match: serialization::Deserializer::deserialize_class_intern
> match: meta
> match: meta>
> match: meta::meta
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Serializer::try_to_serialize
> match: core::Object::SELF
> match: core::re::NativeRegex
> match: core::Object
> match: core::flat::FlatText::chars_to_escape_to_c
> match: serialization::Serializable
> match: core::Error::message
> match: serialization::Serializer::serialize
> match: core::flat::FlatText::chars_to_html_escape
> match: core::Text::substring_from
> match: core::Sys
> match: core::Text::escape_to_mk
> match: core::Object::output_class_name
> match: core::file::NativeFile::set_buffering_type
> match: core::flat::FlatString::full
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::Text::substring
> match: core::Object::object_id
> match: core::flat::FlatString::with_infos
> match: core::Object::is_same_type
> match: core::Collection::has_exactly
> match: core::math::Float::is_nan
> match: core::Object::!=
> match: serialization::serialization_core::Serializable::serialize_to_or_delay
> match: core::FileStream::set_buffering_mode
> match: serialization::SafeDeserializer::check_subtypes
> match: core::FlatText::fast_cstring
> match: core::ISODate::timezone
> match: core::bytes::CString::to_bytes
> match: core::file::Text::to_program_name
> match: core::Object::output
> match: core::FinalizableOnce::finalize_once
> match: core::bytes::CString::to_bytes_with_copy
> match: serialization::Deserializer::deserialize
> match: poset::POSetElement
> match: serialization::Serializer::serialize_core
> match: core::Object::is_same_instance
> match: core::CString::char_at
> match: core::FlatText::items
> match: serialization::AttributeMissingError
> match: serialization::SerializerCache::new_id_for
> match: serialization::E::id
> match: serialization::DirectSerializable

## The `serialize_as` annotation

By default, an attribute is identified in the serialization format by its Nit name.
The `serialize_as` attribute changes this behavior and sets the name of an attribute in the serialization format.

> match: serialization>
> match: serialization
> match: meta::Class::name
> match: serialization::AttributeTypeError::attribute
> match: serialization::serialization
> match: serialization::AttributeTypeError::expected_type
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::AttributeError::attribute_name
> match: serialization::E::semi_private
> match: json>
> match: json
> match: serialization::Deserializer::keep_going
> match: serialization::Serializer::serialize_core
> match: core::Text::format
> match: core::abstract_text::Object::native_class_name
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::inspect::InspectSerializer
> match: core::hash_collection::HashSetIterator::set
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::E::phantom
> match: serialization::serialization_core::Serializable::serialize_to_or_delay
> match: meta::GetName
> match: core::Codec::encode_string
> match: serialization::Serializer
> match: core::Text::is_numeric
> match: core::Codec::encode_char
> match: core::abstract_text::Object::class_name
> match: serialization::Serializer::current_object
> match: core::codec_base
> match: json::serialization_write::JsonSerializer::open_objects
> match: core::Set
> match: serialization::AttributeError::receiver
> match: serialization::custom_serialization
> match: serialization::AttributeMissingError
> match: serialization::AttributeError
> match: core::abstract_text::Sys::program_name
> match: serialization::DuplexCache
> match: serialization::Serializer::serialize_attribute
> match: serialization::Deserializer::deserialize
> match: serialization::AttributeTypeError
> match: serialization::Deserializer::deserialize_attribute_missing
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::serialization_write::JsonSerializer::first_attribute
> match: serialization::engine_tools::Text::strip_nullable
> match: core::Object::output_class_name
> match: serialization::engine_tools::Object::is_same_serialized
> match: core::Path::filename
> match: serialization::Serializer::serialize_reference
> match: serialization::Serializable::core_serialize_to
> match: core::Finalizable::finalize
> match: core::ISODate
> match: core::abstract_text::CString::to_s_unsafe
> match: poset::POSetElement
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: serialization::Serializer::warn

This annotation can be useful to change the name of an attribute to what is expected by a remote service.
Or to use identifiers in the serialization format that are reserved keywords in Nit (like `class` and `type`).

> match: serialization>
> match: serialization
> match: json>
> match: json
> match: core::Object::SELF
> match: core::Object::output_class_name
> match: json::JsonSerializer::plain_json
> match: json::serialization_write::Serializable::accept_json_serializer
> match: meta::Class::name
> match: serialization::Serializer
> match: serialization::Deserializer::deserialize_attribute
> match: core::Finalizable::finalize
> match: serialization::E::phantom
> match: serialization::serialization
> match: core::Object::output
> match: serialization::AttributeTypeError::expected_type
> match: core::re::NativeRegex
> match: serialization::Deserializer::deserialize_class_intern
> match: core::ProcessDuplex
> match: serialization::E::semi_private
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::Serializer::serialize_core
> match: serialization::Serializable
> match: core::Map
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Deserializer
> match: core::Comparable::OTHER
> match: meta::meta::Object::class_factory
> match: meta::GetName
> match: core::Bytes::items
> match: core::FlatText::fast_cstring
> match: core::Sys
> match: meta
> match: meta>
> match: core::Object::is_same_type
> match: meta::meta
> match: core::Task
> match: core::abstract_text::Object::native_class_name
> match: serialization::AttributeTypeError::attribute
> match: core::Writer::is_writable
> match: serialization::Serializer::current_object
> match: core::Reader
> match: serialization::engine_tools::Object::serialization_hash
> match: core::Writer
> match: core::bytes::Int::to_bytes
> match: core::Object::object_id
> match: meta::meta::Object::get_class
> match: core::Text::format
> match: meta::meta::Object::CLASS
> match: core::file::Text::/
> match: core::codec_base
> match: core::Object
> match: core::FlatText::items
> match: core::Text::to_camel_case
> match: serialization::Serializable::core_serialize_to
> match: core::Collection::has_exactly
> match: core::Duplex
> match: core::Writable
> match: core::Object::hash
> match: core::FileStat
> match: core::Error::message
> match: core::SimpleCollection
> match: core::Writable::write_to_string
> match: core::RemovableCollection
> match: core::flat::FlatBuffer::with_infos

~~~
import serialization

class UserCredentials
	serialize

	# Rename to "username" in JSON for compatibility with remote service
	var name: String is serialize_as "username"

	# Rename to a shorter "ap" for a smaller JSON file
	var avatar_path: String = "/somepath/"+name is lazy, serialize_as "ap"
end
~~~

## Custom serializable classes

> match: serialization>
> match: serialization
> match: serialization::Serializable
> match: meta::meta::Object::CLASS
> match: serialization::Serializer::try_to_serialize
> match: serialization::Serializer::serialize_attribute
> match: serialization::serialization_core

The annotation `serialize` should be enough for most cases,
but in some cases you need more control over the serialization process.

> match: serialization>
> match: serialization
> match: serialization::serialization
> match: core::AbstractArrayRead::sub
> match: serialization::Serializer::serialize
> match: core::Buffer::camel_case
> match: core::Buffer::snake_case
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Object::is_same_instance
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Text::to_snake_case
> match: core::Text::to_camel_case
> match: core::Writable::write_to_bytes
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializer::serialize_reference
> match: json::JsonSerializer::plain_json
> match: serialization::Serializer::current_object
> match: serialization::Deserializer::deserialize_class_intern
> match: core::ProcessDuplex
> match: core::Queue
> match: core::flat::FlatText::chars_to_html_escape
> match: serialization::Serializable::core_serialize_to
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Text::to_lower
> match: core::Text::to_upper
> match: core::Process::id
> match: core::Process::is_finished
> match: serialization::Serializer::serialize_core
> match: core::Char::to_lower
> match: core::Char::to_upper
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::Serializable::serialize_to
> match: core::Char::is_lower
> match: core::ProcessDuplex::write_and_read
> match: serialization::engine_tools::Object::is_same_serialized
> match: core::ProcessReader
> match: core::FileReader::open
> match: core::Char::is_upper
> match: serialization::Serializer
> match: serialization::E::semi_private
> match: core::Regex::ignore_case
> match: core::abstract_text::CString::fill_from
> match: core::Finalizable
> match: core::Finalizable::finalize
> match: core::ProcessWriter
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Process::wait
> match: core::MapRead::get_or_null
> match: core::file::Text::chdir
> match: core::Path::read_all_bytes
> match: core::Path::files
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::FlatText::fast_cstring
> match: core::FileStream::file_stat
> match: serialization::serialization_core::Serializable::serialize_to_or_delay
> match: json::serialization_write::JsonSerializer::open_objects
> match: core::Bytes::to_i

For more control, create a subclass to `Serializable` and redefine `core_serialize_to`.
This method should use `Serializer::serialize_attribute` to serialize its components.
`serialize_attribute` works as a dictionary and organize attributes with a key.

> match: serialization::Serializer::serialize_attribute
> match: serialization>
> match: serialization
> match: serialization::Serializable::core_serialize_to
> match: serialization::Serializer::serialize
> match: core::MapIterator::key
> match: serialization::Serializable
> match: core::MapRead::get_or_null
> match: serialization::Deserializer::deserialize_class
> match: core::hash_collection::HashNode::key
> match: core::file::Text::join_path
> match: serialization::Serializable::serialize_to
> match: core::Cloneable::clone
> match: serialization::Serializer
> match: serialization::AttributeTypeError::attribute
> match: core::Collection
> match: core::Object::is_same_type
> match: core::Object::SELF
> match: json>
> match: json
> match: serialization::serialization_core
> match: serialization::E::semi_private
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Path::/
> match: core::Finalizable::finalize

You will also need to redefine `Deserializer::deserialize_class` to support this specific class.
The method should only act on known class names, and call super otherwise.

> match: serialization>
> match: serialization
> match: meta::Class::name
> match: serialization::Deserializer::deserialize_class
> match: serialization::Serializable::core_serialize_to
> match: meta
> match: meta>
> match: meta::meta::Object::CLASS
> match: meta::meta
> match: meta::meta::Object::class_factory
> match: core::abstract_text::Object::class_name
> match: core::Sys
> match: core::Regex::compile
> match: core::Object::output_class_name
> match: core::Object::object_id
> match: core::abstract_text::Object::native_class_name
> match: core::re::NativeRegex
> match: core::FinalizableOnce
> match: serialization::Deserializer::deserialize_class_intern
> match: core::FinalizableOnce::finalize_once
> match: core::IteratorDecorator
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Cloneable::clone
> match: meta::meta::Object::get_class

### Example: the User class

> match: meta::meta::Object::CLASS
> match: core::abstract_text::Object::to_s
> match: serialization>
> match: serialization
> match: core::FinalizableOnce
> match: serialization>examples>
> match: core::re::NativeRegex

The following example cannot use the `serialize` annotations
because some of the arguments to the `User` class need special treatment:

> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: serialization::Serializer::serialize
> match: core::re::NativeRegex
> match: serialization::Serializable
> match: core::Object
> match: core::math::Float::is_nan
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Process::arguments
> match: core::FinalizableOnce
> match: meta::meta::Object::CLASS
> match: serialization::E::semi_private
> match: serialization::DirectSerializable
> match: json>
> match: json
> match: core::abstract_text::Object::to_s
> match: core::MapRead::get_or_null
> match: core::Path::link_stat
> match: serialization::Serializer::current_object
> match: serialization::Serializable::serialize_to
> match: core::Regex::not_eol
> match: core::abstract_text::Sys::native_argc
> match: core::Text::capitalized
> match: core::abstract_text::Sys::native_argv
> match: serialization>examples>
> match: core::Object::output_class_name
> match: core::Object::SELF
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Text::to_snake_case

* The `name` attribute is perfectly normal, it can be serialized and deserialized
  directly.

* The `password` attribute must be encrypted before being serialized,
  and unencrypted on deserialization.

* The `avatar` attributes is kept as ASCII art in memory.
  It could be serialized as such but it is cleaner to only
  serialize the path to its source on the file system.
  The data is reloaded on deserialization.

> match: serialization>
> match: serialization
> match: serialization::Deserializer::deserialize_attribute
> match: json::JsonSerializer::plain_json
> match: meta::Class::name
> match: core::Finalizable::finalize
> match: serialization::AttributeTypeError::attribute
> match: core::Map
> match: core::Object::output_class_name
> match: serialization::Deserializer::keep_going
> match: serialization::E::semi_private
> match: json>
> match: json
> match: serialization::Deserializer::deserialize
> match: serialization::E::phantom
> match: core::Bytes::items
> match: serialization::SafeDeserializer::check_subtypes
> match: json::serialization_write::Collection::serialize_to_pure_json
> match: core::ProcessDuplex
> match: core::Object::SELF
> match: serialization::Serializer::serialize_core
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializable
> match: core::Object::output
> match: serialization::Serializer::try_to_serialize
> match: serialization::AttributeTypeError::expected_type
> match: core::Collection::has_exactly
> match: serialization::Serializer::current_object
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::AttributeError::attribute_name
> match: core::Reader
> match: core::Writer
> match: serialization::Serializer::serialize
> match: serialization::SafeDeserializer
> match: serialization::Deserializer::deserialize_class_intern
> match: core::bytes::Int::to_bytes
> match: core::Error::message
> match: core::Task
> match: serialization::Serializable::serialize_to
> match: core::Duplex
> match: core::Writer::is_writable
> match: core::Comparable::OTHER
> match: core::Text::to_camel_case
> match: core::Sys
> match: core::SimpleCollection
> match: core::RemovableCollection
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Object::object_id
> match: core::FlatText::items
> match: meta::GetName
> match: core::Writable
> match: core::file::Text::to_program_name
> match: core::Finalizable
> match: core::FileStat
> match: core::MapRead::has_key
> match: core::re::NativeRegex
> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: core::Finalizable::finalize
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::AttributeTypeError::attribute
> match: serialization::Serializer::serialize_attribute
> match: serialization::E::phantom
> match: serialization::E::semi_private
> match: core::Collection::has_exactly
> match: json>
> match: json
> match: serialization::Deserializer::keep_going
> match: serialization::AttributeMissingError
> match: serialization::AttributeError
> match: serialization::SafeDeserializer
> match: serialization::Serializer::serialize
> match: core::Object::output
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Object::output_class_name
> match: serialization::Serializable::serialize_to
> match: core::Object::SELF
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Serializer::serialize_core
> match: serialization::Serializer::try_to_serialize
> match: serialization::Serializable
> match: serialization::Deserializer
> match: serialization::Serializer::current_object
> match: core::Writable::write_to_string
> match: core::Object::hash
> match: core::FlatText::items
> match: core::ProcessDuplex
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::flat::FlatBuffer::with_infos
> match: core::Map
> match: core::Error::message
> match: core::Sys
> match: serialization::custom_serialization
> match: core::Buffer::written
> match: core::re::NativeRegex::malloc
> match: core::abstract_text::CString::fill_from
> match: core::Writable
> match: serialization::DuplexCache
> match: core::Bytes::items
> match: core::math::Float::is_nan
> match: core::Writable::write_to_bytes
> match: serialization>
> match: serialization
> match: json::JsonSerializer::plain_json
> match: core::Finalizable::finalize
> match: core::FileStat
> match: core::Error::message
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::E::semi_private
> match: core::file::Text::simplify_path
> match: core::Object::output
> match: core::StringReader::source
> match: core::MapRead::has_key
> match: serialization::Serializer::try_to_serialize
> match: core::Object::output_class_name
> match: core::FileStream::path
> match: core::Collection::has_exactly
> match: serialization::Serializer::serialize_attribute
> match: core::Path
> match: serialization::Serializer::serialize_core
> match: serialization::Serializer::serialize
> match: core::file::Sys::wipe_write
> match: serialization::Deserializer::keep_going
> match: core::Bytes::items
> match: core::Object::SELF
> match: core::Sys
> match: serialization::Deserializer::deserialize_attribute
> match: json>
> match: json
> match: core::FinalizableOnce
> match: serialization::E::phantom
> match: serialization::Serializable::serialize_to
> match: core::file::Text::relpath
> match: core::Text::to_camel_case
> match: core::FlatText::fast_cstring
> match: core::file::Text::to_path
> match: core::FlatText::items
> match: core::Task
> match: core::file::Text::to_program_name
> match: core::abstract_collection::RefIterator
> match: core::Object::hash
> match: core::file::FileStream::file
> match: core::IOError
> match: serialization::Serializable
> match: core::Text::to_snake_case
> match: core::file::Int::fd_to_stream
> match: core::Object::object_id
> match: core::flat::FlatBuffer::with_infos
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Serializer::current_object
> match: core::Range::step
> match: core::Writable::write_to_string
> match: core::Path::exists
> match: json::serialization_write::JsonSerializer::first_attribute
> match: core::ProcessDuplex
> match: core::Collection::has_all
> match: serialization::SafeDeserializer
> match: serialization::AttributeTypeError::attribute
> match: core::Path::files
> match: core::Map

For this customization, the following code snippet implements
two serialization services: `User::core_serialize_to` and
`Deserializer::deserialize_class`.

> match: serialization::serialization
> match: serialization::Deserializer
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer
> match: serialization>
> match: serialization
> match: serialization::Serializable::core_serialize_to
> match: serialization::Deserializer::deserialize_class_intern
> match: serialization::CachingDeserializer
> match: core::abstract_text::Object::to_s
> match: serialization::engine_tools::Object::serialization_hash

~~~
module user_credentials

import serialization

# User credentials for a website
class User
	super Serializable

	# User name
	var name: String

	# Clear text password
	var password: String

	# User's avatar image as data blob
	var avatar: Image

	redef fun core_serialize_to(serializer: Serializer)
	do
		# This is the normal serialization process
		serializer.serialize_attribute("name", name)

		# Serialized an encrypted version of the password
		#
		# Obviously, `rot(13)` is not a good encrption
		serializer.serialize_attribute("pass", password.rot(13))

		# Do not serialize the image, only its path
		serializer.serialize_attribute("avatar_path", avatar.path)
	end
end

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "User" then
			# Deserialize normally
			var user = deserialize_attribute("name").as(String)

			# Decrypt password
			var pass = deserialize_attribute("pass").as(String).rot(-13)

			# Deserialize the path and load the avatar from the file system
			var avatar_path = deserialize_attribute("avatar_path").as(String)
			var avatar = new Image(avatar_path)

			return new User(user, pass, avatar)
		end

		return super
	end
end

redef class String
	fun rot(s: Int): String do return self
end

# An image loaded in memory as ASCII art
#
# Not really useful for this example, provided for consistency only.
class Image
	# Path on the filesystem for `self`
	var path: String

	# ASCII art composing this image
	var ascii_art: String = path.to_path.read_all is lazy
end

~~~

See the documentation of the module `serialization::serialization` for more
information on the services to redefine.

> match: serialization::serialization
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer
> match: serialization>
> match: serialization
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::Deserializer
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::serialization_core
> match: serialization::Serializer::serialize_reference

## Serialization services

> match: serialization::serialization
> match: serialization::Serializer
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Deserializer

The `serialize` annotation and the `Serializable` class are used on
classes specific to the business domain.
To write (and read) instances of these classes to a persistent format
you must use implementations of `Serializer` and `Deserializer`.

> match: serialization>
> match: serialization
> match: serialization::Serializable
> match: core::re::NativeRegex
> match: meta::meta::Object::CLASS
> match: meta::meta::Object::class_factory
> match: json>
> match: json
> match: core::Object::object_id
> match: serialization::Serializer::serialize
> match: serialization::E
> match: core::Writer::write
> match: json::JsonSerializer::plain_json
> match: core::file::NativeFile
> match: serialization::serialization_core
> match: core::Object::SELF
> match: core::Sys
> match: core::Object
> match: core::Protocol
> match: core::abstract_text::Object::native_class_name
> match: core::MaybeError
> match: serialization::DirectSerializable
> match: poset::POSetElement
> match: serialization::Serializable::from_deserializer
> match: core::Object::output_class_name
> match: core::Reader::read
> match: serialization::RestrictedSerializer
> match: meta
> match: meta>
> match: core::IteratorDecorator
> match: serialization::RestrictedJsonSerializer
> match: core::ListIterator
> match: meta::meta::Object::get_class
> match: core::file::NativeFileStat
> match: meta::meta
> match: serialization::Serializer::serialize_attribute
> match: serialization::Serializer::try_to_serialize
> match: core::Error
> match: meta::Class
> match: serialization::Serializer
> match: core::abstract_text::Object::class_name
> match: meta::Class::name
> match: core::Finalizable::finalize
> match: serialization::custom_serialization
> match: core::FileStat
> match: core::FlatText::fast_cstring
> match: serialization::Serializable::core_serialize_to
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Collection
> match: core::Comparable
> match: core::Writer::is_writable
> match: serialization::Serializable::serialize_to
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Duplex
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::Cloneable
> match: core::abstract_text::StringCharView
> match: core::abstract_text::StringByteView
> match: core::Stderr
> match: core::Object::is_same_instance
> match: core::Stdout
> match: core::Stdin
> match: core::Comparator
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::StringWriter
> match: core::Text::format
> match: core::Object::is_same_type
> match: core::Stream::start
> match: core::Task
> match: serialization::Deserializer

The main implementations of these services are `JsonSerializer` and `JsonDeserializer`,
from the `json_serialization` module.

> match: core::Sys::main
> match: serialization::Deserializer
> match: core::Task::main
> match: core::Collection
> match: serialization>
> match: serialization
> match: serialization::Serializer
> match: json::JsonSerializer
> match: core::SequenceRead
> match: json>
> match: json
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core>collection>
> match: core::Finalizable::finalize
> match: core>codecs>
> match: core::Sys::run
> match: core::Map
> match: core::codecs
> match: core::Collection::has_exactly
> match: core::Task
> match: core::CString
> match: core::MapRead::provide_default_value
> match: serialization::Deserializer::deserialize_class_intern
> match: core::ropes::RopeBytes
> match: core::Collection::has_all
> match: core::Collection::has_any
> match: core::queue::ProxyQueue
> match: core::hash_collection::Set::new
> match: core::ropes::RopeChars
> match: core::abstract_text::Sys::native_argc
> match: core::abstract_text::Sys::native_argv
> match: core::Text::empty
> match: core::Sys
> match: core::Queue
> match: core::hash_collection::Map::new
> match: core::MapRead::has_key
> match: core::re::NativeRegex
> match: json::serialization_write::JsonSerializer::open_objects
> match: meta::meta::Object::class_factory
> match: core::Range::step
> match: json::JsonSerializer::plain_json
> match: core::abstract_text::CString::to_s_full

~~~nitish
mport json
import user_credentials

# Data to be serialized and deserialized
var couple = new Partnership(
	new Person("Alice", 1985, new Image("alice.png")),
	new Person("Bob", null, new Image("bob.png")))

var path = "serialized_data.json"
var writer = new FileWriter(path)
var serializer = new JsonSerializer(writer)
serializer.serialize couple
writer.close

var reader = new FileReader(path)
var deserializer = new JsonDeserializer(reader.to_s)
var deserialized_couple = deserializer.deserialize
reader.close

assert couple == deserialize_couple
~~~

## Limitations and TODO

> match: core::abstract_text::CString::to_s_full
> match: core::Object::output

The serialization has some limitations:

> match: serialization::serialization
> match: serialization::engine_tools::Object::serialization_hash
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization>
> match: serialization
> match: serialization::engine_tools::Object::is_same_serialized
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::inspect::InspectSerializer

* A limitation of the JSON parser prevents deserializing from files
  with more than one object.
  This could be improved in the future, but for now you should
  serialize a single object to each files and use different instances of
  serializer and deserializer each time.

* The serialization uses only the short name of a class, not its qualified name.
  This will cause problem when different classes using the same name.
  This could be solved partially in the compiler and the library.
  A special attention must be given to the consistency of the name across
  the different programs sharing the serialized data.

* The serialization support in the compiler need some help to
  deal with generic types. A solution is to use `nitserial`,
  the next section explores this subject.

> match: serialization>
> match: serialization
> match: core::file::FileStream::file
> match: core::file::Int::fd_to_stream
> match: core::Object::object_id
> match: serialization::Serializer::serialize
> match: core::Object::is_same_instance
> match: core::FileStream::fd
> match: json>
> match: json
> match: core::file::Sys::wipe_write
> match: json::JsonSerializer::plain_json
> match: serialization::Deserializer::deserialize_class
> match: serialization::Serializer::current_object
> match: serialization::Deserializer::deserialize_class_intern
> match: serialization::Deserializer::deserialize_attribute
> match: serialization::Serializer::serialize_attribute
> match: core::Error::message
> match: core::FileStat
> match: core::FileWriter::from_fd
> match: core::FileReader::from_fd
> match: core::Path
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Path::filename
> match: core::Path::delete
> match: core::Path::exists
> match: core::file::NativeFile
> match: core::Finalizable
> match: serialization::Serializable::serialize_to
> match: serialization::DeserializerCache
> match: core::Path::stat
> match: serialization::custom_serialization
> match: core::Writable::write_to_bytes
> match: core::Finalizable::finalize
> match: serialization::Serializable::core_serialize_to
> match: serialization::AttributeTypeError::attribute
> match: serialization::Deserializer::keep_going
> match: serialization::Deserializer::deserialize
> match: core::re::Regex::native_match
> match: serialization::E::id
> match: serialization::SerializerCache
> match: core::FileStat::is_file
> match: core::Path::each_line
> match: core::Object::hash
> match: core::file::NativeFileStat::is_reg
> match: json::serialization_write::JsonSerializer::first_attribute
> match: serialization::Serializable::from_deserializer
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::SafeDeserializer::check_subtypes
> match: core::FileStat::size
> match: core::Task
> match: core::ProcessWriter::stream_out
> match: core::FileWriter
> match: core::FileReader
> match: serialization::SerializerCache::id_for
> match: core::Cloneable::clone
> match: json::JsonSerializer
> match: core::ProcessReader::stream_in
> match: core::FileStat::mode
> match: serialization::AsyncCache
> match: core::file::NativeFileStat::mode
> match: serialization::SerializerCache::new_id_for
> match: core::Path::files
> match: core::Stream::last_error
> match: core::FileStream
> match: core::FileWriter::open
> match: meta::Class::name
> match: serialization>
> match: serialization
> match: core::Object::output_class_name
> match: core::Object::object_id
> match: core::abstract_text::Object::class_name
> match: core::abstract_text::Sys::program_name
> match: core::abstract_text::Object::native_class_name
> match: meta
> match: meta>
> match: meta::GetName
> match: meta::meta
> match: core::file::Text::to_program_name
> match: core::Path::filename
> match: meta::meta::Object::class_factory
> match: core::Task
> match: serialization::AttributeTypeError::expected_type
> match: serialization::AttributeError::attribute_name
> match: core::re::NativeRegex
> match: serialization::engine_tools::Object::serialization_hash
> match: json::JsonSerializer::plain_json
> match: core::Error::message
> match: serialization::engine_tools::Text::strip_nullable
> match: json>
> match: json
> match: core::MaybeError
> match: core::Object::output
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Object::SELF
> match: core::Object::!=
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Ref
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: serialization::Deserializer::deserialize_attribute
> match: core::FileStat
> match: core::flat::FlatBuffer::with_infos
> match: core::Finalizable::finalize
> match: core::Buffer::written
> match: core::Error::cause
> match: core::Sys
> match: meta::meta::Object::CLASS
> match: core::Object
> match: core::FinalizableOnce
> match: core::math::Float::is_nan
> match: core::FlatText::fast_cstring
> match: serialization::Serializable
> match: serialization::serialization
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Collection::has_exactly
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializer::serialize_core
> match: serialization>
> match: serialization
> match: core::Object::SELF
> match: serialization::serialization
> match: serialization::engine_tools::Object::serialization_hash
> match: core::Iterator::next
> match: core::MapIterator::next
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JsonSerializer::plain_json
> match: core::list::ListNode::next
> match: serialization::Deserializer::deserialize_class_intern
> match: core::re::NativeRegex
> match: serialization::Serializable::core_serialize_to
> match: core::Iterator::next_by
> match: core::Object::is_same_type
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Object::object_id
> match: serialization::Serializer
> match: json::serialization_write::JsonSerializer::open_objects
> match: meta
> match: meta>
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::Serializer::current_object
> match: meta::meta
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization::Serializer::serialize_core
> match: core::MapRead::get_or_null
> match: core::Regex::optimize_has
> match: core::Writable::write_to_bytes
> match: core::Buffer::written
> match: core::Finalizable::finalize
> match: core::Discrete::successor
> match: json>
> match: json
> match: meta::meta::Object::class_factory
> match: serialization::inspect::InspectSerializer
> match: meta::GetName
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Stream::lookahead
> match: core::abstract_text::CString::to_s_full
> match: serialization::DuplexCache
> match: core::Text::to_snake_case
> match: core::Queue::peek
> match: core::FlatText::fast_cstring
> match: core::file::NativeDir::readdir

## Dealing with generic types

> match: core::Object::SELF

One limitation of the serialization support in the compiler is with generic types.
For example, the `Array` class is generic and serializable.
However, the runtime types of Array instances are parameterized and are unknown to the compiler.
So the compiler won't support serializing instances of `Array[MySerializable]`.

> match: serialization>
> match: serialization
> match: core::Object::SELF
> match: json::JsonSerializer::plain_json
> match: meta
> match: meta>
> match: meta::meta
> match: core::Array
> match: serialization::Serializable
> match: core::hash_collection::HashCollection::array
> match: core::FileStat
> match: core::array::ArraySet::array
> match: core::Object::object_id
> match: core::Object
> match: core::circular_array::CircularArrayIterator::array
> match: core::array::ArrayIterator::array
> match: core::Finalizable::finalize
> match: core::Pattern::split_in
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Sys
> match: core::Buffer::written
> match: serialization::SafeDeserializer::check_subtypes
> match: json>
> match: json
> match: core::flat::FlatBuffer::with_infos
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Serializer::serialize_attribute
> match: core::re::NativeRegex
> match: core::Object::is_same_type
> match: core::ArrayCmp
> match: serialization::Serializer::serialize_core
> match: core::Array::+
> match: core::Error::message
> match: serialization::Serializer::try_to_serialize
> match: core::Object::output_class_name
> match: core::Writable
> match: core::Object::hash
> match: core::Collection::has_exactly
> match: core::math::Float::is_nan
> match: core::Regex::optimize_has
> match: meta::meta::Object::CLASS
> match: core::Object::output
> match: core::Map
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Range::step
> match: core::file::NativeFile
> match: serialization::serialization
> match: core::AbstractArrayRead::reversed
> match: serialization::Serializer::current_object
> match: serialization::Serializable::core_serialize_to
> match: core::Writable::write_to_string
> match: serialization::Serializable::from_deserializer
> match: core::Cloneable
> match: serialization::Serializer::serialize
> match: core::FinalizableOnce

The tool `nitserial` solves this problem at the level of user modules.
It does so by parsing a Nit module, group or project to find all known
parameterized types of generic classes.
It will then generating a Nit module to handle deserialization of these types.

> match: serialization>
> match: serialization
> match: core::Object::SELF
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: core>codecs>
> match: core>collection>
> match: core::codecs
> match: core::re::NativeRegex
> match: meta
> match: meta>
> match: core::Sys::main
> match: meta::meta
> match: meta::meta::Object::CLASS
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::NativeArray
> match: core::file::Sys::wipe_write
> match: serialization::SafeDeserializer::check_subtypes
> match: core::FlatText::fast_cstring

Usage steps to serialize parameterized types:

> match: core::Range::step
> match: core::Object::SELF
> match: serialization>
> match: serialization
> match: core::abstract_collection::StepIterator::step
> match: serialization::Serializer::serialize
> match: serialization::SafeDeserializer::whitelist

* Write your program, let's call it `my_prog.nit`,
  it must use some parameterized serializable types.
  Let's say that you use `Array[MySerializable]`.

* Run nitserial using `nitserial my_prog.nit` to
  generate the file `my_prog_serial.nit`.

* Compile your program by mixing in the generated module with:
  `nitc my_prog.nit -m my_prog_serial.nit`

> match: serialization>
> match: serialization
> match: core::Object::SELF
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: core::Writer::write
> match: core::re::NativeRegex
> match: core::Object::object_id
> match: core::Object::is_same_type
> match: core::NativeArray
> match: core::Finalizable::finalize
> match: core::FlatText::fast_cstring
> match: core::re::NativeRegex::malloc
> match: core::MaybeError
> match: serialization::Serializer::try_to_serialize
> match: core::file::Text::to_program_name
> match: core::CachedAlphaComparator
> match: core::Sys::main
> match: core::Object::output
> match: core::Stream::finish
> match: core::Array
> match: core::hash_collection::HashCollection::array
> match: core::Object::output_class_name
> match: core::array::ArraySet::array
> match: core::circular_array::CircularArrayIterator::array
> match: core::array::ArrayIterator::array
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Bytes::items
> match: core::Path::open_wo
> match: serialization::Serializer::serialize_core
> match: core::Regex::compile
> match: core::Writer::is_writable
> match: core::abstract_collection::CoupleMapIterator
> match: serialization::Serializer::serialize
> match: serialization::engine_tools::Object::serialization_hash
> match: core::file::FileStream::file
> match: json>
> match: json
> match: json::serialization_write::Serializable::serialize_to_json
> match: serialization>
> match: serialization
> match: core::NativeArray
> match: json::JsonSerializer::plain_json
> match: core::flat::UnicodeFlatString
> match: core::file::Int::fd_to_stream
> match: json::JsonSerializer
> match: core::fixed_ints_text::UInt32::native_to_s
> match: core::fixed_ints_text::Int32::native_to_s
> match: core::fixed_ints_text::UInt16::native_to_s
> match: core::fixed_ints_text::Int16::native_to_s
> match: core::fixed_ints_text::Int8::native_to_s
> match: core::Text::unescape_nit
> match: core::abstract_text::Byte::native_byte_to_s
> match: core::abstract_text::Int::native_int_to_s
> match: core::FileStream::fd
> match: core::file::Sys::wipe_write
> match: core::flat::CString::to_s_with_length
> match: core::FileWriter::from_fd
> match: core::FileReader::from_fd
> match: core::core
> match: serialization::E::phantom
> match: core::Path::filename
> match: core::Path::delete
> match: core::bytes::Text::unescape_to_bytes
> match: core::NativeArray::to_a
> match: core::Path::exists
> match: core::Iterator
> match: core::Path
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Regex::compile
> match: serialization>
> match: serialization
> match: json>
> match: json
> match: core::Sys::main
> match: json::JsonSerializer::plain_json
> match: core>collection>

This was a simple example, in practical cases you may need
to use more than one generated file.
For example, on a client/server system, an instance can be created
server-side, serialized and the used client-side.
In this case, two files will be generated by nitserial,
one for the server and one for the client.
Both the files should be compiled with both the client and the server.

> match: serialization>
> match: serialization
> match: core::file::FileStream::file
> match: core::file::Int::fd_to_stream
> match: core::file::Sys::wipe_write
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::FileStat
> match: core::Finalizable::finalize
> match: serialization::Deserializer::deserialize_class_intern
> match: core::FileStream::fd
> match: json::JsonSerializer::plain_json
> match: core::Path
> match: core::FileReader::from_fd
> match: core::Path::filename
> match: core::Path::delete
> match: core::Error::message
> match: core::FileWriter::from_fd
> match: core::Object::SELF
> match: core::Path::files
> match: json>
> match: json
> match: core::Path::exists
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::FlatText::fast_cstring
> match: core::FileReader::open
> match: core::Path::stat
> match: core::flat::FlatBuffer::with_infos
> match: core::file::NativeFile
> match: core::Path::read_all_bytes
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::Object::object_id
> match: core::Path::open_wo
> match: core::Writable::write_to_bytes
> match: core::Finalizable
> match: core::Path::open_ro
> match: core::file::Text::to_path
> match: core::Text::to_snake_case
> match: core::Path::each_line
> match: core::Map
> match: core::FileWriter
> match: core::file::Text::relpath
> match: core::FileReader
> match: core::ProcessDuplex
> match: core::Buffer::written
> match: core::String
> match: core::FileStat::is_file
> match: core::Text::to_camel_case
> match: core::file::Text::file_extension
> match: core::flat::FlatText::chars_to_html_escape
> match: core::Bytes::items
> match: core::re::NativeRegex
> match: core::file::NativeFileStat::is_reg
> match: serialization::Serializable
> match: core::Regex::compile
> match: core::Object::output
> match: core::Collection::has_exactly
> match: core::bytes::Int::to_bytes
> match: core::Object::hash
> match: core::Path::rmdir
> match: core::math::Float::is_nan
> match: core::AbstractArrayRead::sub
> match: core::Iterator
> match: core::Iterator::next_by
> match: core::Object::is_same_type
> match: core::Writer::is_writable

