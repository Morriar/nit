# Lightweight framework for Web applications development

> match: nitcorn

## Features

Dynamic content is served by subclassing `Action` and implementing `answer`.
This method receives an `HttpRequest` and must return an `HttpResponse`.
_nitcorn_ provides `FileServer`, a simple `Action` to serve static files.

> match: nitcorn
> match: nitcorn::Action
> match: nitcorn::FileServer
> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: nitcorn::nitcorn
> match: nitcorn::reactor::Action::answer

`HttpRequest` contains the GET and POST arguments as well as session data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest::body
> match: nitcorn::HttpResponse::body
> match: nitcorn::HttpResponse::files
> match: nitcorn::HttpResponse::status_code
> match: nitcorn::HttpResponse::status_message
> match: nitcorn::HttpStatusCodes
> match: nitcorn::HttpStatusCodes::codes
> match: nitcorn::Session
> match: nitcorn::http_request::HttpRequestParser::body
> match: nitcorn::sessions::HttpRequest::session
> match: nitcorn::sessions::HttpResponse::session

Each `Action` may be associated to many instances of `Route`.
These routes can simply identify the root of a service,
but also define parameters within the URI.

> match: nitcorn::Action
> match: nitcorn::HttpRequest::uri
> match: nitcorn::Route
> match: nitcorn::Routes
> match: nitcorn::Routes::routes
> match: nitcorn::VirtualHost::routes
> match: nitcorn::vararg_routes

_nitcorn_ instances are configured dynamically in Nit code with the interfaces and routes created as needed.

> match: nitcorn
> match: nitcorn::Interface
> match: nitcorn::Interfaces
> match: nitcorn::Route
> match: nitcorn::Routes
> match: nitcorn::Routes::routes
> match: nitcorn::VirtualHost::interfaces
> match: nitcorn::VirtualHost::routes
> match: nitcorn::nitcorn

_nitcorn_ plays well with other Nit services and tools such as `serialization`, `mongodb`, `sqlite` and `nitiwiki`.
It also benefits from the full power of the Nit language:
class refinement can be used to customize default services and merge many applications in a single server,
and the FFI enables calling services in different languages.

> match: nitcorn
> match: serialization
> match: mongodb
> match: sqlite
> match: nitiwiki
> match: ffi

## Examples

> match: nitcorn>examples>

A minimal example follows with a custom `Action` and using `FileServer`.

> match: nitcorn::Action
> match: nitcorn::FileServer
> match: nitcorn>examples>

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _nitcorn_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

> match: nitcorn
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::simple_file_server
> match: nitcorn>examples>

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

> match: nitcorn

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful interface.

> match: opportunity
> match: nitcorn::restful
> match: nitcorn::Action
> match: nitcorn

### Simple hello world server

> match: nitcorn::nitcorn_hello_world

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

> match: nitcorn

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

