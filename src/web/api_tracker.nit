# This file is part of NIT ( http://www.nitlanguage.org ).
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

module api_tracker

import popcorn::pop_tracker
import api_feedback

# Group all api handlers in one router.
redef class APIRouter
	redef init do
		super

		use("/traffic/entries", new PopTrackerEntries(config))
		use("/traffic/queries", new PopTrackerQueries(config))
		use("/traffic/browsers", new PopTrackerBrowsers(config))
		use("/traffic/services", new PopTrackerServices(config))
		use("/traffic/times", new PopTrackerResponseTime(config))

		use_after("/*", new PopTracker(config))
	end
end

class PopTrackerServices
	super TrackerHandler

	redef fun get(req, res) do
		var pipe = new MongoPipeline
		pipe.match((new MongoMatch).exists("service", true))
		pipe.group((new MongoGroup("$service")).
			sum("visits", 1).
			avg("response_time", "$response_time").
			addToSet("uniq", "$session"))
		pipe.sort((new MongoMatch).eq("visits", -1))
		pipe.limit(limit(req))
		res.json new JsonArray.from(config.tracker_logs.collection.aggregate(pipe))
	end
end

redef class LogEntry
	serialize

	# Is this request targeted at the API?
	var is_api: Bool is lazy do
		var parts = request.uri.split("/")
		if parts.length >= 2 then return parts[1] == "api"
		return false
	end

	# Is this request targeted at an API service?
	var service: nullable String is lazy do
		if not is_api then return null
		var parts = request.uri.split("/")
		if parts.length >= 3 then return parts[2]
		return null
	end
end
