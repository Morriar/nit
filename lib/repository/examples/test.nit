import serialization
import json::serialization
import mongodb

redef class Serializable
	fun internal_id: String do return "{object_id}-{get_time}"
end

class Site
	serialize

	var id: String = internal_id
	var name: String
	var url: String

	# var statuses = new Array[Status]

	redef fun to_s do return name
	redef fun ==(o) do return o isa SELF and id == o.id
	redef fun hash do return id.hash
end

# class Status
#	serialize
#
#	var id: nullable String = null is serialize_as "_id"
#	var site: Site
#	var date: Int
#	var status: Int
#
#	redef fun to_s do return "{site} - {date} - {status}"
#	redef fun ==(o) do return o isa SELF and id == o.id
#     redef fun hash do return id.hash
# end

interface Repository[E: Serializable]

	fun serialize(item: nullable E): nullable String is abstract
	fun deserialize(string: nullable String): nullable E is abstract

	fun find(id: String): nullable E is abstract
	fun find_all: Array[E] is abstract
	fun save(item: E): Bool is abstract
	fun remove(id: String): Bool is abstract
	fun clear: Bool is abstract
end

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

class MongoRepository[E: Serializable]
	super JsonRepository[E]

	var collection: MongoCollection

	redef fun find(id) do
		var q = new JsonObject
		q["id"] = id
		var res = collection.find(q)
		if res == null then return null
		return deserialize(res.to_json)
	end

	redef fun find_all do
		var res = new Array[E]
		for e in collection.find_all(new JsonObject) do
			res.add deserialize(e.to_json).as(E)
		end
		return res
	end

	redef fun save(item) do
		var json = serialize(item).as(String)
		var obj = json.parse_json.as(JsonObject)
		return collection.save(obj)
	end

	redef fun remove(id) do
		var q = new JsonObject
		q["id"] = id
		return collection.remove(q)
	end

	redef fun clear do return collection.drop
end

class SiteRepository
	super MongoRepository[Site]

	fun find_by_name(name: String): Array[Site] do
		var q = new JsonObject
		q["name"] = name
		var res = new Array[Site]
		for e in collection.find_all(q) do
			res.add deserialize(e.to_json).as(Site)
		end
		return res
	end
end

var siteA = new Site("A", "http://a.com/")
var siteAA = new Site("A", "http://aa.com/")
var siteB = new Site("B", "http://b.com/")

var client = new MongoClient("mongodb://localhost:27017/")
var db = client.database("test")
var col = db.collection("sites")

var repo = new SiteRepository(col)
repo.save(siteA)
repo.save(siteAA)
repo.save(siteB)

assert repo.find(siteA.id).name == "A"
assert repo.find(siteAA.id).name == "A"
assert repo.find(siteB.id).name == "B"
assert repo.find("null") == null

var all = repo.find_all
assert all.length == 3
assert all.join(" ") == "A A B"

repo.remove(siteA.id)
all = repo.find_all
assert all.length == 2

repo.clear
all = repo.find_all
assert all.length == 0
