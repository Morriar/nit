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

# Game events
#
# Events are used to link game and players
module game_events

import game::game_base

redef class NitrpgApp
	# Events repo
	var events = new EventRepo(config.db.collection("events")) is lazy
end

# Event representation
#
# Each events are linked to a Game
abstract class Event
	super RepoObject
	serialize

	# Game this event belongs to (if any)
	var game: nullable Game

	# Player this event belongs to (if any)
	var player: nullable Player

	# Timestamp of the event
	var timestamp: Int = get_time

	# Github event related to this event if any
	var gh_event: nullable GithubEvent

	redef fun to_s do return timestamp.to_s
end

# Event repository
class EventRepo
	super MongoRepository[Event]
end

redef class Game

	# Find all events for a Game
	fun find_events(app: NitrpgApp, skip, limit: nullable Int): Array[Event] do
		var match = (new MongoMatch).eq("game._id", id)
		var p = new MongoPipeline
		p.match(match)
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.skip skip
		p.limit limit

		return app.events.aggregate(p)
	end

	# Count all events for a Game
	fun count_events(app: NitrpgApp): Int do
		return app.events.count((new MongoMatch).eq("game._id", id))
	end

	# Find players that have an event in a `game`
	fun find_players(app: NitrpgApp, skip, limit: nullable Int): Array[Player] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("game._id", id))
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

	# Find player that have an event in a `game` by it's id
	fun find_player(app: NitrpgApp, id: String): nullable Player do
		var res = app.events.find((new MongoMatch).eq("game._id", self.id).eq("player._id", id))
		if res == null then return null
		return res.player
	end
end

redef class Player

	# Find all events for a Player
	fun find_events(app: NitrpgApp, skip, limit: nullable Int): Array[Event] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("player._id", id))
		p.sort((new MongoMatch).eq("timestamp", -1).eq("_id", -1))
		p.skip skip
		p.limit limit

		return app.events.aggregate(p)
	end

	# Count all events for a Player
	fun count_events(app: NitrpgApp): Int do
		return app.events.count((new MongoMatch).eq("player._id", id))
	end

	# Find games that have an event in a `achievement`
	fun find_games(app: NitrpgApp, skip, limit: nullable Int): Array[Game] do
		var p = new MongoPipeline
		p.match((new MongoMatch).eq("player._id", id))
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
end
