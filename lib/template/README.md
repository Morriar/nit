# `template` - Basic template system

* [Features](#Features)
* [`macro` - String templating using macros.](#`macro`---String-templating-using-macros.)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

The recommended usage of this framework is to define specific subclasses of
Template to provide structural elements on the final document

Example from `template::tmpl_composer`:

~~~
module tmpl_composer is example

import template

### Here, definition of the specific templates

# The root template for composers
class TmplComposers
	super Template

	# Short list of composers
	var composers = new Array[TmplComposer]

	# Detailled list of composers
	var composer_details = new Array[TmplComposerDetail]

	# Add a composer in both lists
	fun add_composer(firstname, lastname: String, birth, death: Int)
	do
		composers.add(new TmplComposer(lastname))
		composer_details.add(new TmplComposerDetail(firstname, lastname, birth, death))
	end

	redef fun rendering do
		add """
COMPOSERS
=========
"""
		add_all composers
		add """

DETAILS
=======
"""
		add_all composer_details
	end
end

# A composer in the short list of composers
class TmplComposer
	super Template

	# Short name
	var name: String

	redef fun rendering do add "- {name}\n"
end

# A composer in the detailled list of composers
class TmplComposerDetail
	super Template

	var firstname: String
	var lastname: String
	var birth: Int
	var death: Int

	redef fun rendering do add """

COMPOSER: {{{firstname}}} {{{lastname}}}
BIRTH...: {{{birth}}}
DEATH...: {{{death}}}
"""

end

### Here a simple usage of the templates

var f = new TmplComposers
f.add_composer("Johann Sebastian", "Bach", 1685, 1750)
f.add_composer("George Frideric", "Handel", 1685, 1759)
f.add_composer("Wolfgang Amadeus", "Mozart", 1756, 1791)
f.write_to(stdout)
~~~

## Features

![Diagram for `template`](uml-template.svg)

### `macro` - String templating using macros.

There is plenty of macro/templating tools in the worl,
yet another one.

See `TemplateString` for more details.

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
