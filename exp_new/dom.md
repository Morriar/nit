# `dom` - Easy XML DOM parser

* [Features](#Features)
* [`xml_entities` - Basic blocks for DOM-XML representation](#`xml_entities`---Basic-blocks-for-DOM-XML-representation)
* [Other features](#Other-features)
* [Authors](#Authors)

Example from `dom::checker`:

~~~
# Simple XML validity checker using the `dom` module
module checker is example

import dom

# Check arguments
if args.length != 1 then
	print_error "Usage: checker xml_file"
	exit 2
end

var path = args.first
if not path.file_exists then
	print_error "Path '{path}' does not exist"
	exit 3
end

# Read file
var content = path.to_path.read_all

# Parse XML
var xml = content.to_xml

# Check for errors
if xml isa XMLError then
	print_error "XML file at '{path}' is invalid:"
	print_error xml.message
	var loc = xml.location
	if loc != null then print_error loc
	exit 1
else
	print "XML file at '{path}' is valid"
end
~~~

## Features

![Diagram for `dom`](uml-dom.svg)

### `xml_entities` - Basic blocks for DOM-XML representation

DOM entities are defined in this module, specifically:

* `XMLEntity`: Abstract kind of XML-related node
* `XMLDocument`: A well-formed XML document, root of the tree
* `PCDATA`: Raw XML-escaped character data
* `CDATA`: Raw data, may contain invalid XML escape characters
* `XMLTag`: Abstract XML tag element
* `XMLAttrTag`: Abstract XML element, they may contain attributes
* `XMLOnelinerTag`: Any tag contained on one-line only
* `XMLStartTag`: A tag starting a new hierarchy level in the tree
* `XMLPrologTag`: A tag containing meta-information on the document, must start with <?xml
* `XMLProcessingInstructionTag`: Any XML tag starting with <? other than the prolog tag
* `XMLEndTag`: A tag signaling the end of a block
* `XMLCommentTag`: A comment tag
* `XMLSpecialTag`: A special tag, which may contain meta-information
* `XMLDoctypeTag`: A DOCTYPE tag, use to register a DTD
* `XMLAttribute`: Any kind of attribute that may be attached to a tag
* `XMLStringAttr`: An attribute containing a String
* `XMLError`: Any kind of error thrown while parsing a document

## Other features

* `parser` - XML DOM-parsing facilities

## Authors

This project is maintained by **Lucas Bajolet <mailto:r4pass@hotmail.com>**.
