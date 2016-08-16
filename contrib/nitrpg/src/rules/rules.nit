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
module rules

import rules_issues
import rules_issue_comments
import rules_pull_requests
import rules_commits

redef class NitrpgRules
	init do
		add_reactor(new IssuesEventReactor, new PullRequestReactor, new IssueCommentReactor)

		add_achievement(
			new Player1Issue, new Player100Issues, new Player1KIssues,
			new IssueAboutNitdoc, new IssueAboutFFI,
			new Player1Pull, new Player100Pulls, new Player1KPulls,
			new Player1Commit, new Player100Commits, new Player1KCommits,
			new Player1Comment, new Player100Comments, new Player1KComments,
			new PlayerPingGod, new PlayerFirstReview, new PlayerSaysNitcoin
		)
	end
end
