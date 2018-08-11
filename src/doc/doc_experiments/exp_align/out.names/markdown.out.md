# A markdown parser for Nit

> name: markdown

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> name: markdown
> name: markdown

## Usage

`nitmd` can be used as a standalone tool:

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

## Differences with Markdown specification

> name: markdown
> name: markdown>
> name: markdown::markdown
> name: markdown
> name: markdown>
> name: markdown::markdown

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> name: markdown
> name: core>text>
> name: core>text>
> name: markdown>
> name: core::text
> name: core::text
> name: markdown::markdown
> name: core::Text
> name: core::Text
> name: markdown
> name: core>text>
> name: core>text>
> name: markdown>
> name: core::text
> name: core::text
> name: markdown::markdown
> name: core::Text
> name: core::Text
> name: core>text>
> name: core::text
> name: core::Text
> name: core>text>
> name: core::text
> name: core::Text
> name: markdown
> name: core>text>
> name: markdown>
> name: core::text
> name: markdown::markdown
> name: core::Text
> name: markdown
> name: core>text>
> name: markdown>
> name: core::text
> name: markdown::markdown
> name: core::Text

## Testing

> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>

The NitUnit test suite can be found in `tests`.

> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>

Run the test suite:

> name: markdown>tests>
> name: core>collection>tests>
> name: markdown>tests>
> name: core>collection>tests>

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

