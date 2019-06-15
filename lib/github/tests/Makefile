# This file is part of NIT ( http://www.nitlanguage.org ).
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

NITC ?= nitc
NITLS ?= nitls
NITUNIT ?= nitunit
NITDOC ?= nitdoc

.PHONY: all
all:

.PHONY: check
check:
	$(NITUNIT) .

save-responses:
	$(NITC) save_response.nit -o save_response
	# ./save_response "user" > test_api_get_user.response
	# ./save_response "users/Morriar" > test_api_get_users_Morriar.response
	# ./save_response "repos/nitlang/nit" > test_api_get_repos_nitlang_nit.response
	# ./save_response "repos/nitlang/nit/branches" > test_api_get_repos_nitlang_nit_branches.response
	# ./save_response "repos/nitlang/nit/branches/master" > test_api_get_repos_nitlang_nit_branches_master.response
	# ./save_response "repos/nitlang/nit/issues/1000" > test_api_get_repos_nitlang_nit_issues_1000.response
	# ./save_response "repos/nitlang/nit/issues/events/199674194" > test_api_get_repos_nitlang_nit_issues_events_199674194.response
	# ./save_response "repos/nitlang/nit/issues/comments/6020149" > test_api_get_repos_nitlang_nit_issues_comments_6020149.response
	# ./save_response "repos/nitlang/nit/pulls/comments/21010363" > test_api_get_repos_nitlang_nit_pulls_comments_21010363.response
	# ./save_response "repos/nitlang/nit/commits/64ce1f" > test_api_get_repos_nitlang_nit_commits_64ce1f.response
	# ./save_response "repos/nitlang/nit/comments/8982707" > test_api_get_repos_nitlang_nit_comments_8982707.response
	# ./save_response "repos/nitlang/nit/milestones/4" > test_api_get_repos_nitlang_nit_milestones_4.response
	# ./save_response "repos/nitlang/nit/labels/ok_will_merge" > test_api_get_repos_nitlang_nit_labels_ok_will_merge.response


	# ./save_response "repos/nitlang/nit/pulls/1000" > test_api_get_repos_nitlang_nit_pulls_1000.response

.PHONY: clean
clean:
	rm -rf save_response
