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

# Handlers for Players
module api_players

import api_base

# Players list
#
# GET /api/players
class APIPlayers
	super APIHandler

	redef fun get(req, res) do
		res.page(req, app.stats.players_ranking)
	end
end

# Player profile
#
# GET /api/players/:login
class APIPlayer
	super APIHandler

	# Build the player from `:login`
	#
	# Set HTTP 400 if params are not found.
	# Set HTTP 404 if player is not found.
	fun get_player(req: HttpRequest, res: HttpResponse): nullable Player do
		var login = req.param("login")
		if login == null then
			res.error 400
			return null
		end
		var player = app.players.find_by_id(login)
		if player == null then
			res.error 404
			return null
		end
		return player
	end

	redef fun get(req, res) do
		var player = get_player(req, res)
		if player == null then return
		res.json player
	end
end

# Player events
#
# GET /api/players/:login/events
class APIPlayerEvents
	super APIPlayer
	super ListHandler

	redef fun get(req, res) do
		var player = get_player(req, res)
		if player == null then return
		var count = player.count_events(app)
		var items = player.find_events(app, get_skip(req), get_limit(req))
		res.json new Pagination(count, items)
	end
end

# Player achievements
#
# GET /api/players/:login/achievements
class APIPlayerAchievements
	super APIPlayer
	super ListHandler

	redef fun get(req, res) do
		var player = get_player(req, res)
		if player == null then return
		res.page(req, player.unlocked_achievements(app))
	end
end

# Player stats
#
# GET /api/players/:login/stats
class APIPlayerStats
	super APIPlayer

	redef fun get(req, res) do
		var player = get_player(req, res)
		if player == null then return
		res.json player.last_stats(app)
	end
end

# API router for `/players`
class APIPlayerRouter
	super APIRouter

	redef init do
		use("/", new APIPlayers(app))
		use("/:login", new APIPlayer(app))
		use("/:login/events", new APIPlayerEvents(app))
		use("/:login/achievements", new APIPlayerAchievements(app))
		use("/:login/stats", new APIPlayerStats(app))
	end
end
