# `popcorn` - Web application framework for Nit

* [Features](#Features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

Example from `popcorn::example_angular`:

~~~
# This is an example of how to use angular.js with popcorn
module example_angular is example

import popcorn
import popcorn::pop_json

class CounterAPI
	super Handler

	var counter = 0

	fun json_counter: JsonObject do
		var json = new JsonObject
		json["label"] = "Visitors"
		json["value"] = counter
		return json
	end

	redef fun get(req, res) do
		res.json(json_counter)
	end

	redef fun post(req, res) do
		counter += 1
		res.json(json_counter)
	end
end

var app = new App
app.use("/counter", new CounterAPI)
app.use("/*", new StaticHandler("www/", "index.html"))
app.listen("localhost", 3000)
~~~

## Features

* `pop_auth` - Authentification handlers.
* `pop_config` - Configuration file and options for Popcorn apps
* `pop_handlers` - Route handlers.
* `pop_json` - Introduce useful services for JSON REST API handlers.
* `pop_logging`
* `pop_repos` - Repositories for data management.
* `pop_routes` - Internal routes representation.
* `pop_sessions` - Session handlers
* `pop_tasks` - Popcorn threaded tasks
* `pop_templates` - Template rendering for popcorn
* `pop_tests` - Popcorn testing services
* `pop_tracker` - * `pop_validation` - Quick and easy validation framework for Json inputs

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
