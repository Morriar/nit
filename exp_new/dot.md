# `dot` - Dot rendering library

* [Features](#Features)
* [`DotGraph` - A Graph representation suited for dot format.](#`DotGraph`---A-Graph-representation-suited-for-dot-format.)
* [`DotNode` - A dot node](#`DotNode`---A-dot-node)
* [`DotEdge` - A dot edge that links two nodes](#`DotEdge`---A-dot-edge-that-links-two-nodes)
* [`DotCluster` - A dot cluster allows nested nodes](#`DotCluster`---A-dot-cluster-allows-nested-nodes)
* [Other features](#Other-features)
* [Authors](#Authors)

Example:

~~~
import dot

var graph = new DotGraph("G", "digraph")

var hello = graph.add_node("hello")
var world = graph.add_node("world")

graph.add_edge(hello, world)

print graph.to_dot
~~~

## Features

![Diagram for `dot`](uml-dot.svg)

### `DotGraph` - A Graph representation suited for dot format.

Creating a new graph

~~~
var graph = new DotGraph("G", "digraph")
graph["rankdir"] = "BT"
graph["ranksep"] = 0.3
graph["nodesep"] = 0.3
graph.nodes_attrs["fontname"] = "helvetica"
graph.edges_attrs["color"] = "gray"
~~~

Properties:

* `DotGraph::add` - Add a node to the graph
* `DotGraph::add_edge` - Add an edge to the graph
* `DotGraph::add_node` - Add a new node to the graph
* `DotGraph::show` - Show dot in graphviz (blocking)
* `DotGraph::to_svg` - Render `self` as an SVG image

### `DotNode` - A dot node

Nodes can be created from scratch

~~~
var node = new DotNode("id")
node["label"] = "ID"
~~~

Then added to a graph

~~~
var graph = new DotGraph("G", "digraph")
graph.add node
~~~

Or can be created directly from an existing graph

~~~
var node2 = graph.add_node("id2")
node2["label"] = "ID2"
~~~

Example from `dot::clusters`:

~~~
# Example from http://www.graphviz.org/content/cluster
module clusters is example

import dot

var graph = new DotGraph("G", "digraph")

var cl0 = new DotGraph("cluster_0", "subgraph")
cl0["label"] = "process #1"
cl0["style"] = "filled"
cl0["color"] = "lightgrey"
cl0.nodes_attrs["style"] = "filled"
cl0.nodes_attrs["color"] = "white"

var a0 = cl0.add_node("a0")
var a1 = cl0.add_node("a1")
var a2 = cl0.add_node("a2")
var a3 = cl0.add_node("a3")
cl0.add_edge(a0, a1)
cl0.add_edge(a1, a2)
cl0.add_edge(a2, a3)

graph.add cl0

var cl1 = new DotGraph("cluster_1", "subgraph")
cl1["label"] = "process #2"
cl1["color"] = "blue"
cl1.nodes_attrs["style"] = "filled"

var b0 = cl1.add_node("b0")
var b1 = cl1.add_node("b1")
var b2 = cl1.add_node("b2")
var b3 = cl1.add_node("b3")
cl1.add_edge(b0, b1)
cl1.add_edge(b1, b2)
cl1.add_edge(b2, b3)

graph.add cl1

var start = graph.add_node("start")
start["shape"] = "Mdiamond"

var nend = graph.add_node("end")
nend["shape"] = "Msquare"

graph.add_edge(start, a0)
graph.add_edge(start, b0)
graph.add_edge(a1, b3)
graph.add_edge(b2, a3)
graph.add_edge(a3, a0)
graph.add_edge(a3, nend)
graph.add_edge(b3, nend)

if args.is_empty then
	print graph.to_dot
	# graph.show
else
	graph.to_dot.write_to_file args.first
end
~~~

### `DotEdge` - A dot edge that links two nodes

Edges can be created from scratch

~~~
var a1 = new DotNode("a1")
var b1 = new DotNode("b1")
var edge = new DotEdge(a1, b1)
edge["color"] = "blue"
~~~

Then added to a graph

~~~
sh var graph = new DotGraph("G", "digraph")
graph.add edge
~~~

Or can be created directly from an existing graph

~~~
var a2 = graph.add_node("a2")
var b2 = graph.add_node("b2")
var edge2 = graph.add_edge(a2, b2)
edge2["color"] = "red"
~~~

Example from `dot::hello`:

~~~
# Example from http://www.graphviz.org/content/hello
module hello is example

import dot

var graph = new DotGraph("G", "digraph")

var hello = graph.add_node("hello")
var world = graph.add_node("world")
graph.add_edge(hello, world)

if args.is_empty then
	print graph.to_dot
else
	graph.to_dot.write_to_file args.first
end
~~~

### `DotCluster` - A dot cluster allows nested nodes

Creating clusters

~~~
var graph = new DotGraph("G", "digraph")
graph["rankdir"] = "BT"

var sub = new DotCluster("cluster_sub", "subgraph")
sub["label"] = "process #1"

var a0 = sub.add_node("a0")
var a1 = sub.add_node("a1")
sub.add_edge(a0, a1)

graph.add sub
~~~

Example from `dot::undirected_clusters`:

~~~
# Example from http://www.graphviz.org/Gallery/undirected/fdpclust.html
module undirected_clusters is example

import dot

var graph = new DotGraph("G", "graph")

var a = new DotNode("a")
var b = new DotNode("b")
var c = new DotNode("c")
var d = new DotNode("d")
var e = new DotNode("e")
var f = new DotNode("f")
var g = new DotNode("g")

var clA = new DotGraph("clusterA", "subgraph")
clA.add_edge(a, b).directed = false
graph.add clA

var clB = new DotGraph("clusterB", "subgraph")
clB.add_edge(c, d).directed = false
clA.add clB

var clC = new DotGraph("clusterC", "subgraph")
clC.add_edge(e, g).directed = false
graph.add clC

graph.add_edge(e, d).directed = false
graph.add_edge(f, g).directed = false

if args.is_empty then
	print graph.to_dot
else
	graph.to_dot.write_to_file args.first
end
~~~

## Other features

* `AttributeMap` - Map of graph/node/edge attribute that can be rendered to dot.
* `DotElement` - Something that can be rendered in dot format.

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
