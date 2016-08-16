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

# Handlers for Games
module api_games

import api_base

# Games list
#
# GET /api/games
class APIGames
	super ListHandler

	redef fun get(req, res) do
		res.page(req, app.stats.games_ranking)
	end
end

# Game details
#
# GET /api/games/:full_name
class APIGame
	super APIHandler

	# Build the game from the `req` params
	#
	# Set HTTP 400 if params are not found.
	# Set HTTP 404 if the game is not found.
	fun get_game(req: HttpRequest, res: HttpResponse): nullable Game do
		var user = req.param("user")
		if user == null then
			res.error 400
			return null
		end
		var repo = req.param("repo")
		if repo == null then
			res.error 400
			return null
		end
		var gid = "{user}/{repo}"
		var game = app.games.find_by_id(gid)
		if game == null then
			res.error 404
			return null
		end
		return game
	end

	redef fun get(req, res) do
		var game = get_game(req, res)
		if game == null then return
		res.json game
	end
end

# Game players
#
# GET /api/games/:full_name/players
class APIGamePlayers
	super APIGame

	redef fun get(req, res) do
		var game = get_game(req, res)
		if game == null then return
		res.page(req, game.players_ranking(app))
	end
end
# Game events
#
# GET /api/games/:full_name/events
class APIGameEvents
	super APIGame
	super ListHandler

	redef fun get(req, res) do
		var game = get_game(req, res)
		if game == null then return
		var count = game.count_events(app)
		var items = game.find_events(app, get_skip(req), get_limit(req))
		res.json new Pagination(count, items)
	end
end

# Game achievements
#
# GET /api/games/:login/achievements
class APIGameAchievements
	super APIGame

	redef fun get(req, res) do
		var game = get_game(req, res)
		if game == null then return
		res.page(req, game.unlocked_achievements(app))
	end
end

# Game stats
#
# GET /api/games/:id/stats
class APIGameStats
	super APIGame

	redef fun get(req, res) do
		var game = get_game(req, res)
		if game == null then return
		res.json game.last_stats(app)
	end
end

# API router for `/games`
class APIGameRouter
	super APIRouter

	redef init do
		use("/", new APIGames(app))
		use("/:user/:repo", new APIGame(app))
		use("/:user/:repo/players", new APIGamePlayers(app))
		use("/:user/:repo/events", new APIGameEvents(app))
		use("/:user/:repo/achievements", new APIGameAchievements(app))
		use("/:user/:repo/stats", new APIGameStats(app))
	end
end
