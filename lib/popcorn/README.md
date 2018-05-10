# `popcorn`

Web application framework for Nit.

## Overview

Main features:

* `pop_auth` - Authentification handlers.
* `pop_config` - Configuration file and options for Popcorn apps
* `pop_handlers` - Route handlers.
* `pop_json` - Introduce useful services for JSON REST API handlers.
* `pop_logging`
* `pop_repos` - Repositories for data management.
* `pop_routes` - Internal routes representation.
* `pop_sessions` - Session handlers
* `pop_tasks` - Popcorn threaded tasks
* `pop_templates` - Template rendering for popcorn
* `pop_tests` - Popcorn testing services
* `pop_tracker` - ~~~nitish
* `pop_validation` - Quick and easy validation framework for Json inputs
* `popcorn` - Application server abstraction on top of nitcorn.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `config` - Configuration options for nit tools and apps
* `console` - Defines some ANSI Terminal Control Escape Sequences.
* `csv` - CSV document handling.
* `github` - # Nit wrapper for Github API
* `json` - read and write JSON formatted text
* `mongodb` - MongoDB Nit Driver.
* `nitcorn` - Lightweight framework for Web applications development
* `pthreads` - # POSIX Threads support
* `realtime` - Services to keep time of the wall clock time
* `template` - Basic template system

## Running the tests

Run the nitunit automated tests with the following command:

~~~sh
nitunit tests/test_popcorn.sav examples/handlers/tests examples/hello_world/tests examples/middlewares/tests examples/routing/tests examples/sessions/tests examples/static_files/tests examples/templates/tests tests examples/angular/tests
~~~

## Authors

This project is maintained by **Alexandre Terrasa <alexandre@moz-code.org>**.
