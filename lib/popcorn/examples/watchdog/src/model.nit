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

# Model and repositories
module model

import pop_repos
import pop_validation

# User representation
class User
	serialize
	super Jsonable

	# User uniq ID
	var id: String = (new MongoObjectId).id is serialize_as "_id"

	# User login
	var login: String

	# User email
	var email: String

	# User password
	var password: String is writable

	redef fun to_s do return login
	redef fun ==(o) do return o isa SELF and id == o.id
	redef fun hash do return id.hash
	redef fun to_json do return serialize_to_json
end

# User repository for Mongo
class UserRepo
	super MongoRepository[User]

	# Find a user by its login
	fun find_by_login(login: String): nullable User do
		var q = new JsonObject
		q["login"] = login
		return find(q)
	end

	# Find a user by its email
	fun find_by_email(email: String): nullable User do
		var q = new JsonObject
		q["email"] = email
		return find(q)
	end

	# Remove a user by its login
	fun remove_by_login(login: String): Bool do
		var q = new JsonObject
		q["login"] = login
		return remove(q)
	end

	# Try a login / password pair
	fun try_login(login, password: String): nullable User do
		var q = new JsonObject
		q["login"] = login
		q["password"] = password
		return find(q)
	end
end

# Validate a User input
class UserValidator
	super ObjectValidator

	init do
		validators.add new StringField("login", required=true, min_size=4, max_size=255)
		validators.add new EmailField("email")
		validators.add new StringField("password", required=true, min_size=6, max_size=255)
	end
end

# Site representation
class Site
	serialize
	super Jsonable

	# Site uniq id
	var id: String = (new MongoObjectId).id is serialize_as "_id"

	# Site owner
	var user: User

	# Site name
	var name: String is writable

	# Site url
	var url: String is writable

	redef fun to_s do return name
	redef fun ==(o) do return o isa SELF and id == o.id
	redef fun hash do return id.hash
	redef fun to_json do return serialize_to_json
end

# Site repository for MongoDB
class SiteRepo
	super MongoRepository[Site]

	# Find sites owned by user
	fun find_by_user(user: User): Array[Site] do
		var q = new JsonObject
		q["user.login"] = user.login
		return find_all(q)
	end

	# Find a site by its id
	fun find_by_user_and_id(user: User, id: String): nullable Site do
		var q = new JsonObject
		q["user.login"] = user.login
		q["_id"] = id
		return find(q)
	end
end

# Validate a Site input
class SiteValidator
	super ObjectValidator

	init do
		validators.add new StringField("name", required=true, min_size=4, max_size=255)
		validators.add new StringField("url", required=true)
	end
end

# Site status representation
class SiteStatus
	serialize
	super Jsonable

	# SiteStatus uniq id
	var id: String = (new MongoObjectId).id is serialize_as "_id"

	# Status site
	var site: Site

	# Status timestamp
	var timestamp: Int = get_time

	# Status response code
	var code: Int

	# Status response text
	var text: String

	redef fun to_s do return timestamp.to_s
	redef fun ==(o) do return o isa SELF and id == o.id
	redef fun hash do return id.hash
	redef fun to_json do return serialize_to_json
end

# Site repository for MongoDB
class SiteStatusRepo
	super MongoRepository[SiteStatus]

	# Find status for a site
	fun find_by_site(site: Site): Array[SiteStatus] do
		var q = new JsonObject
		q["site._id"] = site.id
		return find_all(q)
	end
end
