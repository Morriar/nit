# `crapto` - [[ini-desc: crapto]]

[[toc: crapto]]

## Features

[[uml: crapto | format: svg, mentities: crapto::crapto;crapto::english_utils;crapto::xor]]

### `Text::english_scoring` - Score `self` according to english's letter frequency.

[[doc: crapto::english_utils::Text::english_scoring | no-synopsis]]

### `RepeatingKeyXorCipher::find_key` - Attempts to find the key by using frequency analysis on the resulting plaintexts.

[[doc: crapto::xor::RepeatingKeyXorCipher::find_key | no-synopsis]]

Example from `crapto::repeating_key_xor_solve`:

[[code: crapto::repeating_key_xor_solve]]

## Other features

[[features: crapto | mentities: crapto::xor::SingleByteXorCipher::find_key]]

## Authors

This project is maintained by [[ini-maintainer: crapto]].
