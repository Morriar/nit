# A markdown parser for Nit

> match: markdown

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> match: markdown
> match: markdown::MarkdownProcessor::find_token

## Usage

> match: markdown::MarkdownProcessor

`nitmd` can be used as a standalone tool:

> match: markdown::nitmd

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

> match: markdown

## Differences with Markdown specification

> match: markdown

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> match: markdown>tests>

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> match: markdown::HeadLine::title
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title
> match: markdown::LinkRef::title
> match: markdown::TestBlock::test_remove_quote_prefix
> match: markdown::markdown::BlockQuote::remove_block_quote_prefix
> match: markdown
> match: markdown::LinkRef::with_title

## Testing

> match: markdown>tests>

The NitUnit test suite can be found in `tests`.

> match: markdown::MarkdownProcessor::find_token
> match: markdown>tests>

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> match: markdown::TestBlock::test_remove_quote_prefix
> match: markdown::markdown::Text::is_link_prefix
> match: markdown::markdown::Text::html_link_prefixes
> match: markdown::markdown::BlockQuote::remove_block_quote_prefix

Run the test suite:

> match: markdown>tests>

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

