# `markdown` - A markdown parser for Nit

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `nitmd`](#Run-`nitmd`)
* [Differences with Markdown specification](#Differences-with-Markdown-specification)
* [`MarkdownProcessor`](#`MarkdownProcessor`)
* [`wikilinks`](#`wikilinks`)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `config` - Configuration options for nit tools and apps
* `template` - Basic template system

### Run `nitmd`

![Diagram for `markdown`](uml-markdown-2.svg)

`nitmd` can be used as a standalone tool:

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

Or you can use it programmatically by importing the `markdown` module.

## Differences with Markdown specification

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

## `MarkdownProcessor`

> Blocks are then outputed by an `MarkdownEmitter`.

Usage:

var proc = new MarkdownProcessor
var html = proc.process("**Hello World!**")
assert html == "<p><strong>Hello World!</strong></p>\n"

SEE: `String::md_to_html` for a shortcut.

## `wikilinks`

> Wikilinks are on the form `[[link]]`.
> They can also contain a custom title with the syntax `[[title|link]]`.

By importing this module, you enable the `MarkdownProcessor` to recognize
`TokenWikiLink` but nothing will happen until you define a
`Decorator::add_wikilink` customized to your applciation domain.

## Running the tests

The NitUnit test suite can be found in `tests`.

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

Run the test suite:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
