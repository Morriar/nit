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

# Players unlock achievements by triggering events
module game_achievements

import game::game_events

redef class NitrpgApp
	# Achievements repo
	var achievements = new AchievementRepo(config.db.collection("achievements")) is lazy
end

# Achievement representation
abstract class Achievement
	super RepoObject
	serialize
	autoinit(id, name, desc, reward)

	redef var id

	# Name of this achievement
	var name: String

	# Description of the achievement
	var desc: String

	# Reward that this achievement give in nitcoins
	var reward: Int

	# Find players that have an event in a `achievement`
	fun find_players(app: NitrpgApp, skip, limit: nullable Int): Array[Player] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("achievement._id", id))
		p.group(new MongoGroup("$player._id"))
		p.skip skip
		p.limit limit

		var res = new Array[Player]
		for obj in app.events.collection.aggregate(p) do
			var id = obj["_id"]
			if not id isa String then continue
			res.add app.players.find_by_id(id).as(not null)
		end
		return res
	end

	# Find games that have an event in a `achievement`
	fun find_games(app: NitrpgApp, skip, limit: nullable Int): Array[Game] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("achievement._id", id))
		p.group(new MongoGroup("$game._id"))
		p.skip skip
		p.limit limit

		var res = new Array[Game]
		for obj in app.events.collection.aggregate(p) do
			var id = obj["_id"]
			if not id isa String then continue
			res.add app.games.find_by_id(id).as(not null)
		end
		return res
	end

	# Find events for an `achievement`
	fun find_events(app: NitrpgApp, skip, limit: nullable Int): Array[Event] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("achievement._id", id))
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.skip skip
		p.limit limit

		return app.events.aggregate(p)
	end

	# Count all events for an achievement
	fun count_events(app: NitrpgApp): Int do
		return app.events.count((new MongoMatch).eq("achievement._id", id))
	end

	redef fun to_s do return name
end

# Achivement repository
class AchievementRepo
	super MongoRepository[Achievement]

	# Find an achivement by it's `name`
	fun find_by_name(name: String): nullable Achievement do
		return find((new MongoMatch).eq("name", name))
	end
end

redef class Game
	# Does `game` has an acheivement event for `achievement`?
	fun has_achievement(app: NitrpgApp, achievement: Achievement): Bool do
		var res = app.events.find(
			(new MongoMatch).eq("game._id", id).eq("achievement._id", achievement.id))
		return res != null
	end

	# Find achievements unlocked for `self`
	fun unlocked_achievements(app: NitrpgApp, skip, limit: nullable Int): Array[Achievement] do
		var ach_ids = app.events.collection.aggregate((new MongoPipeline).
			match((new MongoMatch).eq("game._id", id).exists("achievement", true)).
			group((new MongoGroup("$achievement._id")).avg("reward", "$achievement.reward")).
			sort((new MongoMatch).eq("reward", -1)))
		var res = new Array[Achievement]
		for id in ach_ids do
			var a = app.achievements.find_by_id(id["_id"].as(String))
			if a != null then res.add a
		end
		return res
	end
end

redef class Player
	# Check if `self` already has an achievement
	fun has_achievement(app: NitrpgApp, achievement: Achievement, game: nullable Game): Bool do
		var q = new MongoMatch
		q.eq("achievement._id", achievement.id)
		q.eq("player._id", id)
		if game != null then q.eq("game._id", game.id)
		return app.events.find(q) != null
	end

	# Unlock `achievement` for `player` in `game` and link `event` to it
	fun unlock_achievement(app: NitrpgApp, achievement: Achievement, game: nullable Game, event: nullable GithubEvent): nullable AchievementUnlockedEvent do
		if has_achievement(app, achievement, game) then return null
		app.logger.info "[Github]: {self} unlocked {achievement}"

		# Unlock achievement
		var unlock = new AchievementUnlockedEvent(game, self, event, achievement)
		app.events.save unlock

		return unlock
	end

	# Find unlocked achievements for `self`
	fun unlocked_achievements(app: NitrpgApp, skip, limit: nullable Int): Array[Achievement] do
		var ach_ids = app.events.collection.aggregate((new MongoPipeline).
			match((new MongoMatch).eq("player._id", id).exists("achievement", true)).
			group((new MongoGroup("$achievement._id")).avg("reward", "$achievement.reward")).
			sort((new MongoMatch).eq("reward", -1)))
		var res = new Array[Achievement]
		for id in ach_ids do
			var a = app.achievements.find_by_id(id["_id"].as(String))
			if a != null then res.add a
		end
		return res
	end
end

# An event triggered when a player unlocks an achievement
class AchievementUnlockedEvent
	super Event
	serialize

	# Achievement this event is about
	var achievement: Achievement

	# Reward
	var reward: Int is lazy, serialize_as("reward") do return achievement.reward
end
