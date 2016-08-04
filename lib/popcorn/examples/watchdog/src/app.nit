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

# Main app
module app

import handlers

# Router to API handlers
class APIRouter
	super Router

	# Mongo database used to store data
	var db: MongoDb

	init do
		# Auth management
		var users = new UserRepo(db.collection("users"))
		use("/auth", new APIAuth(users))
		use("/auth/signin", new APIAuthSignin(users))
		use("/auth/login", new APIAuthLogin(users))
		use("/auth/logout", new APIAuthLogout(users))

		# User management
		use("/users", new APIAdminUsers(users))
		use("/users/:login", new APIAdminUser(users))

		# Site management
		var sites = new SiteRepo(db.collection("sites"))
		use("/user/sites", new APIUserSites(sites))
		use("/user/sites/:id", new APIUserSite(sites))

		# Site status management
		var status = new SiteStatusRepo(db.collection("status"))
		use("/user/sites/:site/status", new APISiteStatuses(sites, status))
		use("/user/sites/:site/status/:id", new APISiteStatus(sites, status))
		use("/user/sites/:site/check", new APISiteStatusCheck(sites, status))

		use_after("/*", new ConsoleLog)
	end
end

var client = new MongoClient("mongodb://localhost:27017/")
var db = client.database("watchdog")

var app = new App
app.use_before("/*", new SessionInit)
app.use("/api", new APIRouter(db))
app.use("/*", new StaticHandler("www", "index.html"))

app.listen("localhost", 3000)
