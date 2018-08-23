# `nitcorn` - Lightweight framework for Web applications development

* [Features](#Features)
* [`restful` - Support module for the `nitrestful` tool and the `restful` annotation](#`restful`---Support-module-for-the-`nitrestful`-tool-and-the-`restful`-annotation)
* [`server_config` - Classes and services to configure the server](#`server_config`---Classes-and-services-to-configure-the-server)
* [`sessions` - Automated session management](#`sessions`---Automated-session-management)
* [`vararg_routes` - Routes with parameters.](#`vararg_routes`---Routes-with-parameters.)
* [Other features](#Other-features)
* [Authors](#Authors)

The main classes are:

* `Action` to answer to requests.
* `Route` to represent a path to an action.
* `VirtualHost` to listen on a specific interface and behave accordingly
* `HttpFactory` which is the base dispatcher class.

Basic usage example:

~~~~
class MyAction
    super Action

    redef fun answer(http_request, turi)
    do
        var response = new HttpResponse(200)
        response.body = """
<!DOCTYPE html>
<head>
    <meta charset="utf-8">
    <title>Hello World</title>
</head>
<body>
    <p>Hello World</p>
</body>
</html>"""
        return response
    end
end

# Listen to port 8080 on all interfaces
var vh = new VirtualHost("0.0.0.0:8080")

# Serve index.html with our custom handler
vh.routes.add new Route("/index.html", new MyAction)

# Serve everything else with a standard `FileServer`
vh.routes.add new Route(null, new FileServer("/var/www/"))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~~

## Features

### `restful` - Support module for the `nitrestful` tool and the `restful` annotation

The `restful` annotation is applied on a method to assign it to an HTTP resource.
The `restful` method must be a property of a subclass of `RestfulAction` and
return an `HTTPResponse`.
Once an instance of the class is assigned to a route, the method
can be invoked as a resource under that route.
The returned `HTTPResponse` will be sent back to the client.

The arguments of the method must be deserializable.
So use simple data types like `String`, `Int`, `Float`, etc.
or any other `Serializable` class.
The method is invoked only if all the arguments are correctly passed
in the JSON format by the HTTP client.
There is one exception, `String` arguments are returned as is,
they don't need the surrounding `""`.
If an argument is missing or there a format error, the `answer` method responds to the request.
Arguments that are `nullable` are optional,
if they are missing `null` is passed to the `restful` method.

The annotation accepts three kinds of arguments, in any order:

* String literals rename or add an alias for the HTTP resource.
  By default, the name of the HTTP resource is the name of the `restful` method.
  The first string literal replaces the default name,
  while additional string literals add aliases.

* Ids such as `GET`, `POST`, `PUT` and `DELETE` restrict which HTTP methods
  are accepted. By default, all HTTP methods are accepted.

* The `async` keyword triggers executing calls to this service asynchronously
  by the `thread_pool` attribute of the `RestfulAction`.
  By default, each call are executed on the same thread in a FIFO order.

See the example at `lib/nitcorn/examples/restful_annot.nit` or
a real world use case at `contrib/benitlux/src/server/benitlux_controller.nit`.

The `restful` annotation is implemented by then `nitrestful` tool.
To compile a module (`my_module.nit`) that uses the `restful` annotation:

* Run `nitrestful my_module.nit` to produce `my_module_rest.nit`
* Link `my_module_rest.nit` at compilation: `nitc my_module.nit -m my_module_rest.nit`.

Example from `nitcorn::restful_annot`:

~~~
# Example for the `restful` annotation documented at `lib/nitcorn/restful.nit`
module restful_annot is example

import nitcorn::restful
import nitcorn::pthreads

# An action root to its `restful` methods
class MyAction
	super RestfulAction

	# Method answering requests such as `foo?s=some_string&i=42&b=true`
	#
	# By default, the name of the HTTP resource is the name of the method.
	# Responds to all HTTP methods, including GET, POST, PUT and DELETE.
	#
	# All arguments are deserialized from a JSON format,
	# except for strings that are used as is.
	fun foo(s: String, i: Int, b: Bool): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "foo {s} {i} {b}"
		return resp
	end

	# Method answering requests such as `api_name?s=these_arguments_are_optional`
	#
	# This method is available as both `api_name` and `alt_name` in HTTP.
	# Responds only to the GET and PUT HTTP method.
	fun bar(s: nullable String, i: nullable Int, b: nullable Bool): HttpResponse
	is restful("api_name", "alt_name", GET, PUT) do

		var resp = new HttpResponse(200)
		resp.body = "bar {s or else "null"} {i or else "null"} {b or else "null"}"
		return resp
	end

	# Asynchronous method answering requests such as `async_service?str=some_string`
	#
	# This method is executed by the `thread_pool` attribute of this class.
	# Be careful when using the `async` argument to follow all the good
	# concurrent programming pratices.
	fun async_service(str: String): HttpResponse
	is restful(async) do

		# "Work" for 2 seconds
		2.0.sleep

		# Answer
		var resp = new HttpResponse(200)
		resp.body = "async_service {str}"
		return resp
	end

	# Method with two complex parameters answering requests such as
	# `complex_args?array=["a","b"]&data={"str":"asdf","more":{"str":"ASDF"}}`
	#
	# Collections and other classes can also be used as parameters,
	# they will be deserialized from JSON format.
	# By default, the JSON objects will be parsed as the type of the parameter.
	# In the example above, the argument passed as `data` is deserialized as a `MyData`.
	# However, you can use metadata in the JSON object to deserialize it
	# as a subclass of `MyData`, as in this request where `data` is a `MyOtherData`:
	#
	# `complex_args?array=["a","b"]&data={"__class":"MyOtherData","str":"asdf","i":1234}`
	#
	# See the `json` package documentation for more information on JSON
	# deserialization and the metadata values.
	fun complex_args(array: Array[String], data: MyData): HttpResponse
	is restful do
		var resp = new HttpResponse(200)
		resp.body = "complex_args {array} {data}"
		return resp
	end

	# Catch all other request
	redef fun answer(request, turi)
	do
		var resp = new HttpResponse(404)
		resp.body = "Fallback answer"
		return resp
	end
end

# Simple data structure for `MyAction::complex_args`
class MyData
	serialize

	# Some string
	var str: String

	# Some more data
	var more: nullable MyData

	redef fun to_s do return "<MyData str:{str} more:{more or else "null"}>"
end

# Another data structure, subclass to `MyData`
class MyOtherData
	super MyData
	serialize

	# An integer
	var i: Int

	redef fun to_s do return "<MyOtherData str:{str} more:{more or else "null"} i:{i}>"
end

var vh = new VirtualHost("localhost:8080")

# Set `rest_path` as the root for an instance of `MyAction`, so:
# * `MyClass::foo` is available as `localhost:8080/rest_path/foo?s=s&i=12&b=true`,
# * `MyClass::bar` is available as both `localhost:8080/rest_path/api_name?s=s`
#   and `localhost:8080/rest_path/alt_name?...`.
# * `MyClass::async_service` is available as `localhost:8080/rest_path/async_service?str=str`
# * `MyClass::complex_args` is available as
#   `localhost:8080/rest_path/complex_args?array=["a","b"]&data={"str":"asdf"}`
vh.routes.add new Route("rest_path", new MyAction)

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~

### `server_config` - Classes and services to configure the server

The classes of interest are `VirtualHost`, `Interface`, `Route` and `Action`

### `sessions` - Automated session management

When parsing a request, this module associate a pre-existing session
to the request if there is one. It will also send the required cookie
with the response if a session has been associated to the response object.

### `vararg_routes` - Routes with parameters.

Using `vararg_routes`, a `Route` path can contain variable parts
that will be matched against a `HttpRequest` URL.

Variable parameters of a route path can be specified using the `:` prefix:

~~~nitish
var iface = "http://localhost:3000"
var vh = new VirtualHost(iface)
vh.routes.add new Route("/blog/articles/:articleId", new BlogArticleAction)
~~~

Route arguments can be accessed from the `HttpRequest` within a nitcorn `Action`:

~~~nitish
class BlogArticleAction
	super Action

	redef fun answer(request, url) do
		var param = request.param("articleId")
		if param == null then
			return new HttpResponse(400)
		end

		print url # let's say "/blog/articles/12"
		print param # 12

		return new HttpResponse(200)
	end
end
~~~

## Route matching

Route can match variables expression.

~~~
# We need an Action to try routes.
class DummyAction super Action end
var action = new DummyAction

var route = new Route("/users/:id", action)
assert not route.match("/users")
assert route.match("/users/1234")
assert route.match("/users/") # empty id
~~~

Route without uri parameters still behave like before.

~~~
route = new Route("/users", action)
assert route.match("/users")
assert route.match("/users/1234")
assert not route.match("/issues/1234")
~~~

## Route priority

Priority depends on the order the routes were added to the `Routes` dispatcher.

~~~
var host = new VirtualHost("")
var routes = new Routes(host)

routes.add new Route("/:a/:b/:c", action)
routes.add new Route("/users/:id", action)
routes.add new Route("/:foo", action)

assert routes["/a/b/c"].path == "/:a/:b/:c"
assert routes["/a/b/c/d"].path == "/:a/:b/:c"
assert routes["/users/1234/foo"].path == "/:a/:b/:c"

assert routes["/users/"].path == "/users/:id"
assert routes["users/"].path == "/users/:id"
assert routes["/users/1234"].path == "/users/:id"

assert routes["/users"].path == "/:foo"
assert routes["/"].path == "/:foo"
assert routes[""].path == "/:foo"
~~~

## Accessing uri parameter and values

Parameters can be accessed by parsing the uri.

~~~
route = new Route("/users/:id", action)
var params = route.parse_params("/users/1234")
assert params.has_key("id")
assert not params.has_key("foo")
assert params["id"] == "1234"
~~~

Or from the `HttpRequest`.

~~~
route = new Route("/users/:id", action)
var req = new HttpRequest
req.uri_params = route.parse_params("/users/1234")
assert req.params == ["id"]
assert req.param("id") == "1234"
assert req.param("foo") == null
~~~

Example from `nitcorn::htcpcp_server`:

~~~
# A server that implements HTCPCP. At the moment there are no additions.
module htcpcp_server is example

import nitcorn

# Nitcorn Action used to answer requests.
class HTCPCPAction
	super Action

	# Brewing status.
	var brewing = false

	# Teapot status.
	var is_teapot = false

	redef fun answer(http_request, turi) do
		var message: String
		var method = http_request.method
		var response: HttpResponse

		if is_teapot then
			response = new HttpResponse(418)
			response.body = "I'm a teapot!\n"
			response.header["Content-Type"] = "text"
			return response
		end

		if method == "POST" or method == "BREW" then
			if brewing then
				message = "Pot Busy"
				response = new HttpResponse(400)
			else
				message = "Brewing a new pot of coffee\n"
				brewing = true
				response = new HttpResponse(200)
			end
		else if method == "WHEN" then
			if brewing then
				message = "Stopped adding milk, your coffee is ready!\n"
				brewing = false
				response = new HttpResponse(200)
			else
				message = "There is no coffee brewing!\n"
				response = new HttpResponse(405)
			end
		else if method == "PROPFIND" or method == "GET" then
			if brewing then
				message = "The pot is busy\n"
			else
				message = "The pot is ready to brew more coffee\n"
			end
			response = new HttpResponse(200)
		else
			message = "Unknown method: {method}"
			brewing = false
			response = new HttpResponse(405)
		end

		response.header["Content-Type"] = "text"
		response.body = message

		return response
	end
end

# Nitcorn server.
class HTCPCServer

	# Port to listen to.
	var port: Int

	# Start listening.
	fun run do
		var vh = new VirtualHost("localhost:{port}")
		vh.routes.add new Route("/", new HTCPCPAction)
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add vh
		print "Nit4Coffee is now running at port: {port}"
		factory.run
	end
end

var server = new HTCPCServer(1227)

server.run
~~~

## Other features

* `file_server` - Provides the `FileServer` action, which is a standard and minimal file server
* `http_errors` - Offers `ErrorTemplate` to display error pages
* `http_request` - Provides the `HttpRequest` class and services to create it
* `http_request_buffer` - Http request parsing for buffered inputs.
* `http_response` - Provides the `HttpResponse` class and `http_status_codes`
* `log` - Services inserting a timestamp in all prints and to log each requests
* `media_types` - Services to identify Internet media types (or MIME types, Content-types)
* `proxy` - Provides the `ProxyAction` action, which redirects requests to another interface
* `pthreads` - Activate the use of pthreads with `nitcorn`
* `reactor` - Core of the `nitcorn` project, provides `HttpFactory` and `Action`
* `signal_handler` - Handle SIGINT and SIGTERM to close the server after all active events
* `token` - Simple `generate_token` service, independent of the rest of the nitcorn framework

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.

Thanks to the contribution of:

* **Jean-Philippe Caissy <mailto:jean-philippe.caissy@shopify.com>**
* **Guillaume Auger**
* **Frederic Sevillano**
* **Justin Michaud-Ouellette**
* **Stephan Michaud**
* **Maxime Bélanger**
