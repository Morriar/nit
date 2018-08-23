# `trees` - General module for tree data structures

* [Features](#Features)
* [`bktree` - Implementation of BKTree](#`bktree`---Implementation-of-BKTree)
* [`rbtree` - A red–black tree is a data structure which is a type of self-balancing binary search tree.](#`rbtree`---A-red–black-tree-is-a-data-structure-which-is-a-type-of-self-balancing-binary-search-tree.)
* [`trie` - A trie (or prefix tree) is a datastructure used to perform prefix searches.](#`trie`---A-trie-(or-prefix-tree)-is-a-datastructure-used-to-perform-prefix-searches.)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `trees`](uml-trees.svg)

### `bktree` - Implementation of BKTree

As proposed by W. A. Burkhard and R. M. Keller in
"Some approaches to best-match file searching" the BKTree data structure
is usefull to speed-up spell checking based on the Levenshtein distance between
words.

With a BKTree, the complexity to find mispelled words in a dictionnary is *O(log n)*
instead of *O(n)* with a dummy list.

Example:

~~~
# Create a new BKTree
var tree = new BKTree

# Index some words in the dictionnary for spell checking
tree.add("book")
tree.add("books")
tree.add("cake")
tree.add("boo")
tree.add("cape")
tree.add("boon")
tree.add("cook")
tree.add("cart")

# Search suggestions in the BKTree
assert tree.search("caqe").join(", ") == "\{1: cake\}, \{1: cape\}"
~~~

See <https://dl.acm.org/citation.cfm?id=362003.362025>.

### `rbtree` - A red–black tree is a data structure which is a type of self-balancing binary search tree.

Balance is preserved by painting each node of the tree with one of two colors
(typically called 'red' and 'black') in a way that satisfies certain properties,
which collectively constrain how unbalanced the tree can become in the worst case.
When the tree is modified, the new tree is subsequently rearranged and repainted
to restore the coloring properties.
The properties are designed in such a way that this rearranging and recoloring
can be performed efficiently.

The balancing of the tree is not perfect but it is good enough to allow it
to guarantee searching in O(log n) time, where n is the total number of elements in the tree.
The insertion and deletion operations, along with the tree rearrangement and recoloring,
are also performed in O(log n) time.

### `trie` - A trie (or prefix tree) is a datastructure used to perform prefix searches.

The trie uses an arborescent datastructure to perform searches on a prefix.
With this version of the trie, you can link data to nodes so the trie can
be used as a kind of Map by prefix.

~~~
# Associate some integers to Map keys
var trie = new Trie[Int]
trie["foo"] = 1
trie["fooo"] = 2
trie["foooo"] = 3
trie["bar"] = 4
trie["baz"] = 5

# Get stored values by key
print trie.has_key("foo")
print trie["foo"] == 1

# Get stored values by prefix
assert trie.has_prefix("fo")
assert not trie.has_prefix("z")
assert trie.find_by_prefix("foo") == [1, 2, 3]
assert trie.find_by_prefix("bar") == [4]
assert trie.find_by_prefix("z").is_empty
~~~

## Other features

* `abstract_tree` - Introduce tree structures abstraction
* `bintree` - Binary Tree data-structure

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
