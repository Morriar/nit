# `nitcorn` - Lightweight framework for Web applications development

[[toc: nitcorn]]

> [[doc: nitcorn::nitcorn]]

## Features

[[uml: nitcorn | format: svg, mentities: nitcorn::pthreads;nitcorn::nitcorn;nitcorn::signal_handler;nitcorn::token;nitcorn::proxy;nitcorn::server_config;nitcorn::restful;nitcorn::sessions;nitcorn::http_errors;nitcorn::log;nitcorn::http_request_buffer;nitcorn::reactor;nitcorn::vararg_routes;nitcorn::file_server;nitcorn::http_request;nitcorn::http_response;nitcorn::media_types]]

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

[[code: nitcorn::nitcorn_reverse_proxy]]

[[features: nitcorn | mentities: nitcorn::pthreads;nitcorn::nitcorn;nitcorn::signal_handler;nitcorn::token;nitcorn::proxy;nitcorn::server_config;nitcorn::restful;nitcorn::sessions;nitcorn::http_errors;nitcorn::log;nitcorn::http_request_buffer;nitcorn::reactor;nitcorn::vararg_routes;nitcorn::file_server;nitcorn::http_request;nitcorn::http_response;nitcorn::media_types]]

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

[[code: nitcorn::nitcorn_hello_world]]

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

## [[sign: nitcorn::server_config]]

> [[doc: nitcorn::server_config]]

## [[sign: nitcorn::restful]]

> [[doc: nitcorn::restful]]

## [[sign: nitcorn::sessions]]

> [[doc: nitcorn::sessions]]

## [[sign: nitcorn::log]]

> [[doc: nitcorn::log]]

## [[sign: nitcorn::vararg_routes]]

> [[doc: nitcorn::vararg_routes]]

## Credits

This nitcorn library is a fork from an independent project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

This project is maintained by [[ini-maintainer: nitcorn]].

Thanks to the contribution of:
[[ini-contributors: nitcorn]]

Example from `nitcorn::htcpcp_server`:

[[code: nitcorn::htcpcp_server]]