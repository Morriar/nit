# `github` - Nit wrapper for Github API

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `loader`](#Run-`loader`)
* [Features](#Features)
* [`api` - Nit object oriented interface to [Github api](https://developer.github.com/v3/).](#`api`---Nit-object-oriented-interface-to-[Github-api](https://developer.github.com/v3/).)
* [`cache` - Enable caching on Github API accesses.](#`cache`---Enable-caching-on-Github-API-accesses.)
* [`events` - Events are emitted by Github Hooks.](#`events`---Events-are-emitted-by-Github-Hooks.)
* [`hooks` - Github hook event listening with `nitcorn`.](#`hooks`---Github-hook-event-listening-with-`nitcorn`.)
* [`wallet` - Github OAuth tokens management](#`wallet`---Github-OAuth-tokens-management)
* [Other features](#Other-features)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

This module provides a Nit object oriented interface to access the
[Github api](https://developer.github.com/v3/).

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `console` - Defines some ANSI Terminal Control Escape Sequences
* `curl` - Data transfer powered by the native curl library
* `json` - read and write JSON formatted text
* `nitcorn` - Lightweight framework for Web applications development
* `popcorn` - Web application framework for Nit

### Run `loader`

Compile `loader` with the following command:

~~~bash
nitc ./loader.nit
~~~

## Features

![Diagram for `github`](uml-github.svg)

### `api` - Nit object oriented interface to [Github api](https://developer.github.com/v3/).

This modules reifies Github API elements as Nit classes.

For most use-cases you need to use the `GithubAPI` client.

### `cache` - Enable caching on Github API accesses.

If `GithubAPI::enable_cache` is set to true then Github JSON responses
will be cached locally using `JsonStore`.

Cache can be used to limit the number of access on the API and lighten
the rate limit on your github key.

Usage:

~~~
var api = new GithubAPI(get_github_oauth)
api.enable_cache = true

var name = "nitlang/nit"
assert not api.has_cache(name)
var repo = api.load_repo(name) # load from GitHub
#assert api.has_cache(name) FIXME bring back this assert
repo = api.load_repo(name) # load from cache

api.clear_cache
assert not api.has_cache(name)
~~~

### `events` - Events are emitted by Github Hooks.

See <https://developer.github.com/v3/activity/events/types/>

### `hooks` - Github hook event listening with `nitcorn`.

Usage:

~~~
import github::hooks

# A simple hook listener that print received events in stdout.
class LogHookListener
   super HookListener

   # Use double dispatch to implement log behavior.
   redef fun apply_event(event) do event.log_event(self)
end

redef class GithubEvent
   # Log this event.
   #
   # Do nothing by default.
   fun log_event(l: LogHookListener) do end
end

redef class CommitCommentEvent

   redef fun log_event(l) do
       print "new comment on commit {comment.commit_id}"
   end
end

var api = new GithubAPI(get_github_oauth)
var listener = new LogHookListener(api, "127.0.0.1", 8080)
# listener.listen # uncomment to start listening
~~~

### `wallet` - Github OAuth tokens management

When using batch mode with the `github` API, we can rapidly reach the rate
limit allowed by Github.

One solution consists in using a wallet of tokens so we can rely on more than
one token and switch them when one become exhausted.

## Using the Github wallet to check tokens

One functionality of the wallet is to check the validity of a token against
the API. `check_token` will return false if a token is invalid or exhausted.

~~~
var wallet = new GithubWallet
assert not wallet.check_token("this is a bad token")
~~~

## Storing tokens

The wallet can also be used to store tokens and check all of them.

~~~
wallet = new GithubWallet
wallet.add "some token"
wallet.add "some other token"
~~~

or

~~~
wallet = new GithubWallet.from_tokens(["token 1", "token 2"])
~~~

The `show_status` method can be used to display a summary of the validity of
each token in the wallet.

~~~
wallet.show_status
~~~

Will display something like this:

~~~raw
Wallet (2 tokens):
 * [OK] token 1
 * [KO] token 2
~~~

## Using the wallet to obtain a Github API client

Using the wallet you can cycle through tokens and obtain a new Github API client
instance with a fresh rate limit.

~~~
wallet = new GithubWallet.from_tokens(["token 1", "token 2"])
var api = wallet.api
~~~

The wallet will automatically cycle through the registered tokens to find one
that works.

If no valid token is found after all of them was tried, the wallet returns a
client based on the last tried one.

## Other features

* `github_curl` - Curl extention to access the Github API
* `loader`

Then run it with:

~~~bash
loader <repo_name>
~~~

Options:

~~~bash
* -h, -?, --help		Show this help message.
* --config		Path to config file.
* --db-host		MongoDb host.
* --db-name		MongoDb database name.
* --tokens		Token list.
* --show-wallet		Show wallet status.
* -v, --verbose		Verbosity level.
* --no-colors		Do not use colors in output.
* --show-jobs		Show jobs status.
* --no-commits		Do not load commits from default branch.
* --no-issues		Do not load issues.
* --no-comments		Do not load issue comments.
* --no-events		Do not load issues events.
* --from		Start loading issues from a number.
* --clear		Clear job for given repo name.
~~~

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
