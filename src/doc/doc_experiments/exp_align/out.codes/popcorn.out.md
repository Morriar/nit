[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: HelloHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:1.0, tid: res:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$html(1):1.0, call: popcorn::pop_handlers::HttpResponse::html(1):1.0, call: nitcorn::HttpResponse:1.0, tid: html:1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::HelloHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: MyHandler:1.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:2.0, tid: res:4.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):2.0, call: popcorn::pop_handlers::HttpResponse::send(1):2.0, call: nitcorn::HttpResponse:2.0, tid: send:2.0, redef: popcorn$Handler$post:1.0, redef: popcorn::Handler::post:1.0, tid: post:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:2.0, tid: App:1.0, tid: use:1.0, tid: MyHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: MyHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: StaticHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:2.0, tid: use:2.0, tid: StaticHandler:2.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: StaticHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: StaticHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: HelloHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:1.0, tid: res:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, tid: app:2.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:1.0, tid: use:1.0, new: ::HelloHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: GetPostHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:2.0, tid: res:4.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):2.0, call: popcorn::pop_handlers::HttpResponse::send(1):2.0, call: nitcorn::HttpResponse:2.0, tid: send:2.0, redef: popcorn$Handler$post:1.0, redef: popcorn::Handler::post:1.0, tid: post:1.0, tid: app:2.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:1.0, tid: use:1.0, new: ::GetPostHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, import: template::template:1.0, tid: template:1.0, tid: QueryStringHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:4.0, tid: res:2.0, tid: tpl:5.0, new: template::Template:1.0, tid: Template:1.0, call: template$Template$addn(1):3.0, call: template::Template::addn(1):3.0, call: template::Template:3.0, tid: addn:3.0, call: nitcorn$HttpRequest$uri(0):1.0, call: nitcorn::HttpRequest::uri(0):1.0, call: nitcorn::HttpRequest:3.0, tid: uri:1.0, call: nitcorn$HttpRequest$query_string(0):1.0, call: nitcorn::HttpRequest::query_string(0):1.0, tid: query_string:1.0, tid: name:2.0, tid: arg:2.0, call: nitcorn$HttpRequest$get_args(0):1.0, call: nitcorn::HttpRequest::get_args(0):1.0, tid: get_args:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::QueryStringHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, import: template::template:1.0, tid: template:1.0, tid: PostHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$post:1.0, redef: popcorn::Handler::post:1.0, tid: post:1.0, tid: req:4.0, tid: res:2.0, tid: tpl:5.0, new: template::Template:1.0, tid: Template:1.0, call: template$Template$addn(1):3.0, call: template::Template::addn(1):3.0, call: template::Template:3.0, tid: addn:3.0, call: nitcorn$HttpRequest$uri(0):1.0, call: nitcorn::HttpRequest::uri(0):1.0, call: nitcorn::HttpRequest:3.0, tid: uri:1.0, call: nitcorn$HttpRequest$body(0):1.0, call: nitcorn::HttpRequest::body(0):1.0, tid: body:1.0, tid: name:2.0, tid: arg:2.0, call: nitcorn$HttpRequest$post_args(0):1.0, call: nitcorn::HttpRequest::post_args(0):1.0, tid: post_args:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::PostHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: AllHandler:1.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, tid: req:1.0, tid: res:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: MergeHandler:1.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, tid: req:2.0, tid: res:1.0, call: core$Text$Object::==(1):1.0, call: core::Object::==(1):1.0, call: core::String:1.0, call: nitcorn$HttpRequest$method(0):1.0, call: nitcorn::HttpRequest::method(0):1.0, call: nitcorn::HttpRequest:1.0, tid: method:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: MyHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:1.0, tid: res:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, tid: app:2.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:1.0, tid: use:1.0, new: ::MyHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: MyHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[tid: app:1.0, tid: use:1.0, tid: MyHandler:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: UserHome:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:2.0, tid: res:3.0, tid: user:3.0, call: nitcorn::vararg_routes$HttpRequest$param(1):1.0, call: nitcorn::vararg_routes::HttpRequest::param(1):1.0, call: nitcorn::HttpRequest:1.0, tid: param:1.0, call: core$Object$!=(1):1.0, call: core::Object::!=(1):1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:2.0, tid: send:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(2):1.0, call: popcorn::pop_handlers::HttpResponse::send(2):1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::UserHome:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: UserItem:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:3.0, tid: res:3.0, tid: user:3.0, call: nitcorn::vararg_routes$HttpRequest$param(1):2.0, call: nitcorn::vararg_routes::HttpRequest::param(1):2.0, call: nitcorn::HttpRequest:2.0, tid: param:2.0, tid: item:3.0, call: core$Text$Object::==(1):2.0, call: core::Object::==(1):2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(2):1.0, call: popcorn::pop_handlers::HttpResponse::send(2):1.0, call: nitcorn::HttpResponse:2.0, tid: send:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::UserItem:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: MyLogger:2.0, super: popcorn$Handler:2.0, super: popcorn::Handler:2.0, tid: Handler:2.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, tid: req:2.0, tid: res:3.0, call: pthreads::pthreads$core::Sys$print(1):1.0, call: core::file::Sys::print(1):1.0, call: core::Sys:1.0, tid: print:1.0, tid: HelloHandler:2.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, call: nitcorn::HttpResponse:1.0, tid: send:1.0, tid: app:4.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use_before(2):1.0, call: popcorn::Router::use_before(2):1.0, call: popcorn::App:3.0, tid: use_before:1.0, new: ::MyLogger:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, tid: use:1.0, new: ::HelloHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, import: realtime::realtime:1.0, tid: realtime:1.0, redef: $nitcorn::HttpRequest:1.0, redef: nitcorn::HttpRequest:1.0, tid: HttpRequest:1.0, tid: timer:6.0, tid: Clock:2.0, tid: RequestTimeHandler:2.0, super: popcorn$Handler:3.0, super: popcorn::Handler:3.0, tid: Handler:3.0, redef: popcorn$Handler$all:2.0, redef: popcorn::Handler::all:2.0, tid: all:2.0, tid: req:9.0, tid: res:6.0, call: $nitcorn::HttpRequest$timer=(1):1.0, call: ::HttpRequest::timer=(1):1.0, call: nitcorn::HttpRequest:6.0, new: realtime::Clock:1.0, tid: LogHandler:2.0, call: $nitcorn::HttpRequest$timer(0):1.0, call: ::HttpRequest::timer(0):1.0, call: core$Object$!=(1):1.0, call: core::Object::!=(1):1.0, call: pthreads::pthreads$core::Sys$print(1):2.0, call: core::file::Sys::print(1):2.0, call: core::Sys:2.0, tid: print:2.0, call: nitcorn$HttpRequest$method(0):2.0, call: nitcorn::HttpRequest::method(0):2.0, tid: method:2.0, call: nitcorn$HttpRequest$uri(0):2.0, call: nitcorn::HttpRequest::uri(0):2.0, tid: uri:2.0, call: popcorn::pop_logging$nitcorn::HttpResponse$color_status(0):2.0, call: popcorn::pop_logging::HttpResponse::color_status(0):2.0, call: nitcorn::HttpResponse:3.0, tid: color_status:2.0, call: realtime$Clock$total(0):1.0, call: realtime::Clock::total(0):1.0, call: realtime::Clock:1.0, tid: total:1.0, tid: HelloHandler:2.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, tid: send:1.0, tid: app:5.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use_before(2):1.0, call: popcorn::Router::use_before(2):1.0, call: popcorn::App:4.0, tid: use_before:1.0, new: ::RequestTimeHandler:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, tid: use:1.0, new: ::HelloHandler:1.0, call: popcorn$Router$use_after(2):1.0, call: popcorn::Router::use_after(2):1.0, tid: use_after:1.0, new: ::LogHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: AppHome:2.0, super: popcorn$Handler:4.0, super: popcorn::Handler:4.0, tid: Handler:4.0, redef: popcorn$Handler$get:3.0, redef: popcorn::Handler::get:3.0, tid: get:3.0, tid: req:4.0, tid: res:7.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):3.0, call: popcorn::pop_handlers::HttpResponse::send(1):3.0, call: nitcorn::HttpResponse:3.0, tid: send:3.0, tid: UserLogger:2.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, call: pthreads::pthreads$core::Sys$print(1):1.0, call: core::file::Sys::print(1):1.0, call: core::Sys:1.0, tid: print:1.0, tid: UserHome:2.0, tid: UserProfile:2.0, tid: user_router:5.0, new: popcorn::Router:1.0, tid: Router:1.0, call: popcorn$Router$use(2):5.0, call: popcorn::Router::use(2):5.0, call: popcorn::Router:3.0, tid: use:5.0, new: ::UserLogger:1.0, new: ::UserHome:1.0, new: ::UserProfile:1.0, tid: app:4.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn::App:3.0, new: ::AppHome:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: SimpleErrorHandler:2.0, super: popcorn$Handler:2.0, super: popcorn::Handler:2.0, tid: Handler:2.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, tid: req:2.0, tid: res:5.0, call: core$Int$Object::!=(1):1.0, call: core::Object::!=(1):1.0, call: core::Int:1.0, call: nitcorn$HttpResponse$status_code(0):2.0, call: nitcorn::HttpResponse::status_code(0):2.0, call: nitcorn::HttpResponse:3.0, tid: status_code:2.0, call: pthreads::pthreads$core::Sys$print(1):1.0, call: core::file::Sys::print(1):1.0, call: core::Sys:1.0, tid: print:1.0, tid: HelloHandler:2.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, tid: send:1.0, tid: app:4.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):2.0, call: popcorn::Router::use(2):2.0, call: popcorn::App:3.0, tid: use:2.0, new: ::HelloHandler:1.0, new: ::SimpleErrorHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, import: template::template:1.0, tid: template:1.0, tid: HtmlErrorTemplate:2.0, super: template$Template:1.0, super: template::Template:1.0, tid: Template:1.0, tid: status:3.0, tid: Int:1.0, tid: message:3.0, tid: String:1.0, redef: template$Template$rendering:1.0, redef: template::Template::rendering:1.0, tid: rendering:1.0, call: template$Template$add(1):1.0, call: template::Template::add(1):1.0, call: ::HtmlErrorTemplate:5.0, tid: add:1.0, call: $HtmlErrorTemplate$message(0):2.0, call: ::HtmlErrorTemplate::message(0):2.0, call: $HtmlErrorTemplate$status(0):2.0, call: ::HtmlErrorTemplate::status(0):2.0, tid: HtmlErrorHandler:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$all:1.0, redef: popcorn::Handler::all:1.0, tid: all:1.0, tid: req:1.0, tid: res:4.0, call: core$Int$Object::!=(1):1.0, call: core::Object::!=(1):1.0, call: core::Int:1.0, call: nitcorn$HttpResponse$status_code(0):2.0, call: nitcorn::HttpResponse::status_code(0):2.0, call: nitcorn::HttpResponse:3.0, tid: status_code:2.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$send(1):1.0, call: popcorn::pop_handlers::HttpResponse::send(1):1.0, tid: send:1.0, new: ::HtmlErrorTemplate:1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: ::HtmlErrorHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, redef: $nitcorn::Session:1.0, redef: nitcorn::Session:1.0, tid: Session:1.0, tid: is_logged:3.0, tid: AppLogin:2.0, super: popcorn$Handler:1.0, super: popcorn::Handler:1.0, tid: Handler:1.0, redef: popcorn$Handler$get:1.0, redef: popcorn::Handler::get:1.0, tid: get:1.0, tid: req:4.0, tid: res:4.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$html(1):1.0, call: popcorn::pop_handlers::HttpResponse::html(1):1.0, call: nitcorn::HttpResponse:2.0, tid: html:1.0, call: $nitcorn::Session$is_logged(0):1.0, call: ::Session::is_logged(0):1.0, call: nitcorn::Session:2.0, call: nitcorn::sessions$HttpRequest$session(0):2.0, call: nitcorn::sessions::HttpRequest::session(0):2.0, call: nitcorn::HttpRequest:2.0, tid: session:2.0, redef: popcorn$Handler$post:1.0, redef: popcorn::Handler::post:1.0, tid: post:1.0, call: $nitcorn::Session$is_logged=(1):1.0, call: ::Session::is_logged=(1):1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$redirect(1):1.0, call: popcorn::pop_handlers::HttpResponse::redirect(1):1.0, tid: redirect:1.0, tid: app:4.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use_before(2):1.0, call: popcorn::Router::use_before(2):1.0, call: popcorn::App:3.0, tid: use_before:1.0, new: popcorn::SessionInit:1.0, tid: SessionInit:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, tid: use:1.0, new: ::AppLogin:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, import: mongodb::mongodb:1.0, tid: mongodb:1.0, import: template::template:1.0, tid: template:1.0, tid: UserList:2.0, super: popcorn$Handler:2.0, super: popcorn::Handler:2.0, tid: Handler:2.0, tid: db:7.0, tid: MongoDb:2.0, redef: popcorn$Handler$get:2.0, redef: popcorn::Handler::get:2.0, tid: get:2.0, tid: req:5.0, tid: res:6.0, tid: users:2.0, call: mongodb$MongoCollection$find_all(1):1.0, call: mongodb::MongoCollection::find_all(1):1.0, call: mongodb::MongoCollection:2.0, call: mongodb$MongoDb$collection(1):2.0, call: mongodb::MongoDb::collection(1):2.0, call: mongodb::MongoDb:2.0, call: $UserList$db(0):1.0, call: ::UserList::db(0):1.0, call: ::UserList:1.0, tid: collection:2.0, tid: find_all:1.0, new: json::JsonObject:2.0, tid: JsonObject:2.0, tid: tpl:9.0, new: template::Template:2.0, tid: Template:2.0, call: template$Template$add(1):5.0, call: template::Template::add(1):5.0, call: template::Template:5.0, tid: add:5.0, tid: user:3.0, call: core$HashMap$MapRead::[](1):4.0, call: core::MapRead::[](1):4.0, call: json::JsonObject:4.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$html(1):2.0, call: popcorn::pop_handlers::HttpResponse::html(1):2.0, call: nitcorn::HttpResponse:3.0, tid: html:2.0, tid: UserForm:2.0, redef: popcorn$Handler$post:1.0, redef: popcorn::Handler::post:1.0, tid: post:1.0, tid: json:4.0, call: core$HashMap$Map::[]=(2):2.0, call: core::Map::[]=(2):2.0, call: core::HashMap:2.0, call: nitcorn$HttpRequest$post_args(0):2.0, call: nitcorn::HttpRequest::post_args(0):2.0, call: nitcorn::HttpRequest:2.0, tid: post_args:2.0, call: mongodb$MongoCollection$insert(1):1.0, call: mongodb::MongoCollection::insert(1):1.0, call: $UserForm$db(0):1.0, call: ::UserForm::db(0):1.0, call: ::UserForm:1.0, tid: insert:1.0, call: popcorn::pop_handlers$nitcorn::HttpResponse$redirect(1):1.0, call: popcorn::pop_handlers::HttpResponse::redirect(1):1.0, tid: redirect:1.0, tid: mongo:2.0, new: mongodb::MongoClient:1.0, tid: MongoClient:1.0, call: mongodb$MongoClient$database(1):1.0, call: mongodb::MongoClient::database(1):1.0, call: mongodb::MongoClient:1.0, tid: database:1.0, tid: app:4.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):2.0, call: popcorn::Router::use(2):2.0, call: popcorn::App:3.0, tid: use:2.0, new: ::UserList:1.0, new: ::UserForm:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
[import: popcorn::popcorn:1.0, tid: popcorn:1.0, tid: app:3.0, new: popcorn::App:1.0, tid: App:1.0, call: popcorn$Router$use(2):1.0, call: popcorn::Router::use(2):1.0, call: popcorn::App:2.0, tid: use:1.0, new: popcorn::StaticHandler:1.0, tid: StaticHandler:1.0, call: popcorn::popcorn$App$listen(2):1.0, call: popcorn::popcorn::App::listen(2):1.0, tid: listen:1.0, +in: popcorn:1.0, +is_example: true:1.0, +kind: MModule:1.0]
# Popcorn

**Why endure plain corn when you can pop it?!**

Popcorn is a minimal yet powerful nit web application framework that provides cool
features for lazy developpers.

Popcorn is built over nitcorn to provide a clean and user friendly interface
without all the boiler plate code.

## What does it taste like?

Set up is quick and easy as 10 lines of code.
Create a file `app.nit` and add the following code:

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

> example: popcorn::example_hello

The Popcorn app listens on port 3000 for connections.
The app responds with "Hello World!" for requests to the root URL (`/`) or **route**.
For every other path, it will respond with a **404 Not Found**.

The `req` (request) and `res` (response) parameters are the same that nitcorn provides
so you can do anything else you would do in your route without Popcorn involved.

Run the app with the following command:

~~~bash
$ nitc app.nit && ./app
~~~

Then, load [http://localhost:3000](http://localhost:3000) in a browser to see the output.

Here the output using the `curl` command:

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

## Basic routing

**Routing** refers to determining how an application responds to a client request
to a particular endpoint, which is a URI (or path) and a specific HTTP request
method GET, POST, PUT or DELETE (other methods are not suported yet).

Each route can have one or more handler methods, which are executed when the route is matched.

Route handlers definition takes the following form:

~~~nitish
import popcorn

class MyHandler
	super Handler

	redef fun METHOD(req, res) do end
end
~~~

Where:

* `MyHandler` is the name of the handler you will add to the app.
* `METHOD` can be replaced by `get`, `post`, `put` or `delete`.

The following example responds to GET and POST requests:

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
	redef fun post(req, res) do res.send "Got a POST request"
end
~~~

> example: popcorn::example_router

To make your handler responds to a specific route, you have to add it to the app.

Respond to POST request on the root route (`/`), the application's home page:

~~~
var app = new App
app.use("/", new MyHandler)
~~~

> example: popcorn::example_static_default

Respond to a request to the `/user` route:

~~~
app.use("/user", new MyHandler)
~~~

> example: popcorn::example_static_multiple

For more details about routing, see the routing section.

## Serving static files with Popcorn

To serve static files such as images, CSS files, and JavaScript files, use the
Popcorn built-in handler `StaticHandler`.

Pass the name of the directory that contains the static assets to the StaticHandler
init method to start serving the files directly.
For example, use the following code to serve images, CSS files, and JavaScript files
in a directory named `public`:

~~~
app.use("/", new StaticHandler("public/"))
~~~

> example: popcorn::example_static_multiple

Now, you can load the files that are in the `public` directory:

~~~raw
http://localhost:3000/images/trollface.jpg
http://localhost:3000/css/style.css
http://localhost:3000/js/app.js
http://localhost:3000/hello.html
~~~

Popcorn looks up the files relative to the static directory, so the name of the
static directory is not part of the URL.
To use multiple static assets directories, add the `StaticHandler` multiple times:

~~~
app.use("/", new StaticHandler("public/"))
app.use("/", new StaticHandler("files/"))
~~~

> example: popcorn::example_static_multiple

Popcorn looks up the files in the order in which you set the static directories
with the `use` method.

To create a virtual path prefix (where the path does not actually exist in the file system)
for files that are served by the `StaticHandler`, specify a mount path for the
static directory, as shown below:

~~~
app.use("/static/", new StaticHandler("public/"))
~~~

> example: popcorn::example_static_multiple

Now, you can load the files that are in the public directory from the `/static`
path prefix.

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

In some cases, you can want to redirect request to static files to a default file
instead of returning a 404 error.
This can be achieved by specifying a default file in the StaticHandler:

~~~
app.use("/static/", new StaticHandler("public/", "default.html"))
~~~

> example: popcorn::example_static_multiple

This way all non-matched queries to the StaticHandler will be answered with the
`default.html` file.

## Advanced Routing

**Routing** refers to the definition of application end points (URIs) and how
they respond to client requests. For an introduction to routing, see the Basic routing
section.

The following code is an example of a very basic route.

~~~
import popcorn

class HelloHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use("/", new HelloHandler)
~~~

> example: popcorn::example_hello

### Route methods

A **route method** is derived from one of the HTTP methods, and is attached to an
instance of the Handler class.

The following code is an example of routes that are defined for the GET and the POST
methods to the root of the app.

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

> example: popcorn::example_simple_error_handler

Popcorn supports the following routing methods that correspond to HTTP methods:
get, post, put, and delete.

The request query string is accessed through the `req` parameter:

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

> example: popcorn::example_query_string

Post parameters can also be accessed through the `req` parameter:

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

> example: popcorn::example_post_handler

There is a special routing method, `all(res, req)`, which is not derived from any
HTTP method. This method is used to respond at a path for all request methods.

In the following example, the handler will be executed for requests to "/user"
whether you are using GET, POST, PUT, DELETE, or any other HTTP request method.

~~~
import popcorn

class AllHandler
	super Handler

	redef fun all(req, res) do res.send "Every request to the homepage"
end
~~~

> example: popcorn::example_simple_error_handler

Using the `all` method you can also implement other HTTP request methods.

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

> example: popcorn::example_advanced_logger

### Route paths

**Route paths**, in combination with a request handlers, define the endpoints at
which requests can be made.
Route paths can be strings, parameterized strings or glob patterns.
Query strings such as `?q=foo`are not part of the route path.

Popcorn uses the `AppRoute::match(uri)` method to match the route paths.

Here are some examples of route paths based on strings.

This route path will match requests to the root route, `/`.

~~~
import popcorn

class MyHandler
	super Handler

	redef fun get(req, res) do res.send "Got a GET request"
end

var app = new App
app.use("/", new MyHandler)
~~~

> example: popcorn::example_router

This route path will match requests to `/about`.

~~~
app.use("/about", new MyHandler)
~~~

> example: popcorn::example_static_multiple

This route path will match requests to `/random.text`.

~~~
app.use("/random.text", new MyHandler)
~~~

> example: popcorn::example_static_multiple

During the query/response process, routes are matched by order of declaration
through the `App::use` method.

The app declared in this example will try to match the routes in this order:

1. `/`
2. `/about`
3. `/random.text`

### Route parameters

**Route parameters** are variable parts of a route path. They can be used to path
arguments within the URI.
Parameters in a route are prefixed with a colon `:` like in `:userId`, `:year`.

The following example declares a handler `UserHome` that responds with the `user`
name.

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

> example: popcorn::example_param_route

The `UserHome` handler listen to every path matching `/:user`. This can be `/Morriar`,
`/10`, ... but not `/Morriar/profile` since route follow the strict matching rule.

### Glob routes

**Glob routes** are routes that match only on a prefix, thus accepting a wider range
of URI.
Glob routes end with the symbol `*`.

Here we define a `UserItem` handler that will respond to any URI matching the prefix
`/user/:user/item/:item`.
Note that glob route are compatible with route parameters.

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

> example: popcorn::example_glob_route

## Response methods

The methods on the response object (`res`), can is used to manipulate the
request-response cycle.
If none of these methods are called from a route handler, the client request will
receive a `404 Not found` error.

* `res.html()` Send a HTML response.
* `res.json()` Send a JSON response.
* `res.redirect()` Redirect a request.
* `res.send()` Send a response of various types.
* `res.error()` Set the response status code and send its message as the response body.

## Response cycle

When the popcorn `App` receives a request, the response cycle is the following:

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

## Middlewares

### Overview

**Middleware** handlers are handlers that typically do not send `HttpResponse` responses.
Middleware handlers can perform the following tasks:

* Execute any code.
* Make changes to the request and the response objects.
* End its action and pass to the next handler in the stack.

If a middleware handler makes a call to `res.send()`, it provoques the end the
request-response cycle and the response is sent to the client.

### Ultra simple logger example

Here is an example of a simple “Hello World” Popcorn application.
We add a middleware handler to the application called MyLogger that prints a simple
log message in the app stdout.

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

> example: popcorn::example_simple_logger

By using the `MyLogger` handler to the route `/*` we ensure that every requests
(even 404 ones) pass through the middleware handler.
This handler just prints “Request Logged!” when a request is received.

Be default, the order of middleware execution is that are loaded first are also executed first.
To ensure our middleware `MyLogger` will be executed before all the other, we add it
with the `use_before` method.

### Ultra cool, more advanced logger example

Next, we’ll create a middleware handler called “LogHandler” that prints the requested
uri, the response status and the time it took to Popcorn to process the request.

This example gives a simplified version of the `RequestClock` and `ConsoleLog` middlewares.

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

> example: popcorn::example_advanced_logger

First, we attach a new attribute `timer` to every `HttpRequest`.
Doing so we can access our data from all handlers that import our module, directly
from the `req` parameter.

We use the new middleware called `RequestTimeHandler` to initialize the request timer.
Because of the `use_before` method, the `RequestTimeHandler` middleware will be executed
before all the others.

We then let the `HelloHandler` produce the response.

Finally, our `LogHandler` will display a bunch of data and use the request `timer`
to display the time it took to process the request.
Because of the `use_after` method, the `LogHandler` middleware will be executed after
all the others.

The app now uses the `RequestTimeHandler` middleware for every requests received
by the Popcorn app.
The page is processed the `HelloHandler` to display the index page.
And, before every response is sent, the `LogHandler` is activated to display the
log line.

Because you have access to the request object, the response object, and all the
Popcorn API, the possibilities with middleware functions are endless.

### Built-in middlewares

Starting with version 0.1, Popcorn provide a set of built-in middleware that can
be used to develop your app faster.

* `RequestClock`: initializes requests clock.
* `ConsoleLog`: displays resquest and response status in console (can be used with `RequestClock`).
* `SessionInit`: initializes requests session (see the `Sessions` section).
* `StaticHandler`: serves static files (see the `Serving static files with Popcorn` section).
* `Router`: a mountable mini-app (see the `Mountable routers` section).

## Mountable routers

Use the `Router` class to create modular, mountable route handlers.
A Router instance is a complete middleware and routing system; for this reason,
it is often referred to as a “mini-app”.

The following example creates a router as a module, loads a middleware handler in it,
defines some routes, and mounts the router module on a path in the main app.

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

> example: popcorn::example_router

The app will now be able to handle requests to /user and /user/profile, as well
as call the `Time` middleware handler that is specific to the route.

## Error handling

**Error handling** is based on middleware handlers.

Define error-handling middlewares in the same way as other middleware handlers:

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

> example: popcorn::example_simple_error_handler

In this example, every non-200 response is caught by the `SimpleErrorHandler`
that print an error in stdout.

By defining multiple middleware error handlers, you can take multiple action depending
on the kind of error or the kind of interface you provide (HTML, XML, JSON...).

Here an example of the 404 custom error page in HTML:

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

> example: popcorn::example_html_error_handler

## Sessions

**Sessions** can be used thanks to the built-in `SessionInit` middleware.

Here a simple example of login button that define a value in the `req` session.

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

> example: popcorn::example_session

Notice the use of the `SessionInit` on the `/*` route. You must use the
`SessionInit` first to initialize the request session.
Without that, your request session will be set to `null`.
If you don't use sessions in your app, you do not need to include that middleware.

## Database integration

### Mongo DB

If you want to persist your data, Popcorn works well with MongoDB.

In this example, we will show how to store and list user with a Mongo database.

First let's define a handler that access the database to list all the user.
The mongo database reference is passed to the UserList handler through the `db` attribute.

Then we define a handler that displays the user creation form on GET requests.
POST requests are used to save the user data.

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

> example: popcorn::example_mongodb

## Angular.JS integration

Loving [AngularJS](https://angularjs.org/)? Popcorn is made for Angular and for you!

Using the StaticHandler with a glob route, you can easily redirect all HTTP requests
to your angular controller:

~~~
import popcorn

var app = new App
app.use("/*", new StaticHandler("my-ng-app/", "index.html"))
app.listen("localhost", 3000)
~~~

> example: popcorn::example_static_default

Because the StaticHandler will not find the angular routes as static files,
you must specify the path to the default angular controller.
In this example, the StaticHandler will redirect any unknown requests to the `index.html`
angular controller.

See the examples for a more detailed use case working with a JSON API.

