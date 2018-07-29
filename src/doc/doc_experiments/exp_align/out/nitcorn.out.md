# Lightweight framework for Web applications development

> match: nitcorn::nitcorn
> match: nitcorn>
> match: nitcorn
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::token

## Features

> match: nitcorn::http_request::HttpRequest::init
> match: nitcorn>examples>src>
> match: nitcorn::ClientParallelThread::i
> match: nitcorn>examples>www>hello_world>dir>
> match: nitcorn>examples>

Dynamic content is served by subclassing `Action` and implementing `answer`.
This method receives an `HttpRequest` and must return an `HttpResponse`.
_nitcorn_ provides `FileServer`, a simple `Action` to serve static files.

> match: nitcorn::Action
> match: nitcorn::HttpResponse
> match: nitcorn::FileServer
> match: nitcorn::reactor::Action::answer
> match: nitcorn::HttpRequest
> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn::HttpRequest::method
> match: nitcorn::HttpResponse::files
> match: nitcorn>
> match: nitcorn::HTCPCPAction
> match: nitcorn::FileServer::default_file
> match: nitcorn::reactor::Action::prepare_respond_and_close

`HttpRequest` contains the GET and POST arguments as well as session data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

> match: nitcorn::Session
> match: nitcorn::sessions::HttpRequest::session
> match: nitcorn::sessions::HttpResponse::session
> match: nitcorn::HttpRequest
> match: nitcorn::HttpResponse
> match: nitcorn::HttpResponse::files
> match: nitcorn::http_request::HttpRequestParser::body
> match: nitcorn::HttpRequest::body
> match: nitcorn::HttpResponse::body
> match: nitcorn::ErrorTemplate::body
> match: nitcorn>
> match: nitcorn

Each `Action` may be associated to many instances of `Route`.
These routes can simply identify the root of a service,
but also define parameters within the URI.

> match: nitcorn::Route
> match: nitcorn::Action
> match: nitcorn::HttpRequest::uri
> match: nitcorn::Routes
> match: nitcorn::Routes::routes
> match: nitcorn::FileServer::root
> match: nitcorn::VirtualHost::routes
> match: nitcorn>
> match: nitcorn
> match: nitcorn::vararg_routes
> match: nitcorn::vararg_routes::UriParam::name

_nitcorn_ instances are configured dynamically in Nit code with the interfaces and routes created as needed.

> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn::Routes
> match: nitcorn::VirtualHost::interfaces
> match: nitcorn::Interfaces
> match: nitcorn::Interface
> match: nitcorn::Route
> match: nitcorn::VirtualHost::routes
> match: nitcorn::Routes::routes
> match: nitcorn>
> match: nitcorn::HTCPCServer
> match: nitcorn::VirtualHost::init

_nitcorn_ plays well with other Nit services and tools such as `serialization`, `mongodb`, `sqlite` and `nitiwiki`.
It also benefits from the full power of the Nit language:
class refinement can be used to customize default services and merge many applications in a single server,
and the FFI enables calling services in different languages.

> match: nitcorn
> match: nitcorn::nitcorn
> match: serialization::serialization
> match: serialization>
> match: serialization
> match: nitcorn>
> match: nitcorn::restful
> match: nitcorn::HttpServer
> match: nitcorn::HTCPCServer

## Examples

> match: nitcorn>examples>
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::file_server::String::strip_start_slashes
> match: nitcorn>
> match: nitcorn
> match: nitcorn::MyAction::complex_args

A minimal example follows with a custom `Action` and using `FileServer`.

> match: nitcorn::Action
> match: nitcorn::FileServer
> match: nitcorn>examples>
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn>
> match: nitcorn
> match: nitcorn::FileServer::javascript_header
> match: nitcorn::MyAction::async_service

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _nitcorn_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

> match: nitcorn>examples>
> match: nitcorn
> match: nitcorn::MyData::more
> match: nitcorn::nitcorn
> match: nitcorn>
> match: nitcorn::ServerConfig
> match: nitcorn::HttpFactory::config
> match: nitcorn::HTCPCServer

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn>
> match: nitcorn::HTCPCPAction
> match: nitcorn::FileServer::root
> match: nitcorn::HTCPCServer

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful interface.

> match: nitcorn::Interface
> match: nitcorn::restful
> match: nitcorn::Action
> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn>
> match: nitcorn::RestfulAction
> match: nitcorn::HTCPCServer
> match: nitcorn::HTCPCPAction
> match: nitcorn::Interfaces
> match: nitcorn::MyAction

### Simple hello world server

> match: nitcorn::FileServer
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::ServerConfig
> match: nitcorn::Session
> match: nitcorn::HttpServer

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

> match: nitcorn::nitcorn_hello_world
> match: nitcorn::VirtualHost
> match: nitcorn::HttpFactory
> match: nitcorn::Routes::add
> match: nitcorn::Routes
> match: nitcorn::Route
> match: nitcorn::HttpResponse
> match: nitcorn::VirtualHost::routes
> match: nitcorn::ServerConfig
> match: nitcorn::FileServer
> match: nitcorn::Action
> match: core::SimpleCollection::add
> match: nitcorn::HttpResponse::body=
> match: core::HashMap
> match: nitcorn::HttpRequest::get_args
> match: nitcorn::HttpRequest
> match: nitcorn::VirtualHosts
> match: nitcorn::ServerConfig::virtual_hosts
> match: core::abstract_text::Map::join
> match: nitcorn::HttpFactory::config
> match: nitcorn::reactor::Action::answer
> match: nitcorn::HttpFactory::run
> match: nitcorn::nitcorn

## Credits

> match: nitcorn::http_request::HttpRequest::init
> match: nitcorn>examples>src>
> match: nitcorn::ClientParallelThread::i
> match: nitcorn>examples>www>hello_world>dir>
> match: nitcorn>examples>

This nitcorn library is a fork from an independent project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

> match: nitcorn
> match: nitcorn::nitcorn
> match: nitcorn>
> match: nitcorn::HTCPCServer
> match: nitcorn::HTCPCPAction
> match: nitcorn::token

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

> match: nitcorn>
> match: nitcorn
> match: nitcorn::HttpFactory::config
> match: nitcorn::restful
> match: nitcorn::MyAction::complex_args

