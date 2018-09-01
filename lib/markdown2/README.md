# `markdown` - A markdown parser for Nit

 `markdown` is a Markdown parser for Nit that follows the CommonMark specification.

Contents:

 * [Getting Started](#Getting-Started)
 * [API & Features](#API-&-features)
 * [Issues](#Issues)
 * [Authors](#Authors)
 * [Contributing](#Contributing)
 * [Running the tests](#Running-the-tests)
 * [License](#License)

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

## API & Features

### `MdParser` - Parsing Markdown documents

Example:

~~~nit
var md = "# Hello, World!"
var parser = new MdParser
var ast = parser.parse(md)
assert ast.children.first isa MdHeading
~~~

### `MdVisitor` - Visiting the Markdown AST

Example:

~~~nit
class MyVisitor
	super MdVisitor

	var counter = new Counter[String]

	redef fun visit(node) do
		counter.inc node.class_name
		node.visit_all(self)
	end
end

var md = "# Hello, World!"
var parser = new MdParser
var ast = parser.parse(md)

var v = new MdVisitor
v.enter_visit(ast)
assert v.counter["MdHeading"] == 1
~~~

### `MdRendering` - Rendering the Markdown AST

Example:

~~~nit
var md = "# Hello, World!"
var parser = new MdParser
var ast = parser.parse(md)

var renderer = new HtmlRenderer
assert renderer.render(ast) == "<h1>Hello, World!</h1>"
~~~

## Issues

Raise an issue or ask a question on [https://github.com/nitlang/nit/issues](https://github.com/nitlang/nit/issues).

## Authors

This project is maintained by **Alexandre Terrasa <alexandre@moz-code.org>**.

## Contributing

This project is versioned with git.
We accept pull requests on [https://github.com/nitlang/nit/pulls](https://github.com/nitlang/nit/pulls).

Please read `CONTRIBUTING.md` for details on our code of conduct , and the
process for submitting pull requests to us.

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## License

This project is licensed under the [Apache 2.0](http://opensource.org/licenses/Apache2.0) license.

See the `LICENSE.md` file for details.
