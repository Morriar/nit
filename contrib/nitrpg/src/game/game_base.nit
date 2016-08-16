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

# Define the game model
module game_base

import github::events
import popcorn::pop_repos
import mongodb::queries
import config

# Game app
class NitrpgApp
	super App

	# Kind of configuration file
	type CONFIG: NitrpgConfig

	# Configuration file
	var config: CONFIG

	# Games repo
	var games = new GameRepo(config.db.collection("games")) is lazy

	# Players repo
	var players = new PlayerRepo(config.db.collection("players")) is lazy

	# Application logger shortcut
	#
	# We use the Popcorn one from the config
	fun logger: ConsoleLog do return config.logger
end

# Game representation
#
# Each game is linked to a Github `Repo`.
class Game
	super RepoObject
	serialize

	# Game ID is base on `repo.full_name` so we have one game by repo
	redef var id is lazy, serialize_as "_id" do return repo.full_name

	# Repo this game is about
	var repo: Repo

	redef fun to_s do return repo.full_name
end

# Game repository
class GameRepo
	super MongoRepository[Game]
end

# Player representation
#
# Each player is linked to a Github `User`
class Player
	super RepoObject
	serialize

	# Player ID is based on `user.login` so we have one player by user
	redef var id is lazy, serialize_as "_id" do return user.login

	# Github user
	var user: User

	redef fun to_s do return user.login
end

# Player repository
class PlayerRepo
	super MongoRepository[Player]

	# Find a player by it's `user`
	fun find_by_user(user: User): nullable Player do
		return find_by_id(user.login)
	end
end
