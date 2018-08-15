# A markdown parser for Nit

> match: markdown
> match: markdown::Line
> match: markdown::nitmd
> match: markdown::Block
> match: markdown::MDLine
> match: markdown::Token
> match: markdown::MDBlock
> match: markdown::LineList
> match: markdown::TokenLink
> match: markdown::BlockListItem
> match: markdown::LineEmpty
> match: markdown::LineCode
> match: markdown::BlockQuote
> match: markdown::BlockList
> match: markdown::BlockCode
> match: markdown::BlockHeadline
> match: markdown::LineHeadline
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::MdDecorator
> match: markdown::TokenEscape
> match: markdown::BlockParagraph
> match: markdown::BlockRuler
> match: markdown::LineOther
> match: markdown::LineFence
> match: markdown::TokenImage
> match: markdown::LineHR
> match: markdown::LineHeadline1
> match: markdown::BlockOrderedList
> match: markdown::LineHeadline2
> match: markdown::ManDecorator
> match: markdown::BlockUnorderedList
> match: markdown::BlockXML
> match: markdown::TokenStrike
> match: markdown::BlockFence
> match: markdown::BlockNone
> match: markdown::MarkdownProcessor
> match: markdown::test_wikilinks
> match: markdown::test_markdown
> match: markdown::decorators

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> match: markdown
> match: markdown::BlockXML
> match: markdown::Line
> match: markdown::Block
> match: markdown::MDLine
> match: markdown::Token
> match: markdown::MDBlock
> match: markdown::LineList
> match: markdown::TokenLink
> match: markdown::BlockListItem
> match: markdown::LineEmpty
> match: markdown::LineCode
> match: markdown::BlockQuote
> match: markdown::BlockList
> match: markdown::BlockCode
> match: markdown::BlockHeadline
> match: markdown::LineHeadline
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::MdDecorator
> match: markdown::TokenEscape
> match: markdown::BlockParagraph
> match: markdown::BlockRuler
> match: markdown::LineOther
> match: markdown::LineFence
> match: markdown::TokenImage
> match: markdown::LineHR
> match: markdown::LineHeadline1
> match: markdown::BlockOrderedList
> match: markdown::LineHeadline2
> match: markdown::ManDecorator
> match: markdown::nitmd
> match: markdown::BlockUnorderedList
> match: markdown::TokenStrike
> match: markdown::BlockFence
> match: markdown::BlockNone
> match: markdown::MarkdownProcessor
> match: markdown::test_wikilinks
> match: markdown::test_markdown
> match: markdown::decorators

## Usage

> match: markdown::MarkdownProcessor
> match: markdown

`nitmd` can be used as a standalone tool:

> match: markdown::nitmd
> match: markdown
> match: markdown::MarkdownProcessor::no_location
> match: markdown::MarkdownProcessor::ext_mode

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

> match: markdown
> match: markdown::Line
> match: markdown::Block
> match: markdown::MDLine
> match: markdown::Token
> match: markdown::MDBlock
> match: markdown::LineList
> match: markdown::TokenLink
> match: markdown::BlockListItem
> match: markdown::LineEmpty
> match: markdown::LineCode
> match: markdown::BlockQuote
> match: markdown::BlockList
> match: markdown::BlockCode
> match: markdown::BlockHeadline
> match: markdown::LineHeadline
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::MdDecorator
> match: markdown::TokenEscape
> match: markdown::BlockParagraph
> match: markdown::BlockRuler
> match: markdown::LineOther
> match: markdown::LineFence
> match: markdown::TokenImage
> match: markdown::LineHR
> match: markdown::LineHeadline1
> match: markdown::BlockOrderedList
> match: markdown::LineHeadline2
> match: markdown::ManDecorator
> match: markdown::BlockUnorderedList
> match: markdown::BlockXML
> match: markdown::TokenStrike
> match: markdown::BlockFence
> match: markdown::BlockNone
> match: markdown::markdown
> match: markdown::MarkdownProcessor
> match: markdown::test_wikilinks
> match: markdown::test_markdown
> match: markdown::nitmd
> match: markdown::decorators

## Differences with Markdown specification

> match: markdown
> match: markdown::Line
> match: markdown::Block
> match: markdown::MDLine
> match: markdown::Token
> match: markdown::MDBlock
> match: markdown::LineList
> match: markdown::TokenLink
> match: markdown::BlockListItem
> match: markdown::LineEmpty
> match: markdown::LineCode
> match: markdown::BlockQuote
> match: markdown::BlockList
> match: markdown::BlockCode
> match: markdown::BlockHeadline
> match: markdown::LineHeadline
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::MdDecorator
> match: markdown::TokenEscape
> match: markdown::BlockParagraph
> match: markdown::BlockRuler
> match: markdown::LineOther
> match: markdown::LineFence
> match: markdown::TokenImage
> match: markdown::LineHR
> match: markdown::LineHeadline1
> match: markdown::BlockOrderedList
> match: markdown::LineHeadline2
> match: markdown::ManDecorator
> match: markdown::BlockUnorderedList
> match: markdown::BlockXML
> match: markdown::TokenStrike
> match: markdown::BlockFence
> match: markdown::BlockNone
> match: markdown::MarkdownProcessor
> match: markdown::test_wikilinks
> match: markdown::test_markdown
> match: markdown::nitmd
> match: markdown::decorators

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> match: markdown>tests>
> match: markdown::TestTokenProcessor
> match: markdown::TestMarkdownProcessor
> match: markdown::TestBlock
> match: markdown::TestHTMLDecorator
> match: markdown::TestBlockDecorator
> match: markdown::TestTokenLocation
> match: markdown::TestBlockLocation
> match: markdown::TestTokenWikilink
> match: markdown
> match: markdown::test_wikilinks
> match: markdown::nitmd
> match: markdown::test_markdown

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> match: markdown::TokenImage
> match: markdown::TokenLinkOrImage
> match: markdown::LineEmpty
> match: markdown
> match: markdown::TokenWikiLink
> match: markdown::wikilinks
> match: markdown::nitmd
> match: markdown
> match: markdown::TokenWikiLink
> match: markdown::Line
> match: markdown::Block
> match: markdown::MDLine
> match: markdown::Token
> match: markdown::MDBlock
> match: markdown::LineList
> match: markdown::TokenLink
> match: markdown::BlockListItem
> match: markdown::LineEmpty
> match: markdown::LineCode
> match: markdown::BlockQuote
> match: markdown::BlockList
> match: markdown::BlockCode
> match: markdown::BlockHeadline
> match: markdown::LineHeadline
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::MdDecorator
> match: markdown::TokenEscape
> match: markdown::BlockParagraph
> match: markdown::BlockRuler
> match: markdown::LineOther
> match: markdown::LineFence
> match: markdown::TokenImage
> match: markdown::LineHR
> match: markdown::LineHeadline1
> match: markdown::BlockOrderedList
> match: markdown::LineHeadline2
> match: markdown::ManDecorator
> match: markdown::BlockUnorderedList
> match: markdown::BlockXML
> match: markdown::TokenStrike
> match: markdown::wikilinks
> match: markdown::BlockFence
> match: markdown::BlockNone
> match: markdown::MarkdownProcessor
> match: markdown::test_wikilinks
> match: markdown::test_markdown
> match: markdown::nitmd
> match: markdown::decorators

## Testing

> match: markdown>tests>
> match: markdown::TestTokenProcessor
> match: markdown::TestMarkdownProcessor
> match: markdown::TestBlock
> match: markdown::TestHTMLDecorator
> match: markdown::TestBlockDecorator
> match: markdown::TestTokenLocation
> match: markdown::TestBlockLocation
> match: markdown::TestTokenWikilink
> match: markdown::test_wikilinks
> match: markdown
> match: markdown::test_markdown

The NitUnit test suite can be found in `tests`.

> match: markdown>tests>
> match: markdown::TestTokenProcessor
> match: markdown::TestMarkdownProcessor
> match: markdown::TestBlock
> match: markdown::TestHTMLDecorator
> match: markdown::TestBlockDecorator
> match: markdown::TestTokenLocation
> match: markdown::TestBlockLocation
> match: markdown::TestTokenWikilink
> match: markdown
> match: markdown::test_wikilinks
> match: markdown::BlockXML
> match: markdown::test_markdown

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> match: markdown>tests>
> match: markdown::TestTokenProcessor
> match: markdown::TestMarkdownProcessor
> match: markdown::TestBlock
> match: markdown::TestHTMLDecorator
> match: markdown::TestBlockDecorator
> match: markdown::TestTokenLocation
> match: markdown::TestBlockLocation
> match: markdown::TestTokenWikilink
> match: markdown
> match: markdown::test_wikilinks
> match: markdown::test_markdown

Run the test suite:

> match: markdown>tests>
> match: markdown::TestTokenProcessor
> match: markdown::TestMarkdownProcessor
> match: markdown::TestBlock
> match: markdown::TestHTMLDecorator
> match: markdown::TestBlockDecorator
> match: markdown::TestTokenLocation
> match: markdown::TestBlockLocation
> match: markdown::TestTokenWikilink
> match: markdown::test_wikilinks
> match: markdown
> match: markdown::test_markdown

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

