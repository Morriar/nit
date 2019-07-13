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

module test_http_client is test

import http_client
import popcorn::pop_tests

abstract class TestHttpClient
	super Handler
	super TestPopcorn

	var client = new HttpClient

	var root = "{host}:{port}"

	# Root responses cache directory
	var responses_dir: String is lazy do
		var path = "NIT_TESTING_PATH".environ.dirname / "mock"
		path.mkdir
		return path
	end

	fun run_server is test do
		var app = new App
		app.use("/*", self)
		run_test(app)
	end
end

class TestHttpGet
	super TestHttpClient
	test

	redef fun client_test do
		var res1 = client.get("{root}/")
		assert res1.code == 200
		assert res1.body == "Hello"

		var res2 = client.get("{root}/404")
		assert res2.code == 404
		assert res2.body == "Not Found"

		var res3 = client.get("{root}/real")
		assert res3.code == 200
		assert res3.body.as(not null).has("Nitlanguage.org")
	end

	redef fun get(req, res) do
		var uri = req.uri
		if uri == "/" then
			res.send("Hello", 200)
		else if uri == "/404" then
			res.send("Not Found", 404)
		else if uri == "/real" then
			res.send("{responses_dir}/nitlanguage.get".to_path.read_all, 200)
		end
	end

	fun test_http_get is test do run_server
end

class TestHttpPost
	super TestHttpClient
	test

	redef fun client_test do
		var res1 = client.post("{root}/", body = "Hello")
		assert res1.code == 200
		assert res1.body == "Hello"
		# TODO real post / with form data
		# TODO real post / with json
		# TODO post utf 8
	end

	redef fun post(req, res) do
		print req
		print res
		var uri = req.uri
		if uri == "/" then
			assert req.body == "Hello"
			res.send(req.body, 200)
		else if uri == "/404" then
			res.send("Not Found", 404)
		else if uri == "/real" then
			res.send("{responses_dir}/nitlanguage.get".to_path.read_all, 200)
		end
	end

	fun test_http_post is test do run_server
end
