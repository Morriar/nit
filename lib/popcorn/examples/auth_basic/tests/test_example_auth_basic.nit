# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
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

module test_example_auth_basic is test_suite

import pop_tests
import example_auth_basic

class TestExampleAuthBasicSignup
	super TestPopcorn

	redef fun client_test do
		var json = "test_example_auth_basic_signup.json"

		system "curl -X POST -s {host}:{port}/api/auth/signup"

		var form = new SignupForm("", "", "", "")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signup"
		system "rm -f {json}"

		form = new SignupForm("alexandre", "", "", "")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signup"
		system "rm -f {json}"

		form = new SignupForm("alexandre", "password", "", "")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signup"
		system "rm -f {json}"

		form = new SignupForm("alexandre", "password", "password", "foo")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signup"
		system "rm -f {json}"

		form = new SignupForm("alexandre", "password", "password", "alexandre@moz-code.org")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signup"
		system "rm -f {json}"
	end

	fun test_example_auth_basic_signup do
		var config = new MyConfig
		config.parse_options(new Array[String])
		config.auth_repo.clear

		var app = new App
		app.use_before("/*", new SessionInit)
		app.use("/api/auth", new AuthBasicRouter(config))
		run_test(app)
	end
end

class TestExampleAuthBasicSignin
	super TestPopcorn

	redef fun client_test do
		var json = "test_example_auth_basic_signin.json"

		system "curl -X POST -s {host}:{port}/api/auth/signin"

		var form = new SigninForm("", "")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signin"
		system "rm -f {json}"

		form = new SigninForm("alexandre", "")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signin"
		system "rm -f {json}"

		form = new SigninForm("alexandre", "password")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signin"
		system "rm -f {json}"

		form = new SigninForm("alexandre", "correct_password")
		form.to_json.write_to_file json
		system "curl -X POST -d @{json} -s {host}:{port}/api/auth/signin"
		system "rm -f {json}"
	end

	fun test_example_auth_basic_signin do
		var config = new MyConfig
		config.parse_options(new Array[String])
		config.auth_repo.clear
		var login = "alexandre"
		var email = "alexandre@moz-code.org"
		var pass = config.encrypt_password("correct_password")
		config.auth_repo.save(new User(login, email, pass.first, pass.second))

		var app = new App
		app.use_before("/*", new SessionInit)
		app.use("/api/auth", new AuthBasicRouter(config))
		run_test(app)
	end
end

redef class MyConfig
	redef fun encrypt_password(password) do
		var salt = "salt"
		var hash = "{password}+{salt}".md5
		return new Couple[String, String](hash, salt)
	end

	redef fun send_verification_email(user) do end # disable for testing
end
