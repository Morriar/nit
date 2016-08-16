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

# Handlers for Achievements
module api_achievements

import api_base

# Achievements list
#
# GET /api/achievements
class APIAchievements
	super ListHandler

	redef fun get(req, res) do
		res.page(req, app.achievements.find_all)
	end
end

# Achievement details
#
# GET /api/achievement/:id
class APIAchievement
	super APIHandler

	# Build the achievement from the `req` params
	#
	# Set HTTP 400 if params are not found.
	# Set HTTP 404 if the achievement is not found.
	fun get_achievement(req: HttpRequest, res: HttpResponse): nullable Achievement do
		var id = req.param("id")
		if id == null then
			res.error 400
			return null
		end
		var achievement = app.achievements.find_by_id(id)
		if achievement == null then
			res.error 404
			return null
		end
		return achievement
	end

	redef fun get(req, res) do
		var achievement = get_achievement(req, res)
		if achievement == null then return
		res.json achievement
	end
end

# Players who unlocked an achievement
#
# GET /api/achievement/:id/players
class APIAchievementPlayers
	super APIAchievement
	super ListHandler

	redef fun get(req, res) do
		var achievement = get_achievement(req, res)
		if achievement == null then return
		res.page(req, achievement.players_ranking(app))
	end
end

# Games which unlocked an achievement
#
# GET /api/achievement/:id/games
class APIAchievementGames
	super APIAchievement
	super ListHandler

	redef fun get(req, res) do
		var achievement = get_achievement(req, res)
		if achievement == null then return
		res.page(req, achievement.games_ranking(app))
	end
end

# Player events
#
# GET /api/achievement/:id/events
class APIAchievementEvents
	super APIAchievement
	super ListHandler

	redef fun get(req, res) do
		var achievement = get_achievement(req, res)
		if achievement == null then return
		var count = achievement.count_events(app)
		var items = achievement.find_events(app, get_skip(req), get_limit(req))
		res.json new Pagination(count, items)
	end
end

# Achievement stats
#
# GET /api/achievements/:login/stats
class APIAchievementStats
	super APIAchievement

	redef fun get(req, res) do
		var achievement = get_achievement(req, res)
		if achievement == null then return
		res.json achievement.last_stats(app)
	end
end

# API router for `/achievements`
class APIAchievementRouter
	super APIRouter

	redef init do
		use("/", new APIAchievements(app))
		use("/:id", new APIAchievement(app))
		use("/:id/players", new APIAchievementPlayers(app))
		use("/:id/games", new APIAchievementGames(app))
		use("/:id/events", new APIAchievementEvents(app))
		use("/:id/stats", new APIAchievementStats(app))
	end
end
