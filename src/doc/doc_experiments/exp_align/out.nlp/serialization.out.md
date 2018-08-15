# Abstract serialization services

> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::Deserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::caching

The serialization services are based on the `serialize` and the `noserialize` annotations,
the `Serializable` interface and the implementations of `Serializer` and `Deserializer`.

> match: serialization::Serializable
> match: serialization::Serializer
> match: serialization::Deserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::SafeDeserializer
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::CachingDeserializer
> match: serialization::DeserializerCache
> match: serialization::CachingSerializer
> match: serialization::RestrictedSerializer
> match: serialization::RestrictedJsonSerializer
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::AsyncCache
> match: serialization::caching
> match: serialization::inspect

## The `serialize` annotation

> match: serialization
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::custom_serialization
> match: serialization::serialization_core

A class annotated with `serialize` identifies it as a subclass of Serializable and
triggers the generation of customized serialization and deserialization services.

> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::Serializer
> match: serialization::Deserializer
> match: serialization::DuplexCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization::SafeDeserializer
> match: serialization::engine_tools
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::safe
> match: serialization::caching

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

> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization
> match: serialization::serialization_core
> match: serialization::StrictHashMap
> match: serialization::Deserializer
> match: serialization::SafeDeserializer
> match: serialization::AttributeTypeError
> match: serialization::RestrictedSerializer
> match: serialization::custom_serialization
> match: serialization::SerializerCache
> match: serialization::DeserializerCache
> match: serialization::AsyncCache

Some conditions applies to the classes that can be annotated as `serialize`.
All attributes of the class must be serializable, runtime errors will be
raised when trying to serialize non-serializable attributes.

> match: serialization::Serializable
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization::DirectSerializable
> match: serialization::AttributeTypeError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::RestrictedJsonSerializer
> match: serialization::RestrictedSerializer

In the class `Person`, all attributes are typed with classes the standards library.
These common types are defined defined as serializable by this project.
The attributes could also be typed with user-defined `serialize`
classes or any other subclass of `Serializable`.

> match: serialization::Serializable
> match: serialization::AttributeTypeError
> match: serialization::DirectSerializable
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::AsyncCache
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::SafeDeserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::SerializerCache
> match: serialization::RestrictedSerializer
> match: serialization::inspect

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

> match: serialization
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::custom_serialization
> match: serialization::serialization_core

`serialize` can annotate class definitions, modules and attributes:

> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::serialization_core

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

> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::Serializable
> match: serialization::custom_serialization
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::serialization_core
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::serialization_core
> match: serialization::custom_serialization
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::Serializable
> match: serialization
> match: serialization::DirectSerializable
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization::custom_serialization
> match: serialization::SerializerCache
> match: serialization::serialization_core
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::RestrictedJsonSerializer
> match: serialization::RestrictedSerializer

## The `noserialize` annotation

> match: serialization
> match: serialization::E::semi_private
> match: serialization::serialization_core

The `noserialize` annotation mark an exception in a `serialize` module or class definition.

> match: serialization
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::serialization_core
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::custom_serialization

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

> match: serialization
> match: serialization::DeserializerCache
> match: serialization::serialization_core
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization
> match: serialization::serialization_core
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::custom_serialization
> match: serialization::Serializable
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::DirectSerializable
> match: serialization::custom_serialization
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::serialization_core
> match: serialization::SerializerCache
> match: serialization::Deserializer
> match: serialization::AsyncCache
> match: serialization::SafeDeserializer
> match: serialization::DeserializerCache
> match: serialization::DuplexCache
> match: serialization::A
> match: serialization::B
> match: serialization::StrictHashMap
> match: serialization::E
> match: serialization::RestrictedJsonSerializer
> match: serialization::safe
> match: serialization::RestrictedSerializer

## The `serialize_as` annotation

> match: serialization
> match: serialization::E::semi_private
> match: serialization::serialization_core

By default, an attribute is identified in the serialization format by its Nit name.
The `serialize_as` attribute changes this behavior and sets the name of an attribute in the serialization format.

> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::inspect::InspectSerializer
> match: serialization::serialization_core
> match: serialization::Serializer
> match: serialization::DuplexCache
> match: serialization::AttributeTypeError
> match: serialization::RestrictedSerializer
> match: serialization::E
> match: serialization::engine_tools
> match: serialization::RestrictedJsonSerializer
> match: serialization::caching

This annotation can be useful to change the name of an attribute to what is expected by a remote service.
Or to use identifiers in the serialization format that are reserved keywords in Nit (like `class` and `type`).

> match: serialization::AttributeTypeError
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::Deserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::SafeDeserializer
> match: serialization::RestrictedSerializer
> match: serialization::AsyncCache
> match: serialization::caching
> match: serialization::inspect

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

> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::custom_serialization
> match: serialization
> match: serialization::serialization_core

The annotation `serialize` should be enough for most cases,
but in some cases you need more control over the serialization process.

> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::Serializer
> match: serialization::Serializable
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::E
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::RestrictedSerializer
> match: serialization::engine_tools
> match: serialization::caching
> match: serialization::inspect

For more control, create a subclass to `Serializable` and redefine `core_serialize_to`.
This method should use `Serializer::serialize_attribute` to serialize its components.
`serialize_attribute` works as a dictionary and organize attributes with a key.

> match: serialization::Serializable
> match: serialization::Serializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization::CachingSerializer
> match: serialization::RestrictedSerializer
> match: serialization::RestrictedJsonSerializer
> match: serialization
> match: serialization::serialization_core
> match: serialization::custom_serialization
> match: serialization::E
> match: serialization::AsyncCache
> match: serialization::AttributeTypeError
> match: serialization::inspect

You will also need to redefine `Deserializer::deserialize_class` to support this specific class.
The method should only act on known class names, and call super otherwise.

> match: serialization::Deserializer
> match: serialization::SafeDeserializer
> match: serialization::CachingDeserializer
> match: serialization::DeserializerCache
> match: serialization
> match: serialization::serialization_core
> match: serialization::RestrictedSerializer
> match: serialization::E
> match: serialization::RestrictedJsonSerializer
> match: serialization::custom_serialization

### Example: the User class

> match: serialization>examples>
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core

The following example cannot use the `serialize` annotations
because some of the arguments to the `User` class need special treatment:

> match: serialization>examples>
> match: serialization
> match: serialization::Serializable
> match: serialization::custom_serialization
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::serialization_core
> match: serialization::AsyncCache

* The `name` attribute is perfectly normal, it can be serialized and deserialized
  directly.

* The `password` attribute must be encrypted before being serialized,
  and unencrypted on deserialization.

* The `avatar` attributes is kept as ASCII art in memory.
  It could be serialized as such but it is cleaner to only
  serialize the path to its source on the file system.
  The data is reloaded on deserialization.

> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::AttributeTypeError
> match: serialization::custom_serialization
> match: serialization::Deserializer
> match: serialization::Serializable
> match: serialization::SafeDeserializer
> match: serialization::serialization_core
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::DeserializerCache
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::Deserializer
> match: serialization::Serializable
> match: serialization::DuplexCache
> match: serialization::SafeDeserializer
> match: serialization::serialization_core
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::safe
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization
> match: serialization::Serializable
> match: serialization::custom_serialization
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::serialization_core
> match: serialization::Deserializer
> match: serialization::DuplexCache
> match: serialization::SafeDeserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::AttributeTypeError
> match: serialization::safe

For this customization, the following code snippet implements
two serialization services: `User::core_serialize_to` and
`Deserializer::deserialize_class`.

> match: serialization::Deserializer
> match: serialization::CachingDeserializer
> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::DeserializerCache
> match: serialization::engine_tools
> match: serialization::RestrictedSerializer
> match: serialization::E
> match: serialization::caching

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
> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::Deserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::A
> match: serialization::E
> match: serialization::RestrictedSerializer
> match: serialization::caching
> match: serialization::inspect

## Serialization services

> match: serialization
> match: serialization::custom_serialization
> match: serialization::Serializer
> match: serialization::serialization_core
> match: serialization::Deserializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::caching

The `serialize` annotation and the `Serializable` class are used on
classes specific to the business domain.
To write (and read) instances of these classes to a persistent format
you must use implementations of `Serializer` and `Deserializer`.

> match: serialization::Serializer
> match: serialization::Deserializer
> match: serialization::Serializable
> match: serialization::inspect::InspectSerializer
> match: serialization::DirectSerializable
> match: serialization::SafeDeserializer
> match: serialization::SerializerCache
> match: serialization::CachingDeserializer
> match: serialization::DeserializerCache
> match: serialization::CachingSerializer
> match: serialization::RestrictedJsonSerializer
> match: serialization::RestrictedSerializer
> match: serialization
> match: serialization::serialization_core
> match: serialization::custom_serialization
> match: serialization::E
> match: serialization::A
> match: serialization::B
> match: serialization::AsyncCache
> match: serialization::StrictHashMap

The main implementations of these services are `JsonSerializer` and `JsonDeserializer`,
from the `json_serialization` module.

> match: serialization::Deserializer
> match: serialization::Serializer
> match: serialization
> match: serialization::serialization
> match: serialization::RestrictedJsonSerializer
> match: serialization::engine_tools
> match: serialization::serialization_core

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

> match: serialization

The serialization has some limitations:

> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::Serializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::engine_tools
> match: serialization::caching

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

> match: serialization::Deserializer
> match: serialization::Serializer
> match: serialization::RestrictedJsonSerializer
> match: serialization::CachingDeserializer
> match: serialization::CachingSerializer
> match: serialization
> match: serialization::DeserializerCache
> match: serialization::SerializerCache
> match: serialization::AsyncCache
> match: serialization::custom_serialization
> match: serialization::E
> match: serialization::RestrictedSerializer
> match: serialization::Serializable
> match: serialization::A
> match: serialization::serialization_core
> match: serialization::B
> match: serialization::DirectSerializable
> match: serialization::inspect::InspectSerializer
> match: serialization::SafeDeserializer
> match: serialization::AttributeTypeError
> match: serialization::StrictHashMap
> match: serialization::inspect
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::AsyncCache
> match: serialization::Serializer
> match: serialization::Serializable
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::RestrictedJsonSerializer
> match: serialization::engine_tools
> match: serialization::RestrictedSerializer
> match: serialization::caching
> match: serialization::AttributeTypeError
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::RestrictedJsonSerializer
> match: serialization::Serializer
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::RestrictedSerializer
> match: serialization::SafeDeserializer
> match: serialization::AsyncCache
> match: serialization::engine_tools
> match: serialization::caching

## Dealing with generic types

> match: serialization::AttributeTypeError
> match: serialization
> match: serialization::RestrictedJsonSerializer
> match: serialization::RestrictedSerializer
> match: serialization::SafeDeserializer
> match: serialization::AsyncCache
> match: serialization::serialization_core

One limitation of the serialization support in the compiler is with generic types.
For example, the `Array` class is generic and serializable.
However, the runtime types of Array instances are parameterized and are unknown to the compiler.
So the compiler won't support serializing instances of `Array[MySerializable]`.

> match: serialization::Serializable
> match: serialization>examples>
> match: serialization::AttributeTypeError
> match: serialization::DirectSerializable
> match: serialization
> match: serialization::custom_serialization
> match: serialization::serialization_core
> match: serialization::AsyncCache
> match: serialization::SafeDeserializer
> match: serialization::Serializer
> match: serialization::StrictHashMap
> match: serialization::inspect::InspectSerializer
> match: serialization::DuplexCache
> match: serialization::SerializerCache
> match: serialization::engine_tools
> match: serialization::caching

The tool `nitserial` solves this problem at the level of user modules.
It does so by parsing a Nit module, group or project to find all known
parameterized types of generic classes.
It will then generating a Nit module to handle deserialization of these types.

> match: serialization::AttributeTypeError
> match: serialization::engine_tools
> match: serialization>
> match: serialization
> match: serialization::SafeDeserializer
> match: serialization::RestrictedSerializer
> match: serialization::Deserializer
> match: serialization::DuplexCache
> match: serialization::serialization_core
> match: serialization::AsyncCache
> match: serialization::AttributeError
> match: serialization::AttributeMissingError
> match: serialization::DeserializerCache
> match: serialization::safe
> match: serialization::custom_serialization

Usage steps to serialize parameterized types:

> match: serialization::AttributeTypeError
> match: serialization
> match: serialization::AsyncCache
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::SerializerCache
> match: serialization::custom_serialization
> match: serialization::SafeDeserializer
> match: serialization::serialization_core

* Write your program, let's call it `my_prog.nit`,
  it must use some parameterized serializable types.
  Let's say that you use `Array[MySerializable]`.

* Run nitserial using `nitserial my_prog.nit` to
  generate the file `my_prog_serial.nit`.

* Compile your program by mixing in the generated module with:
  `nitc my_prog.nit -m my_prog_serial.nit`

> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::AttributeTypeError
> match: serialization
> match: serialization::serialization_core
> match: serialization::inspect::InspectSerializer
> match: serialization::SafeDeserializer
> match: serialization::RestrictedSerializer
> match: serialization::AsyncCache
> match: serialization
> match: serialization::RestrictedSerializer
> match: serialization::serialization_core
> match: serialization
> match: serialization::RestrictedSerializer
> match: serialization::serialization_core

This was a simple example, in practical cases you may need
to use more than one generated file.
For example, on a client/server system, an instance can be created
server-side, serialized and the used client-side.
In this case, two files will be generated by nitserial,
one for the server and one for the client.
Both the files should be compiled with both the client and the server.

> match: serialization>examples>
> match: serialization
> match: serialization::AsyncCache
> match: serialization::Serializable
> match: serialization::DirectSerializable
> match: serialization::custom_serialization
> match: serialization::E
> match: serialization::SerializerCache
> match: serialization::serialization_core
> match: serialization::RestrictedSerializer
> match: serialization::StrictHashMap
> match: serialization::inspect

