# Nit wrapper for Github API

> match: github::GithubAPI
> match: github::github
> match: github::GithubDeserializer
> match: github::GithubEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubError

This module provides a Nit object oriented interface to access the Github api.

> match: github::github
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI

## Accessing the API

> match: github::ContributorStats::api
> match: github::HookListener::api
> match: github::GithubAPI::api_url
> match: github::GithubWallet::api

### `GithubAPI` - # Client to Github API

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::github
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError

To access the API you need an instance of a `GithubAPI` client.

> match: github::GithubAPI

~~~
import github

# Get Github authentification token.
var token = get_github_oauth
assert not token.is_empty

# Init the client.
var api = new GithubAPI(token)
~~~

The API client allows you to get Github API entities.

> match: github::GithubAPI
> match: github::github
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubEntity
> match: github::TestGithubCurl
> match: github::GithubFile

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

> match: github::GithubAPI::auth

Token can also be recovered from user config with `get_github_oauth`.

> match: github::User

### `get_github_oauth` - # Gets the Github token from `git` configuration

> match: github::GithubWallet
> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

> match: github::Loader::config
> match: github::GithubAPI::get
> match: github::github_curl::Sys::get_github_oauth
> match: github::TestGithubCurl::test_get_repo
> match: github::TestGithubCurl::test_get_user

### Retrieving user data

> match: github::User

### `load_user` - # Get the Github user with `login`

> match: github::User

Loads the `User` from the API or returns `null` if the user cannot be found.

> match: github::User
> match: github::GitUser

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~

### `User` - # A Github user

> match: github::User
> match: github::GitUser
> match: github::GithubDeserializer

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

> match: github::User
> match: github::GithubAPI
> match: github::github
> match: github::GitUser
> match: github::GithubDeserializer

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

> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::User
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::User
> match: github::User

### Retrieving repo data

> match: github::Repo

### `load_repo` - # Get the Github repo with `full_name`.

> match: github::Repo

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

> match: github::Repo

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

### `Repo` - # A Github repository.

> match: github::github
> match: github::GithubAPI::load_from_github
> match: github::github_curl::Sys::get_github_oauth

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

> match: github::GithubAPI
> match: github::Repo
> match: github::github
> match: github::GithubDeserializer

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

> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::Repo
> match: github::Repo
> match: github::Loader
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Loader
> match: github::Repo
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Repo
> match: github::Repo

### Other data

> match: github::GithubAPI::get

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

> match: github::Branch
> match: github::github
> match: github::BranchRepo
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::github
> match: github::Commit
> match: github::github
> match: github::CommitComment
> match: github::Commit
> match: github::CommitCommentEvent
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::RepoEntity
> match: github::GitCommit
> match: github::Commit
> match: github::GitUser
> match: github::GitUser
> match: github::User
> match: github::GitCommit
> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::github
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::github
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubEntity
> match: github::GithubError
> match: github::GithubEntity
> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::github
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::github
> match: github::GithubFile
> match: github::Issue
> match: github::github
> match: github::IssueComment
> match: github::Issue
> match: github::Comment
> match: github::IssueEvent
> match: github::Issue
> match: github::IssueCommentEvent
> match: github::IssueRepo
> match: github::IssueCommentRepo
> match: github::IssueEventRepo
> match: github::Label
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::Milestone
> match: github::github
> match: github::PullRef
> match: github::github
> match: github::PullRequest
> match: github::RenameAction
> match: github::github
> match: github::Repo
> match: github::ReviewComment
> match: github::Comment
> match: github::User
> match: github::GitUser
> match: github::GithubDeserializer

### Advanced uses

#### Caching

> match: github::cache::GithubAPI::cache

#### Custom requests

> match: github::Issue::is_pull_request
> match: github::ReviewComment::pull_request_url

### `get` - # Execute a GET request on Github API.

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::github
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError

This method returns raw json data.
See other `load_*` methods to use more expressive types.

> match: github::GithubError::json
> match: github::DeleteEvent::ref_type
> match: github::CreateEvent::ref_type
> match: github::GithubAPI::load_from_github
> match: github::Loader::load_branches

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~

Returns `null` in case of `error`.

> match: github::Loader::error

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

> match: github::User

### `user_agent` - # User agent used for HTTP requests.

> match: github::User

Default is `nit_github_api`.

> match: github::LoaderConfig::default_db_name
> match: github::LoaderConfig::default_db_host
> match: github::Repo::default_branch

See <https://developer.github.com/v3/#user-agent-required>

> match: github::GithubAPI::user_agent

#### Debugging

### `verbose_lvl` - # Verbosity level.

> match: github::HookListener::verbosity

* `0`: only errors (default)
* `1`: verbose

> match: github::Loader::error
> match: github::GithubWallet::verbose

#### Using with GitLab

> match: github>

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

> match: github::GithubAPI
> match: github::github
> match: github::GithubDeserializer
> match: github::GithubEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl

### `api_url` - # Github API base url.

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::github
> match: github::GithubEvent

Default is `https://api.github.com` and should not be changed.

> match: github::PullRequest::changed_files
> match: github::LoaderConfig::default_db_name
> match: github::LoaderConfig::default_db_host
> match: github::Repo::default_branch

## Creating hooks

> match: github::Issue::created_at
> match: github::IssueEvent::created_at
> match: github::Milestone::created_at
> match: github::Comment::created_at
> match: github::Issue::iso_created_at
> match: github::Milestone::iso_created_at
> match: github::IssueEvent::iso_created_at
> match: github::Comment::iso_created_at

Using this API you can create Github hooks able to respond to actions performed
on a repository.

> match: github::GithubDeserializer
> match: github::github
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::CreateEvent
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubEntity

### `hooks` - # Github hook event listening with `nitcorn`.

> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::GithubWallet
> match: github::TestGithubCurl
> match: github::github
> match: github::GithubFile
> match: github::GithubEntity

Usage:

> match: github::cache

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

> match: github::IssueEvent::event

GithubAPI can trigger different events depending on the hook configuration.

> match: github::GithubAPI
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent

### `GithubEvent` - # Github event stub.

> match: github::GithubEvent
> match: github::GithubDeserializer

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

> match: github::CommitCommentEvent
> match: github::CommitComment
> match: github::IssueCommentEvent
> match: github::CreateEvent
> match: github::Commit
> match: github::PullRequestReviewCommentEvent
> match: github::CreateEvent
> match: github::DeleteEvent
> match: github::DeploymentEvent
> match: github::DeploymentStatusEvent
> match: github::IssueEvent::event
> match: github::ForkEvent
> match: github::User
> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::GithubWallet
> match: github::github
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubEntity
> match: github::GithubEvent
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::CreateEvent
> match: github::Issue
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::Issue
> match: github::MemberEvent
> match: github::User
> match: github::PullRequestEvent
> match: github::PullRequestReviewCommentEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::CreateEvent
> match: github::PushEvent
> match: github::Branch
> match: github::StatusEvent
> match: github::Commit
> match: github::CommitCommentEvent

