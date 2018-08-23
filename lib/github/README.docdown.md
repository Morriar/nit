# `github` - [[ini-desc: github]]

[[toc: github]]

[[doc: github::github]]

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: github]]

### Run `loader`

Compile `loader` with the following command:

[[main-compile: github::loader]]

## Features

[[uml: github | format: svg, mentities: github::api;github::cache;github::events;github::github;github::github_curl;github::hooks;github::loader;github::wallet]]

### `api` - Nit object oriented interface to [Github api](https://developer.github.com/v3/).

[[doc: github::api | no-synopsis]]

### `cache` - Enable caching on Github API accesses.

[[doc: github::cache | no-synopsis]]

### `events` - Events are emitted by Github Hooks.

[[doc: github::events | no-synopsis]]

### `hooks` - Github hook event listening with `nitcorn`.

[[doc: github::hooks | no-synopsis]]

### `wallet` - Github OAuth tokens management

[[doc: github::wallet | no-synopsis]]

## Other features

[[features: github | mentities: github::github_curl;github::loader]]

Then run it with:

[[main-run: github::loader]]

Options:

[[main-opts: github::loader]]

## Running the tests

Run the nitunit automated tests with the following command:

[[testing: github]]

## Authors

This project is maintained by [[ini-maintainer: github]].
