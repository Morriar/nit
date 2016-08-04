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

# Site status handlers
module status

import base_handlers
import curl

# A Handler that uses a SiteRepository
abstract class APISiteStatusHandler
	super CheckSession
	super CheckPost

	# Site repository
	var sites_repo: SiteRepo

	# Site status repository
	var status_repo: SiteStatusRepo

	redef var validator = new SiteValidator
end

# GET /api/user/sites/:id
class APISiteStatuses
	super APISiteStatusHandler

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var site_id = req.param("site")
		if site_id == null then
			res.error 400
			return
		end

		var site = sites_repo.find_by_user_and_id(user, site_id)
		if site == null then
			res.error 404
			return
		end

		res.json new JsonArray.from(status_repo.find_by_site(site))
	end
end

# GET /api/user/site/:id/status/:id
class APISiteStatus
	super APISiteStatusHandler

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var site_id = req.param("site")
		if site_id == null then
			res.error 400
			return
		end

		var site = sites_repo.find_by_user_and_id(user, site_id)
		if site == null then
			res.error 404
			return
		end

		var id = req.param("id")
		if id == null then
			res.error 400
			return
		end
		var status = status_repo.find_by_id(id)
		if status == null then
			res.error 404
			return
		end
		res.json status
	end
end

# GET /api/user/site/:id/check
class APISiteStatusCheck
	super APISiteStatusHandler

	redef fun get(req, res) do
		var user = check_user(req, res)
		if user == null then return

		var site_id = req.param("site")
		if site_id == null then
			res.error 400
			return
		end

		var site = sites_repo.find_by_user_and_id(user, site_id)
		if site == null then
			res.error 404
			return
		end

		var code: Int
		var text: String
		var request = new CurlHTTPRequest(site.url)
		var response = request.execute
		if response isa CurlResponseSuccess then
			code = response.status_code
			text = response.body_str
		else if response isa CurlResponseFailed then
			code = response.error_code
			text = response.error_msg
		else
			res.error 500
			return
		end

		var status = new SiteStatus(site, code, text)
		status_repo.save(status)
		res.json status
	end
end
