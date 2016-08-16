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
module rules_issue_comments

import rules_base

redef class NitrpgRules
	# Nitcoins rewarded when the player reviews a pull request.
	var nc_pull_review = 2
end

# Reactor for issue comment events
class IssueCommentReactor
	super GameReactor

	# Rewards player for review comments
	#
	# TODO only give nitcoins if reviewers < 2
	# TODO give more points to first reviewer
	redef fun react_game_event(app, game, event) do
		if not event isa IssueCommentEvent then return

		var player = load_player(app, event.comment.user, game)
		app.logger.info "[Github]: {player} commented #{event.issue.number}"

		# Update stats
		var player_stats = player.load_stats(app)
		var game_stats = game.load_stats(app)
		player_stats.comments += 1
		game_stats.comments += 1

		if event.issue.user != player.user and event.comment.is_ack and event.issue.state != "closed" then
			app.logger.info "[Github]: {player} reviewed #{event.issue.number}"
			var reward = app.rules.nc_pull_review
			player_stats.reviews += 1
			player_stats.nitcoins += reward
			game_stats.reviews += 1
			game_stats.nitcoins += reward
			app.events.save new PlayerIssueCommentEvent(game, player, event, reward)
		end
		app.stats.save player_stats
		app.stats.save game_stats
	end
end

# A Player IssueComment event
class PlayerIssueCommentEvent
	super Event
	serialize

	# Event action
	var action: String is lazy, serialize_as("action") do
		return "comment_{gh_event.as(not null).action.as(String)}"
	end

	# Reward for this action
	var reward: Int
end
# Unlock achievement after X issue comments.
#
# Used to factorize behavior.
abstract class PlayerXComments
	super Achievement
	noautoinit

	# Number of comments required to unlock the achievement.
	var threshold: Int is noinit

	redef fun react_game_event(app, game, event) do
		if not event isa IssueCommentEvent then return
		if not event.action == "created" then return
		var player = load_player(app, event.comment.user, game)
		if player.load_stats(app).comments == threshold then
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Player author his first comment in issues.
class Player1Comment
	super PlayerXComments
	serialize

	redef var id = "player_1_comment"
	redef var name = "From lurker to member"
	redef var desc = "Comment on an issue."
	redef var reward = 10
	redef var threshold = 1
end

# Player author 100 issue comments.
class Player100Comments
	super PlayerXComments
	serialize

	redef var id = "player_100_comments"
	redef var name = "Chatter"
	redef var desc = "Comment 100 times on issues."
	redef var reward = 100
	redef var threshold = 100
end

# Player author 1000 issue comments.
class Player1KComments
	super PlayerXComments
	serialize

	redef var id = "player_1000_comments"
	redef var name = "You sir, talk a lot!"
	redef var desc = "Comment 1000 times on issues."
	redef var reward = 1000
	redef var threshold = 1000
end

# Ping the repo owner in a comment.
class PlayerPingGod
	super Achievement
	noautoinit
	serialize

	redef var id = "player_ping_god"
	redef var name = "Ping god"
	redef var desc = "Ping the owner of the repo for the first time."
	redef var reward = 50

	redef fun react_game_event(app, game, event) do
		if not event isa IssueCommentEvent then return
		var owner = event.repo.owner.login
		if event.comment.body.has("@{owner}".to_re) then
			var player = load_player(app, event.comment.user, game)
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Give your first +1
class PlayerFirstReview
	super Achievement
	noautoinit
	serialize

	redef var id = "player_first_review"
	redef var name = "First +1"
	redef var desc = "Give a +1 for the first time."
	redef var reward = 10

	redef fun react_game_event(app, game, event) do
		if not event isa IssueCommentEvent then return
		# FIXME use a more precise way to locate reviews
		if event.comment.is_ack then
			var player = load_player(app, event.comment.user, game)
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Talk about nitcoin in issue comments.
class PlayerSaysNitcoin
	super Achievement
	noautoinit
	serialize

	redef var id = "player_says_nitcoin"
	redef var name = "Talking about money"
	redef var desc = "Say something about nitcoins in a comment."
	redef var reward = 10

	redef fun react_game_event(app, game, event) do
		if not event isa IssueCommentEvent then return
		if event.comment.body.has("(n|N)itcoin".to_re) then
			var player = load_player(app, event.comment.user, game)
			player.unlock_achievement(app, self, game, event)
		end
	end
end
