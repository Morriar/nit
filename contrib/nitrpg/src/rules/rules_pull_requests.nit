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
module rules_pull_requests

import rules_base

redef class NitrpgRules
	# Nitcoins rewarded when the player opens a new pull request.
	var nc_pull_open = 10

	# Nitcoins rewarded when the player has a commit merged.
	var nc_commit_merged = 1
end

# Reactor for pull request events
class PullRequestReactor
	super GameReactor

	redef fun react_game_event(app, game, event) do
		if not event isa PullRequestEvent then return
		var user = event.pull.user
		if user == null then return
		var player = load_player(app, user, game)
		var action = event.action
		if action == null then return

		app.logger.info "[Github Event]: {player} {action} #{event.pull.number}"
		var reward
		var player_stats = player.load_stats(app)
		var game_stats = game.load_stats(app)
		if action == "opened" then
			player_stats.pulls += 1
			player_stats.pulls_open += 1
			game_stats.pulls += 1
			game_stats.pulls_open += 1
			reward = app.rules.nc_pull_open
		else if action == "reopened" then
			player_stats.pulls_open += 1
			game_stats.pulls_open += 1
			reward = app.rules.nc_pull_open
		else if action == "closed" then
			player_stats.pulls_open -= 1
			game_stats.pulls_open -= 1
			if event.pull.merged then
				player_stats.commits += event.pull.commits
				game_stats.commits += event.pull.commits
				reward = event.pull.commits * app.rules.nc_commit_merged
			else
				reward = -app.rules.nc_pull_open
			end
		else
			return
		end
		player_stats.nitcoins += reward
		game_stats.nitcoins += reward
		app.stats.save player_stats
		app.stats.save game_stats
		app.events.save new PlayerPullRequestEvent(game, player, event, reward)
	end
end

# A Player PullRequest event
class PlayerPullRequestEvent
	super Event
	serialize

	# Event action
	var action: String is lazy, serialize_as("action") do
		return "pull_{gh_event.as(not null).action.as(String)}"
	end

	# Reward for this action
	var reward: Int
end

# Unlock achievement after X pull requests.
#
# Used to factorize behavior.
abstract class PlayerXPulls
	super Achievement
	noautoinit

	# Number of PR required to unlock the achievement.
	var threshold: Int is noinit

	redef fun react_game_event(app, game, event) do
		if not event isa PullRequestEvent then return
		if not event.action == "opened" then return
		var user = event.pull.user
		if user == null then return
		var player = load_player(app, user, game)
		if player.load_stats(app).pulls == threshold then
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Open your first pull request.
class Player1Pull
	super PlayerXPulls
	serialize

	redef var id = "player_1_pull"
	redef var name = "First PR"
	redef var desc = "Open your first pull request."
	redef var reward = 10
	redef var threshold = 1
end

# Author 100 pull requests.
class Player100Pulls
	super PlayerXPulls
	serialize

	redef var id = "player_100_pulls"
	redef var name = "100 pull requests!!!"
	redef var desc = "Open 100 pull requests in the game."
	redef var reward = 100
	redef var threshold = 100
end

# Author 1000 pull requests.
class Player1KPulls
	super PlayerXPulls
	serialize

	redef var id = "player_1000_pulls"
	redef var name = "1000 PULL REQUESTS!!!"
	redef var desc = "Open 1000 pull requests in the game."
	redef var reward = 1000
	redef var threshold = 1000
end
