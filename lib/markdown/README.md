# `markdown` - A markdown parser for Nit

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `nitmd`](#Run-`nitmd`)
* [Features](#Features)
* [`wikilinks` - Wikilinks handling.](#`wikilinks`---Wikilinks-handling.)
* [Other features](#Other-features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `config` - Configuration options for nit tools and apps
* `template` - Basic template system

### Run `nitmd`

Compile `nitmd` with the following command:

~~~bash
nitc ./nitmd.nit
~~~

Then run it with:

~~~bash
nitmd [-t format] <file.md>
~~~

Options:

~~~bash
* -h, -?, --help		Show this help message.
* -t, --to		Specify output format (html, md, man).
~~~

## Features

![Diagram for `markdown`](uml-markdown.svg)

### `wikilinks` - Wikilinks handling.

Wikilinks are on the form `[[link]]`.
They can also contain a custom title with the syntax `[[title|link]]`.

By importing this module, you enable the `MarkdownProcessor` to recognize
`TokenWikiLink` but nothing will happen until you define a
`Decorator::add_wikilink` customized to your applciation domain.

## Other features

* `decorators` - Decorators for `markdown` parsing.
* `man` - Simple *groff* decorator restricted for manpages.
* `nitmd` - A Markdown parser for Nit.

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
