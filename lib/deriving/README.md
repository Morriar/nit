# `deriving` - Automatic derivable implementations of standard basic methods

* [Features](#Features)
* [`Derivable` - Interface of objects that expose some kind of internal representation in a very unreliable way.](#`Derivable`---Interface-of-objects-that-expose-some-kind-of-internal-representation-in-a-very-unreliable-way.)
* [`DeriveToS` - Implementation of `to_s` for `Derivable` objects.](#`DeriveToS`---Implementation-of-`to_s`-for-`Derivable`-objects.)
* [`DeriveEqual` - Implementation of `==` and `hash` for `Derivable` objects.](#`DeriveEqual`---Implementation-of-`==`-and-`hash`-for-`Derivable`-objects.)
* [Authors](#Authors)

This module introduce `Derivable` as the main interface to implement (or auto-implement) and
provides additional mixin-interfaces with specific default behavior of standard basic methods based
on the services of this interface.

The name *deriving* is inspired from the deriving mechanism of Haskell.

This module also introduce a new annotation `auto_derive`. See `Derivable` for details.

## Features

### `Derivable` - Interface of objects that expose some kind of internal representation in a very unreliable way.

The point of this interface is to allow objects to give a basic representation of
themselves within a simple key-value dictionary.
The specific semantic of each key and value is let unspecified.

Moreover the class annotation `auto_derive` will automatically implements the
interface with the attributes locally defined in the class.

~~~
class A
   auto_derive
   var an_int: Int
   var a_string: String
end

var a = new A(5, "five")
var map = a.derive_to_map
assert map.length == 2
assert map["an_int"] == 5
assert map["a_string"] == "five"
~~~

Properties:

* `Derivable::derive_to_map` - Returns a map that loosely represents the object `self`.

### `DeriveToS` - Implementation of `to_s` for `Derivable` objects.

The implementation uses `to_s` for each value of `attributes_to_map`.

~~~
class A
   auto_derive
   super DeriveToS
   var an_int: Int
   var a_string: String
end

var a = new A(5, "five")
assert a.to_s == "an_int:5; a_string:five"
~~~

Warning: the method may go in an infinite recursion if there is a circuit in
the implementation of `to_s`.

### `DeriveEqual` - Implementation of `==` and `hash` for `Derivable` objects.

The implementations just call `==` and `hash` on `derive_to_map`.

~~~
class A
   auto_derive
   super DeriveEqual
   var an_int: Int
   var a_string: String
end

var a = new A(5, "five")
var b = new A(5, "five")
var c = new A(6, "six")
assert a == b
assert a.hash == b.hash
assert a != c
~~~

Warning: the method may go in an infinite recursion if there is a circuit in
the implementation of `==` or `hash`.

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
