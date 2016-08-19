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

import app
import test_suite
import events_generator
import github::cache

redef class NitrpgConfig
	redef var db_name = "nitrpg{"NIT_TESTING_ID".environ}"
end

# Used to factorize test treatments.
abstract class NitrpgTestHelper
	super TestSuite

	var config = new NitrpgConfig("test.ini")

	var app = new NitrpgApp(config)

	var api: GithubAPI is lazy do
		var api = config.wallet.api
		api.enable_cache = true
		return api
	end

	# Github event generator
	var egen = new EventsGenerator(api) is lazy

	# Get a repo by its `full_name`
	# ENSURES `repo != null`
	fun load_repo(full_name: String): Repo do
		var repo = api.load_repo(full_name)
		assert repo != null
		return repo
	end

	# Get a user by its `login`
	# ENSURES `user != null`
	fun load_user(login: String): User do
		var user = api.load_user(login)
		assert user != null
		return user
	end

	# Should be called after your test.
	fun drop_test_db do config.db.drop

	# Drop database
	redef fun after_test do drop_test_db
end

class TestEvent
	super Event
	serialize
end

class TestAchievement1
	super Achievement
	serialize
	noautoinit

	redef var id = "test1"
	redef var name = "Test1"
	redef var desc = "TestDesc1"
	redef var reward = 10
end

class TestAchievement2
	super Achievement
	serialize
	noautoinit

	redef var id = "test2"
	redef var name = "Test2"
	redef var desc = "TestDesc2"
	redef var reward = 20
end
