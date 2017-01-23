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

# Nitweb experiments handlers
module rate_the_model

import api_auth
import experiments_base

redef class NitwebConfig

	# Grading session storage
	var grades_sessions = new GradeSessionRepo(db.collection("exp_grades_sessions")) is lazy

	# Grading results storage
	var grades_results = new GradeSessionRepo(db.collection("exp_grades_results")) is lazy

	# Experiment corpus storage
	var grade_corpus_repo = new GradeCorpusRepo(db.collection("exp_grades_corpus")) is lazy

	# Return the only corpus (or create it if no one exists in the database)
	fun grade_corpus: GradeCorpus do
		var res = grade_corpus_repo.find_all
		var corpus
		if res.is_empty then
			corpus = new GradeCorpus
			grade_corpus_repo.save corpus
		else
			corpus = res.first
		end
		return corpus
	end
end

# Grade experiment corpus
class GradeCorpus
	super ExpCorpus
	serialize
end

redef class APIRouter
	redef init do
		super

		use("/experiments/grades/sessions", new APIGradeSession(config))
		use("/experiments/grades/results", new APIGradeResults(config))
		use("/experiments/grades/results/user", new APIGradeUserResults(config))
	end
end

# Serve exp results
class APIGradeResults
	super APIHandler

	redef fun get(req, res) do
		res.json new JsonArray.from(config.grades_results.find_all)
	end
end

# Serve exp results for a the logged user
class APIGradeUserResults
	super AuthHandler
	super APIRandom

	redef fun get(req, res) do
		var user = check_session_user(req, res)
		if user == null then return
		res.json new JsonArray.from(user.find_grade_sessions(config))
	end
end

# Handle user grade session
#
# Action are:
# * GET: get current session or create a new one
# * POST: save session but do not finish it
# * PUT: save session and finish it
# * DELETE: delete current session
class APIGradeSession
	super AuthHandler
	super APIRandom

	# Get existing session or create a new one
	redef fun get(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.grades_sessions.find_by_id(user.login)
		if session == null then
			session = create_session(req, user)
			config.grades_sessions.save session
		end
		res.raw_json session.serialize_to_json
	end

	# Save session data
	redef fun post(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var deser = new JsonDeserializer(req.body)
		var session = deser.deserialize
		if not session isa GradeSession then
			print deser.errors
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.grades_sessions.save session
		res.raw_json session.serialize_to_json
	end

	# Finish session
	redef fun put(req, res) do
		var user = check_session_user(req, res)
		if user == null then return

		var session = config.grades_sessions.deserialize(req.body)
		if session == null then
			res.error 400
			return
		end
		if session.id != user.login then
			res.error 400
			return
		end
		config.grades_sessions.remove_by_id session.id
		session.id = (new MongoObjectId).to_s
		session.finished_at = get_time * 1000
		config.grades_results.save session
		res.raw_json session.serialize_to_json
	end

	# Delete session for user
	redef fun delete(req, res) do
		var user = check_session_user(req, res)
		if user == null then return
		res.json config.grades_sessions.remove_by_id(user.login)
	end

	# Create a new session for `user`
	private fun create_session(req: HttpRequest, user: User): GradeSession do
		var view = config.view
		var corpus = config.grade_corpus

		# get random target (package, module, class)
		var target = corpus.get_random(view)
		while user.has_rated(config, target) do
			target = corpus.get_random(view)
		end
		config.grade_corpus_repo.save(corpus)

		var serie = new GradeSerie

		# get random children
		var serie_id = null
		if target != null then serie_id = target.full_name
		if target isa MPackage then
			for mmodule in target.collect_mmodules(view).to_shuffle do
				if not corpus.accept_mentity(mmodule) then continue
				serie.add_to_serie mmodule
			end
		else if target isa MModule then
			for mclass in target.collect_intro_mclasses(view).to_shuffle do
				if not corpus.accept_mentity(mclass) then continue
				serie.add_to_serie mclass
			end
		else if target isa MClass then
			for mproperty in target.collect_intro_mproperties(view).to_shuffle do
				if not corpus.accept_mentity(mproperty) then continue
				serie.add_to_serie mproperty
			end
		else
			# build a mpackages serie
			serie_id = "mpackage"
			for mpackage in view.mpackages.to_shuffle do
				if not corpus.accept_mentity(mpackage) then continue
				if user.has_rated(config, target) then continue
				serie.add_to_serie mpackage
			end
		end

		if serie.mentities.length <= 3 then
			return create_session(req, user)
		end

		return new GradeSession.from_corpus(serie_id, user, config, serie)
	end
end


# Series of mentities to grade
class GradeSerie
	super RepoObject
	serialize

	# MEntities full_name
	var mentities = new Array[String]

	# Add a new `mentity` to `self` until `mentities.length >= 10`
	fun add_to_serie(mentity: MEntity) do
		if mentities.length >= 10 then return
		mentities.add mentity.full_name
	end

	# Serie creation time
	var created_at: Int = get_time * 1000
end

# Grading classes

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
class GradeSession
	super RepoObject
	serialize

	# One session by user
	redef var id is lazy do return user.login

	# Serie rated in this session
	var serie_id: nullable String

	# Store the Github user
	var user: User

	# Entities ratings
	var mentities = new Array[GradeEntity]

	# Session creation time
	var started_at: Int = get_time * 1000

	# Session completion time or null if not finished
	var finished_at: nullable Int = null

	# Initialize `self` from the a random serie in corpus
	init from_corpus(serie_id: nullable String, user: User, config: NitwebConfig, serie: GradeSerie) do
		init(serie_id, user)

		for mentity_id in serie.mentities do
			var mentity = config.view.mentity_by_full_name(mentity_id)
			if mentity == null then continue

			var rating = new GradeEntity(mentity.full_name, mentity.name, mentity.class_name)

			rating.stars.add new GradeStar("doc",
				"""This entity is well documented, the explanations are clear and useful.
				They help me understand the feature and how to use it.""",
				user.login, mentity.full_name)
			rating.stars.add new GradeStar("examples",
				"""This entity is provided with examples, they are runnable and free of bugs.
				They help me understand the feature behavior and how to use it.""",
				user.login, mentity.full_name)
			rating.stars.add new GradeStar("feature",
				"""This entity seems useful, usable and has a good API.
				It can help me getting things done.""",
				user.login, mentity.full_name)

			rating.remarks.add new GradeRemark("no_doc", "No doc.")
			rating.remarks.add new GradeRemark("no_examples", "No examples.")
			rating.remarks.add new GradeRemark("no_structure", "No structure")
			rating.remarks.add new GradeRemark("bad_spelling", "Bad spelling")
			rating.remarks.add new GradeRemark("Outdated", "Outdated")
			rating.remarks.add new GradeRemark("wrong", "Wrong")

			mentities.add rating
		end
	end

	# Is self fininshed
	fun is_finished: Bool do return finished_at != null
end

# Ratings for a mentity
class GradeEntity
	super RepoObject
	serialize

	# Full name of the rated entity
	var mentity_id: String

	# Name of the rated entity
	var mentity_name: String

	# Class kind of the rated entity
	var mentity_kind: String

	# Rated dimensions
	var stars = new Array[GradeStar]

	# Remarks
	var remarks = new Array[GradeRemark]

	# Comment leaved by the user for this entity
	var comment: nullable String = null
end

# A rating dimension (arbitrary)
class GradeStar
	super RepoObject
	serialize

	# The dimension rated (arbritrary key)
	var dimension: String

	# Explanation of the dimension
	var desc: String

	# The user login that made that rating (or null if anon)
	var user: nullable String

	# Rated `MEntity::full_name`
	var mentity: String

	# The rating (traditionally a score between 0 and 5)
	var rating = 0 is writable

	# Timestamp when this rating was created
	var timestamp: Int = get_time * 1000 is writable
end

# A pre-constructed remark about a MEntity
#
# To encourage lazy reviewer to leave comments.
class GradeRemark
	super RepoObject
	serialize

	# Arbitrary key
	redef var id

	# Exaplanation text
	var desc: String

	# Is the checkbox checked?
	var checked = false
end

# Mongo Repositories

# Grade Corpus repository
class GradeCorpusRepo
	super MongoRepository[GradeCorpus]
end

# Grade sessions repository
class GradeSessionRepo
	super MongoRepository[GradeSession]
end

redef class User
	# Return the grades session `self`
	fun find_grade_sessions(config: NitwebConfig): Array[GradeSession] do
		return config.grades_sessions.find_all((new MongoMatch).eq("user._id", login))
	end

	# Is there a rating for `serie` given by `self`
	fun has_rated(config: NitwebConfig, mentity: nullable MEntity): Bool do
		if mentity == null then return false
		return config.grades_results.count((new MongoMatch).eq("serie_id", mentity.full_name)) > 0
	end
end

# Add deserialize heuristics by hand so we do not have to use nitserial
redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "Array[GradeEntity]" then
			return new Array[GradeEntity].from_deserializer(self)
		end
		if name == "Array[GradeStar]" then
			return new Array[GradeStar].from_deserializer(self)
		end
		if name == "Array[GradeRemark]" then
			return new Array[GradeRemark].from_deserializer(self)
		end
		return super
	end
end
