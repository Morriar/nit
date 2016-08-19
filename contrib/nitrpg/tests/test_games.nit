# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_games is test_suite

import game::game_base
import test_base

class TestGame
	super NitrpgTestHelper

	fun test_game do
		var game = new Game(load_repo("nitlang/nit"))
		assert game.id == "nitlang/nit"
	end

	fun test_games_repo do
		var game = new Game(load_repo("nitlang/nit"))
		assert app.games.count == 0
		app.games.save game
		assert app.games.count == 1
		app.games.save game
		assert app.games.count == 1
		game = new Game(load_repo("Morriar/nit"))
		app.games.save game
		assert app.games.count == 2
	end

	fun test_player do
		var player = new Player(load_user("privat"))
		assert player.id == "privat"
	end

	fun test_players_repo do
		var player = new Player(load_user("privat"))
		assert app.players.count == 0
		app.players.save player
		assert app.players.count == 1
		app.players.save player
		assert app.players.count == 1
		player = new Player(load_user("Morriar"))
		app.players.save player
		assert app.players.count == 2
	end
end
