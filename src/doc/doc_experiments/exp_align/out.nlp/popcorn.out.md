# Popcorn

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn
> match: popcorn::test_popcorn
> match: popcorn::pop_sessions
> match: popcorn::example_angular
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn::pop_templates
> match: popcorn::pop_tests

**Why endure plain corn when you can pop it?!**

> match: popcorn::pop_sessions
> match: popcorn::pop_tasks
> match: popcorn::pop_json
> match: popcorn::pop_templates
> match: popcorn::pop_config
> match: popcorn::pop_tests
> match: popcorn::pop_routes
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_logging
> match: popcorn::pop_handlers
> match: popcorn::pop_tracker
> match: popcorn::pop_validation
> match: popcorn::test_pop_routes
> match: popcorn
> match: popcorn::Handler

Popcorn is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn
> match: popcorn::App
> match: popcorn::UniqueField
> match: popcorn::Handler
> match: popcorn::test_popcorn
> match: popcorn::pop_templates
> match: popcorn::pop_config
> match: popcorn::PopTask
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::example_angular
> match: popcorn::AppRoute
> match: popcorn::pop_tasks
> match: popcorn::JsonRepository
> match: popcorn::RepositoryQuery
> match: popcorn::RepoObject
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

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
> match: popcorn
> match: popcorn::RepoObject
> match: popcorn::AuthHandler
> match: popcorn::App
> match: popcorn::RepositoryQuery
> match: popcorn::AppRoute
> match: popcorn::test_popcorn
> match: popcorn::pop_auth
> match: popcorn::pop_tasks
> match: popcorn::pop_templates
> match: popcorn::pop_routes::UriString
> match: popcorn::PopTask
> match: popcorn::GithubOAuthCallBack
> match: popcorn::GithubLogout
> match: popcorn::pop_sessions
> match: popcorn::example_angular
> match: popcorn::pop_repos
> match: popcorn::UniqueField
> match: popcorn::pop_config
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::Handler

## What does it taste like?

> match: popcorn

Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:

> match: popcorn>examples>static_files>files>
> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::GithubOAuthCallBack
> match: popcorn::RepoObject
> match: popcorn::Handler
> match: popcorn::pop_tests
> match: popcorn::pop_tasks
> match: popcorn::Router
> match: popcorn::AppConfig
> match: popcorn::pop_templates
> match: popcorn::URLField
> match: popcorn::App
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_config
> match: popcorn::pop_validation

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
> match: popcorn::TestPopcornRouter
> match: popcorn::AppThread
> match: popcorn::TestPopcornRoutes
> match: popcorn::HelloHandler
> match: popcorn::AppLogin
> match: popcorn::TestExampleHello
> match: popcorn::TestPopcorn
> match: popcorn::TestAppParamRoute
> match: popcorn>examples>routing>
> match: popcorn::MyOtherHandler
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::TestRouteMatching
> match: popcorn::example_hello
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn::example_param_route
> match: popcorn::Handler
> match: popcorn
> match: popcorn::example_glob_route
> match: popcorn::Router
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::StaticHandler
> match: popcorn::pop_tests
> match: popcorn::pop_routes
> match: popcorn::pop_tasks
> match: popcorn::RequestClock
> match: popcorn::pop_config
> match: popcorn::test_example_glob_route
> match: popcorn::pop_sessions
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::pop_repos
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::SessionInit
> match: popcorn::pop_auth
> match: popcorn::Repository
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_validation
> match: popcorn::pop_handlers

The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.

> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn>examples>routing>
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::App
> match: popcorn
> match: popcorn::AppParamRoute
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_routes
> match: popcorn::test_example_glob_route
> match: popcorn::PopTask
> match: popcorn::Router
> match: popcorn::LogEntry
> match: popcorn::AppConfig
> match: popcorn::pop_sessions
> match: popcorn::pop_config
> match: popcorn::URLField
> match: popcorn::PopTrackerResponseTime
> match: popcorn::pop_auth
> match: popcorn::test_popcorn
> match: popcorn::StaticHandler
> match: popcorn::pop_routes::UriParam
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::UniqueField
> match: popcorn::RepositoryQuery
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_tests
> match: popcorn::pop_repos
> match: popcorn::RepoObject
> match: popcorn::pop_templates
> match: popcorn::pop_json
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

Run the app with the following command:

> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::App
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::pop_tasks
> match: popcorn::pop_tests
> match: popcorn::pop_config
> match: popcorn::URLField
> match: popcorn::StaticHandler
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_validation

~~~bash
$ nitc app.nit && ./app
~~~

Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.

> match: popcorn::pop_tracker::BrowserCount
> match: popcorn::App
> match: popcorn::PopTrackerBrowsers
> match: popcorn::GithubLogin
> match: popcorn::pop_auth
> match: popcorn
> match: popcorn::pop_tests
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::pop_templates

Here the output using the `curl` command:

> match: popcorn::App
> match: popcorn::pop_tests
> match: popcorn::UniqueField
> match: popcorn::pop_templates
> match: popcorn::pop_sessions
> match: popcorn
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_validation

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
> match: popcorn
> match: popcorn::AuthHandler
> match: popcorn::test_popcorn
> match: popcorn::pop_sessions
> match: popcorn::example_angular
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn::pop_tests
> match: popcorn::pop_templates
> match: popcorn::pop_config
> match: popcorn::pop_validation

## Basic routing

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::Handler
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::pop_templates
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_handlers

**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).

> match: popcorn::Handler
> match: popcorn>examples>routing>
> match: popcorn::MyOtherHandler
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn
> match: popcorn::example_glob_route
> match: popcorn::example_post_handler
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_param_route
> match: popcorn::pop_sessions
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::StaticHandler
> match: popcorn::ConsoleLog
> match: popcorn::SessionInit
> match: popcorn::pop_routes::UriPart
> match: popcorn::ClientThread
> match: popcorn::PopTask
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::GithubUser
> match: popcorn::Repository
> match: popcorn::UniqueField
> match: popcorn::test_pop_routes
> match: popcorn::GithubOAuthCallBack
> match: popcorn::example_angular
> match: popcorn::pop_json
> match: popcorn::AuthHandler
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

Each route can have one or more handler methods, which are executed when the route is matched.

> match: popcorn::TestRouteMatching
> match: popcorn>examples>handlers>
> match: popcorn>examples>routing>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestAppRoute
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
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AppParamRoute
> match: popcorn::Router
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::StaticHandler
> match: popcorn::App
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_auth
> match: popcorn::TrackerHandler
> match: popcorn::FieldsMatch
> match: popcorn::GithubLogin
> match: popcorn::RegexField
> match: popcorn::pop_tasks
> match: popcorn::test_pop_routes
> match: popcorn::URLField
> match: popcorn::Repository
> match: popcorn::PopTask
> match: popcorn::pop_json
> match: popcorn::pop_config
> match: popcorn::pop_tests
> match: popcorn::pop_validation

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
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::test_example_param_route
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::pop_handlers
> match: popcorn::AppGlobRoute
> match: popcorn::App
> match: popcorn::AuthHandler
> match: popcorn::TrackerHandler
> match: popcorn::pop_sessions
> match: popcorn::GithubLogin
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::Repository
> match: popcorn::pop_json
> match: popcorn::pop_validation

~~~nitish
import popcorn

class MyHandler
	super Handler

	redef fun METHOD(req, res) do end
end
~~~

Where:

> match: popcorn::StaticHandler
> match: popcorn::Handler
> match: popcorn

* `MyHandler` is the name of the handler you will add to the app.
* `METHOD` can be replaced by `get`, `post`, `put` or `delete`.

> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::App
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::AppParamRoute
> match: popcorn::AppRoute
> match: popcorn::example_simple_error_handler
> match: popcorn::AppGlobRoute
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::test_example_post_handler
> match: popcorn::Router
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::pop_tests
> match: popcorn::TrackerHandler
> match: popcorn::pop_sessions
> match: popcorn::GithubLogin
> match: popcorn::pop_tasks
> match: popcorn::pop_config
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_validation
> match: popcorn::example_post_handler
> match: popcorn::Handler
> match: popcorn::test_example_post_handler
> match: popcorn
> match: popcorn::GithubUser
> match: popcorn::Repository
> match: popcorn::GithubOAuthCallBack
> match: popcorn::PopTask
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

The following example responds to GET and POST requests:

> match: popcorn>examples>
> match: popcorn::example_post_handler
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::test_example_post_handler
> match: popcorn::example_advanced_logger
> match: popcorn::Handler
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::App
> match: popcorn::test_example_router
> match: popcorn::RequestClock
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_sessions
> match: popcorn::Router
> match: popcorn::GithubUser
> match: popcorn::URLField
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::GithubOAuthCallBack
> match: popcorn::SessionInit
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::StaticHandler
> match: popcorn::pop_json
> match: popcorn::pop_tests
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_validation

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
> match: popcorn::App
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppParamRoute
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::AppParamRoute
> match: popcorn::example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::TrackerHandler
> match: popcorn::pop_sessions
> match: popcorn::GithubLogin
> match: popcorn::pop_tasks
> match: popcorn::RequestClock
> match: popcorn::pop_tests
> match: popcorn::pop_config
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_templates
> match: popcorn::pop_validation

Respond to POST request on the root route (`/`), the application's home page:

> match: popcorn::UserHome
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_post_handler
> match: popcorn::Handler
> match: popcorn
> match: popcorn::App
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::RequestClock
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::UniqueField
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::SessionInit
> match: popcorn::pop_json
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

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
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::Handler
> match: popcorn
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::App
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::AppGlobRoute
> match: popcorn::AuthHandler
> match: popcorn::RequestClock
> match: popcorn::pop_sessions
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_auth
> match: popcorn::GithubLogout
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::SessionInit
> match: popcorn::pop_json
> match: popcorn::pop_handlers

~~~
app.use("/user", new MyHandler)
~~~

For more details about routing, see the routing section.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::AppParamRoute
> match: popcorn::Handler
> match: popcorn
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_example_glob_route
> match: popcorn::pop_auth
> match: popcorn::pop_sessions
> match: popcorn::Repository
> match: popcorn::test_pop_routes
> match: popcorn::GithubLogin
> match: popcorn::JsonRepository
> match: popcorn::pop_handlers
> match: popcorn::pop_config
> match: popcorn::pop_templates
> match: popcorn::pop_tests

## Serving static files with Popcorn

> match: popcorn>examples>static_files>
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>static_files>files>
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn::example_static_multiple
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_routes::UriPart
> match: popcorn::test_popcorn
> match: popcorn::PopTrackerAPI
> match: popcorn::AppConfig
> match: popcorn::pop_sessions
> match: popcorn::pop_tests
> match: popcorn::example_angular
> match: popcorn::pop_tasks
> match: popcorn::pop_templates
> match: popcorn::App
> match: popcorn::pop_config
> match: popcorn::pop_tracker

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
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static_multiple
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AppConfig
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::App
> match: popcorn::pop_config
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_tests
> match: popcorn::AuthHandler
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_routes::UriPart
> match: popcorn::Router
> match: popcorn::TrackerHandler
> match: popcorn::PopTrackerAPI
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::GithubLogin
> match: popcorn::pop_templates
> match: popcorn::pop_sessions
> match: popcorn::pop_json
> match: popcorn::pop_auth
> match: popcorn::pop_repos
> match: popcorn::pop_tracker
> match: popcorn::pop_validation

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
> match: popcorn>examples>
> match: popcorn::example_static_multiple
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::SessionInit
> match: popcorn
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_static_multiple
> match: popcorn::test_example_post_handler
> match: popcorn::AppConfig
> match: popcorn::PopTrackerAPI
> match: popcorn::test_example_glob_route
> match: popcorn::pop_tests
> match: popcorn::test_example_router
> match: popcorn::Handler
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_tasks
> match: popcorn::pop_config
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_templates
> match: popcorn::RequestClock
> match: popcorn::UniqueField
> match: popcorn::GithubOAuthCallBack
> match: popcorn::URLField
> match: popcorn::AppGlobRoute
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::AppParamRoute
> match: popcorn::PopTask
> match: popcorn::JsonRepository
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_tracker
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_validation

~~~
app.use("/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the `public` directory:

> match: popcorn>examples>static_files>public>
> match: popcorn>examples>static_files>files>
> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::Router
> match: popcorn::AppConfig
> match: popcorn::AppGlobRoute
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn::pop_tests
> match: popcorn::pop_config
> match: popcorn::pop_templates
> match: popcorn::pop_auth

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
> match: popcorn::example_static_default
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>static_files>files>
> match: popcorn
> match: popcorn::pop_routes::UriString
> match: popcorn::test_example_static_multiple
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_tasks
> match: popcorn::test_popcorn
> match: popcorn::AppGlobRoute
> match: popcorn::App
> match: popcorn::PopTrackerResponseTime
> match: popcorn::Handler
> match: popcorn::URLField
> match: popcorn::AppConfig
> match: popcorn::pop_sessions
> match: popcorn::RequestClock
> match: popcorn::pop_tests
> match: popcorn::example_angular
> match: popcorn::AppParamRoute
> match: popcorn::pop_templates
> match: popcorn::pop_config
> match: popcorn::pop_auth

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
> match: popcorn::StaticHandler
> match: popcorn::example_static_multiple
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_sessions
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_tasks
> match: popcorn::test_popcorn
> match: popcorn::pop_tests
> match: popcorn::AppConfig
> match: popcorn::example_angular
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::App
> match: popcorn::PopTask
> match: popcorn::AuthHandler
> match: popcorn::pop_config

To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:

> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn::example_static_multiple
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::Router
> match: popcorn::AppRoute
> match: popcorn::AppConfig
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_tests
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::pop_routes::UriPart
> match: popcorn::RequiredField
> match: popcorn::PopTrackerAPI
> match: popcorn::pop_config
> match: popcorn::ValidationResult
> match: popcorn::pop_tasks
> match: popcorn::pop_templates
> match: popcorn::RepoObject
> match: popcorn::pop_auth
> match: popcorn::pop_tracker

~~~
app.use("/static/", new StaticHandler("public/"))
~~~

Now, you can load the files that are in the public directory from the `/static`
path prefix.

> match: popcorn>examples>static_files>
> match: popcorn>examples>static_files>public>
> match: popcorn>examples>static_files>files>
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn::StaticHandler
> match: popcorn::example_static_multiple
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_routes::UriString
> match: popcorn::Router
> match: popcorn::pop_routes::UriPart
> match: popcorn::App
> match: popcorn::AppConfig
> match: popcorn::AppGlobRoute
> match: popcorn::AppRoute
> match: popcorn::pop_tasks
> match: popcorn::pop_tests
> match: popcorn::pop_config
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_auth

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
> match: popcorn::TestAppParamRoute
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::pop_tasks
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::pop_config
> match: popcorn::pop_tests
> match: popcorn::ClientThread
> match: popcorn::PopTrackerAPI
> match: popcorn::pop_repos
> match: popcorn::PopTask
> match: popcorn::UniqueField
> match: popcorn::RepositoryQuery
> match: popcorn::pop_auth
> match: popcorn::RepoObject
> match: popcorn::pop_templates
> match: popcorn::pop_validation
> match: popcorn::pop_tracker

In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:

> match: popcorn>examples>static_files>
> match: popcorn::example_static_default
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn::example_static
> match: popcorn::ErrorTpl
> match: popcorn::HtmlErrorTemplate
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static_multiple
> match: popcorn::example_simple_error_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_static_default
> match: popcorn::test_example_static
> match: popcorn::AppConfig
> match: popcorn::ValidationResult
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_config
> match: popcorn::GithubLogout
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_tests
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_tasks
> match: popcorn::Handler
> match: popcorn::pop_sessions
> match: popcorn::pop_templates
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::App
> match: popcorn::AppGlobRoute
> match: popcorn::AuthHandler
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_auth

~~~
app.use("/static/", new StaticHandler("public/", "default.html"))
~~~

This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.

> match: popcorn>examples>static_files>files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>
> match: popcorn::example_query_string
> match: popcorn::test_example_query_string
> match: popcorn::RepositoryQuery
> match: popcorn
> match: popcorn::PopTrackerQueries
> match: popcorn::pop_tests
> match: popcorn::AppConfig
> match: popcorn::AppParamRoute
> match: popcorn::pop_sessions
> match: popcorn::RepoObject
> match: popcorn::pop_config
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_repos

## Advanced Routing

> match: popcorn::AdvancedLoggerHandler
> match: popcorn::TestExampleAdvancedLogger
> match: popcorn

**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::Handler
> match: popcorn
> match: popcorn::AppParamRoute
> match: popcorn::App
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::pop_sessions
> match: popcorn::test_example_glob_route
> match: popcorn::pop_auth
> match: popcorn::RequestClock
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_routes::UriParam
> match: popcorn::ClientThread
> match: popcorn::pop_templates
> match: popcorn::test_pop_routes
> match: popcorn::GithubLogin
> match: popcorn::UniqueField
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::SessionInit
> match: popcorn::example_angular
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_handlers
> match: popcorn::pop_json
> match: popcorn::pop_tests

The following code is an example of a very basic route.

> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::AppRoute
> match: popcorn::example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_param_route
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_glob_route
> match: popcorn::example_templates
> match: popcorn
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::Handler
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_post_handler
> match: popcorn::Router
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_router
> match: popcorn::App
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_templates
> match: popcorn::pop_sessions
> match: popcorn::GithubOAuthCallBack
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::pop_auth
> match: popcorn::StaticHandler
> match: popcorn::UniqueField
> match: popcorn::pop_tasks
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::pop_repos
> match: popcorn::pop_handlers
> match: popcorn::pop_tests
> match: popcorn::pop_validation

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
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::PopTask
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_handlers

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
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::AuthHandler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::test_example_param_route
> match: popcorn::StaticHandler
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_handlers
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::Repository
> match: popcorn::LogEntry
> match: popcorn::PopTask
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_tests
> match: popcorn::JsonRepository
> match: popcorn::pop_repos

The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.

> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn::AppConfig
> match: popcorn>examples>routing>
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::App
> match: popcorn::example_post_handler
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppParamRoute
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::AppParamRoute
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::AppGlobRoute
> match: popcorn::example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::Handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_param_route
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::test_example_advanced_logger
> match: popcorn::test_example_post_handler
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_glob_route
> match: popcorn::example_templates
> match: popcorn::Router
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::pop_routes
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::GithubOAuthCallBack
> match: popcorn::pop_tasks
> match: popcorn::pop_tests
> match: popcorn::test_example_static_multiple
> match: popcorn::StaticHandler
> match: popcorn::pop_sessions
> match: popcorn::pop_config
> match: popcorn::GithubUser
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_templates
> match: popcorn::PopTask
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::pop_validation
> match: popcorn::pop_handlers

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
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_post_handler
> match: popcorn::Handler
> match: popcorn
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::App
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::pop_sessions
> match: popcorn::test_popcorn
> match: popcorn::LogEntry
> match: popcorn::PopTask
> match: popcorn::pop_tests
> match: popcorn::GithubUser
> match: popcorn::Repository
> match: popcorn::URLField
> match: popcorn::example_angular
> match: popcorn::test_pop_routes
> match: popcorn::pop_tasks
> match: popcorn::GithubOAuthCallBack
> match: popcorn::StaticHandler
> match: popcorn::AuthHandler
> match: popcorn::pop_auth
> match: popcorn::pop_templates
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

The request query string is accessed through the `req` parameter:

> match: popcorn::example_query_string
> match: popcorn::test_example_query_string
> match: popcorn::RepositoryQuery
> match: popcorn
> match: popcorn::PopTrackerQueries
> match: popcorn::pop_routes::UriParam
> match: popcorn::App
> match: popcorn::pop_routes::UriPart
> match: popcorn::Handler
> match: popcorn::AuthHandler
> match: popcorn::pop_routes::UriString
> match: popcorn::GithubOAuthCallBack
> match: popcorn::AppParamRoute
> match: popcorn::pop_sessions
> match: popcorn::AppGlobRoute
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::AppRoute
> match: popcorn::ValidationResult
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_tests
> match: popcorn::pop_auth

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
> match: popcorn::example_post_handler
> match: popcorn::test_example_post_handler
> match: popcorn::AppParamRoute
> match: popcorn::pop_routes::UriParam
> match: popcorn::AppGlobRoute
> match: popcorn::pop_routes::UriPart
> match: popcorn
> match: popcorn::App
> match: popcorn::AuthHandler
> match: popcorn::GithubOAuthCallBack
> match: popcorn::RepoObject
> match: popcorn::pop_tests
> match: popcorn::pop_templates
> match: popcorn::pop_auth

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
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::Handler
> match: popcorn
> match: popcorn::App
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::AppGlobRoute
> match: popcorn::StaticHandler
> match: popcorn::PopTask
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::pop_sessions
> match: popcorn::pop_tests
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::SessionInit
> match: popcorn::pop_auth
> match: popcorn::AuthHandler
> match: popcorn::pop_json
> match: popcorn::pop_handlers

In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.

> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_post_handler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::Handler
> match: popcorn>examples>
> match: popcorn::example_simple_error_handler
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::GithubUser
> match: popcorn::TestHandler
> match: popcorn::UserHomepage
> match: popcorn::UserProfile
> match: popcorn::UserHome
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHello
> match: popcorn::example_html_error_handler
> match: popcorn::example_static
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::test_example_post_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_angular
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::AuthHandler
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::StaticHandler
> match: popcorn::test_example_templates
> match: popcorn::Router
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::pop_sessions
> match: popcorn::App
> match: popcorn::LogEntry
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::pop_handlers
> match: popcorn::test_example_router
> match: popcorn::ConsoleLog
> match: popcorn::test_example_static_multiple
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::TrackerHandler
> match: popcorn::pop_tests
> match: popcorn::GithubLogin
> match: popcorn::pop_json
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_auth
> match: popcorn::GithubLogout
> match: popcorn::Repository
> match: popcorn::URLField
> match: popcorn::GithubOAuthCallBack
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::pop_tasks
> match: popcorn::PopTask
> match: popcorn::UniqueField
> match: popcorn::RepoObject
> match: popcorn::JsonRepository
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_validation

~~~
import popcorn

class AllHandler
	super Handler

	redef fun all(req, res) do res.send "Every request to the homepage"
end
~~~

Using the `all` method you can also implement other HTTP request methods.

> match: popcorn::MyOtherHandler
> match: popcorn::Handler
> match: popcorn
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::PopTask
> match: popcorn::pop_sessions
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::AuthHandler
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_auth

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
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::test_example_param_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::StaticHandler
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_handlers

**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.

> match: popcorn::example_glob_route
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::Handler
> match: popcorn>examples>handlers>
> match: popcorn::TestExampleQueryString
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestAppRoute
> match: popcorn::QueryStringHandler
> match: popcorn::example_query_string
> match: popcorn::AppRoute
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn
> match: popcorn::example_param_route
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::RepositoryQuery
> match: popcorn::example_simple_error_handler
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::example_post_handler
> match: popcorn::test_example_query_string
> match: popcorn::StaticHandler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::App
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_routes::UriString
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::pop_routes::UriParam
> match: popcorn::pop_routes::UriPart
> match: popcorn::PopTrackerQueries
> match: popcorn::pop_auth
> match: popcorn::AuthHandler
> match: popcorn::ValidationResult
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::pop_json
> match: popcorn::test_pop_routes
> match: popcorn::RepoObject
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_validation

Popcorn uses the `AppRoute::match(uri)` method to match the route paths.

> match: popcorn::AppRoute
> match: popcorn::TestRouteMatching
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn>examples>routing>
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::App
> match: popcorn::AppGlobRoute
> match: popcorn::FieldsMatch
> match: popcorn::Router
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_sessions
> match: popcorn::StaticHandler
> match: popcorn::pop_routes::UriParam
> match: popcorn::test_popcorn
> match: popcorn::example_angular
> match: popcorn::test_pop_routes
> match: popcorn::pop_tasks
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::PopTask
> match: popcorn::pop_templates
> match: popcorn::pop_handlers

Here are some examples of route paths based on strings.

> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_query_string
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::AppRoute
> match: popcorn::example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_param_route
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_query_string
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_glob_route
> match: popcorn
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::Handler
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::test_example_post_handler
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_router
> match: popcorn::pop_sessions
> match: popcorn::test_example_static_multiple
> match: popcorn::Repository
> match: popcorn::StaticHandler
> match: popcorn::UniqueField
> match: popcorn::DocumentValidator
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_auth
> match: popcorn::pop_routes::UriParam
> match: popcorn::URLField
> match: popcorn::pop_routes::UriPart
> match: popcorn::PopTrackerQueries
> match: popcorn::test_pop_routes
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::ValidationResult
> match: popcorn::JsonRepository
> match: popcorn::pop_tests
> match: popcorn::AuthHandler
> match: popcorn::pop_config
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

This route path will match requests to the root route, `/`.

> match: popcorn::TestRouteMatching
> match: popcorn>examples>routing>
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::AppParamRoute
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::test_example_glob_route
> match: popcorn::pop_sessions
> match: popcorn::StaticHandler
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::URLField
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_tests
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_handlers

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
> match: popcorn>examples>routing>
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::AppParamRoute
> match: popcorn::pop_routes
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_sessions
> match: popcorn::StaticHandler
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_handlers

~~~
app.use("/about", new MyHandler)
~~~

This route path will match requests to `/random.text`.

> match: popcorn::TestRouteMatching
> match: popcorn>examples>routing>
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::AppParamRoute
> match: popcorn::pop_routes
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_sessions
> match: popcorn::StaticHandler
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_handlers

~~~
app.use("/random.text", new MyHandler)
~~~

During the query/response process, routes are matched by order of declaration
through the `App::use` method.

> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::AppConfig
> match: popcorn>examples>routing>
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::App
> match: popcorn::AppParamRoute
> match: popcorn::example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::Router
> match: popcorn::test_example_glob_route
> match: popcorn::pop_tests
> match: popcorn::FieldsMatch
> match: popcorn::pop_tasks
> match: popcorn::RegexField
> match: popcorn::StaticHandler
> match: popcorn::pop_config
> match: popcorn::Repository
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::PopTask
> match: popcorn::pop_repos
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

The app declared in this example will try to match the routes in this order:

> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn::AppConfig
> match: popcorn>examples>routing>
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::App
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::AppParamRoute
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::AppGlobRoute
> match: popcorn::example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_param_route
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn
> match: popcorn::test_example_glob_route
> match: popcorn::Handler
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::Router
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::pop_tests
> match: popcorn::pop_sessions
> match: popcorn::test_example_static_multiple
> match: popcorn::FieldsMatch
> match: popcorn::pop_tasks
> match: popcorn::RegexField
> match: popcorn::pop_config
> match: popcorn::StaticHandler
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::pop_auth
> match: popcorn::pop_repos
> match: popcorn::UniqueField
> match: popcorn::RepoObject
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::pop_templates
> match: popcorn::pop_validation
> match: popcorn::pop_handlers

1. `/`
2. `/about`
3. `/random.text`

> match: popcorn

### Route parameters

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::AppParamRoute
> match: popcorn::test_example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_routes
> match: popcorn::Handler
> match: popcorn
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::pop_routes::UriParam
> match: popcorn::test_pop_routes
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_handlers

**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.

> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::Handler
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::test_example_glob_route
> match: popcorn::StaticHandler
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_sessions
> match: popcorn::pop_routes::UriParam
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::pop_handlers
> match: popcorn::pop_tests

The following example declares a handler `UserHome` that responds with the `user`
name.

> match: popcorn::UserHome
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn>examples>
> match: popcorn::example_simple_error_handler
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::TestHandler
> match: popcorn::UserProfile
> match: popcorn::UserHomepage
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::example_post_handler
> match: popcorn::GithubUser
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHello
> match: popcorn::Handler
> match: popcorn::example_html_error_handler
> match: popcorn::example_static
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_angular
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_post_handler
> match: popcorn::example_templates
> match: popcorn
> match: popcorn::StaticHandler
> match: popcorn::AuthHandler
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::pop_handlers
> match: popcorn::App
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::RequestClock
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::GithubLogout
> match: popcorn::URLField
> match: popcorn::AppRoute
> match: popcorn::UniqueField
> match: popcorn::pop_json
> match: popcorn::JsonRepository
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::pop_validation

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
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn>examples>routing>
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::TestHandler
> match: popcorn::UserProfile
> match: popcorn::UserHomepage
> match: popcorn::TestAppRoute
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::GithubUser
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::AppParamRoute
> match: popcorn::AuthHandler
> match: popcorn::test_example_param_route
> match: popcorn::App
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::pop_handlers
> match: popcorn::AppGlobRoute
> match: popcorn::URLField
> match: popcorn::pop_auth
> match: popcorn::TrackerHandler
> match: popcorn::pop_sessions
> match: popcorn::FieldsMatch
> match: popcorn::GithubLogin
> match: popcorn::pop_routes::UriString
> match: popcorn::RegexField
> match: popcorn::GithubLogout
> match: popcorn::test_pop_routes
> match: popcorn::pop_tasks
> match: popcorn::pop_json
> match: popcorn::pop_validation

### Glob routes

> match: popcorn::example_glob_route
> match: popcorn::TestExampleGlobRoute
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::AppGlobRoute
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::Handler
> match: popcorn::AppParamRoute
> match: popcorn
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::test_pop_routes
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_handlers

**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.

> match: popcorn::TestRouteMatching
> match: popcorn::example_glob_route
> match: popcorn>examples>routing>
> match: popcorn::TestExampleGlobRoute
> match: popcorn::TestAppRoute
> match: popcorn::AppGlobRoute
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn::Handler
> match: popcorn
> match: popcorn::AppParamRoute
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::App
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_routes::UriPart
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::test_pop_routes
> match: popcorn::pop_tracker::BrowserCount
> match: popcorn::URLField
> match: popcorn::StaticHandler
> match: popcorn::pop_handlers
> match: popcorn::pop_tests

Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.

> match: popcorn::UserItem
> match: popcorn::TestRouteMatching
> match: popcorn::example_glob_route
> match: popcorn>examples>handlers>
> match: popcorn>examples>routing>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::Handler
> match: popcorn::TestAppRoute
> match: popcorn::UserList
> match: popcorn::UserLogger
> match: popcorn::TestHandler
> match: popcorn::UserHomepage
> match: popcorn::UserProfile
> match: popcorn::UserHome
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::GithubUser
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::AppRoute
> match: popcorn::example_param_route
> match: popcorn
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::AppGlobRoute
> match: popcorn::AppParamRoute
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_glob_route
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::AuthHandler
> match: popcorn::test_example_param_route
> match: popcorn::StaticHandler
> match: popcorn::pop_routes
> match: popcorn::pop_sessions
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::pop_auth
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_tests
> match: popcorn::TrackerHandler
> match: popcorn::FieldsMatch
> match: popcorn::GithubLogin
> match: popcorn::RequestClock
> match: popcorn::pop_routes::UriString
> match: popcorn::RegexField
> match: popcorn::GithubLogout
> match: popcorn::test_pop_routes
> match: popcorn::UniqueField
> match: popcorn::URLField
> match: popcorn::pop_routes::UriParam
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_config
> match: popcorn::pop_validation

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

> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::Handler
> match: popcorn::PopTask
> match: popcorn::App
> match: popcorn::pop_tests
> match: popcorn::StaticHandler

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
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::example_simple_error_handler
> match: popcorn::Handler
> match: popcorn::TestHandler
> match: popcorn::TestAppRoute
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::ErrorTpl
> match: popcorn::HtmlErrorTemplate
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::example_post_handler
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::test_example_param_route
> match: popcorn::AppParamRoute
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::pop_sessions
> match: popcorn::test_example_glob_route
> match: popcorn::pop_handlers
> match: popcorn::AppGlobRoute
> match: popcorn::AuthHandler
> match: popcorn::LogEntry
> match: popcorn::pop_tests
> match: popcorn::SessionInit
> match: popcorn::URLField
> match: popcorn::TrackerHandler
> match: popcorn::PopTrackerResponseTime
> match: popcorn::ClientThread
> match: popcorn::GithubLogin
> match: popcorn::ValidationResult
> match: popcorn::Repository
> match: popcorn::PopTask
> match: popcorn::RepoObject
> match: popcorn::pop_auth
> match: popcorn::pop_json
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::JsonRepository
> match: popcorn::pop_repos
> match: popcorn::pop_validation

* `res.html()` Send a HTML response.
* `res.json()` Send a JSON response.
* `res.redirect()` Redirect a request.
* `res.send()` Send a response of various types.
* `res.error()` Set the response status code and send its message as the response body.

> match: popcorn::HtmlErrorTemplate
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::pop_json
> match: popcorn
> match: popcorn::JsonRepository
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::PopTrackerAPI
> match: popcorn::ValidationResult
> match: popcorn::AuthHandler
> match: popcorn::RepoObject
> match: popcorn::App
> match: popcorn::pop_tracker
> match: popcorn::pop_validation
> match: popcorn
> match: popcorn::GithubLogout
> match: popcorn::Handler
> match: popcorn::pop_sessions
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::App
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_auth
> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::BoolField
> match: popcorn::App
> match: popcorn::RepositoryQuery
> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::ValidationResult
> match: popcorn::App
> match: popcorn::GithubOAuthCallBack
> match: popcorn::pop_sessions
> match: popcorn::pop_json
> match: popcorn::pop_tasks
> match: popcorn::AuthHandler
> match: popcorn::StaticHandler
> match: popcorn::pop_templates
> match: popcorn::pop_tests

## Response cycle

> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::App

When the popcorn `App` receives a request, the response cycle is the following:

> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::AppConfig
> match: popcorn::TestAppRoute
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::App
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::Handler
> match: popcorn::pop_tasks
> match: popcorn::LogEntry
> match: popcorn::pop_sessions
> match: popcorn::pop_tests
> match: popcorn::test_popcorn
> match: popcorn::Router
> match: popcorn::PopTrackerResponseTime
> match: popcorn::pop_config
> match: popcorn::example_angular
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_templates
> match: popcorn::StaticHandler
> match: popcorn::pop_repos
> match: popcorn::pop_json
> match: popcorn::pop_validation

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

> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn
> match: popcorn::Router
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::AppRoute
> match: popcorn::Handler
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn
> match: popcorn::Router
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::Handler
> match: popcorn::AppRoute
> match: popcorn::pop_tasks
> match: popcorn::pop_auth
> match: popcorn::StaticHandler
> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestRouteMatching
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::AuthHandler
> match: popcorn::pop_handlers
> match: popcorn::Router
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::pop_sessions
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::pop_json
> match: popcorn::App
> match: popcorn::URLField
> match: popcorn::AppRoute
> match: popcorn::pop_auth
> match: popcorn::pop_validation
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn
> match: popcorn::Router
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::Handler
> match: popcorn::AppRoute
> match: popcorn::pop_tasks
> match: popcorn::pop_auth
> match: popcorn::StaticHandler
> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::TestRouteMatching
> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::App
> match: popcorn::URLField
> match: popcorn::AppRoute
> match: popcorn::Handler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestRouteMatching
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::Router
> match: popcorn::TrackerHandler
> match: popcorn::FieldsMatch
> match: popcorn::GithubLogin
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::AppRoute
> match: popcorn::pop_sessions
> match: popcorn::pop_json
> match: popcorn::App
> match: popcorn::pop_auth
> match: popcorn::pop_validation
> match: popcorn>examples>middlewares>
> match: popcorn::TestRouteMatching
> match: popcorn
> match: popcorn::Router
> match: popcorn::FieldsMatch
> match: popcorn::RegexField
> match: popcorn::URLField
> match: popcorn::Handler
> match: popcorn::AppRoute
> match: popcorn::pop_tasks
> match: popcorn::pop_auth
> match: popcorn::StaticHandler
> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::pop_tasks
> match: popcorn::App

## Middlewares

> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router

### Overview

**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:

> match: popcorn>examples>middlewares>
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
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::pop_tasks
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn
> match: popcorn::AuthHandler
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::test_example_post_handler
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::pop_handlers
> match: popcorn::App
> match: popcorn::pop_sessions
> match: popcorn::pop_json
> match: popcorn::PopTask
> match: popcorn::UniqueField
> match: popcorn::PopTrackerResponseTime
> match: popcorn::ValidationResult
> match: popcorn::LogEntry
> match: popcorn::pop_auth
> match: popcorn::URLField
> match: popcorn::pop_validation

* Execute any code.
* Make changes to the request and the response objects.
* End its action and pass to the next handler in the stack.

> match: popcorn::pop_tasks
> match: popcorn::GithubOAuthCallBack
> match: popcorn
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::StaticHandler
> match: popcorn
> match: popcorn::LogEntry
> match: popcorn::Handler
> match: popcorn::PopTrackerResponseTime
> match: popcorn::App
> match: popcorn::RepoObject
> match: popcorn::pop_sessions
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_templates
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_repos
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
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn
> match: popcorn::AuthHandler
> match: popcorn::Router
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::RequestClock
> match: popcorn::pop_sessions
> match: popcorn::pop_json
> match: popcorn::App
> match: popcorn::pop_auth
> match: popcorn::pop_validation

If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::GithubOAuthCallBack
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::TrackerHandler
> match: popcorn::PopTrackerResponseTime
> match: popcorn::ClientThread
> match: popcorn::GithubLogin
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::SessionInit
> match: popcorn::pop_sessions
> match: popcorn::RepoObject
> match: popcorn::pop_json
> match: popcorn::pop_templates
> match: popcorn::pop_auth
> match: popcorn::pop_tests
> match: popcorn::pop_validation

### Ultra simple logger example

> match: popcorn::TestExampleSimpleLogger
> match: popcorn::example_simple_logger
> match: popcorn::UserLogger
> match: popcorn::test_example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn>examples>
> match: popcorn::SimpleErrorHandler
> match: popcorn::SimpleLoggerHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::test_example_advanced_logger
> match: popcorn::TestExampleHello
> match: popcorn::example_advanced_logger
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn
> match: popcorn::pop_sessions
> match: popcorn::App
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_auth
> match: popcorn::pop_validation

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
> match: popcorn>examples>handlers>
> match: popcorn::App
> match: popcorn::test_example_simple_error_handler
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::GithubOAuthCallBack
> match: popcorn::SimpleLoggerHandler
> match: popcorn::TestExampleSimpleLogger
> match: popcorn::AppConfig
> match: popcorn::TestPopcorn
> match: popcorn>examples>
> match: popcorn::TestAppRoute
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestAppParamRoute
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::example_post_handler
> match: popcorn::test_example_simple_logger
> match: popcorn::HtmlErrorHandler
> match: popcorn::MyOtherHandler
> match: popcorn::Handler
> match: popcorn::example_html_error_handler
> match: popcorn::example_static
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_static_default
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn
> match: popcorn::example_glob_route
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::AppGlobRoute
> match: popcorn::example_query_string
> match: popcorn::test_example_hello
> match: popcorn::example_angular
> match: popcorn::example_router
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_post_handler
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::example_templates
> match: popcorn::AuthHandler
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::pop_sessions
> match: popcorn::UniqueField
> match: popcorn::pop_logging
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::pop_handlers
> match: popcorn::pop_tests
> match: popcorn::test_example_router
> match: popcorn::pop_config
> match: popcorn::ValidationResult
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_auth
> match: popcorn::PopTracker
> match: popcorn::GithubUser
> match: popcorn::TrackerRepo
> match: popcorn::TrackerHandler
> match: popcorn::PopTrackerEntries
> match: popcorn::PopTask
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::test_popcorn
> match: popcorn::GithubLogin
> match: popcorn::pop_tasks
> match: popcorn::pop_repos
> match: popcorn::SessionInit
> match: popcorn::pop_templates
> match: popcorn::pop_json
> match: popcorn::JsonRepository
> match: popcorn::pop_validation

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
> match: popcorn>examples>routing>
> match: popcorn::RequestTimeHandler
> match: popcorn::TestRouteMatching
> match: popcorn::RequestClock
> match: popcorn::TestAppRoute
> match: popcorn
> match: popcorn::example_simple_error_handler
> match: popcorn::example_param_route
> match: popcorn::example_post_handler
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Router
> match: popcorn::AuthHandler
> match: popcorn::StaticHandler
> match: popcorn::pop_sessions
> match: popcorn::App
> match: popcorn::test_example_post_handler
> match: popcorn::TrackerHandler
> match: popcorn::pop_handlers
> match: popcorn::test_example_param_route
> match: popcorn::GithubLogin
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::ConsoleLog
> match: popcorn::pop_logging
> match: popcorn::LogEntry
> match: popcorn::test_example_glob_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_json
> match: popcorn::pop_auth
> match: popcorn::PopTracker
> match: popcorn::GithubUser
> match: popcorn::TrackerRepo
> match: popcorn::SessionInit
> match: popcorn::PopTrackerEntries
> match: popcorn::test_pop_routes
> match: popcorn::pop_templates
> match: popcorn::pop_config
> match: popcorn::pop_tasks
> match: popcorn::pop_validation
> match: popcorn::pop_tests

Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler
> match: popcorn::example_static_default
> match: popcorn
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::test_example_static_default
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_tasks
> match: popcorn::pop_tests
> match: popcorn::RepoObject
> match: popcorn::App
> match: popcorn::RepositoryQuery
> match: popcorn::StaticHandler
> match: popcorn::AppParamRoute
> match: popcorn::pop_config
> match: popcorn::PopTask
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_validation

### Ultra cool, more advanced logger example

> match: popcorn::example_simple_logger
> match: popcorn::UserLogger
> match: popcorn::TestExampleSimpleLogger
> match: popcorn>examples>
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::TestExampleHello
> match: popcorn::example_advanced_logger
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn
> match: popcorn::pop_config
> match: popcorn::AppParamRoute
> match: popcorn::Repository
> match: popcorn::Handler
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::pop_auth
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.

> match: popcorn>examples>middlewares>
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::GithubOAuthCallBack
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::StaticHandler
> match: popcorn::AuthHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_sessions
> match: popcorn::LogEntry
> match: popcorn::pop_handlers
> match: popcorn::RequestClock
> match: popcorn::PopTrackerResponseTime
> match: popcorn::SessionInit
> match: popcorn::AppConfig
> match: popcorn::pop_tests
> match: popcorn::AppParamRoute
> match: popcorn::pop_routes::UriString
> match: popcorn::ConsoleLog
> match: popcorn::pop_routes::UriParam
> match: popcorn::TrackerHandler
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::GithubLogin
> match: popcorn::pop_json
> match: popcorn::pop_config
> match: popcorn::AppRoute
> match: popcorn::Repository
> match: popcorn::RepoObject
> match: popcorn::pop_auth
> match: popcorn::pop_repos
> match: popcorn::pop_validation

This example gives a simplified version of the `RequestClock` and `ConsoleLog` middlewares.

> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn>examples>middlewares>
> match: popcorn>examples>
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn::Router
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn::LogEntry
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_auth
> match: popcorn::pop_validation

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
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AuthHandler
> match: popcorn
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::AppGlobRoute
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::TrackerHandler
> match: popcorn::pop_sessions
> match: popcorn::GithubLogin
> match: popcorn::GithubOAuthCallBack
> match: popcorn::AppParamRoute
> match: popcorn::PopTrackerAPI
> match: popcorn::pop_routes::UriParam
> match: popcorn::pop_tests
> match: popcorn::pop_routes::UriPart
> match: popcorn::pop_config
> match: popcorn::pop_auth
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_validation
> match: popcorn::pop_tracker

We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.

> match: popcorn::RequestTimeHandler
> match: popcorn>examples>middlewares>
> match: popcorn::GithubOAuthCallBack
> match: popcorn::MyOtherHandler
> match: popcorn
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::SessionInit
> match: popcorn::pop_sessions
> match: popcorn::RequestClock
> match: popcorn::App
> match: popcorn::AuthHandler
> match: popcorn::pop_tests
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RepositoryQuery
> match: popcorn::AppParamRoute
> match: popcorn::pop_tasks
> match: popcorn::PopTask
> match: popcorn::RepoObject
> match: popcorn::pop_config
> match: popcorn::pop_json
> match: popcorn::StaticHandler
> match: popcorn::pop_repos
> match: popcorn::pop_validation

We then let the `HelloHandler` produce the response.

> match: popcorn::HelloHandler
> match: popcorn
> match: popcorn::AuthHandler
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn::pop_config
> match: popcorn::pop_tests
> match: popcorn::pop_validation

Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler
> match: popcorn
> match: popcorn::Handler
> match: popcorn::Router
> match: popcorn::ConsoleLog
> match: popcorn::pop_sessions
> match: popcorn::App
> match: popcorn::RequestClock
> match: popcorn::AppParamRoute
> match: popcorn::LogEntry
> match: popcorn::pop_tests
> match: popcorn::SessionInit
> match: popcorn::PopTrackerResponseTime
> match: popcorn::RepoObject
> match: popcorn::Repository
> match: popcorn::PopTrackerAPI
> match: popcorn::RepositoryQuery
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_tasks
> match: popcorn::PopTask
> match: popcorn::StaticHandler
> match: popcorn::pop_tracker
> match: popcorn::pop_validation

The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.

> match: popcorn::HelloHandler
> match: popcorn::RequestTimeHandler
> match: popcorn>examples>middlewares>
> match: popcorn::AppConfig
> match: popcorn::App
> match: popcorn::TestPopcornRouter
> match: popcorn::AppThread
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestAppRoute
> match: popcorn::AppLogin
> match: popcorn::TestPopcorn
> match: popcorn::TestAppParamRoute
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::AppParamRoute
> match: popcorn::AppRoute
> match: popcorn
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: popcorn::ConsoleLog
> match: popcorn::Handler
> match: popcorn::LogEntry
> match: popcorn::pop_logging
> match: popcorn::pop_config
> match: popcorn::StaticHandler
> match: popcorn::pop_tests
> match: popcorn::pop_tasks
> match: popcorn::PopTracker
> match: popcorn::GithubUser
> match: popcorn::TrackerRepo
> match: popcorn::PopTrackerResponseTime
> match: popcorn::PopTrackerEntries
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::pop_auth
> match: popcorn::pop_repos
> match: popcorn::pop_sessions
> match: popcorn::Repository
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::AuthHandler
> match: popcorn::pop_json
> match: popcorn::pop_validation

Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.

> match: popcorn>examples>middlewares>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn::CounterAPI
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::PopTrackerAPI
> match: popcorn
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::LogEntry
> match: popcorn::AppConfig
> match: popcorn::PopTrackerResponseTime
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::AuthHandler
> match: popcorn::GithubOAuthCallBack
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_sessions
> match: popcorn::StaticHandler
> match: popcorn::pop_json
> match: popcorn::RepoObject
> match: popcorn::pop_config
> match: popcorn::ConsoleLog
> match: popcorn::RepositoryQuery
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::pop_validation

### Built-in middlewares

> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router
> match: popcorn::StaticHandler

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
> match: popcorn::App
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::Router
> match: popcorn::pop_config
> match: popcorn::StaticHandler
> match: popcorn::PopTask
> match: popcorn::pop_tests
> match: popcorn::test_popcorn
> match: popcorn::pop_tasks
> match: popcorn::pop_repos
> match: popcorn::Handler
> match: popcorn::UniqueField
> match: popcorn::RepositoryQuery
> match: popcorn::pop_auth
> match: popcorn::RepoObject
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_templates
> match: popcorn::pop_validation

* `RequestClock`: initializes requests clock.
* `ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).
* `SessionInit`: initializes requests session (see the `Sessions` section).
* `StaticHandler`: serves static files (see the `Serving static files with Popcorn` section).
* `Router`: a mountable mini-app (see the `Mountable routers` section).

> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn
> match: popcorn::pop_sessions
> match: popcorn::Handler
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::App
> match: popcorn::SessionInit
> match: popcorn>examples>sessions>
> match: popcorn::TestExampleSession
> match: popcorn::pop_sessions
> match: popcorn::example_session
> match: popcorn::test_example_session
> match: popcorn
> match: popcorn::RequestClock
> match: popcorn::GithubUser
> match: popcorn::Handler
> match: popcorn::AuthHandler
> match: popcorn::GithubLogout
> match: popcorn::pop_auth
> match: popcorn::App
> match: popcorn::GithubLogin
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_json
> match: popcorn::Router
> match: popcorn::pop_templates
> match: popcorn::pop_tests
> match: popcorn>examples>static_files>
> match: popcorn::StaticHandler
> match: popcorn>examples>static_files>files>
> match: popcorn::TestPopcorn
> match: popcorn::example_static
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::example_static_default
> match: popcorn::example_static_multiple
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_routes::UriPart
> match: popcorn::PopTrackerAPI
> match: popcorn::test_example_static_multiple
> match: popcorn::AppConfig
> match: popcorn::pop_tests
> match: popcorn::test_popcorn
> match: popcorn::pop_templates
> match: popcorn::App
> match: popcorn::pop_sessions
> match: popcorn::GithubLogin
> match: popcorn::pop_config
> match: popcorn::example_angular
> match: popcorn::pop_auth
> match: popcorn::pop_tasks
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_tracker
> match: popcorn::Router
> match: popcorn::TestExampleRouter
> match: popcorn::TestPopcornRouter
> match: popcorn::example_router
> match: popcorn::test_example_router
> match: popcorn
> match: popcorn::App
> match: popcorn::GithubLogin
> match: popcorn::pop_auth
> match: popcorn::JsonRepository
> match: popcorn::Repository
> match: popcorn::pop_templates
> match: popcorn::pop_tests

## Mountable routers

> match: popcorn::Router
> match: popcorn::example_router
> match: popcorn::test_example_router
> match: popcorn

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
> match: popcorn::TestHandler
> match: popcorn::Handler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_param_route
> match: popcorn::AppRoute
> match: popcorn::example_glob_route
> match: popcorn
> match: popcorn::example_router
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AppParamRoute
> match: popcorn::App
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::StaticHandler
> match: popcorn::test_example_router
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_auth
> match: popcorn::TrackerHandler
> match: popcorn::Repository
> match: popcorn::GithubLogin
> match: popcorn::test_pop_routes
> match: popcorn::pop_tests
> match: popcorn::pop_json
> match: popcorn::JsonRepository
> match: popcorn::RepoObject
> match: popcorn::pop_repos
> match: popcorn::pop_validation

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
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn::AppConfig
> match: popcorn::App
> match: popcorn>examples>routing>
> match: popcorn::example_simple_error_handler
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestRouteMatching
> match: popcorn::example_router
> match: popcorn::TestAppParamRoute
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::example_post_handler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::Handler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHello
> match: popcorn::example_html_error_handler
> match: popcorn::example_static
> match: popcorn::test_example_html_error_handler
> match: popcorn::AppParamRoute
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_hello
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::example_simple_logger
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_angular
> match: popcorn::test_example_param_route
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::StaticHandler
> match: popcorn::example_mongodb
> match: popcorn::test_example_router
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::pop_routes
> match: popcorn::pop_handlers
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::AuthHandler
> match: popcorn::pop_sessions
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_tests
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::pop_tasks
> match: popcorn::pop_auth
> match: popcorn::pop_config
> match: popcorn::PopTask
> match: popcorn::URLField
> match: popcorn::test_pop_routes
> match: popcorn::pop_repos
> match: popcorn::UniqueField
> match: popcorn::pop_json
> match: popcorn::JsonRepository
> match: popcorn::RepoObject
> match: popcorn::pop_templates
> match: popcorn::pop_validation

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
> match: popcorn>examples>routing>
> match: popcorn::App
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestRouteMatching
> match: popcorn::UserList
> match: popcorn::TestAppParamRoute
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::TestHandler
> match: popcorn::Handler
> match: popcorn::UserHomepage
> match: popcorn::UserProfile
> match: popcorn::UserHome
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::GithubUser
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::AppParamRoute
> match: popcorn::Router
> match: popcorn::example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::StaticHandler
> match: popcorn::AuthHandler
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::pop_sessions
> match: popcorn::test_example_glob_route
> match: popcorn::pop_handlers
> match: popcorn::pop_auth
> match: popcorn::pop_tests
> match: popcorn::SessionInit
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::pop_tasks
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_config
> match: popcorn::GithubLogout
> match: popcorn::pop_json
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::RepoObject
> match: popcorn::pop_repos
> match: popcorn::pop_validation

## Error handling

> match: popcorn::ErrorTpl
> match: popcorn::HtmlErrorTemplate
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::ValidationResult
> match: popcorn
> match: popcorn::AuthHandler

**Error handling** is based on middleware handlers.

> match: popcorn>examples>middlewares>
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::example_simple_error_handler
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::ErrorTpl
> match: popcorn::HtmlErrorTemplate
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::Repository
> match: popcorn::TrackerHandler
> match: popcorn::DocumentValidator
> match: popcorn::GithubLogin
> match: popcorn::ValidationResult
> match: popcorn::URLField
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::pop_json
> match: popcorn::App
> match: popcorn::pop_config
> match: popcorn::pop_repos
> match: popcorn::pop_validation

Define error-handling middlewares in the same way as other middleware handlers:

> match: popcorn>examples>middlewares>
> match: popcorn::MyOtherHandler
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::AuthHandler
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::App
> match: popcorn::pop_sessions
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_auth
> match: popcorn::pop_validation

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
> match: popcorn>examples>
> match: popcorn::example_simple_error_handler
> match: popcorn::TestExampleHello
> match: popcorn::ErrorTpl
> match: popcorn::example_static
> match: popcorn::HtmlErrorTemplate
> match: popcorn::HtmlErrorHandler
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_hello
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn::PopTrackerResponseTime
> match: popcorn::LogEntry
> match: popcorn::ValidationResult
> match: popcorn::AuthHandler
> match: popcorn::App
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::pop_sessions
> match: popcorn::Router
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::StaticHandler
> match: popcorn::pop_auth
> match: popcorn::pop_validation

By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).

> match: popcorn::HtmlErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>middlewares>
> match: popcorn::HtmlErrorTemplate
> match: popcorn::SimpleErrorHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleStaticMultiple
> match: popcorn>examples>handlers>
> match: popcorn>examples>watchdog>src>handlers>
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_simple_error_handler
> match: popcorn::TestHandler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::ErrorTpl
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::example_static_multiple
> match: popcorn::test_example_simple_error_handler
> match: popcorn::Handler
> match: popcorn::example_post_handler
> match: popcorn
> match: popcorn::pop_json
> match: popcorn::RepositoryQuery
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::AuthHandler
> match: popcorn::test_example_post_handler
> match: popcorn::ValidationResult
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_handlers
> match: popcorn::Repository
> match: popcorn::JsonRepository
> match: popcorn::TrackerHandler
> match: popcorn::GithubLogin
> match: popcorn::RepoObject
> match: popcorn::pop_auth
> match: popcorn::PopTrackerAPI
> match: popcorn::PopTask
> match: popcorn::pop_repos
> match: popcorn::App
> match: popcorn::AppRoute
> match: popcorn::UniqueField
> match: popcorn::pop_sessions
> match: popcorn::pop_config
> match: popcorn::pop_templates
> match: popcorn::pop_tracker
> match: popcorn::pop_validation

Here an example of the 404 custom error page in HTML:

> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::HtmlErrorTemplate
> match: popcorn::HtmlErrorHandler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn>examples>
> match: popcorn::example_simple_error_handler
> match: popcorn::TestExampleHello
> match: popcorn::ErrorTpl
> match: popcorn::example_static
> match: popcorn::SimpleErrorHandler
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::example_hello
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn
> match: popcorn::test_example_static_multiple
> match: popcorn::AuthHandler
> match: popcorn::UniqueField
> match: popcorn::pop_sessions
> match: popcorn::ValidationResult
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::pop_auth
> match: popcorn::JsonRepository
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

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

> match: popcorn

**Sessions** can be used thanks to the built-in `SessionInit` middleware.

> match: popcorn::SessionInit
> match: popcorn>examples>middlewares>
> match: popcorn
> match: popcorn::Router
> match: popcorn::StaticHandler

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
> match: popcorn::TestExampleSession
> match: popcorn::SessionInit
> match: popcorn::TestExampleHello
> match: popcorn::test_example_simple_logger
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::pop_sessions
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_glob_route
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::test_example_session
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::UniqueField
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::App
> match: popcorn::AuthHandler
> match: popcorn::pop_auth
> match: popcorn::GithubLogin
> match: popcorn::test_example_static_multiple
> match: popcorn::GithubUser
> match: popcorn::GithubLogout
> match: popcorn::FieldsMatch
> match: popcorn::Router
> match: popcorn::BoolField
> match: popcorn::pop_templates
> match: popcorn::pop_repos
> match: popcorn::JsonRepository
> match: popcorn::pop_tests
> match: popcorn::Handler
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

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
> match: popcorn::AppRoute
> match: popcorn::AppConfig
> match: popcorn>examples>routing>
> match: popcorn::App
> match: popcorn::AppThread
> match: popcorn::AppLogin
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppParamRoute
> match: popcorn::AppParamRoute
> match: popcorn::example_session
> match: popcorn::example_param_route
> match: popcorn
> match: popcorn::AppGlobRoute
> match: popcorn::example_glob_route
> match: popcorn::Handler
> match: popcorn::Router
> match: popcorn::test_example_session
> match: popcorn::AuthHandler
> match: popcorn::GithubUser
> match: popcorn::GithubLogout
> match: popcorn::test_example_param_route
> match: popcorn::pop_routes
> match: popcorn::RequestClock
> match: popcorn::test_example_glob_route
> match: popcorn::pop_tests
> match: popcorn::pop_auth
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::pop_config
> match: popcorn::pop_tasks
> match: popcorn::test_pop_routes
> match: popcorn::pop_templates
> match: popcorn::pop_json
> match: popcorn::StaticHandler
> match: popcorn::RepoObject
> match: popcorn::pop_repos
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

## Database integration

> match: popcorn::RepositoryQuery
> match: popcorn::JsonRepository
> match: popcorn
> match: popcorn::pop_repos

### Mongo DB

> match: popcorn::MongoRepository
> match: popcorn

If you want to persist your data, Popcorn works well with MongoDB.

> match: popcorn>examples>mongodb>
> match: popcorn::TestPopcornRouter
> match: popcorn::TestPopcornRoutes
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::example_mongodb
> match: popcorn
> match: popcorn::App
> match: popcorn::AppConfig
> match: popcorn::PopTracker
> match: popcorn::MongoRepository
> match: popcorn::pop_tasks
> match: popcorn::PopTask
> match: popcorn::test_popcorn
> match: popcorn::StaticHandler
> match: popcorn::PopTrackerAPI
> match: popcorn::pop_config
> match: popcorn::Router
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::pop_tracker
> match: popcorn::pop_validation

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
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::AuthHandler
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::pop_sessions
> match: popcorn::JsonRepository
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_tests
> match: popcorn::Handler
> match: popcorn::pop_auth
> match: popcorn::pop_routes::UriString
> match: popcorn::Router
> match: popcorn::PopTrackerEntries
> match: popcorn::GithubLogout
> match: popcorn::Repository
> match: popcorn::pop_repos
> match: popcorn::TrackerRepo
> match: popcorn::RepositoryQuery
> match: popcorn::App
> match: popcorn::LogEntry
> match: popcorn::AppRoute
> match: popcorn::AppParamRoute
> match: popcorn::UniqueField
> match: popcorn::RepoObject
> match: popcorn::StaticHandler
> match: popcorn::pop_config
> match: popcorn::pop_templates
> match: popcorn::pop_validation

First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.

> match: popcorn::UserList
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
> match: popcorn::UserLogger
> match: popcorn::UserItem
> match: popcorn::UserProfile
> match: popcorn::UserHomepage
> match: popcorn::UserHome
> match: popcorn::GithubUser
> match: popcorn::Handler
> match: popcorn::example_simple_error_handler
> match: popcorn::example_post_handler
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AuthHandler
> match: popcorn
> match: popcorn::StaticHandler
> match: popcorn::Router
> match: popcorn::test_example_post_handler
> match: popcorn::pop_handlers
> match: popcorn::TrackerHandler
> match: popcorn::RepositoryQuery
> match: popcorn::GithubLogin
> match: popcorn::pop_sessions
> match: popcorn::JsonRepository
> match: popcorn::pop_auth
> match: popcorn::RequestClock
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_repos
> match: popcorn::PopTrackerEntries
> match: popcorn::GithubOAuthCallBack
> match: popcorn::pop_json
> match: popcorn::GithubLogout
> match: popcorn::App
> match: popcorn::pop_tasks
> match: popcorn::AppRoute
> match: popcorn::pop_tests
> match: popcorn::pop_validation

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
> match: popcorn::example_post_handler
> match: popcorn::TestHandler
> match: popcorn::Handler
> match: popcorn::AnotherHandler
> match: popcorn::SomeHandler
> match: popcorn::SimpleErrorHandler
> match: popcorn::HtmlErrorHandler
> match: popcorn::HelloHandler
> match: popcorn::MyOtherHandler
> match: popcorn::TestExampleSimpleErrorHandler
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_simple_error_handler
> match: popcorn
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_simple_error_handler
> match: popcorn::AuthHandler
> match: popcorn::test_example_post_handler
> match: popcorn::Router
> match: popcorn::StaticHandler
> match: popcorn::ConsoleLog
> match: popcorn::pop_sessions
> match: popcorn::pop_handlers
> match: popcorn::pop_routes::UriString
> match: popcorn::GithubLogout
> match: popcorn::App
> match: popcorn::PopTracker
> match: popcorn::LogEntry
> match: popcorn::pop_auth
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::Repository
> match: popcorn::TrackerHandler
> match: popcorn::AppRoute
> match: popcorn::GithubLogin
> match: popcorn::pop_json
> match: popcorn::PopTrackerAPI
> match: popcorn::GithubOAuthCallBack
> match: popcorn::pop_repos
> match: popcorn::pop_tests
> match: popcorn::pop_config
> match: popcorn::pop_validation
> match: popcorn::pop_tracker

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
> match: popcorn

Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!

> match: popcorn>examples>angular>
> match: popcorn::TestPopcorn
> match: popcorn>tests>test_popcorn.sav>
> match: popcorn::example_angular
> match: popcorn::test_example_angular
> match: popcorn
> match: popcorn::test_popcorn
> match: popcorn::pop_sessions
> match: popcorn::pop_templates
> match: popcorn::pop_tasks
> match: popcorn::App
> match: popcorn::RepoObject
> match: popcorn::Handler
> match: popcorn::pop_tests

Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:

> match: popcorn>examples>angular>
> match: popcorn::example_glob_route
> match: popcorn>examples>routing>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::example_param_route
> match: popcorn::example_angular
> match: popcorn::AppRoute
> match: popcorn::StaticHandler
> match: popcorn::test_example_angular
> match: popcorn::test_example_glob_route
> match: popcorn
> match: popcorn::Handler
> match: popcorn::test_example_param_route
> match: popcorn::AppGlobRoute
> match: popcorn::pop_routes
> match: popcorn::AppParamRoute
> match: popcorn::Router
> match: popcorn::App
> match: popcorn::LogEntry
> match: popcorn::GithubLogout
> match: popcorn::pop_sessions
> match: popcorn::pop_auth
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::AuthHandler
> match: popcorn::pop_json
> match: popcorn::pop_handlers

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
> match: popcorn::example_angular
> match: popcorn::example_glob_route
> match: popcorn>examples>
> match: popcorn::example_static_multiple
> match: popcorn>examples>routing>
> match: popcorn>examples>static_files>files>
> match: popcorn::TestRouteMatching
> match: popcorn::TestAppRoute
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn
> match: popcorn::test_example_angular
> match: popcorn::AppRoute
> match: popcorn::example_simple_logger
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::test_example_static_default
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::test_example_param_route
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::test_example_static
> match: popcorn::Handler
> match: popcorn::test_example_glob_route
> match: popcorn::example_templates
> match: popcorn::AppParamRoute
> match: popcorn::App
> match: popcorn::Router
> match: popcorn::test_example_templates
> match: popcorn::pop_sessions
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_session
> match: popcorn::test_example_static_multiple
> match: popcorn::pop_routes
> match: popcorn::test_example_post_handler
> match: popcorn::AppGlobRoute
> match: popcorn::test_example_router
> match: popcorn::pop_tests
> match: popcorn::GithubLogout
> match: popcorn::pop_routes::UriString
> match: popcorn::pop_routes::UriPart
> match: popcorn::RepoObject
> match: popcorn::AppConfig
> match: popcorn::pop_auth
> match: popcorn::ValidationResult
> match: popcorn::test_pop_routes
> match: popcorn::ConsoleLog
> match: popcorn::LogEntry
> match: popcorn::RequestClock
> match: popcorn::SessionInit
> match: popcorn::pop_config
> match: popcorn::Repository
> match: popcorn::pop_templates
> match: popcorn::UniqueField
> match: popcorn::JsonRepository
> match: popcorn::AuthHandler
> match: popcorn::pop_json
> match: popcorn::pop_repos
> match: popcorn::pop_handlers
> match: popcorn::pop_validation

See the examples for a more detailed use case working with a JSON API.

> match: popcorn::CounterAPI
> match: popcorn>examples>
> match: popcorn::PopTrackerAPI
> match: popcorn::TestExampleHello
> match: popcorn::TestExampleHtmlErrorHandler
> match: popcorn::example_static
> match: popcorn::example_static_default
> match: popcorn>examples>hello_world>test_example_hello.sav>
> match: popcorn::example_hello
> match: popcorn::example_param_route
> match: popcorn::example_simple_logger
> match: popcorn::example_glob_route
> match: popcorn::example_simple_error_handler
> match: popcorn::example_session
> match: popcorn::example_static_multiple
> match: popcorn::example_query_string
> match: popcorn::example_post_handler
> match: popcorn::example_angular
> match: popcorn::example_html_error_handler
> match: popcorn::test_example_html_error_handler
> match: popcorn::example_router
> match: popcorn::test_example_simple_logger
> match: popcorn::test_example_simple_error_handler
> match: popcorn::test_example_advanced_logger
> match: popcorn::pop_json
> match: popcorn::example_advanced_logger
> match: popcorn::example_mongodb
> match: popcorn::example_templates
> match: popcorn::test_example_angular
> match: popcorn::test_example_templates
> match: popcorn::test_example_query_string
> match: popcorn::test_example_hello
> match: popcorn::test_example_param_route
> match: popcorn::test_example_session
> match: popcorn::test_example_post_handler
> match: popcorn::test_example_glob_route
> match: popcorn::test_example_static
> match: popcorn::test_example_static_default
> match: popcorn::test_example_router
> match: popcorn::test_example_static_multiple
> match: popcorn
> match: popcorn::Repository
> match: popcorn::pop_auth
> match: popcorn::JsonRepository
> match: popcorn::GithubLogin
> match: popcorn::AppParamRoute
> match: popcorn::App
> match: popcorn::Handler
> match: popcorn::pop_templates
> match: popcorn::UniqueField
> match: popcorn::pop_sessions
> match: popcorn::AuthHandler
> match: popcorn::pop_tests
> match: popcorn::Router
> match: popcorn::pop_config
> match: popcorn::pop_repos
> match: popcorn::StaticHandler
> match: popcorn::pop_validation

