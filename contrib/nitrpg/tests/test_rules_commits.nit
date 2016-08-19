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

module test_rules_commits is test_suite

import rules::rules_commits
import test_base

class TestRulesCommits
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var pull: PullRequest = api.load_pull(repo, 2272).as(not null) is lazy

	fun test_unlock_0_commit do
		var a = new Player1Commit
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.commits = 0
		app.stats.save stats

		var event = egen.pull_close(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 0
		assert not p.has_achievement(app, a)
	end

	fun test_unlock_1st_commit do
		var a = new Player1Commit
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.commits = 1
		app.stats.save stats

		var event = egen.pull_close(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_100_commits do
		var a = new Player100Commits
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.commits = 100
		app.stats.save stats

		var event = egen.pull_close(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end
end
