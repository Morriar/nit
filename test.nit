# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# OrderedTree comparison using the Tree Edit Distance algorithm.
#
# See:
# > *Kaizhong Zhang and Dennis Shasha.*
# > Simple fast algorithms for the editing distance between trees and
# > related problems.
# > SIAM Journal of Computing, 18:1245–1262, 1989.
module test

import test_base
import ordered_tree

redef class A
	redef type N: A

	# fun foo: Array[N] is abstract
end

class ValueNode
	super Comparable

	redef type N: ValueNode
	redef type OTHER: N
end
