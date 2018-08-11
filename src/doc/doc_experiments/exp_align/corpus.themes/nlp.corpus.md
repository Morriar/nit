# Nit wrapper for Stanford CoreNLP

> theme: api
> theme: title

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> theme: api
> theme: intro

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> theme: intro

See http://nlp.stanford.edu/software/corenlp.shtml.

> theme: intro
> theme: refs

## NLPProcessor

> theme: api
> theme: features

### Java client

> theme: features

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

> theme: examples

### NLPServer

> theme: api
> theme: features

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> theme: api

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

> theme: refs

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

> theme: examples

### NLPClient

> theme: api
> theme: features

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> theme: api

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

> theme: examples

## NLPIndex

> theme: api
> theme: features

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> theme: api

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

> theme: examples

## TODO

> theme: todo

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

> theme: api
> theme: todo
> theme: features
> theme: api

