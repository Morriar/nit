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

module rules_base

import game

# A GameReactor reacts to event sent by a Github
#
# Subclasses of `GameReactor` are implemented to handle all kind of
# `GithubEvent`.
# Depending on the received event, the reactor is used to update game data.
abstract class GameReactor

	# Load an existing game or create a new one
	fun load_game(app: NitrpgApp, event: GithubEvent): Game do
		var game = app.games.find_by_id(event.repo.full_name)
		if game == null then
			game = new Game(event.repo)
			app.games.save(game)
			app.logger.info("[Github] New game {game}")
		end
		return game
	end

	private fun create_player(app: NitrpgApp, user: User): Player do
		var player = new Player(user)
		app.players.save(player)
		app.logger.info("[Github] New player {player}")
		return player
	end

	# Load an existing player or create a new one
	fun load_player(app: NitrpgApp, user: User, game: nullable Game): Player do
		if game == null then # no game, no stats to update
			return app.players.find_by_user(user) or else create_player(app, user)
		end

		# try to find the player within the game
		var player = game.find_player(app, user.login)
		if player == null then # user not in game
			player = app.players.find_by_user(user)
			if player == null then # user does not exists
				player = create_player(app, user)
			end
			# update stats
			var player_stats = player.load_stats(app)
			player_stats.games += 1
			app.stats.save player_stats
			var game_stats = game.load_stats(app)
			game_stats.players += 1
			app.stats.save game_stats
		end
		return player
	end

	# Concrete `GameReactor` implement this method react to specific GithubEvent.
	fun react_event(app: NitrpgApp, event: GithubEvent) do
		app.logger.debug("[Github] Received event {event}")
		var game = load_game(app, event)
		react_game_event(app, game, event)
	end

	# React to a game event
	fun react_game_event(app: NitrpgApp, game: Game, event: GithubEvent) is abstract
end

redef class Achievement
	super GameReactor
end

redef class NitrpgApp
	# Nitrpg rules to apply
	var rules = new NitrpgRules
end

# Nitrpg set of rules
class NitrpgRules

	# Achievement list in this rule set
	var achievements = new Array[Achievement]

	# Reactor list in this rule set
	var reactors = new Array[GameReactor]

	# Add an achievement to this Rules set
	fun add_achievement(achievement: Achievement...) do achievements.add_all achievement

	# Add a reactor to this Rules set
	fun add_reactor(reactor: GameReactor...) do reactors.add_all reactor

	# Register the achievements in the `repo`
	fun register_achievements(app: NitrpgApp) do
		for achievement in achievements do
			app.achievements.save(achievement)
		end
		app.logger.info("Loaded {app.achievements.find_all.length} achievements")
	end
end
