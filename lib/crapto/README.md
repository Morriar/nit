# `crapto` - Cryptographic attacks and utilities

* [Features](#Features)
* [`Text::english_scoring` - Score `self` according to english's letter frequency.](#`Text::english_scoring`---Score-`self`-according-to-english's-letter-frequency.)
* [`RepeatingKeyXorCipher::find_key` - Attempts to find the key by using frequency analysis on the resulting plaintexts.](#`RepeatingKeyXorCipher::find_key`---Attempts-to-find-the-key-by-using-frequency-analysis-on-the-resulting-plaintexts.)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `crapto`](uml-crapto.svg)

### `Text::english_scoring` - Score `self` according to english's letter frequency.

    assert "aaaa".english_scoring > "bbbb".english_scoring

### `RepeatingKeyXorCipher::find_key` - Attempts to find the key by using frequency analysis on the resulting plaintexts.

`min_keylength` and `max_keylength` are limits as to what key lengths are tested.
`considered_keylength_count` is the number of best key lengths that are kept to be
analysed by the SingleByteXor frequency analysis.

Example from `crapto::repeating_key_xor_solve`:

~~~
module repeating_key_xor_solve is example

import base64
import crapto

# Check usage
if args.length != 1 then
	print "Usage: repeating_key_xor_solve <cipher_file>"
	exit 1
end

# Read the cipher from the file
var cipher_bytes = args[0].to_path.read_all_bytes.decode_base64

# Create a RepeatingKeyXorCipher object to manipulate your ciphertext
var xorcipher = new RepeatingKeyXorCipher
xorcipher.ciphertext = cipher_bytes

# Try to find the best candidate key
xorcipher.find_key

# Decrypt the cipher according to the found key
xorcipher.decrypt

# Check the resulting plaintext out...
print xorcipher.plaintext
~~~

## Other features

* `SingleByteXorCipher::find_key` - Tries to find key using frequency analysis on all possible plaintexts.

## Authors

This project is maintained by **Philippe Pépos Petitclerc <mailto:ppeposp@gmail.com>**.
