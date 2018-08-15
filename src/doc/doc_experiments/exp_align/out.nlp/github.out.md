# Nit wrapper for Github API

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::Commit
> match: github::wallet
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events

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
> match: github::test_github_curl
> match: github::Repo
> match: github::User
> match: github::github_curl
> match: github
> match: github::Commit
> match: github::Branch
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::Issue
> match: github::cache
> match: github::Milestone
> match: github::HookListener
> match: github::ContributorStats
> match: github::api
> match: github::wallet
> match: github::hooks
> match: github::events

## Accessing the API

> match: github::Repo
> match: github::User
> match: github::GithubCurl
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Milestone
> match: github::Label
> match: github::ContributorStats
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::GithubAPI
> match: github::api
> match: github
> match: github::cache
> match: github::wallet
> match: github::github_curl

### `GithubAPI` - # Client to Github API

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::Commit
> match: github::wallet
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events

To access the API you need an instance of a `GithubAPI` client.

> match: github::GithubAPI
> match: github::Repo
> match: github::User
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Milestone
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::cache
> match: github
> match: github::GithubEntity
> match: github::ContributorStats
> match: github::wallet
> match: github::GithubError
> match: github::github_curl
> match: github::api

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
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubEntity
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::wallet
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events

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
> match: github::GitUser
> match: github::wallet
> match: github::GithubWallet
> match: github
> match: github::ForkEvent
> match: github::MemberEvent

### `get_github_oauth` - # Gets the Github token from `git` configuration

> match: github::GithubWallet
> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github::wallet
> match: github
> match: github::Repo
> match: github::User
> match: github::StatusEvent
> match: github::LoaderConfig
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

> match: github::StatusEvent
> match: github
> match: github::GithubError
> match: github::GithubAPI
> match: github::cache

### Retrieving user data

> match: github::User
> match: github::GitUser
> match: github
> match: github::Repo
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::PullRequest

### `load_user` - # Get the Github user with `login`

> match: github::User
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GitUser
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::Repo
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api

Loads the `User` from the API or returns `null` if the user cannot be found.

> match: github::User
> match: github::GitUser
> match: github::GithubAPI
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::GithubError
> match: github::GithubEntity
> match: github::wallet
> match: github::cache
> match: github::github_curl
> match: github::api

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
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::Repo
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

> match: github::User
> match: github::GithubAPI
> match: github::GitUser
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::Repo
> match: github::test_github_curl
> match: github::Commit
> match: github::Branch
> match: github::PullRequest
> match: github::Label
> match: github::Issue
> match: github::IssueEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::Milestone
> match: github
> match: github::github_curl
> match: github::ContributorStats
> match: github::cache
> match: github::HookListener
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::wallet
> match: github::hooks
> match: github::events
> match: github::api

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
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::GithubAPI
> match: github::wallet
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::User
> match: github::GitUser
> match: github
> match: github::RenameAction
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github::CreateEvent
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::wallet
> match: github::User
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::User
> match: github::GitUser
> match: github
> match: github::RenameAction
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github
> match: github::RenameAction
> match: github::ForkEvent
> match: github::MemberEvent

### Retrieving repo data

> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderJob
> match: github::GitUser
> match: github::User
> match: github
> match: github::PullRequest

### `load_repo` - # Get the Github repo with `full_name`.

> match: github::Repo
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::IssueCommentRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::User
> match: github::LoaderJob
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::IssueCommentRepo
> match: github::RepoEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderJobRepo
> match: github::GithubAPI
> match: github
> match: github::GithubError
> match: github::LoaderJob
> match: github::ContributorStats
> match: github::GithubEntity
> match: github::wallet
> match: github::cache
> match: github::github_curl
> match: github::api

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

### `Repo` - # A Github repository.

> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::LoaderJobRepo
> match: github::Repo
> match: github::ForkEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::MemberEvent
> match: github::Comment
> match: github::cache
> match: github::wallet

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

> match: github::GithubAPI
> match: github::Repo
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::IssueCommentRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::User
> match: github::test_github_curl
> match: github::Commit
> match: github::Branch
> match: github::PullRequest
> match: github::Label
> match: github::Issue
> match: github::IssueEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::Milestone
> match: github
> match: github::github_curl
> match: github::ContributorStats
> match: github::cache
> match: github::LoaderJob
> match: github::GitUser
> match: github::HookListener
> match: github::wallet
> match: github::hooks
> match: github::events
> match: github::api

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
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderJob
> match: github
> match: github::GithubAPI
> match: github::wallet
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::RepoEntity
> match: github::Branch
> match: github::LoaderJobRepo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::ContributorStats
> match: github::DeleteEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::RenameAction
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::User
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::RenameAction
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::loader::Issue::mongo_id
> match: github::loader::Commit::mongo_id
> match: github::loader::IssueEvent::mongo_id
> match: github::loader::Repo::mongo_id
> match: github::loader::Branch::mongo_id
> match: github::loader::IssueComment::mongo_id
> match: github
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::User
> match: github::RenameAction
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::LoaderJob
> match: github::GithubAPI
> match: github::Loader
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderConfig
> match: github::loader
> match: github::LoaderJob
> match: github
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderJob
> match: github
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::RepoEntity
> match: github::Branch
> match: github::LoaderJobRepo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::ContributorStats
> match: github::DeleteEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::RenameAction
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::RepoEntity
> match: github::Branch
> match: github::LoaderJobRepo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::ContributorStats
> match: github::DeleteEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::RenameAction
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::CreateEvent
> match: github::LoaderJob
> match: github
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::wallet
> match: github::Loader
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::CreateEvent
> match: github::LoaderConfig
> match: github::loader
> match: github::LoaderJob
> match: github
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::wallet
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::User
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::RenameAction
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::User
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::RenameAction
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::LoaderJob
> match: github
> match: github::loader::Issue::mongo_id
> match: github::loader::Commit::mongo_id
> match: github::loader::IssueEvent::mongo_id
> match: github::loader::Repo::mongo_id
> match: github::loader::Branch::mongo_id
> match: github::loader::IssueComment::mongo_id
> match: github
> match: github::loader::Issue::mongo_id
> match: github::loader::Commit::mongo_id
> match: github::loader::IssueEvent::mongo_id
> match: github::loader::Repo::mongo_id
> match: github::loader::Branch::mongo_id
> match: github::loader::IssueComment::mongo_id
> match: github
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::User
> match: github::RenameAction
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::GithubDeserializer
> match: github::RepoEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::LoaderJobRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentRepo
> match: github::GithubEntity
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::User
> match: github::RenameAction
> match: github::ContributorStats
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::LoaderJob
> match: github::GithubAPI
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github
> match: github::LoaderJob
> match: github::GithubAPI

### Other data

> match: github::GitUser
> match: github::Repo
> match: github::User
> match: github::PullRequest
> match: github

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
> match: github::BranchRepo
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::DeleteEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::Comment
> match: github::cache
> match: github::wallet
> match: github::Comment
> match: github::IssueCommentRepo
> match: github::CommitComment
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::cache
> match: github::wallet
> match: github::Commit
> match: github::GitCommit
> match: github::CommitComment
> match: github::CommitRepo
> match: github::CommitCommentEvent
> match: github::test_github_curl
> match: github::github_curl
> match: github::Comment
> match: github
> match: github::StatusEvent
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::cache
> match: github::wallet
> match: github::CommitComment
> match: github::Commit
> match: github::CommitCommentEvent
> match: github::Comment
> match: github::IssueCommentRepo
> match: github::GitCommit
> match: github::CommitRepo
> match: github::IssueCommentEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestReviewCommentEvent
> match: github::StatusEvent
> match: github
> match: github::Repo
> match: github::IssueRepo
> match: github::BranchRepo
> match: github::IssueEventRepo
> match: github::PullRequestRepo
> match: github::RepoEntity
> match: github::LoaderJobRepo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::ContributorStats
> match: github::User
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Milestone
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github
> match: github::GithubAPI
> match: github::cache
> match: github::github_curl
> match: github
> match: github::GitCommit
> match: github::Commit
> match: github::GitUser
> match: github::CommitRepo
> match: github::CommitComment
> match: github::CommitCommentEvent
> match: github::GithubFile
> match: github::StatusEvent
> match: github::Comment
> match: github
> match: github::GitUser
> match: github::User
> match: github::GitCommit
> match: github
> match: github::Repo
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::PullRequest
> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::Commit
> match: github::wallet
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubEntity
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::api
> match: github::events
> match: github::GithubEntity
> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::wallet
> match: github::cache
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events
> match: github::GithubFile
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::GitCommit
> match: github::Comment
> match: github::LoaderConfig
> match: github::cache
> match: github::wallet
> match: github::Comment
> match: github::CommitComment
> match: github::IssueComment
> match: github::ReviewComment
> match: github
> match: github::Issue
> match: github::IssuesEvent
> match: github::test_github_curl
> match: github::github_curl
> match: github::Comment
> match: github
> match: github::IssueCommentEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::Milestone
> match: github::GithubCurl
> match: github::cache
> match: github::wallet
> match: github::IssueComment
> match: github::Issue
> match: github::Comment
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::CommitComment
> match: github::IssueCommentRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::IssueCommentEvent
> match: github::ReviewComment
> match: github::GithubEntity
> match: github::CommitCommentEvent
> match: github::GithubCurl
> match: github::PullRequestReviewCommentEvent
> match: github::GithubError
> match: github::GithubAPI
> match: github::IssuesEvent
> match: github::test_github_curl
> match: github::PullRequest
> match: github::github_curl
> match: github
> match: github::PullRequestEvent
> match: github::Repo
> match: github::User
> match: github::PullRef
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::IssueEvent
> match: github::Issue
> match: github::IssueCommentEvent
> match: github::IssueRepo
> match: github::IssueCommentRepo
> match: github::IssueEventRepo
> match: github::IssuesEvent
> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::GithubWallet
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::IssueComment
> match: github::GithubCurl
> match: github::CommitCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::GithubError
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::PullRequestEvent
> match: github::events
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::PullRequest
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::api
> match: github::Label
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github::Repo
> match: github::User
> match: github::IssuesEvent
> match: github
> match: github::PullRequestEvent
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::Milestone
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::GithubCurl
> match: github::Comment
> match: github::cache
> match: github::wallet
> match: github::PullRef
> match: github::PullRequestEvent
> match: github::Comment
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github
> match: github::wallet
> match: github::PullRequest
> match: github::test_github_curl
> match: github::Comment
> match: github::github_curl
> match: github::PullRequestEvent
> match: github
> match: github::PullRef
> match: github::PullRequestReviewCommentEvent
> match: github::Issue
> match: github::IssueComment
> match: github::ReviewComment
> match: github::Milestone
> match: github::GithubCurl
> match: github::cache
> match: github::wallet
> match: github::RenameAction
> match: github::hooks::HookAction
> match: github
> match: github::Repo
> match: github::IssueCommentRepo
> match: github::CommitRepo
> match: github::RepoRepo
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Issue
> match: github::Milestone
> match: github::GithubCurl
> match: github::LoaderJob
> match: github::LoaderJobRepo
> match: github::ForkEvent
> match: github::PushEvent
> match: github::CreateEvent
> match: github::MemberEvent
> match: github::Comment
> match: github::cache
> match: github::wallet
> match: github::ReviewComment
> match: github::Comment
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::CommitComment
> match: github::IssueCommentRepo
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::PullRequestReviewCommentEvent
> match: github::IssueComment
> match: github::GithubEntity
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::PullRequestEvent
> match: github::PullRequest
> match: github::Repo
> match: github::User
> match: github::PullRef
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api
> match: github::User
> match: github::GitUser
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::Repo
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::events
> match: github::api

### Advanced uses

> match: github

#### Caching

> match: github::cache::GithubAPI::cache
> match: github::cache::GithubAPI::clear_cache
> match: github::cache::GithubAPI::has_cache
> match: github::cache::GithubAPI::enable_cache
> match: github::cache
> match: github::cache::GithubAPI::store

#### Custom requests

> match: github::PullRequestEvent
> match: github::Comment
> match: github::PullRef
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github

### `get` - # Execute a GET request on Github API.

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::cache
> match: github::Commit
> match: github::PullRequestEvent
> match: github::wallet
> match: github::Branch
> match: github::Comment
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRef
> match: github::PullRequestReviewCommentEvent
> match: github::api
> match: github::hooks
> match: github::events

This method returns raw json data.
See other `load_*` methods to use more expressive types.

> match: github::PullRequest
> match: github::GithubFile
> match: github::GitUser
> match: github::GithubEntity
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Repo
> match: github::Milestone
> match: github::User
> match: github::Label
> match: github::GithubError
> match: github::ContributorStats
> match: github::IssueEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github
> match: github::wallet
> match: github::events

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~

Returns `null` in case of `error`.

> match: github::GithubError
> match: github

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
> match: github::GitUser
> match: github
> match: github::ForkEvent
> match: github::MemberEvent

### `user_agent` - # User agent used for HTTP requests.

> match: github::User
> match: github::GitUser
> match: github
> match: github::PullRequestEvent
> match: github::Comment
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::PullRef
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment

Default is `nit_github_api`.

> match: github::LoaderConfig::default_db_name
> match: github::LoaderConfig::default_db_host
> match: github::Repo::default_branch
> match: github::GithubAPI::user_agent
> match: github::cache::GithubAPI::store
> match: github::GithubAPI::api_url
> match: github

See <https://developer.github.com/v3/#user-agent-required>

> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Milestone
> match: github::Label
> match: github::ContributorStats
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github
> match: github::events

#### Debugging

> match: github::GithubWallet::verbose
> match: github::HookListener::verbosity

### `verbose_lvl` - # Verbosity level.

> match: github::HookListener::verbosity
> match: github::LoaderConfig::verbose_level
> match: github::GithubAPI::verbose_lvl
> match: github::HookListener::message
> match: github

* `0`: only errors (default)
* `1`: verbose

> match: github::GithubError
> match: github
> match: github::GithubWallet::verbose
> match: github::LoaderConfig::opt_verbose
> match: github::GithubAPI::verbose_lvl
> match: github::LoaderConfig::verbose_level
> match: github::GithubWallet::message
> match: github

#### Using with GitLab

> match: github

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubEntity
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::wallet
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events

### `api_url` - # Github API base url.

> match: github::GithubAPI
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::GithubEntity
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubError
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::cache
> match: github::wallet
> match: github::Commit
> match: github::PullRef
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::api
> match: github::hooks
> match: github::events

Default is `https://api.github.com` and should not be changed.

> match: github::StatusEvent
> match: github::DeploymentStatusEvent
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: github::Repo
> match: github::Milestone
> match: github::Label
> match: github::User
> match: github::ContributorStats
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github

## Creating hooks

> match: github::CreateEvent
> match: github::hooks
> match: github::HookListener
> match: github::hooks::HookAction
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github

Using this API you can create Github hooks able to respond to actions performed
on a repository.

> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::GithubEvent
> match: github::TestGithubCurl
> match: github::CreateEvent
> match: github::GithubFile
> match: github::GithubCurl
> match: github::GithubEntity
> match: github::GithubError
> match: github::GithubAPI
> match: github::test_github_curl
> match: github::Repo
> match: github::github_curl
> match: github
> match: github::hooks
> match: github::HookListener
> match: github::hooks::HookAction
> match: github::RenameAction
> match: github::User
> match: github::LoaderJobRepo
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::Commit
> match: github::Branch
> match: github::Label
> match: github::IssueEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::api
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::cache
> match: github::events

### `hooks` - # Github hook event listening with `nitcorn`.

> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::GithubWallet
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::GithubError
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::IssuesEvent
> match: github::test_github_curl
> match: github::HookListener
> match: github::hooks
> match: github::hooks::HookAction
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::IssueEvent
> match: github::events
> match: github::Commit
> match: github::Branch
> match: github::Label
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestEvent
> match: github::wallet
> match: github::cache
> match: github::api

Usage:

> match: github::cache
> match: github::hooks
> match: github

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

> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github
> match: github::PullRequestEvent
> match: github::hooks

GithubAPI can trigger different events depending on the hook configuration.

> match: github::GithubAPI
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::hooks
> match: github::PullRequestEvent
> match: github::IssueEvent
> match: github
> match: github::Commit
> match: github::Issue
> match: github::HookListener
> match: github::Branch
> match: github::Repo
> match: github::Milestone
> match: github::LoaderConfig
> match: github::Label
> match: github::User
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::hooks::HookAction
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::GithubEvent
> match: github::DeploymentEvent
> match: github::events
> match: github::GithubError
> match: github::cache

### `GithubEvent` - # Github event stub.

> match: github::GithubEvent
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::GithubEntity
> match: github::GithubCurl
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::GithubError
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::IssuesEvent
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::IssueEvent
> match: github::events
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestEvent
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::api

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
> match: github::Comment
> match: github::IssueCommentRepo
> match: github::GitCommit
> match: github::CommitRepo
> match: github::DeleteEvent
> match: github::IssuesEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestEvent
> match: github::StatusEvent
> match: github
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::CreateEvent
> match: github::Branch
> match: github::DeleteEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::PushEvent
> match: github::PullRequestEvent
> match: github::ForkEvent
> match: github::MemberEvent
> match: github
> match: github::StatusEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::Repo
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::DeleteEvent
> match: github::Branch
> match: github::CreateEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::PullRequestEvent
> match: github::PushEvent
> match: github
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::DeploymentEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::PullRequestEvent
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::DeploymentStatusEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::StatusEvent
> match: github::PullRequestEvent
> match: github::ForkEvent
> match: github
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::LoaderJob
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::GithubEvent
> match: github
> match: github::events
> match: github::IssueEvent
> match: github::PullRequestEvent
> match: github::hooks
> match: github::ForkEvent
> match: github::User
> match: github::GitUser
> match: github::CreateEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::MemberEvent
> match: github::PullRequestEvent
> match: github::PushEvent
> match: github
> match: github::StatusEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::Repo
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::GithubDeserializer
> match: github::GithubEvent
> match: github::GithubWallet
> match: github::GithubFile
> match: github::TestGithubCurl
> match: github::GithubCurl
> match: github::GithubEntity
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::GithubError
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI
> match: github::IssuesEvent
> match: github::test_github_curl
> match: github::github_curl
> match: github
> match: github::Repo
> match: github::User
> match: github::IssueEvent
> match: github::events
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestEvent
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::api
> match: github::GithubEvent
> match: github::GithubDeserializer
> match: github::GithubWallet
> match: github::TestGithubCurl
> match: github::GithubFile
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::GithubEntity
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::GithubCurl
> match: github::PullRequestReviewCommentEvent
> match: github::GithubError
> match: github::IssuesEvent
> match: github::GithubAPI
> match: github::test_github_curl
> match: github
> match: github::github_curl
> match: github::IssueEvent
> match: github::Repo
> match: github::User
> match: github::events
> match: github::PullRequestEvent
> match: github::Commit
> match: github::Branch
> match: github::HookListener
> match: github::Label
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::wallet
> match: github::cache
> match: github::hooks
> match: github::api
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::CreateEvent
> match: github::Issue
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::Comment
> match: github::IssueCommentRepo
> match: github::CommitComment
> match: github::DeleteEvent
> match: github::IssueComment
> match: github::ReviewComment
> match: github::PullRequestEvent
> match: github
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::PullRequest
> match: github::wallet
> match: github::hooks
> match: github::IssuesEvent
> match: github::Issue
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequestEvent
> match: github::IssueEvent
> match: github
> match: github::GithubEvent
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::events
> match: github::PullRequest
> match: github::IssueComment
> match: github::Comment
> match: github::hooks
> match: github::wallet
> match: github::MemberEvent
> match: github::User
> match: github::GitUser
> match: github::CreateEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::DeleteEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::ForkEvent
> match: github::PullRequestEvent
> match: github::PushEvent
> match: github
> match: github::StatusEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::Repo
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::PullRequestEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::IssuesEvent
> match: github
> match: github::IssueEvent
> match: github::Comment
> match: github::GithubEvent
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::PullRef
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::PullRequest
> match: github::IssueComment
> match: github::ReviewComment
> match: github::DeploymentEvent
> match: github::events
> match: github::hooks
> match: github::wallet
> match: github::PullRequestReviewCommentEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::CreateEvent
> match: github::Comment
> match: github::IssueCommentRepo
> match: github::CommitComment
> match: github::ReviewComment
> match: github::DeleteEvent
> match: github::IssueComment
> match: github::IssuesEvent
> match: github::PullRequestEvent
> match: github
> match: github::StatusEvent
> match: github::ForkEvent
> match: github::PushEvent
> match: github::PullRef
> match: github::MemberEvent
> match: github::DeploymentStatusEvent
> match: github::PullRequest
> match: github::DeploymentEvent
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::PushEvent
> match: github::Branch
> match: github::CreateEvent
> match: github::DeleteEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::PullRequestEvent
> match: github::ForkEvent
> match: github::MemberEvent
> match: github
> match: github::StatusEvent
> match: github::DeploymentStatusEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::Repo
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::wallet
> match: github::hooks
> match: github::StatusEvent
> match: github::Commit
> match: github::CommitCommentEvent
> match: github::GitCommit
> match: github::IssueCommentEvent
> match: github::CommitRepo
> match: github::CommitComment
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::DeploymentStatusEvent
> match: github::PullRequestEvent
> match: github
> match: github::ForkEvent
> match: github::PushEvent
> match: github::MemberEvent
> match: github::DeploymentEvent
> match: github::LoaderJobRepo
> match: github::LoaderJob
> match: github::GithubEvent
> match: github::events
> match: github::IssueEvent
> match: github::Comment
> match: github::wallet
> match: github::hooks

