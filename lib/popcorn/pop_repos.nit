# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Repository concept to tidy your data management.
module pop_repos

import serialization
import json::serialization
import mongodb

# A Repository is an object that can store serialized version of instances.
interface Repository[E: Serializable]

	# Kind of queries accepted
	type QUERY: RepositoryQuery

	# Find an instance by it's `id`
	fun find_by_id(id: String): nullable E is abstract

	# Find an instance based on `query`
	fun find(query: QUERY): nullable E is abstract

	# Find all instances based on `query`
	fun find_all(q: nullable QUERY): Array[E] is abstract

	# Save an `instance`
	fun save(instance: E): Bool is abstract

	# Remove the instance with `id`
	fun remove_by_id(id: String): Bool is abstract

	# Remove the instance based on `query`
	fun remove(query: nullable QUERY): Bool is abstract

	# Remove all instances
	fun clear: Bool is abstract

	# Serialize an `instance` to a String.
	fun serialize(instance: nullable E): nullable String is abstract

	# Deserialize a `string` to an instance.
	fun deserialize(string: nullable String): nullable E is abstract
end

# An abstract Query representation
interface RepositoryQuery end

# A Repository for JsonObjects
interface JsonRepository[E: Serializable]
	super Repository[E]

	redef fun serialize(item) do
		if item == null then return null
		return item.serialize_to_json
	end

	redef fun deserialize(string) do
		if string == null then return null
		var deserializer = new JsonDeserializer(string)
		return deserializer.deserialize.as(E)
	end
end

# A Repository that use MongoDB as backend
class MongoRepository[E: Serializable]
	super JsonRepository[E]

	redef type QUERY: JsonObject

	# MongoDB collection used to store objects
	var collection: MongoCollection

	redef fun find_by_id(id) do
		var query = new JsonObject
		query["_id"] = id
		return find(query)
	end

	redef fun find(query) do
		var res = collection.find(query)
		if res == null then return null
		return deserialize(res.to_json)
	end

	redef fun find_all(query) do
		var res = new Array[E]
		for e in collection.find_all(query or else new JsonObject) do
			res.add deserialize(e.to_json).as(E)
		end
		return res
	end

	redef fun save(item) do
		var json = serialize(item).as(String)
		var obj = json.parse_json.as(JsonObject)
		return collection.save(obj)
	end

	redef fun remove_by_id(id) do
		var query = new JsonObject
		query["_id"] = id
		return remove(query)
	end

	redef fun remove(query) do
		return collection.remove(query or else new JsonObject)
	end

	redef fun clear do return collection.drop
end

redef class JsonObject
	super RepositoryQuery
end
