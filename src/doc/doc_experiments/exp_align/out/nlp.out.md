# Nit wrapper for Stanford CoreNLP

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> name: pthreads::pthreads::NativePthreadKey::set
> name: nlp::NLPClient::language
> name: core::Queue::take
> name: opts::Option::names
> name: core::numeric
> name: nlp::NLPDocument::sentences
> name: nlp::NLPToken::word

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> name: core::Sys::run

See http://nlp.stanford.edu/software/corenlp.shtml.

## NLPProcessor

> name: nlp::NLPProcessor

### Java client

~~~nitish
var proc = new NLPProcessor("path/to/StanfordCoreNLP/jars")

var doc = proc.process("String to analyze")

for sentence in doc.sentences do
	for token in sentence.tokens do
		print "{token.lemma}: {token.pos}"
	end
end
~~~

### NLPServer

> name: nlp::NLPServer

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> name: nlp::NLPServer

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

~~~nitish
var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

### NLPClient

> name: nlp::NLPClient

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> name: nlp::NLPClient
> name: nlp::NLPProcessor
> name: nlp::NLPServer

~~~nitish
var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

## NLPIndex

> name: nlp::NLPIndex

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> name: nlp::NLPIndex
> name: vsm::StringIndex
> name: nlp::NLPProcessor

~~~nitish
var index = new NLPIndex(proc)

var d1 = index.index_string("Doc 1", "/uri/1", "this is a sample")
var d2 = index.index_string("Doc 2", "/uri/2", "this and this is another example")
assert index.documents.length == 2

matches = index.match_string("this sample")
assert matches.first.document == d1
~~~

## TODO

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

> name: opts::OptionContext::options
> name: nlp::NLPDocument::sentences

