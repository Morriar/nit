# `popcorn` - Web application framework for Nit

* [What does it taste like?](#What-does-it-taste-like?)
* [Basic routing](#Basic-routing)
* [Serving static files with Popcorn](#Serving-static-files-with-Popcorn)
* [Advanced Routing](#Advanced-Routing)
* [Route methods](#Route-methods)
* [Route paths](#Route-paths)
* [Route parameters](#Route-parameters)
* [Glob routes](#Glob-routes)
* [Response methods](#Response-methods)
* [Response cycle](#Response-cycle)
* [Middlewares](#Middlewares)
* [Overview](#Overview)
* [Ultra simple logger example](#Ultra-simple-logger-example)
* [Ultra cool, more advanced logger example](#Ultra-cool,-more-advanced-logger-example)
* [Built-in middlewares](#Built-in-middlewares)
* [Mountable routers](#Mountable-routers)
* [Error handling](#Error-handling)
* [`pop_sessions`](#`pop_sessions`)
* [Database integration](#Database-integration)
* [Mongo DB](#Mongo-DB)
* [Angular.JS integration](#Angular.JS-integration)
* [`pop_tasks`](#`pop_tasks`)
* [`pop_json`](#`pop_json`)
* [`pop_templates`](#`pop_templates`)
* [`pop_config`](#`pop_config`)
* [`pop_tests`](#`pop_tests`)
* [`pop_repos`](#`pop_repos`)
* [`pop_auth`](#`pop_auth`)
* [`pop_tracker`](#`pop_tracker`)
* [`pop_validation`](#`pop_validation`)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

**Why endure plain corn when you can pop it?!**

[Popcorn](popcorn) is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.

Popcorn is built over nitcorn to provide a clean and user friendly interface
without all the boiler plate code.

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
* `popcorn` - Application server abstraction on top of nitcorn.

## What does it taste like?

![Diagram for `popcorn`](uml-popcorn-3.svg)

Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:

~~~
module example_hello is example

import popcorn

class HelloHandler
	super Handler

	redef fun get(req, res) do res.html "<h1>Hello World!</h1>"
end

var app = new App
app.use("/", new HelloHandler)
app.listen("localhost", 3000)
~~~

The Popcorn app listens on port 3000 for connections.
The app responds with "Hello World!" for requests to the root URL (`/`) or **route**.
For every other path, it will respond with a **404 Not Found**.

The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.

Run the app with the following command:

~~~bash
$ nitc app.nit && ./app
~~~

Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.

Here the output using the `curl` command:

~~~bash
$ curl localhost:3000
<h1>Hello World!</h1>

$ curl localhost:3000/wrong_uri
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Not Found</title>
</head>
<body>
<h1>404 Not Found</h1>
</body>
</html>
~~~

This is why we love popcorn!

## Basic routing

**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).

Each route can have one or more handler methods, which are executed when the route is matched.

Route handlers definition takes the following form:

~~~nitish
import popcorn

class MyHandler
	super Handler

	redef fun METHOD(req, res) do end
end
~~~

Where:

* `MyHandler` is the name of the handler you will add to the app.
* `METHOD` can be replaced by `get`, `post`, `put` or `delete`.

The following example responds to GET and POST requests:

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
	redef fun post(req, res) do res.send "Got a POST request"
end
~~~

To make your handler responds to a specific route, you have to add it to the app.

Respond to POST request on the root route (`/`), the application's home page:

~~~
var app = new App
app.use("/", new MyHandler)
~~~

Respond to a request to the `/user` route:

~~~
app.use("/user", new MyHandler)
~~~

For more details about routing, see the routing section.

## Serving static files with Popcorn

To serve static files such as images, CSS files, and JavaScript files, use the
Popcorn built-in handler [`StaticHandler`](popcorn::StaticHandler).

Pass the name of the directory that contains the static assets to the StaticHandler
init method to start serving the files directly.
For example, use the following code to serve images, CSS files, and JavaScript files
in a directory named `public`:

~~~
app.use("/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the `public` directory:

~~~raw
http://localhost:3000/images/trollface.jpg
http://localhost:3000/css/style.css
http://localhost:3000/js/app.js
http://localhost:3000/hello.html
~~~

Popcorn looks up the files relative to the static directory, so the name of the
static directory is not part of the URL.
To use multiple static assets directories, add the `StaticHandler` multiple times:

~~~
app.use("/", new StaticHandler("public/"))
app.use("/", new StaticHandler("files/"))
~~~

Popcorn looks up the files in the order in which you set the static directories
with the `use` method.

To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:

~~~
app.use("/static/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the public directory from the `/static`
path prefix.

~~~raw
http://localhost:3000/static/images/trollface.jpg
http://localhost:3000/static/css/style.css
http://localhost:3000/static/js/app.js
http://localhost:3000/static/hello.html
~~~

However, the path that you provide to the `StaticHandler` is relative to the
directory from where you launch your app.
If you run the app from another directory, it’s safer to use the absolute path of
the directory that you want to serve.

In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:

~~~
app.use("/static/", new StaticHandler("public/", "default.html"))
~~~

This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.

## Advanced Routing

**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.

The following code is an example of a very basic route.

~~~
import popcorn

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use("/", new HelloHandler)
~~~

### Route methods

A **route method** is derived from one of the HTTP methods, and is attached to an
instance of the [Handler](popcorn::Handler) class.

The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.

~~~
import popcorn

class GetPostHandler
	super Handler

	redef fun get(req, res) do res.send "GET request to the homepage"
	redef fun post(req, res) do res.send "POST request to the homepage"
end

var app = new App
app.use("/", new GetPostHandler)
~~~

Popcorn supports the following routing methods that correspond to HTTP methods:
get, post, put, and delete.

The request query string is accessed through the `req` parameter:

~~~
module example_query_string is example

import popcorn
import template

class QueryStringHandler
	super Handler

	redef fun get(req, res) do
		var tpl = new Template
		tpl.addn "URI: {req.uri}"
		tpl.addn "Query string: {req.query_string}"
		for name, arg in req.get_args do
			tpl.addn "{name}: {arg}"
		end
        res.send tpl
	end
end

var app = new App
app.use("/", new QueryStringHandler)
app.listen("localhost", 3000)
~~~

Post parameters can also be accessed through the `req` parameter:

~~~
module example_post_handler is example

import popcorn
import template

class PostHandler
	super Handler

	redef fun post(req, res) do
		var tpl = new Template
		tpl.addn "URI: {req.uri}"
		tpl.addn "Body: {req.body}"
		for name, arg in req.post_args do
			tpl.addn "{name}: {arg}"
		end
        res.send tpl
	end
end

var app = new App
app.use("/", new PostHandler)
app.listen("localhost", 3000)
~~~

There is a special routing method, `all(res, req)`, which is not derived from any
HTTP method. This method is used to respond at a path for all request methods.

In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.

~~~
import popcorn

class AllHandler
	super Handler

	redef fun all(req, res) do res.send "Every request to the homepage"
end
~~~

Using the `all` method you can also implement other HTTP request methods.

~~~
import popcorn

class MergeHandler
	super Handler

	redef fun all(req, res) do
		if req.method == "MERGE" then
			# handle that method
		else super # keep handle GET, POST, PUT and DELETE methods
	end
end
~~~

### Route paths

**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.

Popcorn uses the `AppRoute::match(uri)` method to match the route paths.

Here are some examples of route paths based on strings.

This route path will match requests to the root route, `/`.

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
end

var app = new App
app.use("/", new MyHandler)
~~~

This route path will match requests to `/about`.

~~~
app.use("/about", new MyHandler)
~~~

This route path will match requests to `/random.text`.

~~~
app.use("/random.text", new MyHandler)
~~~

During the query/response process, routes are matched by order of declaration
through the `App::use` method.

The app declared in this example will try to match the routes in this order:

1. `/`
2. `/about`
3. `/random.text`

### Route parameters

**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.

The following example declares a handler `UserHome` that responds with the `user`
name.

~~~
module example_param_route is example

import popcorn

class UserHome
	super Handler

	redef fun get(req, res) do
		var user = req.param("user")
		if user != null then
			res.send "Hello {user}"
		else
			res.send("Nothing received", 400)
		end
	end
end

var app = new App
app.use("/:user", new UserHome)
app.listen("localhost", 3000)
~~~

The `UserHome` handler listen to every path matching `/:user`. This can be `/Morriar`,
`/10`, ... but not `/Morriar/profile` since route follow the strict matching rule.

### Glob routes

**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.

Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.

~~~
module example_glob_route is example

import popcorn

class UserItem
	super Handler

	redef fun get(req, res) do
		var user = req.param("user")
		var item = req.param("item")
		if user == null or item == null then
			res.send("Nothing received", 400)
		else
			res.send "Here the item {item} of the use {user}."
		end
	end
end

var app = new App
app.use("/user/:user/item/:item/*", new UserItem)
app.listen("localhost", 3000)
~~~

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

## Response methods

The methods on the response object (`res`), can is used to manipulate the
request-response cycle.
If none of these methods are called from a route handler, the client request will
receive a `404 Not found` error.

* `res.html()` Send a HTML response.
* `res.json()` Send a JSON response.
* `res.redirect()` Redirect a request.
* `res.send()` Send a response of various types.
* `res.error()` Set the response status code and send its message as the response body.

## Response cycle

When the popcorn [`App`](popcorn::App) receives a request, the response cycle is the following:

1. `pre-middlewares` lookup matching middlewares registered with `use_before(pre_middleware)`:
   1. execute matching middleware by registration order
   2. if a middleware send a response then let the `pre-middlewares` loop continue
      with the next middleware
2. `response-handlers` lookup matching handlers registered with `use(handler)`:
   1. execute matching middleware by registration order
   2. if a middleware send a response then stop the `response-handlers` loop
   3. if no hander matches or sends a response, generate a 404 response
3. `post-middlewares` lookup matching handlers registered with `use_after(post_handler)`:
   1. execute matching middleware by registration order
   2. if a middleware send a response then let the `post-middlewares` loop continue
      with the next middleware

## Middlewares

### Overview

**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:

* Execute any code.
* Make changes to the request and the response objects.
* End its action and pass to the next handler in the stack.

If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.

### Ultra simple logger example

Here is an example of a simple “Hello World” Popcorn application.
We add a middleware handler to the application called MyLogger that prints a simple
log message in the app stdout.

~~~
import popcorn

class MyLogger
	super Handler

	redef fun all(req, res) do print "Request Logged!"
end

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end


var app = new App
app.use_before("/*", new MyLogger)
app.use("/", new HelloHandler)
app.listen("localhost", 3000)
~~~

By using the `MyLogger` handler to the route `/*` we ensure that every requests
(even 404 ones) pass through the middleware handler.
This handler just prints “Request Logged!” when a request is received.

Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.

### Ultra cool, more advanced logger example

Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.

This example gives a simplified version of the [`RequestClock`](popcorn::RequestClock) and [`ConsoleLog`](popcorn::ConsoleLog) middlewares.

~~~
module example_advanced_logger is example

import popcorn
import realtime

redef class HttpRequest
	# Time that request was received by the Popcorn app.
	var timer: nullable Clock = null
end

class RequestTimeHandler
	super Handler

	redef fun all(req, res) do req.timer = new Clock
end

class AdvancedLoggerHandler
	super Handler

	redef fun all(req, res) do
		var timer = req.timer
		if timer != null then
			print "{req.method} {req.uri} {res.color_status} ({timer.total}s)"
		else
			print "{req.method} {req.uri} {res.color_status}"
		end
	end
end

class AnotherHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use_before("/*", new RequestTimeHandler)
app.use("/", new AnotherHandler)
app.use_after("/*", new AdvancedLoggerHandler)
app.listen("localhost", 3000)
~~~

First, we attach a new attribute `timer` to every `HttpRequest`.
Doing so we can access our data from all handlers that import our module, directly
from the `req` parameter.

We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.

We then let the `HelloHandler` produce the response.

Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.

The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.

Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.

### Built-in middlewares

Starting with version 0.1, Popcorn provide a set of built-in middleware that can
be used to develop your app faster.

* `RequestClock`: initializes requests clock.
* `ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).
* `SessionInit`: initializes requests session (see the `Sessions` section).
* `StaticHandler`: serves static files (see the `Serving static files with Popcorn` section).
* `Router`: a mountable mini-app (see the `Mountable routers` section).

## Mountable routers

Use the [`Router`](popcorn::Router) class to create modular, mountable route handlers.
A Router instance is a complete middleware and routing system; for this reason,
it is often referred to as a “mini-app”.

The following example creates a router as a module, loads a middleware handler in it,
defines some routes, and mounts the router module on a path in the main app.

~~~
module example_router is example

import popcorn

class AppHome
	super Handler

	redef fun get(req, res) do res.send "Site Home"
end

class UserLogger
	super Handler

	redef fun all(req, res) do print "User logged"
end

class UserHomepage
	super Handler

	redef fun get(req, res) do res.send "User Home"
end

class UserProfile
	super Handler

	redef fun get(req, res) do res.send "User Profile"
end

var user_router = new Router
user_router.use("/*", new UserLogger)
user_router.use("/", new UserHomepage)
user_router.use("/profile", new UserProfile)

var app = new App
app.use("/", new AppHome)
app.use("/user", user_router)
app.listen("localhost", 3000)
~~~

The app will now be able to handle requests to /user and /user/profile, as well
as call the `Time` middleware handler that is specific to the route.

## Error handling

**Error handling** is based on middleware handlers.

Define error-handling middlewares in the same way as other middleware handlers:

~~~
module example_simple_error_handler is example

import popcorn

class SimpleErrorHandler
	super Handler

	redef fun all(req, res) do
		if res.status_code != 200 then
			res.send("An error occurred!", res.status_code)
		end
	end
end

class SomeHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end


var app = new App
app.use("/", new SomeHandler)
app.use("/*", new SimpleErrorHandler)
app.listen("localhost", 3000)
~~~

In this example, every non-200 response is caught by the `SimpleErrorHandler`
that print an error in stdout.

By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).

Here an example of the 404 custom error page in HTML:

~~~
import popcorn
import template

class HtmlErrorTemplate
	super Template

	var status: Int
	var message: nullable String

	redef fun rendering do add """
		<!DOCTYPE html>
		<html>
		<head>
			<meta charset="utf-8">
			<title>{{{message or else status}}}</title>
		</head>
		<body>
		<h1>{{{status}}} {{{message or else ""}}}</h1>
		</body>
		</html>"""
end

class HtmlErrorHandler
	super Handler

	redef fun all(req, res) do
		if res.status_code != 200 then
			res.send(new HtmlErrorTemplate(res.status_code, "An error occurred!"))
		end
	end
end

var app = new App
app.use("/*", new HtmlErrorHandler)
app.listen("localhost", 3000)
~~~

## `pop_sessions`

> Here a simple example on how to use sessions with popcorn:

~~~
import popcorn

redef class Session
	var is_logged = false
end

class AppLogin
	super Handler

	redef fun get(req, res) do
		res.html """
		<p>Is logged: {{{req.session.as(not null).is_logged}}}</p>
		<form action="/" method="POST">
			<input type="submit" value="Login" />
		</form>"""
	end

	redef fun post(req, res) do
		req.session.as(not null).is_logged = true
		res.redirect("/")
	end
end

var app = new App
app.use_before("/*", new SessionInit)
app.use("/", new AppLogin)
app.listen("localhost", 3000)
~~~

Notice the use of the `SessionInit` on the `/*` route. You must use the
`SessionInit` first to initialize the request session.
Without that, your request session will be set to `null`.

**Sessions** can be used thanks to the built-in [`SessionInit`](popcorn::SessionInit) middleware.

Here a simple example of login button that define a value in the `req` session.

~~~
module example_session is example

import popcorn

redef class Session
	var is_logged = false
end

class AppLogin
	super Handler

	redef fun get(req, res) do
		res.html """
		<p>Is logged: {{{req.session.as(not null).is_logged}}}</p>
		<form action="/" method="POST">
			<input type="submit" value="Login" />
		</form>"""
	end

	redef fun post(req, res) do
		req.session.as(not null).is_logged = true
		res.redirect("/")
	end
end

var app = new App
app.use("/*", new SessionInit)
app.use("/", new AppLogin)
app.listen("localhost", 3000)
~~~

Notice the use of the `SessionInit` on the `/*` route. You must use the
`SessionInit` first to initialize the request session.
Without that, your request session will be set to `null`.
If you don't use sessions in your app, you do not need to include that middleware.

## Database integration

### Mongo DB

If you want to persist your data, Popcorn works well with MongoDB.

In this example, we will show how to store and list user with a Mongo database.

First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.

Then we define a handler that displays the user creation form on GET requests.
POST requests are used to save the user data.

~~~
module example_mongodb is example

import popcorn
import mongodb
import template

class UserList
	super Handler

	var db: MongoDb

	redef fun get(req, res) do
		var users = db.collection("users").find_all(new JsonObject)

		var tpl = new Template
		tpl.add """
		<h1>Users</h1>

		<h2>Add a new user</h2>
		<form action="/" method="POST">
			<input type="text" name="login" />
			<input type="password" name="password" />
			<input type="submit" value="save" />
		</form>

		<h2>All users</h2>
		<table>"""
		for user in users do
			tpl.add """<tr>
			<td>{{{user["login"] or else "null"}}}</td>
			<td>{{{user["password"] or else "null"}}}</td>
			</tr>"""
		end
		tpl.add "</table>"
		res.html(tpl)
	end

	redef fun post(req, res) do
		var json = new JsonObject
		json["login"] = req.post_args["login"]
		json["password"] = req.post_args["password"]
		db.collection("users").insert(json)
		res.redirect("/")
	end
end

var mongo = new MongoClient("mongodb://localhost:27017/")
var db = mongo.database("mongo_example")

var app = new App
app.use("/", new UserList(db))
app.listen("localhost", 3000)
~~~

## Angular.JS integration

Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!

Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:

~~~
module example_static_default is example

import popcorn

var app = new App
app.use("/", new StaticHandler("public/", "default.html"))
app.listen("localhost", 3000)
~~~

Because the StaticHandler will not find the angular routes as static files,
you must specify the path to the default angular controller.
In this example, the StaticHandler will redirect any unknown requests to the `index.html`
angular controller.

See the examples for a more detailed use case working with a JSON API.

## `pop_tasks`

> Tasks allow you to execute code in another thread than the app listening loop.
> Useful when you want to run some tasks periodically.

Let's say you want to purge the `downloads/` directory of your app every hour:

~~~nitish
class PurgeTask
	super PopTask

	var dir: String

	redef fun main do
		loop
			dir.rmdir
			3600.sleep
		end
	end
end

var app = new App

# Register a new task
app.register_task(new PurgeTask("downloads/"))

# Add your handlers
# app.use('/', new MyHandler)

# Run the tasks
app.run_tasks

# Start the app
app.listen("0.0.0.0", 3000)
~~~

## `pop_json`

> Validation and Deserialization of request bodies:

~~~nit
class MyJsonHandler
	super Handler

	# Validator used do validate the body
	redef var validator = new MyFormValidator

	# Define the kind of objects expected by the deserialization process
	redef type BODY: MyForm

	redef fun post(req, res) do
		var post = validate_body(req, res)
		if post == null then return # Validation error: let popcorn return a HTTP 400
		var form = deserialize_body(req, res)
		if form == null then return # Deserialization error: let popcorn return a HTTP 400

		# TODO do something with the input
		print form.name
	end
end

class MyForm
	serialize

	var name: String
end

class MyFormValidator
	super ObjectValidator

	init do
		add new StringField("name", min_size=1, max_size=255)
	end
end
~~~

## `pop_templates`

> ## Basic templates

Use TemplateString to render really basic templates that just need macro
replacements.

Example:

~~~nit
class TemplateStringHandler
	super Handler

	redef fun get(req, res) do
		# Values to add in the template
		var values = new HashMap[String, String]
		values["USER"] = "Morriar"
		values["MYSITE"] = "My super website"

		# Render it with a shortcut
		res.template_string("""
			<h1>Hello %USER%!</h1>
			<p>Welcome to %MYSITE%.</p>
		""", values)
	end
end
~~~

For larger templates, you can also use external files (makes your Nit code cleaner):

~~~nit
class TemplateFileHandler
	super Handler

	redef fun get(req, res) do
		# Values to add in the template
		var values = new HashMap[String, String]
		values["USER"] = "Morriar"
		values["MYSITE"] = "My super website"

		# Render it from an external file
		res.template_file("example_template.tpl", values)
	end
end
~~~

## Using pug templates

Pug is a templating format provided by the external command `pug`.
For complex templates that need conditional or loop statements, pug can be a solution.

See the pug syntax here: https://pugjs.org/api/getting-started.html

~~~nit
class PugFileHandler
	super Handler

	redef fun get(req, res) do
		# Values to add in the template
		var json = new JsonObject
		json["user"] = "Morriar"
		json["mysite"] = "My super website"

		# Render it from an external file
		res.pug_file("example_template.pug", json)
	end
end
~~~

## `pop_config`

> `pop_config` provide a configuration framework for Popcorn apps based on ini
> files.

By default `AppConfig` provides `app.host` and `app.port` keys, it's all we
need to start an app:

~~~
import popcorn
import popcorn::pop_config

# Build config from options
var config = new AppConfig
config.parse_options(args)

# Use options
var app = new App
app.listen(config.app_host, config.app_port)
~~~

For more advanced uses, `AppConfig` and `AppOptions` can be specialized to
offer additional config options:

~~~
import popcorn
import popcorn::pop_config

class MyConfig
	super AppConfig

	# My secret code I don't want to share in my source repository
	fun secret: String do return opt_secret.value or else ini["secret"] or else "my-secret"

	# opt --secret
	var opt_secret = new OptionString("My secret string", "--secret")

	redef init do
		super
		add_option opt_secret
	end
end

class SecretHandler
	super Handler

	# Config to use to access `secret`
	var config: MyConfig

	redef fun get(req, res) do
		res.send config.secret
	end
end

var config = new MyConfig
config.parse_options(args)

var app = new App
app.use("/secret", new SecretHandler(config))
app.listen(config.app_host, config.app_port)
~~~

## `pop_tests`

> ## Blackbox testing

Popcorn allows you to test your apps using nitunit blackbox testing.

With blackbox testing you compare the output of your program with a result file.

To get started with blackbox testing, create a nitunit test suite and imports
the `pop_tests` module.

You then need to build the app that will be tested by nitunit as shown in the
`TestExampleHello::test_example_hello` method.
Calling `run_test` will automatically set the `TestPopcorn::host` and `TestPopcorn::port` used for testing.

Redefine the `client_test` method to write your scenario.
Here we use `curl` to access some URI on the app.

~~~nitish
module test_example_hello is test

import pop_tests
import example_hello

class TestExampleHello
	super TestPopcorn
	test

	fun test_example_hello is test do
		var app = new App
		app.use("/", new HelloHandler)
		run_test(app)
	end

	redef fun client_test do
		system "curl -s {host}:{port}"
		system "curl -s {host}:{port}/"
		system "curl -s {host}:{port}///////////"
		system "curl -s {host}:{port}/not_found"
		system "curl -s {host}:{port}/not_found/not_found"
	end
end
~~~

The blackbox testing needs a reference result file against wich the test output
will be compared.
Create your expected result file in `test_example_hello.sav/test_example_hello.res`.

Test your app by running nitunit:

~~~bash
nitunit ./example_hello.nit
~~~

See `examples/hello_world` for the complete example.

## `pop_repos`

> Repositories are used to apply persistence on instances (or **documents**).
> Using repositories one can store and retrieve instance in a clean and maintenable
> way.

This module provides the base interface `Repository` that defines the persistence
services available in all kind of repos.
`JsonRepository` factorizes all repositories dedicated to Json data or objects
serializable to Json.

`MongoRepository` is provided as a concrete example of repository.
It implements all the services from `Repository` using a Mongo database as backend.

Repositories can be used in Popcorn app to manage your data persistence.
Here an example with a book management app:

~~~
# First we declare the `Book` class. It has to be serializable so it can be used
# within a `Repository`.

import popcorn
import popcorn::pop_repos
import popcorn::pop_json

# Serializable book representation.
class Book
	serialize

	# Book uniq ID
	var id: String = (new MongoObjectId).id is serialize_as "_id"

	# Book title
	var title: String

	# ... Other fields

	redef fun to_s do return title
	redef fun ==(o) do return o isa SELF and id == o.id
	redef fun hash do return id.hash
end

# We then need to subclass the `MongoRepository` to provide Book specific services.

# Book repository for Mongo
class BookRepo
	super MongoRepository[Book]

	# Find books by title
	fun find_by_title(title: String): Array[Book] do
		var q = new JsonObject
		q["title"] = title
		return find_all(q)
	end
end

# The repository can be used in a Handler to manage book in a REST API.

class BookHandler
	super Handler

	var repo: BookRepo

	# Return a json array of all books
	#
	# If the get parameters `title` is provided, returns a json array of books
	# matching the `title`.
	redef fun get(req, res) do
		var title = req.string_arg("title")
		if title == null then
			res.json new JsonArray.from(repo.find_all)
		else
			res.json new JsonArray.from(repo.find_by_title(title))
		end
	end

	# Insert a new Book
	redef fun post(req, res) do
		var title = req.string_arg("title")
		if title == null then
			res.error 400
			return
		end
		var book = new Book(title)
		repo.save book
		res.json book
	end
end

# Let's wrap it all together in a Popcorn app:

# Init database
var mongo = new MongoClient("mongodb://localhost:27017/")
var db = mongo.database("tests_app_{100000.rand}")
var coll = db.collection("books")

# Init app
var app = new App
var repo = new BookRepo(coll)
app.use("/books", new BookHandler(repo))
app.listen("localhost", 3000)
~~~

## `pop_auth`

> For now, only Github OAuth is provided.

See https://developer.github.com/v3/oauth/.

This module provide 4 base classes that can be used together to implement a
Github OAuth handshake.

Here an example of application using the Github Auth as login mechanism.

There is 4 available routes:

* `/login`: redirects the user to the Github OAuth login page (see `GithubLogin`)
* `/profile`: shows the currently logged in user (see `Profile Handler`)
* `/logout`: logs out the user by destroying the entry from the session (see `GithubLogout`)
* `/oauth`: callback url for Github service after player login (see `GithubOAuthCallBack`)

Routes redirection are handled at the OAuth service registration. Please see
https://developer.github.com/v3/oauth/#redirect-urls for more niformation on how
to configure your service to provide smouth redirections beween your routes.

~~~
import popcorn
import popcorn::pop_auth

class ProfileHandler
	super Handler

	redef fun get(req, res) do
		var session = req.session
		if session == null then
			res.send "No session :("
			return
		end
		var user = session.user
		if user == null then
			res.send "Not logged in"
			return
		end
		res.send "<h1>Hello {user.login}</h1>"
	end
end

var client_id = "github client id"
var client_secret = "github client secret"

var app = new App
app.use("/*", new SessionInit)
app.use("/login", new GithubLogin(client_id))
app.use("/oauth", new GithubOAuthCallBack(client_id, client_secret))
app.use("/logout", new GithubLogout)
app.use("/profile", new ProfileHandler)
app.listen("localhost", 3000)
~~~

Optionaly, you can use the `GithubUser` handler to provide access to the
Github user stored in session:

~~~
app.use("/api/user", new GithubUser)
~~~

## `pop_tracker`

> ~~~nitish
~~~

app.use_after("/api/*", new PopTracker(config))
app.use_after("/admin/*", new PopTracker(config))

~~~

To retrieve your tracker data use the `PopTrackerAPI` which serves the tracker
data in JSON format.

~~~nitish
app.use("/api/tracker_data", new PopTrackerAPI(config))
~~~

## `pop_validation`

> Validators can be used in Popcorn apps to valid your json inputs before
> data processing and persistence.

Here an example with a Book management app. We use an ObjectValidator to validate
the books passed to the API in the `POST /books` handler.

~~~
import popcorn
import popcorn::pop_json
import serialization

# Serializable book representation.
class Book
	super Serializable

	# Book ISBN
	var isbn: String

	# Book title
	var title: String

	# Book image (optional)
	var img: nullable String

	# Book price
	var price: Float
end

class BookValidator
	super ObjectValidator

	redef init do
		add new ISBNField("isbn")
		add new StringField("title", min_size=1, max_size=255)
		add new StringField("img", required=false)
		add new FloatField("price", min=0.0, max=999.0)
	end
end

class BookHandler
	super Handler

	# Insert a new Book
	redef fun post(req, res) do
		var validator = new BookValidator
		if not validator.validate(req.body) then
			res.json(validator.validation, 400)
			return
		end
		# TODO data persistence
	end
end
~~~

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
