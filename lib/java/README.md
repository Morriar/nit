# `java` - Supporting services for the FFI with Java and to access Java libraries

* [Features](#Features)
* [`collections` - Basic Java collections](#`collections`---Basic-Java-collections)
* [`ffi_support` - Core supporting services for the FFI with Java](#`ffi_support`---Core-supporting-services-for-the-FFI-with-Java)
* [`io` - Services from the `java.io` package](#`io`---Services-from-the-`java.io`-package)
* [Authors](#Authors)

This modules relies on `Sys::jvm`, `Sys::jni_env` and
`Sys::create_default_jvm` to get a handle on a JVM. You can adapt the
behavior of the FFI and services in this module by redefing
`Sys::create_default_jvm` and supply your own JVM object. You can manage
multiple java thread by switching the current environment in a redef
of `Sys::jni_env`, and multiple JVM using `Sys::jvm`.

See also, the module `jvm` to control the JVM instances and access JNI functions.
You can use it to further customize the behavior of your code.

## Features

![Diagram for `java`](uml-java.svg)

### `collections` - Basic Java collections

~~~
var coll = new JavaArray(2)

assert coll[0].is_java_null
coll[0] = "zero".to_java_string
coll[1] = "one".to_java_string

assert coll.length == 2
assert coll.first.to_s == "zero"
assert coll[1].to_s == "one"
assert [for e in coll do e.to_s] == ["zero", "one"]
~~~

### `ffi_support` - Core supporting services for the FFI with Java

This module *must* be imported by modules using the Java FFI.
Some might prefer to import the whole `java` package as it provides
other useful services.

### `io` - Services from the `java.io` package

This module is used by `android::assets_and_resources` and `android::audio`.

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
