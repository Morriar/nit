# `nlp` - Nit wrapper for Stanford CoreNLP

* [`NLPProcessor`](#`NLPProcessor`)
* [`NLPJavaProcessor`](#`NLPJavaProcessor`)
* [`NLPServer`](#`NLPServer`)
* [NLPClient](#NLPClient)
* [NLPIndex](#NLPIndex)
* [`NLPDocument`](#`NLPDocument`)
* [TODO](#TODO)
* [Authors](#Authors)

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> See http://nlp.stanford.edu/software/corenlp.shtml.

> * `NLPClient` - A NLPProcessor using a NLPServer as backend

* `NLPDocument` - A `Document` represent a text input given to the NLP processor.
* `NLPFileIndex` - A FileIndex based using a NLPProcessor
* `NLPIndex` - A StringIndex using a NLPProcessor to parse and vectorize strings
* `NLPJavaProcessor` - Wrapper around StanfordNLP jar.
* `NLPProcessor` - Natural Language Processor
* `NLPSentence` - Represent one sentence in a `Document`.
* `NLPServer` - Stanford web server
* `NLPToken` - Represent one word (or puncutation mark) in a `NLPSentence`.

## `NLPProcessor`

> NLPProcessor provides natural language processing for input text and files.
> Analyzed documents can be manipulated through the resulting NLPDocument.

![Diagram for `nlp`](uml-nlp-2.svg)

### `NLPJavaProcessor`

> FIXME this should use the Java FFI.

~~~nit
import nlp

var proc = new NLPJavaProcessor("path/to/StanfordCoreNLP/jars")

var doc = proc.process("String to analyze")

for sentence in doc.sentences do
	for token in sentence.tokens do
		print "{token.lemma}: {token.pos}"
	end
end
~~~

### `NLPServer`

> Runs the server on `port`.

For more details about the stanford NLP server see
https://stanfordnlp.github.io/CoreNLP/corenlp-server.html

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

### NLPClient

The NLPClient is used as a NLPProcessor with a NLPServer backend.

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

## NLPIndex

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

~~~nit
import nlp

var proc = new NLPJavaProcessor("path/to/StanfordCoreNLP/jars")
var index = new NLPIndex(proc)

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

var matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

## `NLPDocument`

> Once processed, it contains a list of sentences that contain tokens.

## TODO

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
