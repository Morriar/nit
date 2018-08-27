# `ai` - Simple library for basic artificial intelligence algorithms

* [`backtrack`](#`backtrack`)
* [`BacktrackNode`](#`BacktrackNode`)
* [`BacktrackProblem`](#`BacktrackProblem`)
* [`BacktrackSolver`](#`BacktrackSolver`)
* [`search`](#`search`)
* [`SearchNode`](#`SearchNode`)
* [`SearchProblem`](#`SearchProblem`)
* [`SearchSolver`](#`SearchSolver`)
* [Authors](#Authors)

This library provides some frameworks for basic algorithms used for artificial intelligence.
It offers simple generic classes to extends.

Contents:

* see `backtrack`

* see `search`

* `ai` - Simple toolkit for artificial intelligence.

* `backtrack` - Basic framework for active backtrack solver

* `search` - Basic framework for search problems and solver.

See the `examples` subdirectory for examples:

* `examples/queens.nit`
* `examples/puzzle.nit`
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

![Diagram for `ai`](uml-ai.svg)

* `BacktrackNode` - A node in the backtrack-zipper visited by a `BacktrackSolver`.
* `BacktrackProblem` - Abstract backtrack problem of states (`S`) and actions (`A`).
* `BacktrackSolver` - A running solver for a given problem, that can be configured and controlled.
* `SearchNode` - A node in the search-tree visited by a `SearchSolver`.
* `SearchProblem` - Abstract search problem over immutable states (`S`) and actions (`A`).
* `SearchSolver` - A running solver for a given problem, to configure and control.

## `backtrack`

> This module provides a simple abstract class `BacktrackProblem[S,A]` to be specialized for a specific problem.

The concrete class `BacktrackSolver` is used to configure, query, and run a solver for a given problem.

For an example, see the `queens.nit` program in the `examples` subdirectory.

### `BacktrackNode`

> The solver visits the virtual search tree with a zipper.

A node is the zipper (this class) is associated to:

* a state of the problem (indirectly),
* the actions not yet explored from the state (see `totry`)
* the action that yields to the state (see `action`), used to backtrack.
* and the parent node in the zipper (see `parent`).

There is no direct link between a node and a state; it is unneeded
since the same state is used, and mutated, during the whole execution of the solver.

This class is exposed to allow queries on the solution provided by the solver.

### `BacktrackProblem`

> This class serves to model search problems using a backtracking approach.
> A state, `S`, is a point in the search problem and fully model a given state of the world.
> An action, `A`, is an available mean of transition between two states.
> While there is a potential large number of distinct states and actions, there should be only
> a small number of possible actions from a specific state (thus, a small, or at least finite, branching factor).

The point this class is that the state is a mutable object, the roles of the actions is to modify
the state.

This abstract class is generic and made to work with any kind of states and actions.
Therefore, specific subclasses must be developed to implements the required services:

* `initial_state`
* `actions`
* `apply_action`
* `backtrack`
* `is_goal`

# Basic search

The method `solve` returns a new solver for a backtrack search.

### `BacktrackSolver`

> # Basic run and results.

1. Instantiate it with the method `solve` from `BacktrackProblem`.
2. Apply the method `run`, that will search and return a solution.
3. Retrieve information from the solution.

~~~~nitish
var p: BacktrackProblem = new MyProblem
var solver = p.solve
var res = solver.run
if res != null then
  print "Found solution in {res.depth} actions: {res.plan.join(", ")}"
  print "The state of the solution is: {solver.state}"
end
~~~~

# Step-by-step runs and multiple runs

The `run_steps` method (see also `steps`, and `steps_limit`) can be used to run only a maximum number of steps.
Thus, this method can be used as a *co-routine* and be run periodically for a small amount of time.

`run` and `run_steps` return the next solution.
A subsequent call to `run` returns the following solution and so on.

When there is no more solutions available, `null` is returned and `is_running` become false.

Between run, the state of the current search can be read.

# Search-trees

Internally, solvers use a zipper on the virtual search-tree where nodes are elements in the apply/backtrack graph.
See the class `BacktrackNode` for details

The `run` and `node` methods return a `BacktrackNode` that can be used to retrieve a lot of useful information,
like the full `path` or the `plan`.
If only the solved state is required, the `state` method from the solver gives it.

## `search`

> The module provides a simple abstract class `SearchProblem[S,A]` to be specialized for a specific problem.

The concrete class `SearchSolver` is used to configure, query, and run a solver for a given problem.

For an example, see the `puzzle.nit` program in the `examples` subdirectory.

### `SearchNode`

> The root node is labeled by the initial state of the problem.

This class is exposed to allow queries on the solution provided by the solver.

### `SearchProblem`

> This class serves to model problems of planing and path-finding.
> A state, `S`, is a point in the search problem and fully models a given state of the world.
> An action, `A`, is an available mean of transition between two states.

This abstract class is generic made to work with any kind of states and actions.
Therefore, specific subclasses must be developed to implement the required services:

* `initial_state`
* `actions`
* `apply_action`
* `is_goal`

Note that the implemented methods should not temper with the parameters since it is expected
that they remain unmodified.

# Basic search

These tree method are enough to trigger a basic search.

The methods `breadth_first` and `depth_first` return pre-configured solvers for, respectively,
a breadth-first search, a depth-first search.

# Advanced search

The `cost` method can be implemented to represent the cost of a single transition.
By default, the cost is 1.

The `heuristic` method can be implemented to represent a lower-bound estimation of the remaining
cost to reach a goal state.
By default, the heuristic is 0.

If one of these (or both) methods are implemented, the `astar` method will return a pre-configured
solver for a A* search.

More configuration and optimization on the search can to be done in the `SearchSolver` class.

### `SearchSolver`

> For a given problem, a lot of variation of search algorithms can be made.
> Thus this class permit the user to control the parameters of the search algorithm.

Note that this class is not meant to be specialized, and usually not instantiated directly.

# Basic run and result.

1. Instantiate it with the method `breadth_first`, `depth_first`, or `astar` from `SearchProblem`.
2. Apply the method `run`, that will search and return a solution.
3. Retrieve information from the solution.

~~~~nitish
var p: SearchProblem = new MyProblem
var res = p.astar.run
if res != null then print "Found plan with {res.depth} actions, that cost {res.cost}: {res.plan.join(", ")}"
~~~~

# Step-by-step runs and multiple runs

The `run_steps` method (see also `steps`, and `steps_limit`) can be used to run only a maximum number of steps.
This method can be used as a *co-routine* and run them periodically for a small amount of time.

`run` and `run_steps` return the next solution.
A subsequent call to `run` returns the following solution and so on.

When there is no more solutions available, `is_running` become false.

# Search-trees

Internally, solvers use a search-tree where nodes are labeled with states, and edges are labeled with actions.
See `SearchNode` for details.

The `run` method return a `SearchNode` that can be used to retrieve a lot of useful information,
like the full `path` or the `plan`.

# Configuration

The solver provide some *knobs* to control how the search-tree is visited.

* `memorize` (see also `memorize_late`)
* `do_revisit` (see also `revisits`)
* `depth_limit` (see also `iterative_deepening` and `depth_limit_reached`)

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
