# `cartesian` - Memory-efficient Cartesian products on heterogeneous collections

* [Features](#Features)
* [`Cartesian` - A view of a Cartesian-product collection over two collections.](#`Cartesian`---A-view-of-a-Cartesian-product-collection-over-two-collections.)
* [Other features](#Other-features)
* [Authors](#Authors)

This module is a proof-of-concept to propose memory-efficient views on collections.

This is a specific alternative to `combinations`, that focuses only highly efficient
Cartesian products between collections of different types.

Collection[Int] X Collection[String] -> Collection[(Int,String)]

However, in Nit, there in no native *tuple* type.
So we need a first building block, a pair.

## Features

### `Cartesian` - A view of a Cartesian-product collection over two collections.

A Cartesian product over two collections is just a collection of pairs.
Therefore, this view *contains* all the pairs of elements constructed by associating each
element of the first collection to each element of the second collection.

However the view is memory-efficient and the pairs are created only when needed.

A simple Cartesian product

~~~~
var c1 = [1,2]
var c2 = ["a","b","c"]
var c12 = new Cartesian[Int,String](c1, c2)
assert c12.length    == 6
assert c12.join(";") == "(1,a);(1,b);(1,c);(2,a);(2,b);(2,c)" # All the 6 pairs
~~~~

Note: because it is a view, changes on the base collections are reflected on the view.

E.g. c12 is a view on c1 and c2, so if c1 changes, then c12 "changes".

~~~~
assert c2.pop        == "c"
assert c12.length    == 4
assert c12.join(";") == "(1,a);(1,b);(2,a);(2,b)" # All the 4 remaining pairs
~~~~

Cartesian objects are collections, so can be used to build another Cartesian object.

~~~~
var c3 = [1000..2000[
var c123 = new Cartesian[Pair[Int,String],Int](c12, c3)
assert c123.length   == 4000
~~~~

All methods of Collection are inherited, it is so great!

E.g. search elements?

~~~~
var p12 = new Pair[Int,String](2,"b")
assert c12.has(p12)      == true
var p123 = new Pair[Pair[Int, String], Int](p12, 1500)
var p123bis = new Pair[Pair[Int, String], Int](p12, 0)
assert c123.has(p123)    == true
assert c123.has(p123bis) == false
~~~~

Properties:

* `Cartesian::swap` - Returns a new Cartesian where the first collection is the second.

## Other features

* `CartesianIterator` - An iterator over a `Cartesian`-product collection.
* `Pair` - A simple read-only pair of two elements `e` and `f`.

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
