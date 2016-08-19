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

module test_events is test_suite

import game::game_events
import test_base

class TestEvents
	super NitrpgTestHelper

	fun test_raw_event do
		var e1 = new TestEvent
		var e2 = new TestEvent
		app.events.save e1
		app.events.save e2
		assert e1 != e2
		assert app.events.find_by_id(e1.id) == e1
		assert app.events.find_by_id(e2.id) == e2
	end

	fun test_game_event do
		var game = new Game(load_repo("privat/nit"))
		var e = new TestEvent(game= game)
		app.events.save e
		var o = app.events.find_by_id(e.id)
		assert o != null
		assert o == e
		assert o.game == game
	end

	fun test_player_event do
		var player = new Player(load_user("Morriar"))
		var e = new TestEvent(player= player)
		app.events.save e
		var o = app.events.find_by_id(e.id)
		assert o != null
		assert o == e
		assert o.player == player
	end

	fun test_gh_event do
		var repo = api.load_repo("privat/nit")
		assert repo != null
		var issue = api.load_issue(repo, 1)
		assert issue != null
		var gh = new IssuesEvent("id", "action", repo, issue)
		var e = new TestEvent(gh_event= gh)
		app.events.save e
		var o = app.events.find_by_id(e.id)
		assert o != null
		assert o == e
		assert o.gh_event.as(not null).id == gh.id
	end
end

class TestGameEvents
	super NitrpgTestHelper

	fun test_find_events do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		var e1 = new TestEvent(game= g1)
		var e2 = new TestEvent(game= g1)
		var e3 = new TestEvent(game= g2)
		var e4 = new TestEvent

		app.events.save e1
		app.events.save e2
		app.events.save e3
		app.events.save e4

		var game_events = g1.find_events(app)
		assert game_events.length == 2
		assert game_events.has(e1)
		assert game_events.has(e2)

		game_events = g2.find_events(app)
		assert game_events.length == 1
		assert game_events.has(e3)
	end

	fun test_find_players do
		var g = new Game(load_repo("nitlang/nit"))

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))
		var p3 = new Player(load_user("m0rr14r"))

		app.players.save p1
		app.players.save p2
		app.players.save p3

		var e1 = new TestEvent(game= g, player= p1)
		var e2 = new TestEvent(game= g, player= p1)
		var e3 = new TestEvent(game=g, player= p2)
		var e4 = new TestEvent(player= p3)

		app.events.save e1
		app.events.save e2
		app.events.save e3
		app.events.save e4

		var game_players = g.find_players(app)
		assert game_players.length == 2
		assert game_players.has(p1)
		assert game_players.has(p2)
	end

	fun test_find_player do
		var g = new Game(load_repo("nitlang/nit"))

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))
		var p3 = new Player(load_user("m0rr14r"))

		app.players.save p1
		app.players.save p2
		app.players.save p3

		var e1 = new TestEvent(game= g, player= p1)
		var e2 = new TestEvent(game= g, player= p1)
		var e3 = new TestEvent(game=g, player= p2)
		var e4 = new TestEvent(player= p3)

		app.events.save e1
		app.events.save e2
		app.events.save e3
		app.events.save e4

		assert g.find_player(app, p1.id) == p1
		assert g.find_player(app, p2.id) == p2
		assert g.find_player(app, p3.id) == null
	end
end

class TestPlayerEvents
	super NitrpgTestHelper

	fun test_find_events do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		var e1 = new TestEvent(player= p1)
		var e2 = new TestEvent(player= p1)
		var e3 = new TestEvent(player= p2)
		var e4 = new TestEvent

		app.events.save e1
		app.events.save e2
		app.events.save e3
		app.events.save e4

		var player_events = p1.find_events(app)
		assert player_events.length == 2
		assert player_events.has(e1)
		assert player_events.has(e2)

		player_events = p2.find_events(app)
		assert player_events.length == 1
		assert player_events.has(e3)
	end

	fun test_find_games do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		app.games.save g1
		app.games.save g2

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		var e1 = new TestEvent(game= g1, player= p1)
		var e2 = new TestEvent(game= g2, player= p1)
		var e3 = new TestEvent(game=g1, player= p2)
		var e4 = new TestEvent(player= p2)

		app.events.save e1
		app.events.save e2
		app.events.save e3
		app.events.save e4

		var player_games = p1.find_games(app)
		assert player_games.length == 2
		assert player_games.has(g1)
		assert player_games.has(g2)

		player_games = p2.find_games(app)
		assert player_games.length == 1
		assert player_games.has(g1)
	end
end
