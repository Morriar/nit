# Nit wrapper for Stanford CoreNLP

> match: nlp::stanford

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> match: nlp::stanford
> match: core::Set
> match: nlp::NLPClient::language
> match: core>text>
> match: core::text
> match: core::Text
> match: nlp::NLPToken::word
> match: core::time
> match: core::numeric
> match: core::Numeric
> match: nlp::NLPDocument::sentences
> match: nlp::NLPToken::word

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> match: nlp::stanford

See http://nlp.stanford.edu/software/corenlp.shtml.

> match: nlp
> match: nlp>
> match: nlp::nlp
> match: nlp::stanford

## NLPProcessor

> match: nlp::NLPProcessor

### Java client

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

### NLPServer

> match: nlp::NLPServer

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> match: nlp::NLPServer

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

### NLPClient

> match: nlp::NLPClient

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> match: nlp::NLPClient
> match: nlp::NLPProcessor
> match: nlp::NLPServer

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

## NLPIndex

> match: nlp::NLPIndex

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> match: nlp::NLPIndex
> match: vsm::StringIndex
> match: nlp::NLPProcessor
> match: vsm::Document

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

## TODO

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

> match: opts::Option
> match: nlp::NLPDocument::sentences
