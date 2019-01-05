# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class Index
	type DOC: Doc

	var docs = new Array[DOC].with_capacity(10000)

	fun add(doc: DOC) do
		docs.add doc
	end

	fun find(ops: Array[Op]): Results[DOC] do
		var res = new Results[DOC]
		for doc in docs do
			for op in ops do
				if not op.match(doc) then continue label doc
			end
			res.add new Result[DOC](doc)
		end label doc
		return res
	end
end

class Doc
	super HashMap[String, nullable Object]

	redef fun [](key) do
		if not has_key(key) then return null
		return super
	end

	# redef fun ==(other) do
		# return other isa SELF and other.object_id == object_id
	# end
end

class Results[DOC: Doc]
	super Array[Result[DOC]]

	init from(results: Array[Result[DOC]]) do
		add_all results
	end

	fun sort: Results[DOC] do
		return new Results[DOC]
	end

	fun filter: Results[DOC] do
		return new Results[DOC]
	end

	fun limit(count: Int): Results[DOC] do
		return new Results[DOC].from(sub(0, 2))
	end

	fun pretty_print do
		for result in self do
			print " * {result}"
		end
	end
end

class Result[DOC: Doc]
	var doc: Doc

	redef fun to_s do return doc.to_s
end

interface Op
	fun match(doc: Doc): Bool is abstract
end

class Not
	super Op

	var op: Op
	redef fun match(doc) do return not op.match(doc)
end

abstract class Binary
	super Op

	var op1: Op
	var op2: Op
end

class And
	super Binary

	redef fun match(doc) do return op1.match(doc) and op2.match(doc)
end

class Or
	super Binary

	redef fun match(doc) do return op1.match(doc) or op2.match(doc)
end

abstract class Key
	super Op

	var key: String
end

class Eq
	super Key

	var value: nullable Object
	redef fun match(doc) do return doc[key] == value
end

class Gt
	super Key

	var value: Comparable
	redef fun match(doc) do
		var value = doc[key]
		if not value isa Comparable then return false
		return value > self.value
	end
end

class Ge
	super Key

	var value: Comparable
	redef fun match(doc) do
		var value = doc[key]
		if not value isa Comparable then return false
		return value >= self.value
	end
end

class Lt
	super Key

	var value: Comparable
	redef fun match(doc) do
		var value = doc[key]
		if not value isa Comparable then return false
		return value < self.value
	end
end

class Le
	super Key

	var value: Comparable
	redef fun match(doc) do
		var value = doc[key]
		if not value isa Comparable then return false
		return value <= self.value
	end
end

class In
	super Key

	var values: Collection[nullable Object]
	redef fun match(doc) do return values.has(doc[key])
end

class Prefix
	super Key

	var prefix: String

	redef fun match(doc) do
		var value = doc[key]
		if not value isa String then return false
		return value.has_prefix(prefix)
	end
end

class Re
	super Key

	var re: Regex

	redef fun match(doc) do
		var value = doc[key]
		print value or else "NULL"
		if not value isa String then return false
		return value.has(re)
	end
end

class Has
	super Key

	var value: nullable Object

	redef fun match(doc) do
		var array = doc[key]
		if not array isa Collection[nullable Object] then return false
		return array.has(value)
	end
end

class HasAny
	super Key

	var values: Collection[nullable Object]

	redef fun match(doc) do
		var array = doc[key]
		if not array isa Collection[nullable Object] then return false
		for value in array do
			if values.has(value) then return true
		end
		return false
	end
end

# redef class String
	# fun to_vector: Vector do
		# var vector = new Vector
		# for word in split("[ .,!?\n\r\t]".to_re) do
			# if word.is_empty then continue
			# vector.inc(word)
			# var lower = word.to_lower
			# if word != lower then
				# vector.inc(lower)
			# end
		# end
		# return vector
	# end
# end


	# score = new Between(5.0, 12.5),

# TODO Order/Sort
	# keys
	# order
	# score
	# levenstein
	# lin

# TODO Partial match
	# name: core # exact
	# name*: core # prefix match
	# *name: core # suffix match
	# *name*: core # inffix match
	# +name: core # must match
	# -name: core # must not match
	# /name: core # re match
	# ~name: core # lemma match
	# name: !core # boost match?

# TODO Indexing/Caching
# db.unique_indexes("full_name")
# db.indexes("name")
# db.freeze

# class CacheKey
#	"key: value" => [docs]
# end

# Prefix tree

# TODO Where am i?
 # Index columns: key: value
 # Search by index, then normal
 # Must have vs tional
 # Search in subqueries (unfrozen mode)
