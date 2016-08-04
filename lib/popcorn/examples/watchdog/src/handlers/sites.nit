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

# Site handlers
module sites

import base_handlers

# A Handler that uses a SiteRepository
abstract class APISiteHandler
	super CheckSession
	super CheckPost

	# Site repository
	var repo: SiteRepo

	redef var validator = new SiteValidator
end

# GET /api/user/sites
# POST /api/user/sites
class APIUserSites
	super APISiteHandler

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		res.json new JsonArray.from(repo.find_by_user(user))
	end

	redef fun post(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var valid = check_post(req, res)
		if not valid then return

		var obj = validator.as(SiteValidator).validation.object.as(not null)
		var name = obj["name"].as(String)
		var url = obj["url"].as(String)
		var site = new Site(user, name, url)
		repo.save(site)
		res.json(site, 201)
	end
end

# GET /api/user/site/:id
class APIUserSite
	super APISiteHandler

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var id = req.param("id")
		if id == null then
			res.error 400
			return
		end
		var site = repo.find_by_user_and_id(user, id)
		if site == null then
			res.error 404
			return
		end
		res.json site
	end

	redef fun post(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var id = req.param("id")
		if id == null then
			res.error 400
			return
		end
		var site = repo.find_by_user_and_id(user, id)
		if site == null then
			res.error 404
			return
		end

		var valid = check_post(req, res)
		if not valid then return

		var obj = validator.as(SiteValidator).validation.object.as(not null)
		site.name = obj["name"].as(String)
		site.url = obj["url"].as(String)
		repo.save site
		res.json site
	end

	redef fun delete(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var id = req.param("id")
		if id == null then
			res.error 400
			return
		end
		var status = repo.remove_by_id(id)
		if status then
			res.send
		else
			res.error 404
		end
	end
end
