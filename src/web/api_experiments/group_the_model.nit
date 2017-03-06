# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Doc grouping
module group_the_model

import experiments_base
import api_auth

redef class NitwebConfig

	# Grouping session storage
	#
	# Where the unfinished sessions are stored
	var group_sessions = new ExpGroupSessionRepo(db.collection("exp_group_sessions")) is lazy

	# Grouping results storage
	#
	# Where the finished and accepted sessions are stored
	var group_results = new ExpGroupSessionRepo(db.collection("exp_group_results")) is lazy

	# Experiment corpus storage
	private var group_corpus_repo = new GroupCorpusRepo(db.collection("exp_group_corpus")) is lazy

	# Return the only corpus (or create it if no one exists in the database)
	fun group_corpus: GroupCorpus do
		var res = group_corpus_repo.find_all
		var corpus
		if res.is_empty then
			corpus = new GroupCorpus
			group_corpus_repo.save corpus
		else
			corpus = res.first
		end
		return corpus
	end
end

# Specific ExpCorpus for group experiment
class GroupCorpus
	super ExpCorpus
	serialize

	redef fun new_random(view) do
		var r = 100.rand
		var mentity: nullable MEntity
		if r <= 33 then
			mentity = random_mpackage(view)
		else if r <= 66 then
			mentity = random_mmodule(view)
		else
			mentity = random_mclass(view)
		end
		if mentity != null then
			mentities.add mentity.full_name
		end
		return mentity
	end
end

redef class APIRouter
	redef init do
		super

		use("/experiments/group", new APIExpGroupSession(config))
		use("/experiments/group/results", new APIGroupResults(config))
	end
end

# Serve exp results
class APIGroupResults
	super APIHandler

	redef fun get(req, res) do
		res.json new JsonArray.from(config.group_results.find_all)
	end
end

# Handle user group session
#
# Action are:
# * GET: get current session or create a new one
# * POST: save session but do not finish it
# * PUT: save session and finish it
# * DELETE: delete current session
class APIExpGroupSession
	super AuthHandler
	super APIRandom

	# Get existing session or create a new one
	redef fun get(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.group_sessions.find_by_id(user.login)
		if session == null then
			session = create_session(req, user)
			config.group_sessions.save session
		end
		res.raw_json session.serialize_to_json
	end

	# Save session data
	redef fun post(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var deser = new JsonDeserializer(req.body)
		var session = deser.deserialize
		if not session isa ExpGroupSession then
			print deser.errors
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.group_sessions.save session
		res.raw_json session.serialize_to_json
	end

	# Finish session
	redef fun put(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.group_sessions.deserialize(req.body)
		if session == null then
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.group_sessions.remove_by_id session.id
		session.id = (new MongoObjectId).to_s
		session.finished_at = get_time * 1000
		config.group_results.save session
		res.raw_json session.serialize_to_json
	end

	# Delete session for user
	redef fun delete(req, res) do
		var user = check_session_user(req, res)
		if user == null then return
		res.json config.group_sessions.remove_by_id(user.login)
	end

	# Create a new session for `user`
	private fun create_session(req: HttpRequest, user: User): ExpGroupSession do
		var view = config.view
		var corpus = config.group_corpus

		# get random target (package, module, class)
		var target = corpus.get_random(view)
		var full_name = null
		if target != null then full_name = target.full_name
		while user.has_grouped(config, full_name) do
			target = corpus.get_random(view)
		end
		config.group_corpus_repo.save(corpus)

		var session = new ExpGroupSession(user, full_name)

		# get random children
		if target isa MPackage then
			for mmodule in target.collect_mmodules(view).to_shuffle do
				if not corpus.accept_mentity(mmodule) then continue
				session.add_to_group mmodule
			end
		else if target isa MModule then
			for mclass in target.collect_intro_mclasses(view).to_shuffle do
				if not corpus.accept_mentity(mclass) then continue
				session.add_to_group mclass
			end
		else if target isa MClass then
			for mproperty in target.collect_intro_mproperties(view).to_shuffle do
				if not corpus.accept_mentity(mproperty) then continue
				session.add_to_group mproperty
			end
		end

		if session.to_group.length <= 3 then
			return create_session(req, user)
		end

		return session
	end
end

# Grouping session for a user
class ExpGroupSession
	super RepoObject
	serialize

	# One session by user
	redef var id is lazy do return user.login

	# Store the Github user
	var user: User

	# Entity full_name from which we try to group things
	var mentity: nullable String

	# Entities full_name grouped by the user
	var to_group = new Array[String]

	# Groups and entities within them
	var groups = new Array[ExpGroupSessionGroup]

	# Original group produced by nitweb (random)
	var original_group = new Array[String]

	# Comment leaved by the user for this entity
	var comment: nullable String = null

	# Session creation time
	var started_at: Int = get_time * 1000

	# Session completion time or null if not finished
	var finished_at: nullable Int = null

	# Add a new MEntityRef in `to_group` based on `mentity`
	fun add_to_group(mentity: MEntity) do
		if to_group.length >= 10 then return
		to_group.add mentity.full_name
		original_group.add mentity.full_name
	end
end

# A group of entities
class ExpGroupSessionGroup
	super Array[String]
	serialize

	# Name of the group
	var name: nullable String
end

# Session repository
class ExpGroupSessionRepo
	super MongoRepository[ExpGroupSession]
end

redef class User
	# Return the session for `self`
	fun find_group_sessions(config: NitwebConfig): Array[ExpGroupSession] do
		return config.group_sessions.find_all((new MongoMatch).eq("user.login", login))
	end

	# Is there already an group for `mentity` given by `self`
	fun has_grouped(config: NitwebConfig, full_name: nullable String): Bool do
		return config.group_results.count(
			(new MongoMatch).eq("user.login", login).eq("mentity", full_name)) > 0
	end
end

private class GroupCorpusRepo
	super MongoRepository[GroupCorpus]
end
