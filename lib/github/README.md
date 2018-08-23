# `github` - Nit wrapper for Github API

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `loader`](#Run-`loader`)
* [Accessing the API](#Accessing-the-API)
* [`GithubAPI` - # Client to Github API](#`GithubAPI`---#-Client-to-Github-API)
* [Authentification](#Authentification)
* [`get_github_oauth` - # Gets the Github token from `git` configuration](#`get_github_oauth`---#-Gets-the-Github-token-from-`git`-configuration)
* [Retrieving user data](#Retrieving-user-data)
* [`load_user` - # Get the Github user with `login`](#`load_user`---#-Get-the-Github-user-with-`login`)
* [`User` - # A Github user](#`User`---#-A-Github-user)
* [Retrieving repo data](#Retrieving-repo-data)
* [`load_repo` - # Get the Github repo with `full_name`.](#`load_repo`---#-Get-the-Github-repo-with-`full_name`.)
* [`Repo` - # A Github repository.](#`Repo`---#-A-Github-repository.)
* [Other data](#Other-data)
* [Advanced uses](#Advanced-uses)
* [Caching](#Caching)
* [Custom requests](#Custom-requests)
* [`get` - # Execute a GET request on Github API.](#`get`---#-Execute-a-GET-request-on-Github-API.)
* [Change the user agent](#Change-the-user-agent)
* [`user_agent` - # User agent used for HTTP requests.](#`user_agent`---#-User-agent-used-for-HTTP-requests.)
* [Debugging](#Debugging)
* [`verbose_lvl` - # Verbosity level.](#`verbose_lvl`---#-Verbosity-level.)
* [Using with GitLab](#Using-with-GitLab)
* [`api_url` - # Github API base url.](#`api_url`---#-Github-API-base-url.)
* [Creating hooks](#Creating-hooks)
* [`hooks` - # Github hook event listening with `nitcorn`.](#`hooks`---#-Github-hook-event-listening-with-`nitcorn`.)
* [Dealing with events](#Dealing-with-events)
* [`GithubEvent` - # Github event stub.](#`GithubEvent`---#-Github-event-stub.)
* [Running the tests](#Running-the-tests)
* [Authors](#Authors)

This module provides a Nit object oriented interface to access the Github api.

* `api` - Nit object oriented interface to [Github api](https://developer.github.com/v3/).
* `cache` - Enable caching on Github API accesses.
* `events` - Events are emitted by Github Hooks.
* `github` - Nit wrapper for Github API
* `github_curl` - Curl extention to access the Github API
* `hooks` - Github hook event listening with `nitcorn`.
* `loader`
* `wallet` - Github OAuth tokens management

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `console` - Defines some ANSI Terminal Control Escape Sequences.
* `curl` - Data transfer powered by the native curl library
* `json` - read and write JSON formatted text
* `nitcorn` - Lightweight framework for Web applications development
* `popcorn` - Web application framework for Nit

### Run `loader`

![Diagram for `github`](uml-github.svg)

Compile `loader` with the following command:

~~~bash
nitc ./loader.nit
~~~

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

## Accessing the API

### `GithubAPI` - # Client to Github API

To access the API you need an instance of a `GithubAPI` client.

~~~
import github

# Get Github authentification token.
var token = get_github_oauth
assert not token.is_empty

# Init the client.
var api = new GithubAPI(token)
~~~

The API client allows you to get Github API entities.

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo != null
assert repo.name == "nit"

var user = api.load_user("Morriar")
assert user != null
assert user.login == "Morriar"
~~~

* `Branch` - A Github branch.
* `BranchRepo`
* `Comment` - A Github comment
* `Commit` - A Github commit.
* `CommitComment` - A comment made on a commit.
* `CommitCommentEvent` - Triggered when a commit comment is created.
* `CommitRepo`
* `ContributorStats` - Should be accessed from `Repo::contrib_stats`.
* `CreateEvent` - Triggered when a repository, branch, or tag is created.
* `DeleteEvent` - Triggered when a branch or a tag is deleted.
* `DeploymentEvent` - Triggered when a new snapshot is deployed.
* `DeploymentStatusEvent` - Triggered when a deployement's status changes.
* `ForkEvent` - Triggered when a user forks a repository.
* `GitCommit` - A Git Commit representation
* `GitUser` - Git user authoring data
* `GithubAPI` - Client to Github API
* `GithubCurl` - Specific Curl that know hot to talk to the github API
* `GithubDeserializer` - JsonDeserializer specific for Github objects.
* `GithubEntity` - Something returned by the Github API.
* `GithubError` - An error thrown by the Github API.
* `GithubEvent` - Github event stub.
* `GithubFile` - A Github file representation.
* `GithubWallet` - Github OAuth tokens wallet
* `HookListener` - A nitcorn listener for Github hooks.
* `Issue` - A Github issue.
* `IssueComment` - Comments made on Github issue and pull request pages.
* `IssueCommentEvent` - Triggered when an issue comment is created.
* `IssueCommentRepo`
* `IssueEvent` - An event that occurs on a Github `Issue`.
* `IssueEventRepo`
* `IssueRepo`
* `IssuesEvent` - Triggered when an event occurs on an issue.
* `Label` - A Github label.
* `Loader`
* `LoaderConfig` - Loader configuration file
* `LoaderJob` - Loader status by repo
* `LoaderJobRepo` - Loader status repository
* `MemberEvent` - Triggered when a user is added as a collaborator to a repository.
* `Milestone` - A Github milestone.
* `PullRef` - A pull request reference (used for head and base).
* `PullRequest` - A Github pull request.
* `PullRequestEvent` - Triggered when an event occurs on a pull request.
* `PullRequestRepo`
* `PullRequestReviewCommentEvent` - Triggered when a comment is created on a pull request diff.
* `PushEvent` - Triggered when a repository branch is pushed to.
* `RenameAction` - A rename action maintains the name before and after a renaming action.
* `Repo` - A Github repository.
* `RepoEntity`
* `RepoRepo`
* `ReviewComment` - Comments made on Github pull request diffs.
* `StatusEvent` - Triggered when the status of a Git commit changes.
* `User` - A Github user

### Authentification

Token can also be recovered from user config with `get_github_oauth`.

### `get_github_oauth` - # Gets the Github token from `git` configuration

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

### Retrieving user data

### `load_user` - # Get the Github user with `login`

Loads the `User` from the API or returns `null` if the user cannot be found.

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~

### `User` - # A Github user

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

* `api$User$SELF` - # Type of this instance, automatically specialized in every class

* `_avatar_url` - # Avatar image url for this user.

* `_blog` - # User public blog if any.

* `_email` - # User public email if any.

* `_login` - # Github login.

* `_name` - # User public name if any.

* `avatar_url` - # Avatar image url for this user.

* `avatar_url=` - # Avatar image url for this user.

* `blog` - # User public blog if any.

* `blog=` - # User public blog if any.

* `api$User$core_serialize_to` - # Actual serialization of `self` to `serializer`

* `email` - # User public email if any.

* `email=` - # User public email if any.

* `api$User$from_deserializer` - # Create an instance of this class from the `deserializer`

* `api$User$init`

* `login` - # Github login.

* `login=` - # Github login.

* `name` - # User public name if any.

* `name=` - # User public name if any.

### Retrieving repo data

### `load_repo` - # Get the Github repo with `full_name`.

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

### `Repo` - # A Github repository.

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

* `api$Repo$SELF` - # Type of this instance, automatically specialized in every class

* `_default_branch` - # Repo default branch name.

* `_full_name` - # Repo full name on Github.

* `_mongo_id`

* `_name` - # Repo short name on Github.

* `_owner` - # Get the repo owner.

* `loader$Repo$core_serialize_to` - # Actual serialization of `self` to `serializer`

* `api$Repo$core_serialize_to` - # Actual serialization of `self` to `serializer`

* `default_branch` - # Repo default branch name.

* `default_branch=` - # Repo default branch name.

* `api$Repo$from_deserializer` - # Create an instance of this class from the `deserializer`

* `loader$Repo$from_deserializer` - # Create an instance of this class from the `deserializer`

* `full_name` - # Repo full name on Github.

* `full_name=` - # Repo full name on Github.

* `api$Repo$init`

* `mongo_id`

* `mongo_id=`

* `name` - # Repo short name on Github.

* `name=` - # Repo short name on Github.

* `owner` - # Get the repo owner.

* `owner=` - # Get the repo owner.

### Other data

* `api$Branch` - # A Github branch.

* `api$Comment` - # A Github comment

* `api$Commit` - # A Github commit.

* `api$CommitComment` - # A comment made on a commit.

* `api$ContributorStats` - # Should be accessed from `Repo::contrib_stats`.

* `api$Deserializer` - # Abstract deserialization service

* `api$GitCommit` - # A Git Commit representation

* `api$GitUser` - # Git user authoring data

* `api$GithubAPI` - # Client to Github API

* `api$GithubDeserializer` - # JsonDeserializer specific for Github objects.

* `api$GithubEntity` - # Something returned by the Github API.

* `api$GithubFile` - # A Github file representation.

* `api$ISODate` - # Make ISO Datew serilizable

* `api$Issue` - # A Github issue.

* `api$IssueComment` - # Comments made on Github issue and pull request pages.

* `api$IssueEvent` - # An event that occurs on a Github `Issue`.

* `api$Label` - # A Github label.

* `api$Milestone` - # A Github milestone.

* `api$PullRef` - # A pull request reference (used for head and base).

* `api$PullRequest` - # A Github pull request.

* `api$RenameAction` - # A rename action maintains the name before and after a renaming action.

* `api$Repo` - # A Github repository.

* `api$ReviewComment` - # Comments made on Github pull request diffs.

* `api$User` - # A Github user

### Advanced uses

#### Caching

#### Custom requests

### `get` - # Execute a GET request on Github API.

This method returns raw json data.
See other `load_*` methods to use more expressive types.

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~

Returns `null` in case of `error`.

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/foo/bar/baz")
assert obj == null
assert api.was_error
var err = api.last_error
assert err isa GithubError
assert err.name == "GithubAPIError"
assert err.message == "Not Found"
~~~

#### Change the user agent

### `user_agent` - # User agent used for HTTP requests.

Default is `nit_github_api`.

See <https://developer.github.com/v3/#user-agent-required>

#### Debugging

### `verbose_lvl` - # Verbosity level.

* `0`: only errors (default)
* `1`: verbose

#### Using with GitLab

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

### `api_url` - # Github API base url.

Default is `https://api.github.com` and should not be changed.

## Creating hooks

Using this API you can create Github hooks able to respond to actions performed
on a repository.

### `hooks` - # Github hook event listening with `nitcorn`.

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

## Dealing with events

GithubAPI can trigger different events depending on the hook configuration.

### `GithubEvent` - # Github event stub.

* `events$CommitCommentEvent` - # Triggered when a commit comment is created.

* `events$CreateEvent` - # Triggered when a repository, branch, or tag is created.

* `events$DeleteEvent` - # Triggered when a branch or a tag is deleted.

* `events$DeploymentEvent` - # Triggered when a new snapshot is deployed.

* `events$DeploymentStatusEvent` - # Triggered when a deployement's status changes.

* `events$Deserializer` - # Abstract deserialization service

* `events$ForkEvent` - # Triggered when a user forks a repository.

* `events$GithubDeserializer` - # JsonDeserializer specific for Github objects.

* `events$GithubEvent` - # Github event stub.

* `events$IssueCommentEvent` - # Triggered when an issue comment is created.

* `events$IssuesEvent` - # Triggered when an event occurs on an issue.

* `events$MemberEvent` - # Triggered when a user is added as a collaborator to a repository.

* `events$PullRequestEvent` - # Triggered when an event occurs on a pull request.

* `events$PullRequestReviewCommentEvent` - # Triggered when a comment is created on a pull request diff.

* `events$PushEvent` - # Triggered when a repository branch is pushed to.

* `events$StatusEvent` - # Triggered when the status of a Git commit changes.

## Running the tests

Run the nitunit automated tests with the following command:

~~~bash
nitunit .
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
