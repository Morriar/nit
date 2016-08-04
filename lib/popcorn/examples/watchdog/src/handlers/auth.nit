# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Authentification handlers
module auth

import base_handlers

# A Handler that uses a UserRepo
abstract class APIUserHandler
	super CheckSession
	super CheckPost

	# User repository
	var repo: UserRepo
end

# GET /api/auth
class APIAuth
	super APIUserHandler

	redef var validator = new UserValidator

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		res.json user
	end

	redef fun post(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var valid = check_post(req, res)
		if not valid then return

		var obj = validator.as(UserValidator).validation.object.as(not null)
		user.password = obj["password"].as(String)
		repo.save(user)
		res.json user
	end
end

# POST /api/signin
class APIAuthSignin
	super APIUserHandler

	redef var validator do
		var v = new UserValidator
		v.validators.add new StringField("password2", required=true, min_size=6, max_size=255)
		v.validators.add new FieldsMatch("password", "password2")
		return v
	end

	# TODO encrypt password
	redef fun post(req, res) do
		var valid = check_post(req, res)
		if not valid then return
		var validator = self.validator.as(UserValidator)

		var obj = validator.validation.object.as(not null)
		var login = obj["login"].as(String)
		var email = obj["email"].as(String)
		var password = obj["password"].as(String)

		var user = repo.find_by_login(login)
		if user != null then
			validator.validation.add_error("login", "Login already used")
			res.json_error(validator.validation, 400)
			return
		end

		user = repo.find_by_email(email)
		if user != null then
			validator.validation.add_error("email", "Email already used")
			res.json_error(validator.validation, 400)
			return
		end

		user = new User(login, email, password)
		repo.save(user)
		res.json(user, 201)
	end
end

# POST /api/auth/login
class APIAuthLogin
	super APIUserHandler

	redef var validator do
		var validator = new ObjectValidator
		validator.validators.add new StringField("login", required=true, min_size=4, max_size=255)
		validator.validators.add new StringField("password", required=true, min_size=6, max_size=255)
		return validator
	end

	# TODO encrypt password
	# TODO password lost
	redef fun post(req, res) do
		var valid = check_post(req, res)
		if not valid then return
		var validator = self.validator.as(ObjectValidator)

		var obj = validator.validation.object.as(not null)
		var login = obj["login"].as(String)
		var password = obj["password"].as(String)

		var user = repo.try_login(login, password)
		if user == null then
			validator.validation.add_error("document", "Bad credentials")
			res.json_error(validator.validation, 400)
			return
		end

		var session = req.session
		if session != null then session.user = user
		res.json user
	end
end

# POST /api/auth/logout
class APIAuthLogout
	super APIUserHandler

	redef fun get(req, res) do
		var session = check_session(req, res)
		if session == null then return

		session.user = null
		res.json new JsonObject
	end
end
