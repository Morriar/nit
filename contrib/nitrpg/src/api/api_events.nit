# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Handlers for Events
module api_events

import api_base

# Events list
#
# GET /api/events
class APIEvents
	super ListHandler

	redef fun get(req, res) do
		var count = app.events.count
		var items = app.events.find_all(null, get_skip(req), get_limit(req))
		res.json new Pagination(count, items)
	end
end

# Event details
#
# GET /api/event/:id
class APIEvent
	super APIHandler

	# Build the event from the `req` params
	#
	# Set HTTP 400 if params are not found.
	# Set HTTP 404 if the event is not found.
	fun get_event(req: HttpRequest, res: HttpResponse): nullable Event do
		var id = req.param("id")
		if id == null then
			res.error 400
			return null
		end
		var event = app.events.find_by_id(id)
		if event == null then
			res.error 404
			return null
		end
		return event
	end

	redef fun get(req, res) do
		var event = get_event(req, res)
		if event == null then return
		res.json event
	end
end

# API router for `/events`
class APIEventRouter
	super APIRouter

	redef init do
		use("/", new APIEvents(app))
		use("/:id", new APIEvent(app))
	end
end
