# `mongodb` - MongoDB Nit Driver

* [Features](#Features)
* [`native_mongodb` - Native wrapper for the MongoDB C Driver](#`native_mongodb`---Native-wrapper-for-the-MongoDB-C-Driver)
* [`queries` - Mongo queries framework](#`queries`---Mongo-queries-framework)
* [Authors](#Authors)

This is actually a wrapper around the [MongoDB C Driver](http://api.mongodb.org/c/1.1.4/index.html).

Usage:

~~~
# Opens the connexion with the Mongo server.
var client = new MongoClient("mongodb://localhost:27017/")

# Select the database.
var db_suffix = "NIT_TESTING_ID".environ
var db_name = "test_{db_suffix}"
var db = client.database(db_name)

# Retrieve a collection.
var col = db.collection("test")

# Insert a document in the collection.
var doc = new JsonObject
doc["foo"] = 10
doc["bar"] = "bar"
doc["baz"] = new JsonArray
assert col.insert(doc)

# Retrieve a document from the collection.
var query = new JsonObject
query["foo"] = 10
var res = col.find(query)
assert res["bar"] == "bar"
~~~

## Features

![Diagram for `mongodb`](uml-mongodb.svg)

### `native_mongodb` - Native wrapper for the MongoDB C Driver

See [mongoc](http://api.mongodb.org/c/1.1.4/index.html).

### `queries` - Mongo queries framework

The `queries` framework is used to build Mongo queries as JsonObject with
a fluent interface.

Using the `queries` framework we can get from this:

~~~nitish
var exists = new JsonObject
exists["$exists"] = true

var query = new JsonObject
query["login"] = "Morriar"
query["email"] = exists

collection.find(query)
~~~

To this:

~~~nitish
collection.find((new MongoMatch).eq("login", "Morriar").exists("email", true))
~~~

The framework provides three classes used to map the MongoDB query API:

* `MongoMatch` the base query that can be used with most Mongo services
* `MongoPipeline` the array of queries that is expected by `MongoCollection::aggregate`
* `MongoGroup` the group query for a `MongoPipeline`

More on this features can be found in the official MongoDB documentation:
https://docs.mongodb.com/manual/reference/operator/

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
