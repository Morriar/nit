# `counter` - Simple numerical statistical analysis and presentation

* [Features](#Features)
* [`Counter` - A counter counts occurrences of things](#`Counter`---A-counter-counts-occurrences-of-things)
* [Authors](#Authors)

~~~
var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
assert c["a"]   == 2
assert c["b"]   == 3
assert c["c"]   == 1
assert c["d"]   == 0
~~~

The counter class can also be used to gather statistical informations.

~~~~
assert c.length == 3   # because 3 distinct values
assert c.max    == "b" # because "b" has the most count (3)
assert c.avg    == 2.0 # because it is the mean of the counts
~~~~

## Features

### `Counter` - A counter counts occurrences of things

~~~
var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
assert c["a"]   == 2
assert c["b"]   == 3
assert c["c"]   == 1
assert c["d"]   == 0
~~~

The counter class can also be used to gather statistical informations.

~~~~
assert c.length == 3   # because 3 distinct values
assert c.max    == "b" # because "b" has the most count (3)
assert c.avg    == 2.0 # because it is the mean of the counts
~~~~

Properties:

* `Counter::avg` - Values average (aka. arithmetic mean)
* `Counter::dec` - Decrement the value of `e` by 1
* `Counter::dec_all` - Decrement the value for each element of `es`
* `Counter::entropy` - The information entropy (Shannon entropy) of the elements in the counter (in bits).
* `Counter::from` - A new Counter initialized with `inc_all`.
* `Counter::inc` - Count one more occurrence of `e`
* `Counter::inc_all` - Count one more for each element of `es`
* `Counter::max` - Return the element with the highest value (aka. the mode)
* `Counter::min` - Return the couple with the lowest value
* `Counter::pack` - Packs elements into separate arrays based on their occurences
* `Counter::print_content` - Prints the content of the counter along with statistics
* `Counter::print_elements` - Display up to `count` most used elements and `count` least used elements
* `Counter::print_summary` - Display statistical information
* `Counter::sort` - Return an array of elements sorted by occurrences
* `Counter::std_dev` - The standard derivation of the counter values

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
