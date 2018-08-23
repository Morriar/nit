# `a_star` - A* pathfinding in graphs

* [Features](#Features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

A single graph may have different properties according to the `PathContext` used

Usage:

~~~
# Weighted graph (letters are nodes, digits are weights):
#
#     a -2- b
#    /     /
#   3     1
#  /     /
# c -3- d -8- e
#
var graph = new Graph[Node,WeightedLink]

var na = new Node(graph)
var nb = new Node(graph)
var nc = new Node(graph)
var nd = new Node(graph)
var ne = new Node(graph)

var lab = new WeightedLink(graph, na, nb, 2)
var lac = new WeightedLink(graph, na, nc, 3)
var lbd = new WeightedLink(graph, nb, nd, 1)
var lcd = new WeightedLink(graph, nc, nd, 3)
var lde = new WeightedLink(graph, nd, ne, 8)

var context = new WeightedPathContext(graph)

var path = na.path_to(ne, 100, context)
assert path != null else print "No possible path"

assert path.step == nb
assert path.step == nd
assert path.step == ne
assert path.at_end_of_path
~~~

## Features

![Diagram for `a_star`](uml-a_star.svg)

* `AStarPath` - Result from path finding and a walkable path
* `ConstantPathContext` - Simple context with constant cost on each links
* `Graph` - General graph
* `Link` - Link between two nodes and associated to a graph
* `NamedNode` - Simple node with a name
* `Node` - General graph node
* `PathContext` - Context related to an evocation of pathfinding
* `PositionPathContext` - Context for a graph with positions
* `PositionedLink` - Link for nodes with a position
* `PositionedNamedNode` - Node with a name and position
* `TargetCondition` - Advanced path conditions with customizable accept states
* `WeightedLink` - A `Link` with a `weight`
* `WeightedPathContext` - A `PathContext` for graphs with `WeightedLink`

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
