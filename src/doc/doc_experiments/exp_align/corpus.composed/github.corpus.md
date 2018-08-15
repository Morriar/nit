# Nit wrapper for Github API


> match: github
> match: github::GithubAPI

This module provides a Nit object oriented interface to access the Github api.


> match: github
> match: github::api
> match: github::GithubAPI
> match: github::github

## Accessing the API


> match: github::api
> match: github::GithubAPI

### `GithubAPI` - # Client to Github API


> match: github
> match: github::api
> match: github::GithubAPI

To access the API you need an instance of a `GithubAPI` client.


> match: github::api
> match: github::GithubAPI

~~~
import github

# Get Github authentification token.
var token = get_github_oauth
assert not token.is_empty

# Init the client.
var api = new GithubAPI(token)
~~~


> match: github::github
> match: github::github_curl::Sys::get_github_oauth
> match: github::GithubAPI

The API client allows you to get Github API entities.


> match: github
> match: github::api
> match: github::GithubAPI
> match: github::GithubAPI::get
> match: github::github

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


> match: github::GithubAPI
> match: github::Repo::name
> match: github::User::login
> match: github::Repo
> match: github::User
> match: github::github
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_repo
> match: github::github_curl::Sys::get_github_oauth

### Authentification


> match: github::GithubCurl::auth
> match: github::GithubAPI::auth

Token can also be recovered from user config with `get_github_oauth`.


> match: github::github_curl::Sys::get_github_oauth
> match: github::User
> match: github::GithubWallet::check_token
> match: github::GithubWallet::current_token
> match: github::GithubWallet::from_tokens
> match: github::GithubWallet::get_next_token
> match: github::GithubWallet::tokens
> match: config

### `get_github_oauth` - # Gets the Github token from `git` configuration


> match: github
> match: github::github_curl::Sys::get_github_oauth

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.


> match: github::github_curl::Sys::get_github_oauth

### Retrieving user data


> match: github::User

### `load_user` - # Get the Github user with `login`


> match: github
> match: github::User

Loads the `User` from the API or returns `null` if the user cannot be found.


> match: github::api
> match: github::User
> match: github::GithubAPI::load_user

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~


> match: github::GithubAPI
> match: github::User::login
> match: github::github
> match: github::GithubAPI::load_user
> match: github::github_curl::Sys::get_github_oauth

### `User` - # A Github user


> match: github
> match: github::User

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.


> match: github
> match: github::User
> match: github::GithubAPI::load_user

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
> match: github
> match: github::User::blog
> match: github::User::login
> match: github::User::name
> match: github::User::avatar_url
> match: github::User::email
> match: serialization
> match: github::GithubAPI::load_user

### Retrieving repo data


> match: github::Repo

### `load_repo` - # Get the Github repo with `full_name`.


> match: github
> match: github::Repo

Loads the `Repo` from the API or returns `null` if the repo cannot be found.


> match: github::api
> match: github::Repo
> match: github::GithubAPI
> match: github::GithubAPI::load_repo

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~


> match: github::GithubAPI
> match: github::Repo::name
> match: github::User::login
> match: github::Repo::owner
> match: github::Repo::default_branch
> match: github::User
> match: github::github
> match: github::GithubAPI::load_repo
> match: github::github_curl::Sys::get_github_oauth

### `Repo` - # A Github repository.


> match: github
> match: github::Repo
> match: github::GithubAPI::load_repo

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.


> match: github
> match: github::Repo
> match: github::GithubAPI::load_repo
> match: github::GithubAPI::load_repo_branches
> match: github::GithubAPI::load_repo_contrib_stats
> match: github::GithubAPI::load_repo_issues
> match: github::GithubAPI::load_repo_labels
> match: github::GithubAPI::load_repo_last_issue
> match: github::GithubAPI::load_repo_milestones
> match: github::GithubAPI::load_repo_pulls

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
> match: github::default_branch
> match: github::full_name
> match: github::mongo_id
> match: github::name
> match: github::owner
> match: github
> match: serialization
> match: github::GithubAPI::load_repo
> match: github::Repo::default_branch
> match: github::Repo::full_name
> match: github::Repo::name
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
> match: github::github
> match: github::Repo
> match: github::Branch
> match: github::Comment
> match: github::Commit
> match: github::User
> match: github::api
> match: github::CommitComment
> match: github::CommitRepo
> match: github::CreateEvent
> match: github::DeleteEvent
> match: github::GitCommit
> match: github::GitUser
> match: github::GithubAPI::load_branch
> match: github::GithubAPI::load_branch_commits
> match: github::GithubAPI::load_commit
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_from_github
> match: github::GithubAPI::load_issue
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_issue_comments
> match: github::GithubAPI::load_issue_event
> match: github::GithubAPI::load_issue_events
> match: github::GithubAPI::load_label
> match: github::GithubAPI::load_milestone
> match: github::GithubAPI::load_pull
> match: github::GithubAPI::load_repo_branches
> match: github::GithubAPI::load_repo_contrib_stats
> match: github::GithubAPI::load_repo_issues
> match: github::GithubAPI::load_repo_labels
> match: github::GithubAPI::load_repo_last_issue
> match: github::GithubAPI::load_repo_milestones
> match: github::GithubAPI::load_repo_pulls
> match: github::GithubAPI::load_review_comment
> match: github::GithubAPI::load_user
> match: github::GithubAPI::search_repo_issues
> match: github::GithubEntity
> match: github::GithubFile
> match: github::Issue
> match: github::IssueComment
> match: github::IssueCommentEvent
> match: github::IssueCommentRepo
> match: github::IssueEvent
> match: github::IssuesEvent
> match: github::Label
> match: github::Milestone
> match: github::PullRef
> match: github::PullRequest
> match: github::PullRequestReviewCommentEvent
> match: github::RenameAction
> match: github::RepoRepo
> match: github::ReviewComment

### Advanced uses

#### Caching


> match: github::cache
> match: github::cache::GithubAPI::cache

#### Custom requests

### `get` - # Execute a GET request on Github API.


> match: github
> match: github::GithubAPI::get
> match: github::GithubAPI
> match: github::api
> match: github::GithubCurl::get_and_check
> match: github::GithubCurl::get_and_parse

This method returns raw json data.
See other `load_*` methods to use more expressive types.


> match: json

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~


> match: github::GithubAPI
> match: json::JsonObject
> match: github::GithubAPI::get
> match: github::github
> match: github::github_curl::Sys::get_github_oauth

Returns `null` in case of `error`.


> match: github::GithubAPI::last_error
> match: github::GithubAPI::was_error

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


> match: github::GithubAPI
> match: github::GithubError
> match: github::GithubError::name
> match: github::GithubAPI::was_error
> match: github::GithubAPI::last_error
> match: github::GithubAPI::get
> match: github::github
> match: github::github_curl::Sys::get_github_oauth
> match: core::Error::message

#### Change the user agent


> match: github::GithubAPI::user_agent
> match: github::GithubCurl::user_agent

### `user_agent` - # User agent used for HTTP requests.


> match: github::GithubAPI::user_agent
> match: github::GithubCurl::user_agent

Default is `nit_github_api`.

See <https://developer.github.com/v3/#user-agent-required>


> match: github
> match: github::GithubAPI::user_agent
> match: github::GithubCurl::user_agent

#### Debugging

### `verbose_lvl` - # Verbosity level.


> match: github::GithubAPI::verbose_lvl

* `0`: only errors (default)
* `1`: verbose


> match: github::GithubAPI::verbose_lvl

#### Using with GitLab

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.


> match: github
> match: github::api
> match: github::github
> match: github::GithubAPI
> match: github::GithubAPI::api_url

### `api_url` - # Github API base url.


> match: github
> match: github::GithubAPI::api_url
> match: github::api
> match: github::GithubAPI

Default is `https://api.github.com` and should not be changed.


> match: github::GithubAPI::api_url

## Creating hooks


> match: github::hooks

Using this API you can create Github hooks able to respond to actions performed
on a repository.


> match: github::api
> match: github
> match: github::github
> match: github::hooks

### `hooks` - # Github hook event listening with `nitcorn`.


> match: github::hooks
> match: github

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


> match: github::GithubEvent
> match: github::CommitCommentEvent
> match: github::CommitComment
> match: github::CommitComment::commit_id
> match: github::CommitCommentEvent::comment
> match: github::HookListener
> match: github::HookListener::apply_event
> match: github::github_curl::Sys::get_github_oauth
> match: github::GithubAPI
> match: github::hooks

## Dealing with events


> match: github::events

GithubAPI can trigger different events depending on the hook configuration.


> match: github::GithubAPI
> match: github::events
> match: github::hooks
> match: github::GithubEvent

### `GithubEvent` - # Github event stub.


> match: github
> match: github::events
> match: github::GithubEvent

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


> match: github::events
> match: github::Commit
> match: github::Comment
> match: github::Branch
> match: github::User
> match: json::JsonDeserializer
> match: github
> match: github::Issue
> match: github::CommitCommentEvent
> match: github::CreateEvent
> match: github::DeleteEvent
> match: github::DeploymentEvent
> match: github::DeploymentStatusEvent
> match: github::ForkEvent
> match: github::GithubEvent
> match: github::IssueEvent
> match: github::MemberEvent
> match: github::PullRequestEvent
> match: github::PushEvent
> match: github::StatusEvent
> match: github::github

