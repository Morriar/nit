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

module test_stats is test_suite

import game::game_stats
import test_base

class TestGameStats
	super NitrpgTestHelper

	fun test_last_stats do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		var s1 = g1.last_stats(app)
		var s2 = g2.last_stats(app)

		s1.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		assert g1.last_stats(app).nitcoins == 1
		assert g2.last_stats(app).nitcoins == 0
	end

	fun test_players_ranking do
		var g1 = new Game(load_repo("nitlang/nit"))

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		app.players.save p1
		app.players.save p2

		app.events.save new TestEvent(g1, p1)
		app.events.save new TestEvent(g1, p2)

		var s1 = p1.last_stats(app)
		var s2 = p2.last_stats(app)

		s2.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		var ranking = g1.players_ranking(app)
		assert ranking.length == 2
		assert ranking.first.player == p2
		assert ranking.last.player == p1
	end
end

class TestPlayerStats
	super NitrpgTestHelper

	fun test_last_stats do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		var s1 = p1.last_stats(app)
		var s2 = p2.last_stats(app)

		s1.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		assert p1.last_stats(app).nitcoins == 1
		assert p2.last_stats(app).nitcoins == 0
	end

	fun test_games_ranking do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		app.games.save g1
		app.games.save g2

		var p1 = new Player(load_user("privat"))

		app.players.save p1

		app.events.save new TestEvent(g1, p1)
		app.events.save new TestEvent(g2, p1)

		var s1 = g1.last_stats(app)
		var s2 = g2.last_stats(app)

		s2.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		var ranking = p1.games_ranking(app)
		assert ranking.length == 2
		assert ranking.first.game == g2
		assert ranking.last.game == g1
	end

	fun test_unlock_achievement_increment_stats do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		app.players.save p1
		app.players.save p2

		p1.unlock_achievement(app, new TestAchievement1)

		assert p1.last_stats(app).nitcoins == 10
		assert p1.last_stats(app).achievements == 1
		assert p2.last_stats(app).nitcoins == 0
		assert p2.last_stats(app).achievements == 0
	end
end

class TestAchievementStats
	super NitrpgTestHelper

	fun test_last_stats do
		var a1 = new TestAchievement1
		var a2 = new TestAchievement2

		var s1 = a1.last_stats(app)
		var s2 = a2.last_stats(app)

		s1.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		assert a1.last_stats(app).nitcoins == 1
		assert a2.last_stats(app).nitcoins == 0
	end

	fun test_players_ranking do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		app.players.save p1
		app.players.save p2

		p1.unlock_achievement(app, new TestAchievement1)
		p2.unlock_achievement(app, new TestAchievement1)

		var s1 = p1.last_stats(app)
		var s2 = p2.last_stats(app)

		s2.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		var ranking = (new TestAchievement1).players_ranking(app)
		assert ranking.length == 2
		assert ranking.first.player == p2
		assert ranking.last.player == p1
	end

	fun test_games_ranking do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		app.games.save g1
		app.games.save g2

		var p1 = new Player(load_user("privat"))

		app.players.save p1

		p1.unlock_achievement(app, new TestAchievement1, g1)
		p1.unlock_achievement(app, new TestAchievement1, g2)

		var s1 = g1.last_stats(app)
		var s2 = g2.last_stats(app)

		s2.nitcoins += 1

		app.stats.save s1
		app.stats.save s2

		var ranking = (new TestAchievement1).games_ranking(app)
		assert ranking.length == 2
		assert ranking.first.game == g2
		assert ranking.last.game == g1
	end
end
