# `md5` - Native MD5 digest implementation as `Text::md5`

* [Features](#Features)
* [`Text::md5` - MD5 digest of `self`](#`Text::md5`---MD5-digest-of-`self`)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

## Features

### `Text::md5` - MD5 digest of `self`

~~~
assert "".md5 == "d41d8cd98f00b204e9800998ecf8427e"
assert "a".md5 == "0cc175b9c0f1b6a831c399e269772661"
assert "abc".md5 == "900150983cd24fb0d6963f7d28e17f72"
~~~

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
