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

module test_achievements is test_suite

import game::game_achievements
import test_base

class TestAchievements
	super NitrpgTestHelper

	private var achievement = new TestAchievement1

	fun test_find_players do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))
		var p3 = new Player(load_user("m0rr14r"))

		app.players.save p1
		app.players.save p2
		app.players.save p3

		p1.unlock_achievement(app, achievement)
		p2.unlock_achievement(app, achievement)

		var players = achievement.find_players(app)
		assert players.length == 2
		assert players.has(p1)
		assert players.has(p2)
	end

	fun test_find_games do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		app.games.save g1
		app.games.save g2

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))
		var p3 = new Player(load_user("m0rr14r"))

		app.players.save p1
		app.players.save p2
		app.players.save p3

		p1.unlock_achievement(app, achievement, g1)
		p1.unlock_achievement(app, achievement, g2)
		p2.unlock_achievement(app, achievement, g1)

		var games = achievement.find_games(app)
		assert games.length == 2
		assert games.has(g1)
		assert games.has(g2)
	end
end

class TestPlayerAchievements
	super NitrpgTestHelper

	private var achievement = new TestAchievement1

	fun test_player_unlock_achievement do
		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		app.players.save p1
		app.players.save p2

		p1.unlock_achievement(app, achievement)

		assert p1.has_achievement(app, achievement)
		assert p1.unlocked_achievements(app).length == 1

		assert not p2.has_achievement(app, achievement)
		assert p2.unlocked_achievements(app).is_empty
	end

	fun test_player_unlock_achievement_once do
		var p1 = new Player(load_user("privat"))

		app.players.save p1

		p1.unlock_achievement(app, achievement)
		p1.unlock_achievement(app, achievement)

		assert p1.has_achievement(app, achievement)
		assert p1.unlocked_achievements(app).length == 1
	end

	fun test_player_unlock_achievement_trigger_event do
		var p1 = new Player(load_user("privat"))

		app.players.save p1

		assert p1.find_events(app).length == 0
		p1.unlock_achievement(app, achievement)
		assert p1.find_events(app).length == 1
		assert p1.find_events(app).first isa AchievementUnlockedEvent
	end

end

class TestGameAchievements
	super NitrpgTestHelper

	private var achievement = new TestAchievement1

	fun test_game_unlock_achievement do
		var g1 = new Game(load_repo("nitlang/nit"))
		var g2 = new Game(load_repo("Morriar/nit"))

		var p1 = new Player(load_user("privat"))
		var p2 = new Player(load_user("Morriar"))

		app.players.save p1
		app.players.save p2

		p1.unlock_achievement(app, achievement, g1)

		assert g1.has_achievement(app, achievement)
		assert g1.unlocked_achievements(app).length == 1

		assert not g2.has_achievement(app, achievement)
		assert g2.unlocked_achievements(app).is_empty
	end

	fun test_game_unlock_achievement_trigger_event do
		var g1 = new Game(load_repo("nitlang/nit"))
		var p1 = new Player(load_user("privat"))

		app.players.save p1

		assert g1.find_events(app).length == 0
		p1.unlock_achievement(app, achievement, g1)
		assert g1.find_events(app).length == 1
		assert g1.find_events(app).first isa AchievementUnlockedEvent
	end
end
