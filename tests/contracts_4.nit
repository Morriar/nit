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

# Examples from the course INF3143 - Spécification et modélisation formelles de logiciel
# UQAM - Alexandre Terrasa

class MyInt
	var value: Int

	fun div(d: MyInt): MyInt
	is
		pre(assert d.value != 0)
		post(assert result.value == value / d.value)
	do
		return new MyInt(value / d.value)
	end
end

class BuggyInt
	super MyInt

	redef fun div(d) do return new MyInt(0)
end

var i0 = new MyInt(0)
var i2 = new MyInt(2)
var i10 = new MyInt(10)

i10.div(i2) # OK
#alt1# i10.div(i0) # KO pre

var ib = new BuggyInt(10)
#alt2# ib.div(i2) # KO post
