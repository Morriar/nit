# Popcorn


> match: popcorn

**Why endure plain corn when you can pop it?!**

Popcorn is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.


> match: popcorn

Popcorn is built over nitcorn to provide a clean and user friendly interface
without all the boiler plate code.


> match: popcorn
> match: nitcorn

## What does it taste like?

Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:

~~~
import popcorn

class HelloHandler
	super Handler

	redef fun get(req, res) do res.html "<h1>Hello World!</h1>"
end

var app = new App
app.use("/", new HelloHandler)
app.listen("localhost", 3000)
~~~


> match: popcorn::example_hello
> match: nitcorn::HttpResponse
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::html
> match: popcorn::Router::use
> match: popcorn::Handler
> match: popcorn::popcorn

The Popcorn app listens on port 3000 for connections.
The app responds with "Hello World!" for requests to the root URL (`/`) or **route**.
For every other path, it will respond with a **404 Not Found**.


> match: popcorn
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: nitcorn::Route
> match: nitcorn::Routes

The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.


> match: nitcorn
> match: nitcorn::Route
> match: nitcorn::Routes
> match: popcorn

Run the app with the following command:


> match: popcorn::App

~~~bash
$ nitc app.nit && ./app
~~~

Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.

Here the output using the `curl` command:


> match: curl

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


> match: popcorn

## Basic routing


> match: popcorn>examples>routing>

**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).


> match: popcorn>examples>routing>
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Handler::put
> match: popcorn::Handler::delete
> match: popcorn::App
> match: popcorn::Handler

Each route can have one or more handler methods, which are executed when the route is matched.


> match: nitcorn::Route
> match: nitcorn::Routes
> match: popcorn::Handler

Route handlers definition takes the following form:


> match: nitcorn::Route
> match: nitcorn::Routes
> match: popcorn::Handler

~~~nitish
import popcorn

class MyHandler
	super Handler

	redef fun METHOD(req, res) do end
end
~~~


> match: popcorn::Handler
> match: popcorn

Where:

* `MyHandler` is the name of the handler you will add to the app.
* `METHOD` can be replaced by `get`, `post`, `put` or `delete`.


> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Handler::put
> match: popcorn::Handler::delete
> match: popcorn::Handler
> match: popcorn::App

The following example responds to GET and POST requests:


> match: popcorn>examples>
> match: popcorn::Handler::get
> match: popcorn::Handler::post

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
	redef fun post(req, res) do res.send "Got a POST request"
end
~~~


> match: popcorn::example_router
> match: nitcorn::HttpResponse
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Handler
> match: popcorn::popcorn

To make your handler responds to a specific route, you have to add it to the app.


> match: popcorn::Handler
> match: popcorn::App

Respond to POST request on the root route (`/`), the application's home page:


> match: popcorn::Handler::post

~~~
var app = new App
app.use("/", new MyHandler)
~~~


> match: popcorn::Handler
> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::popcorn

Respond to a request to the `/user` route:

~~~
app.use("/user", new MyHandler)
~~~


> match: popcorn::Handler
> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::popcorn

For more details about routing, see the routing section.


> match: popcorn>examples>routing>

## Serving static files with Popcorn


> match: popcorn>examples>static_files>files>
> match: popcorn

To serve static files such as images, CSS files, and JavaScript files, use the
Popcorn built-in handler `StaticHandler`.


> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn::Router::use
> match: popcorn
> match: popcorn::Handler
> match: popcorn::popcorn

Pass the name of the directory that contains the static assets to the StaticHandler
init method to start serving the files directly.
For example, use the following code to serve images, CSS files, and JavaScript files
in a directory named `public`:


> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn>examples>

~~~
app.use("/", new StaticHandler("public/"))
~~~


> match: popcorn::popcorn
> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::StaticHandler

Now, you can load the files that are in the `public` directory:


> match: popcorn>examples>static_files>files>

~~~raw
http://localhost:3000/images/trollface.jpg
http://localhost:3000/css/style.css
http://localhost:3000/js/app.js
http://localhost:3000/hello.html
~~~

Popcorn looks up the files relative to the static directory, so the name of the
static directory is not part of the URL.
To use multiple static assets directories, add the `StaticHandler` multiple times:


> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn>examples>static_files>files>

~~~
app.use("/", new StaticHandler("public/"))
app.use("/", new StaticHandler("files/"))
~~~


> match: popcorn::StaticHandler
> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::popcorn

Popcorn looks up the files in the order in which you set the static directories
with the `use` method.


> match: popcorn::Router::use
> match: popcorn

To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:


> match: popcorn::StaticHandler

~~~
app.use("/static/", new StaticHandler("public/"))
~~~


> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::popcorn
> match: popcorn::StaticHandler

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


> match: popcorn::StaticHandler
> match: popcorn::App

In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:


> match: popcorn::pop_handlers::HttpResponse::redirect
> match: popcorn::StaticHandler
> match: popcorn::pop_handlers::HttpResponse::error

~~~
app.use("/static/", new StaticHandler("public/", "default.html"))
~~~


> match: popcorn::App
> match: popcorn::Router::use
> match: popcorn::StaticHandler
> match: popcorn::popcorn

This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.


> match: popcorn::StaticHandler

## Advanced Routing


> match: popcorn::Route

**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.


> match: popcorn::Route

The following code is an example of a very basic route.


> match: popcorn>examples>
> match: popcorn::Route

~~~
import popcorn

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use("/", new HelloHandler)
~~~


> match: popcorn::example_hello
> match: nitcorn::HttpResponse
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::popcorn
> match: popcorn::example_router

### Route methods

A **route method** is derived from one of the HTTP methods, and is attached to an
instance of the Handler class.


> match: popcorn::Handler

The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.


> match: popcorn>examples>
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::App

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


> match: popcorn::example_router
> match: nitcorn::HttpResponse
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Router::use
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::popcorn

Popcorn supports the following routing methods that correspond to HTTP methods:
get, post, put, and delete.


> match: popcorn
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Handler::put
> match: popcorn::Handler::delete

The request query string is accessed through the `req` parameter:

~~~
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


> match: popcorn::example_query_string
> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: popcorn::App
> match: template::Template
> match: nitcorn::HttpRequest::query_string
> match: nitcorn::HttpRequest::get_args
> match: popcorn::popcorn::App::listen
> match: nitcorn::HttpRequest::uri
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: popcorn::Handler
> match: popcorn::popcorn
> match: template::template
> match: template::Template::addn

Post parameters can also be accessed through the `req` parameter:


> match: popcorn::Handler::post

~~~
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


> match: popcorn::example_post_handler
> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest::body
> match: popcorn::App
> match: template::Template
> match: nitcorn::HttpRequest::post_args
> match: popcorn::popcorn::App::listen
> match: nitcorn::HttpRequest::uri
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler::post
> match: popcorn::Router::use
> match: popcorn::Handler
> match: popcorn::popcorn
> match: template::template
> match: template::Template::addn

There is a special routing method, `all(res, req)`, which is not derived from any
HTTP method. This method is used to respond at a path for all request methods.


> match: popcorn::Handler::all
> match: nitcorn::HttpRequest::method

In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.


> match: popcorn>examples>
> match: popcorn::Handler
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Handler::put
> match: popcorn::Handler::delete

~~~
import popcorn

class AllHandler
	super Handler

	redef fun all(req, res) do res.send "Every request to the homepage"
end
~~~


> match: nitcorn::HttpResponse
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler::all
> match: popcorn::Handler
> match: popcorn::popcorn
> match: popcorn::example_simple_logger

Using the `all` method you can also implement other HTTP request methods.


> match: popcorn::Handler::all
> match: nitcorn::HttpRequest::method

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


> match: nitcorn::HttpRequest::method
> match: nitcorn::HttpRequest
> match: popcorn::Handler::all
> match: popcorn::Handler
> match: popcorn::popcorn
> match: popcorn::example_advanced_logger

### Route paths

**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.


> match: popcorn::Handler
> match: popcorn::Route

Popcorn uses the `AppRoute::match(uri)` method to match the route paths.


> match: popcorn::AppRoute::match
> match: popcorn

Here are some examples of route paths based on strings.


> match: popcorn>examples>

This route path will match requests to the root route, `/`.


> match: popcorn::AppRoute::match
> match: popcorn::AppRoute::path

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
end

var app = new App
app.use("/", new MyHandler)
~~~


> match: popcorn::example_hello
> match: nitcorn::HttpResponse
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::popcorn
> match: popcorn::example_router

This route path will match requests to `/about`.


> match: popcorn::AppRoute::match
> match: popcorn::AppRoute::path

~~~
app.use("/about", new MyHandler)
~~~


> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::Router::use

This route path will match requests to `/random.text`.


> match: popcorn::AppRoute::match
> match: popcorn::AppRoute::path

~~~
app.use("/random.text", new MyHandler)
~~~


> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::Router::use

During the query/response process, routes are matched by order of declaration
through the `App::use` method.


> match: popcorn::Router::use

The app declared in this example will try to match the routes in this order:


> match: popcorn::App
> match: popcorn>examples>
> match: popcorn::AppRoute::match
> match: popcorn::pop_routes::UriPart::match

1. `/`
2. `/about`
3. `/random.text`

### Route parameters

**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.


> match: popcorn::AppRoute::path

The following example declares a handler `UserHome` that responds with the `user`
name.


> match: popcorn::UserHome
> match: popcorn>examples>
> match: popcorn::Handler

~~~
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


> match: popcorn::example_param_route
> match: nitcorn::HttpResponse
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::App
> match: nitcorn::vararg_routes::HttpRequest::param
> match: nitcorn::HttpRequest
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::Router::use
> match: popcorn::Handler
> match: popcorn::popcorn

The `UserHome` handler listen to every path matching `/:user`. This can be `/Morriar`,
`/10`, ... but not `/Morriar/profile` since route follow the strict matching rule.


> match: popcorn::UserHome
> match: popcorn::Handler
> match: popcorn::popcorn::App::listen
> match: popcorn::AppRoute::path

### Glob routes

**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.


> match: popcorn::AppRoute::match

Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.


> match: popcorn::UserItem
> match: popcorn::Handler

~~~
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


> match: popcorn::example_glob_route
> match: nitcorn::HttpResponse
> match: nitcorn::vararg_routes::HttpRequest::param
> match: nitcorn::HttpRequest
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::Router::use
> match: popcorn::Handler
> match: popcorn::popcorn

## Response methods


> match: nitcorn::HttpResponse

The methods on the response object (`res`), can is used to manipulate the
request-response cycle.
If none of these methods are called from a route handler, the client request will
receive a `404 Not found` error.


> match: popcorn::Handler
> match: nitcorn::HttpResponse
> match: popcorn::pop_handlers::HttpResponse::error

* `res.html()` Send a HTML response.
* `res.json()` Send a JSON response.
* `res.redirect()` Redirect a request.
* `res.send()` Send a response of various types.
* `res.error()` Set the response status code and send its message as the response body.


> match: popcorn::pop_handlers::HttpResponse::html
> match: popcorn::pop_json::HttpResponse::json
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_handlers::HttpResponse::error
> match: json
> match: popcorn::ErrorTpl::status
> match: popcorn::HtmlErrorTemplate::status
> match: popcorn::ErrorTpl::message
> match: popcorn::HtmlErrorTemplate::message

## Response cycle


> match: nitcorn::HttpResponse

When the popcorn `App` receives a request, the response cycle is the following:


> match: popcorn::App
> match: popcorn
> match: nitcorn::HttpResponse

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


> match: popcorn::Router::use_before
> match: popcorn::Router::use
> match: popcorn::Router::use_after
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler
> match: popcorn::pop_handlers::Router::handlers

## Middlewares


> match: popcorn::pop_handlers

### Overview

**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:


> match: nitcorn::HttpResponse
> match: popcorn::Handler
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_handlers
> match: popcorn::pop_handlers::Router::handlers

* Execute any code.
* Make changes to the request and the response objects.
* End its action and pass to the next handler in the stack.


> match: popcorn::Handler

If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.


> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler
> match: popcorn::pop_handlers::HttpResponse::sent

### Ultra simple logger example


> match: popcorn>examples>

Here is an example of a simple “Hello World” Popcorn application.
We add a middleware handler to the application called MyLogger that prints a simple
log message in the app stdout.


> match: popcorn>examples>
> match: popcorn
> match: popcorn::Handler
> match: popcorn::ConsoleLog::log
> match: popcorn::ErrorTpl::message
> match: popcorn::HtmlErrorTemplate::message
> match: popcorn::App
> match: popcorn::popcorn

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


> match: popcorn::example_simple_logger
> match: popcorn::App
> match: nitcorn::HttpResponse
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: popcorn::Router::use_before
> match: popcorn::Handler
> match: popcorn::Handler::all
> match: popcorn::popcorn

By using the `MyLogger` handler to the route `/*` we ensure that every requests
(even 404 ones) pass through the middleware handler.
This handler just prints “Request Logged!” when a request is received.


> match: popcorn::Handler

Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.


> match: popcorn::MyLogger
> match: popcorn::Router::use_before

### Ultra cool, more advanced logger example


> match: popcorn>examples>

Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.


> match: popcorn::Handler
> match: popcorn::pop_logging::ConsoleLog::status
> match: popcorn::ErrorTpl::status
> match: popcorn::HtmlErrorTemplate::status
> match: popcorn

This example gives a simplified version of the `RequestClock` and `ConsoleLog` middlewares.


> match: popcorn::RequestClock
> match: popcorn::ConsoleLog
> match: popcorn>examples>

~~~
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

class LogHandler
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

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use_before("/*", new RequestTimeHandler)
app.use("/", new HelloHandler)
app.use_after("/*", new LogHandler)
app.listen("localhost", 3000)
~~~


> match: popcorn::example_advanced_logger
> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest::method
> match: realtime::Clock
> match: nitcorn::HttpRequest::uri
> match: popcorn::pop_logging::HttpResponse::color_status
> match: popcorn::App
> match: realtime::Clock::total
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler
> match: popcorn::Handler::all
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: popcorn::Router::use_after
> match: popcorn::Router::use_before
> match: popcorn::popcorn
> match: realtime::realtime

First, we attach a new attribute `timer` to every `HttpRequest`.
Doing so we can access our data from all handlers that import our module, directly
from the `req` parameter.


> match: popcorn::example_advanced_logger::HttpRequest::timer
> match: nitcorn::HttpRequest
> match: popcorn::Handler

We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.


> match: popcorn::RequestTimeHandler
> match: popcorn::Router::use_before
> match: popcorn::example_advanced_logger::HttpRequest::timer
> match: popcorn::LogEntry::request
> match: popcorn::Router::use

We then let the `HelloHandler` produce the response.


> match: popcorn::HelloHandler
> match: popcorn::LogEntry::response

Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.


> match: popcorn::LogHandler
> match: popcorn::example_advanced_logger::HttpRequest::timer
> match: popcorn::Router::use_after
> match: popcorn::pop_logging::ConsoleLog::display
> match: popcorn::LogEntry::request
> match: popcorn::Router::use

The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.


> match: popcorn::RequestTimeHandler
> match: popcorn::HelloHandler
> match: popcorn::LogHandler
> match: popcorn::App
> match: popcorn::AppThread::app
> match: popcorn::popcorn
> match: popcorn
> match: popcorn::pop_logging::ConsoleLog::display
> match: popcorn::pop_handlers::HttpResponse::sent
> match: popcorn::ConsoleLog::log

Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.


> match: popcorn

### Built-in middlewares

Starting with version 0.1, Popcorn provide a set of built-in middleware that can
be used to develop your app faster.


> match: popcorn
> match: popcorn::App

* `RequestClock`: initializes requests clock.
* `ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).
* `SessionInit`: initializes requests session (see the `Sessions` section).
* `StaticHandler`: serves static files (see the `Serving static files with Popcorn` section).
* `Router`: a mountable mini-app (see the `Mountable routers` section).


> match: popcorn::RequestClock
> match: popcorn::ConsoleLog
> match: popcorn::SessionInit
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::pop_logging::ConsoleLog::status
> match: popcorn::ErrorTpl::status
> match: popcorn::HtmlErrorTemplate::status
> match: console
> match: popcorn::App
> match: popcorn::LogEntry::response
> match: popcorn::pop_logging::HttpRequest::clock
> match: popcorn::AppThread::app
> match: popcorn::LogEntry::session

## Mountable routers


> match: popcorn::Router

Use the `Router` class to create modular, mountable route handlers.
A Router instance is a complete middleware and routing system; for this reason,
it is often referred to as a “mini-app”.


> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::Router::use
> match: popcorn::pop_handlers::Router::handlers

The following example creates a router as a module, loads a middleware handler in it,
defines some routes, and mounts the router module on a path in the main app.


> match: popcorn>examples>
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::App

~~~
import popcorn

class AppHome
	super Handler

	redef fun get(req, res) do res.send "Site Home"
end

class UserLogger
	super Handler

	redef fun all(req, res) do print "User logged"
end

class UserHome
	super Handler

	redef fun get(req, res) do res.send "User Home"
end

class UserProfile
	super Handler

	redef fun get(req, res) do res.send "User Profile"
end

var user_router = new Router
user_router.use("/*", new UserLogger)
user_router.use("/", new UserHome)
user_router.use("/profile", new UserProfile)

var app = new App
app.use("/", new AppHome)
app.use("/user", user_router)
app.listen("localhost", 3000)
~~~


> match: popcorn::example_router
> match: popcorn::Router::use
> match: nitcorn::HttpResponse
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::all
> match: popcorn::popcorn

The app will now be able to handle requests to /user and /user/profile, as well
as call the `Time` middleware handler that is specific to the route.


> match: popcorn::App
> match: popcorn::Handler

## Error handling


> match: popcorn::pop_handlers::HttpResponse::error

**Error handling** is based on middleware handlers.


> match: popcorn::Handler
> match: popcorn::ConsoleLog::error
> match: popcorn::pop_handlers::HttpResponse::error

Define error-handling middlewares in the same way as other middleware handlers:


> match: popcorn::Handler
> match: popcorn::pop_handlers::Router::handlers
> match: popcorn::pop_handlers::HttpResponse::error
> match: popcorn::ConsoleLog::error

~~~
import popcorn

class SimpleErrorHandler
	super Handler

	redef fun all(req, res) do
		if res.status_code != 200 then
			print "An error occurred! {res.status_code})"
		end
	end
end

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use("/", new HelloHandler)
app.use("/*", new SimpleErrorHandler)
app.listen("localhost", 3000)
~~~


> match: popcorn::example_hello
> match: nitcorn::HttpResponse
> match: nitcorn::HttpResponse::status_code
> match: popcorn::Router::use
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Handler
> match: popcorn::Handler::all
> match: popcorn::popcorn
> match: popcorn::example_simple_logger

In this example, every non-200 response is caught by the `SimpleErrorHandler`
that print an error in stdout.


> match: popcorn::SimpleErrorHandler
> match: popcorn>examples>
> match: popcorn::pop_handlers::HttpResponse::error
> match: popcorn::ConsoleLog::error

By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).


> match: popcorn::Handler
> match: popcorn::pop_handlers::HttpResponse::html
> match: json
> match: popcorn::pop_handlers::Router::handlers
> match: popcorn::pop_handlers::HttpResponse::error
> match: popcorn::pop_json::HttpResponse::json

Here an example of the 404 custom error page in HTML:


> match: popcorn>examples>
> match: popcorn::pop_handlers::HttpResponse::html
> match: popcorn::pop_handlers::HttpResponse::error

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


> match: popcorn::example_html_error_handler
> match: nitcorn::HttpResponse
> match: nitcorn::HttpResponse::status_code
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::Router::use
> match: template::Template::rendering
> match: template::Template::add
> match: popcorn::Handler::all
> match: popcorn::Handler
> match: template::Template
> match: popcorn::popcorn
> match: template::template

## Sessions

**Sessions** can be used thanks to the built-in `SessionInit` middleware.


> match: popcorn::SessionInit

Here a simple example of login button that define a value in the `req` session.


> match: popcorn>examples>

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


> match: popcorn::example_session
> match: nitcorn::Session
> match: nitcorn::HttpResponse
> match: nitcorn::sessions::HttpRequest::session
> match: nitcorn::HttpRequest
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::html
> match: popcorn::Handler::post
> match: popcorn::SessionInit
> match: popcorn::Router::use
> match: popcorn::Router::use_before
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: popcorn::Handler
> match: popcorn::popcorn

Notice the use of the `SessionInit` on the `/*` route. You must use the
`SessionInit` first to initialize the request session.
Without that, your request session will be set to `null`.
If you don't use sessions in your app, you do not need to include that middleware.


> match: popcorn::SessionInit
> match: popcorn::App

## Database integration

### Mongo DB


> match: popcorn::pop_repos::AppConfig::db
> match: popcorn::UserList::db

If you want to persist your data, Popcorn works well with MongoDB.


> match: popcorn
> match: mongodb

In this example, we will show how to store and list user with a Mongo database.


> match: popcorn>examples>
> match: popcorn::pop_auth::Session::user

First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.


> match: popcorn::UserList::db
> match: popcorn::Handler
> match: popcorn::UserList
> match: popcorn::pop_repos::AppConfig::db
> match: popcorn::pop_auth::Session::user

Then we define a handler that displays the user creation form on GET requests.
POST requests are used to save the user data.


> match: popcorn::Handler
> match: popcorn::Handler::get
> match: popcorn::Handler::post
> match: popcorn::Repository::save
> match: popcorn::pop_auth::Session::user

~~~
import popcorn
import mongodb
import template

class UserList
	super Handler

	var db: MongoDb

	redef fun get(req, res) do
		var users = db.collection("users").find_all(new JsonObject)

		var tpl = new Template
		tpl.add "<h1>Users</h1>"
		tpl.add "<table>"
		for user in users do
			tpl.add """<tr>
				<td>{{{user["login"] or else "null"}}}</td>
				<td>{{{user["password"] or else "null"}}}</td>
			</tr>"""
		end
		tpl.add "</table>"
		res.html tpl
	end
end

class UserForm
	super Handler

	var db: MongoDb

	redef fun get(req, res) do
		var tpl = new Template
		tpl.add """<h1>Add a new user</h1>
		<form action="/new" method="POST">
			<input type="text" name="login" />
			<input type="password" name="password" />
			<input type="submit" value="save" />
		</form>"""
		res.html tpl
	end

	redef fun post(req, res) do
		var json = new JsonObject
		json["login"] = req.post_args["login"]
		json["password"] = req.post_args["password"]
		db.collection("users").insert(json)
		res.redirect "/"
	end
end

var mongo = new MongoClient("mongodb://localhost:27017/")
var db = mongo.database("mongo_example")

var app = new App
app.use("/", new UserList(db))
app.use("/new", new UserForm(db))
app.listen("localhost", 3000)
~~~


> match: popcorn::example_mongodb
> match: json::JsonObject
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest
> match: core::HashMap
> match: mongodb::MongoDb::collection
> match: nitcorn::HttpRequest::post_args
> match: mongodb::MongoClient
> match: template::Template
> match: popcorn::Handler::get
> match: popcorn::pop_handlers::HttpResponse::html
> match: popcorn::Router::use
> match: mongodb::MongoCollection
> match: mongodb::MongoDb
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Handler::post
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: mongodb::MongoCollection::insert
> match: mongodb::MongoClient::database
> match: popcorn::Handler
> match: mongodb::MongoCollection::find_all
> match: popcorn::popcorn
> match: template::template
> match: mongodb::mongodb
> match: core::MapRead::[]
> match: template::Template::add
> match: core::Map::[]=

## Angular.JS integration

Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!


> match: popcorn

Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:


> match: popcorn::StaticHandler
> match: popcorn::pop_handlers::HttpResponse::redirect

~~~
import popcorn

var app = new App
app.use("/*", new StaticHandler("my-ng-app/", "index.html"))
app.listen("localhost", 3000)
~~~


> match: popcorn::example_angular
> match: popcorn::App
> match: popcorn::popcorn::App::listen
> match: popcorn::Router::use
> match: popcorn::popcorn
> match: popcorn::StaticHandler
> match: popcorn::example_static_default

Because the StaticHandler will not find the angular routes as static files,
you must specify the path to the default angular controller.
In this example, the StaticHandler will redirect any unknown requests to the `index.html`
angular controller.


> match: popcorn::StaticHandler
> match: popcorn>examples>
> match: popcorn::pop_handlers::HttpResponse::redirect

See the examples for a more detailed use case working with a JSON API.


> match: popcorn>examples>
> match: json

