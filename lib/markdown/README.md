# `markdown` - A markdown parser for Nit

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `config` - Configuration options for nit tools and apps
* `template` - Basic template system

### Run `nitmd`

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

## Running the tests

The NitUnit test suite can be found in `tests`.

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

Run the test suite:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
