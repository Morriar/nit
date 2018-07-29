# A markdown parser for Nit

> match: markdown
> match: markdown::markdown
> match: markdown>
> match: markdown::MDLine
> match: markdown::Line
> match: markdown::MDBlock

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> match: markdown
> match: markdown::markdown
> match: markdown>
> match: markdown::BlockXML
> match: markdown::Token::char
> match: markdown::MDLine

## Usage

> match: markdown::markdown::BlockHeadline::start
> match: markdown::MDLine
> match: markdown>tests>
> match: markdown::Line
> match: markdown::TestBlock

`nitmd` can be used as a standalone tool:

> match: markdown>
> match: markdown
> match: markdown::BlockXML
> match: markdown::BlockFence
> match: markdown::BlockNone

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

> match: markdown
> match: markdown>
> match: markdown::MDLine
> match: markdown::BlockXML
> match: markdown::MarkdownProcessor::ext_mode

## Differences with Markdown specification

> match: markdown
> match: markdown::markdown
> match: markdown::MDLine
> match: markdown>
> match: markdown::Line
> match: markdown::MDBlock

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> match: markdown>tests>
> match: markdown>
> match: markdown
> match: markdown::nitmd
> match: markdown::test_wikilinks

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> match: markdown
> match: markdown::markdown
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title
> match: markdown::MDBlock::text
> match: markdown::MDLine::text
> match: markdown>
> match: markdown::TokenLinkOrImage::comment
> match: markdown::TokenImage
> match: markdown::MDLine

## Testing

> match: markdown>tests>
> match: markdown>
> match: markdown
> match: markdown::test_wikilinks

The NitUnit test suite can be found in `tests`.

> match: markdown>tests>
> match: markdown>
> match: markdown
> match: markdown::BlockXML
> match: markdown::MarkdownProcessor::find_token
> match: markdown::test_wikilinks

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> match: markdown>tests>
> match: markdown>
> match: markdown
> match: markdown::markdown::Text::is_link_prefix
> match: markdown::test_wikilinks
> match: markdown::BlockXML

Run the test suite:

> match: markdown>tests>
> match: markdown>
> match: markdown
> match: markdown::test_wikilinks

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

