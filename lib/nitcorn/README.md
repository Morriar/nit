# `nitcorn` - Lightweight framework for Web applications development

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

Dynamic content is served by subclassing `Action` and implementing `answer`.
This method receives an `HttpRequest` and must return an `HttpResponse`.
_nitcorn_ provides `FileServer`, a simple `Action` to serve static files.

`HttpRequest` contains the GET and POST arguments as well as session data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

Each `Action` may be associated to many instances of `Route`.
These routes can simply identify the root of a service,
but also define parameters within the URI.

_nitcorn_ instances are configured dynamically in Nit code with the interfaces and routes created as needed.

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

## Examples

A minimal example follows with a custom `Action` and using `FileServer`.

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _nitcorn_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful interface.
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
