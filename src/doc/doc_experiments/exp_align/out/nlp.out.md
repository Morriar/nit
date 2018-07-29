# Nit wrapper for Stanford CoreNLP

> match: nlp::stanford
> match: nlp::NLPJavaProcessor
> match: nlp
> match: nlp>

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

> match: nlp::stanford
> match: nlp::NLPClient::language
> match: nlp::NLPDocument::sentences
> match: nlp::NLPToken::word
> match: nlp
> match: nlp>
> match: nlp::NLPProcessor
> match: nlp::NLPToken::index

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

> match: nlp::stanford
> match: nlp::NLPJavaProcessor
> match: nlp::NLPServer::java_cp
> match: nlp
> match: nlp>
> match: nlp::NLPJavaProcessor::java_cp

See http://nlp.stanford.edu/software/corenlp.shtml.

> match: nlp::nlp
> match: nlp
> match: nlp::stanford
> match: nlp::NLPIndex::accept_token
> match: nlp::NLPServer
> match: nlp>

## NLPProcessor

> match: nlp::NLPProcessor
> match: nlp::NLPClient
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex
> match: nlp

### Java client

> match: nlp>examples>
> match: nlp::NLPToken::word
> match: nlp::NLPToken::index
> match: nlp::NLPToken::pos
> match: nlp::NLPSentence::index

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

> match: nlp::NLPToken
> match: nlp::NLPJavaProcessor
> match: nlp::NLPToken::pos
> match: nlp::NLPToken::lemma
> match: nlp::NLPSentence
> match: nlp::NLPProcessor::process
> match: nlp::NLPDocument::sentences
> match: nlp::NLPSentence::tokens
> match: nlp::NLPDocument
> match: nlp::nlp

### NLPServer

> match: nlp::NLPServer
> match: nlp::NLPClient
> match: nlp
> match: nlp>

The NLPServer provides a wrapper around the StanfordCoreNLPServer.

> match: nlp::NLPServer
> match: nlp
> match: nlp>
> match: nlp::NLPClient
> match: nlp::NLPJavaProcessor

See `https://stanfordnlp.github.io/CoreNLP/corenlp-server.html`.

> match: nlp::NLPServer
> match: nlp::NLPIndex::accept_token

~~~nit
import nlp

var cp = "/path/to/StanfordCoreNLP/jars"
var srv = new NLPServer(cp, 9000)
srv.start
~~~

> match: nlp::NLPServer
> match: pthreads::Thread::start
> match: nlp::nlp

### NLPClient

> match: nlp::NLPClient
> match: nlp
> match: nlp>
> match: nlp>examples>

The NLPClient is used as a NLPProcessor with a NLPServer backend.

> match: nlp::NLPClient
> match: nlp::NLPProcessor
> match: nlp::NLPServer
> match: nlp
> match: nlp>
> match: nlp::NLPFileIndex
> match: nlp::NLPIndex

~~~nit
import nlp

var cli = new NLPClient("http://localhost:9000")
var doc = cli.process("String to analyze")
~~~

> match: nlp::NLPClient
> match: nlp::NLPProcessor::process
> match: nlp::nlp

## NLPIndex

> match: nlp::NLPIndex
> match: nlp
> match: nlp>
> match: nlp>examples>

NLPIndex extends the StringIndex to use a NLPProcessor to tokenize, lemmatize and
tag the terms of a document.

> match: nlp::NLPIndex
> match: nlp::NLPProcessor
> match: nlp::NLPIndex::nlp_processor
> match: nlp
> match: nlp>
> match: nlp::NLPClient
> match: nlp::NLPFileIndex

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

> match: nlp::NLPIndex
> match: vsm::StringIndex::index_string
> match: core::Collection::first
> match: vsm::Document
> match: vsm::IndexMatch
> match: vsm::VSMIndex::documents
> match: vsm::IndexMatch::document
> match: core::HashSet
> match: nlp::NLPJavaProcessor
> match: vsm::StringIndex::match_string
> match: nlp::nlp

## TODO

> match: nlp>examples>
> match: nlp::NLPToken::word
> match: nlp::NLPToken::index
> match: nlp::NLPToken::pos
> match: nlp::NLPSentence::index

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment

> match: nlp::NLPDocument::sentences
> match: nlp
> match: nlp>
> match: nlp::NLPSentence::index
> match: nlp::NLPSentence
> match: nlp::NLPToken::index
> match: nlp::NLPProcessor
> match: nlp>examples>
> match: nlp::NLPToken::word
> match: nlp::NLPToken::pos

