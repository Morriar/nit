# `ini` - Handle ini config files

* [Features](#Features)
* [`ConfigTree` - A configuration tree that can read and store data in ini format](#`ConfigTree`---A-configuration-tree-that-can-read-and-store-data-in-ini-format)
* [Authors](#Authors)

Write example:

    var config = new ConfigTree("config.ini")
    config["goo"] = "goo"
    config["foo.bar"] = "foobar"
    config["foo.baz"] = "foobaz"
    config.save
    assert config.to_map.length == 3

Read example:

    config = new ConfigTree("config.ini")
    assert config.has_key("foo.bar")
    assert config["foo.bar"] == "foobar"

## Features

### `ConfigTree` - A configuration tree that can read and store data in ini format

Write example:

    var config = new ConfigTree("config.ini")
    config["goo"] = "goo"
    config["foo.bar"] = "foobar"
    config["foo.baz"] = "foobaz"
    config.save
    assert config.to_map.length == 3

Read example:

    config = new ConfigTree("config.ini")
    assert config.has_key("foo.bar")
    assert config["foo.bar"] == "foobar"

Properties:

* `ConfigTree::[]` - Get the config value for `key`
* `ConfigTree::[]=` - Set `value` at `key`
* `ConfigTree::at` - Get the config values under `key`
* `ConfigTree::has_key` - Is `key` in the config?
* `ConfigTree::load` - Reload config from file
* `ConfigTree::save` - Save config to file
* `ConfigTree::to_map` - Get `self` as a Map of `key`, `value`

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
