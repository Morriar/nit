# `ai` - Simple library for basic artificial intelligence algorithms

* [Features](#Features)
* [`backtrack` - Basic framework for active backtrack solver](#`backtrack`---Basic-framework-for-active-backtrack-solver)
* [`search` - Basic framework for search problems and solver.](#`search`---Basic-framework-for-search-problems-and-solver.)
* [Authors](#Authors)

## Features

![Diagram for `ai`](uml-ai.svg)

### `backtrack` - Basic framework for active backtrack solver

This module provides a simple abstract class `BacktrackProblem[S,A]` to be specialized for a specific problem.

The concrete class `BacktrackSolver` is used to configure, query, and run a solver for a given problem.

For an example, see the `queens.nit` program in the `examples` subdirectory.

Example from `ai::queens`:

~~~
# Example of the famous eight-queens problem solved with the `ai::backtrack` module.
#
# The game is to places n queens on a n*n chessboard.
# The constraint is that two queens cannot be on the same row, column or diagonal.
#
# Eg. a solution to the 8-queens problem is
# ~~~raw
# +--------+
# |Q.......|
# |....Q...|
# |.......Q|
# |.....Q..|
# |..Q.....|
# |......Q.|
# |.Q......|
# |...Q....|
# +--------+
#
# This program takes an integer n as argument then display all solutions for the
# n-queens proglem (ie. on a n*n board).
module queens is example

import ai::backtrack

# The (eight-)queens problem, modeled naively as a `BacktrackProblem`.
#
# The state (`S`) is a board, modeled as an array of occupied rows.
# The integer in each row indicates the column occupied by the queen.
# Since there can be only one queen by row, a single `Int` is
# enough for each row, and the whole board `rows` is just an `Array[Int]`.
# Only the occupied rows are stored, thus the length of `rows` indicates
# the number of occupied rows, the remaining virtual rows are considered free.
#
# An action (`A`) is the column where to put a queen in the first free row,
# so modeled as an Int.
# Actions are applied until all rows are occupied by a queen.
class QueenProblem
	super BacktrackProblem[Array[Int], Int]

	# The initial state has no queens; so, no occupied rows.
	redef fun initial_state do return new Array[Int]

	# The board size.
	# Hint: use 8 to be traditional.
	var size: Int

	# What are the available columns for a queen in the first free row?
	# Just look at occupied rows above and cancel the possible columns one by one.
	redef fun actions(rows, node)
	do
		# No more than 8 rows
		if rows.length >= size then return null

		# Available columns. At first, all are available.
		var columns = new Array[Bool].filled_with(true, size)

		# Look at each occupied row and cancel columns
		var i = rows.length # delta for each diagonal
		for r in rows do
			columns[r] = false # no queen under `r`
			var d = r - i
			if d >= 0 then columns[d] = false # no queen on the first diagonal
			d = r + i
			if d < size then columns[d] = false # no queen on the second diagonal
			i -= 1
		end

		# Collect the remaining columns, those that were not cancelled.
		var res = new Array[Int]
		for c in [0..size[ do if columns[c] then res.add(c)

		return res
	end

	# The first free row become occupied with a queen placed where indicated.
	redef fun apply_action(rows, column)
	do
		rows.add column
	end

	# Just `free` the last occupied row.
	redef fun backtrack(rows, column)
	do
		rows.pop
	end

	# Are all rows are occupied?
	redef fun is_goal(rows) do return rows.length >= size

	# Draw a nice board
	fun print_state(rows: Array[Int])
	do
		printn "+"
		for i in [0..size[ do printn "-"
		print "+"
		for r in rows do
			printn "|"
			for i in [0..r[ do printn "."
			printn "Q"
			for i in [r+1..size[ do printn "."
			print  "|"
		end
		for r in [rows.length..size[ do
			printn "|"
			for i in [0..size[ do printn "."
			print  "|"
		end
		printn "+"
		for i in [0..size[ do printn "-"
		print "+"
	end
end

# just cont solutions (no not print them)
var quiet = false

# The board size
var size = 8

# Basic argument parsing
if args.length > 0 and args.first == "-q" then
	args.shift
	quiet = true
end
if args.length > 0 then
	size = args.first.to_i
	if size <= 0 then
		print "usage: queens [-q] [size]\n -q for quiet"
		exit 1
	end
end

print "The {size}-queens problem"
var pb = new QueenProblem(size)
var s = pb.solve
var sols = 0
while s.is_running do
	if s.run != null then
		if not quiet then pb.print_state(s.state)
		sols += 1
	end
end
print "Found {sols} solutions"
~~~

### `search` - Basic framework for search problems and solver.

The module provides a simple abstract class `SearchProblem[S,A]` to be specialized for a specific problem.

The concrete class `SearchSolver` is used to configure, query, and run a solver for a given problem.

For an example, see the `puzzle.nit` program in the `examples` subdirectory.

Example from `ai::puzzle`:

~~~
# The N-puzzle problem, modeled naively as a `SearchProblem`.
#
# A square grid, made of tiles represented with a letter, is scrambled.
# A missing tile, the hole, represented with a dot, is used to move them.
#
# The goal is to found a plan, made of the four basic movements up, down,
# left, and right, that move each letter to its correct position: the solved
# grid list letters alphabetically from left to right then top to bottom.
# The hole must be in the last position (bottom-right).
#
# The argument of the program is a initial position, the program then find
# the best plan to solve the puzzle.
#
# ## Example:
#
# The argument "abcd.fgeh" is the grid
#
# ~~~raw
# abc
# d.f
# geh
# ~~~
#
# The goal is:
#
# ~~~raw
# abc
# def
# gh.
# ~~~
#
# The shortest plan, in two steps, is to move *up* the tile under the hole (e),
# then to move *left* the tile after the hole (h).
module puzzle is example

import ai::search

# The state (`S`) is a square grid, modeled as a one-dimensional array of Tile.
# read from left to right then top to bottom.
#
# An action (`A`) is the relative position of the tile to swap with the hole.
# Therefore, `-1` for left, `1` for right, `-width` for up and `width` for down.
class PuzzleProblem
	super SearchProblem[ArrayCmp[Tile], Int]

	# The initial grid. use letters for tiles, and . for the hole.
	var initial_grid: String

	# The width of the grid.
	# Eg. 3 for a 8-puzzle grid
	var width: Int is noinit

	# Construct a state form `initial_grid`
	redef fun initial_state do
		var g = initial_grid
		var len = g.length
		var width = len.sqrt.to_i
		self.width = width
		if width * width != len then
			print "Error: {g} has {len} tiles. A square number, like {width*width} is needed"
			exit 1
		end
		var res = new ArrayCmp[Tile]
		for i in [0..g.length[ do
			var c = g.chars[i]
			if c == ' ' or c == '.' then
				var hole = new Tile('.', -1)
				self.hole = hole
				res.add hole
			else if c >= '1' and c <= '9' then
				var t = new Tile(c, '1'.distance(c))
				res.add t
			else if c >= 'a' and c <= 'z' then
				var t = new Tile(c, 'a'.distance(c))
				res.add t
			else if c >= 'A' and c <= 'Z' then
				var t = new Tile(c, 'A'.distance(c))
				res.add t
			else
				print "Error: illegal tile {c} in {g}"
				exit 1
			end
		end
		return res
	end

	# Get the four available movements, or 3 on a edge, or 2 in a corner.
	redef fun actions(state)
	do
		var h = get_hole(state)
		var x = h % width
		var y = h / width
		var res = new Array[Int]
		if x >= 1 then res.add(-1)
		if x < width-1 then res.add(1)
		if y >= 1 then res.add(-width)
		if y < width-1 then res.add(width)
		return res
	end

	# Return the state where the tile at hole+action has moved
	redef fun apply_action(state, action)
	do
		# Copy the state
		var res = new ArrayCmp[Tile].with_capacity(state.length)
		res.add_all(state)

		# Get the hole and the tile next to it
		var h = get_hole(res)
		var t = h + action

		# Move (by swapping the tile and the hole)
		res[h] = res[t]
		res[t] = hole

		return res
	end

	# The special empty tile for fast retrieval.
	var hole: Tile is noinit

	# What is the position of the hole?
	fun get_hole(state: Array[Tile]): Int
	do
		return state.index_of(hole)
	end

	# Each tile is at its correct position
	redef fun is_goal(state)
	do
		for i in [0..state.length[ do
			var t = state[i]
			if t != hole and t.goal_idx != i then return false
		end
		return true
	end

	# The sum of the Manhattan distances of each tile to its goal
	# Not the best heuristic but the simplest to implement among the good ones.
	redef fun heuristic(state)
	do
		var p = 0
		var i = -1
		for t in state do
			i += 1

			# The hole does not count
			if t == hole then continue

			var dx = (i % width - t.goal_idx % width).abs
			var dy = (i / width - t.goal_idx / width).abs

			# Add Manhattan distance
			p += dx + dy
		end
		return p.to_f
	end

	# Print the grid
	fun print_state(state: Array[Tile])
	do
		for i in [0..state.length[ do
			var t = state[i]
			if t == hole then
				printn "."
			else
				printn t.symbol
			end
			if (i+1) % width == 0 then print ""
		end
	end

	# Print the plan with words.
	fun print_plan(plan: Sequence[Int])
	do
		var s = new Array[String]
		for i in plan do
			if i == -1 then
				s.add "right(>)"
			else if i == 1 then
				s.add "left(<)"
			else if i == -width then
				s.add "down(v)"
			else if i == width then
				s.add "up(^)"
			else
				abort
			end
		end
		print "Solution in {plan.length} moves: {s.join(" ")}"
	end

	redef fun make_memory do
		var res = super
		res.add new RBTreeMap[ArrayCmp[Tile], SearchNode[ArrayCmp[Tile], Int]]
		res.add new BinTreeMap[ArrayCmp[Tile], SearchNode[ArrayCmp[Tile], Int]]
		return res
	end
end

# A movable tile
# A simple class to encapsulate the symbol and the goal position.
class Tile
	super Comparable
	redef type OTHER: Tile is fixed

	# The symbol written on the tile
	var symbol: Char

	# The expected position in the grid
	var goal_idx: Int

	redef fun to_s do return symbol.to_s
	redef fun ==(o) do return o isa Tile and goal_idx == o.goal_idx
	redef fun <(o) do return goal_idx < o.goal_idx
	redef fun <=>(o) do return goal_idx <=> o.goal_idx
end

var configs = false

if not args.is_empty then
	if args.first == "--configs" then
		configs = true
		args.shift
	end
end

if args.is_empty then
	print """
Usage: puzzle [--configs] initial...

--configs: search and time solutions with various configurations of solvers.
initial:   an initial configuration (letters for the tiles, and dot for the hole). eg:

 8-puzzle:

 goal (0):    abcdefgh.
 easy (4):    abce.fdgh
 medium (10): eabf.cdgh
 hard (20):   feacbh.dg
 harder (31): hfgbedc.a

 15-puzzle:
 goal (0):    abcdefghijklmno.
 easy (30):   bacdefghijlkmno.
 medium (40): fg.jacoheldnibmk
 hard (55):   kleg.mondcafjhbi
 harder (61): lomgkcend.afjhbi

 24-puzzle:
 goal (0):    abcdefghijklmnopqrstuvwx.
 easy (55):   giabcjekmdhrtflqsownpuv.x
 medium (75): giabcjekmdrtwulhs.vnqofpx
 hard (79):   giabcjekmdrtw.uhsvnlqofpx
 harder (80): giabcjekmdrt.wuhsvnlqofpx
"""
	exit 0
end


for arg in args do
	var pb = new PuzzleProblem(arg)
	print "Initial: {arg}"
	pb.print_state(pb.initial_state)

	if configs then
		pb.run_configs(1000000)
		continue
	end

	var s = pb.astar
	s.memorize = true
	var r = s.run
	if r == null then
		print "No solution."
		break
	end

	print "Solved, after looking at {r.steps} positions"
	pb.print_plan(r.plan)
end
~~~

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
