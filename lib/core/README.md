# `core` - Nit common library of core classes and methods

* [Core Basic Types and Operations](#Core-Basic-Types-and-Operations)
* [`kernel`](#`kernel`)
* [`Object`](#`Object`)
* [Equality](#Equality)
* [Debuging](#Debuging)
* [`Sys`](#`Sys`)
* [Program Execution](#Program-Execution)
* [Other](#Other)
* [Core Collections](#Core-Collections)
* [`abstract_collection`](#`abstract_collection`)
* [`queue`](#`queue`)
* [`sorter`](#`sorter`)
* [String and Text manipulation](#String-and-Text-manipulation)
* [`ropes`](#`ropes`)
* [`codec_base`](#`codec_base`)
* [`re`](#`re`)
* [`fixed_ints`](#`fixed_ints`)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

Core classes and methods used by default by Nit programs and libraries.

* `abstract_collection` - Abstract collection classes and services.
* `abstract_text` - Abstract class for manipulation of sequences of characters
* `array` - This module introduces the standard array structure.
* `bitset` - Services to handle BitSet
* `bytes` - Services for byte streams and arrays
* `circular_array` - Efficient data structure to access both end of the sequence.
* `codec_base` - Base for codecs to use with streams
* `codecs` - Group module for all codec-related manipulations
* `collection` - This module define several collection classes.
* `core` - Standard classes and methods used by default by Nit programs and libraries.
* `environ` - Access to the environment variables of the process
* `error` - Standard error-management infrastructure.
* `exec` - Invocation and management of operating system sub-processes.
* `file` - File manipulations (create, read, write, etc.)
* `fixed_ints` - Basic integers of fixed-precision
* `fixed_ints_text` - Text services to complement `fixed_ints`
* `flat` - All the array-based text representations
* `gc` - Access to the Nit internal garbage collection mechanism
* `hash_collection` - Introduce `HashMap` and `HashSet`.
* `iso8859_1` - Codec for ISO8859-1 I/O
* `kernel` - Most basic classes and methods.
* `list` - This module handle double linked lists
* `math` - Mathematical operations
* `native` - Native structures for text and bytes
* `numeric` - Advanced services for `Numeric` types
* `protocol`
* `queue` - Queuing data structures and wrappers
* `range` - Module for range of discrete objects.
* `re` - Regular expression support for all services based on `Pattern`
* `ropes` - Tree-based representation of a String.
* `sorter` - This module contains classes used to compare things and sorts arrays.
* `stream` - Input and output streams of characters
* `string_search` - Basic string search, match and replace.
* `text` - All the classes and methods related to the manipulation of text entities
* `time` - Management of time and dates
* `union_find` - union–find algorithm using an efficient disjoint-set data structure
* `utf8` - Codec for UTF-8 I/O

## Core Basic Types and Operations

![Diagram for `core`](uml-core.svg)

## `kernel`

> This module is the root of the module hierarchy.
> It provides a very minimal set of classes and services used as a
> foundation to define other classes and methods.

### `Object`

> Each other class implicitly specializes Object,
> therefore the services of Object are inherited by every other class and are usable
> on each value, including primitive types like integers (`Int`), strings (`String`) and arrays (`Array`).

Note that `nullable Object`, not `Object`, is the root of the type hierarchy
since the special value `null` is not considered as an instance of Object.

#### Equality

~~~
assert 1 + 1 == 2
assert not 1 == "1"
assert 1.to_s == "1"
~~~

The exact meaning of *same value* is left to the subclasses.
Implicitly, the default implementation, is `is_same_instance`.

The laws of `==` are the following:

* reflexivity `a.is_same_instance(b) implies a == b`
* symmetry: `(a == b) == (b == a)`
* transitivity: `(a == b) and (b == c) implies (a == c)`

`==` might not be constant on some objects overtime because of their evolution.

~~~
var a = [1]
var b = [1]
var c = [1,2]
assert a == b and not a == c
a.add 2
assert not a == b and a == c
~~~

Lastly, `==` is highly linked with `hash` and a specific redefinition of `==` should
usually be associated with a specific redefinition of `hash`.

ENSURE `result implies self.hash == other.hash`
`!=` is equivalent with `not ==`.
The hash code is used in many data-structures and algorithms to identify objects that might be equal.
Therefore, the precise semantic of `hash` is highly linked with the semantic of `==`
and the only law of `hash` is that `a == b implies a.hash == b.hash`.

~~~
assert (1+1).hash == 2.hash
assert 1.to_s.hash == "1".hash
~~~

`hash` (like `==`) might not be constant on some objects over time because of their evolution.

~~~
var a = [1]
var b = [1]
var c = [1,2]
assert a.hash == b.hash
a.add 2
assert a.hash == c.hash
# There is a very high probability that `b.hash != c.hash`
~~~

A specific redefinition of `==` should usually be associated with a specific redefinition of `hash`.
Note that, unfortunately, a correct definition of `hash` that is lawful with `==` is sometime tricky
and a cause of bugs.

Without redefinition, `hash` is based on the `object_id` of the instance.

~~~
var a = new Buffer
var b = a
var c = new Buffer
assert a.is_same_instance(b)
assert not a.is_same_instance(c)
assert a == c # because both buffers are empty
~~~

Obviously, the identity of an object is preserved even if the object is mutated.

~~~
var x = [1]
var y = x
x.add 2
assert x.is_same_instance(y)
~~~

Unless specific code, you should use `==` instead of `is_same_instance` because
most of the time is it the semantic (and user-defined) comparison that make sense.

Moreover, relying on `is_same_instance` on objects you do not control
might have unexpected effects when libraries reuse objects or intern them.
Unless specific code, you should not use this method but
use `hash` instead.

As its name hints it, the internal hash code, is used internally
to provide a hash value.
It is also used by the `inspect` method to loosely identify objects
and helps debugging.

~~~
var a = "Hello"
var b = a
assert a.object_id == b.object_id
~~~

The specific details of the internal hash code it let to the specific
engine. The rules are the following:

* The `object_id` MUST be invariant for the whole life of the object.
* Two living instances of the same classes SHOULD NOT share the same `object_id`.
* Two instances of different classes MIGHT share the same `object_id`.
* The `object_id` of a garbage-collected instance MIGHT be reused by new instances.
* The `object_id` of an object MIGHT be non constant across different executions.

For instance, the `nitc` compiler uses the address of the object in memory
as its `object_id`.

TODO rename in something like `internal_hash_code`

#### Debuging

This method MUST not be used by programs, it is here for debugging
only and can be removed without any notice.

TODO: rename to avoid blocking a good identifier like `output`.
This method MUST not be used by programs, it is here for debugging
only and can be removed without any notice.

TODO: rename to avoid blocking a good identifier like `output`.

~~~
assert 1.is_same_type(2)
assert "Hello".is_same_type("World")
assert not "Hello".is_same_type(2)
~~~

The method returns false if the dynamic type of `other` is a subtype of the dynamic type of `self`
(or the other way around).

Unless specific code, you should not use this method because it is inconsistent
with the fact that a subclass can be used in lieu of a superclass.

### `Sys`

> `Sys` is a singleton class, its only instance is accessible from everywhere with `sys`.

Because of this, methods that should be accessible from everywhere, like `print` or `exit`,
are defined in `Sys`.
Moreover, unless there is an ambiguity with `self`, the receiver of a call to these methods is implicitly `sys`.
Basically it means that the two following instructions are equivalent.

~~~nit
print "Hello World"
sys.print "Hello World"
~~~

## Methods Implicitly Defined in Sys

`Sys` is the class where are defined top-level methods,
i.e. those defined outside of any class like in a procedural language.
Basically it means that

~~~nitish
redef class Sys
   fun foo do print "hello"
end
~~~

is equivalent with

~~~nitish
fun foo print "hello"
~~~

As a corollary, in a top-level method, `self` (the current receiver) is always `sys`.

#### Program Execution

In a module, the instructions defined outside any classes or methods
(usually called the *main* of the module) is
an implicit definition of this `main` method.
Basically it means that the following program

~~~nit
print "Hello World"
~~~

is equivalent with

~~~nit
redef class Sys
   redef fun main do
      print "Hello World"
   end
end
~~~

When a program starts, the following implicit sequence of instructions is executed

~~~nitish
sys = new Sys
sys.run
~~~

Whereas the job of the `run` method is just to execute `main`.

The only reason of the existence of `run` is to allow modules to refine it
and inject specific work before or after the main part.

### Other

* `kernel$Bool` - Native Booleans.
* `kernel$Byte` - Native bytes.
* `kernel$Char` - Native characters.
* `kernel$Cloneable` - Something that can be cloned
* `kernel$Comparable` - The ancestor of class where objects are in a total order.
* `kernel$Discrete` - Discrete total orders.
* `kernel$Float` - Native floating point numbers.
* `kernel$Int` - Native integer numbers.
* `kernel$Numeric` - A numeric value supporting mathematical operations
* `kernel$Object` - The root of the class hierarchy.
* `kernel$Pointer` - Pointer classes are used to manipulate extern C structures.
* `kernel$Sys` - The main class of the program.
* `kernel$Task` - Task with a `main` method to be implemented by subclasses

## Core Collections

### `abstract_collection`

> TODO specify the behavior on iterators when collections are modified.

### `queue`

> Topics:

* `Queue`
* `Sequence::as_lifo`
* `Sequence::as_fifo`
* `SimpleCollection::as_random`
* `MinHeap`

### `sorter`

> In order to provide your own sort class you should define a subclass of `Comparator` with
> a custom `Comparator::compare` function and a specific `COMPARED` virtual type.

## String and Text manipulation

### `ropes`

> Ropes are a data structure introduced in a 1995 paper from
> Hans J. Boehm, Russ Atkinson and Michael Plass.

See:

> Ropes: an Alternative to Strings,
> *Software - Practice and Experience*,
> Vol. 25(12), 1315-1330 (December 1995).

The implementation developed here provides an automatic change
of data structure depending on the length of the leaves.

The length from which a `Rope` is built from a `flat` string
if defined at top-level (see `maxlen`) and can be redefined by clients
depending on their needs (e.g. if you need to bench the speed of
the creation of concat nodes, lower the size of maxlen).

A Rope as defined in the original paper is a Tree made of concatenation
nodes and containing `Flat` (that is Array-based) strings as Leaves.

Example :

~~~raw
	            Concat
	          /        \
	    Concat          Concat
	   /      \        /      \
	"My"     " Name"  " is"   " Simon."
~~~

Note that the above example is not representative of the actual implementation
of `Ropes`, since short leaves are merged to keep the rope at an acceptable
height (hence, this rope here might actually be a `FlatString` !).

## `codec_base`

> A Codec (Coder/Decoder) is a tranformer from a byte-format to another

As Nit Strings are UTF-8, a codec works as :

- Coder: From a UTF-8 string to a specified format (writing)
- Decoder: From a specified format to a UTF-8 string (reading)

## `re`

> Implemented using libc regular expressions.

The main entities are `Text::to_re` and `Regex`.

## `fixed_ints`

> All classes defined here have C-equivalents and the semantics of their
> operations are the same as C's

* Int8 => int8_t
* Int16 => int16_t
* UInt16 => uint16_t
* Int32 => int32_t
* UInt32 => uint32_t

NOTE: No UInt8 is provided as Byte is the same
SEE: kernel::Byte

HOW TO USE:
All classes can be instanciated via a literal rule.
Namely, a suffix to append after the literal integer.

* Int8 => i8
* Byte => u8
* Int16 => i16
* UInt16 => u16
* Int32 => i32
* UInt32 => u32

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.

Thanks to the contribution of:

* **Jean-Christophe Beaupré <mailto:jcbrinfo@users.noreply.github.com>**
* **Romain Chanoir <mailto:romain.chanoir@viacesi.fr>**
* **Christophe Gigax <mailto:christophe.gigax@viacesi.fr>**
* **Frédéric Vachon <mailto:fredvac@gmail.com>**
* **Jean-Sebastien Gelinas <mailto:calestar@gmail.com>**
* **Alexandre Blondin Massé <mailto:alexandre.blondin.masse@gmail.com>**
* **Johan Kayser <mailto:johan.kayser@viacesi.fr>**
* **Johann Dubois <mailto:johann.dubois@outlook.com>**
* **Julien Pagès <mailto:julien.projet@gmail.com>**
