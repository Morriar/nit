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
module rules_commits

import rules_base

# Unlock achievement after X merged commits.
#
# Used to factorize behavior.
abstract class PlayerXCommits
	super Achievement
	noautoinit

	# Number of PR required to unlock the achievement.
	var threshold: Int is noinit

	redef fun react_game_event(app, game, event) do
		if not event isa PullRequestEvent then return
		if not event.action == "closed" then return
		if not event.pull.merged then return
		var user = event.pull.user
		if user == null then return
		var player = load_player(app, user, game)
		if player.load_stats(app).commits >= threshold then
			player.unlock_achievement(app, self, game, event)
		end
	end
end

# Author your first commit in the game.
class Player1Commit
	super PlayerXCommits
	serialize

	redef var id = "player_1_commit"
	redef var name = "First blood"
	redef var desc = "Author your first commit in the game."
	redef var reward = 10
	redef var threshold = 1
end

# Author 100 commits.
class Player100Commits
	super PlayerXCommits
	serialize

	redef var id = "player_100_commits"
	redef var name = "100 commits"
	redef var desc = "Author 100 commits in the game."
	redef var reward = 100
	redef var threshold = 100
end

# Author 1 000 commits.
class Player1KCommits
	super PlayerXCommits
	serialize

	redef var id = "player_1000_commits"
	redef var name = "1000 commits!!!"
	redef var desc = "Author 1000 commits in the game."
	redef var reward = 1000
	redef var threshold = 1000
end

# Author 10 000 commits.
class Player10KCommits
	super PlayerXCommits
	serialize

	redef var id = "player_10000_commits"
	redef var name = "10000 COMMITS!!!"
	redef var desc = "Author 10000 commits in the game."
	redef var reward = 10000
	redef var threshold = 10000
end
