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

module test_rules_issue_comments is test_suite

import rules::rules_issue_comments
import test_base

class TestIssueCommentReactor
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var issue: Issue = api.load_issue(repo, 2272).as(not null) is lazy
	var comment: IssueComment = api.load_issue_comment(repo, 240504011).as(not null) is lazy

	fun test_reactor_issue_comment do
		var r = new IssueCommentReactor
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var event = egen.issue_comment_event(repo, issue, comment)
		r.react_game_event(app, g, event)

		assert p.load_stats(app).comments == 1
		assert g.load_stats(app).comments == 1
	end

	fun test_reactor_issue_comment_review do
		var r = new IssueCommentReactor
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var event = egen.issue_comment_event(repo, issue, comment)
		event.issue.state = "open"
		event.comment.body = "+1"
		r.react_game_event(app, g, event)

		assert p.load_stats(app).comments == 1
		assert p.load_stats(app).reviews == 1
		assert g.load_stats(app).comments == 1
		assert g.load_stats(app).reviews == 1
	end
end

class TestRulesIssueComment
	super NitrpgTestHelper

	var repo: Repo = load_repo("nitlang/nit") is lazy
	var issue: Issue = api.load_issue(repo, 2272).as(not null) is lazy
	var comment: IssueComment = api.load_issue_comment(repo, 240504011).as(not null) is lazy

	fun test_unlock_0_comment do
		var a = new Player1Comment
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var stats = p.load_stats(app)
		stats.comments = 0
		app.stats.save stats

		var event = egen.issue_comment_event(repo, issue, comment)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 0
		assert not p.has_achievement(app, a)
	end

	fun test_unlock_1st_comment do
		var a = new Player1Comment
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var stats = p.load_stats(app)
		stats.comments = 1
		app.stats.save stats

		var event = egen.issue_comment_event(repo, issue, comment)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		print stats.comments
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_100_comments do
		var a = new Player100Comments
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var stats = p.load_stats(app)
		stats.comments = 100
		app.stats.save stats

		var event = egen.issue_comment_event(repo, issue, comment)
		a.react_game_event(app, g, event)

		stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_ping_god do
		var a = new PlayerPingGod
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var event = egen.issue_comment_event(repo, issue, comment)
		event.comment.body = "@nitlang"
		a.react_game_event(app, g, event)

		var stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_first_review do
		var a = new PlayerFirstReview
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var event = egen.issue_comment_event(repo, issue, comment)
		event.comment.body = "Anyway... +1"
		a.react_game_event(app, g, event)

		var stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

	fun test_unlock_say_nitcoins do
		var a = new PlayerSaysNitcoin
		var g = new Game(repo)
		var p = new Player(load_user("R4PaSs"))

		var event = egen.issue_comment_event(repo, issue, comment)
		event.comment.body = "I need 10 nitcoins to buy this..."
		a.react_game_event(app, g, event)

		var stats = p.load_stats(app)
		assert stats.achievements == 1
		assert p.has_achievement(app, a)
	end

end
