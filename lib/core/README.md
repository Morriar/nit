# `core` - Nit common library of core classes and methods

* [Features](#Features)
* [`fixed_ints` - Basic integers of fixed-precision](#`fixed_ints`---Basic-integers-of-fixed-precision)
* [`kernel` - Most basic classes and methods.](#`kernel`---Most-basic-classes-and-methods.)
* [`queue` - Queuing data structures and wrappers](#`queue`---Queuing-data-structures-and-wrappers)
* [`re` - Regular expression support for all services based on `Pattern`](#`re`---Regular-expression-support-for-all-services-based-on-`Pattern`)
* [Other features](#Other-features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

## Features

![Diagram for `core`](uml-core.svg)

### `fixed_ints` - Basic integers of fixed-precision

All classes defined here have C-equivalents and the semantics of their
operations are the same as C's

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

### `kernel` - Most basic classes and methods.

This module is the root of the module hierarchy.
It provides a very minimal set of classes and services used as a
foundation to define other classes and methods.

### `queue` - Queuing data structures and wrappers

Topics:

* `Queue`
* `Sequence::as_lifo`
* `Sequence::as_fifo`
* `SimpleCollection::as_random`
* `MinHeap`

### `re` - Regular expression support for all services based on `Pattern`

Implemented using libc regular expressions.

The main entities are `Text::to_re` and `Regex`.

## Other features

* `bitset` - Services to handle BitSet
* `bytes` - Services for byte streams and arrays
* `environ` - Access to the environment variables of the process
* `error` - Standard error-management infrastructure.
* `exec` - Invocation and management of operating system sub-processes.
* `file` - File manipulations (create, read, write, etc.)
* `gc` - Access to the Nit internal garbage collection mechanism
* `math` - Mathematical operations
* `numeric` - Advanced services for `Numeric` types
* `protocol`
* `stream` - Input and output streams of characters
* `time` - Management of time and dates

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
