# `csv` - CSV document handling

* [Features](#Features)
* [`CsvStream` - Shared properties by all CSV-related classes](#`CsvStream`---Shared-properties-by-all-CSV-related-classes)
* [`CsvWriter` - Appends CSV records to a file.](#`CsvWriter`---Appends-CSV-records-to-a-file.)
* [`CsvReader` - Reads records from a CSV file.](#`CsvReader`---Reads-records-from-a-CSV-file.)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `csv`](uml-csv.svg)

### `CsvStream` - Shared properties by all CSV-related classes

This class is basically only here for implementation purposes and should not be used
by clients for typing.

### `CsvWriter` - Appends CSV records to a file.

By default, uses the format recommended by RFC 4180 (see `rfc4180`).

Note: If a record contains only an empty cell, its representation is
undistinguishable from an empty line. This is because the empty values are
always written unescaped in order to avoid them to be interpreted as escaped
delimiters by some parsers.

~~~nit
var out = new StringWriter
var writer = new CsvWriter(out)
writer.write_elements(1, 2.0, "foo\nbar")
writer.write_line([""])
assert out.to_s == """1,2.0,"foo\nbar"\n\n"""
~~~

Properties:

* `CsvWriter::write_elements` - Append the elements in `els` as a record.
* `CsvWriter::write_line` - Append the specified record.
* `CsvWriter::write_lines` - Write several lines to a stream

### `CsvReader` - Reads records from a CSV file.

By default, the format recognizes EOLs as `\n`

~~~nit
var example = """
foo,bar
"Hello, word!",1234.5 + 42
"Something
""else""\", baz
"""
var reader = new CsvReader.from_string(example)
var table = reader.read_all

assert table.header  == ["foo","bar"]
assert table.records == [["Hello, word!","1234.5 + 42"],
			["Something\n\"else\""," baz"]]
~~~

Properties:

* `CsvReader::from_string` - Creates a new CSVReader from a `string` data
* `CsvReader::read_all` - Reads the content of the Stream and interprets it as a CSV Document

## Other features

* `CsvDocument` - A CSV document representation.

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
