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

# Misc handlers
module base_handlers

import popcorn
import model

# Check that a session with a User exists.
abstract class CheckSession
	super Handler

	# JsonError to return
	fun session_error: JsonObject do
		var obj = new JsonObject
		obj["message"] = "Unauthorized access"
		return obj
	end

	# Check that a Session exists.
	#
	# If no user found, `res` is set to `403` with an explicative Json object as body.
	fun check_session(req: HttpRequest, res: HttpResponse): nullable Session do
		var session = req.session
		if session == null then
			res.json_error(session_error, 403)
			return null
		end
		return session
	end

	# Check that a User exists in session and return it.
	#
	# If no user found, `res` is set to `403` with an explicative Json object as body.
	fun check_user(req: HttpRequest, res: HttpResponse): nullable User do
		var session = check_session(req, res)
		if session == null then
			return null
		end
		var user = session.user
		if user == null then
			res.json_error(session_error, 403)
			return null
		end
		return user
	end
end

# Check JSON body input from POST requests
abstract class CheckPost

	# Validator used for document validation
	var validator: nullable DocumentValidator = null

	# Check post data from `req` and set `res` to 400 if errors.
	fun check_post(req: HttpRequest, res: HttpResponse): Bool do
		var validator = self.validator
		if validator == null then return true
		validator.validate(req.body)
		if validator.validation.has_error then
			res.json_error(validator.validation, 400)
			return false
		end
		return true
	end
end

redef class Session

	# Logged in user
	var user: nullable User = null is writable
end
