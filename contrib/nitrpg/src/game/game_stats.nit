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

module game_stats

import game::game_achievements

redef class NitrpgApp

	# Stats repo
	var stats = new StatsRepo(config.db.collection("statistics")) is lazy
end

abstract class Stats
	super RepoObject
	serialize

	var timestamp: Int = get_time

	redef fun to_json do return serialize_to_json
end

class GameStats
	super Stats
	serialize

	var game: Game

	var players: Int = 0 is writable

	var nitcoins: Int = 0 is writable

	var pulls: Int = 0 is writable

	var pulls_open: Int = 0 is writable

	var issues: Int = 0 is writable

	var issues_open: Int = 0 is writable

	var commits: Int = 0 is writable

	var reviews: Int = 0 is writable

	var comments: Int = 0 is writable

	var achievements: Int = 0 is writable

	init from_last(last: GameStats) do
		init last.game
		players = last.players
		nitcoins = last.nitcoins
		pulls = last.pulls
		pulls_open = last.pulls_open
		issues = last.issues
		issues_open = last.issues_open
		commits = last.commits
		reviews = last.reviews
		comments = last.comments
		achievements = last.achievements
	end
end

class PlayerStats
	super Stats
	serialize

	var player: Player

	var nitcoins: Int = 0 is writable

	var pulls: Int = 0 is writable

	var pulls_open: Int = 0 is writable

	var issues: Int = 0 is writable

	var issues_open: Int = 0 is writable

	var commits: Int = 0 is writable

	var reviews: Int = 0 is writable

	var comments: Int = 0 is writable

	var achievements: Int = 0 is writable

	var games: Int = 0 is writable

	init from_last(last: PlayerStats) do
		init last.player
		nitcoins = last.nitcoins
		pulls = last.pulls
		pulls_open = last.pulls_open
		issues = last.issues
		issues_open = last.issues_open
		commits = last.commits
		reviews = last.reviews
		comments = last.comments
		achievements = last.achievements
		games = last.games
	end
end

class AchievementStats
	super Stats
	serialize

	var achievement: Achievement

	var games: Int = 0 is writable

	var players: Int = 0 is writable

	var nitcoins: Int = 0 is writable

	init from_last(last: AchievementStats) do
		init last.achievement
		games = last.games
		nitcoins = last.nitcoins
		players = last.players
	end
end

class StatsRepo
	super MongoRepository[Stats]

	# Find last stats for `game`
	fun players_ranking: Array[PlayerStats] do
		var p = new MongoPipeline
		p.match((new MongoMatch).exists("player", true))
		p.sort((new MongoMatch).eq("_id", -1))
		p.group((new MongoGroup("$player._id")).first("stats", "$$ROOT"))
		p.sort((new MongoMatch).eq("stats.nitcoins", -1))
		var res = collection.aggregate(p)

		var arr = new Array[PlayerStats]
		for obj in res do
			var e = obj["stats"].as(JsonObject)
			var o = deserialize(e.to_json)
			if o isa PlayerStats then arr.add o
		end
		return arr
	end

	# Find last stats for `game`
	fun games_ranking: Array[GameStats] do
		var p = new MongoPipeline
		p.match((new MongoMatch).exists("game", true))
		p.sort((new MongoMatch).eq("_id", -1))
		p.group((new MongoGroup("$game._id")).first("stats", "$$ROOT"))
		p.sort((new MongoMatch).eq("stats.nitcoins", -1))
		var res = collection.aggregate(p)

		var arr = new Array[GameStats]
		for obj in res do
			var e = obj["stats"].as(JsonObject)
			var o = deserialize(e.to_json)
			if o isa GameStats then arr.add o
		end
		return arr
	end
end

redef class Game
	# Load stats for `self`
	fun load_stats(app: NitrpgApp): GameStats do
		var last_stats = last_stats(app)
		return new GameStats.from_last(last_stats)
	end

	# Find stats by `game`
	fun find_stats(app: NitrpgApp): Array[GameStats] do
		var res = new Array[GameStats]
		for stats in app.stats.find_all((new MongoMatch).eq("game._id", id)) do
			if stats isa GameStats then res.add stats
		end
		return res
	end

	# Find last stats for `game`
	fun last_stats(app: NitrpgApp): GameStats do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("game._id", id))
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.limit 1
		var res = app.stats.aggregate(p)
		if res.is_empty then return new GameStats(self)
		var first = res.first
		if not first isa GameStats then return new GameStats(self)
		return first
	end

	fun players_ranking(app: NitrpgApp): Array[PlayerStats] do
		var res = new Array[PlayerStats]
		var players = find_players(app)
		for event in app.stats.players_ranking do
			if players.has(event.player) then res.add event
		end
		return res
	end
end

redef class Player

	# Load stats for `self`
	fun load_stats(app: NitrpgApp): PlayerStats do
		var last_stats = last_stats(app)
		return new PlayerStats.from_last(last_stats)
	end

	# Find stats by `player`
	fun find_stats(app: NitrpgApp): Array[PlayerStats] do
		var res = new Array[PlayerStats]
		for stats in app.stats.find_all((new MongoMatch).eq("player._id", id)) do
			if stats isa PlayerStats then res.add stats
		end
		return res
	end

	# Find last stats for `player`
	fun last_stats(app: NitrpgApp): PlayerStats do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("player._id", id))
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.limit 1

		var res = app.stats.aggregate(p)
		if res.is_empty then return new PlayerStats(self)
		var first = res.first
		if not first isa PlayerStats then return new PlayerStats(self)
		return first
	end

	fun games_ranking(app: NitrpgApp): Array[GameStats] do
		var res = new Array[GameStats]
		var games = find_games(app)
		for event in app.stats.games_ranking do
			if games.has(event.game) then res.add event
		end
		return res
	end

	redef fun unlock_achievement(app, achievement, game, event) do
		if has_achievement(app, achievement, game) then return null

		# update stats
		var player_stats = load_stats(app)
		player_stats.nitcoins += achievement.reward
		player_stats.achievements += 1
		app.stats.save player_stats

		var ach_stats = achievement.load_stats(app)
		ach_stats.nitcoins += achievement.reward
		ach_stats.players += 1
		if game != null then
			var game_stats = game.load_stats(app)
			game_stats.nitcoins += achievement.reward
			if not game.has_achievement(app, achievement) then
				game_stats.achievements += 1
				ach_stats.games += 1
			end
			app.stats.save game_stats
		end
		app.stats.save ach_stats

		return super
	end
end

redef class Achievement
	# Load stats for `self`
	fun load_stats(app: NitrpgApp): AchievementStats do
		var last_stats = last_stats(app)
		return new AchievementStats.from_last(last_stats)
	end

	# Find last stats for `achievement`
	fun last_stats(app: NitrpgApp): AchievementStats do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("achievement._id", id))
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.limit 1

		var res = app.stats.aggregate(p)
		if res.is_empty then return new AchievementStats(self)
		var first = res.first
		if not first isa AchievementStats then return new AchievementStats(self)
		return first
	end

	# Find stats by `achievement`
	fun find_stats(app: NitrpgApp): Array[AchievementStats] do
		var res = new Array[AchievementStats]
		for stats in app.stats.find_all((new MongoMatch).eq("achievement._id", id)) do
			if stats isa AchievementStats then res.add stats
		end
		return res
	end

	fun players_ranking(app: NitrpgApp): Array[PlayerStats] do
		var res = new Array[PlayerStats]
		var players = find_players(app)
		for event in app.stats.players_ranking do
			if players.has(event.player) then res.add event
		end
		return res
	end

	fun games_ranking(app: NitrpgApp): Array[GameStats] do
		var res = new Array[GameStats]
		var games = find_games(app)
		for event in app.stats.games_ranking do
			if games.has(event.game) then res.add event
		end
		return res
	end
end
