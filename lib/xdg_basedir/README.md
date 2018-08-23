# `xdg_basedir` - Services for using the XDG Base Directory specification

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `show_basedir`](#Run-`show_basedir`)
* [Features](#Features)
* [Authors](#Authors)

This is a low-level module, it is meant to be wrapped by higher level services.

For more information, refer to the documentation of the `libxdg-basedir`
project or the official specification at:
http://standards.freedesktop.org/basedir-spec/basedir-spec-latest.html

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `core` - Nit common library of core classes and methods

### Run `show_basedir`

Compile `show_basedir` with the following command:

~~~bash
nitc ./show_basedir.nit
~~~

## Features

![Diagram for `xdg_basedir`](uml-xdg_basedir.svg)

* `show_basedir` - Prints the local base directories as per the XDG Base Directory specification

Then run it with:

~~~bash
./show_basedir
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
