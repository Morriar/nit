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

module test_rules_pull_requests is test_suite

import rules::rules_pull_requests
import test_base

class TestPRReactor
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var pull: PullRequest = api.load_pull(repo, 2272).as(not null) is lazy

	fun test_reactor_pull_open do
		var r = new PullRequestReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.pull_open(repo, pull)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.pulls == 1
		assert pstats.pulls_open == 1
		assert pstats.nitcoins == 10
		var gstats = g.load_stats(app)
		assert gstats.pulls == 1
		assert gstats.pulls_open == 1
		assert gstats.nitcoins == 10
	end

	fun test_reactor_pull_close do
		var r = new PullRequestReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.pull_open(repo, pull)
		r.react_game_event(app, g, event)
		event = egen.pull_close(repo, pull)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.pulls == 1
		assert pstats.pulls_open == 0
		assert pstats.commits == 2
		assert pstats.nitcoins == 12
		var gstats = g.load_stats(app)
		assert gstats.pulls == 1
		assert gstats.pulls_open == 0
		assert gstats.commits == 2
		assert gstats.nitcoins == 12
	end

	fun test_reactor_pull_reopen do
		var r = new PullRequestReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.pull_open(repo, pull)
		r.react_game_event(app, g, event)
		event = egen.pull_close(repo, pull)
		r.react_game_event(app, g, event)
		event = egen.pull_reopen(repo, pull)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.pulls == 1
		assert pstats.pulls_open == 1
		var gstats = g.load_stats(app)
		assert gstats.pulls == 1
		assert gstats.pulls_open == 1
	end
end

class TestRulesPR
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var pull: PullRequest = api.load_pull(repo, 2272).as(not null) is lazy

	fun test_unlock_0_pr do
		var a = new Player1Pull
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.pulls = 0
		app.stats.save stats

		var event = egen.pull_open(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 0
		assert not p.has_achievement(app, a)
	end

	fun test_unlock_1st_pr do
		var a = new Player1Pull
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.pulls = 1
		app.stats.save stats

		var event = egen.pull_open(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_100_prs do
		var a = new Player100Pulls
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.pulls = 100
		app.stats.save stats

		var event = egen.pull_open(repo, pull)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end
end
