# `hash_debug` - Inject behavior analysis to hash-collections (HashMap, HashSet, etc.)

This module helps to detect, and track bad behavior on hash-collections,
especially collisions.

Simple usage:

1. compile your program with `-m hash_debug`
2. execute your program.

Advanced usage:

import this module and use the functions `Sys::show_hash_stats` and
`Sys::clear_hash_stats` at strategic points.

You can also use some dynamic call-graph tools (like valgrind) and look
at callers of `HashCollection::gt_collide` and `HashCollection::st_collide`.

## Features

* `Sys::clear_hash_stats` - Reset the hash statistics to 0
* `Sys::show_hash_stats` - Force the display of the current hash statistics

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
