Parsing code...
# Popcorn


> NLP references:
> * popcorn::popcorn (0.358)
> * popcorn::AppConfig (0.253)
> * popcorn::App (0.247)


**Why endure plain corn when you can pop it?!**


> Text references:
> * core::Sequence::pop
> NLP references:
> * popcorn::GithubOAuthCallBack::client_secret (0.16)
> * popcorn (0.147)
> * popcorn::pop_tasks (0.143)
> * popcorn::App (0.111)
> * popcorn::StaticHandler (0.107)
> * popcorn::AuthHandler::check_session_user (0.106)
> * popcorn::ValidationResult (0.104)
> * popcorn::ValidationResult::object (0.101)


Popcorn is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.


> NLP references:
> * popcorn::popcorn (0.189)
> * popcorn::App (0.185)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.15)
> * popcorn::GithubLogin::redirect_uri (0.15)
> * popcorn::pop_config (0.148)
> * popcorn (0.141)
> * popcorn::pop_handlers::HttpResponse::redirect (0.133)
> * popcorn::UniqueField (0.116)
> * popcorn::GithubLogout::redirect_uri (0.115)
> * popcorn::AppConfig::app_port (0.115)
> * popcorn::pop_auth (0.104)
> * popcorn::PopTrackerBrowsers::browser_queries (0.103)
> * popcorn::AppConfig::app_host (0.102)


Popcorn is built over nitcorn to provide a clean and user friendly interface
without all the boiler plate code.


> Text references:
> * nitcorn
> * popcorn::pop_auth::Session::user
> * popcorn::Handler::all
> NLP references:
> * popcorn::pop_auth::Session::user (0.222)
> * popcorn::popcorn (0.217)
> * popcorn (0.167)
> * popcorn::RepoObject (0.159)
> * popcorn::AuthHandler::session_user (0.151)
> * popcorn::pop_auth (0.147)
> * popcorn::App (0.138)
> * popcorn::pop_repos (0.131)
> * popcorn::AuthHandler (0.128)
> * popcorn::AuthHandler::check_session_user (0.127)
> * popcorn::RepositoryQuery (0.127)
> * popcorn::GithubOAuthCallBack::build_auth_body (0.118)
> * popcorn::GithubLogin::build_auth_redirect (0.116)


## What does it taste like?


> NLP references:
> * popcorn::ValidationResult::has_error (0.165)
> * popcorn::AppRoute::match (0.153)
> * popcorn::popcorn::App::quiet (0.128)
> * popcorn::App (0.125)
> * popcorn::RepoObject (0.117)
> * popcorn::pop_handlers::HttpResponse::send (0.117)


Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:


> Text references:
> * core::Set
> * popcorn::ObjectValidator::add
> NLP references:
> * popcorn::ObjectValidator::add (0.207)
> * popcorn::StaticHandler (0.181)
> * popcorn (0.166)
> * popcorn::GithubOAuthCallBack (0.144)
> * popcorn::StaticHandler::default_file (0.108)
> * popcorn::StaticHandler::file_server (0.106)
> * popcorn::ValidationResult::object (0.098)
> * popcorn::ValidationResult::array (0.097)
> * popcorn::pop_validation (0.095)
> * popcorn::RepoObject (0.088)


The Popcorn app listens on port 3000 for connections.
The app responds with "Hello World!" for requests to the root URL (`/`) or **route**.
For every other path, it will respond with a **404 Not Found**.


> Text references:
> * popcorn::AppThread::app
> * popcorn::AppThread::app
> * popcorn::FieldsMatch::other
> * nitcorn::HttpServer::respond
> NLP references:
> * popcorn::App (0.647)
> * popcorn::Handler (0.443)
> * popcorn (0.365)
> * popcorn::AppThread::app (0.361)
> * popcorn::TestPopcorn::port (0.321)
> * popcorn::AppThread::port (0.315)
> * popcorn::AppRoute::path (0.282)
> * popcorn::pop_logging::HttpRequest::clock (0.273)
> * popcorn::Handler::get (0.26)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.26)
> * popcorn::popcorn::App::listen (0.243)
> * popcorn::AppConfig (0.239)
> * popcorn::Handler::delete (0.23)
> * popcorn::Handler::all (0.224)


The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.


> Text references:
> * nitcorn
> NLP references:
> * popcorn::App (0.513)
> * popcorn (0.391)
> * popcorn::AppParamRoute (0.266)
> * popcorn::AppRoute::match (0.252)
> * popcorn::Handler (0.232)
> * popcorn::Handler::all (0.21)
> * popcorn::AppGlobRoute (0.206)
> * popcorn::popcorn::App::quiet (0.202)
> * popcorn::AppRoute (0.173)


Run the app with the following command:


> Text references:
> * popcorn::AppThread::app
> NLP references:
> * popcorn::AppThread::app (0.462)
> * popcorn::App (0.38)
> * popcorn::TestPopcorn::port (0.341)
> * popcorn::AppThread (0.326)
> * popcorn::TestPopcorn::run_test (0.307)
> * popcorn::TestPopcorn::host (0.298)


Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.


> Text references:
> * ini::ConfigTree::load
> * popcorn::pop_tracker::BrowserCount::browser
> NLP references:
> * popcorn::App (0.245)
> * popcorn::PopTrackerBrowsers (0.224)


Here the output using the `curl` command:


> Span references:
> * curl
> Text references:
> * core::Object::output
> NLP references:
> * popcorn::pop_json::Handler::validator (0.207)
> * popcorn::pop_sessions (0.172)
> * popcorn::UniqueField (0.156)
> * popcorn::pop_templates::HttpResponse::pug_file (0.147)
> * popcorn::ConsoleLog::no_colors (0.133)
> * popcorn::App (0.127)
> * popcorn::pop_templates (0.127)
> * popcorn::pop_tests (0.125)
> * popcorn::pop_templates::HttpResponse::pug (0.121)
> * popcorn::pop_validation (0.116)


This is why we love popcorn!


> NLP references:
> * popcorn::PopTrackerBrowsers::browser_queries (0.24)
> * popcorn (0.199)
> * popcorn::popcorn (0.16)
> * popcorn::pop_logging::HttpRequest::clock (0.159)
> * popcorn::AuthHandler (0.155)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.151)
> * popcorn::ConsoleLog::no_colors (0.151)
> * popcorn::pop_config (0.146)
> * popcorn::App (0.135)
> * popcorn::AppConfig (0.113)


## Basic routing


> Text references:
> * popcorn>examples>routing>
> NLP references:
> * popcorn::AppParamRoute (0.42)
> * popcorn::Router::use (0.393)
> * popcorn::Handler (0.347)


**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).


> Text references:
> * popcorn::pop_repos::AppConfig::client
> * popcorn::LogEntry::request
> * popcorn::LogEntry::request
> * nitcorn::HttpRequest::method
> NLP references:
> * popcorn::Handler (0.658)
> * popcorn::Handler::all (0.6)
> * popcorn (0.406)
> * popcorn::Handler::delete (0.346)
> * popcorn::Handler::get (0.304)
> * popcorn::Handler::post (0.29)
> * popcorn::Handler::put (0.279)
> * popcorn::LogEntry::request (0.233)
> * popcorn::Router::use (0.214)
> * popcorn::App (0.212)


Each route can have one or more handler methods, which are executed when the route is matched.


> Text references:
> * nitcorn::Route::handler
> NLP references:
> * popcorn::Handler (0.539)
> * popcorn (0.485)
> * popcorn::Router::use (0.455)
> * popcorn::AppParamRoute (0.426)
> * popcorn::Handler::all (0.335)
> * popcorn::AppGlobRoute (0.334)
> * popcorn::pop_handlers (0.326)
> * popcorn::Router::use_after (0.269)
> * popcorn::Router::use_before (0.265)
> * popcorn::Router (0.259)
> * popcorn::Handler::get (0.233)


Route handlers definition takes the following form:


> Text references:
> * nitcorn::Route
> * popcorn::pop_handlers::Router::handlers
> NLP references:
> * popcorn::Handler (0.473)
> * popcorn::pop_handlers (0.358)
> * popcorn::Router::use (0.345)
> * popcorn (0.313)


Where:


> NLP references:
> * popcorn::GithubLogout::redirect_uri (0.251)


`MyHandler` is the name of the handler you will add to the app.


> Text references:
> * popcorn::pop_routes::UriParam::name
> * nitcorn::Route::handler
> * popcorn::ObjectValidator::add
> NLP references:
> * popcorn::Handler (0.35)
> * popcorn (0.346)
> * popcorn::AppThread::app (0.316)
> * popcorn::App (0.309)
> * popcorn::ObjectValidator::add (0.292)
> * popcorn::Handler::all (0.274)
> * popcorn::AppConfig::opt_hostname (0.22)
> * popcorn::pop_handlers::HttpResponse::sent (0.21)
> * popcorn::pop_tasks (0.208)
> * popcorn::GithubLogout::redirect_uri (0.205)
> * popcorn::StaticHandler (0.201)
> * popcorn::Router (0.199)
> * popcorn::AuthHandler (0.199)
> * popcorn::pop_logging::HttpRequest::clock (0.192)


`METHOD` can be replaced by `get`, `post`, `put` or `delete`.


> Span references:
> * popcorn::Handler::get
> * popcorn::Handler::post
> * popcorn::Handler::put
> * popcorn::Handler::delete
> NLP references:
> * popcorn::Handler::all (0.421)
> * popcorn::Handler (0.409)
> * popcorn::Handler::delete (0.356)
> * popcorn::Handler::put (0.303)
> * popcorn::Handler::post (0.283)
> * popcorn::Handler::get (0.227)
> * popcorn (0.219)


The following example responds to GET and POST requests:


> NLP references:
> * popcorn::Handler::post (0.51)
> * popcorn::Handler::get (0.497)
> * popcorn::Handler (0.448)
> * popcorn::Handler::all (0.378)
> * popcorn (0.265)


To make your handler responds to a specific route, you have to add it to the app.


> Text references:
> * nitcorn::Route::handler
> * popcorn::ObjectValidator::add
> NLP references:
> * popcorn::Handler (0.593)
> * popcorn::App (0.413)
> * popcorn (0.395)
> * popcorn::Handler::get (0.314)
> * popcorn::Handler::delete (0.277)
> * popcorn::pop_handlers (0.277)
> * popcorn::Router (0.275)
> * popcorn::AppThread::app (0.274)
> * popcorn::Router::use (0.267)
> * popcorn::ObjectValidator::add (0.253)
> * popcorn::Handler::post (0.246)


Respond to POST request on the root route (`/`), the application's home page:


> Text references:
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler (0.607)
> * popcorn::Handler::post (0.527)
> * popcorn (0.322)
> * popcorn::Handler::get (0.312)
> * popcorn::App (0.309)
> * popcorn::Handler::delete (0.276)
> * popcorn::AppRoute::path (0.261)


Respond to a request to the `/user` route:


> Text references:
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler (0.559)
> * popcorn::Handler::get (0.441)
> * popcorn::pop_auth::Session::user (0.4)
> * popcorn::Handler::delete (0.39)
> * popcorn (0.389)
> * popcorn::Handler::post (0.345)
> * popcorn::Handler::all (0.312)
> * popcorn::Handler::put (0.297)
> * popcorn::AppParamRoute (0.297)


For more details about routing, see the routing section.


> Text references:
> * popcorn>examples>routing>
> NLP references:
> * popcorn::AppParamRoute (0.468)
> * popcorn::Router::use (0.393)
> * popcorn::Handler (0.368)
> * popcorn (0.328)
> * popcorn::pop_handlers (0.303)
> * popcorn::AppGlobRoute (0.302)
> * popcorn::pop_routes (0.271)


## Serving static files with Popcorn


> Text references:
> * json::static
> NLP references:
> * popcorn::StaticHandler::static_dir (0.564)
> * popcorn::StaticHandler (0.538)
> * popcorn::StaticHandler::default_file (0.398)


To serve static files such as images, CSS files, and JavaScript files, use the
Popcorn built-in handler `StaticHandler`.


> Span references:
> * popcorn::StaticHandler
> Text references:
> * json::static
> * popcorn::Router::use
> * nitcorn::Route::handler
> NLP references:
> * popcorn::StaticHandler (0.572)
> * popcorn::StaticHandler::default_file (0.386)
> * popcorn::StaticHandler::static_dir (0.38)
> * popcorn::StaticHandler::file_server (0.324)
> * popcorn (0.276)
> * popcorn::AppConfig (0.276)
> * popcorn::MyTemplatePugFileHandler::pug_file (0.211)
> * popcorn::MyTemplateFileHandler::tpl_file (0.203)


Pass the name of the directory that contains the static assets to the StaticHandler
init method to start serving the files directly.
For example, use the following code to serve images, CSS files, and JavaScript files
in a directory named `public`:


> Text references:
> * popcorn::pop_routes::UriParam::name
> * json::static
> * popcorn::StaticHandler
> * nitcorn::HttpRequest::method
> * pthreads::Thread::start
> * popcorn::Router::use
> NLP references:
> * popcorn::StaticHandler (0.694)
> * popcorn::StaticHandler::static_dir (0.457)
> * popcorn::StaticHandler::default_file (0.333)
> * popcorn (0.267)
> * popcorn::StaticHandler::file_server (0.228)


Now, you can load the files that are in the `public` directory:


> Text references:
> * ini::ConfigTree::load
> NLP references:
> * popcorn::StaticHandler (0.534)
> * popcorn (0.267)
> * popcorn::StaticHandler::static_dir (0.212)
> * popcorn::TestPopcorn::test_path (0.184)
> * popcorn::AppGlobRoute (0.173)
> * popcorn::pop_tasks (0.16)
> * popcorn::ValidationResult (0.158)


Popcorn looks up the files relative to the static directory, so the name of the
static directory is not part of the URL.
To use multiple static assets directories, add the `StaticHandler` multiple times:


> Span references:
> * popcorn::StaticHandler
> Text references:
> * json::static
> * popcorn::pop_routes::UriParam::name
> * json::static
> * popcorn::Router::use
> * json::static
> * popcorn::ObjectValidator::add
> NLP references:
> * popcorn::StaticHandler (0.725)
> * popcorn::StaticHandler::static_dir (0.443)
> * popcorn (0.262)


Popcorn looks up the files in the order in which you set the static directories
with the `use` method.


> Span references:
> * popcorn::Router::use
> Text references:
> * pthreads::pthreads::NativePthreadKey::set
> * json::static
> NLP references:
> * popcorn::StaticHandler (0.592)
> * popcorn::StaticHandler::static_dir (0.318)
> * popcorn (0.304)
> * popcorn::Handler::all (0.259)
> * popcorn::pop_sessions (0.191)
> * popcorn::pop_tasks (0.178)
> * popcorn::StaticHandler::file_server (0.169)
> * popcorn::AppConfig (0.168)


To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:


> Span references:
> * popcorn::StaticHandler
> Text references:
> * pthreads::pthreads::NativePthread::create
> * popcorn::AppRoute::path
> * core::string_search::Text::prefix
> * popcorn::AppRoute::path
> * popcorn::AppRoute::path
> * json::static
> NLP references:
> * popcorn::StaticHandler (0.605)
> * popcorn::AppRoute::path (0.339)
> * popcorn::StaticHandler::static_dir (0.318)
> * popcorn::Router::use (0.287)
> * popcorn (0.276)
> * popcorn::AppRoute::resolve_path (0.227)
> * popcorn::StaticHandler::default_file (0.224)
> * popcorn::popcorn::App::quiet (0.163)
> * popcorn::AppParamRoute::parse_path_parameters (0.161)


Now, you can load the files that are in the public directory from the `/static`
path prefix.


> Text references:
> * ini::ConfigTree::load
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::StaticHandler (0.676)
> * popcorn (0.325)
> * popcorn::StaticHandler::static_dir (0.318)
> * popcorn::AppRoute::path (0.185)
> * popcorn::Router::use (0.174)


However, the path that you provide to the `StaticHandler` is relative to the
directory from where you launch your app.
If you run the app from another directory, it’s safer to use the absolute path of
the directory that you want to serve.


> Span references:
> * popcorn::StaticHandler
> Text references:
> * popcorn::AppRoute::path
> * nitcorn::HttpFactory::run
> * popcorn::AppThread::app
> * popcorn::Router::use
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::StaticHandler (0.588)
> * popcorn::pop_tasks (0.368)
> * popcorn (0.332)
> * popcorn::App (0.296)
> * popcorn::AppThread::app (0.246)
> * popcorn::AppRoute::path (0.244)
> * popcorn::StaticHandler::static_dir (0.215)
> * popcorn::TestPopcorn::port (0.211)
> * popcorn::Handler::all (0.199)
> * popcorn::TestPopcorn::host (0.184)
> * popcorn::Router::use (0.184)
> * popcorn::AppThread (0.173)


In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:


> Text references:
> * popcorn::pop_handlers::HttpResponse::redirect
> * popcorn::LogEntry::request
> * json::static
> * console::TermCharFormat::default
> * console::TermCharFormat::default
> NLP references:
> * popcorn::StaticHandler (0.396)
> * popcorn::StaticHandler::default_file (0.385)
> * popcorn (0.276)
> * popcorn::StaticHandler::file_server (0.226)
> * popcorn::StaticHandler::static_dir (0.217)
> * popcorn::pop_handlers::HttpResponse::redirect (0.198)
> * popcorn::ValidationResult (0.187)
> * popcorn::AppConfig (0.167)
> * popcorn::Handler::all (0.166)
> * popcorn::pop_config (0.154)
> * popcorn::MyTemplatePugFileHandler::pug_file (0.147)
> * popcorn::AuthHandler::check_session_user (0.143)
> * popcorn::MyTemplateFileHandler::tpl_file (0.141)


This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.


> Text references:
> * popcorn::Handler::all
> * mongodb::queries
> * popcorn::StaticHandler
> NLP references:
> * popcorn::Repository::find_all (0.249)
> * popcorn::RepositoryQuery (0.232)
> * popcorn::StaticHandler (0.206)
> * popcorn::Repository::QUERY (0.201)
> * popcorn::ValidationResult::object (0.2)
> * popcorn::ValidationResult::array (0.197)
> * popcorn::GithubLogout::redirect_uri (0.192)
> * popcorn (0.184)
> * popcorn::GithubLogin::redirect_uri (0.153)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.153)
> * popcorn::Repository::find (0.146)
> * popcorn::StaticHandler::default_file (0.144)
> * popcorn::Repository::remove (0.14)
> * popcorn::StaticHandler::file_server (0.14)
> * popcorn::PopTrackerQueries (0.138)
> * popcorn::Repository::remove_all (0.136)
> * popcorn::Repository::count (0.134)


## Advanced Routing


> NLP references:
> * popcorn::AppParamRoute (0.297)
> * popcorn::Router::use (0.278)
> * popcorn::Handler (0.246)


**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.


> Text references:
> * nitcorn::HttpServer::respond
> * popcorn::pop_repos::AppConfig::client
> * popcorn>examples>routing>
> NLP references:
> * popcorn::Handler (0.516)
> * popcorn (0.385)
> * popcorn::AppParamRoute (0.367)
> * popcorn::Router::use (0.344)
> * popcorn::Handler::get (0.309)
> * popcorn::AppGlobRoute (0.297)
> * popcorn::App (0.297)
> * popcorn::Handler::delete (0.273)
> * popcorn::pop_handlers (0.266)
> * popcorn::Handler::post (0.242)
> * popcorn::pop_routes (0.238)


The following code is an example of a very basic route.


> NLP references:
> * popcorn (0.335)
> * popcorn::AppParamRoute (0.277)
> * popcorn::Handler (0.275)
> * popcorn::Router::use (0.243)
> * popcorn::AppGlobRoute (0.212)
> * popcorn::Router (0.208)
> * popcorn::App (0.183)
> * popcorn::pop_handlers (0.162)


### Route methods


> Text references:
> * nitcorn::Route
> NLP references:
> * popcorn::Handler (0.474)
> * popcorn::AppParamRoute (0.42)
> * popcorn::Router::use (0.393)
> * popcorn (0.386)
> * popcorn::Handler::all (0.367)


A **route method** is derived from one of the HTTP methods, and is attached to an
instance of the Handler class.


> Text references:
> * nitcorn::HttpRequest::method
> * popcorn::Handler
> NLP references:
> * popcorn::Handler::all (0.53)
> * popcorn::Handler (0.357)
> * popcorn (0.342)
> * popcorn::Router::use (0.23)
> * popcorn::AppParamRoute (0.229)
> * popcorn::Router (0.193)
> * popcorn::AppGlobRoute (0.183)
> * popcorn::Repository (0.18)
> * popcorn::pop_handlers (0.171)


The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.


> NLP references:
> * popcorn::Handler (0.431)
> * popcorn (0.404)
> * popcorn::Handler::all (0.327)
> * popcorn::App (0.297)
> * popcorn::Handler::post (0.278)
> * popcorn::Handler::get (0.253)
> * popcorn::Router (0.233)
> * popcorn::AppParamRoute (0.233)
> * popcorn::AppThread::app (0.231)
> * popcorn::AppRoute::path (0.197)
> * popcorn::Router::use (0.195)
> * popcorn::AppGlobRoute (0.186)


Popcorn supports the following routing methods that correspond to HTTP methods:
get, post, put, and delete.


> Text references:
> * popcorn>examples>routing>
> NLP references:
> * popcorn::Handler::all (0.511)
> * popcorn::Handler (0.448)
> * popcorn::Handler::delete (0.342)
> * popcorn (0.311)
> * popcorn::Handler::put (0.284)
> * popcorn::Handler::post (0.278)
> * popcorn::Handler::get (0.253)


The request query string is accessed through the `req` parameter:


> Text references:
> * popcorn::LogEntry::request
> * popcorn::pop_routes::UriString::string
> NLP references:
> * popcorn::RepositoryQuery (0.256)
> * popcorn::PopTrackerQueries (0.246)
> * popcorn::AppRoute::match (0.23)
> * popcorn (0.227)
> * popcorn::Repository::QUERY (0.222)
> * popcorn::Handler::all (0.219)
> * popcorn::Repository::find_all (0.196)
> * popcorn::LogEntry::request (0.188)
> * popcorn::AppParamRoute (0.17)
> * popcorn::PopTrackerBrowsers::browser_queries (0.164)
> * popcorn::TrackerHandler::limit (0.161)
> * popcorn::Repository::find (0.161)
> * popcorn::pop_handlers::HttpResponse::sent (0.16)
> * popcorn::Repository::remove (0.154)
> * popcorn::pop_logging::HttpRequest::clock (0.151)
> * popcorn::LogEntry::user_agent (0.15)
> * popcorn::Repository::remove_all (0.15)
> * popcorn::App (0.149)


Post parameters can also be accessed through the `req` parameter:


> NLP references:
> * popcorn::AppParamRoute (0.279)
> * popcorn::AppGlobRoute (0.258)
> * popcorn::AppParamRoute::parse_uri_parameters (0.241)
> * popcorn::AppRoute::match (0.197)
> * popcorn (0.19)
> * popcorn::AppRoute::resolve_path (0.158)
> * popcorn::ValidationResult (0.145)
> * popcorn::ValidationResult::object (0.139)
> * popcorn::TrackerHandler::limit (0.138)
> * popcorn::App (0.138)
> * popcorn::ValidationResult::array (0.137)
> * popcorn::Handler::post (0.13)


There is a special routing method, `all(res, req)`, which is not derived from any
HTTP method. This method is used to respond at a path for all request methods.


> Span references:
> * popcorn::Handler::all
> Text references:
> * popcorn>examples>routing>
> * nitcorn::HttpRequest::method
> * nitcorn::HttpServer::respond
> * popcorn::AppRoute::path
> * popcorn::Handler::all
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler::all (0.664)
> * popcorn (0.38)
> * popcorn::Handler (0.374)
> * popcorn::Router::use (0.238)
> * popcorn::App (0.185)
> * popcorn::AppParamRoute (0.179)
> * popcorn::AppGlobRoute (0.173)
> * popcorn::DocumentValidator::validation (0.171)


In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.


> Text references:
> * nitcorn::Route::handler
> * popcorn::FieldsMatch::other
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler::all (0.786)
> * popcorn::Handler (0.502)
> * popcorn (0.47)
> * popcorn::Handler::delete (0.346)
> * popcorn::Handler::get (0.288)
> * popcorn::Handler::post (0.287)
> * popcorn::Handler::put (0.282)
> * popcorn::LogEntry::request (0.277)
> * popcorn::pop_handlers::HttpResponse::sent (0.268)
> * popcorn::AuthHandler (0.265)
> * popcorn::pop_sessions (0.264)
> * popcorn::GithubLogout::redirect_uri (0.218)


Using the `all` method you can also implement other HTTP request methods.


> Span references:
> * popcorn::Handler::all
> Text references:
> * nitcorn::HttpRequest::method
> * popcorn::FieldsMatch::other
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler::all (0.747)
> * popcorn (0.297)
> * popcorn::Handler (0.252)
> * popcorn::LogEntry::request (0.241)
> * popcorn::TestPopcorn::client_test (0.233)
> * popcorn::FieldsMatch::other (0.223)
> * popcorn::LogEntry (0.216)
> * popcorn::UniqueField::check_unicity (0.187)


### Route paths


> Text references:
> * nitcorn::Route
> NLP references:
> * popcorn::Router::use (0.74)
> * popcorn::AppRoute::path (0.68)
> * popcorn::AppRoute::resolve_path (0.455)


**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.


> Text references:
> * nitcorn::Route
> * popcorn::LogEntry::request
> * nitcorn::Route
> NLP references:
> * popcorn::Router::use (0.497)
> * popcorn (0.461)
> * popcorn::Handler (0.414)
> * popcorn::AppRoute::path (0.398)
> * popcorn::AppGlobRoute (0.353)
> * popcorn::AppParamRoute (0.336)
> * popcorn::Handler::all (0.268)
> * popcorn::AppRoute::resolve_path (0.266)
> * popcorn::pop_handlers (0.239)
> * popcorn::Router::use_after (0.238)
> * popcorn::Router (0.238)
> * popcorn::Router::use_before (0.235)
> * popcorn::Handler::get (0.229)
> * popcorn::App (0.222)
> * popcorn::Handler::delete (0.202)
> * popcorn::AppRoute (0.202)


Popcorn uses the `Handler::match(uri)` method to match the route paths.


> Text references:
> * nitcorn::HttpRequest::method
> NLP references:
> * popcorn::Router::use (0.562)
> * popcorn::AppRoute::match (0.438)
> * popcorn (0.417)
> * popcorn::Handler (0.328)
> * popcorn::AppRoute::uri_root (0.308)
> * popcorn::Router::use_after (0.303)
> * popcorn::Router::use_before (0.299)
> * popcorn::AppRoute::path (0.297)
> * popcorn::Handler::all (0.284)
> * popcorn::AppRoute::resolve_path (0.274)
> * popcorn::AppRoute (0.268)
> * popcorn::FieldsMatch (0.256)
> * popcorn::RegexField::re (0.235)


Here are some examples of route paths based on strings.


> Text references:
> * popcorn>examples>
> NLP references:
> * popcorn::Router::use (0.428)
> * popcorn::AppRoute::path (0.363)
> * popcorn (0.36)
> * popcorn::AppParamRoute (0.277)
> * popcorn::Handler (0.273)
> * popcorn::AppRoute::resolve_path (0.243)
> * popcorn::App (0.218)
> * popcorn::AppGlobRoute (0.212)
> * popcorn::Router (0.205)
> * popcorn::AppRoute (0.198)
> * popcorn::Router::use_after (0.196)
> * popcorn::Router::use_before (0.193)
> * popcorn::pop_sessions (0.191)


This route path will match requests to the root route, `/`.


> Text references:
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::Router::use (0.616)
> * popcorn::AppRoute::path (0.566)
> * popcorn (0.479)
> * popcorn::Handler (0.473)
> * popcorn::AppParamRoute (0.436)


This route path will match requests to `/about`.


> Text references:
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::Router::use (0.527)
> * popcorn (0.415)
> * popcorn::AppRoute::path (0.392)
> * popcorn::Handler (0.351)
> * popcorn::AppParamRoute (0.292)
> * popcorn::AppRoute::match (0.29)
> * popcorn::Router::use_after (0.266)
> * popcorn::AppRoute::resolve_path (0.263)
> * popcorn::Router::use_before (0.262)


This route path will match requests to `/random.text`.


> Text references:
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::Router::use (0.527)
> * popcorn (0.422)
> * popcorn::AppRoute::path (0.392)
> * popcorn::Handler (0.351)
> * popcorn::AppParamRoute (0.292)
> * popcorn::AppRoute::match (0.29)
> * popcorn::Router::use_after (0.266)
> * popcorn::AppRoute::resolve_path (0.263)
> * popcorn::Router::use_before (0.262)


During the query/response process, routes are matched by order of declaration
through the `App::use` method.


> Span references:
> * popcorn::Router::use
> NLP references:
> * popcorn::Router::use (0.411)
> * popcorn (0.375)
> * popcorn::AppParamRoute (0.31)
> * popcorn::Handler (0.304)
> * popcorn::AppThread::app (0.274)
> * popcorn::Handler::all (0.263)
> * popcorn::App (0.249)
> * popcorn::Router::use_after (0.237)
> * popcorn::Router::use_before (0.234)
> * popcorn::AppGlobRoute (0.228)
> * popcorn::AppRoute::match (0.225)
> * popcorn::TestPopcorn::port (0.198)
> * popcorn::AppThread::port (0.195)
> * popcorn::Router (0.186)


The app declared in this example will try to match the routes in this order:


> Text references:
> * popcorn::AppThread::app
> NLP references:
> * popcorn::Router::use (0.38)
> * popcorn (0.354)
> * popcorn::App (0.315)
> * popcorn::AppThread::app (0.306)
> * popcorn::Handler (0.276)
> * popcorn::AppParamRoute (0.253)
> * popcorn::AppRoute::match (0.251)
> * popcorn::Router::use_after (0.239)
> * popcorn::Router::use_before (0.235)
> * popcorn::Router (0.21)


`/`




`/about`




`/random.text`


> NLP references:
> * popcorn (0.027)


### Route parameters


> Text references:
> * nitcorn::Route
> NLP references:
> * popcorn::AppParamRoute (0.639)
> * popcorn::AppGlobRoute (0.46)
> * popcorn::Router::use (0.393)


**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.


> Text references:
> * nitcorn::Route
> * popcorn::AppRoute::path
> * core::Process::arguments
> NLP references:
> * popcorn::AppParamRoute (0.599)
> * popcorn::Router::use (0.505)
> * popcorn::AppGlobRoute (0.5)
> * popcorn (0.42)
> * popcorn::AppRoute::path (0.376)
> * popcorn::AppRoute::resolve_path (0.352)
> * popcorn::Handler (0.339)
> * popcorn::Router (0.227)
> * popcorn::Router::use_after (0.223)
> * popcorn::App (0.221)
> * popcorn::Router::use_before (0.22)
> * popcorn::AppRoute (0.213)
> * popcorn::pop_handlers (0.213)


The following example declares a handler `UserHome` that responds with the `user`
name.


> Span references:
> * popcorn::UserHome
> * popcorn::pop_auth::Session::user
> Text references:
> * nitcorn::Route::handler
> NLP references:
> * popcorn::Handler (0.341)
> * popcorn::AuthHandler (0.296)
> * popcorn::pop_auth::Session::user (0.292)
> * popcorn (0.267)
> * popcorn::Handler::all (0.265)
> * popcorn::UserHome (0.258)
> * popcorn::Handler::get (0.25)
> * popcorn::Handler::delete (0.221)


The `UserHome` handler listen to every path matching `/:user`. This can be `/Morriar`,
`/10`, ... but not `/Morriar/profile` since route follow the strict matching rule.


> Span references:
> * popcorn::UserHome
> Text references:
> * nitcorn::Route::handler
> * popcorn::popcorn::App::listen
> * popcorn::AppRoute::path
> NLP references:
> * popcorn::Router::use (0.431)
> * popcorn (0.392)
> * popcorn::Handler (0.334)
> * popcorn::AppRoute (0.306)
> * popcorn::AppParamRoute (0.268)
> * popcorn::AppRoute::resolve_path (0.257)
> * popcorn::Router::use_after (0.251)
> * popcorn::AppRoute::path (0.248)
> * popcorn::Router::use_before (0.247)
> * popcorn::Handler::all (0.227)
> * popcorn::pop_handlers (0.226)
> * popcorn::AuthHandler (0.224)
> * popcorn::AppGlobRoute (0.217)
> * popcorn::Router (0.217)
> * popcorn::popcorn::App::listen (0.213)
> * popcorn::pop_auth::Session::user (0.206)
> * popcorn::App (0.204)
> * popcorn::pop_auth (0.193)


### Glob routes


> NLP references:
> * popcorn::AppGlobRoute (0.494)
> * popcorn::AppParamRoute (0.484)
> * popcorn::Router::use (0.454)
> * popcorn::Handler (0.401)


**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.


> NLP references:
> * popcorn::Router::use (0.431)
> * popcorn::AppGlobRoute (0.43)
> * popcorn::AppParamRoute (0.414)
> * popcorn (0.371)
> * popcorn::Handler (0.362)
> * popcorn::AppRoute::uri_root (0.28)
> * popcorn::pop_handlers (0.278)
> * popcorn::pop_routes (0.248)
> * popcorn::AppRoute::path (0.225)
> * popcorn::Router (0.217)
> * popcorn::Router::use_after (0.214)
> * popcorn::Router::use_before (0.21)
> * popcorn::AppRoute (0.201)
> * popcorn::Handler::get (0.199)


Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.


> Span references:
> * popcorn::UserItem
> Text references:
> * nitcorn::Route::handler
> * nitcorn::HttpServer::respond
> * core::string_search::Text::prefix
> NLP references:
> * popcorn (0.461)
> * popcorn::Handler (0.438)
> * popcorn::AppParamRoute (0.384)
> * popcorn::Router::use (0.378)
> * popcorn::AppGlobRoute (0.37)
> * popcorn::pop_handlers (0.285)
> * popcorn::Handler::get (0.284)
> * popcorn::Handler::delete (0.25)
> * popcorn::Router (0.249)
> * popcorn::App (0.247)
> * popcorn::AppRoute::uri_root (0.232)
> * popcorn::AuthHandler (0.229)
> * popcorn::Handler::post (0.222)
> * popcorn::Router::use_after (0.218)
> * popcorn::Router::use_before (0.215)


## Response methods


> NLP references:
> * popcorn::LogEntry::response (0.51)
> * popcorn::Handler::all (0.367)


The methods on the response object (`res`), can is used to manipulate the
request-response cycle.
If none of these methods are called from a route handler, the client request will
receive a `404 Not found` error.


> Text references:
> * popcorn::LogEntry::response
> * popcorn::ValidationResult::object
> * popcorn::pop_repos::AppConfig::client
> * popcorn::LogEntry::request
> NLP references:
> * popcorn::Handler::all (0.474)
> * popcorn (0.464)
> * popcorn::Handler (0.36)
> * popcorn::AppParamRoute (0.225)
> * popcorn::Router::use (0.223)
> * popcorn::AppGlobRoute (0.218)
> * popcorn::DocumentValidator::validation (0.207)
> * popcorn::App (0.2)
> * popcorn::pop_logging::HttpRequest::clock (0.199)
> * popcorn::AuthHandler::check_session_user (0.192)
> * popcorn::pop_handlers::HttpResponse::sent (0.192)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.189)
> * popcorn::Router (0.184)
> * popcorn::pop_sessions (0.179)
> * popcorn::ValidationResult::errors (0.179)
> * popcorn::ValidationResult (0.174)


`res.html()` Send a HTML response.


> NLP references:
> * popcorn::pop_handlers::HttpResponse::send (0.577)
> * popcorn::LogEntry::response (0.386)


`res.json()` Send a JSON response.


> NLP references:
> * popcorn::pop_handlers::HttpResponse::send (0.539)
> * popcorn::LogEntry::response (0.361)
> * popcorn::pop_json::HttpResponse::json (0.285)


`res.redirect()` Redirect a request.


> NLP references:
> * popcorn::pop_handlers::HttpResponse::redirect (0.45)
> * popcorn::LogEntry::request (0.287)
> * popcorn::GithubLogout (0.266)
> * popcorn::Handler::all (0.242)
> * popcorn::LogEntry::user_agent (0.23)


`res.send()` Send a response of various types.


> Text references:
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::pop_handlers::HttpResponse::send (0.482)
> * popcorn::LogEntry::response (0.323)


`res.error()` Set the response status code and send its message as the response body.


> Text references:
> * core::Set
> * popcorn::LogEntry::response
> * popcorn::pop_handlers::HttpResponse::send
> * popcorn::ErrorTpl::message
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::pop_handlers::HttpResponse::send (0.54)
> * popcorn::LogEntry::response (0.435)
> * popcorn::pop_json::HttpResponse::json_error (0.324)
> * popcorn::HtmlErrorTemplate::message (0.302)
> * popcorn::HtmlErrorTemplate::status (0.302)
> * popcorn::ErrorTpl::message (0.302)
> * popcorn::ErrorTpl::status (0.302)


## Response cycle


> NLP references:
> * popcorn::LogEntry::response (0.51)


When the popcorn `App` receives a request, the response cycle is the following:


> Span references:
> * popcorn::App
> Text references:
> * popcorn
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::pop_logging::HttpRequest::clock (0.512)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.486)
> * popcorn::App (0.327)
> * popcorn (0.32)
> * popcorn::AppThread::app (0.288)
> * popcorn::LogEntry::response (0.241)
> * popcorn::AppConfig (0.231)
> * popcorn::Handler (0.195)
> * popcorn::Handler::all (0.193)
> * popcorn::GithubOAuthCallBack::client_secret (0.192)


`pre-middlewares` lookup matching middlewares registered with `use_before(pre_middleware)`:


> Span references:
> * popcorn::Router::use_before
> Text references:
> * popcorn>examples>middlewares>
> * nitcorn::reactor::Interface::registered
> NLP references:
> * popcorn::Router::use_before (0.285)
> * popcorn::AppRoute::match (0.279)
> * popcorn (0.261)


execute matching middleware by registration order


> NLP references:
> * popcorn::Router::use (0.404)
> * popcorn::AppRoute::match (0.318)
> * popcorn (0.315)


if a middleware send a response then let the `pre-middlewares` loop continue
with the next middleware


> Text references:
> * popcorn::pop_handlers::HttpResponse::send
> * popcorn::LogEntry::response
> * mongodb::NativeMongoCursor::next
> NLP references:
> * popcorn (0.374)
> * popcorn::pop_handlers::HttpResponse::send (0.311)
> * popcorn::Router (0.22)


`response-handlers` lookup matching handlers registered with `use(handler)`:


> Span references:
> * popcorn::Router::use
> Text references:
> * popcorn::pop_handlers::Router::handlers
> * nitcorn::reactor::Interface::registered
> NLP references:
> * popcorn::Router::use (0.385)
> * popcorn::TrackerHandler (0.308)
> * popcorn::pop_handlers (0.306)
> * popcorn::pop_handlers::HttpResponse::sent (0.302)
> * popcorn::pop_tracker::AppConfig::tracker (0.302)
> * popcorn (0.291)
> * popcorn::Router::use_after (0.287)
> * popcorn::Router::use_before (0.282)
> * popcorn::Handler::all (0.271)
> * popcorn::Handler (0.26)
> * popcorn::AuthHandler (0.253)
> * popcorn::GithubLogin (0.244)
> * popcorn::AppRoute::match (0.244)
> * popcorn::Handler::get (0.219)
> * popcorn::StaticHandler::file_server (0.214)


execute matching middleware by registration order


> NLP references:
> * popcorn::Router::use (0.404)
> * popcorn::AppRoute::match (0.318)
> * popcorn (0.315)


if a middleware send a response then stop the `response-handlers` loop


> Text references:
> * popcorn::pop_handlers::HttpResponse::send
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::pop_handlers::HttpResponse::send (0.408)
> * popcorn (0.304)
> * popcorn::LogEntry::response (0.273)


if no hander matches or sends a response, generate a 404 response


> Text references:
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::LogEntry::response (0.51)
> * popcorn::pop_handlers::HttpResponse::send (0.506)
> * popcorn::PopTrackerResponseTime (0.285)


`post-middlewares` lookup matching handlers registered with `use_after(post_handler)`:


> Span references:
> * popcorn::Router::use_after
> Text references:
> * popcorn::pop_handlers::Router::handlers
> * nitcorn::reactor::Interface::registered
> NLP references:
> * popcorn::Router::use_after (0.386)
> * popcorn::AppRoute::match (0.279)
> * popcorn::Router::use (0.272)
> * popcorn::Router::use_before (0.228)


execute matching middleware by registration order


> NLP references:
> * popcorn::Router::use (0.404)
> * popcorn::AppRoute::match (0.318)
> * popcorn (0.315)


if a middleware send a response then let the `post-middlewares` loop continue
with the next middleware


> Text references:
> * popcorn::pop_handlers::HttpResponse::send
> * popcorn::LogEntry::response
> * mongodb::NativeMongoCursor::next
> NLP references:
> * popcorn (0.374)
> * popcorn::pop_handlers::HttpResponse::send (0.311)
> * popcorn::Router (0.22)


## Middlewares


> NLP references:
> * popcorn (0.297)


### Overview


> NLP references:
> * popcorn (0.007)


**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:


> Span references:
> * nitcorn::HttpResponse
> Text references:
> * popcorn::pop_handlers::Router::handlers
> * popcorn::pop_handlers::Router::handlers
> * popcorn::pop_handlers::HttpResponse::send
> * popcorn::pop_handlers::Router::handlers
> * curl::curl::CurlRequest::perform
> NLP references:
> * popcorn (0.434)
> * popcorn::pop_handlers::HttpResponse::sent (0.407)
> * popcorn::Handler (0.287)
> * popcorn::TrackerHandler (0.287)
> * popcorn::Handler::all (0.286)
> * popcorn::pop_handlers (0.286)
> * popcorn::pop_tracker::AppConfig::tracker (0.282)
> * popcorn::Router (0.269)
> * popcorn::AuthHandler (0.254)
> * popcorn::pop_handlers::HttpResponse::send (0.23)
> * popcorn::GithubLogin (0.228)
> * popcorn::Handler::get (0.204)
> * popcorn::Router::use (0.204)
> * popcorn::pop_json::Handler::BODY (0.202)


Execute any code.


> NLP references:
> * popcorn::TestPopcorn::system (0.298)
> * popcorn::ClientThread::test_suite (0.277)


Make changes to the request and the response objects.


> Text references:
> * popcorn::LogEntry::request
> * popcorn::LogEntry::response
> NLP references:
> * popcorn::LogEntry::response (0.323)
> * popcorn::LogEntry (0.222)
> * popcorn::LogEntry::request (0.222)
> * popcorn::pop_json::Handler::BODY (0.208)
> * popcorn (0.207)
> * popcorn::Handler::all (0.187)
> * popcorn::PopTrackerResponseTime (0.18)
> * popcorn::LogEntry::user_agent (0.178)


End its action and pass to the next handler in the stack.


> Text references:
> * mongodb::NativeMongoCursor::next
> * nitcorn::Route::handler
> NLP references:
> * popcorn::TrackerHandler (0.183)
> * popcorn::pop_handlers (0.182)
> * popcorn::pop_handlers::HttpResponse::sent (0.18)
> * popcorn::pop_tracker::AppConfig::tracker (0.18)
> * popcorn (0.162)


If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.


> Text references:
> * nitcorn::Route::handler
> * popcorn::LogEntry::response
> * popcorn::pop_handlers::HttpResponse::sent
> NLP references:
> * popcorn (0.385)
> * popcorn::pop_handlers::HttpResponse::send (0.351)
> * popcorn::pop_handlers::HttpResponse::sent (0.274)
> * popcorn::Router (0.237)
> * popcorn::pop_repos::AppConfig::client (0.209)
> * popcorn::LogEntry::response (0.193)
> * popcorn::pop_json::Handler::BODY (0.169)
> * popcorn::Handler (0.168)
> * popcorn::DocumentValidator::validation (0.16)


### Ultra simple logger example


> NLP references:
> * popcorn::ConsoleLog::level (0.275)
> * popcorn::pop_sessions (0.161)


Here is an example of a simple “Hello World” Popcorn application.
We add a middleware handler to the application called MyLogger that prints a simple
log message in the app stdout.


> Text references:
> * popcorn::ObjectValidator::add
> * nitcorn::Route::handler
> * popcorn::ConsoleLog::log
> * popcorn::ErrorTpl::message
> * popcorn::AppThread::app
> NLP references:
> * popcorn (0.369)
> * popcorn::App (0.365)
> * popcorn::Handler (0.242)
> * popcorn::Router (0.209)
> * popcorn::ErrorTpl::message (0.206)
> * popcorn::HtmlErrorTemplate::message (0.206)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.206)
> * popcorn::GithubLogin::redirect_uri (0.206)
> * popcorn::AuthHandler (0.189)
> * popcorn::pop_sessions (0.186)
> * popcorn::popcorn (0.18)
> * popcorn::pop_validation (0.18)
> * popcorn::AppThread::app (0.178)
> * popcorn::UniqueField (0.168)
> * popcorn::ObjectValidator::add (0.165)
> * popcorn::pop_logging::HttpRequest::clock (0.157)


By using the `MyLogger` handler to the route `/*` we ensure that every requests
(even 404 ones) pass through the middleware handler.
This handler just prints “Request Logged!” when a request is received.


> Text references:
> * nitcorn::Route::handler
> * nitcorn::Route::handler
> * popcorn::LogEntry::request
> NLP references:
> * popcorn (0.506)
> * popcorn::Handler::all (0.423)
> * popcorn::Handler (0.408)
> * popcorn::pop_handlers::HttpResponse::sent (0.398)
> * popcorn::Handler::get (0.327)
> * popcorn::pop_handlers (0.323)
> * popcorn::Router (0.303)
> * popcorn::Router::use (0.301)
> * popcorn::LogEntry::request (0.298)
> * popcorn::Handler::delete (0.289)
> * popcorn::AuthHandler (0.282)
> * popcorn::Handler::post (0.256)
> * popcorn::pop_sessions (0.25)
> * popcorn::TrackerHandler (0.246)
> * popcorn::pop_tracker::AppConfig::tracker (0.241)
> * popcorn::pop_logging::HttpRequest::clock (0.241)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.229)
> * popcorn::pop_json (0.225)
> * popcorn::Handler::put (0.22)


Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.


> Span references:
> * popcorn::Router::use_before
> Text references:
> * mongodb::MongoGroup::first
> * popcorn::Handler::all
> * popcorn::ObjectValidator::add
> NLP references:
> * popcorn (0.374)
> * popcorn::Handler::all (0.281)
> * popcorn::Router (0.196)
> * popcorn::ValidationResult (0.183)
> * popcorn::Router::use_before (0.165)
> * popcorn::GithubLogout::redirect_uri (0.165)
> * popcorn::Handler (0.16)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.131)
> * popcorn::GithubLogin::redirect_uri (0.131)
> * popcorn::StringField (0.131)


### Ultra cool, more advanced logger example


> NLP references:
> * popcorn::ConsoleLog::level (0.22)
> * popcorn::pop_config (0.115)
> * popcorn (0.107)


Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.


> Text references:
> * pthreads::pthreads::NativePthread::create
> * nitcorn::Route::handler
> * popcorn::LogEntry::response
> * core::time
> NLP references:
> * popcorn (0.448)
> * popcorn::Handler::all (0.277)
> * popcorn::Router (0.249)
> * popcorn::pop_handlers::HttpResponse::sent (0.228)
> * popcorn::HtmlErrorTemplate::status (0.224)
> * popcorn::ErrorTpl::status (0.224)
> * popcorn::LogEntry::request (0.222)
> * popcorn::Handler (0.216)
> * popcorn::pop_logging::HttpRequest::clock (0.213)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.202)
> * popcorn::App (0.196)
> * popcorn::LogEntry::user_agent (0.178)


This example gives a simplified version of the `RequestClock` and `ConsoleLog` middlewares.


> Span references:
> * popcorn::RequestClock
> * popcorn::ConsoleLog
> Text references:
> * core::Path::simplified
> NLP references:
> * popcorn (0.258)
> * popcorn::Router (0.187)


First, we attach a new attribute `timer` to every `HttpRequest`.
Doing so we can access our data from all handlers that import our module, directly
from the `req` parameter.


> Span references:
> * popcorn::example_advanced_logger::HttpRequest::timer
> * nitcorn::HttpRequest
> Text references:
> * serialization::AttributeTypeError::attribute
> * popcorn::Handler::all
> * popcorn::pop_handlers::Router::handlers
> NLP references:
> * popcorn::AuthHandler (0.233)
> * popcorn (0.229)
> * popcorn::PopTrackerBrowsers::browser_queries (0.221)
> * popcorn::AppRoute::match (0.206)
> * popcorn::ConsoleLog::no_colors (0.204)
> * popcorn::pop_json::Handler::validator (0.161)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.136)
> * popcorn::AppGlobRoute (0.131)
> * popcorn::pop_validation (0.13)


We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.


> Span references:
> * popcorn::RequestTimeHandler
> * popcorn::Router::use_before
> * popcorn::RequestTimeHandler
> Text references:
> * popcorn::Router::use
> * popcorn::LogEntry::request
> * popcorn::Handler::all
> NLP references:
> * popcorn (0.462)
> * popcorn::Handler::all (0.382)
> * popcorn::RequestTimeHandler (0.312)
> * popcorn::Router (0.239)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.217)
> * popcorn::SessionInit (0.203)
> * popcorn::FieldsMatch::other (0.171)
> * popcorn::pop_sessions (0.167)
> * popcorn::RequestClock (0.16)
> * popcorn::GithubLogout::redirect_uri (0.151)
> * popcorn::Handler (0.149)
> * popcorn::Router::use_before (0.147)
> * popcorn::GithubLogin::redirect_uri (0.142)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.142)


We then let the `HelloHandler` produce the response.


> Span references:
> * popcorn::HelloHandler
> NLP references:
> * popcorn::LogEntry::response (0.308)
> * popcorn::HelloHandler (0.302)


Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.


> Span references:
> * popcorn::example_advanced_logger::HttpRequest::timer
> * popcorn::Router::use_after
> Text references:
> * popcorn::pop_logging::ConsoleLog::display
> * popcorn::Router::use
> * popcorn::LogEntry::request
> * popcorn::pop_logging::ConsoleLog::display
> * core::time
> * popcorn::Handler::all
> NLP references:
> * popcorn::Handler::all (0.408)
> * popcorn (0.384)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.256)
> * popcorn::ConsoleLog (0.217)
> * popcorn::GithubLogout::redirect_uri (0.199)
> * popcorn::Handler (0.192)
> * popcorn::LogEntry::request (0.181)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.177)
> * popcorn::GithubLogin::redirect_uri (0.177)
> * popcorn::pop_sessions (0.165)
> * popcorn::Router (0.16)
> * popcorn::pop_logging::HttpRequest::clock (0.153)
> * popcorn::ConsoleLog::error (0.15)
> * popcorn::RequestClock (0.149)
> * popcorn::Repository::find_all (0.147)
> * popcorn::LogEntry::user_agent (0.145)
> * popcorn::FieldsMatch::other (0.141)


The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.


> Span references:
> * popcorn::RequestTimeHandler
> * popcorn::HelloHandler
> Text references:
> * popcorn::AppThread::app
> * serialization::DeserializerCache::received
> * popcorn::pop_logging::ConsoleLog::display
> * popcorn::LogEntry::response
> * popcorn::pop_logging::ConsoleLog::display
> * popcorn::ConsoleLog::log
> NLP references:
> * popcorn (0.384)
> * popcorn::pop_logging::HttpRequest::clock (0.368)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.35)
> * popcorn::AppThread::app (0.29)
> * popcorn::App (0.255)
> * popcorn::ConsoleLog (0.223)
> * popcorn::Router (0.195)
> * popcorn::AppConfig (0.192)
> * popcorn::pop_handlers::HttpResponse::sent (0.191)
> * popcorn::ConsoleLog::log (0.184)
> * popcorn::pop_handlers::HttpResponse::send (0.181)
> * popcorn::pop_config (0.18)
> * popcorn::Handler::all (0.177)
> * popcorn::TestPopcorn::port (0.175)
> * popcorn::AppThread::port (0.172)
> * popcorn::LogEntry (0.161)


Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.


> Text references:
> * popcorn::LogEntry::request
> * popcorn::LogEntry::response
> * popcorn::Handler::all
> NLP references:
> * popcorn (0.36)
> * popcorn::ValidationResult::object (0.223)
> * popcorn::Handler::all (0.217)
> * popcorn::pop_json::Handler::BODY (0.194)
> * popcorn::LogEntry::response (0.18)
> * popcorn::pop_logging::HttpRequest::clock (0.16)
> * popcorn::App (0.156)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.152)
> * popcorn::MongoRepository::collection (0.149)
> * popcorn::ObjectValidator::validators (0.142)
> * popcorn::Handler (0.135)
> * popcorn::Router (0.132)


### Built-in middlewares


> Text references:
> * popcorn>examples>middlewares>


Starting with version 0.1, Popcorn provide a set of built-in middleware that can
be used to develop your app faster.


> Text references:
> * pthreads::pthreads::NativePthreadKey::set
> * popcorn::AppThread::app
> NLP references:
> * popcorn (0.344)
> * popcorn::pop_config (0.277)
> * popcorn::App (0.245)
> * popcorn::AppThread::app (0.245)
> * popcorn::pop_logging::HttpRequest::clock (0.216)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.205)
> * popcorn::AppConfig (0.199)
> * popcorn::Router (0.188)
> * popcorn::TestPopcorn::port (0.178)
> * popcorn::AppThread::port (0.174)
> * popcorn::pop_repos (0.171)
> * popcorn::pop_validation (0.157)
> * popcorn::TestPopcorn::host (0.155)
> * popcorn::AppThread::host (0.153)
> * popcorn::StaticHandler (0.149)


`RequestClock`: initializes requests clock.


> Span references:
> * popcorn::RequestClock
> NLP references:
> * popcorn::RequestClock (0.586)
> * popcorn::pop_logging::HttpRequest::clock (0.437)
> * popcorn::LogEntry::response_time (0.303)


`ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).


> Span references:
> * popcorn::ConsoleLog
> * popcorn::RequestClock
> Text references:
> * popcorn::LogEntry::response
> * console
> NLP references:
> * popcorn::RequestClock (0.352)
> * popcorn::HtmlErrorTemplate::status (0.324)
> * popcorn::ErrorTpl::status (0.324)
> * popcorn::pop_logging::HttpResponse::color_status (0.264)
> * popcorn::LogEntry::response (0.234)
> * popcorn (0.228)
> * popcorn::ConsoleLog (0.21)
> * popcorn::pop_json::HttpResponse::json_error (0.184)
> * popcorn::AppGlobRoute (0.165)


`SessionInit`: initializes requests session (see the `Sessions` section).


> Span references:
> * popcorn::SessionInit
> Text references:
> * popcorn::LogEntry::session
> NLP references:
> * popcorn::pop_sessions (0.586)
> * popcorn::SessionInit (0.567)
> * popcorn::LogEntry::session (0.444)
> * popcorn::AuthHandler::check_session_user (0.288)
> * popcorn::GithubUser (0.238)


`StaticServer`: serves static files (see the `Serving static files with Popcorn` section).


> Text references:
> * json::static
> NLP references:
> * popcorn::StaticHandler::static_dir (0.573)
> * popcorn::StaticHandler (0.53)
> * popcorn::StaticHandler::default_file (0.405)


`Router`: a mountable mini-app (see the `Mountable routers` section).


> Span references:
> * popcorn::Router
> NLP references:
> * popcorn::Router (0.488)
> * popcorn::AppRoute::uri_root (0.237)


## Mountable routers


> NLP references:
> * popcorn::Router (0.551)


Use the `Router` class to create modular, mountable route handlers.
A Router instance is a complete middleware and routing system; for this reason,
it is often referred to as a “mini-app”.


> Span references:
> * popcorn::Router
> Text references:
> * pthreads::pthreads::NativePthread::create
> * popcorn::Router
> * popcorn>examples>routing>
> NLP references:
> * popcorn::Router (0.708)
> * popcorn (0.459)
> * popcorn::Router::use (0.343)
> * popcorn::Handler (0.343)
> * popcorn::AppParamRoute (0.328)
> * popcorn::pop_handlers (0.261)
> * popcorn::AppGlobRoute (0.257)
> * popcorn::App (0.209)
> * popcorn::AppRoute::uri_root (0.189)
> * popcorn::Handler::get (0.187)


The following example creates a router as a module, loads a middleware handler in it,
defines some routes, and mounts the router module on a path in the main app.


> Text references:
> * nitcorn::Route::handler
> * popcorn::AppRoute::path
> * pthreads::Thread::main
> NLP references:
> * popcorn::Router (0.716)
> * popcorn (0.438)
> * popcorn::App (0.345)
> * popcorn::Router::use (0.291)
> * popcorn::Handler (0.258)
> * popcorn::AppRoute::path (0.21)


The app will now be able to handle requests to /user and /user/profile, as well
as call the `Time` middleware handler that is specific to the route.


> Text references:
> * popcorn::AppThread::app
> * popcorn::pop_handlers::Handler::handle
> * nitcorn::Route::handler
> NLP references:
> * popcorn::Router (0.514)
> * popcorn (0.487)
> * popcorn::Handler (0.368)
> * popcorn::Handler::all (0.277)
> * popcorn::pop_logging::HttpRequest::clock (0.256)
> * popcorn::App (0.254)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.243)
> * popcorn::Router::use (0.231)
> * popcorn::pop_handlers::HttpResponse::sent (0.226)
> * popcorn::AppParamRoute (0.225)
> * popcorn::GithubLogout::redirect_uri (0.208)
> * popcorn::AuthHandler (0.205)
> * popcorn::pop_auth (0.202)
> * popcorn::pop_handlers (0.198)
> * popcorn::AppThread::app (0.196)


## Error handling


> Text references:
> * core::Error
> NLP references:
> * popcorn::ValidationResult::error (0.476)
> * popcorn::ConsoleLog::error (0.392)
> * popcorn::pop_handlers::HttpResponse::error (0.349)


**Error handling** is based on middleware handlers.


> Text references:
> * core::Error
> NLP references:
> * popcorn (0.385)
> * popcorn::Router (0.291)
> * popcorn::ValidationResult::error (0.275)
> * popcorn::TrackerHandler (0.268)
> * popcorn::pop_handlers::HttpResponse::error (0.247)
> * popcorn::pop_handlers::HttpResponse::sent (0.234)
> * popcorn::ConsoleLog::error (0.226)
> * popcorn::ValidationResult::errors (0.223)
> * popcorn::AuthHandler (0.212)
> * popcorn::Handler::all (0.196)
> * popcorn::Handler (0.191)
> * popcorn::ValidationResult (0.185)
> * popcorn::pop_handlers (0.182)
> * popcorn::pop_tracker::AppConfig::tracker (0.18)
> * popcorn::DocumentValidator (0.177)


Define error-handling middlewares in the same way as other middleware handlers:


> Text references:
> * popcorn>examples>middlewares>
> * popcorn::FieldsMatch::other
> NLP references:
> * popcorn (0.405)
> * popcorn::Router (0.34)
> * popcorn::FieldsMatch::other (0.245)


In this example, every non-200 response is caught by the `SimpleErrorHandler`
that print an error in stdout.


> Span references:
> * popcorn::SimpleErrorHandler
> Text references:
> * popcorn::LogEntry::response
> * core::file::Sys::print
> NLP references:
> * popcorn::LogEntry::response (0.248)
> * popcorn::SimpleErrorHandler (0.243)
> * popcorn::ValidationResult::error (0.231)
> * popcorn (0.216)
> * popcorn::pop_handlers::HttpResponse::error (0.208)
> * popcorn::ConsoleLog::error (0.19)
> * popcorn::ValidationResult::errors (0.188)
> * popcorn::ValidationResult (0.156)
> * popcorn::PopTrackerResponseTime (0.138)
> * popcorn::TestPopcorn::host_re (0.135)


By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).


> Text references:
> * core::Queue::take
> NLP references:
> * popcorn (0.301)
> * popcorn::pop_json::Handler::BODY (0.286)
> * popcorn::ValidationResult::error (0.257)
> * popcorn::ConsoleLog::error (0.211)
> * popcorn::RepositoryQuery (0.203)
> * popcorn::Handler::all (0.189)
> * popcorn::pop_handlers::HttpResponse::error (0.188)
> * popcorn::ValidationResult::errors (0.17)
> * popcorn::StaticHandler (0.156)
> * popcorn::AuthHandler (0.15)


Here an example of the 404 custom error page in HTML:


> NLP references:
> * popcorn::ValidationResult::error (0.287)
> * popcorn::ConsoleLog::error (0.236)
> * popcorn::pop_handlers::HttpResponse::error (0.21)
> * popcorn::ValidationResult::errors (0.19)
> * popcorn::pop_handlers::HttpResponse::html (0.184)


## Sessions


> NLP references:
> * popcorn::LogEntry::session (0.554)
> * popcorn::pop_sessions (0.447)


**Sessions** can be used thanks to the built-in `SessionInit` middleware.


> Span references:
> * popcorn::SessionInit
> NLP references:
> * popcorn (0.342)
> * popcorn::pop_sessions (0.297)
> * popcorn::SessionInit (0.25)
> * popcorn::Router (0.188)
> * popcorn::AppGlobRoute (0.186)
> * popcorn::AuthHandler::check_session_user (0.177)
> * popcorn::ValidationResult (0.164)
> * popcorn::RequestClock (0.147)
> * popcorn::LogEntry::session (0.143)
> * popcorn::Handler::all (0.14)


Here a simple example of login button that define a value in the `req` session.


> Text references:
> * github::User::login
> * pthreads::AtomicInt::value
> NLP references:
> * popcorn::pop_sessions (0.366)
> * popcorn::LogEntry::session (0.261)
> * popcorn::UniqueField (0.255)
> * popcorn::pop_auth (0.204)
> * popcorn::AppRoute::match (0.203)
> * popcorn::SessionInit (0.184)


Notice the use of the `SessionInit` on the `/*` route. You must use the
`SessionInit` first to initialize the request session.
Without that, your request session will be set to `null`.
If you don't use sessions in your app, you do not need to include that middleware.


> Span references:
> * popcorn::SessionInit
> * popcorn::SessionInit
> Text references:
> * popcorn::Router::use
> * popcorn::Router::use
> * mongodb::MongoGroup::first
> * popcorn::LogEntry::request
> * popcorn::LogEntry::request
> * popcorn::LogEntry::session
> * pthreads::pthreads::NativePthreadKey::set
> * popcorn::Router::use
> NLP references:
> * popcorn::pop_sessions (0.674)
> * popcorn::SessionInit (0.433)
> * popcorn (0.417)
> * popcorn::LogEntry::session (0.321)
> * popcorn::Handler::all (0.304)
> * popcorn::AuthHandler::check_session_user (0.269)
> * popcorn::App (0.265)
> * popcorn::AuthHandler (0.23)
> * popcorn::Handler (0.22)


## Database integration


> NLP references:
> * popcorn::pop_repos::AppConfig::opt_db_name (0.305)
> * popcorn::pop_repos::AppConfig::default_db_name (0.285)


### Mongo DB


> NLP references:
> * popcorn::pop_repos::AppConfig::db (0.681)
> * popcorn::pop_repos::AppConfig::client (0.511)


If you want to persist your data, Popcorn works well with MongoDB.


> NLP references:
> * popcorn::pop_tasks (0.255)
> * popcorn::pop_repos::AppConfig::db_host (0.227)
> * popcorn::pop_repos::AppConfig::db_name (0.219)
> * popcorn::MongoRepository::collection (0.157)
> * popcorn::PopTracker (0.151)


In this example, we will show how to store and list user with a Mongo database.


> Text references:
> * popcorn::pop_auth::Session::user
> NLP references:
> * popcorn::pop_auth::Session::user (0.253)
> * popcorn::AuthHandler (0.226)
> * popcorn::PopTrackerBrowsers::browser_queries (0.193)
> * popcorn::GithubLogout::redirect_uri (0.192)
> * popcorn (0.177)
> * popcorn::pop_auth (0.159)


First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.


> Span references:
> * popcorn::pop_repos::AppConfig::db
> Text references:
> * nitcorn::Route::handler
> * popcorn::Handler::all
> * popcorn::UserList
> * nitcorn::Route::handler
> NLP references:
> * popcorn::AuthHandler (0.291)
> * popcorn (0.256)
> * popcorn::pop_repos::AppConfig::db (0.242)
> * popcorn::pop_handlers::HttpResponse::sent (0.219)
> * popcorn::UserList::db (0.216)
> * popcorn::Handler::all (0.212)
> * popcorn::TrackerHandler (0.194)
> * popcorn::pop_handlers (0.193)
> * popcorn::pop_tracker::AppConfig::tracker (0.19)
> * popcorn::Handler (0.187)
> * popcorn::pop_repos::AppConfig::opt_db_name (0.186)
> * popcorn::TrackerHandler::config (0.175)
> * popcorn::PopTrackerAPI::config (0.175)
> * popcorn::pop_repos::AppConfig::default_db_name (0.174)
> * popcorn::pop_auth::Session::user (0.172)
> * popcorn::pop_repos::AppConfig::default_db_host (0.168)
> * popcorn::pop_repos::AppConfig::client (0.163)
> * popcorn::GithubLogin (0.154)
> * popcorn::Router (0.153)
> * popcorn::UserList (0.152)


Then we define a handler that displays the user creation form on GET requests.
POST requests are used to save the user data.


> Text references:
> * nitcorn::Route::handler
> * popcorn::pop_auth::Session::user
> * popcorn::Repository::save
> * popcorn::pop_auth::Session::user
> NLP references:
> * popcorn::Handler::all (0.397)
> * popcorn::pop_auth::Session::user (0.349)
> * popcorn::AuthHandler (0.343)
> * popcorn (0.336)
> * popcorn::Handler (0.32)
> * popcorn::Handler::get (0.301)
> * popcorn::Handler::post (0.301)
> * popcorn::pop_handlers::HttpResponse::sent (0.252)
> * popcorn::AuthHandler::session_user (0.219)
> * popcorn::LogEntry::request (0.217)
> * popcorn::Repository::save (0.207)
> * popcorn::GithubUser (0.198)
> * popcorn::PopTrackerBrowsers::browser_queries (0.185)
> * popcorn::AuthHandler::check_session_user (0.184)
> * popcorn::ConsoleLog (0.181)
> * popcorn::pop_sessions (0.178)


## Angular.JS integration


> NLP references:
> * popcorn (0.029)


Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!


> NLP references:
> * popcorn (0.235)
> * popcorn::pop_tasks (0.183)
> * popcorn::App (0.18)
> * popcorn::StaticHandler (0.15)
> * popcorn::popcorn (0.14)
> * popcorn::AppConfig::opt_hostname (0.14)
> * popcorn::pop_logging::HttpRequest::clock (0.139)
> * popcorn::Handler::all (0.136)
> * popcorn::pop_sessions (0.136)
> * popcorn::example_advanced_logger::HttpRequest::timer (0.133)
> * popcorn::Handler (0.113)


Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:


> Text references:
> * popcorn::StaticHandler
> * popcorn::pop_handlers::HttpResponse::redirect
> * popcorn::Handler::all
> * popcorn>examples>angular>
> NLP references:
> * popcorn (0.386)
> * popcorn::Handler::all (0.334)
> * popcorn::AppGlobRoute (0.309)
> * popcorn::Handler (0.275)
> * popcorn::pop_handlers::HttpResponse::redirect (0.251)
> * popcorn::LogEntry::request (0.241)
> * popcorn::AppParamRoute (0.221)
> * popcorn::LogEntry (0.216)
> * popcorn::pop_sessions (0.202)
> * popcorn::Router::use (0.201)
> * popcorn::App (0.172)
> * popcorn::StaticHandler (0.168)


Because the StaticHandler will not find the angular routes as static files,
you must specify the path to the default angular controller.
In this example, the StaticHandler will redirect any unknown requests to the `index.html`
angular controller.


> Text references:
> * popcorn::StaticHandler
> * popcorn::Repository::find
> * popcorn>examples>angular>
> * json::static
> * popcorn::AppRoute::path
> * console::TermCharFormat::default
> * popcorn>examples>angular>
> * popcorn::StaticHandler
> * popcorn::pop_handlers::HttpResponse::redirect
> * popcorn>examples>angular>
> NLP references:
> * popcorn (0.372)
> * popcorn::StaticHandler (0.296)
> * popcorn::Handler (0.183)
> * popcorn::Router::use (0.179)
> * popcorn::Handler::all (0.176)
> * popcorn::pop_sessions (0.174)
> * popcorn::App (0.166)
> * popcorn::AppRoute::path (0.165)
> * popcorn::StaticHandler::default_file (0.162)
> * popcorn::pop_handlers::HttpResponse::redirect (0.154)
> * popcorn::AppParamRoute (0.143)
> * popcorn::GithubLogout::redirect_uri (0.139)


See the examples for a more detailed use case working with a JSON API.


> Text references:
> * popcorn>examples>
> * popcorn::Router::use
> NLP references:
> * popcorn::JsonRepository (0.198)
> * popcorn::pop_templates::HttpResponse::pug_file (0.179)
> * popcorn::pop_auth (0.176)
> * popcorn::pop_templates::HttpResponse::pug (0.147)
> * popcorn::PopTrackerAPI (0.147)
> * popcorn::pop_validation (0.137)
> * popcorn (0.133)
> * popcorn::pop_sessions (0.13)
> * popcorn::GithubLogin::redirect_uri (0.119)
> * popcorn::GithubOAuthCallBack::redirect_uri (0.119)
> * popcorn::UniqueField (0.117)
> * popcorn::pop_json::Handler::validator (0.114)


Total: 107 spans, 46 span names
Total: 137 blocks, 247 text matches
Total: 137 blocks, 1070 nlp names
Total: 137 blocks, 1070 nlp matches
