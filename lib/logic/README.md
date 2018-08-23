# `logic` - First-order logic data structure and algorithm

* [Features](#Features)
* [`lexpr` - Logical expression.](#`lexpr`---Logical-expression.)
* [Authors](#Authors)

## Features

![Diagram for `logic`](uml-logic.svg)

### `lexpr` - Logical expression.

This module provides a simple data structure for first order logic.
Basic logical operators and algorithms are provided.

~~~
var a = new LVar("a")
var b = new LVar("b")
var c = new LVar("c")

assert a.to_s == "a"
assert (a|b).to_s == "(a | b)"
assert (~(a|b)).to_s == "~(a | b)"
~~~

Compute a negative normal form:

~~~
var ex = a | (b & c)
var nex = ~ex
assert ex.nnf.to_s == "(a | (b & c))"
assert nex.nnf.to_s == "(~a & (~b | ~c))"
~~~

Compute a conjunctive normal form:

~~~
assert ex.cnf.simplify.to_s == "(a|b) & (a|c)"
assert nex.cnf.simplify.to_s == "(~a) & (~b|~c)"
~~~

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
