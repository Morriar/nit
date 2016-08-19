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

module test_rules_issues is test_suite

import rules::rules_issues
import test_base

class TestPRReactor
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var issue: Issue = api.load_issue(repo, 2272).as(not null) is lazy

	fun test_reactor_issue_open do
		var r = new IssuesEventReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.issue_open(repo, issue)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.issues == 1
		assert pstats.issues_open == 1
		var gstats = g.load_stats(app)
		assert gstats.issues == 1
		assert gstats.issues_open == 1
	end

	fun test_reactor_issue_close do
		var r = new IssuesEventReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.issue_open(repo, issue)
		r.react_game_event(app, g, event)
		event = egen.issue_close(repo, issue)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.issues == 1
		assert pstats.issues_open == 0
		var gstats = g.load_stats(app)
		assert gstats.issues == 1
		assert gstats.issues_open == 0
	end

	fun test_reactor_issue_reopen do
		var r = new IssuesEventReactor
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.issue_open(repo, issue)
		r.react_game_event(app, g, event)
		event = egen.issue_close(repo, issue)
		r.react_game_event(app, g, event)
		event = egen.issue_reopen(repo, issue)
		r.react_game_event(app, g, event)

		var pstats = p.load_stats(app)
		assert pstats.issues == 1
		assert pstats.issues_open == 1
		var gstats = g.load_stats(app)
		assert gstats.issues == 1
		assert gstats.issues_open == 1
	end
end

class TestRulesIssues
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var issue: Issue = api.load_issue(repo, 2272).as(not null) is lazy

	fun test_unlock_0_issues do
		var a = new Player1Issue
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.issues = 0
		app.stats.save stats

		var event = egen.issue_open(repo, issue)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 0
		assert not p.has_achievement(app, a)
	end

	fun test_unlock_1st_issue do
		var a = new Player1Issue
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.issues = 1
		app.stats.save stats

		var event = egen.issue_open(repo, issue)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_100_issues do
		var a = new Player100Issues
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var stats = p.load_stats(app)
		stats.issues = 100
		app.stats.save stats

		var event = egen.issue_open(repo, issue)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_talk_about_nitdoc do
		var a = new IssueAboutNitdoc
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.issue_open(repo, issue)
		event.issue.title = "Something about Nitdoc"
		a.react_game_event(app, g, event)

		var stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_talk_about_ffi do
		var a = new IssueAboutFFI
		var g = new Game(repo)
		var p = new Player(load_user("Morriar"))

		var event = egen.issue_open(repo, issue)
		event.issue.title = "Something about FFI"
		a.react_game_event(app, g, event)

		var stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end
end
