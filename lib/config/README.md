# `config` - Configuration options for nit tools and apps

* [Features](#Features)
* [`Config` - Basic configuration class](#`Config`---Basic-configuration-class)
* [`IniConfig` - Configuration class based on a INI file.](#`IniConfig`---Configuration-class-based-on-a-INI-file.)
* [Authors](#Authors)

This module provides basic services for options handling in your Nit programs.

## Basic configuration holder

The `Config` class can be used as a simple option holder and processor:

~~~
import config

# Create a new config option
var opt_my = new OptionString("My option", "--my")

# Create the config and add the option
var config = new Config
config.add_option(opt_my)

# Parse the program arguments, usually `args`
config.parse_options(["--my", "myOption", "arg1", "arg2"])

# Access the options and args
assert opt_my.value == "myOption"
assert config.args == ["arg1", "arg2"]
~~~

## Custom configuration class

Instead of using basic `Config` instances, it is better to define new sublcasses
to store options and define custom services.

~~~
import config

class MyConfig
	super Config

	var opt_my = new OptionString("My option", "--my")

	init do
		super
		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
		add_option(opt_my)
	end

	fun my: String do return opt_my.value or else "Default value"
end

var config = new MyConfig
config.parse_options(["--my", "myOption", "arg1", "arg2"])

assert config.my == "myOption"
assert config.args == ["arg1", "arg2"]
~~~

We define the `my` method to provide an elegant shortcut to `opt_my.value`
and define the default value if the option was not set by the user.

The `tool_description` attribute is used to set the `usage` header printed when
the user request the `help` message.

~~~
config.parse_options(["-h"])
if config.help then
	config.usage
	exit 0
end
~~~

This will display the tool usage like this:

~~~raw
Usage: MyExample [OPTION]... [ARGS]...
 -h, --help   Show this help message
 --my         My option
~~~

## Configuration with `ini` file

The `IniConfig` class extends `Config` to add an easy way to link your
configuration to an ini file.

~~~
class MyIniConfig
	super IniConfig

	var opt_my = new OptionString("My option", "--my")

	init do
		super
		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
		opts.add_option(opt_my)
	end

	fun my: String do return opt_my.value or else ini["my"] or else "Default"
end
~~~

This time, we define the `my` method to return the option value or the ini
if no option was passed. Finally, if no ini value can be found, we return the
default value.

By default, `IniConfig` looks at a `config.ini` file in the execution directory.
This can be overrided in multiple ways.

First by the app user by setting the `--config` option:

~~~
var config = new MyIniConfig
config.parse_options(["--config", "my_config.ini"])

assert config.config_file == "my_config.ini"
~~~

Default config file can also be changed by the library client through the
`default_config_file` attribute:

~~~
config = new MyIniConfig
config.default_config_file = "my_config.ini"
config.parse_options(["arg"])

assert config.config_file == "my_config.ini"
~~~

Or by the library developper in the custom config class:

~~~
class MyCustomIniConfig
	super IniConfig

	redef var default_config_file = "my_config.ini"
end

var config = new MyCustomIniConfig
config.parse_options(["arg"])

assert config.config_file == "my_config.ini"
~~~

## Features

### `Config` - Basic configuration class

~~~
import config

class MyConfig
	super Config

	var opt_my = new OptionString("My option", "--my")

	init do
		super
		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
		opts.add_option(opt_my)
	end

	fun my: String do return opt_my.value or else "Default value"
end

var config = new MyConfig
config.parse_options(["--my", "hello", "arg1", "arg2"])
assert config.my == "hello"
assert config.args == ["arg1", "arg2"]
~~~

Properties:

* `Config::add_option` - Add an option to `self`
* `Config::args` - Return the remaining args once options are parsed by `from_args`
* `Config::help` - Was the `--help` option requested?
* `Config::parse_options` - Initialize `self` options from `args`
* `Config::stub_man_options` - Generate a manpage stub from `self`
* `Config::usage` - Display `tool_description` and options usage in console

### `IniConfig` - Configuration class based on a INI file.

~~~
class MyIniConfig
	super IniConfig

	var opt_my = new OptionString("My option", "--my")

	init do
		super
		tool_description = "Usage: MyExample [OPTION]... [ARGS]..."
		opts.add_option(opt_my)
	end

	fun my: String do return opt_my.value or else ini["my"] or else "Default"
end

var config = new MyIniConfig
config.default_config_file = "my_config.ini"
config.parse_options(args)

if config.help then
	config.usage
	exit 0
end

assert config.my == "Default"
~~~

Properties:

* `IniConfig::config_file` - Return the config file path from options or the default

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
