# `ordered_tree` - Manipulation and presentation of ordered trees

* [Features](#Features)
* [`OrderedTree` - Generic structure to manage and display an ordered tree](#`OrderedTree`---Generic-structure-to-manage-and-display-an-ordered-tree)
* [Authors](#Authors)

Ordered tree are tree where the elements of a same parent are in a specific order

Elements of the trees are added with the `add` method that takes a parent and
a sub-element.
If the parent is `null`, then the element is considered a root.

~~~~
var t = new OrderedTree[String]
t.add(null, "root")
t.add("root", "child1")
t.add("root", "child2")
t.add("child1", "grand-child")
assert t.length == 4
~~~~

By default, the elements with a same parent
are visited in the order they are added.

~~~
assert t.to_a == ["root", "child1", "grand-child", "child2"]
assert t.write_to_string == """
root
|--child1
|  `--grand-child
`--child2
"""
~~~

The `sort_with` method can be used reorder elements

~~~
t.add("root", "aaa")
assert t.to_a == ["root", "child1", "grand-child", "child2", "aaa"]
t.sort_with(alpha_comparator)
assert t.to_a == ["root", "aaa", "child1", "grand-child", "child2"]
~~~

This class can be used as it to work with generic trees but can also be specialized to provide more specific
behavior or display. It is why the internal attributes are mutable.

## Features

### `OrderedTree` - Generic structure to manage and display an ordered tree

Ordered tree are tree where the elements of a same parent are in a specific order

Elements of the trees are added with the `add` method that takes a parent and
a sub-element.
If the parent is `null`, then the element is considered a root.

~~~~
var t = new OrderedTree[String]
t.add(null, "root")
t.add("root", "child1")
t.add("root", "child2")
t.add("child1", "grand-child")
assert t.length == 4
~~~~

By default, the elements with a same parent
are visited in the order they are added.

~~~
assert t.to_a == ["root", "child1", "grand-child", "child2"]
assert t.write_to_string == """
root
|--child1
|  `--grand-child
`--child2
"""
~~~

The `sort_with` method can be used reorder elements

~~~
t.add("root", "aaa")
assert t.to_a == ["root", "child1", "grand-child", "child2", "aaa"]
t.sort_with(alpha_comparator)
assert t.to_a == ["root", "aaa", "child1", "grand-child", "child2"]
~~~

This class can be used as it to work with generic trees but can also be specialized to provide more specific
behavior or display. It is why the internal attributes are mutable.

Properties:

* `OrderedTree::add` - Add a new element `e` in the tree.
* `OrderedTree::add_all` - Append all nodes `es` as children of `p`.
* `OrderedTree::display` - How to display a specific element of the tree
* `OrderedTree::parent` - The parent of the element `e`
* `OrderedTree::sort_with` - Sort roots and other elements using a comparator method

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
