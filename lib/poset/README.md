# `poset` - Pre order sets and partial order set (ie hierarchies)

* [Features](#Features)
* [`POSet` - Pre-order set graph.](#`POSet`---Pre-order-set-graph.)
* [`POSetElement` - View of an object in a poset](#`POSetElement`---View-of-an-object-in-a-poset)
* [Authors](#Authors)

## Features

### `POSet` - Pre-order set graph.

* reflexivity: an element is in relation with itself (ie `self.has(e) implies self.has_edge(e,e)`)
* transitivity: `(self.has_edge(e,f) and self.has_edge(f,g)) implies self.has_edge(e,g)`

Nodes and edges are added to the POSet.

~~~
var pos = new POSet[String]
pos.add_edge("A", "B") # add A->B
pos.add_edge("B", "C") # add B->C
pos.add_node("D") # add unconnected node "D"

# A -> B -> C    D

assert pos.has_edge("A", "B") == true  # direct
~~~

Since a poset is transitive, direct and indirect edges are considered by default.
Direct edges (transitive-reduction) can also be considered independently.

~~~
assert pos.has_edge("A", "C") == true  # indirect
assert pos.has_edge("A", "D") == false # no edge
assert pos.has_edge("B", "A") == false # edges are directed

assert pos.has_direct_edge("A", "B") == true  # direct
assert pos.has_direct_edge("A", "C") == false # indirect
~~~

POSet are dynamic.
It means that the transitivity is updated while new nodes and edges are added.
The transitive-reduction (*direct edges*)) is also updated,
so adding new edges can make some direct edge to disappear.

~~~
pos.add_edge("A","D")
pos.add_edge("D","B")
pos.add_edge("A","E")
pos.add_edge("E","C")

# A -> D -> B
# |         |
# v         v
# E ------> C

assert pos.has_edge("D", "C") == true # new indirect edge
assert pos.has_edge("A", "B") == true # still an edge
assert pos.has_direct_edge("A", "B") == false  # but no-more a direct one
~~~

Thanks to the `[]` method, elements can be considered relatively to the poset.
SEE `POSetElement`

Properties:

* `POSet::[]` - Return a view of `e` in the poset.
* `POSet::add_chain` - Add an edge between all elements of `es` in order.
* `POSet::add_edge` - Add an edge from `f` to `t`.
* `POSet::add_node` - Add a node (an element) to the posed
* `POSet::has_direct_edge` - Is there a direct edge from `f` to `t`?
* `POSet::has_edge` - Is there an edge (transitive or not) from `f` to `t`?
* `POSet::linearize` - Sort a sorted array of poset elements using linearization order
* `POSet::print_metrics` - Display exhaustive metrics about the poset
* `POSet::select_greatest` - Filter elements to return only the greatest ones
* `POSet::select_smallest` - Filter elements to return only the smallest ones
* `POSet::show_dot` - Display the POSet in a graphical windows.
* `POSet::sub` - Return an induced sub-poset
* `POSet::write_dot` - Write the POSet as a graphviz digraph.

### `POSetElement` - View of an object in a poset

For instance, one common usage is to add a specific attribute for each poset a class belong.

~~~nitish
class Thing
    var in_some_relation: POSetElement[Thing]
    var in_other_relation: POSetElement[Thing]
end
var t: Thing
# ...
t.in_some_relation.greaters
~~~

Properties:

* `POSetElement::<` - Is `t != element` and is there an edge from `element` to `t`?
* `POSetElement::<=` - Is there an edge from `element` to `t`?
* `POSetElement::depth` - The length of the shortest path to the root of the poset hierarchy
* `POSetElement::direct_greaters` - Return the set of all elements `t` that have a direct edge from `element` to `t`.
* `POSetElement::direct_smallers` - Return the set of all elements `f` that have an edge from `f` to `element`.
* `POSetElement::greaters` - Return the set of all elements `t` that have an edge from `element` to `t`.
* `POSetElement::smallers` - Return the set of all elements `f` that have an edge from `f` to `element`.

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
