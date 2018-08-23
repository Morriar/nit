# `markdown2` - A markdown parser for Nit

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `nitmd`](#Run-`nitmd`)
* [Features](#Features)
* [`markdown_block_parsing` - Markdown blocks parsing](#`markdown_block_parsing`---Markdown-blocks-parsing)
* [`markdown_github` - Markdown Github mode](#`markdown_github`---Markdown-Github-mode)
* [`markdown_inline_parsing` - Parser for inline markdown](#`markdown_inline_parsing`---Parser-for-inline-markdown)
* [`markdown_maths` - Markdown Maths mode](#`markdown_maths`---Markdown-Maths-mode)
* [`markdown_wikilinks` - Markdown wikilinks processing](#`markdown_wikilinks`---Markdown-wikilinks-processing)
* [Other features](#Other-features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

Example from `markdown2::example_html_rendering`:

~~~
# An example of how you can customize the HTML output rendering for a MdNode
module example_html_rendering is example

import markdown2::markdown_html_rendering

# Redefine the HTML output for a `MdParagraph`
redef class MdParagraph
	redef fun render_html(v) do
		v.add_raw "<p class=\"ma_class\">"
		visit_all(v)
		v.add_raw "</p>"
	end
end

# Redefine the HTML output for a `MdThematicBreak`
redef class MdThematicBreak
	redef fun render_html(v) do
		v.add_line
		v.add_raw "<hr class=\"autre classe\"/>"
		v.add_line
	end
end
~~~

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `config` - Configuration options for nit tools and apps
* `core` - Nit common library of core classes and methods
* `json` - read and write JSON formatted text
* `md5` - Native MD5 digest implementation as `Text::md5`
* `template` - Basic template system

### Run `nitmd`

Compile `nitmd` with the following command:

~~~bash
nitc ./nitmd.nit
~~~

Then run it with:

~~~bash
nitmd [-t format] <file.md>
~~~

Options:

~~~bash
* -t, --to		Specify output format (html, md, man)
* -h, -?, --help		Show Help (the list of options).
~~~

## Features

### `markdown_block_parsing` - Markdown blocks parsing

Introduce the parsers for the different Markdown blocks such as headings, lists
code blocks etc.

### `markdown_github` - Markdown Github mode

Enables:

* strike processing: ~strike~
* super processing: ^super^

TODO table
TODO todo lists

### `markdown_inline_parsing` - Parser for inline markdown

Used to create the AST representation of inline nodes like emphasis, code, links
images etc.

### `markdown_maths` - Markdown Maths mode

Allows to write Maths equation with the LaTeX Maths mode.

This mode requires `tex2im` to be installed and added to the path.
See: <http://www.nought.de/tex2im.php>

### `markdown_wikilinks` - Markdown wikilinks processing

Enables parsing of `[[wikilinks]]` syntax.

## Other features

* `markdown_ast` - Markdown AST representation
* `markdown_html_rendering` - HTML rendering of Markdown documents
* `markdown_latex_rendering` - LaTeX rendering of Markdown documents
* `markdown_man_rendering` - Manpages rendering of Markdown documents
* `markdown_md_rendering` - Markdown rendering of Markdown documents
* `markdown_rendering` - Markdown document rendering
* `nitmd` - A Markdown parser for Nit.

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
