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

module http_client

import http
import curl

class HttpClient

	var user_agent: nullable String = null is optional, writable

	fun send(method, uri: String, header: nullable HttpHeader, body: nullable String) :
	  HttpResponse do
		return send_request(new HttpRequest(method, uri, header, body))
	end

	fun send_request(request: HttpRequest): HttpResponse do
		var req = new CurlHTTPRequest(request.uri, method = request.method)

		var map = new HeaderMap
		for field in request.header.fields do
			map[field.name] = field.value
		end
		req.headers = map
		req.user_agent = request.header["User-Agent"] or else self.user_agent
		req.body = request.body

		var res = req.execute
		if res isa CurlResponseSuccess then
			var header = new HttpHeader
			for k, v in res.headers do
				header.add(k, v)
			end
			return new HttpResponse(res.status_code, header = header, body = res.body_str)
		else if res isa CurlResponseFailed then
			print "Error code: {res.error_code}"
			print "Error msg: {res.error_msg}"
			return new HttpResponse(res.error_code, res.error_msg, body = null)
		end
		abort # Should never happen
	end

	fun get(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("GET", uri, header, body)
	end

	fun head(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("HEAD", uri, header, body)
	end

	fun post(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("POST", uri, header, body)
	end

	fun put(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("PUT", uri, header, body)
	end

	fun delete(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("DELETE", uri, header, body)
	end

	fun connect(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("CONNECT", uri, header, body)
	end

	fun options(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("OPTIONS", uri, header, body)
	end

	fun trace(uri: String, header: nullable HttpHeader, body: nullable String): HttpResponse do
		return send("TRACE", uri, header, body)
	end
end

var client = new HttpClient
var res = client.get("http://nitlanguage.org")

print res.code
print res.message
print res.body or else "NO BODY"

print client.post("http://nitlanguage.org/404").source
