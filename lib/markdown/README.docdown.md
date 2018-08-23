# `markdown` - A markdown parser for Nit

[[toc: markdown]]

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: markdown]]

### Run `nitmd`

[[uml: markdown | format: svg, mentities: markdown::nitmd;markdown::wikilinks;markdown::man;markdown::decorators;markdown::markdown]]

`nitmd` can be used as a standalone tool:

[[main-compile: markdown::nitmd]]

Then run it with:

[[main-run: markdown::nitmd]]

Options:

[[main-opts: markdown::nitmd]]

Or you can use it programmatically by importing the `markdown` module.

## Differences with Markdown specification

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

## [[sign: markdown::MarkdownProcessor]]

> [[doc: markdown::MarkdownProcessor]]

## [[sign: markdown::wikilinks]]

> [[doc: markdown::wikilinks]]

## Running the tests

The NitUnit test suite can be found in `tests`.

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

Run the test suite:

[[testing: markdown]]

## Authors

This project is maintained by [[ini-maintainer: markdown]].
