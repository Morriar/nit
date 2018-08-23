# Nit wrapper for Stanford CoreNLP

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

See http://nlp.stanford.edu/software/corenlp.shtml.

## NLPProcessor

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

> code: nlp::NLPToken
> code: nlp::NLPJavaProcessor
> code: nlp::NLPToken::pos
> code: nlp::NLPToken::lemma
> code: nlp::NLPSentence
> code: nlp::NLPProcessor::process
> code: nlp::NLPSentence::tokens
> code: nlp::NLPDocument::sentences
> code: nlp::NLPDocument
> code: nlp::nlp

### NLPServer

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

> code: nlp::NLPServer
> code: pthreads::Thread::start
> code: nlp::nlp

### NLPClient

The NLPClient is used as a NLPProcessor with a NLPServer backend.

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

> code: nlp::NLPClient
> code: nlp::NLPProcessor::process
> code: nlp::nlp

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

> code: nlp::NLPIndex
> code: vsm::StringIndex::index_string
> code: vsm::Document
> code: vsm::IndexMatch
> code: vsm::IndexMatch::document
> code: vsm::VSMIndex::documents
> code: nlp::NLPJavaProcessor
> code: vsm::StringIndex::match_string
> code: nlp::nlp

## TODO

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment
