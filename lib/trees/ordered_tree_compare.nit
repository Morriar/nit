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
module ordered_tree_compare

import ordered_tree_base

redef class OrderedTree

	# Initialize this tree from a string representation
	#
	# Mainly used for testing purpose.
	#
	# Format:
	# * root must be on the first column
	# * nodes are indented with a space character defining their depth in tree
	# * empty lines are skip
	#
	# Usage:
	# ~~~
	# var str = """
	# root
	#  a
	#   b
	#    c
	#   d
	#    e
	#     f"""
	#
	# var tree = new OrderedTree[String].from_string(str)
	# assert tree.to_formatted_string == str
	# ~~~
	#
	# TODO accept more format (like with indents)
	#
	# FIXME This is unsafe:
	# * returned nodes are of the type TreeNode[Int, String]
	# * self is typed by Tree[K, E]
	#
	# TODO Should we declare this as a top_level function?
	init from_string(str: String) do
		var lines = str.split("\n")
		if lines.is_empty then return
		var root = lines.first.trim
		add(null, root)
		var parents = new List[E]
		parents.add root
		for i in [1..lines.length[ do
			var line = lines[i]
			if line.is_empty then continue
			var node = line.trim
			var space = line.space_before
			if space > depth(parents.last) then
				add(parents.last, node)
				parents.add node
			else
				while space <= depth(parents.last) do
					parents.pop
				end
				add(parents.last, node)
				parents.add node
			end
		end
	end

	# Build this tree from a source file formatted as expected by `from_string`
	init from_file(file: String) do
		assert file.file_exists
		var r = new FileReader.open(file)
		from_string(r.read_all)
		r.close
	end

	# Output `self` in a `from_string` compatible format.
	#
	# Mainly used for debug and tests.
	#
	# Usage:
	# ~~~
	# var tree = new OrderedTree[String]
	# tree.add(null, "a")
	# tree.add("a", "b")
	# tree.add("b", "c")
	# tree.add("c", "d")
	# tree.add("b", "e")
	# tree.add("e", "f")
	# tree.add("f", "g")
	#
	# var t_str = """
	# a
	#  b
	#   c
	#    d
	#   e
	#    f
	#     g"""
	#
	# assert tree.to_formatted_string == t_str
	# ~~~
	fun to_formatted_string: String do
		var buffer = new Buffer
		for root in roots do
			to_formatted_node(buffer, root)
		end
		return buffer.write_to_string.trim
	end

	# Write `e` formatted representation into `buffer`.
	private fun to_formatted_node(buffer: Buffer, e: E) do
		buffer.append "{" " * depth(e)}{e}\n"
		if not sub.has_key(e) then return
		for child in sub[e] do
			to_formatted_node(buffer, child)
		end
	end

	# Depth in tree of `e`
	#
	# Computes the length of the path from `e` to one of the `roots`.
	#
	# Usage:
	# ~~~
	# var tree = new OrderedTree[String]
	# tree.add(null, "a")
	# tree.add("a", "b")
	# tree.add("b", "c")
	# tree.add("c", "d")
	# assert tree.depth("a") == 0
	# assert tree.depth("b") == 1
	# assert tree.depth("c") == 2
	# assert tree.depth("d") == 3
	# ~~~
	fun depth(e: E): Int do
		var p = parent(e)
		if p == null then return 0
		return depth(p) + 1
	end

	# Left-most descendant of `e`
	#
	# Usage:
	# ~~~
	# var tree = new OrderedTree[String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.lmd("a") == "d"
	# assert tree.lmd("d") == "d"
	# assert tree.lmd("c") == "g"
	# assert tree.lmd("i") == "i"
	# ~~~
	fun lmd(e: E): E do
		if not sub.has_key(e) then return e
		return lmd(sub[e].first)
	end

	# Keyroot of `e`
	#
	# Example:
	# ~~~
	# var tree = new OrderedTree[String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.keyroot("a") == "a"
	# assert tree.keyroot("b") == "a"
	# assert tree.keyroot("d") == "a"
	# assert tree.keyroot("c") == "c"
	# assert tree.keyroot("e") == "c"
	# assert tree.keyroot("g") == "c"
	# assert tree.keyroot("f") == "f"
	# assert tree.keyroot("h") == "f"
	# assert tree.keyroot("i") == "i"
	# ~~~
	fun keyroot(e: E): E do
		var p = parent(e)
		if p == null then return e
		if sub.has_key(p) and sub[p].first == e then return keyroot(p)
		return e
	end

	# Keyroots for each nodes
	fun keyroots: Map[E, E] do
		var res = new HashMap[E, E]
		for node in self do res[node] = keyroot(node)
		return res
	end

	# Pre-order sequence
	#
	# Return a list of nodes contained in `self` following a pre-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Pre-order.
	#
	# Example:
	# ~~~
	# var tree = new OrderedTree[String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.preorder.to_s == "[a,b,d,c,e,g,f,h,i]"
	# ~~~
	fun preorder: Array[E] do
		var nodes = new Array[E]
		for root in roots do
			var todos = new Array[E]
			todos.add root
			while not todos.is_empty do
				var node = todos.pop
				nodes.add node
				if sub.has_key(node) then
					todos.add_all sub[node].reversed
				end
			end
		end
		return nodes
	end

	# Post-order sequence
	#
	# Return a list of nodes contained in `self` following a post-order sequence.
	#
	# See https://en.wikipedia.org/wiki/Tree_traversal#Post-order.
	#
	# Example:
	# ~~~
	# var tree = new OrderedTree[String].from_string("""
	# a
	#  b
	#   d
	#  c
	#   e
	#    g
	#   f
	#    h
	#    i""")
	# assert tree.postorder.to_s == "[d,b,g,e,h,i,f,c,a]"
	# tree = new OrderedTree[String].from_string("""
	# 6
	#  5
	#   2
	#    1
	#   3
	#   4""")
	# assert tree.postorder.to_s == "[1,2,3,4,5,6]"
	# ~~~
	fun postorder: Array[E] do
		var nodes = new Array[E]
		for root in roots do
			postorder_node(nodes, root)
		end
		return nodes
	end

	# Recursive post-order on `node` children.
	private fun postorder_node(nodes: Array[E], node: E) do
		if sub.has_key(node) then
			for child in sub[node] do
				postorder_node(nodes, child)
			end
		end
		nodes.add node
	end

	# Compute the Tree Edition Distance between `self` and `o`.
	#
	# Tree distance is computed based on the minimum sequence of edit operation
	# to go from a tree to another.
	# Edit operations are insert, remove and update.
	# Each operation is associated to cost that can be modified with `insert_cost`,
	# `remove_cost` and `update_cost`.
	#
	# Two trees are considered similar if their edit distance if equals to 0.
	# The greater the distance is, greater are the differences between the trees.
	#
	# Examples:
	# ~~~
	# var tree1 = new OrderedTree[String].from_string("""
	# a
	#  b
	#  c""")
	# var tree2 = new OrderedTree[String].from_string("""
	# a
	#  b
	#  c""")
	# print tree1.distance_from(tree2)
	# assert tree1.distance_from(tree2) == 0
	# ~~~
	# Since `tree1` and `tree2` are identical, their distance is 0.
	#
	# ~~~
	# tree1 = new OrderedTree[String].from_string("""
	# a
	#  b
	#  c""")
	# tree2 = new OrderedTree[String].from_string("""
	# a
	#  b
	#  e
	#   c""")
	# assert tree1.distance_from(tree2) == 1
	# ~~~
	# Here it takes 1 insertion of `e` to go from `tree1` to `tree2`.
	#
	# ~~~
	# tree1 = new OrderedTree[String].from_string("""
	# a
	#  b
	#   e
	#    f
	#   d
	#   c""")
	# tree2 = new OrderedTree[String].from_string("""
	# a
	#  e
	#   f
	#  c
	#   d
	#  b""")
	# assert tree1.distance_from(tree2) == 3
	# ~~~
	# `tree1` can be transformed in `tree2` with 3 operations:
	# 1. remove `b`
	# 2. update `c` into `b`
	# 3. insert `c` as parent of `d`
	#
	# ~~~raw
	#             Step 1:      Step 2:      Step 3:
	#    a           a            a            a
	#    |         / | \        / | \        / | \
	#    b        e  d  c      e  d  b      e  c  b
	#  / | \      |            |            |  |
	# e  d  c     f            f            f  d
	# |
	# f
	# ~~~
	#
	# See:
	# > *Kaizhong Zhang and Dennis Shasha.*
	# > Simple fast algorithms for the editing distance between trees and
	# > related problems.
	# > SIAM Journal of Computing, 18:1245–1262, 1989.
	fun distance_from(o: SELF): Int do
		# Prepare helper structures
		var ids2nodes = new HashMap[Int, E]
		var nodes2ids = new HashMap[E, Int]
		for e in self do
			var id = ids2nodes.length
			ids2nodes[id] = e
			nodes2ids[e] = id
		end
		var oids2nodes = new HashMap[Int, E]
		var onodes2ids = new HashMap[E, Int]
		for e in o do
			var id = oids2nodes.length
			oids2nodes[id] = e
			onodes2ids[e] = id
		end

		# Fill dynamic result map with zeros
		var tdist = new Array[Array[Int]]
		for i in [0..length[ do
			tdist.add new Array[Int].filled_with(0, o.length)
		end
		# print "tdist: {tdist}"

		# Compare both trees
		var cmp = new DefaultComparator
		var ks1 = new Array[Int]
		for k in keyroots.values do
			ks1.add nodes2ids[k]
		end
		cmp.sort(ks1)
		var ks2 = new Array[Int]
		for k in o.keyroots.values do
			ks2.add onodes2ids[k]
		end
		cmp.sort(ks2)
		for i in ks1.reversed do
			for j in ks2.reversed do
				treedist(i, j, tdist, o)
			end
		end

		# Return last computed result in map
		# print "tdist: {tdist}"
		return tdist[tdist.length -1][tdist[tdist.length -1].length - 1]
	end

		# Compute the ditance between two positions in two separate trees.
	#
	# Should not be called directly, use `distance_from` instead.
	private fun treedist(n1, n2: E, tdist: Array[Array[Int]], o: SELF) do
		# Nodes are accessed following the postorder
		var po1 = postorder
		var no1 = new HashMap[E, Int]
		for node in po1 do no1[node] = no1.length
		var po2 = o.postorder
		var no2 = new HashMap[E, Int]
		for node in po2 do no2[node] = no2.length
		# print "n1: {n1}"
		# print "n2: {n2}"

		# Comparison bounds (do not check similarity beyond these node)
		var b1 = no1[n1] - no1[lmd(n1)] + 2
		var b2 = no2[n2] - no2[lmd(n2)] + 2
		# print "b1: {b1}"
		# print "b2: {b2}"

		# Initialize forest comparison table
		var fd = new Array[Array[Int]]
		for k in [0..b1[ do fd.add new Array[Int].filled_with(0, b2)
		for i in [1..b1[ do fd[i][0] = fd[i - 1][0] + remove_cost
		for j in [1..b2[ do fd[0][j] = fd[0][j - 1] + remove_cost
		# print "fd: {fd}"

		var i = 1
		var j = 1
		# Compare branch to branch from left-most descendant to n1
		for k in [no1[lmd(n1)] .. (no1[n1])] do
			var kn = po1[k]
			j = 1
			for l in [no2[lmd(n2)] .. (no2[n2])] do
				var ln = po2[l]
				# print "k: {k}"
				# print "l: {l}"
				# print "i: {i}"
				# print "j: {j}"
				if lmd(kn) == lmd(n1) and lmd(ln) == lmd(n2) then
					# Both are trees, we need to compare them

					# print fd[i - 1][j] + remove_cost
					# print fd[i][j - 1] + insert_cost
					# print fd[i - 1][j - 1] + update_cost(kn, ln)

					# Get the minimum cost from previous computations
					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[i - 1][j - 1] + update_cost(kn, ln)
					)
					# print "fd[i][j]: {fd[i][j]}"
					tdist[k][l] = fd[i][j]
					# print "tdist: {tdist}"
				else
					# Single node
					var m = no1[lmd(kn)] - no1[lmd(n1)]
					var n = no2[lmd(ln)] - no2[lmd(n2)]
					# print "m: {m}"
					# print "n: {n}"

					# Get the minimum cost from previous computations
					fd[i][j] = min(
						fd[i - 1][j] + remove_cost,
						fd[i][j - 1] + insert_cost,
						fd[m][n] + tdist[k][l]
					)
					# print "fd[i][j]: {fd[i][j]}"
				end
				# print "fd: {fd}"
				j += 1
			end
			i += 1
		end
	end

	# Return the minimum of `vals`
	private fun min(vals: Int...): Int do
		assert not vals.is_empty
		var min = vals.first
		for val in vals do
			if val < min then min = val
		end
		return min
	end

	# Cost for removing a node from `self` when computing `distance_from`
	#
	# Default is 1
	var remove_cost = 1 is writable

	# Cost for inserting a node in `self` when computing `distance_from`
	#
	# Default is 1
	var insert_cost = 1 is writable

	# Cost for updating `n1` by `n2` when computing `distance_from`
	#
	# Return 1 if node have different values
	fun update_cost(n1, n2: E): Int do return if n1 == n2 then 0 else 1

	# Display `self` with dot.
	fun show_dot do
		var f = new ProcessWriter("dot", "-Txlib")
		f.write "digraph \{\n"
		for root in roots do
			recursive_dot(f, root)
		end
		f.write "\}\n"
		f.close
	end

	# Translate the tree in dot format recursively starting from `node`.
	#
	# See `ConcernsTree::show_dot`.
	private fun recursive_dot(f: ProcessWriter, e: E) do
		f.write "\"{e}\";\n"
		var p = parent(e)
		if p != null then f.write "\"{p}\" -> \"{e}\"[dir=back];\n"
		if not sub.has_key(e) then return
		for child in sub[e] do recursive_dot(f, child)
	end
end

print "compare"
var tree = new OrderedTree[String]
tree.add(null, "a")
tree.add("a", "b")
tree.add("b", "c")
tree.add("c", "d")
assert tree.depth("a") == 0
assert tree.depth("b") == 1
assert tree.depth("c") == 2
assert tree.depth("d") == 3
