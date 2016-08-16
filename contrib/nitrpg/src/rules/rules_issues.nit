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

# Game rules
module rules_issues

import rules_base

# Reactor for issues events
class IssuesEventReactor
	super GameReactor

	redef fun react_game_event(app, game, event) do
		if not event isa IssuesEvent then return
		var user = event.issue.user
		if user == null then return
		var player = load_player(app, user, game)
		var action = event.action
		if action == null then return
		app.logger.info "[Github Event]: {player} {action} #{event.issue.number}"

		# Update stats
		var player_stats = player.load_stats(app)
		var game_stats = game.load_stats(app)
		if action == "opened" then
			player_stats.issues += 1
			player_stats.issues_open += 1
			game_stats.issues += 1
			game_stats.issues_open += 1
		else if action == "reopened" then
			player_stats.issues_open += 1
			game_stats.issues_open += 1
		else if action == "closed" then
			player_stats.issues_open -= 1
			game_stats.issues_open -= 1
		end
		app.stats.save player_stats
		app.stats.save game_stats
		app.events.save new PlayerIssueEvent(game, player, event)
	end
end

# A Player Issue event
class PlayerIssueEvent
	super Event
	serialize

	# Event action
	var action: String is lazy, serialize_as("action") do
		return "issue_{gh_event.as(not null).action.as(String)}"
	end
end

# Unlock achievement after X issues.
#
# Used to factorize behavior.
abstract class PlayerXIssues
	super Achievement
	noautoinit
	serialize

	# Number of PR required to unlock the achievement.
	var threshold: Int is noinit

	redef fun react_game_event(app, game, event) do
		if not event isa IssuesEvent then return
		if not event.action == "opened" then return
		var user = event.issue.user
		if user == null then return
		var player = load_player(app, user, game)
		if player.load_stats(app).issues >= threshold then
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Player open his first issue.
class Player1Issue
	super PlayerXIssues
	serialize

	redef var id = "player_1_issue"
	redef var name = "First complaint"
	redef var desc = "Open your first issue."
	redef var reward = 10
	redef var threshold = 1
end

# Player open 100 issues.
class Player100Issues
	super PlayerXIssues
	serialize

	redef var id = "player_100_issues"
	redef var name = "Mature whiner"
	redef var desc = "Open 100 issues in the game."
	redef var reward = 100
	redef var threshold = 100
end

# Player open 1 000 issues.
class Player1KIssues
	super PlayerXIssues
	serialize

	redef var id = "player_1000_issues"
	redef var name = "You, sir, complain a lot"
	redef var desc = "Open 1000 issues in the game."
	redef var reward = 1000
	redef var threshold = 1000
end

# Player open an issue about nitdoc.
class IssueAboutNitdoc
	super Achievement
	noautoinit
	serialize

	redef var id = "issue_about_nitdoc"
	redef var name = "Say nitdoc again, I double dare you!"
	redef var desc = "Open an issue with \"nitdoc\" in the title."
	redef var reward = 10

	redef fun react_game_event(app, game, event) do
		if not event isa IssuesEvent then return
		if not event.action == "opened" then return
		var user = event.issue.user
		if user == null then return
		var player = load_player(app, user, game)
		var re = "nitdoc".to_re
		re.ignore_case = true
		if event.issue.title.has(re) then
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Player open an issue about FFI.
class IssueAboutFFI
	super Achievement
	noautoinit
	serialize

	redef var id = "issue_about_ffi"
	redef var name = "Polyglot what?"
	redef var desc = "Open an issue with `ffi` in the title."
	redef var reward = 10

	redef fun react_game_event(app, game, event) do
		if not event isa IssuesEvent then return
		if not event.action == "opened" then return
		var user = event.issue.user
		if user == null then return
		var player = load_player(app, user, game)
		var re = "\\bffi\\b".to_re
		re.ignore_case = true
		if event.issue.title.has(re) then
			player.unlock_achievement(app, self, game, event)
		end
	end
end
