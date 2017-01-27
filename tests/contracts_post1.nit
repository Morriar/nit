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

class MyClass

	var test = false

	fun foo: Int
	is
		post(assert result > 0)
	do
		test = true
		return 10
	end
end

class MySub
	super MyClass

	redef fun foo
	is
		post(assert result > 10)
	do
		super
		return 100
	end
end

class MySub2
	super MySub

	redef fun foo
	is
		post(assert result > 100)
	do
		super
		return 1000
	end
end

class MyBuggyClass

	fun foo: Int
	is
		post(assert result > 0)
	do
		return -10
	end
end

class MyBuggySub
	super MyBuggyClass

	redef fun foo do
		return -100
	end
end

class MyBuggySub2
	super MyBuggyClass

	redef fun foo
	is
		post(assert result < 100)
	do
		return -100
	end
end

class MyBuggySub3
	super MyBuggyClass

	redef fun foo
	is
		post(assert result > 1000)
	do
		return 100
	end
end

var c = new MyClass
var s1 = new MySub
var s2 = new MySub2
c.foo # OK
s1.foo # OK
s2.foo # OK

var bc = new MyBuggyClass
var bs1 = new MyBuggySub
var bs2 = new MyBuggySub2
var bs3 = new MyBuggySub3

#alt1# bc.foo # POST KO x < 0
#alt2# bs1.foo # POST KO x < 0
#alt3# bs2.foo # POST KO x < 0
#alt4# bs3.foo # POST KO x > 1000
