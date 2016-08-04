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

# User management handlers
module admin_users

import auth

# GET /api/users
# POST /api/users
class APIAdminUsers
	super APIUserHandler

	redef var validator = new UserValidator

	redef fun get(req, res) do res.json new JsonArray.from(repo.find_all)

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

# GET /api/users/:id
# POST /api/users/:id
# DELETE /api/users/:id
class APIAdminUser
	super APIUserHandler

	redef var validator = new UserValidator

	redef fun get(req, res) do
		var login = req.param("login")
		if login == null then
			res.error 400
			return
		end
		var user = repo.find_by_login(login)
		if user == null then
			res.error 404
			return
		end
		res.json user
	end

	redef fun post(req, res) do
		var login = req.param("login")
		if login == null then
			res.error 400
			return
		end
		var user = repo.find_by_login(login)
		if user == null then
			res.error 404
			return
		end

		var valid = check_post(req, res)
		if not valid then return

		var obj = validator.as(UserValidator).validation.object.as(not null)
		user.password = obj["password"].as(String)
		repo.save(user)
		res.json user
	end

	redef fun delete(req, res) do
		var login = req.param("login")
		if login == null then
			res.error 400
			return
		end
		var status = repo.remove_by_login(login)
		if status then
			res.send
		else
			res.error 404
		end
	end
end
