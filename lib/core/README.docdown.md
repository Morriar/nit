# `core` - Nit common library of core classes and methods

[[toc: core]]

Core classes and methods used by default by Nit programs and libraries.

## Core Basic Types and Operations

[[uml: core | format: svg, mentities: core::codecs;core::text;core::bitset;core::gc;core::codec_base;core::core;core::error;core::environ;core::protocol;core::iso8859_1;core::utf8;core::collection;core::numeric;core::range;core::time;core::exec;core::union_find;core::math;core::queue;core::fixed_ints_text;core::hash_collection;core::sorter;core::circular_array;core::native;core::list;core::re;core::abstract_collection;core::string_search;core::kernel;core::stream;core::fixed_ints;core::array;core::ropes;core::file;core::bytes;core::abstract_text;core::flat]]

## [[sign: core::kernel]]

> [[doc: core::kernel]]

### [[sign: core::Object]]

> [[doc: core::Object]]

#### Equality

[[doc: core::Object::==]]
[[doc: core::Object::!=]]
[[doc: core::Object::hash]]
[[doc: core::Object::is_same_instance]]
[[doc: core::Object::object_id]]

#### Debuging

[[doc: core::Object::output]]
[[doc: core::Object::output_class_name]]
[[doc: core::Object::is_same_type]]

### [[sign: core::Sys]]

> [[doc: core::Sys]]

#### Program Execution

[[doc: core::Sys::main]]
[[doc: core::Sys::run]]

### Other

[[defs: kernel]]

## Core Collections

[[doc: core::collection]]

### [[sign: core::abstract_collection]]

> [[doc: core::abstract_collection]]

### [[sign: core::queue]]

> [[doc: core::queue]]

### [[sign: core::sorter]]

> [[doc: core::sorter]]

## String and Text manipulation

[[doc: core::text]]

### [[sign: core::ropes]]

> [[doc: core::ropes]]

## [[sign: core::codec_base]]

> [[doc: core::codec_base]]

## [[sign: core::re]]

> [[doc: core::re]]

## [[sign: core::fixed_ints]]

> [[doc: core::fixed_ints]]

## Running the tests

Run the nitunit automated tests with the following command:

[[testing: core]]

## Authors

This project is maintained by [[ini-maintainer: core]].

Thanks to the contribution of:
[[ini-contributors: core]]
