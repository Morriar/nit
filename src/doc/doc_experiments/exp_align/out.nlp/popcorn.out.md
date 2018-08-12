# Popcorn

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::popcorn

**Why endure plain corn when you can pop it?!**

> match: popcorn::pop_sessions
> match: popcorn::pop_tasks
> match: popcorn::pop_json

Popcorn is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::popcorn

Popcorn is built over nitcorn to provide a clean and user friendly interface
without all the boiler plate code.

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::UserHomepage
> match: popcorn::UserProfile
> match: popcorn::UserHome
> match: popcorn::GithubUser

## What does it taste like?

> match: popcorn>

Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:

> match: popcorn::ObjectValidator::add
> match: popcorn>examples>static_files>files>
> match: popcorn::MyTemplatePugFileHandler::pug_file
> match: popcorn>examples>static_files>
> match: popcorn::MyTemplateFileHandler::tpl_file
> match: popcorn::StaticHandler::default_file
> match: popcorn::TestExampleTemplateFile::test_example_template_file
> match: popcorn::StaticHandler::file_server
> match: popcorn::TestExampleTemplatePugFile::test_example_template_pug_file
> match: popcorn::ValidationResult::add_error

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

The Popcorn app listens on port 3000 for connections.
The app responds with "Hello World!" for requests to the root URL (`/`) or **route**.
For every other path, it will respond with a **404 Not Found**.

> match: popcorn>examples>hello_world>
> match: popcorn::TestAppRoute
> match: popcorn::App
> match: popcorn::AppConfig
> match: popcorn::AppRoute

The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.

> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn>examples>routing>

Run the app with the following command:

> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute

~~~bash
$ nitc app.nit && ./app
~~~

Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.

> match: popcorn::pop_tracker::BrowserCount

Here the output using the `curl` command:

> match: popcorn::App

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

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::popcorn

## Basic routing

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).

> match: popcorn::FieldsMatch::other
> match: popcorn::LogEntry::request
> match: popcorn::pop_repos::AppConfig::client
> match: popcorn::Handler::delete
> match: popcorn::Handler::put
> match: popcorn::AppRoute::path
> match: popcorn::Handler::post
> match: popcorn::Handler::get
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix3
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix1
> match: popcorn::TestAppRoute::test_strict_route_match_only_one_uri
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_2
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_3
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_4
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_5
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_6
> match: popcorn::TestAppParamRoute::test_param_route_match_good_uri_params_1

Each route can have one or more handler methods, which are executed when the route is matched.

> match: popcorn::TestRouteMatching
> match: popcorn>examples>handlers>
> match: popcorn>examples>routing>
> match: popcorn>examples>watchdog>src>handlers>

Route handlers definition takes the following form:

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestHandler
> match: popcorn::TestAppRoute
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler

~~~nitish
import popcorn

class MyHandler
	super Handler

	redef fun METHOD(req, res) do end
end
~~~

Where:

> match: popcorn::GithubLogout::redirect_uri

* `MyHandler` is the name of the handler you will add to the app.
* `METHOD` can be replaced by `get`, `post`, `put` or `delete`.

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::Handler::put
> match: popcorn::Handler::delete
> match: popcorn::Handler::post
> match: popcorn::Handler::get

The following example responds to GET and POST requests:

> match: popcorn::LogEntry::request
> match: popcorn::Handler::post
> match: popcorn::TestExamplePostHandler::test_example_post_handler
> match: popcorn::Handler::get
> match: popcorn>examples>
> match: popcorn::example_post_handler
> match: popcorn::pop_handlers::Router::post_handlers

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
	redef fun post(req, res) do res.send "Got a POST request"
end
~~~

To make your handler responds to a specific route, you have to add it to the app.

> match: popcorn::TestAppRoute
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::AppRoute
> match: popcorn::AppConfig
> match: popcorn>examples>routing>
> match: popcorn::Handler

Respond to POST request on the root route (`/`), the application's home page:

> match: popcorn::UserHome
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

~~~
var app = new App
app.use("/", new MyHandler)
~~~

Respond to a request to the `/user` route:

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::UserProfile
> match: popcorn::UserHomepage
> match: popcorn::UserHome
> match: popcorn::TestAppRoute
> match: popcorn::GithubUser

~~~
app.use("/user", new MyHandler)
~~~

For more details about routing, see the routing section.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

## Serving static files with Popcorn

> match: popcorn>examples>static_files>
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>static_files>files>

To serve static files such as images, CSS files, and JavaScript files, use the
Popcorn built-in handler `StaticHandler`.

> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>public>images>
> match: popcorn>examples>static_files>public>css>
> match: popcorn>examples>static_files>files>
> match: popcorn>examples>angular>www>javascripts>
> match: popcorn>examples>watchdog>www>javascripts>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn

Pass the name of the directory that contains the static assets to the StaticHandler
init method to start serving the files directly.
For example, use the following code to serve images, CSS files, and JavaScript files
in a directory named `public`:

> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>
> match: popcorn>examples>static_files>public>images>
> match: popcorn>examples>static_files>public>
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>static_files>public>css>
> match: popcorn>examples>static_files>files>
> match: popcorn>examples>angular>www>javascripts>
> match: popcorn>examples>watchdog>www>javascripts>

~~~
app.use("/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the `public` directory:

> match: popcorn>examples>static_files>public>
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
> match: popcorn>examples>static_files>
> match: popcorn::example_static_multiple
> match: popcorn::TestExampleStaticMultiple
> match: popcorn::example_static

~~~
app.use("/", new StaticHandler("public/"))
app.use("/", new StaticHandler("files/"))
~~~

Popcorn looks up the files in the order in which you set the static directories
with the `use` method.

> match: popcorn>examples>static_files>
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>static_files>files>
> match: popcorn::example_static
> match: popcorn::example_static_default

To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:

> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>

~~~
app.use("/static/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the public directory from the `/static`
path prefix.

> match: popcorn::AppRoute::path
> match: popcorn>examples>static_files>
> match: popcorn>examples>static_files>public>
> match: popcorn::StaticHandler::static_dir
> match: popcorn::TestExampleStatic::test_example_static

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
> match: popcorn::AppConfig
> match: popcorn::AppThread
> match: popcorn::TestAppRoute
> match: popcorn::App
> match: popcorn::AppLogin

In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:

> match: popcorn>examples>static_files>
> match: popcorn::example_static_default
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>

~~~
app.use("/static/", new StaticHandler("public/", "default.html"))
~~~

This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.

> match: popcorn>examples>static_files>files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>

## Advanced Routing

> match: popcorn::AdvancedLoggerHandler

**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

The following code is an example of a very basic route.

> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

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

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

A **route method** is derived from one of the HTTP methods, and is attached to an
instance of the Handler class.

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::Handler
> match: popcorn>examples>routing>
> match: popcorn::PostHandler
> match: popcorn::TrackerHandler
> match: popcorn::TestRouteMatching
> match: popcorn::MyTemplateHandler
> match: popcorn::MyTemplateStringHandler
> match: popcorn::MyTemplateFileHandler
> match: popcorn::RequestTimeHandler
> match: popcorn::QueryStringHandler
> match: popcorn::SimpleLoggerHandler
> match: popcorn::MyTemplatePugHandler
> match: popcorn::AdvancedLoggerHandler
> match: popcorn::TestAppRoute
> match: popcorn::TestExamplePostHandler
> match: popcorn::MyTemplatePugFileHandler
> match: popcorn::TestHandler

The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.

> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn::AppConfig
> match: popcorn>examples>routing>

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

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching

The request query string is accessed through the `req` parameter:

> match: popcorn::pop_routes::UriString::string
> match: popcorn::LogEntry::request
> match: popcorn::TestExampleQueryString::test_example_query_string
> match: popcorn::pop_auth::GithubOAuthCallBack::request_access_token
> match: popcorn::example_query_string
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::AppParamRoute::parse_uri_parameters
> match: popcorn::AppParamRoute::parse_path_parameters
> match: popcorn::Repository::QUERY

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

Post parameters can also be accessed through the `req` parameter:

> match: popcorn::PostHandler
> match: popcorn::TestExamplePostHandler

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

There is a special routing method, `all(res, req)`, which is not derived from any
HTTP method. This method is used to respond at a path for all request methods.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching

In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.

> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_post_handler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>

~~~
import popcorn

class AllHandler
	super Handler

	redef fun all(req, res) do res.send "Every request to the homepage"
end
~~~

Using the `all` method you can also implement other HTTP request methods.

> match: popcorn::MyOtherHandler

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

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching

**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.

> match: popcorn::pop_routes::UriString::string
> match: popcorn::AppRoute::path
> match: popcorn::LogEntry::request
> match: popcorn::TestExampleGlobRoute::test_example_glob_route
> match: popcorn::pop_routes::AppParamRoute::path_parts
> match: popcorn::TestExampleQueryString::test_example_query_string
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix1
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix3
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix2
> match: popcorn::example_glob_route

Popcorn uses the `AppRoute::match(uri)` method to match the route paths.

> match: popcorn::AppRoute
> match: popcorn::TestRouteMatching

Here are some examples of route paths based on strings.

> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching

This route path will match requests to the root route, `/`.

> match: popcorn::TestRouteMatching
> match: popcorn>examples>routing>

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

> match: popcorn::TestRouteMatching

~~~
app.use("/about", new MyHandler)
~~~

This route path will match requests to `/random.text`.

> match: popcorn::TestRouteMatching

~~~
app.use("/random.text", new MyHandler)
~~~

During the query/response process, routes are matched by order of declaration
through the `App::use` method.

> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute

The app declared in this example will try to match the routes in this order:

> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route

1. `/`
2. `/about`
3. `/random.text`

> match: popcorn>

### Route parameters

> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn>examples>routing>

**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.

> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix1
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix3
> match: popcorn::AppRoute::path
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn::pop_routes::AppParamRoute::path_parts
> match: popcorn::AppParamRoute::parse_path_parameters
> match: popcorn::AppParamRoute::parse_uri_parameters
> match: popcorn::TestAppRoute::test_strict_route_match_only_one_uri

The following example declares a handler `UserHome` that responds with the `user`
name.

> match: popcorn::UserHome
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>

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

The `UserHome` handler listen to every path matching `/:user`. This can be `/Morriar`,
`/10`, ... but not `/Morriar/profile` since route follow the strict matching rule.

> match: popcorn::UserHome
> match: popcorn::TestRouteMatching

### Glob routes

> match: popcorn::TestExampleGlobRoute::test_example_glob_route
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix3
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix1
> match: popcorn::example_glob_route

**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.

> match: popcorn::TestRouteMatching

Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.

> match: popcorn::UserItem
> match: popcorn::TestRouteMatching

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

## Response methods

> match: popcorn::LogEntry::response

The methods on the response object (`res`), can is used to manipulate the
request-response cycle.
If none of these methods are called from a route handler, the client request will
receive a `404 Not found` error.

> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::GithubOAuthCallBack

* `res.html()` Send a HTML response.
* `res.json()` Send a JSON response.
* `res.redirect()` Redirect a request.
* `res.send()` Send a response of various types.
* `res.error()` Set the response status code and send its message as the response body.

> match: popcorn::LogEntry::response
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_handlers::HttpResponse::sent
> match: popcorn::LogEntry::response
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_json::HttpResponse::json
> match: popcorn::pop_handlers::HttpResponse::sent
> match: popcorn::pop_handlers::HttpResponse::check_sent
> match: popcorn::LogEntry::request
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: popcorn::GithubLogin::build_auth_redirect
> match: popcorn::GithubLogout::redirect_uri
> match: popcorn::pop_auth::GithubOAuthCallBack::request_access_token
> match: popcorn::LogEntry::response
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_handlers::HttpResponse::sent
> match: popcorn::LogEntry::response
> match: popcorn::ErrorTpl::status
> match: popcorn::HtmlErrorTemplate::status
> match: popcorn::ErrorTpl::message
> match: popcorn::HtmlErrorTemplate::message
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_logging::ConsoleLog::status

## Response cycle

> match: popcorn::LogEntry::response

When the popcorn `App` receives a request, the response cycle is the following:

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute

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

> match: popcorn::AppRoute::match
> match: popcorn::Router::use_before
> match: popcorn::pop_routes::UriPart::match
> match: popcorn>examples>middlewares>
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn::LogEntry::response
> match: popcorn>examples>middlewares>
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn::LogEntry::response
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn>examples>middlewares>
> match: popcorn::LogEntry::response
> match: popcorn::AppRoute::match
> match: popcorn::pop_handlers::HttpResponse::send
> match: popcorn::pop_routes::UriPart::match
> match: popcorn::pop_handlers::HttpResponse::sent
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestRouteMatching
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn::LogEntry::response
> match: popcorn>examples>middlewares>
> match: popcorn::pop_handlers::HttpResponse::send

## Middlewares

> match: popcorn>examples>middlewares>

### Overview

**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler

* Execute any code.
* Make changes to the request and the response objects.
* End its action and pass to the next handler in the stack.

> match: popcorn::ClientThread::test_suite
> match: popcorn::TestPopcorn::system
> match: popcorn::LogEntry::response
> match: popcorn::LogEntry::request
> match: popcorn::ValidationResult::object
> match: popcorn::LogEntry::response_time
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler

If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::GithubOAuthCallBack

### Ultra simple logger example

> match: popcorn::TestExampleSimpleLogger
> match: popcorn::example_simple_logger
> match: popcorn::UserLogger
> match: popcorn::test_example_simple_logger

Here is an example of a simple “Hello World” Popcorn application.
We add a middleware handler to the application called MyLogger that prints a simple
log message in the app stdout.

> match: popcorn>examples>hello_world>
> match: popcorn::SimpleErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHello
> match: popcorn>examples>middlewares>
> match: popcorn::example_simple_error_handler
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_hello
> match: popcorn::example_simple_logger

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

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::Handler
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler

Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler

### Ultra cool, more advanced logger example

> match: popcorn::example_simple_logger
> match: popcorn::UserLogger
> match: popcorn::TestExampleSimpleLogger
> match: popcorn>examples>

Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::GithubOAuthCallBack
> match: popcorn::TestPopcorn

This example gives a simplified version of the `RequestClock` and `ConsoleLog` middlewares.

> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn>examples>middlewares>

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

First, we attach a new attribute `timer` to every `HttpRequest`.
Doing so we can access our data from all handlers that import our module, directly
from the `req` parameter.

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler

We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.

> match: popcorn::RequestTimeHandler
> match: popcorn>examples>middlewares>
> match: popcorn::GithubOAuthCallBack

We then let the `HelloHandler` produce the response.

> match: popcorn::HelloHandler

Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler

The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.

> match: popcorn::HelloHandler
> match: popcorn::RequestTimeHandler
> match: popcorn>examples>middlewares>
> match: popcorn::AppConfig

Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.

> match: popcorn>examples>middlewares>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn::CounterAPI
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::PopTrackerAPI

### Built-in middlewares

> match: popcorn>examples>middlewares>

Starting with version 0.1, Popcorn provide a set of built-in middleware that can
be used to develop your app faster.

> match: popcorn>examples>middlewares>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::AppConfig
> match: popcorn::TestPopcorn
> match: popcorn::TestAppRoute
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute

* `RequestClock`: initializes requests clock.
* `ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).
* `SessionInit`: initializes requests session (see the `Sessions` section).
* `StaticHandler`: serves static files (see the `Serving static files with Popcorn` section).
* `Router`: a mountable mini-app (see the `Mountable routers` section).

> match: popcorn::RequestClock
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn>examples>sessions>
> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn::TestPopcorn
> match: popcorn::example_static
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::example_static_default
> match: popcorn::Router
> match: popcorn::TestExampleRouter
> match: popcorn::TestPopcornRouter

## Mountable routers

> match: popcorn::TestPopcornRouter::test_router
> match: popcorn::TestExampleRouter::test_example_router

Use the `Router` class to create modular, mountable route handlers.
A Router instance is a complete middleware and routing system; for this reason,
it is often referred to as a “mini-app”.

> match: popcorn::Router
> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn::TestExampleRouter
> match: popcorn::TestPopcornRouter
> match: popcorn>examples>routing>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute

The following example creates a router as a module, loads a middleware handler in it,
defines some routes, and mounts the router module on a path in the main app.

> match: popcorn::TestAppRoute
> match: popcorn>examples>middlewares>
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Router
> match: popcorn>examples>handlers>
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn>examples>watchdog>src>handlers>

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

The app will now be able to handle requests to /user and /user/profile, as well
as call the `Time` middleware handler that is specific to the route.

> match: popcorn::TestAppRoute
> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn::AppRoute
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::GithubOAuthCallBack
> match: popcorn::RequestTimeHandler
> match: popcorn::PopTrackerResponseTime
> match: popcorn::AppConfig

## Error handling

> match: popcorn::ConsoleLog::error
> match: popcorn::ValidationResult::error
> match: popcorn::pop_handlers::HttpResponse::error

**Error handling** is based on middleware handlers.

> match: popcorn>examples>middlewares>
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>

Define error-handling middlewares in the same way as other middleware handlers:

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>

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

In this example, every non-200 response is caught by the `SimpleErrorHandler`
that print an error in stdout.

> match: popcorn::SimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler

By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).

> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>middlewares>
> match: popcorn::HtmlErrorTemplate
> match: popcorn::SimpleErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler

Here an example of the 404 custom error page in HTML:

> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::HtmlErrorTemplate
> match: popcorn::HtmlErrorHandler

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

## Sessions

> match: popcorn>

**Sessions** can be used thanks to the built-in `SessionInit` middleware.

> match: popcorn::SessionInit
> match: popcorn>examples>middlewares>

Here a simple example of login button that define a value in the `req` session.

> match: popcorn>examples>sessions>
> match: popcorn::example_simple_logger
> match: popcorn::AppLogin
> match: popcorn::example_simple_error_handler
> match: popcorn>examples>
> match: popcorn::SimpleErrorHandler
> match: popcorn::SimpleLoggerHandler
> match: popcorn::example_session
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleSimpleLogger

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
If you don't use sessions in your app, you do not need to include that middleware.

> match: popcorn::SessionInit
> match: popcorn::TestAppRoute
> match: popcorn>examples>middlewares>
> match: popcorn>examples>sessions>
> match: popcorn::pop_sessions
> match: popcorn::TestExampleSession

## Database integration

> match: popcorn::pop_repos::AppConfig::default_db_name
> match: popcorn::pop_repos::AppConfig::opt_db_name
> match: popcorn::pop_repos::AppConfig::default_db_host

### Mongo DB

> match: popcorn::pop_repos::AppConfig::db

If you want to persist your data, Popcorn works well with MongoDB.

> match: popcorn>examples>mongodb>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>

In this example, we will show how to store and list user with a Mongo database.

> match: popcorn::UserList
> match: popcorn>examples>
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::UserProfile
> match: popcorn::UserHomepage
> match: popcorn::UserHome
> match: popcorn::GithubUser
> match: popcorn::TestExampleHello

First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.

> match: popcorn::UserList
> match: popcorn>examples>handlers>

Then we define a handler that displays the user creation form on GET requests.
POST requests are used to save the user data.

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::UserList
> match: popcorn::GithubUser
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::UserHomepage
> match: popcorn::UserProfile
> match: popcorn::UserHome

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

## Angular.JS integration

> match: popcorn::example_angular

Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!

> match: popcorn>examples>angular>

Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:

> match: popcorn>examples>angular>
> match: popcorn::LogEntry::request
> match: popcorn::TestExampleGlobRoute::test_example_glob_route
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_4
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_1
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_3
> match: popcorn::TestRouteMatching::test_glob_route_work_with_parameters_2
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix1
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix2
> match: popcorn::TestRouteMatching::test_glob_route_match_good_uri_prefix3
> match: popcorn::TestExampleAngular::test_example_angular
> match: popcorn::example_glob_route

~~~
import popcorn

var app = new App
app.use("/*", new StaticHandler("my-ng-app/", "index.html"))
app.listen("localhost", 3000)
~~~

Because the StaticHandler will not find the angular routes as static files,
you must specify the path to the default angular controller.
In this example, the StaticHandler will redirect any unknown requests to the `index.html`
angular controller.

> match: popcorn>examples>angular>
> match: popcorn::example_static_default
> match: popcorn>examples>static_files>
> match: popcorn::example_static
> match: popcorn::StaticHandler
> match: popcorn::example_param_route

See the examples for a more detailed use case working with a JSON API.

> match: popcorn::CounterAPI
> match: popcorn>examples>
> match: popcorn::PopTrackerAPI
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler

