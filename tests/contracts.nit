# This file is part of NIT ( http://www.nitlanguage.org ).
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

class MyMap[K, V]
	inv(size >= 0)

	private var internal = new HashMap[K, V]

	init
	is
		post(assert size == 0)
	do
		internal = new HashMap[K, V]
	end

	fun size: Int do return internal.length

	fun is_empty: Bool
	is
		post(assert result == (size == 0))
	do
		return size == 0
	end

	fun [](k: K): V
	is
		pre(assert has_key(k))
	do
		return internal[k]
	end

	fun []=(k: K, v: V)
	is
		pre(assert not has_key(k))
		post(assert has_key(k) and self[k] == v)
	do
		internal[k] = v
	end

	fun remove(k: K)
	is
		pre(assert has_key(k))
		post(assert not has_key(k))
	do
		internal.keys.remove(k)
	end

	fun has_key(k: K): Bool do return internal.has_key(k)
end

var map = new MyMap[String, Int]
map["Un"] = 1

assert map.has_key("Un")
assert not map.has_key("Trois")
assert map.size == 1
assert map["Un"] == 1

# Fail pre conditions
#alt1# print map["Deux"]
#alt2# map["Un"] = 2
#alt3# map.remove("Deux")

# Fail postconditions
