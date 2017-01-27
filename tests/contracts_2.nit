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

class Student
	var is_registered: Bool = false

	fun register
	is
		pre(assert not is_registered)
		post(assert is_registered)
	do
		is_registered = true
	end
end

class BrokenStudent
	super Student

	redef fun register do end
end

var s1 = new Student
s1.register
#alt1#s1.register # FAIL pre

var s2 = new BrokenStudent
#alt2#s2.register # FAIL post
s2.is_registered = true
#alt3#s2.register # FAIL pre
