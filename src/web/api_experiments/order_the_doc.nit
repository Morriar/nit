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

# Doc ordering experiment
module order_the_doc

import experiments_base
import api_auth

redef class NitwebConfig

	# Ordering session storage
	#
	# Where the unfinished sessions are stored
	var order_sessions = new ExpOrderSessionRepo(db.collection("exp_order_sessions")) is lazy

	# Ordering results storage
	#
	# Where the finished and accepted sessions are stored
	var order_results = new ExpOrderSessionRepo(db.collection("exp_order_results")) is lazy

	# Experiment corpus storage
	private var order_corpus_repo = new OrderCorpusRepo(db.collection("exp_order_corpus")) is lazy

	# Return the only corpus (or create it if no one exists in the database)
	fun order_corpus: OrderCorpus do
		var res = order_corpus_repo.find_all
		var corpus
		if res.is_empty then
			corpus = new OrderCorpus
			order_corpus_repo.save corpus
		else
			corpus = res.first
		end
		return corpus
	end
end

# Specific ExpCorpus for order experiment
class OrderCorpus
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

		use("/experiments/order", new APIExpOrderSession(config))
		use("/experiments/order/results", new APIOrderResults(config))
	end
end

# Serve exp results
class APIOrderResults
	super APIHandler

	redef fun get(req, res) do
		res.json new JsonArray.from(config.order_results.find_all)
	end
end

# Handle user order session
#
# Action are:
# * GET: get current session or create a new one
# * POST: save session but do not finish it
# * PUT: save session and finish it
# * DELETE: delete current session
class APIExpOrderSession
	super AuthHandler
	super APIRandom

	# Get existing session or create a new one
	redef fun get(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.order_sessions.find_by_id(user.login)
		if session == null then
			session = create_session(req, user)
			config.order_sessions.save session
		end
		res.raw_json session.serialize_to_json
	end

	# Save session data
	redef fun post(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var deser = new JsonDeserializer(req.body)
		var session = deser.deserialize
		if not session isa ExpOrderSession then
			print deser.errors
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.order_sessions.save session
		res.raw_json session.serialize_to_json
	end

	# Finish session
	redef fun put(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.order_sessions.deserialize(req.body)
		if session == null then
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.order_sessions.remove_by_id session.id
		session.id = (new MongoObjectId).to_s
		session.finished_at = get_time * 1000
		config.order_results.save session
		res.raw_json session.serialize_to_json
	end

	# Delete session for user
	redef fun delete(req, res) do
		var user = check_session_user(req, res)
		if user == null then return
		res.json config.order_sessions.remove_by_id(user.login)
	end

	# Create a new session for `user`
	private fun create_session(req: HttpRequest, user: User): ExpOrderSession do
		var view = config.view
		var corpus = config.order_corpus

		# get random target (package, module, class)
		var target = corpus.get_random(view)
		while user.has_ordered(config, target.full_name) do
			target = corpus.get_random(view)
		end
		config.order_corpus_repo.save(corpus)
		print target.full_name

		var session = new ExpOrderSession(user, target.full_name)

		# get random children
		if target isa MPackage then
			for mmodule in target.collect_mmodules(view).to_shuffle do
				if not corpus.accept_mentity(mmodule) then continue
				session.add_to_order mmodule
			end
		else if target isa MModule then
			for mclass in target.collect_intro_mclasses(view).to_shuffle do
				if not corpus.accept_mentity(mclass) then continue
				session.add_to_order mclass
			end
		else if target isa MClass then
			for mproperty in target.collect_intro_mproperties(view).to_shuffle do
				if not corpus.accept_mentity(mproperty) then continue
				session.add_to_order mproperty
			end
		end

		if session.to_order.length <= 3 then
			return create_session(req, user)
		end

		return session
	end
end

# A grading session for a user
#
# Grade sessions are somehow hackish, they are used in two different collections:
#
# * The `exp_grades_sessions` collection is used to store *working on* sessions where
# the player as not submitted his ratings yet. In this collection the `id` used is
# the user login so we can retrieve sessions easily with no doubles.
#
# * The `exp_grades_results` collection is used to store *submitted results*
# in this case, the results are no longer modifiable by the user.
# The session id is replaced by a random id during the saving so users can submit
# many sessions.
class ExpOrderSession
	super RepoObject
	serialize

	# One session by user
	redef var id is lazy do return user.login

	# Store the Github user
	var user: User

	# Entity full_name from which we try to order things
	var mentity: String

	# Entities full_name ordered by the user
	var to_order = new Array[String]

	# Original order produced by nitweb (random)
	var original_order = new Array[String]

	# Comment leaved by the user for this entity
	var comment: nullable String = null

	# Session creation time
	var started_at: Int = get_time * 1000

	# Session completion time or null if not finished
	var finished_at: nullable Int = null

	# Add a new MEntityRef in `to_order` based on `mentity`
	fun add_to_order(mentity: MEntity) do
		if to_order.length >= 10 then return
		to_order.add mentity.full_name
		original_order.add mentity.full_name
	end
end

# Session repository
class ExpOrderSessionRepo
	super MongoRepository[ExpOrderSession]
end

redef class User
	# Return the session for `self`
	fun find_order_sessions(config: NitwebConfig): Array[ExpOrderSession] do
		return config.order_sessions.find_all((new MongoMatch).eq("user.login", login))
	end

	# Is there already an order for `mentity` given by `self`
	fun has_ordered(config: NitwebConfig, full_name: String): Bool do
		return config.order_results.count(
			(new MongoMatch).eq("user.login", login).eq("mentity", full_name)) > 0
	end
end

private class OrderCorpusRepo
	super MongoRepository[OrderCorpus]
end
