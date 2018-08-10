# Nit wrapper for Github API

> theme: title

This module provides a Nit object oriented interface to access the Github api.

> theme: intro

## Accessing the API

> theme: features

### `GithubAPI` - # Client to Github API

> theme: api
> theme: features

To access the API you need an instance of a `GithubAPI` client.

> theme: api

~~~
import github

# Get Github authentification token.
var token = get_github_oauth
assert not token.is_empty

# Init the client.
var api = new GithubAPI(token)
~~~

> theme: examples

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

> theme: examples

### Authentification

> theme: features

Token can also be recovered from user config with `get_github_oauth`.

> theme: api

### `get_github_oauth` - # Gets the Github token from `git` configuration

> theme: api
> theme: features

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

> theme: api

### Retrieving user data

> theme: features

### `load_user` - # Get the Github user with `login`

> theme: api
> theme: features

Loads the `User` from the API or returns `null` if the user cannot be found.

> theme: api

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~

> theme: examples

### `User` - # A Github user

> theme: api
> theme: features

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

> theme: api
> theme: intro

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

> theme: api
> theme: features
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api

### Retrieving repo data

> theme: features

### `load_repo` - # Get the Github repo with `full_name`.

> theme: api
> theme: features

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

> theme: api

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

> theme: examples

### `Repo` - # A Github repository.

> theme: api
> theme: features

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

> theme: api
> theme: intro

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

> theme: api
> theme: features
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api

### Other data

> theme: features

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

> theme: api
> theme: features
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: authors
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: authors
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: refs
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api

### Advanced uses

> theme: features

#### Caching

> theme: features

#### Custom requests

> theme: features

### `get` - # Execute a GET request on Github API.

> theme: api
> theme: features

This method returns raw json data.
See other `load_*` methods to use more expressive types.

> theme: api
> theme: refs

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~

> theme: examples

Returns `null` in case of `error`.

> theme: api

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

> theme: examples

#### Change the user agent

> theme: features

### `user_agent` - # User agent used for HTTP requests.

> theme: api
> theme: features

Default is `nit_github_api`.

> theme: api

See <https://developer.github.com/v3/#user-agent-required>

> theme: refs

#### Debugging

> theme: features

### `verbose_lvl` - # Verbosity level.

> theme: api
> theme: features

* `0`: only errors (default)
* `1`: verbose

> theme: api
> theme: features
> theme: api
> theme: api
> theme: api
> theme: api

#### Using with GitLab

> theme: features

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

### `api_url` - # Github API base url.

> theme: api
> theme: features

Default is `https://api.github.com` and should not be changed.

> theme: api

## Creating hooks

> theme: features

Using this API you can create Github hooks able to respond to actions performed
on a repository.

### `hooks` - # Github hook event listening with `nitcorn`.

> theme: api
> theme: features

Usage:

> theme: usage

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

> theme: examples

## Dealing with events

> theme: features

GithubAPI can trigger different events depending on the hook configuration.

### `GithubEvent` - # Github event stub.

> theme: api
> theme: features

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

> theme: api
> theme: features
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api
> theme: api

