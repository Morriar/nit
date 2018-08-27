# [ai](ai) - Simple library for basic artificial intelligence algorithms

This library provides some frameworks for basic algorithms used for artificial intelligence.
It offers simple generic classes to extends.



## `backtrack`

This module provides a simple abstract class `BacktrackProblem[S,A]` to be specialized for a specific problem.

The concrete class `BacktrackSolver` is used to configure, query, and run a solver for a given problem.

For an example, see the `queens.nit` program in the `examples` subdirectory.

### `BacktrackProblem`

This class serves to model search problems using a backtracking approach.
A state, `S`, is a point in the search problem and fully model a given state of the world.
An action, `A`, is an available mean of transition between two states.
While there is a potential large number of distinct states and actions, there should be only
a small number of possible actions from a specific state (thus, a small, or at least finite, branching factor).

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

Useful features:

* `BacktrackProblem::actions` - The available and applicable actions for a given state
* `BacktrackProblem::apply_action` - Modify `state` by applying `action`
* `BacktrackProblem::backtrack` - Modify `state` by undoing `action`
* `BacktrackProblem::initial_state` - The starting state of the problem.
* `BacktrackProblem::is_goal` - Is the state a goal state?
* `BacktrackProblem::solve` - Return a new solver

### `BacktrackSolver`

# Basic run and results.

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

Useful features:

* `BacktrackSolver::is_running` - Is the solver still running?
* `BacktrackSolver::node` - The current `node` in the backtrack-zipper.
* `BacktrackSolver::problem` - The problem currently solved
* `BacktrackSolver::run` - Run the solver and return the next solution found (if any).
* `BacktrackSolver::run_steps` - Update `steps_limit` then just run some additional steps.
* `BacktrackSolver::state` - The current state.
* `BacktrackSolver::steps` - The total steps executed since the beginning.
* `BacktrackSolver::steps_limit` - Limit in the number of steps for a `run`.
* `BacktrackSolver::steps_limit=` - Limit in the number of steps for a `run`.

### `BacktrackNode`

The solver visits the virtual search tree with a zipper.

A node is the zipper (this class) is associated to:

* a state of the problem (indirectly),
* the actions not yet explored from the state (see `totry`)
* the action that yields to the state (see `action`), used to backtrack.
* and the parent node in the zipper (see `parent`).

There is no direct link between a node and a state; it is unneeded
since the same state is used, and mutated, during the whole execution of the solver.

This class is exposed to allow queries on the solution provided by the solver.

## `search`

### `SearchProblem`

This class serves to model problems of planing and path-finding.
A state, `S`, is a point in the search problem and fully models a given state of the world.
An action, `A`, is an available mean of transition between two states.

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

Useful features:

* `SearchProblem::actions` - The available applicable actions for a given state.
* `SearchProblem::apply_action` - The new state when applying a given action
* `SearchProblem::astar` - return a new best-first solver
* `SearchProblem::breadth_first` - return a new breadth-first solver
* `SearchProblem::cost` - The cost for `action` from `old_state` to `new_state`
* `SearchProblem::depth_first` - return a new depth-first solver
* `SearchProblem::epsilon` - Negligible quantity for float comparisons
* `SearchProblem::heuristic` - An heuristic of the estimated `cost` going from `state` to a goal state.
* `SearchProblem::initial_node` - Create the initial node in the search-tree.
* `SearchProblem::initial_state` - The starting state for the problem
* `SearchProblem::is_goal` - Is the state a goal state?
* `SearchProblem::make_memory` - Various Map implementations of memory.
* `SearchProblem::run_configs` - Run and evaluate solvers with multiple configuration.

### `SearchSolver`

For a given problem, a lot of variation of search algorithms can be made.
Thus this class permit the user to control the parameters of the search algorithm.

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

Useful features:

* `SearchSolver::branching_factor` - The average number of neighbors by nodes.
* `SearchSolver::depth_limit` - Limit in the depth search.
* `SearchSolver::depth_limit=` - Limit in the depth search.
* `SearchSolver::depth_limit_reached` - How much time a `depth_limit` was reached?
* `SearchSolver::do_revisit` - Revisit states when a better path to them is found.
* `SearchSolver::do_revisit=` - Revisit states when a better path to them is found.
* `SearchSolver::is_running` - Is the solver still running?
* `SearchSolver::iterative_deepening` - Increase amount for an iterative deepening search.
* `SearchSolver::memorize` - Does the solver need to memorize visited states?
* `SearchSolver::memorize=` - Does the solver need to memorize visited states?
* `SearchSolver::memorize_late` - Use memory only on visited (closed) state.
* `SearchSolver::memorize_late=` - Use memory only on visited (closed) state.
* `SearchSolver::memorized` - Total number of time an already memorized node is seen again.
* `SearchSolver::nearest_solution` - Nearest solution found (up to date).
* `SearchSolver::neighbors` - Total number of neighbors considered.
* `SearchSolver::node` - The last visited node.
* `SearchSolver::nodes` - The total number of nodes created
* `SearchSolver::problem` - The problem currently solved
* `SearchSolver::revisits` - Total number of states (potentially) revisited.
* `SearchSolver::run` - Run the solver and return the next solution (if any)
* `SearchSolver::run_config` - Run the configuration number `i`, for `steps` number of steps.
* `SearchSolver::run_steps` - Update `steps_limit` then just run some additional steps
* `SearchSolver::solution` - The solution found by the last `run`.
* `SearchSolver::steps` - The total steps executed since the beginning
* `SearchSolver::steps_limit` - Limit in the number of steps for a `run`.
* `SearchSolver::steps_limit=` - Limit in the number of steps for a `run`.

### `SearchNode`

The root node is labeled by the initial state of the problem.

This class is exposed to allow queries on the solution provided by the solver.

## Contributing

This project is versioned with git.
We accept pull requests on [https://github.com/nitlang/nit.git](https://github.com/nitlang/nit.git).

## Authors

This project is maintained by **Jean Privat <jean@pryen.org>**.

## License

This project is licensed under the [Apache-2.0](https://opensource.org/licenses/Apache-2.0)
license.
