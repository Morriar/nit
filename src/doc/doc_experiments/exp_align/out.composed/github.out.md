# Nit wrapper for Github API

> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

This module provides a Nit object oriented interface to access the Github api.

> match: core::Object
> match: nitcorn::Interface
> match: nitcorn::Interfaces
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

## Accessing the API

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

### `GithubAPI` - # Client to Github API

> match: github::LoaderConfig::client
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

To access the API you need an instance of a `GithubAPI` client.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github::LoaderConfig::client

~~~
import github

# Get Github authentification token.
var token = get_github_oauth
assert not token.is_empty

# Init the client.
var api = new GithubAPI(token)
~~~

The API client allows you to get Github API entities.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github::LoaderConfig::client
> match: github::GithubAPI::get
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

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

### Authentification

Token can also be recovered from user config with `get_github_oauth`.

> match: nitcorn::token
> match: github::GithubWallet::tokens
> match: github::LoaderConfig::tokens
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: config
> match: config>
> match: config::config
> match: github::Loader::config
> match: config::Config

### `get_github_oauth` - # Gets the Github token from `git` configuration

> match: github::GithubAPI::get
> match: github
> match: github>
> match: github::github
> match: nitcorn::token
> match: github::GithubWallet::tokens
> match: github::LoaderConfig::tokens

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

### Retrieving user data

> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

### `load_user` - # Get the Github user with `login`

> match: github::GithubAPI::get
> match: github
> match: github>
> match: github::github
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

Loads the `User` from the API or returns `null` if the user cannot be found.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~

### `User` - # A Github user

> match: github
> match: github>
> match: github::github
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

> match: github
> match: github>
> match: github::github
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

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

> match: meta::Class
> match: popcorn>examples>static_files>public>images>
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::blog
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::email
> match: github
> match: github>
> match: github::github
> match: github::User::login
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: popcorn>examples>static_files>public>images>
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: popcorn>examples>static_files>public>images>
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::blog
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::blog
> match: serialization
> match: serialization>
> match: serialization::serialization
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::email
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::User::email
> match: meta::Class
> match: github
> match: github>
> match: github::github
> match: github::User::login
> match: github
> match: github>
> match: github::github
> match: github::User::login
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: popcorn>examples>static_files>public>
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name

### Retrieving repo data

> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos

### `load_repo` - # Get the Github repo with `full_name`.

> match: github::GithubAPI::get
> match: github
> match: github>
> match: github::github
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

### `Repo` - # A Github repository.

> match: github
> match: github>
> match: github::github
> match: popcorn::Repository

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

> match: github
> match: github>
> match: github::github
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos

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

> match: meta::Class
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Branch
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::GithubAPI::get
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos
> match: github::Repo::owner
> match: serialization
> match: serialization>
> match: serialization::serialization
> match: serialization
> match: serialization>
> match: serialization::serialization
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Branch
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Branch
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: meta::Class
> match: meta::Class
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::Repo
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::Loader::repos
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github
> match: github>
> match: github::github
> match: github::GithubAPI::get
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos
> match: github::Repo::owner
> match: github::GithubAPI::get
> match: github::PullRef::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob::repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Loader::repos
> match: github::Repo::owner

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

> match: github
> match: github>
> match: github::github
> match: github::Branch
> match: github
> match: github>
> match: github::github
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::Comment
> match: github::Issue::comments
> match: github
> match: github>
> match: github::github
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::Commit
> match: github::PullRequest::commits
> match: github::PushEvent::commits
> match: github::Loader::commits
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::Comment
> match: github::Issue::comments
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::Commit
> match: github::PullRequest::commits
> match: github::PushEvent::commits
> match: github::Loader::commits
> match: github::Commit
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::PullRequest::commits
> match: github::PushEvent::commits
> match: github::Loader::commits
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: github::LoaderConfig::client
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: json::JsonDeserializer
> match: github
> match: github>
> match: github::github
> match: core::Object
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github
> match: github>
> match: github::github
> match: core::file
> match: popcorn>examples>static_files>files>
> match: github::Commit::files
> match: github
> match: github>
> match: github::github
> match: github::IssueCommentEvent::issue
> match: github::IssuesEvent::issue
> match: github::Issue
> match: github::Loader::issues
> match: github::Comment
> match: github::Issue::comments
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github
> match: github>
> match: github::github
> match: github::IssueCommentEvent::issue
> match: github::IssuesEvent::issue
> match: github::Issue
> match: github::Loader::issues
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: github::IssueEvent::event
> match: github::events
> match: github
> match: github>
> match: github::github
> match: github
> match: github>
> match: github::github
> match: github::Label
> match: github::Issue::labels
> match: github
> match: github>
> match: github::github
> match: github::Issue::milestone
> match: github::IssueEvent::milestone
> match: github::Milestone
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: github::PullRequest::head
> match: github::PullRequest::base
> match: github
> match: github>
> match: github::github
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: github::IssueEvent::rename
> match: github::GithubEvent::action
> match: nitcorn::Action
> match: github::GithubError::name
> match: github::User::name
> match: github::Repo::name
> match: github::Branch::name
> match: github::Label::name
> match: github::DeploymentEvent::name
> match: github::GithubEvent::action
> match: nitcorn::Action
> match: github
> match: github>
> match: github::github
> match: popcorn::Repository
> match: github::Comment
> match: github::Issue::comments
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github
> match: github>
> match: github::github
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: github
> match: github>
> match: github::github
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

### Advanced uses

#### Caching

> match: serialization::caching

#### Custom requests

### `get` - # Execute a GET request on Github API.

> match: github::GithubAPI::get
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

This method returns raw json data.
See other `load_*` methods to use more expressive types.

> match: json
> match: json>
> match: json::json
> match: github::GithubError::json

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

> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

### `user_agent` - # User agent used for HTTP requests.

> match: github::User
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user

Default is `nit_github_api`.

See <https://developer.github.com/v3/#user-agent-required>

> match: github
> match: github>
> match: github::github
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User

#### Debugging

### `verbose_lvl` - # Verbosity level.

> match: github::HookListener::verbosity

* `0`: only errors (default)
* `1`: verbose

> match: core::error
> match: json::error
> match: core::Error
> match: github::Loader::error
> match: github::GithubWallet::verbose

#### Using with GitLab

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api

### `api_url` - # Github API base url.

> match: github
> match: github>
> match: github::github
> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github::PullRequest::base

Default is `https://api.github.com` and should not be changed.

## Creating hooks

> match: github::hooks

Using this API you can create Github hooks able to respond to actions performed
on a repository.

> match: github::api
> match: github::ContributorStats::api
> match: github::GithubWallet::api
> match: github::HookListener::api
> match: github
> match: github>
> match: github::github
> match: github::hooks
> match: nitcorn::Action
> match: github::GithubEvent::action
> match: popcorn::Repository

### `hooks` - # Github hook event listening with `nitcorn`.

> match: github
> match: github>
> match: github::github
> match: github::hooks
> match: github::IssueEvent::event
> match: github::events

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

> match: github::events
> match: github::IssueEvent::event

GithubAPI can trigger different events depending on the hook configuration.

> match: github::GithubAPI
> match: github::events
> match: github::IssueEvent::event
> match: github::hooks

### `GithubEvent` - # Github event stub.

> match: github
> match: github>
> match: github::github
> match: github::IssueEvent::event
> match: github::events

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

> match: github::Branch::commit
> match: github::Commit::commit
> match: github::Commit
> match: github::PullRequest::commits
> match: github::PushEvent::commits
> match: github::Loader::commits
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::Comment
> match: github::Issue::comments
> match: popcorn::Repository
> match: github::Branch
> match: github::Branch
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: popcorn::Repository
> match: json::JsonDeserializer
> match: github
> match: github>
> match: github::github
> match: core::Object
> match: github
> match: github>
> match: github::github
> match: github::IssueEvent::event
> match: github::events
> match: github::IssueCommentEvent::issue
> match: github::IssuesEvent::issue
> match: github::Issue
> match: github::Loader::issues
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::Comment
> match: github::Issue::comments
> match: github::IssueEvent::event
> match: github::events
> match: github::IssueCommentEvent::issue
> match: github::IssuesEvent::issue
> match: github::Issue
> match: github::Loader::issues
> match: github::Issue::user
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: popcorn::Repository
> match: github::IssueEvent::event
> match: github::events
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: github::CommitCommentEvent::comment
> match: github::IssueCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::Comment
> match: github::Issue::comments
> match: github::PullRequestEvent::pull
> match: github::PullRequestReviewCommentEvent::pull
> match: github::Loader::pulls
> match: popcorn::Repository
> match: github::Branch
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::Commit
> match: github::PullRequest::commits
> match: github::PushEvent::commits
> match: github::Loader::commits

