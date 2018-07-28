# Nit wrapper for Github API

> name: github
> name: github::api

This module provides a Nit object oriented interface to access the Github api.

> name: github
> name: github::api

## Accessing the API

> name: github::api

[[doc: GithubAPI]]

> name: github::GithubAPI

### Authentification

> name: github::GithubCurl::auth
> name: github::GithubAPI::auth

Token can also be recovered from user config with `get_github_oauth`.

[[doc: get_github_oauth]]

> name: github::github_curl::Sys::get_github_oauth

### Retrieving user data

> name: github::User

[[doc: load_user]]
[[doc: User]]
[[defs: User]]

> name: github::GithubAPI::load_user
> name: github::User
> name: github::User

### Retrieving repo data

> name: github::Repo

[[doc: load_repo]]
[[doc: Repo]]
[[defs: Repo]]

> name: github::GithubAPI::load_repo
> name: github::Repo
> name: github::Repo

### Other data

[[defs: github::api]]

> name: github::api

### Advanced uses

#### Caching

[[doc: cache]]

> name: github::cache

#### Custom requests

[[doc: github::GithubAPI::get]]

> name: github::GithubAPI::get

#### Change the user agent

[[doc: github::GithubAPI::user_agent]]

> name: github::GithubAPI::user_agent

#### Debugging

[[doc: verbose_lvl]]

> name: github::GithubAPI::verbose_lvl

#### Using with GitLab

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

> name: github::api

[[doc: api_url]]

> name: github::GithubAPI::api_url

## Creating hooks

> name: github::hooks

Using this API you can create Github hooks able to respond to actions performed
on a repository.

> name: github::api
> name: github
> name: github::hooks

[[doc: hooks]]

> name: github::hooks

## Dealing with events

> name: github::events

GithubAPI can trigger different events depending on the hook configuration.

> name: github::GithubAPI
> name: github::events

[[doc: GithubEvent]]

> name: github::GithubEvent

[[defs: github::events]]

> name: github::events
