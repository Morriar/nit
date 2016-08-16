# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Listener for github events
module api_listener

import popcorn
import rules

redef class NitrpgApp
	# Github API connector
	fun api: GithubAPI do return config.wallet.api
end

redef class NitrpgRules

	# React to a github event
	fun react_event(app: NitrpgApp, event: GithubEvent) do
		for reactor in reactors do reactor.react_event(app, event)
		for reactor in achievements do reactor.react_event(app, event)
	end
end

# Handler that responds to Github Events
class APIListener
	super Handler

	# App used to access repos
	var app: NitrpgApp

	redef fun post(req, res) do
		# get event type
		var kind = req.header.get_or_null("X-GitHub-Event")
		if kind == null then
			res.error 403
			return
		end
		# get POST object
		var obj = req.body.parse_json
		if not obj isa JsonObject then
			res.error 403
			return
		end
		# parse event
		var event = event_factory(kind, obj)
		if event != null then app.rules.react_event(app, event)
		res.send "ok"
	end

	# How to build events from received json objects.
	fun event_factory(kind: String, json: JsonObject): nullable GithubEvent do
		var api = app.api
		if kind == "commit_comment" then
			return api.deserialize(json.to_json).as(CommitCommentEvent)
		else if kind == "create" then
			return api.deserialize(json.to_json).as(CreateEvent)
		else if kind == "delete" then
			return api.deserialize(json.to_json).as(DeleteEvent)
		else if kind == "deployment" then
			return api.deserialize(json.to_json).as(DeploymentEvent)
		else if kind == "deployment_status" then
			return api.deserialize(json.to_json).as(DeploymentStatusEvent)
		else if kind == "fork" then
			return api.deserialize(json.to_json).as(ForkEvent)
		else if kind == "issues" then
			return api.deserialize(json.to_json).as(IssuesEvent)
		else if kind == "issue_comment" then
			return api.deserialize(json.to_json).as(IssueCommentEvent)
		else if kind == "member" then
			return api.deserialize(json.to_json).as(MemberEvent)
		else if kind == "pull_request" then
			return api.deserialize(json.to_json).as(PullRequestEvent)
		else if kind == "pull_request_review_comment" then
			return api.deserialize(json.to_json).as(PullRequestReviewCommentEvent)
		else if kind == "push" then
			return api.deserialize(json.to_json).as(PushEvent)
		else if kind == "status" then
			return api.deserialize(json.to_json).as(StatusEvent)
		else
			return null
		end
	end
end
