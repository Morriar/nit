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

# Base handlers for API
module api_base

import rules
import popcorn

# Handler for API
#
# All API handlers maintain a link to the `App`.
# So we can access config app services.
abstract class APIHandler
	super Handler

	# App
	var app: NitrpgApp
end

# All API routers maintain a link to the `App`.
# So we can access config app services.
abstract class APIRouter
	super Router

	# App
	var app: NitrpgApp
end

# List handlers are used to return paginated results
#
# Options are passed through the GET args:
# * `skip`: number of items to skip
# * `limit`: number of items to return
#
# ListHander generally returns a `Pagination` instance.
abstract class ListHandler
	super APIHandler

	# Get the skip value from GET args or return null
	fun get_skip(req: HttpRequest): nullable Int do
		var skip = req.int_arg("skip")
		if skip == null then return null
		return skip.to_i
	end

	# Get the limit value from GET args or return null
	fun get_limit(req: HttpRequest): nullable Int do
		var limit = req.int_arg("limit")
		if limit == null then return null
		return limit.to_i
	end
end

# A paginated result
#
# We do not return all the results for a request in one response.
# Instead, we use pagination to avoid big chunks of JSON and improve
# performances server side.
class Pagination
	super Jsonable
	serialize

	# Total number of document matching the query
	var total: Int

	# Items to return
	var items: Array[nullable Jsonable]

	# Does self contains all the items that should be returned?
	var is_complete: Bool is lazy, serialize_as("complete") do
		return items.length == total
	end

	# Is self empty?
	var is_empty: Bool is lazy, serialize_as("empty") do
		return items.is_empty
	end

	redef fun to_json do return serialize_to_json
end

redef class HttpResponse

	# Build a page of `items` using GET args from `req`
	fun page(req: HttpRequest, items: Array[nullable Jsonable]) do
		var count = items.length
		var skip = req.int_arg("skip")
		if skip == null then skip = 0
		if skip < 0 or skip > count then
			json new Pagination(count, new Array[nullable Jsonable])
			return
		end
		var limit = req.int_arg("limit")
		if limit == null or limit > count - skip then limit = count - skip
		if limit < 0 then
			json new Pagination(count, new Array[nullable Jsonable])
			return
		end
		var page = items.subarray(skip, limit)
		json new Pagination(count, page)
	end
end
