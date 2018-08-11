# A markdown parser for Nit

> theme: api
> theme: title

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> theme: api
> theme: intro

## Usage

> theme: usage

`nitmd` can be used as a standalone tool:

> theme: api
> theme: usage

~~~bash
$ nitmd file.md
~~~

> theme: usage

Or you can use it programmatically by importing the `markdown` module.

> theme: api

## Differences with Markdown specification

> theme: api
> theme: features

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> theme: api
> theme: tests

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> theme: api
> theme: features

## Testing

> theme: api
> theme: tests

The NitUnit test suite can be found in `tests`.

> theme: api
> theme: tests

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> theme: api
> theme: tests

Run the test suite:

> theme: api
> theme: tests

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

> theme: tests

