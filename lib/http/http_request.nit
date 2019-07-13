# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import http # TODO

import nitcc_runtime
import http_parser::request_lexer
import http_parser::request_parser

class HttpRequestParser

	# TODO errors
	var last_error: nullable String = null

	fun parse(string: String): nullable HttpRequest do
		var node = parse_string(string)
		if node == null then return null

		var v = new RequestVisitor(self)
		v.start(node)
		return v.request
	end

	private fun parse_string(string: String): nullable Node do
		var l = new Lexer_request(string)
		var ts = l.lex

		var p = new Parser_request
		p.tokens.add_all ts

		var node = p.parse

		if not node isa NProd then
			if node isa NError then
				last_error = "{node.position.as(not null).to_s} Syntax Error: {node.message}"
			else
				last_error = "Parsing Error: expected `NProd` got `{node.class_name}`"
			end
			return null
		end
		last_error = null
		return node
	end
end

class RequestVisitor
	super Visitor

	var parser: HttpRequestParser
	var request: nullable HttpRequest = null

	fun start(n: Node) do enter_visit(n)

	redef fun visit(n) do n.accept_request_visitor(self)
end

redef class Node
	fun accept_request_visitor(v: RequestVisitor) do
		print self
		visit_children(v)
	end
end

# TODO use nitcc
class HttpParser
	#
	# ~~~
	# var parser = new HttpParser
	#
	# var get_string = """
	# GET /docs/index.html HTTP/1.1\r
	# Host: nitlanguage.org\r
	# Accept: image/gif, image/jpeg, */*\r
	# Accept-Language: en-us\r
	# Accept-Encoding: gzip, deflate\r
	# User-Agent: Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)"""
	#
	# var get = parser.parse_request(get_string)
	# assert get isa HttpRequest
	# assert get.method == "GET"
	# assert get.uri == "/docs/index.html"
	# assert get.version == "HTTP/1.1"
	# assert get.header.length == 5
	# assert get.header["Host"] == "nitlanguage.org"
	#
	# var post_string = """
	# POST /post HTTP/1.1\r
	# Host: nitlanguage.org\r
	# Connection: close\r
	# Accept: */*\r
	# User-Agent: Mozilla/4.0 (compatible; esp8266 Lua; Windows NT 5.1)\r
	# Content-Type: application/json\r
	# Content-Length: 25\r
	# \r
	# {\r
	#	"hello": "world"\r
	# }"""
	#
	# var post = parser.parse_request(post_string)
	# assert post isa HttpRequest
	# assert post.method == "POST"
	# assert post.uri == "/post"
	# assert post.version == "HTTP/1.1"
	# assert post.header.length == 6
	# assert post.body.length == post.header["Content-Length"].to_i
	# ~~~
	# TODO test errors
	# TODO use logger
	fun parse_request(string: String): nullable HttpRequest do
		var i = 0
		var len = string.length

		# Parse status line
		var method = new Buffer
		i = read(string, method, i, len, ' ')
		i = consume(string, i, ' ')
		# TODO error
		var uri = new Buffer
		i = read(string, uri, i, len, ' ')
		i = consume(string, i, ' ')
		# TODO error
		var version = new Buffer
		i = read(string, version, i, len, '\r')
		i = consume(string, i, '\n')
		# TODO error

		# Parse header
		var header = new HttpHeader

		loop
			if i >= len then break

			var name = new Buffer
			i = read(string, name, i, len, ':')
			var value = new Buffer
			i = read(string, value, i, len, '\r')
			i = consume(string, i, '\n')
			# TODO multiline fields
			header.add(name.trim.to_s, value.trim.to_s)

			if i + 1 < len and string[i] == '\r' and string[i + 1] == '\n' then break
		end

		# Parse body
		var body = new Buffer
		i = read(string, body, i, len)

		return new HttpRequest(method.to_s, uri.to_s, header, body.to_s, version.to_s)
	end

	fun parse_response(string: String) do
		# TODO
	end

	private fun read(read: Text, write: Buffer, from, to: nullable Int, until: nullable Char): Int do
		var i = from or else 0
		to = to or else read.length
		while i < to do
			var c = read.chars[i]
			i += 1
			if until == c then
				break
			end
			write.add c
		end
		return i
	end

	private fun consume(read: Text, from: nullable Int, char: Char): Int do
		var i = from or else 0
		while i < read.length do
			var c = read.chars[i]
			if char != c then
				break
			end
			i += 1
		end
		return i
	end
end

var post_string = """
POST /post HTTP/1.1"""
# Host: nitlanguage.org\r
# Connection: close\r
# Accept: */*\r
# User-Agent: Mozilla/4.0 (compatible; esp8266 Lua; Windows NT 5.1)\r
# Content-Type: application/json\r
# Content-Length: 25\r
# \r
# {\r
	# "hello": "éworld"\r
# }"""

var p = new HttpRequestParser
print p.parse(post_string) or else "NULL"
print p.last_error or else "NO ERROR"
