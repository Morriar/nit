# `c` - Structures and services for compatibility with the C language

## Features

![Diagram for `c`](uml-c.svg)

* `CArray` - A thin wrapper around a `NativeCArray` adding length information
* `CByteArray` - Wrapper around an array of `unsigned char` in C (`unsigned char*`) with length and destroy state
* `CCStringArray` - Wrapper around an array of `CString` in C (`char**`) with length and destroy state.
* `CIntArray` - Wrapper around an array of `int` in C (`int*`) with length and destroy state
* `CUInt16Array` - Wrapper of a C array of type `uint16_t*` with length and destroy state
* `NativeCArray` - A native C array, as in a pointer to the first element of the array
* `NativeCByteArray` - An array of `unsigned char` in C (`unsigned char*`)
* `NativeCIntArray` - An array of `int` in C (`int*`)
* `NativeCStringArray` - An array of `CString` in C (`char**`)
* `NativeCUInt16Array` - An array of `uint16_t` in C

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
