# A markdown parser for Nit

> name: markdown

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> name: markdown

## Usage

`nitmd` can be used as a standalone tool:

> span: markdown::nitmd

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

> span: markdown

## Differences with Markdown specification

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> name: markdown::tests

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

## Testing

The NitUnit test suite can be found in `tests`.

> span: markdown>tests
> name: markdown::tests

Minimalists tests are prefixed with `test_process*`. All tests from daringfireball are prefixed with `test_daring*`.

> name: markdown::tests
> match: markdown::tests
> match: markdown::tests::test_process*
> match: markdown::tests::test_daring*

Run the test suite:

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

> name: markdown::tests
