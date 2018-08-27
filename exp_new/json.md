# `json` - read and write JSON formatted text

* [Features](#Features)
* [`dynamic` - Dynamic interface to read values from JSON strings](#`dynamic`---Dynamic-interface-to-read-values-from-JSON-strings)
* [`static` - Static interface to read Nit objects from JSON strings](#`static`---Static-interface-to-read-Nit-objects-from-JSON-strings)
* [`store` - Store and load json data.](#`store`---Store-and-load-json-data.)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `json`](uml-json.svg)

### `dynamic` - Dynamic interface to read values from JSON strings

Most services are in `JsonValue`, which is created by `Text::to_json_value`.

### `static` - Static interface to read Nit objects from JSON strings

`Text::parse_json` returns a simple Nit object from the JSON source.
This object can then be type checked as usual with `isa` and `as`.

### `store` - Store and load json data.

This simple system can be used to store and retrieve json data.

## Usage

### Initialization

JsonStore use the file system to store and load json files.

For initialization you need to give the directory used in the
file system to save objects.

~~~
var store = new JsonStore("store_dir")
~~~

### Documents

With JsonStore you manage *documents*.
Documents are simple json files that can be stored and loaded from json store.

JsonStore can store documents of type JsonObject and JsonArray.

~~~
var red = new JsonObject
red["name"] = "red"
red["code"] = "FF0000"
~~~

Data are stored under a *key*.
This is the path to the document from `JsonStore::store_dir`
without the `.json` extension.

Examples:

* key `document` will store data under `store_dir / "document.json"`
* key `collection/data` will store data under `store_dir / "collection/data.json"`

~~~
var key = "colors/red"
~~~

Store the object.

~~~
store.store_object(key, red)
~~~

Load the object.

~~~
assert store.has_key(key)
var obj = store.load_object(key)
assert obj["name"] == obj["name"]
~~~

### Collections

A collection is a set of documents stored under the same path.

~~~
var green = new JsonObject
green["name"] = "green"
green["code"] = "00FF00"
store.store_object("colors/green", green)

assert store.has_collection("colors")

var col = store.list_collection("colors")
assert col.length == 2
assert col.has("green")
assert col.has("red")
~~~

### Clearing store

You can delete all the data contained in the `JsonStore::store_dir` with `clear`.

~~~
store.clear
~~~

## Other features

* `error` - Intro `JsonParseError` which is exposed by all JSON reading APIs
* `serialization_read` - Services to read JSON: `deserialize_json` and `JsonDeserializer`
* `serialization_write` - Services to write Nit objects to JSON strings: `serialize_to_json` and `JsonSerializer`

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
