# `opts` - Management of options on the command line

* [Features](#Features)
* [`OptionEnum` - An option to choose from an enumeration](#`OptionEnum`---An-option-to-choose-from-an-enumeration)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `opts`](uml-opts.svg)

### `OptionEnum` - An option to choose from an enumeration

Declare an enumeration option with all its possible values as an array.
Once the arguments are processed, `value` is set as the index of the selected value, if any.

Properties:

* `OptionEnum::init` - Init a new OptionEnum from `values` with a `help` message and `names`.
* `OptionEnum::value_name` - Get the value name from `values`.

## Other features

* `Option` - Super class of all option's class
* `OptionArray` - An option with an array as parameter
* `OptionBool` - A boolean option, `true` when present, `false` if not
* `OptionContext` - Context where the options process
* `OptionCount` - A count option. Count the number of time this option is present
* `OptionFloat` - An option with a Float as parameter
* `OptionInt` - An option with an Int as parameter
* `OptionParameter` - Option with one parameter (mandatory by default)
* `OptionString` - An option with a `String` as parameter
* `OptionText` - Not really an option. Just add a line of text when displaying the usage

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
