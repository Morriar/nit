# A markdown parser for Nit

> match: markdown
> match: markdown>
> match: markdown::markdown

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> match: markdown
> match: markdown>
> match: markdown::markdown
> match: markdown
> match: markdown>
> match: markdown::markdown

## Usage

`nitmd` can be used as a standalone tool:

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

## Differences with Markdown specification

> match: markdown
> match: markdown>
> match: markdown::markdown

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> match: markdown>tests>
> match: core>collection>tests>
> match: markdown>tests>
> match: core>collection>tests>

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> match: core>text>
> match: core::text
> match: markdown::MDBlock::text
> match: markdown::MDLine::text
> match: core::Text
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title
> match: core>text>
> match: core::text
> match: markdown::MDBlock::text
> match: markdown::MDLine::text
> match: core::Text
> match: markdown
> match: markdown>
> match: markdown::markdown
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title

## Testing

> match: markdown>tests>
> match: core>collection>tests>

The NitUnit test suite can be found in `tests`.

> match: markdown>tests>
> match: core>collection>tests>

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> match: markdown>tests>
> match: core>collection>tests>
> match: markdown>tests>
> match: core>collection>tests>

Run the test suite:

> match: markdown>tests>
> match: core>collection>tests>

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

