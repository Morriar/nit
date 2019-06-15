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

module test_api is test

import api
import popcorn::pop_json
import popcorn::pop_tests

class GithubAPIMock
	super GithubAPI

	var host: String
	var port: Int

	redef var api_url = "http://{host}:{port}" is lazy
end

class TestApiHandler
	super TestPopcorn
	super Handler

	var api = new GithubAPIMock("", host, port)

	fun start do
		var app = new App
		app.use("/*", self)
		run_test(app)
	end

	redef fun get(req, res) do
		var name = req.url.split("?").first.replace("/", "_")
		var path = "./test_api_get{name}.response"
		print "Reponse path: `{path}`"
		assert path.file_exists
		res.send path.to_path.read_all
	end
end

class TestApiUsers
	super TestApiHandler
	test

	redef fun client_test do
		var user = api.load_auth_user
		assert user != null
		assert user.login == "Morriar"
		assert user.avatar_url == "https://avatars2.githubusercontent.com/u/583144?v=4"
		assert user.name == "Alexandre Terrasa"
		assert user.email == "alexandre@moz-code.org"
		assert user.blog == "moz-code.org"

		user = api.load_user("Morriar")
		assert user != null
		assert user.login == "Morriar"
		assert user.avatar_url == "https://avatars2.githubusercontent.com/u/583144?v=4"
		assert user.name == "Alexandre Terrasa"
		assert user.email == "alexandre@moz-code.org"
		assert user.blog == "moz-code.org"
	end

	fun test_api_get_users is test do start
end

class TestApiRepos
	super TestApiHandler
	test

	redef fun client_test do
		var repo = api.load_repo("nitlang/nit")
		assert repo isa Repo
		assert repo.full_name == "nitlang/nit"
		assert repo.name == "nit"
		assert repo.owner.login == "nitlang"
		assert repo.default_branch == "master"

		var branches = api.load_repo_branches(repo)
		assert branches.length == 2
		assert branches.first.name == "master"
		assert branches.last.name == "next"

	    var branch = api.load_branch(repo, "master")
		assert branch isa Branch
	    assert branch.name == "master"

	    var commit = api.load_commit(repo, "64ce1f")
	    assert commit isa Commit
		assert commit.sha == "64ce1f587209024f5de46d06c70526a569ff537f"

	    var comment = api.load_commit_comment(repo, 8982707)
		assert comment isa CommitComment
	    assert comment.user.login == "Morriar"
	    assert comment.body == "For testing purposes...\n"
	    assert comment.commit_id == "7eacb86d1e24b7e72bc9ac869bf7182c0300ceca"

		var labl = api.load_label(repo, "ok_will_merge")
		assert labl isa Label
		assert labl.name == "ok_will_merge"

	    var milestone = api.load_milestone(repo, 4)
		assert milestone isa Milestone
	    assert milestone.title == "v1.0prealpha"
	end

	fun test_api_get_repos is test do start
end

class TestApiIssues
	super TestApiHandler
	test

	redef fun client_test do
		var repo = api.load_repo("nitlang/nit")
		assert repo isa Repo

		var issue = api.load_issue(repo, 1000)
		assert issue isa Issue

		assert issue.number == 1000
		assert issue.title == "Raise nitc from the dead"
		assert issue.user.as(User).login == "privat"
		assert issue.comments == 7
		assert issue.created_at == "2014-12-11T02:55:09Z"
		assert issue.closed_at == "2014-12-13T15:38:09Z"
		assert issue.closed_by.as(User).login == "privat"
		assert issue.body == "Raise dead on `nitc`.\nIt's super effective...\n"
		assert issue.is_pull_request

	    var event = api.load_issue_event(repo, 199674194)
	    assert event isa IssueEvent
	    assert event.actor.login == "privat"
	    assert event.event == "labeled"
	    assert event.labl.as(Label).name == "need_review"

	    var comment = api.load_issue_comment(repo, 6020149)
		assert comment isa IssueComment
	    assert comment.user.login == "privat"
	    assert comment.created_at.to_s == "2012-05-30T20:16:54Z"
	    assert comment.issue_number == 10
	end

	fun test_api_get_issues is test do start
end

class TestApiPulls
	super TestApiHandler
	test

	redef fun client_test do
		var repo = api.load_repo("nitlang/nit")
		assert repo isa Repo

		var pull = api.load_pull(repo, 1000)
		assert pull isa Issue

		assert pull.number == 1000
		assert pull.title == "Raise nitc from the dead"
		assert pull.user.as(User).login == "privat"
		assert pull.comments == 7
		assert pull.created_at == "2014-12-11T02:55:09Z"
		assert pull.closed_at == "2014-12-13T15:38:09Z"
		assert pull.merged_by.as(User).login == "privat"
		assert pull.body == "Raise dead on `nitc`.\nIt's super effective...\n"

	    var comment = api.load_review_comment(repo, 21010363)
		assert comment isa ReviewComment
	    assert comment.path == "src/modelize/modelize_property.nit"
	    assert comment.original_position == 26
	    assert comment.pull_number == 945
	end

	fun test_api_get_pulls is test do start
end
