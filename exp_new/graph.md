# `graph` - Graph library for Nit

* [Features](#Features)
* [`digraph` - Implementation of directed graphs, also called digraphs.](#`digraph`---Implementation-of-directed-graphs,-also-called-digraphs.)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `graph`](uml-graph.svg)

### `digraph` - Implementation of directed graphs, also called digraphs.

Overview
========

This module provides a simple interface together with a concrete
implementation of directed graphs (or digraphs).

The upper level interface is `Digraph` and contains all methods for digraphs
that do not depend on the underlying data structure. More precisely, if basic
operations such as `predecessors`, `successors`, `num_vertices`, etc.  are
implemented, then high level operations (such as computing the connected
components or a shortest path between two vertices) can be easily derived.
Also, all methods found in `Digraph` do no modify the graph. For mutable
methods, one needs to check the `MutableDigraph` child class. Vertices can be
any `Object`, but there is no information stored in the arcs, which are
simple arrays of the form `[u,v]`, where `u` is the source of the arc and `v`
is the target.

There is currently only one concrete implementation named `HashDigraph` that
makes use of the HashMap class for storing the predecessors and successors.
It is therefore simple to provide another implementation: One only has to
create a concrete specialization of either `Digraph` or `MutableDigraph`.

Basic methods
=============

To create an (empty) new graph whose keys are integers, one simply type

~~~
var g0 = new HashDigraph[Int]
~~~

Then we can add vertices and arcs. Note that if an arc is added whose source
and target are not already in the digraph, the vertices are added beforehand.

~~~
var g1 = new HashDigraph[Int]
g1.add_vertex(0)
g1.add_vertex(1)
g1.add_arc(0,1)
g1.add_arc(1,2)
assert g1.to_s == "Digraph of 3 vertices and 2 arcs"
~~~

One might also create digraphs with strings in vertices, for instance to
represent some directed relation. However, it is currently not possible to
store values in the arcs.

~~~
var g2 = new HashDigraph[String]
g2.add_vertex("Amy")
g2.add_vertex("Bill")
g2.add_vertex("Chris")
g2.add_vertex("Diane")
g2.add_arc("Amy", "Bill")    # Amy likes Bill
g2.add_arc("Bill", "Amy")    # Bill likes Amy
g2.add_arc("Chris", "Diane") # and so on
g2.add_arc("Diane", "Amy")   # and so on
~~~

`HashDigraph`s are mutable, i.e. one might remove arcs and/or vertices:

~~~
var g3 = new HashDigraph[Int]
g3.add_arc(0,1)
g3.add_arc(0,2)
g3.add_arc(1,2)
g3.add_arc(2,3)
g3.add_arc(2,4)
g3.remove_vertex(1)
g3.remove_arc(2, 4)
assert g3.to_s == "Digraph of 4 vertices and 2 arcs"
~~~

If one has installed [Graphviz](http://graphviz.org), it is easy to produce a
*dot* file which Graphviz process into a picture:

~~~
var g4 = new HashDigraph[Int]
g4.add_arcs([[0,1],[0,2],[1,2],[2,3],[2,4]])
print g4.to_dot
# Then call "dot -Tpng -o graph.png"
~~~

![A graph drawing produced by Graphviz](https://github.com/nitlang/nit/blob/master/lib/graph.png)

Other methods
=============

There exist other methods available for digraphs and many other will be
implemented in the future. For more details, one should look at the methods
directly. For instance, the [strongly connected components]
(https://en.wikipedia.org/wiki/Strongly_connected_component) of a digraph are
returned as a [disjoint set data structure]
(https://en.wikipedia.org/wiki/Disjoint-set_data_structure) (i.e. a set of
sets):

~~~
var g5 = new HashDigraph[Int]
g5.add_arcs([[1,2],[2,1],[2,3],[3,4],[4,5],[5,3]])
for component in g5.strongly_connected_components.to_partitions
do
	print component
end
# Prints [1,2] and [3,4,5]
~~~

It is also possible to compute a shortest (directed) path between two
vertices:

~~~
var g6 = new HashDigraph[Int]
g6.add_arcs([[1,2],[2,1],[2,3],[3,4],[4,5],[5,3]])
var path = g6.a_shortest_path(2, 4)
if path != null then print path else print "No path"
# Prints [2,3,4]
path = g6.a_shortest_path(4, 2)
if path != null then print path else print "No path"
# Prints "No path"
~~~

Extending the library
=====================

There are at least two ways of providing new methods on digraphs. If the
method is standard and could be useful to other users, you should consider
including your implementation directly in this library.

Otherwise, for personal use, you should simply define a new class inheriting
from `HashDigraph` and add the new services.

## Other features

* `pagerank` - Add PageRank computation for vertices in Digraph.

## Authors

This project is maintained by **Alexandre Blondin Massé <mailto:alexandre.blondin.masse@gmail.com>**.
