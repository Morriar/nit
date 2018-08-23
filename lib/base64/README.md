# `base64` - Offers the base 64 encoding and decoding algorithms

* [Features](#Features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

## Features

* `Text::check_base64` - Is `self` a well-formed Base64 entity ?
* `CString::check_base64` - Is `self` a well-formed Base64 entity ?
* `Bytes::check_base64` - Is `self` a well-formed Base64 entity ?
* `Bytes::decode_base64` - Decodes the receiver string to base64 using a custom padding character.
* `Text::decode_base64` - Decodes the receiver string to base64 using a custom padding character.
* `Text::encode_base64` - Encodes the receiver string to base64 using a custom padding character.
* `Bytes::encode_base64` - Encodes the receiver string to base64 using a custom padding character.
* `CString::is_base64` - Is `self` a well-formed Base64 entity ?
* `Text::is_base64` - Is `self` a well-formed Base64 entity ?
* `Bytes::is_base64` - Is `self` a well-formed Base64 entity ?
* `Int::is_base64_char` - Is `self` a valid Base64 character ?
* `Char::is_base64_char` - Is `self` a valid Base64 character ?
* `Int::to_base64_char` - Returns the `base64` equivalent of `self`

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Lucas Bajolet <mailto:r4pass@hotmail.com>**.
