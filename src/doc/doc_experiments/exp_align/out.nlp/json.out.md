# read and write JSON formatted text

> match: json::JsonSequenceRead
> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JSONStringParser
> match: json::JsonValue
> match: json::JsonParseError
> match: json::JsonObject
> match: json::serialization_read
> match: json::serialization_write
> match: json::dynamic
> match: json::static

These services can be useful to communicate with a remote server or client,
save data locally or even debug and understand the structure of a Nit object.
There is a single API to write JSON, and three API to read depending on the use case.

> match: json
> match: json::JsonSerializer
> match: json::JsonSequenceRead
> match: json::JsonDeserializer
> match: json::JsonValue
> match: json::error
> match: json::JsonStore
> match: json::JSONStringParser
> match: json::store
> match: json::JsonObject
> match: json::serialization_read
> match: json::JsonMapRead
> match: json::serialization_write
> match: json::dynamic
> match: json::static

## Write JSON

> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JSONStringParser
> match: json::JsonObject
> match: json::JsonValue
> match: json::serialization_write
> match: json::dynamic
> match: json::serialization_read
> match: json::static

Writing Nit objects to JSON format can be useful to communicate with a remote service,
save data locally or even debug and understand the structure of an object.
There is two related services to write JSON object, the method
`serialize_to_json` and the object `JsonSerializer`.
The method `serialize_to_json` is actually a shortcut to `JsonSerializer`, both
share the same features.

> match: json::JsonSerializer
> match: json
> match: json::JsonDeserializer
> match: json::JsonValue
> match: json::store
> match: json::JsonMapRead
> match: json::JSONStringParser
> match: json::JsonObject
> match: json::JsonStore
> match: json::JsonParseError
> match: json::serialization_write
> match: json::dynamic
> match: json::static
> match: json::serialization_read

### Write plain JSON

> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JsonValue
> match: json::JsonArray
> match: json::store
> match: json::JsonSequenceRead
> match: json::JsonParseError
> match: json::JsonMapRead
> match: json::JsonStore
> match: json::error
> match: json::JSONStringParser
> match: json::serialization_write

Passing the argument `plain=true` to `serialize_to_json` generates plain and clean JSON.
This format is non-Nit program, it cannot be fully deserialized back to Nit objects.
The argument `pretty=true` generates JSON for humans, with more spaces and line breaks.

> match: json
> match: json::JsonSerializer
> match: json::JsonDeserializer
> match: json::JsonValue
> match: json::JsonParseError
> match: json::JSONStringParser
> match: json::JsonMapRead
> match: json::store
> match: json::JsonArray
> match: json::JsonObject
> match: json::JsonSequenceRead
> match: json::JsonStore
> match: json::error
> match: json::static
> match: json::serialization_write
> match: json::dynamic
> match: json::serialization_read

The Nit objects to write must subclass `Serializable` and implement its services.
Most classes from the `core` library are already supported, including collections, numeric values, etc.
For your local objects, you can annotate them with `serialize` to automate subclassing
`Serializable` and the implementation of its services.

> match: json
> match: json::JsonValue
> match: json::JsonSerializer
> match: json::JsonMapRead
> match: json::store
> match: json::serialization_write
> match: json::dynamic
> match: json::static

#### Example

> match: json::JsonValue
> match: json
> match: json::store

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

> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JsonValue
> match: json::JsonArray
> match: json::store
> match: json::JsonSequenceRead
> match: json::JsonParseError
> match: json::JsonMapRead
> match: json::JsonStore
> match: json::error
> match: json::JSONStringParser
> match: json::serialization_write

By default, `serialize_to_json` and `JsonSerializer` include metadate in the generated JSON.
This metadata is used by `JsonDeserializer` when reading the JSON code to recreate
the Nit object with the exact original type.
The metadata allows to avoid repeating an object and its resolves cycles in the serialized objects.

> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JsonSequenceRead
> match: json::JsonValue
> match: json::JsonMapRead
> match: json::JSONStringParser
> match: json::store
> match: json::JsonArray
> match: json::JsonObject
> match: json::JsonParseError
> match: json::JsonStore
> match: json::serialization_read
> match: json::error
> match: json::static
> match: json::serialization_write
> match: json::dynamic

For more information on Nit serialization, see: ../serialization/README.md

> match: json
> match: json::JsonSerializer
> match: json::serialization_read
> match: json::serialization_write
> match: json::JsonValue
> match: json::static

## Read JSON

> match: json::JsonMapRead
> match: json::JsonSequenceRead
> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JSONStringParser
> match: json::JsonObject
> match: json::JsonValue
> match: json::serialization_read
> match: json::dynamic
> match: json::static
> match: json::serialization_write

There are a total of 3 API to read JSON:

> match: json::JsonSequenceRead
> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JSONStringParser
> match: json::JsonValue
> match: json::JsonObject
> match: json::error
> match: json::serialization_read
> match: json::dynamic
> match: json::static
> match: json::serialization_write

* `JsonDeserializer` reads JSON to recreate complex Nit objects (discussed here),
* the module `json::dynamic` provides an easy API to explore JSON objects,
* the module `json::static` offers a low-level service to parse JSON and create basic Nit objects.

> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json::JsonSequenceRead
> match: json
> match: json::JSONStringParser
> match: json::JsonValue
> match: json::JsonObject
> match: json::serialization_read
> match: json::JsonMapRead
> match: json::store
> match: json::dynamic
> match: json::static
> match: json::serialization_write
> match: json::json
> match: json::JsonDeserializer
> match: json::JsonSerializer
> match: json
> match: json::JsonValue
> match: json::dynamic
> match: json::error
> match: json::store
> match: json::JsonMapRead
> match: json::JsonArray
> match: json::JsonSequenceRead
> match: json::JsonParseError
> match: json::JsonStore
> match: json::JSONStringParser
> match: json::static
> match: json::serialization_write
> match: json::json
> match: json::JsonSerializer
> match: json::JsonDeserializer
> match: json
> match: json::JsonValue
> match: json::JSONStringParser
> match: json::JsonMapRead
> match: json::store
> match: json::static
> match: json::JsonArray
> match: json::JsonObject
> match: json::JsonSequenceRead
> match: json::JsonParseError
> match: json::JsonStore
> match: json::error
> match: json::dynamic
> match: json::serialization_write
> match: json::serialization_read

The class `JsonDeserializer` reads JSON code to recreate objects.
It can use the metadata in the JSON code, to recreate precise Nit objects.
Otherwise, JSON objects are recreated to simple Nit types: `Map`, `Array`, etc.
Errors are reported to the attribute `JsonDeserializer::errors`.

> match: json::JsonDeserializer
> match: json
> match: json::error
> match: json::JsonSerializer
> match: json::JsonArray
> match: json::JsonSequenceRead
> match: json::JsonValue
> match: json::JSONStringParser
> match: json::JsonMapRead
> match: json::JsonParseError
> match: json::store
> match: json::JsonObject
> match: json::JsonKeyError
> match: json::serialization_read
> match: json::JsonStore
> match: json::static
> match: json::dynamic
> match: json::serialization_write

The type to recreate is either declared or inferred:

> match: json
> match: json::JsonValue
> match: json::store
> match: json::static

1. The JSON object defines a `__class` key with the name of the Nit class as value.
   This attribute is generated by the `JsonSerializer` with other metadata,
   it can also be specified by other external tools.
2. A refinement of `JsonDeserializer::class_name_heuristic` identifies the Nit class.
3. If all else fails, `JsonDeserializer` uses the static type of the attribute,
   or the type name passed to `deserialize`.

> match: json::JsonSerializer
> match: json::JsonDeserializer
> match: json
> match: json::JsonValue
> match: json::JSONStringParser
> match: json::JsonObject
> match: json::JsonKeyError
> match: json::store
> match: json::JsonMapRead
> match: json::dynamic
> match: json::static
> match: json::serialization_write
> match: json::serialization_read
> match: json::JsonDeserializer
> match: json
> match: json::JsonSerializer
> match: json::static
> match: json::serialization_write
> match: json::JsonDeserializer
> match: json
> match: json::static
> match: json::JsonValue
> match: json::store

The method `deserialize_json` is a shortcut to `JsonDeserializer` which prints
errors to the console. It is fit only for small scripts and other quick and dirty usage.

> match: json::JsonDeserializer
> match: json::error
> match: json
> match: json::JsonValue
> match: json::JsonKeyError
> match: json::JsonParseError
> match: json::serialization_read
> match: json::store

#### Example

> match: json::JsonValue
> match: json
> match: json::store

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

> match: json
> match: json::JsonValue
> match: json::dynamic

When reading JSON, some attributes expected by Nit classes may be missing.
The JSON object may come from an external API using optional attributes or
from a previous version of your program without the attributes.
When an attribute is not found, the deserialization engine acts in one of three ways:

> match: json
> match: json::JsonSerializer
> match: json::JsonSequenceRead
> match: json::JsonDeserializer
> match: json::JsonValue
> match: json::JSONStringParser
> match: json::JsonObject
> match: json::error
> match: json::serialization_read
> match: json::JsonMapRead
> match: json::dynamic
> match: json::store
> match: json::static
> match: json::serialization_write

1. If the attribute has a default value or if it is annotated by `lazy`,
   the engine leave the attribute to the default value. No error is raised.
2. If the static type of the attribute is nullable, the engine sets
   the attribute to `null`. No error is raised.
3. Otherwise, the engine raises an error and does not set the attribute.
   The caller must check for `errors` and must not read from the attribute.

> match: json::error
> match: json
> match: json::JsonValue
> match: json::JsonKeyError
> match: json::JsonParseError
> match: json::dynamic
> match: json::error
> match: json
> match: json::static
> match: json::JsonValue
> match: json::JsonKeyError
> match: json::JsonParseError
> match: json::store
> match: json::error
> match: json::JsonSequenceRead
> match: json
> match: json::JsonKeyError
> match: json::JsonParseError
> match: json::JsonValue
> match: json::serialization_read
> match: json::JSONStringParser
> match: json::store
> match: json::dynamic
> match: json::static

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

