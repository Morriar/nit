# `sha1` - Provides methods to compute the SHA1 hash of a String

* [Features](#Features)
* [`Text::sha1` - Computes the SHA1 of the receiver](#`Text::sha1`---Computes-the-SHA1-of-the-receiver)
* [`Text::sha1_hexdigest` - Computes the SHA1 of the receiver.](#`Text::sha1_hexdigest`---Computes-the-SHA1-of-the-receiver.)
* [`Text::is_sha1_digest` - Is `self` a SHA-1 hexdigest?](#`Text::is_sha1_digest`---Is-`self`-a-SHA-1-hexdigest?)
* [Authors](#Authors)

## Features

### `Text::sha1` - Computes the SHA1 of the receiver

Returns a digest of 20 bytes as a CString,
note that all the characters are not necessarily ASCII.
If you want the hex string version of the digest, use
sha1_hexdigest.

    import base64
    assert "The quick brown fox jumps over the lazy dog".sha1 == [0x2F, 0xD4, 0xE1, 0xC6, 0x7A, 0x2D, 0x28, 0xFC, 0xED, 0x84, 0x9E, 0xE1, 0xBB, 0x76, 0xE7, 0x39, 0x1B, 0x93, 0xEB, 0x12]

### `Text::sha1_hexdigest` - Computes the SHA1 of the receiver.

Returns a 40 char String containing the Hexadecimal
Digest in its Char form.

    assert "The quick brown fox jumps over the lazy dog".sha1_hexdigest == "2FD4E1C67A2D28FCED849EE1BB76E7391B93EB12"

### `Text::is_sha1_digest` - Is `self` a SHA-1 hexdigest?

~~~nit
assert "2FD4E1C67A2D28FCED849EE1BB76E7391B93EB12".is_sha1_digest
assert not "Not a digest".is_sha1_digest
assert not "2FD4E1C67A2D28FCED849EE1B76E7391B93EB12".is_sha1_digest
assert not "2FD4E1C67A2D28FCED849EE1UB76E7391B93EB12".is_sha1_digest
~~~

## Authors

This project is maintained by **Lucas Bajolet <mailto:r4pass@hotmail.com>**.
