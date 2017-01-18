# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

	fun foo(x: Int)
	is
		pre(assert x > 0)
	do
		if x <= 0 then print "FAIL"
	end
end

class Sub
	super MyClass

	redef fun foo(x: Int) do
		if x <= 0 then print "FAIL"
	end
end

class Sub2
	super MyClass

	redef fun foo(x: Int)
	is
		pre(assert x < 100)
	do
		if x <= 0 then print "FAIL"
		if x >= 100 then print "FAIL"
	end
end

var c = new MyClass
var s1 = new Sub
var s2 = new Sub2
c.foo(10) # OK
#alt1# c.foo(-10) # PRE KO x < 0
s1.foo(10) # OK
#alt2# s1.foo(-10) # PRE KO x < 0
s2.foo(10) # OK
#alt3# s2.foo(-10) # PRE KO x < 0
#alt4# s2.foo(10000) # PRE KO x > 100
