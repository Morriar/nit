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

import index
import realtime

class BenchIndex
	super Index

	redef type DOC: BenchDoc
end

class BenchDoc
	super Doc

	var id: Int

	init do
		self["int"] = id
		self["bool"] = id % 2 == 0
		self["string1"] = "string-{id}"
		self["string2"] = "string"
		self["strings"] = ["string", "string-{id}"]
	end
end

class Bench
	fun bench do
		print  "\tindexing\tquerying\teq-int\teq-str\teq-boo"
		# bench_bare(1000)
		# bench_bare(10000)
		bench_bare(100000)
	end

	fun bench_bare(docs: Int) do
		var timer = new Clock
		var index = new BenchIndex
		for i in [1..docs] do
			index.add new BenchDoc(i)
		end
		printn "\t{timer.lapse}s"
		timer = new Clock
		for i in [1..100] do
			assert index.find([new Eq("int", [1..docs].rand)]).length == 1
		end
		printn "\t\tbare{docs}\t{timer.lapse}s"
		timer = new Clock
		for i in [1..100] do
			assert index.find([new Eq("string1", "string-{[1..docs].rand}")]).length == 1
		end
		printn "\t{timer.lapse}s"
		timer = new Clock
		for i in [1..100] do
			assert index.find([new Eq("bool", [true, false].rand)]).length == docs / 2
		end
		print "\t{timer.lapse}s"
	end
end



(new Bench).bench

# class BenchQueries
#
	# var index: Index is noinit
	# var count = 10
#
	# fun init_index is before do
		# var index = new TestIndex
		# for i in [1..count] do
			# index.add new TestDoc(i)
		# end
		# self.index = index
	# end
#
	# fun test_empty_query is test do
		# var res = index.find(new Array[Op])
		# assert res.length ==  count
	# end
#
	# fun test_eq_string is test do
		# var res = index.find([new Eq("string1", "string-1")])
		# assert res.length == 1
	# end
#
	# fun test_eq_bool is test do
		# var res = index.find([new Eq("bool", true)])
		# assert res.length == 5
		# assert res.first.doc["bool"].as(Bool)
	# end
#
	# fun test_gt_int is test do
		# var res = index.find([new Gt("int", 7)])
		# assert res.length == 3
	# end
#
	# fun test_re is test do
		# var res = index.find([new Re("string1", "string.[1-5]$".to_re)])
		# assert res.length == 5
	# end
#
	# fun test_prefix is test do
		# var res = index.find([new Prefix("string1", "string-5")])
		# assert res.length == 1
	# end
#
	# fun test_in_strings is test do
		# var res = index.find([new In("string1", ["string-1", "string-2"])])
		# assert res.length == 2
	# end
#
	# fun test_in_ints is test do
		# var res = index.find([new In("int", [1, 2])])
		# assert res.length == 2
	# end
#
	# fun test_has_string is test do
		# var res = index.find([new Has("strings", "string-5")])
		# assert res.length == 1
	# end
#
	# fun test_has_any_strings is test do
		# var res = index.find([new HasAny("strings", ["string-2", "string-5"])])
		# assert res.length == 2
	# end
#
	# fun test_not_has_any_strings is test do
		# var res = index.find([new Not(new HasAny("strings", ["string-2", "string-5"]))])
		# assert res.length == 8
	# end
#
	# fun test_and_has_any_strings is test do
		# var res = index.find([
			# new And(
				# new Not(new HasAny("strings", ["string-2", "string-5"])),
				# new Eq("bool", true))])
		# assert res.length == 4
	# end
#
	# fun test_or_has_any_strings is test do
		# var res = index.find([
			# new Or(
				# new Not(new HasAny("strings", ["string-2", "string-5"])),
				# new Eq("string1", "string-2"))])
		# assert res.length == 9
	# end
# end
