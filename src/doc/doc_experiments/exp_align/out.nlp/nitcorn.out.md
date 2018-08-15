# Lightweight framework for Web applications development

> match: nitcorn
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::token

## Features

> match: nitcorn

Dynamic content is served by subclassing `Action` and implementing `answer`.
This method receives an `HttpRequest` and must return an `HttpResponse`.
_nitcorn_ provides `FileServer`, a simple `Action` to serve static files.

> match: nitcorn::Action
> match: nitcorn::FileServer
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest
> match: nitcorn::StaticAction
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn
> match: nitcorn::ParamAction
> match: nitcorn::ProxyAction
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::simple_file_server
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::HTCPCPAction
> match: nitcorn::Route
> match: nitcorn::restful
> match: nitcorn::file_server
> match: nitcorn::vararg_routes::UriString
> match: nitcorn::token
> match: nitcorn::pthreads
> match: nitcorn::MyData
> match: nitcorn::vararg_routes::UriPart
> match: nitcorn::server_config
> match: nitcorn::reactor
> match: nitcorn::Routes
> match: nitcorn::MyOtherData
> match: nitcorn::vararg_routes
> match: nitcorn::HttpRequestParser
> match: nitcorn::proxy
> match: nitcorn::HttpStatusCodes
> match: nitcorn::htcpcp_server
> match: nitcorn::http_request
> match: nitcorn::http_response

`HttpRequest` contains the GET and POST arguments as well as session data it one exists.
The produced `HttpResponse` should contain the HTTP status code, the body,
session data to preserve or create a session, and optionally list files to append.

> match: nitcorn::Session
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest
> match: nitcorn::MyData
> match: nitcorn::MyOtherData
> match: nitcorn::HttpStatusCodes
> match: nitcorn
> match: nitcorn::sessions
> match: nitcorn::simple_file_server
> match: nitcorn::http_errors
> match: nitcorn::restful
> match: nitcorn::http_request_buffer
> match: nitcorn::ErrorTemplate
> match: nitcorn::file_server
> match: nitcorn::HTTPConnection
> match: nitcorn::Interfaces
> match: nitcorn::Routes
> match: nitcorn::VirtualHosts
> match: nitcorn::FileServer
> match: nitcorn::http_request
> match: nitcorn::http_response
> match: nitcorn::HttpFactory
> match: nitcorn::vararg_routes
> match: nitcorn::nitcorn_hello_world

Each `Action` may be associated to many instances of `Route`.
These routes can simply identify the root of a service,
but also define parameters within the URI.

> match: nitcorn::Action
> match: nitcorn::Route
> match: nitcorn::Routes
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn::ParamAction
> match: nitcorn::StaticAction
> match: nitcorn::ProxyAction
> match: nitcorn
> match: nitcorn::vararg_routes
> match: nitcorn::vararg_routes::UriPart
> match: nitcorn::HTCPCPAction
> match: nitcorn::HttpStatusCodes
> match: nitcorn::restful
> match: nitcorn::server_config
> match: nitcorn::simple_file_server
> match: nitcorn::sessions
> match: nitcorn::ServerConfig
> match: nitcorn::vararg_routes::UriParam
> match: nitcorn::HttpFactory
> match: nitcorn::token
> match: nitcorn::reactor
> match: nitcorn::http_request
> match: nitcorn::media_types

_nitcorn_ instances are configured dynamically in Nit code with the interfaces and routes created as needed.

> match: nitcorn::Routes
> match: nitcorn::Route
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn
> match: nitcorn::HttpStatusCodes
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::vararg_routes
> match: nitcorn::pthreads
> match: nitcorn::HttpFactory
> match: nitcorn::ErrorTemplate
> match: nitcorn::token
> match: nitcorn::restful
> match: nitcorn::ServerConfig
> match: nitcorn::server_config
> match: nitcorn::simple_file_server
> match: nitcorn::reactor
> match: nitcorn::http_request

_nitcorn_ plays well with other Nit services and tools such as `serialization`, `mongodb`, `sqlite` and `nitiwiki`.
It also benefits from the full power of the Nit language:
class refinement can be used to customize default services and merge many applications in a single server,
and the FFI enables calling services in different languages.

> match: nitcorn
> match: nitcorn::ServerThread
> match: nitcorn::HttpServer
> match: nitcorn::ServerConfig
> match: nitcorn::FileServer
> match: nitcorn::MyOtherData
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::server_config
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::simple_file_server
> match: nitcorn::htcpcp_server
> match: nitcorn::restful
> match: nitcorn::token
> match: nitcorn::file_server
> match: nitcorn::pthreads
> match: nitcorn::Session
> match: nitcorn::HTCPCServer
> match: nitcorn::RestfulTask
> match: nitcorn::ParamAction
> match: nitcorn::restful_annot
> match: nitcorn::HttpStatusCodes
> match: nitcorn::signal_handler
> match: nitcorn::reactor
> match: nitcorn::vararg_routes
> match: nitcorn::sessions
> match: nitcorn::http_request

## Examples

> match: nitcorn>examples>
> match: nitcorn::file_server::String::strip_start_slashes
> match: nitcorn
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::MyAction::complex_args
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::restful_annot
> match: nitcorn::restful

A minimal example follows with a custom `Action` and using `FileServer`.

> match: nitcorn::Action
> match: nitcorn::FileServer
> match: nitcorn>examples>
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn::ParamAction
> match: nitcorn::StaticAction
> match: nitcorn::ProxyAction
> match: nitcorn
> match: nitcorn::Route
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::HTCPCPAction
> match: nitcorn::server_config
> match: nitcorn::file_server
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::reactor
> match: nitcorn::restful_annot
> match: nitcorn::vararg_routes
> match: nitcorn::restful

More general examples are available at `lib/nitcorn/examples/`.
For an example of a larger project merging many _nitcorn_ applications into one server,
take a look at the configuration of `http://xymus.net/` at `../contrib/xymus_net/xymus_net.nit`.

> match: nitcorn>examples>
> match: nitcorn::ServerConfig
> match: nitcorn::ServerThread
> match: nitcorn
> match: nitcorn::FileServer
> match: nitcorn::HttpServer
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::simple_file_server
> match: nitcorn::server_config
> match: nitcorn::htcpcp_server
> match: nitcorn::file_server
> match: nitcorn::VirtualHost
> match: nitcorn::pthreads
> match: nitcorn::Session
> match: nitcorn::HTCPCServer
> match: nitcorn::HttpStatusCodes
> match: nitcorn::token
> match: nitcorn::reactor
> match: nitcorn::restful
> match: nitcorn::signal_handler
> match: nitcorn::restful_annot
> match: nitcorn::vararg_routes

Larger projects using _nitcorn_ can be found in the `contrib/` folder:

> match: nitcorn::log::Sys::log_nitcorn_actions
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::FileServer::root
> match: nitcorn::pthreads
> match: nitcorn::vararg_routes::HttpRequest::uri_params
> match: nitcorn::http_request_buffer::HTTPConnection::parse_header
> match: nitcorn::token
> match: nitcorn::HttpRequest::int_arg
> match: nitcorn::HttpRequest::bool_arg
> match: nitcorn::reactor
> match: nitcorn::simple_file_server
> match: nitcorn::vararg_routes

* _opportunity_ is a meetup planner heavily based on _nitcorn_.
* _tnitter_ is a micro-blogging platform with a simple Web and RESTful interface.
* _benitlux_ uses a custom `Action` to subscribe people to a mailing list and define a RESTful interface.

> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::pthreads
> match: nitcorn::HttpFactory
> match: nitcorn::token
> match: nitcorn::simple_file_server
> match: nitcorn::reactor
> match: nitcorn::vararg_routes
> match: nitcorn::restful
> match: nitcorn::simple_file_server
> match: nitcorn::restful_annot
> match: nitcorn
> match: nitcorn::test_restful_annot
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::FileServer
> match: nitcorn::MyData
> match: nitcorn::token
> match: nitcorn::Action
> match: nitcorn::RestfulAction
> match: nitcorn::MyAction
> match: nitcorn::ParamAction
> match: nitcorn::StaticAction
> match: nitcorn::ProxyAction
> match: nitcorn::restful
> match: nitcorn::restful_annot
> match: nitcorn
> match: nitcorn::test_restful_annot
> match: nitcorn::Route
> match: nitcorn::HTCPCPAction
> match: nitcorn::Interfaces
> match: nitcorn::Routes
> match: nitcorn::VirtualHosts
> match: nitcorn::server_config
> match: nitcorn::reactor
> match: nitcorn::vararg_routes

### Simple hello world server

> match: nitcorn>examples>www>hello_world>
> match: nitcorn::FileServer
> match: nitcorn::ServerThread
> match: nitcorn::ServerConfig
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::HttpServer
> match: nitcorn::simple_file_server
> match: nitcorn::server_config
> match: nitcorn::htcpcp_server
> match: nitcorn::file_server
> match: nitcorn
> match: nitcorn::Session
> match: nitcorn::MyData
> match: nitcorn::HTCPCServer
> match: nitcorn::token
> match: nitcorn::signal_handler
> match: nitcorn::restful

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

> match: nitcorn

This nitcorn library is a fork from an independent project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

> match: nitcorn
> match: nitcorn::nitcorn_reverse_proxy
> match: nitcorn::nitcorn_hello_world
> match: nitcorn::token
> match: nitcorn::pthreads
> match: nitcorn::HttpFactory
> match: nitcorn::reactor
> match: nitcorn::simple_file_server
> match: nitcorn::vararg_routes
> match: nitcorn::http_request

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.

> match: nitcorn
> match: nitcorn::reactor::Interface::registered
> match: nitcorn::Routes::[]
> match: nitcorn::http_request_buffer::HTTPConnection::parse_end
> match: nitcorn::HttpFactory::config
> match: nitcorn::sessions

