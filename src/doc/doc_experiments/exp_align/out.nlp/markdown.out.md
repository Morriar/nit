# A markdown parser for Nit

> match: markdown>
> match: markdown
> match: core::NativeArray

Markdown documentation can be found in http://daringfireball.net/projects/markdown/.
This parser is inspired by the famous TxtMark for Java (https://github.com/rjeschke/txtmark).

> match: markdown>
> match: markdown
> match: markdown::BlockXML
> match: core::ProcessDuplex
> match: core::Finalizable::finalize
> match: core::Map
> match: core::Reader
> match: core::Writer
> match: core::Bytes::items
> match: core::bytes::Int::to_bytes
> match: core::union_find::DisjointSet::find
> match: core::Object::output
> match: core::Duplex
> match: core::Comparable::OTHER
> match: core::Writer::is_writable
> match: core::Object::output_class_name
> match: core::RemovableCollection
> match: core::Error::message
> match: core::Writable
> match: markdown::Token::char
> match: core::SimpleCollection
> match: core::Object::SELF
> match: core::Collection::has_exactly
> match: core::Writable::write_to_string
> match: core::Task
> match: core::BytePattern
> match: config>
> match: config
> match: core::Object::hash
> match: core::FlatText::items
> match: core::re::NativeMatchArray::[]
> match: markdown::HeadLine::level
> match: markdown::Block::block
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::flat::FlatBuffer::with_infos
> match: core::Cloneable
> match: markdown::MDLine
> match: core::Sys
> match: core::Buffer::written
> match: markdown::Line
> match: template::Template
> match: core::math::Float::is_nan

## Usage

> match: config::Config::usage
> match: opts::OptionContext::usage

`nitmd` can be used as a standalone tool:

> match: markdown>
> match: markdown
> match: core::ProcessDuplex
> match: core::re::NativeRegex
> match: core::Bytes::items
> match: core::Writer::is_writable
> match: core::Finalizable::finalize
> match: config::Config::tool_description
> match: core::Map
> match: config>
> match: config
> match: core::Reader
> match: core::Object::SELF
> match: core::Writer
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Object::output
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::bytes::Int::to_bytes
> match: core::Duplex
> match: core::Comparable::OTHER
> match: core::re::NativeMatchArray::[]
> match: core::Object::output_class_name
> match: core::RemovableCollection
> match: core::SimpleCollection
> match: core::Stream::start
> match: core::Cloneable
> match: core::abstract_text::Sys::alpha_comparator
> match: core::FlatText::fast_cstring
> match: core::Task
> match: core::BytePattern
> match: core::Writable
> match: markdown::BlockXML
> match: core::Object::is_same_type
> match: template::Template
> match: core::Object::object_id
> match: core::FlatText::items
> match: markdown::MarkdownProcessor::ext_mode
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Error::message
> match: markdown::MarkdownProcessor::recurse
> match: core::flat::FlatBuffer::with_infos
> match: core::Error::cause
> match: core::math::Float::is_nan
> match: core::Object::hash
> match: core::re::NativeRegex::regerror
> match: config::config
> match: core::Pattern::split_in
> match: core::MaybeError
> match: markdown::BlockFence
> match: core::math::Sys::inf
> match: core::Iterator::next_by
> match: core::Collection::has_exactly
> match: markdown::BlockNone
> match: core::BytesWriter
> match: core::Writable::write_to_string
> match: core::FileReader
> match: core::FileWriter
> match: core::Collection

~~~bash
$ nitmd file.md
~~~

Or you can use it programmatically by importing the `markdown` module.

> match: markdown>
> match: markdown
> match: core::re::NativeRegex
> match: markdown::MarkdownProcessor::ext_mode
> match: core::Object::SELF
> match: core::Bytes::items
> match: markdown::BlockXML
> match: core>collection>
> match: markdown::BlockFence
> match: markdown::markdown::Text::read_md_link_id
> match: markdown::BlockNone
> match: markdown::MDLine
> match: markdown::markdown::Text::read_md_link
> match: markdown::Line
> match: core::FlatText::fast_cstring
> match: core>codecs>
> match: markdown::MDBlock
> match: core::Finalizable::finalize
> match: core::Object::is_same_type
> match: markdown::BlockHeadline
> match: markdown::BlockCode
> match: markdown::BlockList
> match: markdown::LineList
> match: core::MaybeError
> match: core::codecs
> match: markdown::LineHeadline
> match: core::Sys::main
> match: markdown::BlockQuote
> match: markdown::Block
> match: markdown::TokenLink
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: markdown::LineCode
> match: core::Object::object_id
> match: markdown::BlockParagraph
> match: markdown::LineEmpty
> match: markdown::Token
> match: markdown::BlockListItem
> match: markdown::Token::char
> match: markdown::BlockRuler
> match: core::Stream::finish

## Differences with Markdown specification

> match: markdown>
> match: markdown
> match: core::TimeT::difftime
> match: markdown::MDLine
> match: markdown::HeadLine::level

This parser passes all tests inside http://daringfireball.net/projects/downloads/MarkdownTest_1.0_2007-05-09.tgz execpt of two:

> match: markdown>
> match: markdown

1. Images.text: fails because this parser doesn't produce empty 'title' image attributes.
2. Literal quotes in titles.text: because markdown accepts unescaped quotes in titles and this is wrong.

> match: markdown::LinkRef::title
> match: markdown>
> match: markdown
> match: core::Text::empty
> match: core::Bytes::empty
> match: markdown::HeadLine::title
> match: markdown::TokenLinkOrImage::comment
> match: markdown::TokenImage
> match: markdown::TokenLinkOrImage
> match: core::Regex::not_eol
> match: core::Text::is_empty
> match: core::Regex::not_bol
> match: markdown::LineEmpty
> match: markdown>
> match: markdown
> match: markdown::LinkRef::title
> match: markdown::HeadLine::title
> match: markdown::TokenLinkOrImage::comment
> match: markdown::MDLine
> match: markdown::Line
> match: core::Array
> match: markdown::BlockXML
> match: markdown::MDBlock
> match: markdown::Block::block
> match: markdown::BlockHeadline
> match: core::Bytes::chexdigest
> match: markdown::BlockCode
> match: markdown::BlockList
> match: markdown::LineList
> match: core::String
> match: markdown::LineHeadline
> match: markdown::BlockQuote
> match: markdown::Block
> match: markdown::TokenLink
> match: markdown::HeadLine::level
> match: markdown::LineCode
> match: markdown::BlockParagraph
> match: markdown::LineEmpty
> match: markdown::Token
> match: markdown::BlockListItem
> match: markdown::Token::char
> match: markdown::BlockRuler
> match: markdown::TokenEscape
> match: markdown::BlockOrderedList
> match: markdown::LineFence
> match: core::Finalizable::finalize
> match: markdown::LineHR
> match: markdown::TokenImage
> match: core::Text::escape_to_c
> match: markdown::LineBlockquote
> match: markdown::HeadLine
> match: markdown::LineHeadline1
> match: markdown::BlockUnorderedList
> match: markdown::LineHeadline2
> match: markdown::markdown::Text::escape
> match: markdown::LineOther
> match: markdown::markdown::MarkdownProcessor::last_link_ref
> match: markdown::TokenWikiLink
> match: markdown::markdown::String::md_to_html
> match: markdown::BlockFence
> match: markdown::BlockNone

## Testing

> match: markdown>
> match: markdown

The NitUnit test suite can be found in `tests`.

> match: markdown>
> match: markdown
> match: markdown>tests>
> match: core::math::Float::is_nan
> match: core>collection>tests>
> match: core::union_find::DisjointSet::find
> match: core::ProcessDuplex
> match: core::math::Sys::nan
> match: markdown::BlockXML
> match: core::Reader
> match: core::circular_array::CircularArray::native
> match: core::Writer
> match: core::Map
> match: markdown::test_wikilinks
> match: core::Finalizable::finalize
> match: core::Bytes::items
> match: core::bytes::Int::to_bytes
> match: markdown::MarkdownProcessor::find_token
> match: core::Duplex
> match: core::Comparable::OTHER
> match: core::Writer::is_writable
> match: core::RemovableCollection
> match: core::SimpleCollection
> match: core::Object::output
> match: core::Object::output_class_name
> match: core::Error::message
> match: core::BytePattern
> match: core::Writable
> match: config>
> match: config
> match: core::re::NativeMatchArray::[]
> match: core::Object::SELF
> match: core::Cloneable
> match: core::Task
> match: core::flat::FlatText::chars_to_escape_to_c

Minimalists tests are prefixed with `test_process_*`. All tests from daringfireball are prefixed with `test_daring*`.

> match: markdown>
> match: markdown
> match: core::string_search::Text::prefix
> match: core::BytePattern::is_prefix
> match: core::Bytes::has_prefix
> match: core::math::Float::is_nan
> match: core::Text::has_prefix
> match: markdown>tests>
> match: core::ArrayCmp
> match: core>collection>tests>
> match: core::Text::to_snake_case
> match: core::Finalizable::finalize
> match: core::Text::to_camel_case
> match: core::math::Sys::nan
> match: markdown::markdown::Text::is_link_prefix
> match: core::circular_array::CircularArray::native
> match: core::Collection::has_exactly
> match: core::Writable::write_to_string
> match: core::Object::hash
> match: core::ProcessDuplex
> match: core::FlatText::items
> match: core::Object::output
> match: core::flat::FlatBuffer::with_infos
> match: core::Sys
> match: core::Buffer::written
> match: core::Object::output_class_name
> match: core::Error::message
> match: core::Map
> match: core::Bytes::chexdigest
> match: core::Writable
> match: core::Bytes::items

Run the test suite:

> match: markdown>
> match: markdown

~~~bash
$ nitunit lib/markdown/markdown.nit -t lib/markdown/test_markdown.nit
~~~

