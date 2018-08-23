# `serialization` - Abstract serialization services

* [The `serialize` annotation](#The-`serialize`-annotation)
* [Scope of the `serialize` annotation](#Scope-of-the-`serialize`-annotation)
* [The `noserialize` annotation](#The-`noserialize`-annotation)
* [The `serialize_as` annotation](#The-`serialize_as`-annotation)
* [Custom serializable classes](#Custom-serializable-classes)
* [Example: the User class](#Example:-the-User-class)
* [Serialization services](#Serialization-services)
* [Limitations and TODO](#Limitations-and-TODO)
* [Dealing with generic types](#Dealing-with-generic-types)
* [`serialization_core`](#`serialization_core`)
* [`DeserializerCache`](#`DeserializerCache`)
* [`SerializerCache`](#`SerializerCache`)
* [`Deserializer`](#`Deserializer`)
* [Authors](#Authors)

The serialization services are based on the `serialize` and the `noserialize` annotations,
the `Serializable` interface and the implementations of `Serializer` and `Deserializer`.

## The `serialize` annotation

![Diagram for `serialization`](uml-serialization.svg)

A class annotated with `serialize` identifies it as a subclass of Serializable and
triggers the generation of customized serialization and deserialization services.

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

Some conditions applies to the classes that can be annotated as `serialize`.
All attributes of the class must be serializable, runtime errors will be
raised when trying to serialize non-serializable attributes.

In the class `Person`, all attributes are typed with classes the standards library.
These common types are defined defined as serializable by this project.
The attributes could also be typed with user-defined `serialize`
classes or any other subclass of `Serializable`.

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

`serialize` can annotate class definitions, modules and attributes:

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

  Example from `serialization::custom_serialization`:

~~~
# Example of an ad hoc serializer that is tailored to transform business specific objects into customized representation.
#
# In the following, we expose 3 business classes, `E`, `A` and `B`, and a specific business serializer `RestrictedSerializer`.
# The principle is that the custom serialization logic in enclosed into the `RestrictedSerializer` and that the
# standard serializer is unchanged.
#
# The additional behaviors exposed are:
#
# * replace a full business object (see `E::id`):
#   instead of serializing an attribute, the custom serializer uses a different representation.
# * inject a phantom attribute (see `E::phantom`):
#   when serializing, the custom serializer injects new attributes.
# * hide a normally serialized attribute (see `E::semi_private`):
#   when serializing, the custom serializer hides some specific attributes.
#
# The advantage of the approach is that it is done programmatically so can be adapted to real complex use cases.
# Basically, this is half-way between the full automatic serialization and the full manual serialisation.
module custom_serialization is example

import serialization
import json::serialization_write

# The root class of the business objects.
# This factorizes most services and domain knowledge used by the `RestrictedSerializer`
#
# In real enterprise-level code, the various specific behaviors can be specified in more semantic classifiers.
abstract class E
	serialize

	# The semantic business identifier.
	#
	# With the `RestrictedSerializer`, references to `E` objects will be replaced with `id`-based information.
	# This avoid to duplicate or enlarge the information cross-call wise.
	#
	# A future API/REST call can then request the _missing_ object from its identifier.
	var id: String

	# A phantom attribute to be serialized by the custom `RestrictedSerializer`.
	#
	# This can be used to inject constant or computed information that make little sense to have as a genuine attribute in
	# the Nit model.
	fun phantom: String do return "So Much Fun"

	# An attribute not to be serialized by the custom `RestrictedSerializer`.
	# e.g. we want it on the DB but not in API/REST JSON messages
	#
	# Note that the annotation `noserialize` hides the attribute for all serializers.
	# To hide the attribute only in the `RestrictedSerializer`, it will have to actively ignore it.
	var semi_private = "secret"

	# Test method that serializes `self` and prints with the standard JsonSerializer
	fun ser_json
	do
		var w = new StringWriter
		var js = new JsonSerializer(w)
		js.plain_json = true
		js.serialize(self)
		print w
	end

	# Test method that serializes `self` and prints with the custom RestrictedJsonSerializer.
	fun ser_json2
	do
		var w = new StringWriter
		var js = new RestrictedJsonSerializer(w)
		js.plain_json = true
		js.serialize(self)
		print w
	end
end

# Extends Serializer and adds specific business behaviors when dealing with business objects.
#
# As with standard Nit, additional level of customization can be achieved by adding more double-dispatching :)
# We can thus choose to locate the specific behavior in the serializer, or the serializees.
class RestrictedSerializer
	super Serializer

	# This method is called to generate the attributes of a serialized representation
	redef fun serialize_core(value)
	do
		super

		if value isa E then
			# Inject additional special domain-specific information
			serialize_attribute("more-data", value.phantom)
		end
	end

	# This method is called when trying to serialize a specific attribute
	redef fun serialize_attribute(name, value)
	do
		var recv = current_object
		if recv isa E then
			# do not serialize `E::semi_private`
			if name == "semi_private" then return
		end

		if value isa E then
			# Do not serialize references to `E`.
			# Just use a domain-specific value that make sense in the business logic.
			serialize_attribute(name, "ID:" + value.id)
			return
		end

		super
	end
end

# Extends JsonSerializer and adds specific business behaviors when dealing with business objects.
class RestrictedJsonSerializer
	super JsonSerializer
	super RestrictedSerializer
end

# A business object, with an integer information
class A
	super E
	serialize

	# A business information
	var i: Int
end

# A business object associated with an `A`.
class B
	super E
	serialize

	# A business association
	var a: A
end

# The business data to serialize
var a = new A("a", 1)
var b = new B("b", a)

a.ser_json
a.ser_json2
b.ser_json
b.ser_json2
~~~

## The `noserialize` annotation

The `noserialize` annotation mark an exception in a `serialize` module or class definition.

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

## The `serialize_as` annotation

By default, an attribute is identified in the serialization format by its Nit name.
The `serialize_as` attribute changes this behavior and sets the name of an attribute in the serialization format.

This annotation can be useful to change the name of an attribute to what is expected by a remote service.
Or to use identifiers in the serialization format that are reserved keywords in Nit (like `class` and `type`).

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

The annotation `serialize` should be enough for most cases,
but in some cases you need more control over the serialization process.

For more control, create a subclass to `Serializable` and redefine `core_serialize_to`.
This method should use `Serializer::serialize_attribute` to serialize its components.
`serialize_attribute` works as a dictionary and organize attributes with a key.

You will also need to redefine `Deserializer::deserialize_class` to support this specific class.
The method should only act on known class names, and call super otherwise.

### Example: the User class

The following example cannot use the `serialize` annotations
because some of the arguments to the `User` class need special treatment:

* The `name` attribute is perfectly normal, it can be serialized and deserialized
  directly.

* The `password` attribute must be encrypted before being serialized,
  and unencrypted on deserialization.

* The `avatar` attributes is kept as ASCII art in memory.
  It could be serialized as such but it is cleaner to only
  serialize the path to its source on the file system.
  The data is reloaded on deserialization.

For this customization, the following code snippet implements
two serialization services: `User::core_serialize_to` and
`Deserializer::deserialize_class`.

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

## Serialization services

The `serialize` annotation and the `Serializable` class are used on
classes specific to the business domain.
To write (and read) instances of these classes to a persistent format
you must use implementations of `Serializer` and `Deserializer`.

The main implementations of these services are `JsonSerializer` and `JsonDeserializer`,
from the `json_serialization` module.

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

The serialization has some limitations:

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

## Dealing with generic types

One limitation of the serialization support in the compiler is with generic types.
For example, the `Array` class is generic and serializable.
However, the runtime types of Array instances are parameterized and are unknown to the compiler.
So the compiler won't support serializing instances of `Array[MySerializable]`.

The tool `nitserial` solves this problem at the level of user modules.
It does so by parsing a Nit module, group or project to find all known
parameterized types of generic classes.
It will then generating a Nit module to handle deserialization of these types.

Usage steps to serialize parameterized types:

* Write your program, let's call it `my_prog.nit`,
  it must use some parameterized serializable types.
  Let's say that you use `Array[MySerializable]`.

* Run nitserial using `nitserial my_prog.nit` to
  generate the file `my_prog_serial.nit`.

* Compile your program by mixing in the generated module with:
  `nitc my_prog.nit -m my_prog_serial.nit`

This was a simple example, in practical cases you may need
to use more than one generated file.
For example, on a client/server system, an instance can be created
server-side, serialized and the used client-side.
In this case, two files will be generated by nitserial,
one for the server and one for the client.
Both the files should be compiled with both the client and the server.

## `serialization_core`

> This module declares the `serialize` annotation to mark Nit classes as serializable.
> For an introduction to this service, refer to the documentation of the `serialization` group.
> This documentation provides more technical information on interesting entitie of this module.

Interesting entities for end users of serializable classes:

* Serialize an instance subclass of `Serializable` with either
  `Serializer::serializable` and `Serializable::serialize`.
* Deserialize an object using `Deserializer::deserialize`.
  The object type must the be checked with an `assert` or otherwise.

Interesting entities to create custom serializable classes:

* Subclass `Serializable` to declare a class as serializable and to customize
  the serialization and deserialization behavior.
* Redefine `Serializable::core_serialize_to` to customize the serialization
  of the receiver class.
* Redefine `Deserializer::deserialize_class` to customize the deserialization
  of a specific class by name.

Interesting entities for serialization format:

* Subclass `Serializer` and `Deserializer` with custom serices.
* In `Serializer`, `serialize` and `serialize_reference` must be redefined.
* In `Deserializer`; `deserialize`, `deserialize_attribute and`notify_of_creation` must be redefined.

## `DeserializerCache`

> Used by `Deserializer` to find already deserialized objects by their reference.

## `SerializerCache`

> Used by `Serializer` to avoid duplicating objects, by serializing them once,
> then using a reference.

## `Deserializer`

> The main service is `deserialize`.

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
