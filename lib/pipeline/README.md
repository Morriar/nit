# `pipeline` - Pipelined filters and operations on iterators

* [Features](#Features)
* [`Iterator2` - Concatenates a sequence of iterators.](#`Iterator2`---Concatenates-a-sequence-of-iterators.)
* [`NullSkipper` - Wraps an iterator to skip nulls.](#`NullSkipper`---Wraps-an-iterator-to-skip-nulls.)
* [`Function` - Interface that reify a function.](#`Function`---Interface-that-reify-a-function.)
* [Authors](#Authors)

This module enhances `Iterator` with some methods that enable a pipeline-like programing.
The processing of elements in a pipeline is done trough connected filters that are implemented with reasonable memory constraints.

## Features

### `Iterator2` - Concatenates a sequence of iterators.

Wraps an iterator of sub-iterators and iterates over the elements of the
sub-iterators.

~~~nit
var i: Iterator[Int]
var empty = new Array[Int]

i = new Iterator2[Int]([
	[1, 2, 3].iterator,
	empty.iterator,
	[4, 5].iterator
].iterator)
assert i.to_a == [1, 2, 3, 4, 5]

i = new Iterator2[Int]([
	empty.iterator,
	[42].iterator,
	empty.iterator
].iterator)
assert i.to_a == [42]
~~~

SEE: `Iterator::+`

### `NullSkipper` - Wraps an iterator to skip nulls.

~~~nit
var i: Iterator[Int]

i = new NullSkipper[Int]([null, 1, null, 2, null: nullable Int].iterator)
assert i.to_a == [1, 2]

i = new NullSkipper[Int]([1, null, 2, 3: nullable Int].iterator)
assert i.to_a == [1, 2, 3]
~~~

### `Function` - Interface that reify a function.

This interface helps to manipulate function-like objects.

The main usage it as a transformation; that takes an argument and produce a result.
See `map` for example.

Another usage is as a predicate, with `Function[E, Bool]`.
See `Iterator::select` for example.

Function with more than one argument can be reified with some uncurification.
Eg. `Function[ARG1, Function[ARG2, RES]]`.

NOTE: Nit is not a functionnal language, this class is a very basic way to
simulate the reification of a simple function.

Properties:

* `Function::apply` - How an element is mapped to another one.
* `Function::map` - Filter: produce an iterator which each element is transformed.

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
