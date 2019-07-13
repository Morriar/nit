# Generated by nitcc for the language request

# Standalone parser tester for the language request
module request_test_parser is generated
import nitcc_runtime
import request_lexer
import request_parser

# Class to test the parser for the language request
class TestParser_request
	super TestParser
	redef fun name do return "request"
	redef fun new_lexer(text) do return new Lexer_request(text)
	redef fun new_parser do return new Parser_request
end
var t = new TestParser_request
t.main
