# `nitcorn` - Lightweight framework for Web applications development

* [Features](#Features)
* [Examples](#Examples)
* [Simple hello world server](#Simple-hello-world-server)
* [`server_config`](#`server_config`)
* [`restful`](#`restful`)
* [`sessions`](#`sessions`)
* [`log`](#`log`)
* [`vararg_routes`](#`vararg_routes`)
* [Credits](#Credits)

> The main classes are:

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

![Diagram for `nitcorn`](uml-nitcorn-1.svg)

Dynamic content is served by subclassing [`Action`](nitcorn::Action) and implementing `answer`.
This method receives an [`HttpRequest`](nitcorn::HttpRequest) and must return an [`HttpResponse`](nitcorn::HttpResponse).
_nitcorn_ provides [`FileServer`](nitcorn::FileServer), a simple `Action` to serve static files.

`HttpRequest` contains the GET and POST arguments as well as [session](nitcorn::Session) data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

Each `Action` may be associated to many instances of [`Route`](nitcorn::Route).
These [routes](nitcorn::Routes) can simply identify the root of a service,
but also define parameters within the URI.

_nitcorn_ instances are configured dynamically in Nit code with the [interfaces](nitcorn::Interface) and routes created as needed.

_nitcorn_ plays well with other Nit services and tools such as `serialization`, `mongodb`, `sqlite` and `nitiwiki`.
It also benefits from the full power of the Nit language:
class refinement can be used to customize default services and merge many applications in a single server,
and the FFI enables calling services in different languages.

Example from `nitcorn::nitcorn_reverse_proxy`:

~~~
# Minimal example using a `ProxyAction`
module nitcorn_reverse_proxy is example

import nitcorn::proxy

# Create the virtualhost for your nitcorn server
var vh = new VirtualHost("localhost:8080")

# Create the interface to represent your proxy target
var proxy_interface = new Interface("localhost", 31337)

# Add your action as usual
vh.routes.add new Route("/", new ProxyAction(proxy_interface))

# Let it be (serve)
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~

* `file_server` - Provides the `FileServer` action, which is a standard and minimal file server
* `http_errors` - Offers `ErrorTemplate` to display error pages
* `http_request` - Provides the `HttpRequest` class and services to create it
* `http_request_buffer` - Http request parsing for buffered inputs.
* `http_response` - Provides the `HttpResponse` class and `http_status_codes`
* `log` - Services inserting a timestamp in all prints and to log each requests
* `media_types` - Services to identify Internet media types (or MIME types, Content-types)
* `nitcorn` - The nitcorn Web server framework creates server-side Web apps in Nit
* `proxy` - Provides the `ProxyAction` action, which redirects requests to another interface
* `pthreads` - Activate the use of pthreads with `nitcorn`
* `reactor` - Core of the `nitcorn` project, provides `HttpFactory` and `Action`
* `restful` - Support module for the `nitrestful` tool and the `restful` annotation
* `server_config` - Classes and services to configure the server
* `sessions` - Automated session management
* `signal_handler` - Handle SIGINT and SIGTERM to close the server after all active events
* `token` - Simple `generate_token` service, independent of the rest of the nitcorn framework
* `vararg_routes` - Routes with parameters.

## Examples

A minimal example follows with a custom `Action` and using `FileServer`.

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _[nitcorn](nitcorn)_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful [interface](nitcorn::Interfaces).
  Example from `nitcorn::nitcorn_hello_world`:

~~~
# Hello World Web server example
#
# The main page, `index.html`, is served dynamicly with `MyAction`.
# The rest of the Web site fetches files from the local directory
# `www/hello_world/`.
module nitcorn_hello_world is example

import nitcorn

# An action that responds by displaying a static html content.
class StaticAction
	super Action

	redef fun answer(http_request, turi)
	do
		var response = new HttpResponse(200)
		var title = "Hello World from Nitcorn!"
		response.body = """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<title>{{{title}}}</title>
</head>
<body>
	<div class="container">
		<h1>{{{title}}}</h1>
		<p>See also a <a href="/dir/">directory</a>.</p>
	</div>
</body>
</html>"""
		return response
	end
end

# An action that uses parameterized uris to customize the output.
class ParamAction
	super Action

	redef fun answer(http_request, turi)
	do
		var response = new HttpResponse(200)
		var name = http_request.param("name")
		if name == null then
			response.body = "No name..."
		else
			response.body = "Hello {name}"
		end
		return response
	end
end


var vh = new VirtualHost("localhost:8080")

# Serve index.html with our custom handler
vh.routes.add new Route("/index.html", new StaticAction)
vh.routes.add new Route("/hello/:name", new ParamAction)

# Serve everything else with a standard `FileServer` with a root at "www/hello_world/"
vh.routes.add new Route(null, new FileServer("www/hello_world/"))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~

### Simple hello world server

~~~
import nitcorn

# Simple Action to display the Hello World page and the get arguments
class HelloWorldAction
	super Action

	redef fun answer(http_request, turi)
	do
		var title = "Hello World!"
		var args = http_request.get_args.join(",", ":")

		var response = new HttpResponse(200)
		response.body = """
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>{{{title}}}</title>
</head>
<body>
	<h1>{{{title}}}</h1>
	<p>GET args: {{{args}}}</p>
</body>
</html>"""
		return response
	end
end

# Listen on `localhost:8080`
var vh = new VirtualHost("localhost:8080")

# Serve `http://localhost:8080/hello.html` with our custom action
vh.routes.add new Route("/hello.html", new HelloWorldAction)

# Serve everything else under `http://localhost:8080/` using a `FileServer` with a root at "/var/www/"
vh.routes.add new Route(null, new FileServer("/var/www/"))

# Launch server
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
~~~

## `server_config`

> The classes of interest are `VirtualHost`, `Interface`, `Route` and `Action`

## `restful`

> The `restful` annotation is applied on a method to assign it to an HTTP resource.
> The `restful` method must be a property of a subclass of `RestfulAction` and
> return an `HTTPResponse`.
> Once an instance of the class is assigned to a route, the method
> can be invoked as a resource under that route.
> The returned `HTTPResponse` will be sent back to the client.

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

## `sessions`

> When parsing a request, this module associate a pre-existing session
> to the request if there is one. It will also send the required cookie
> with the response if a session has been associated to the response object.

## `log`


## `vararg_routes`

> Using `vararg_routes`, a `Route` path can contain variable parts
> that will be matched against a `HttpRequest` URL.

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

## Credits

This nitcorn library is a fork from an independent project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.

Thanks to the contribution of:

* **Jean-Philippe Caissy <mailto:jean-philippe.caissy@shopify.com>**
* **Guillaume Auger**
* **Frederic Sevillano**
* **Justin Michaud-Ouellette**
* **Stephan Michaud**
* **Maxime Bélanger**

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
