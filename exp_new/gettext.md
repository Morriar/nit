# `gettext` - Internationalization of Strings using `gettext` library

* [Features](#Features)
* [`String::get_translation` - Gets the translation of `self` via gettext from `dir` using `domain`](#`String::get_translation`---Gets-the-translation-of-`self`-via-gettext-from-`dir`-using-`domain`)
* [Authors](#Authors)

## Features

### `String::get_translation` - Gets the translation of `self` via gettext from `dir` using `domain`

`domain`: Gettext domain, i.e. file/module name
`dir`: Where the locale/LC_MESSAGES folder for this domain is located

Example from `gettext::langannot`:

~~~
# Sample module showing the use of the i18n annotation
module langannot is example, i18n

import gettext

# Some class
class X
	# Some method
	fun foo: String do
		return "This String is a test"
	end
end

var t = new X
print t.foo

print "This String is a test"

print """Multiline string

example


of the language annotation capacities
"""

var s = "example"

print "This superstring {s} rocks"

print "This superstring %1 rocks".format(s)
~~~

## Authors

This project is maintained by **Lucas Bajolet <mailto:r4pass@hotmail.com>**.
