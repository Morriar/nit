# Nit wrapper for Github API

> match: github::github
> match: github::GithubEntity
> match: github::GithubAPI
> match: github::GithubFile
> match: core::NativeArray
> match: json>
> match: json
> match: mongodb>
> match: mongodb
> match: github::GithubWallet::tokens
> match: github::ContributorStats::api
> match: json::JsonSerializer::plain_json
> match: json::JsonSerializer
> match: core::flat::UnicodeFlatString

This module provides a Nit object oriented interface to access the Github api.

> match: github::github
> match: json>
> match: json
> match: github::HookListener::api
> match: github::Repo
> match: github::User
> match: github::GithubAPI
> match: nitcorn::Interface
> match: json::serialization_read::JsonDeserializer::convert_object
> match: github::ContributorStats::api
> match: core::Writable
> match: json::JsonSerializer::plain_json
> match: github::LoaderConfig::tokens
> match: core::Path
> match: json::JsonSerializer
> match: core::Collection
> match: core>collection>
> match: nitcorn::VirtualHost::interfaces
> match: github::GithubAPI::auth
> match: nitcorn::Interfaces
> match: core::Text::[]
> match: github::GithubWallet::api

## Accessing the API

> match: github::HookListener::api
> match: github::GithubAPI
> match: github::github
> match: github::ContributorStats::api
> match: github::Repo
> match: github::User
> match: core::Text::[]
> match: github::GithubWallet::api
> match: core::file::NativeFileStat::atime
> match: github::LoaderConfig::tokens

### `GithubAPI` - # Client to Github API

> match: github>
> match: github
> match: github::GithubAPI
> match: github::github

To access the API you need an instance of a `GithubAPI` client.

> match: github::GithubAPI
> match: github::LoaderConfig::client
> match: popcorn::pop_repos::AppConfig::client
> match: github::Repo
> match: github::User
> match: github::GithubAPI::auth
> match: mongodb::MongoDb::client
> match: github::HookListener::api
> match: core::Text::[]
> match: github::api::GithubAPI::ghcurl
> match: core::file::NativeFileStat::atime
> match: core::Writable::write_to_bytes
> match: github::ContributorStats::api
> match: github::LoaderConfig::tokens
> match: github::github

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
> match: github::GithubAPI::get
> match: github::LoaderConfig::client
> match: curl::CURLOption::get
> match: popcorn::pop_repos::AppConfig::client
> match: popcorn::Handler::get
> match: github::HookListener::api
> match: github::ContributorStats::api
> match: github::github
> match: github::GithubAPI::auth
> match: github::GithubWallet::tokens
> match: github::GithubAPI::load_user
> match: curl::CurlCallbacks
> match: curl::CURLSList::with_str
> match: github::GithubAPI::load_repo
> match: github::GithubAPI::load_auth_user
> match: mongodb::MongoDb::client
> match: github::GithubAPI::last_error
> match: github::GithubAPI::api_url
> match: core::list::List::get_node

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

> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::github_curl::Sys::get_github_oauth
> match: github::GithubAPI::load_auth_user
> match: nitcorn::VirtualHosts::config
> match: config>
> match: config
> match: nitcorn::Routes::config
> match: github::GithubAPI::load_user
> match: github::User
> match: github::Loader::config
> match: github::GithubWallet::get_next_token
> match: core::Finalizable::finalize
> match: core::Map
> match: nitcorn::HttpFactory::config
> match: github::GithubWallet::api
> match: github::wallet
> match: core::re::NativeMatchArray::[]
> match: core::ProcessDuplex
> match: github::GithubWallet::current_token
> match: config::IniConfig::ini
> match: github::GithubWallet::tokens
> match: github::LoaderConfig::tokens
> match: serialization>
> match: serialization
> match: config::config
> match: github::GithubWallet::add
> match: ini::ConfigTree::[]
> match: ini::ConfigTree::save
> match: github::GithubAPI::auth
> match: json::JsonDeserializer::class_name_heuristic
> match: core::FinalizableOnce
> match: json::JsonSerializer::plain_json
> match: ini>
> match: github::GithubWallet::check_token
> match: ini
> match: core::Reader
> match: core::Writer
> match: github::GithubWallet::verbose
> match: more_collections::UnrolledList::nodes_length
> match: popcorn::AppGlobRoute
> match: github::MemberEvent::member
> match: config::IniConfig::default_config_file
> match: popcorn>
> match: popcorn
> match: core::Bytes::items
> match: core::bytes::Int::to_bytes
> match: core::Object::SELF
> match: github::ContributorStats::author
> match: core::abstract_text::Object::to_s
> match: core::Duplex
> match: github::User::name
> match: core::SimpleCollection
> match: serialization::Serializable
> match: config::IniConfig::opt_config
> match: poset::POSet
> match: core::Writer::is_writable
> match: config::IniConfig::config_file
> match: core::Comparable::OTHER
> match: core::RemovableCollection
> match: popcorn::Handler::all
> match: github::DeleteEvent::ref_type
> match: nitcorn::token::Sys::generate_token
> match: github::IssueEvent::assignee
> match: github::Issue::assignee
> match: github::IssuesEvent::assignee
> match: nitcorn::reactor::ServerConfig::factory
> match: serialization::SafeDeserializer::check_subtypes
> match: github::Milestone::creator
> match: core::Object::output
> match: github::CreateEvent::ref_type
> match: popcorn::AppConfig::opt_host
> match: ini::ConfigTree::at
> match: github::GitUser
> match: github::MemberEvent
> match: core::Writable
> match: github::IssueEvent::actor
> match: core::Object::output_class_name
> match: github::StatusEvent::state
> match: github::GithubAPI::user_agent
> match: popcorn::AppConfig::opt_port
> match: github::User::email
> match: serialization::Serializer::serialize_core
> match: github::User::blog
> match: github::Issue::closed_by
> match: core::BytePattern
> match: json::JsonMapRead
> match: json::JsonSequenceRead
> match: curl::CurlHTTPRequest::user_agent
> match: serialization::SafeDeserializer
> match: github::PullRequest::merged_by
> match: github::DeploymentStatusEvent::state
> match: github::GithubCurl::user_agent
> match: github::ForkEvent
> match: core::Error::cause
> match: popcorn::AppConfig::app_hostname

### `get_github_oauth` - # Gets the Github token from `git` configuration

> match: github::github_curl::Sys::get_github_oauth
> match: github>
> match: github
> match: curl::CURLOption::get
> match: popcorn::Handler::get
> match: github::GithubAPI::get
> match: github::GithubWallet::get_next_token
> match: github::GithubWallet::api
> match: github::GithubWallet::tokens
> match: github::LoaderConfig::tokens
> match: github::GithubWallet::current_token
> match: config::Config
> match: github::GithubAPI::auth
> match: nitcorn::ServerConfig
> match: github::StatusEvent
> match: nitcorn::VirtualHost
> match: core::list::List::get_node
> match: github::LoaderConfig

Return the value of `git config --get github.oauthtoken`
or `""` if no key exists.

> match: github::github_curl::Sys::get_github_oauth
> match: ini::ConfigTree::at
> match: ini::ConfigTree::[]
> match: core::Map::[]=
> match: core::MapIterator::key
> match: core::MaybeError::value
> match: curl::CURLOption::get
> match: more_collections::DefaultMap
> match: core::MapRead::provide_default_value
> match: opts::Option::value
> match: nitcorn::VirtualHosts::config
> match: popcorn::Handler::get
> match: nitcorn::Routes::config
> match: core::MapRead::get_or_null
> match: curl::HeaderMap::[]
> match: github::GithubAPI::get
> match: core::MapRead::get_or_default
> match: curl::HeaderMap::[]=
> match: core::hash_collection::HashNode::key
> match: ini::ConfigTree::[]=
> match: ini::ConfigTree::to_map
> match: ini::ini::ConfigNode::key
> match: core::hash_collection::HashMapNode::value
> match: opts::OptionEnum::value_name
> match: config>
> match: config
> match: core::MapRead::[]
> match: ini::ini::ConfigNode::value
> match: github::Loader::config
> match: nitcorn::Routes::[]
> match: core::Path::exists
> match: nitcorn::vararg_routes::HttpRequest::param
> match: core::MapRead::keys
> match: ini::ini::ConfigTree::set_array
> match: popcorn::RepoObject::id
> match: mongodb::MongoMatch::exists
> match: config::IniConfig::config_file
> match: opts::Option::VALUE
> match: mongodb::MongoGroup::last
> match: mongodb::MongoGroup::first
> match: core::hash_collection::HashCollection::node_at
> match: ini::ConfigTree::has_key
> match: core::MapRead::values
> match: core::hash_collection::HashCollection::index_at
> match: more_collections::HashMap2::[]
> match: config::IniConfig::ini
> match: json::JsonStore::list_collection
> match: core::sorter::MapRead::keys_sorted_by_values
> match: core::MaybeError
> match: core::Map
> match: github::StatusEvent
> match: mongodb::MongoGroup::max
> match: core::list::List::get_node
> match: mongodb::MongoGroup::min
> match: nitcorn::HttpStatusCodes::[]
> match: core::CoupleMap::couple_at
> match: core::math::Float::round
> match: ini::ConfigTree::save
> match: core::environ::String::environ
> match: more_collections::HashMap3::[]
> match: nitcorn::HttpFactory::config
> match: core::hash_collection::HashCollection::node_at_idx
> match: ini>
> match: ini

### Retrieving user data

> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::GitUser
> match: curl::CurlHTTPRequest::data
> match: core::abstract_text::Object::to_s
> match: core::flat::FlatString::full
> match: github::User::name

### `load_user` - # Get the Github user with `login`

> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::User::login
> match: github::PullRef::user
> match: github::Issue::user
> match: github::User
> match: github::Comment::user
> match: curl::CURLOption::get
> match: github::GithubAPI::load_auth_user
> match: popcorn::Handler::get
> match: github::GithubAPI::get

Loads the `User` from the API or returns `null` if the user cannot be found.

> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: popcorn::Repository::find
> match: github::GithubAPI::load_repo
> match: json::JsonDeserializer::class_name_heuristic
> match: core::FinalizableOnce
> match: core::abstract_text::Object::to_s
> match: github::GithubAPI::load_commit
> match: github::User::name
> match: core::Regex::compile
> match: github::MemberEvent::member
> match: github::GithubAPI::load_issue
> match: config>
> match: config
> match: github::GithubAPI::load_branch
> match: github::GithubAPI::load_milestone
> match: github::GithubAPI::load_label
> match: github::IssueEvent::assignee
> match: github::GithubAPI::load_issue_event
> match: github::ContributorStats::author
> match: github::Issue::assignee
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit_comment
> match: github::Milestone::creator
> match: github::GithubAPI::load_pull
> match: mongodb::MongoCollection::find
> match: github::GithubAPI::load_review_comment
> match: github::GitUser
> match: github::IssueEvent::actor
> match: github::IssuesEvent::assignee
> match: github::GithubAPI::get
> match: github::User::email
> match: github::User::blog
> match: github::Issue::closed_by
> match: nitcorn::HttpRequest::int_arg
> match: github::GithubError
> match: json::JsonSerializer::plain_json
> match: curl::CurlHTTPRequest::user_agent
> match: github::MemberEvent
> match: core::Finalizable::finalize
> match: ini::ConfigTree::at
> match: serialization>
> match: serialization
> match: popcorn>
> match: popcorn
> match: github::PullRequest::merged_by
> match: core::Error::message
> match: nitcorn::HttpRequest::bool_arg
> match: github::GithubAPI::user_agent
> match: core::Object::SELF
> match: github::ForkEvent
> match: core::file::Text::files
> match: serialization::Deserializer::deserialize_attribute
> match: core::union_find::DisjointSet::find
> match: github::GithubCurl::user_agent
> match: core::Path::stat
> match: json::JsonStore
> match: core::ProcessDuplex
> match: core::Text::to_cstring
> match: github::GithubAPI::api_url
> match: popcorn::Repository::find_all
> match: github>
> match: github
> match: nitcorn::HttpStatusCodes::[]
> match: core::queue::Sequence::as_fifo
> match: core::queue::Sequence::as_lifo
> match: core::math::Float::is_nan
> match: core::SequenceRead::get_or_null
> match: core::BytePattern::last_index_in
> match: core::BytePattern::first_index_in
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::BytePattern::last_index_in_from
> match: core::Object::output
> match: mongodb::MongoMatch::lnot
> match: core::BytePattern::first_index_in_from
> match: curl::CurlMail::set_outgoing_server
> match: popcorn::AppGlobRoute
> match: core::Object::output_class_name
> match: github::GithubAPI
> match: core::MapRead::get_or_null
> match: core::FileStream::file_stat
> match: core::Map
> match: core::file::Text::file_extension
> match: core::Object::is_same_type
> match: json::serialization_read::Text::deserialize_json
> match: core::Reader
> match: mongodb::MongoDb::client
> match: core::bytes::Int::to_bytes
> match: core::Writer

~~~
import github

var api = new GithubAPI(get_github_oauth)
var user = api.load_user("Morriar")
print user or else "null"
assert user.login == "Morriar"
~~~

### `User` - # A Github user

> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user

Provides access to [Github user data](https://developer.github.com/v3/users/).
Should be accessed from `GithubAPI::load_user`.

> match: github::User
> match: github::Repo
> match: github::GithubAPI::load_user
> match: github::LoaderConfig::tokens
> match: github::github
> match: github::Commit
> match: github::Branch
> match: github::PullRequest
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Label
> match: github::Comment::user
> match: github::IssueEvent
> match: github::Issue
> match: core::Text::[]
> match: github::GithubAPI
> match: github::IssueComment
> match: github::Milestone
> match: github::ReviewComment
> match: core::file::NativeFileStat::atime
> match: github::GithubAPI::load_auth_user
> match: core::FileStat::atime
> match: core::file::Text::to_path
> match: github::GithubAPI::auth
> match: github::ContributorStats
> match: core::FileStat::last_access_time
> match: core::CircularArray
> match: core::flat::ASCIIFlatString
> match: more_collections::MultiHashMap
> match: core::Path
> match: github::GithubAPI::api_url
> match: core::FinalizableOnce
> match: mongodb::NativeMongoDb
> match: core::Collection
> match: serialization::SafeDeserializer::check_subtypes
> match: github>
> match: github
> match: core::file::Int::fd_to_stream
> match: github::GitUser
> match: mongodb::NativeMongoClient
> match: serialization::Serializable::core_serialize_to
> match: mongodb::NativeBSON::destroy
> match: mongodb::NativeMongoCollection
> match: core::file::Text::simplify_path
> match: github::cache
> match: serialization>
> match: serialization
> match: curl::CurlHTTPRequest::data
> match: core::Writable
> match: json::JsonDeserializer::class_name_heuristic
> match: core::gc
> match: core::flat::FlatBuffer::with_infos
> match: mongodb::native_mongodb::NativeCStringArray::destroy
> match: popcorn>
> match: popcorn
> match: curl::CurlHTTPRequest::body
> match: config>
> match: config
> match: mongodb::NativeMongoCollection::destroy
> match: core::Regex::compile
> match: github::MemberEvent::member
> match: mongodb::NativeMongoDb::destroy
> match: mongodb::NativeMongoClient::destroy
> match: popcorn::pop_handlers::HttpResponse::error
> match: mongodb::NativeMongoCursor::destroy
> match: core::Finalizable::finalize
> match: core::Object::object_id
> match: core::FlatText::fast_cstring
> match: github::ContributorStats::author
> match: core::abstract_text::Object::to_s
> match: template::Template::add
> match: github::User::name

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

> match: github>
> match: github
> match: core::Object::SELF
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: meta::meta::Object::CLASS
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: core::FinalizableOnce
> match: core::IteratorDecorator
> match: core::Object
> match: serialization>
> match: serialization
> match: serialization::Serializable::from_deserializer
> match: curl::CURLSList
> match: opts::Option
> match: core::file::NativeFile
> match: json::JsonDeserializer::class_name_heuristic
> match: mongodb::MongoMatch::land
> match: mongodb::MongoMatch::lor
> match: github>
> match: github
> match: github::User::avatar_url
> match: curl::CURLOption::url
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: nitcorn::HttpRequest::url
> match: github::User
> match: github::GithubAPI::load_user
> match: github::User::blog
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github::User::email
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github::User::login
> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::User::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::Repo::name
> match: github>
> match: github
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github>
> match: github
> match: github::User::avatar_url
> match: curl::CURLOption::url
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: nitcorn::HttpRequest::url
> match: github::User
> match: github::GithubAPI::load_user
> match: github::User::avatar_url
> match: github>
> match: github
> match: curl::CURLOption::url
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: nitcorn::HttpRequest::url
> match: github::User
> match: github::User::blog
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github::User::blog
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github>
> match: github
> match: serialization::Serializable::core_serialize_to
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: serialization::serialization
> match: github::User
> match: json::serialization_write::Serializable::accept_json_serializer
> match: github::GithubAPI::load_user
> match: serialization::Serializer
> match: github::GithubAPI::load_auth_user
> match: serialization::Serializer::current_object
> match: serialization::Serializer::serialize_core
> match: core::abstract_text::Object::to_s
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::Serializable::serialize_to
> match: mongodb::MongoMatch::land
> match: mongodb::MongoMatch::lor
> match: serialization>
> match: serialization
> match: mongodb::MongoMatch::lnot
> match: core::Object::SELF
> match: serialization::CachingSerializer
> match: mongodb::MongoMatch::lnor
> match: json::JsonSerializer
> match: core::Regex::newline
> match: github::User::name
> match: serialization::engine_tools::Object::is_same_serialized
> match: github::IssueEvent::assignee
> match: github::Issue::assignee
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::inspect::InspectSerializer
> match: github::Milestone::creator
> match: github::MemberEvent::member
> match: mongodb::MongoObjectId::to_json
> match: github::GitUser
> match: github::User::email
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github::User::email
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: github>
> match: github
> match: github::Issue::user
> match: serialization::Serializable::from_deserializer
> match: github::PullRef::user
> match: github::Comment::user
> match: github::User
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: meta::meta::Object::CLASS
> match: serialization>
> match: serialization
> match: github::Milestone::creator
> match: opts::Option
> match: core::file::NativeFile
> match: json::JsonDeserializer::class_name_heuristic
> match: mongodb::MongoMatch::land
> match: mongodb::MongoMatch::lor
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::User::login
> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::User::login
> match: github>
> match: github
> match: github::GithubAPI::load_user
> match: github::User::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::Repo::name
> match: github>
> match: github
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::Repo::name
> match: github>
> match: github
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user

### Retrieving repo data

> match: github::PullRef::repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: github::Repo::name
> match: curl::CurlHTTPRequest::data
> match: github::Repo::owner
> match: github::LoaderJob
> match: github::Repo::default_branch
> match: core::flat::FlatString::full
> match: core::flat::FlatString::with_infos

### `load_repo` - # Get the Github repo with `full_name`.

> match: github>
> match: github
> match: github::GithubAPI::load_repo
> match: github::Repo::full_name
> match: github::PullRef::repo
> match: curl::CURLOption::get
> match: popcorn::Handler::get
> match: github::LoaderJob::repo
> match: github::Repo
> match: github::GithubEvent::repo
> match: github::GithubAPI::get
> match: github::Repo::owner
> match: github::RepoEntity::repo
> match: github::Repo::name

Loads the `Repo` from the API or returns `null` if the repo cannot be found.

> match: github::PullRef::repo
> match: github::GithubAPI::load_repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::Repo
> match: github::RepoEntity::repo
> match: popcorn::Repository::find
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::GithubAPI::load_commit
> match: github::GithubAPI::load_issue
> match: github::GithubAPI::load_branch
> match: github::GithubAPI::load_milestone
> match: github::loader::Loader::load_last_issue
> match: github::GithubAPI::load_label
> match: github::GithubAPI::load_issue_event
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_pull
> match: mongodb::MongoCollection::find
> match: github::GithubAPI::load_review_comment
> match: github::GithubAPI::get
> match: nitcorn::HttpRequest::int_arg
> match: github::GithubError
> match: json::JsonSerializer::plain_json
> match: json::JsonDeserializer::class_name_heuristic
> match: ini::ConfigTree::at
> match: core::Error::message
> match: nitcorn::HttpRequest::bool_arg
> match: core::Object::SELF
> match: serialization::Deserializer::deserialize_attribute
> match: core::union_find::DisjointSet::find
> match: core::Path::stat
> match: json::JsonStore
> match: github::Loader::repos
> match: core::ProcessDuplex
> match: core::Text::to_cstring
> match: github::GithubAPI::api_url
> match: popcorn::Repository::find_all
> match: nitcorn::HttpStatusCodes::[]
> match: core::math::Float::is_nan
> match: core::SequenceRead::get_or_null
> match: github::Repo::name
> match: serialization>
> match: serialization
> match: core::Finalizable::finalize
> match: core::BytePattern::last_index_in
> match: core::BytePattern::first_index_in
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::BytePattern::last_index_in_from
> match: core::Object::output
> match: mongodb::MongoMatch::lnot
> match: popcorn>
> match: popcorn
> match: core::BytePattern::first_index_in_from
> match: github::Repo::full_name
> match: config>
> match: config
> match: popcorn::AppGlobRoute
> match: github::Repo::owner
> match: core::Object::output_class_name
> match: github::GithubAPI
> match: core::MapRead::get_or_null
> match: github::LoaderJob
> match: core::FileStream::file_stat
> match: core::Map
> match: core::file::Text::file_extension
> match: core::Object::is_same_type
> match: github::Repo::default_branch
> match: json::serialization_read::Text::deserialize_json
> match: core::Reader
> match: mongodb::MongoDb::client
> match: core::bytes::Int::to_bytes
> match: core::Writer
> match: core::Text::index_of
> match: more_collections::UnrolledList::nodes_length
> match: core::Text::last_index_of
> match: mongodb::NativeBSON::from_json_string
> match: mongodb::NativeMongoCollection::find
> match: ini::ConfigTree::load
> match: core::Bytes::items
> match: core::file::Text::simplify_path
> match: core::file::Text::files
> match: core::Path::rmdir
> match: github::GithubAPI::load_from_github
> match: popcorn::Repository
> match: core::Char::to_i
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Duplex
> match: core::SimpleCollection
> match: core::Reader::read_char
> match: json::store
> match: serialization::Serializable
> match: core::Writer::is_writable
> match: core::Comparable::OTHER
> match: core::Object
> match: github::loader::Loader::load_issue_events
> match: core::RemovableCollection
> match: github::loader::Loader::load_issue_comments
> match: core::Reader::read_nonwhitespace
> match: json::JsonStore::load_object
> match: mongodb::MongoMatch::is_nin
> match: core::Path::each_line
> match: github::CreateEvent::ref
> match: core::file::Text::rmdir
> match: core::Text::index_of_from
> match: libevent::NativeEventBase::reinit
> match: github::DeleteEvent::ref_type
> match: core::Regex::compile
> match: core::Text::last_index_of_from
> match: json::JsonStore::load_array
> match: github::loader::Loader::load_issue
> match: github::loader::Loader::load_pull
> match: github::DeleteEvent::ref
> match: mongodb::MongoError
> match: serialization::Serializer::try_to_serialize
> match: github::Loader::load_issues
> match: core::abstract_text::Float::to_precision_size

~~~
import github

var api = new GithubAPI(get_github_oauth)
var repo = api.load_repo("nitlang/nit")
assert repo.name == "nit"
assert repo.owner.login == "nitlang"
assert repo.default_branch == "master"
~~~

### `Repo` - # A Github repository.

> match: github>
> match: github
> match: github::github
> match: github::Repo

Provides access to [Github repo data](https://developer.github.com/v3/repos/).
Should be accessed from `GithubAPI::load_repo`.

> match: github::Repo
> match: github::User
> match: github::GithubAPI::load_repo
> match: github::LoaderConfig::tokens
> match: github::github
> match: github::Commit
> match: github::PullRef::repo
> match: github::Branch
> match: github::PullRequest
> match: github::Label
> match: github::IssueEvent
> match: github::Issue
> match: core::Text::[]
> match: github::GithubAPI
> match: github::LoaderJob::repo
> match: github::IssueComment
> match: github::Milestone
> match: github::ReviewComment
> match: core::file::NativeFileStat::atime
> match: github::GithubEvent::repo
> match: core::FileStat::atime
> match: core::file::Text::to_path
> match: github::RepoEntity::repo
> match: github::GithubAPI::auth
> match: github::ContributorStats
> match: core::FileStat::last_access_time
> match: github::Repo::name
> match: core::CircularArray
> match: core::flat::ASCIIFlatString
> match: more_collections::MultiHashMap
> match: core::Path
> match: github::GithubAPI::api_url
> match: mongodb::NativeMongoDb
> match: core::Collection
> match: serialization::SafeDeserializer::check_subtypes
> match: core::file::Int::fd_to_stream
> match: mongodb::NativeMongoClient
> match: serialization::Serializable::core_serialize_to
> match: mongodb::NativeBSON::destroy
> match: github>
> match: github
> match: mongodb::NativeMongoCollection
> match: core::file::Text::simplify_path
> match: github::cache
> match: curl::CurlHTTPRequest::data
> match: core::Writable
> match: github::Repo::owner
> match: github::LoaderJob
> match: core::gc
> match: core::flat::FlatBuffer::with_infos
> match: github::Repo::default_branch
> match: mongodb::native_mongodb::NativeCStringArray::destroy
> match: curl::CurlHTTPRequest::body
> match: mongodb::NativeMongoCollection::destroy
> match: mongodb::NativeMongoDb::destroy
> match: mongodb::NativeMongoClient::destroy
> match: popcorn::pop_handlers::HttpResponse::error
> match: mongodb::NativeMongoCursor::destroy
> match: serialization>
> match: serialization
> match: core::Object::object_id
> match: core::FlatText::fast_cstring
> match: github::Repo::full_name
> match: template::Template::add
> match: core::math::Float::is_nan
> match: mongodb::MongoClient::close

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

> match: github>
> match: github
> match: core::Object::SELF
> match: github::PullRef::repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: meta::meta::Object::CLASS
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: core::IteratorDecorator
> match: github::Repo
> match: core::Object
> match: serialization::Serializable::from_deserializer
> match: github::Repo::name
> match: curl::CURLSList
> match: opts::Option
> match: core::file::NativeFile
> match: serialization>
> match: serialization
> match: mongodb::MongoMatch::land
> match: github::Repo::owner
> match: mongodb::MongoMatch::lor
> match: mongodb::MongoGroup::max
> match: github>
> match: github
> match: more_collections::DefaultMap::default
> match: github::Branch::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::CreateEvent::master_branch
> match: github::Repo::default_branch
> match: github::User::name
> match: github::Repo::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::GithubAPI::load_branch
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::StatusEvent::branches
> match: console::TermCharFormat::default
> match: more_collections::DefaultMap
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::OptionEnum::init
> match: github::Repo::full_name
> match: github::LoaderJob::repo
> match: curl::CurlHTTPRequest::method
> match: github::PullRequest::base
> match: github>
> match: github
> match: github::Repo::full_name
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: more_collections::more_collections::UnrolledNode::full
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Repo
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::LoaderJob::repo
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github>
> match: github
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::Option::names
> match: github::Repo::full_name
> match: github::Repo::owner
> match: github>
> match: github
> match: github::PullRef::repo
> match: curl::CURLOption::get
> match: github::GithubAPI::load_repo
> match: popcorn::Handler::get
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::DeploymentEvent::name
> match: github::RepoEntity::repo
> match: github::GithubAPI::get
> match: github>
> match: github
> match: github::PullRef::repo
> match: serialization::Serializable::core_serialize_to
> match: serialization::serialization
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob
> match: json::serialization_write::Serializable::accept_json_serializer
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: serialization::Serializer
> match: github::LoaderConfig
> match: github::Repo
> match: serialization::Serializer::current_object
> match: serialization::Serializer::serialize_core
> match: github::Repo::name
> match: github::Loader
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::Serializable::serialize_to
> match: mongodb::MongoMatch::land
> match: github::Repo::owner
> match: mongodb::MongoMatch::lor
> match: github::Repo::default_branch
> match: mongodb::MongoMatch::lnot
> match: core::Object::SELF
> match: serialization::CachingSerializer
> match: mongodb::MongoMatch::lnor
> match: json::JsonSerializer
> match: core::Regex::newline
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization>
> match: serialization
> match: github::loader::Loader::load_last_issue
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::inspect::InspectSerializer
> match: mongodb::MongoObjectId::to_json
> match: github>
> match: github
> match: github::PullRef::repo
> match: serialization::Serializable::core_serialize_to
> match: serialization::serialization
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: json::serialization_write::Serializable::accept_json_serializer
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: serialization::Serializer
> match: github::Repo
> match: serialization::Serializer::current_object
> match: serialization::Serializer::serialize_core
> match: github::Repo::name
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::Serializable::serialize_to
> match: mongodb::MongoMatch::land
> match: github::Repo::owner
> match: mongodb::MongoMatch::lor
> match: github::LoaderJob
> match: github::Repo::default_branch
> match: mongodb::MongoMatch::lnot
> match: core::Object::SELF
> match: serialization::CachingSerializer
> match: mongodb::MongoMatch::lnor
> match: json::JsonSerializer
> match: core::Regex::newline
> match: serialization::engine_tools::Object::is_same_serialized
> match: serialization>
> match: serialization
> match: github::loader::Loader::load_last_issue
> match: json::serialization_write::JsonSerializer::open_objects
> match: serialization::inspect::InspectSerializer
> match: mongodb::MongoObjectId::to_json
> match: serialization::DuplexCache
> match: github>
> match: github
> match: more_collections::DefaultMap::default
> match: github::Branch::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::CreateEvent::master_branch
> match: github::Repo::default_branch
> match: github::User::name
> match: github::Repo::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::GithubAPI::load_branch
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::StatusEvent::branches
> match: console::TermCharFormat::default
> match: more_collections::DefaultMap
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::OptionEnum::init
> match: github::Repo::full_name
> match: github::LoaderJob::repo
> match: curl::CurlHTTPRequest::method
> match: github::PullRequest::base
> match: github::Repo::default_branch
> match: github>
> match: github
> match: more_collections::DefaultMap::default
> match: github::Branch::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::CreateEvent::master_branch
> match: github::User::name
> match: github::Repo::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::GithubAPI::load_branch
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::StatusEvent::branches
> match: console::TermCharFormat::default
> match: more_collections::DefaultMap
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::OptionEnum::init
> match: github::Repo::full_name
> match: github::LoaderJob::repo
> match: github>
> match: github
> match: serialization::Serializable::from_deserializer
> match: github::PullRef::repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: github::Repo
> match: meta::meta::Object::CLASS
> match: github::Repo::name
> match: opts::Option
> match: core::file::NativeFile
> match: mongodb::MongoMatch::land
> match: github::Repo::owner
> match: mongodb::MongoMatch::lor
> match: github::LoaderJob
> match: serialization>
> match: serialization
> match: github>
> match: github
> match: serialization::Serializable::from_deserializer
> match: github::PullRef::repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::LoaderJob
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: github::LoaderConfig
> match: github::Repo
> match: meta::meta::Object::CLASS
> match: github::Repo::name
> match: github::Loader
> match: opts::Option
> match: core::file::NativeFile
> match: mongodb::MongoMatch::land
> match: github::Repo::owner
> match: mongodb::MongoMatch::lor
> match: serialization>
> match: serialization
> match: github>
> match: github
> match: github::Repo::full_name
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: more_collections::more_collections::UnrolledNode::full
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Repo
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::LoaderJob::repo
> match: github::Repo::full_name
> match: github>
> match: github
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: more_collections::more_collections::UnrolledNode::full
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github::Repo
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: github::LoaderJob::repo
> match: github::PullRef::repo
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::GithubAPI::load_repo
> match: github::RepoEntity::repo
> match: github>
> match: github
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github>
> match: github
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::Option::names
> match: github::Repo::full_name
> match: github::Repo::name
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: meta::Class::name
> match: github::User::name
> match: nitcorn::vararg_routes::UriParam::name
> match: popcorn::pop_routes::UriParam::name
> match: github>
> match: github
> match: github::Label::name
> match: mongodb::MongoDb::name
> match: github::DeploymentEvent::name
> match: github::Branch::name
> match: nitcorn::Interface::name
> match: ini::ini::ConfigNode::name
> match: opts::Option::names
> match: github::Repo::full_name
> match: github::Repo::owner
> match: github>
> match: github
> match: github::PullRef::repo
> match: curl::CURLOption::get
> match: github::GithubAPI::load_repo
> match: popcorn::Handler::get
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::DeploymentEvent::name
> match: github::RepoEntity::repo
> match: github::GithubAPI::get
> match: github::Repo::owner
> match: github>
> match: github
> match: github::PullRef::repo
> match: curl::CURLOption::get
> match: github::GithubAPI::load_repo
> match: popcorn::Handler::get
> match: github::LoaderJob::repo
> match: github::GithubEvent::repo
> match: github::DeploymentEvent::name
> match: github::RepoEntity::repo
> match: github::GithubAPI::get

### Other data

> match: curl::CurlHTTPRequest::data
> match: core::Object::is_same_type
> match: core::Comparable::>
> match: core::Comparable::<=
> match: core::Comparable::>=
> match: core::exec::Process::data
> match: core::Array::+
> match: github::GithubAPI::get
> match: core::abstract_text::CString::to_s_unsafe
> match: core::CString
> match: core::Object::!=
> match: core::Comparable::max
> match: realtime::realtime::Timespec::-
> match: curl::CurlHTTPRequest::body
> match: core::Comparable::OTHER
> match: curl::CurlMail::bcc
> match: core::Set::union
> match: core::Set::intersection
> match: core::Object
> match: core::AbstractArrayRead::copy_to
> match: serialization::engine_tools::Object::is_same_serialized

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

> match: github>
> match: github
> match: github::Branch
> match: github::StatusEvent::branches
> match: github::GithubAPI::load_branch
> match: github::github
> match: github::Branch::name
> match: github::Loader::branches
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github>
> match: github
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_review_comment
> match: github::Comment
> match: github::Issue::comments
> match: github::Comment::body
> match: github::ReviewComment::position
> match: github::CommitComment::position
> match: github::CommitComment
> match: github::Branch::commit
> match: github::Commit::commit
> match: github>
> match: github
> match: github::GithubAPI::load_commit
> match: github::Commit
> match: github::Commit::message
> match: github::PullRequest::commits
> match: github::GitCommit::message
> match: github::Commit::sha
> match: github::StatusEvent::sha
> match: github::GitCommit::sha
> match: github::PushEvent::commits
> match: github::PullRef::sha
> match: github>
> match: github
> match: github::Comment
> match: github::CommitComment
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::GithubAPI::load_commit_comment
> match: github::CommitCommentEvent
> match: github>
> match: github
> match: github::Repo
> match: github::ContributorStats
> match: github::User
> match: github::LoaderJob::repo
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: serialization::SafeDeserializer::check_subtypes
> match: github::Milestone
> match: github::Label
> match: github::PullRequest
> match: github::GithubEvent::repo
> match: github::IssueEvent
> match: mongodb::NativeBSON::destroy
> match: core::Text::[]
> match: github::IssueComment
> match: github::PullRef::repo
> match: github::ReviewComment
> match: core::file::NativeFileStat::atime
> match: mongodb::native_mongodb::NativeCStringArray::destroy
> match: github::GithubAPI::api_url
> match: github::LoaderConfig::tokens
> match: mongodb::NativeMongoCollection::destroy
> match: serialization::Serializable::core_serialize_to
> match: mongodb::NativeMongoDb::destroy
> match: mongodb::NativeMongoClient::destroy
> match: popcorn::pop_handlers::HttpResponse::error
> match: mongodb::NativeMongoCursor::destroy
> match: serialization>
> match: serialization
> match: template::Template::add
> match: core::math::Float::is_nan
> match: mongodb::MongoClient::close
> match: core::FileStat::atime
> match: core::file::Text::to_path
> match: nitcorn::HttpFactory::config
> match: serialization::Deserializer::deserialize_class
> match: core::flat::FlatBuffer::with_infos
> match: core::Cloneable::clone
> match: json::JsonDeserializer::class_name_heuristic
> match: serialization::Serializer::serialize_attribute
> match: core::FileStat::last_access_time
> match: core::Finalizable::finalize
> match: core::file::Text::simplify_path
> match: core::flat::ASCIIFlatString
> match: serialization::Deserializer::deserialize_class_intern
> match: github::GithubAPI::auth
> match: core::Error::message
> match: csv::CsvStream
> match: github::RepoEntity::repo
> match: csv::csv::Text::chars_to_unescape_csv
> match: core::CircularArray
> match: core::Sys
> match: core::Object::hash
> match: core::file::Int::fd_to_stream
> match: core::Object::object_id
> match: core::FinalizableOnce
> match: mongodb::NativeBSON::new
> match: csv::csv::Text::chars_to_escape_csv
> match: core::FlatText::fast_cstring
> match: github::github
> match: github::Loader::repos
> match: github::LoaderConfig::start_from_issue
> match: core::Reader::each_line
> match: mongodb::mongodb::BSON
> match: serialization::AsyncCache::use_even
> match: serialization::Deserializer
> match: github>
> match: github
> match: serialization::Serializer
> match: github::Commit::commit
> match: github>
> match: github
> match: github::GitCommit
> match: github::Branch::commit
> match: github::GitUser
> match: github>
> match: github
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::GitUser::date
> match: github::Commit::author_date
> match: github>
> match: github
> match: github::GithubAPI
> match: github::github
> match: github>
> match: github
> match: github::GithubDeserializer
> match: json::JsonDeserializer
> match: github::github
> match: core::Object::object_id
> match: poset::POSetElement
> match: core::Object::is_same_instance
> match: json::serialization_read::JsonDeserializer::convert_object
> match: meta::meta::Object::class_factory
> match: json>
> match: json
> match: github::GithubAPI::load_from_github
> match: mongodb::MongoError::code
> match: github>
> match: github
> match: github::GithubEntity
> match: github::GithubAPI
> match: github::github
> match: mongodb::MongoObjectId::to_json
> match: core::Reader::eof
> match: github::GithubWallet::tokens
> match: github::ContributorStats::api
> match: github::GithubAPI::get
> match: core::ProcessDuplex::write_and_read
> match: core::PollableReader::poll_in
> match: core::Char::to_i
> match: github::GithubAPI::last_error
> match: github::HookListener::api
> match: github::GithubAPI::load_user
> match: github::GithubAPI::api_url
> match: github::GithubAPI::load_repo
> match: core::Cloneable
> match: core::file::Sys::buffer_mode_none
> match: github::GithubAPI::load_auth_user
> match: github::GithubAPI::auth
> match: core::Error::message
> match: github::Repo
> match: github>
> match: github
> match: core::file::FileStream::file
> match: github::GithubFile
> match: github::github
> match: curl::curl::CurlFileResponseSuccess::file
> match: core::file::Int::fd_to_stream
> match: core::FileStream::fd
> match: core::file::Sys::wipe_write
> match: core::FileWriter::from_fd
> match: core::FileReader::from_fd
> match: core::Path::delete
> match: core::Path::filename
> match: core::Path::exists
> match: mongodb::MongoObjectId::to_json
> match: core::abstract_text::Object::to_s
> match: github>
> match: github
> match: core::ISODate
> match: core::ISODate::from_string
> match: github::Milestone::iso_due_on
> match: github::IssueCommentEvent::issue
> match: github::IssuesEvent::issue
> match: github>
> match: github
> match: github::GithubAPI::load_issue
> match: github::Issue
> match: github::Issue::number
> match: github::Issue::id
> match: github::Issue::state
> match: github::Issue::title
> match: curl::CURLOption::get
> match: github::Issue::locked
> match: github::IssueComment::issue_number
> match: github::Comment
> match: github>
> match: github
> match: github::IssueComment
> match: github::IssueCommentEvent::issue
> match: github::GithubAPI::load_pull
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::GithubAPI::load_issue_comment
> match: github::PullRequest::review_comments
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequestReviewCommentEvent::pull
> match: github::ReviewComment
> match: github::Issue::is_pull_request
> match: github::IssuesEvent::issue
> match: github::PullRequestEvent::number
> match: github::PullRequest::merged
> match: github::IssueCommentEvent
> match: github::PullRequest::mergeable
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_issue
> match: github::ReviewComment::pull_number
> match: github::GithubAPI::load_review_comment
> match: github::PullRequestEvent
> match: github::Issue::comments
> match: github::ReviewComment::pull_request_url
> match: github::PullRef
> match: github::PullRequest
> match: github::PullRequest::merged_by
> match: github::CommitComment
> match: github::GithubEntity::html_url
> match: github::Issue::number
> match: github::PullRequestEvent::pull
> match: github::PullRequest::base
> match: github::Issue::state
> match: github>
> match: github
> match: github::IssueEvent::event
> match: github::IssueEvent
> match: github::GithubAPI::load_issue_event
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: github::GithubEvent::repo
> match: libevent::NativeEventBase::reinit
> match: github::IssuesEvent::issue
> match: github::GithubEvent
> match: github::Issue
> match: libevent::NativeEventBase::dispatch
> match: github>
> match: github
> match: github::GithubAPI::load_label
> match: github::Label::name
> match: github::PullRef::labl
> match: github::Label
> match: github::Issue::labels
> match: github::IssueEvent::labl
> match: github::Label::color
> match: github::IssuesEvent::lbl
> match: github>
> match: github
> match: github::Issue::milestone
> match: github::IssueEvent::milestone
> match: github::GithubAPI::load_milestone
> match: github::Milestone
> match: github::github
> match: github::PullRef
> match: github>
> match: github
> match: github::PullRequest::head
> match: github::PullRequest::base
> match: github::GithubAPI::load_pull
> match: github::PullRequestEvent::number
> match: nitcorn::reactor::Action::answer
> match: github::PullRequest::merged
> match: github::PullRequest::mergeable
> match: github::ReviewComment::pull_number
> match: popcorn::Handler::all
> match: github::PullRequestEvent
> match: github::ReviewComment::pull_request_url
> match: github::PullRequest::merged_by
> match: core::circular_array::CircularArray::head
> match: github::Comment
> match: github::PullRequest::review_comments
> match: core::list::List::head
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequestEvent::pull
> match: libevent::ConnectionListener::base
> match: github::PullRequest::commits
> match: core::circular_array::CircularArray::native
> match: github::loader::Loader::load_pull
> match: github::PullRequestReviewCommentEvent::pull
> match: core::abstract_text::Int::fill_buffer
> match: github::Issue::is_pull_request
> match: github::IssueComment
> match: github::ReviewComment
> match: popcorn::Router::use
> match: serialization::DeserializerCache
> match: core::math::Float::log_base
> match: core::Match::string
> match: github::PullRequest::mergeable_state
> match: github::PushEvent::head_commit
> match: core::fixed_ints_text::Text::get_numhead
> match: mongodb::MongoClient::close
> match: core::fixed_ints_text::Text::strip_numhead
> match: github>
> match: github
> match: github::GithubAPI::load_pull
> match: github::PullRequestEvent::pull
> match: github::Comment
> match: github::PullRequestReviewCommentEvent::pull
> match: github::PullRequestEvent::number
> match: github::PullRequest::merged
> match: github::PullRequest::mergeable
> match: github::PullRequest
> match: github::github
> match: github::ReviewComment::pull_number
> match: github::PullRequestEvent
> match: github::ReviewComment::pull_request_url
> match: github::PullRef
> match: github::IssueComment
> match: github::PullRequest::merged_by
> match: github::ReviewComment
> match: github::PullRequest::review_comments
> match: github::PullRequestReviewCommentEvent
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: popcorn::Handler::all
> match: github::PullRequest::commits
> match: github::loader::Loader::load_pull
> match: nitcorn::reactor::Action::answer
> match: github::Issue::is_pull_request
> match: github::RenameAction
> match: github::IssueEvent::rename
> match: github::GithubEvent::action
> match: mongodb::MongoCollection::rename
> match: github>
> match: github
> match: mongodb::NativeMongoCollection::rename
> match: nitcorn::Action
> match: nitcorn::Route::path
> match: mongodb::MongoCollection::name
> match: github::GithubError::name
> match: github::RenameAction::from
> match: github::RenameAction::to
> match: meta::Class::name
> match: github::User::name
> match: github::Repo::name
> match: github>
> match: github
> match: github::PullRef::repo
> match: github::Repo
> match: github::LoaderJob::repo
> match: github::GithubAPI::load_repo
> match: github::GithubEvent::repo
> match: github::github
> match: github::RepoEntity::repo
> match: github::DeploymentEvent::name
> match: github::Comment
> match: github>
> match: github
> match: github::ReviewComment
> match: github::PullRequest::review_comments
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI::load_pull
> match: github::GithubAPI::load_review_comment
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::IssueComment
> match: github::PullRequestReviewCommentEvent::pull
> match: github::PullRequestEvent::number
> match: github::PullRequest::merged
> match: github::PullRequest::mergeable
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit_comment
> match: github::ReviewComment::pull_number
> match: github::PullRequestEvent
> match: github::ReviewComment::pull_request_url
> match: github::PullRef
> match: github::PullRequest::merged_by
> match: github::CommitComment
> match: github::PullRequestEvent::pull
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: popcorn::Handler::all
> match: github::PullRequest::commits
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github>
> match: github
> match: github::User
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: core::abstract_text::Object::to_s

### Advanced uses

> match: popcorn::Router::use
> match: core::re::NativeRegex
> match: core::MaybeError
> match: github::GithubCurl::header
> match: core::ropes::RopeCharIteratorPiece
> match: core::Iterator::finish
> match: core::Stream::finish
> match: core::MapIterator::finish
> match: github::GithubWallet::no_colors
> match: core::Iterator::start
> match: core::MapIterator::start
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Stream::start
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::AsyncCache::use_even
> match: core::CachedAlphaComparator
> match: libevent::NativeEventBase::new
> match: curl::native_curl::CURLSList::new
> match: core::FlatText::fast_cstring
> match: core::file::Text::join_path
> match: popcorn::pop_logging::ConsoleLog::display
> match: meta::meta::Object::class_factory
> match: libevent::Connection
> match: core::Object::object_id
> match: curl::CurlHTTPRequest::unix_socket_path
> match: core::MinHeap::default
> match: popcorn::AppGlobRoute
> match: c::CArray::destroy
> match: popcorn::StaticHandler
> match: core::flat::FlatText::fetch_char_at
> match: nitcorn::HttpFactory::and_libevent
> match: github::GithubAPI::get
> match: popcorn::RepositoryQuery
> match: core::Object::SELF

#### Caching

> match: serialization::CachingSerializer::cache
> match: serialization::CachingDeserializer::cache
> match: github::cache::GithubAPI::cache
> match: core::ropes::RopeBytes::cache
> match: core::abstract_text::CachedAlphaComparator::cache

#### Custom requests

> match: popcorn::Handler::all
> match: nitcorn::reactor::Action::answer
> match: github::GithubAPI::load_pull
> match: curl::CurlHTTPRequest
> match: nitcorn::HttpRequest::header
> match: github::PullRequestEvent::number
> match: nitcorn::HttpRequest::method
> match: curl::CurlHTTPRequest::headers
> match: github::PullRequest::merged
> match: nitcorn::sessions::HttpRequest::session
> match: github::PullRequest::mergeable
> match: nitcorn::Action
> match: curl::CurlHTTPRequest::url
> match: curl::CurlRequest::verbose

### `get` - # Execute a GET request on Github API.

> match: curl::CURLOption::get
> match: github::GithubAPI::get
> match: popcorn::Handler::get
> match: github>
> match: github
> match: curl::CurlMail::execute
> match: github::GithubAPI::load_pull
> match: core::list::List::get_node
> match: github::GithubAPI
> match: curl::CurlHTTPRequest::execute
> match: popcorn::Handler::all
> match: curl::CurlHTTPRequest::method
> match: core::NativeArray::[]
> match: core::CString::[]
> match: core::Range::last
> match: github::Branch::commit
> match: c::NativeCArray::[]
> match: core::Collection::iterator
> match: github::GithubAPI::load_user
> match: core::Range::after
> match: ini::ConfigTree::[]
> match: curl::CurlHTTPRequest

This method returns raw json data.
See other `load_*` methods to use more expressive types.

> match: github::GithubAPI::get
> match: nitcorn::HttpRequest::method
> match: core::Object::SELF
> match: core::Object::is_same_type
> match: curl::CurlHTTPRequest::method
> match: github::GithubError::json
> match: popcorn::Handler::all
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json>
> match: json
> match: curl::CurlHTTPRequest::body
> match: json::JsonStore
> match: mongodb::MongoError
> match: template::Template
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::json
> match: github::GithubAPI::load_from_github
> match: json::store
> match: curl::curl::CurlHTTPRequest::set_method
> match: json::store::JsonStore::store_json
> match: core::Text::empty
> match: github::PullRequest
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Stream::codec
> match: core::Reader::read_lines
> match: popcorn::JsonRepository
> match: core::MaybeError
> match: nitcorn::HttpRequest::body
> match: popcorn>
> match: popcorn
> match: core::Finalizable::finalize
> match: core::FinalizableOnce::finalize_once
> match: curl::native_curl::CURLSList::native_data
> match: core::file::Text::join_path
> match: curl::native_curl::NativeCurl::native_getinfo_chars
> match: core::math::Sys::srand
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::abstract_text::CString::to_s_unsafe
> match: libevent::Connection::read_callback
> match: curl::native_curl::NativeCurl::native_getinfo_long
> match: curl::native_curl::NativeCurl::native_getinfo_double
> match: serialization::Serializer::serialize
> match: core::Collection
> match: mongodb::MongoDb::client
> match: mongodb::NativeBSON::from_json_string
> match: curl::native_curl::NativeCurl::native_getinfo_slist
> match: popcorn::Router::use
> match: popcorn::pop_handlers::HttpResponse::redirect
> match: curl::CURLSList
> match: json::JsonSerializer::plain_json
> match: curl::native_curl::CURLSList::native_data_reachable
> match: core::Sys::main
> match: json::serialization_read::Text::deserialize_json
> match: mongodb::MongoClient::server_status
> match: github::cache::GithubAPI::cache
> match: nitcorn::Routes
> match: curl::CurlHTTPRequest::data
> match: core::re::NativeRegex
> match: ini::ConfigTree::load
> match: serialization::Serializable::core_serialize_to
> match: core::Reader::append_line_to
> match: core::Task::main
> match: curl::native_curl::NativeCurl::native_setopt_string
> match: core::FileStream::file_stat
> match: serialization>
> match: serialization
> match: libevent::Connection::write_file
> match: json::JSONStringParser
> match: core::Text::SELFTYPE
> match: curl::native_curl::NativeCurl::native_setopt_int
> match: core::Queue
> match: popcorn::Handler
> match: curl::curl::CurlRequest::answer_failure
> match: nitcorn::reactor::Action::prepare_respond_and_close
> match: core::Reader::each_line
> match: libevent::Connection::write_callback
> match: curl::native_curl::NativeCurl::native_setopt_slist
> match: core::CString
> match: core::abstract_text::CString::to_s_full
> match: template::Template::add
> match: json::JsonArray

~~~
import github

var api = new GithubAPI(get_github_oauth)
var obj = api.get("/repos/nitlang/nit")
assert obj isa JsonObject
assert obj["name"] == "nit"
~~~

Returns `null` in case of `error`.

> match: core::MaybeError::error
> match: github::Loader::error
> match: core::FileStream::file_stat
> match: popcorn::ConsoleLog::error
> match: core::file::Text::chdir
> match: popcorn::pop_handlers::HttpResponse::error
> match: core::Path::stat
> match: core::Path::files
> match: core::Path::read_all_bytes
> match: core::Path::read_all
> match: core::Path::read_lines
> match: mongodb::MongoError
> match: core::file::Text::mkdir
> match: github::GithubAPI::get
> match: core::Error
> match: core::Path::delete
> match: core::file::Text::rmdir
> match: core::Path::copy
> match: mongodb::MongoClient::server_status
> match: core::Regex::compile
> match: mongodb::MongoDb::collection_names
> match: mongodb::MongoCollection::stats
> match: core::file::Text::files
> match: nitcorn::ErrorTemplate
> match: core::Path::each_line
> match: core::Error::cause
> match: core::Text::to_cstring
> match: mongodb::NativeMongoClient::server_status
> match: nitcorn::HttpStatusCodes::[]
> match: core::re::NativeRegex::regerror
> match: mongodb::NativeMongoClient::database_names
> match: github::GithubError
> match: core::Char::to_lower
> match: core::Char::to_upper
> match: core::exec::Sys::system
> match: ini::ConfigTree::at
> match: core::MaybeError
> match: core::SequenceRead::get_or_null
> match: mongodb::MongoCollection::find
> match: core::file::Text::file_extension
> match: opts::OptionContext::errors
> match: core::Reader::read_nonwhitespace
> match: core::abstract_text::Int::strerror
> match: mongodb::NativeBSON::from_json_string
> match: core::Buffer::snake_case
> match: core::Buffer::camel_case
> match: opts::Option::errors
> match: mongodb::MongoDb::drop
> match: serialization::Deserializer::errors
> match: mongodb::MongoCollection::drop
> match: base64::base64::Text::check_base64
> match: base64::base64::Bytes::check_base64
> match: base64::base64::CString::check_base64
> match: core::Path::rmdir
> match: core::Reader::read_byte
> match: nitcorn::ErrorTemplate::code
> match: serialization::Deserializer::deserialize_attribute
> match: mongodb::NativeMongoCursor::current
> match: core::FileReader::open

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

> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: curl::CurlHTTPRequest::user_agent
> match: github::User
> match: github::GithubAPI::user_agent
> match: github::GithubAPI::load_user
> match: github::GithubCurl::user_agent
> match: github::GithubAPI::load_auth_user

### `user_agent` - # User agent used for HTTP requests.

> match: github>
> match: github
> match: curl::CurlHTTPRequest::user_agent
> match: github::GithubAPI::user_agent
> match: popcorn::Handler::all
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: github::User
> match: github::GithubCurl::user_agent
> match: github::GithubAPI::load_user
> match: nitcorn::HTTPConnection::read_http_request
> match: github::GithubAPI::load_auth_user
> match: curl::CurlHTTPRequest
> match: github::PullRequest::merged_by
> match: curl::CurlHTTPRequest::method
> match: nitcorn::reactor::Action::answer
> match: curl::CURLOption::put
> match: popcorn>
> match: popcorn
> match: popcorn::Router::use
> match: curl::CURLOption::http_version
> match: nitcorn::ErrorTemplate::code
> match: curl::CurlMail::headers
> match: github::GithubCurl::get_and_parse
> match: popcorn::Handler
> match: github::GithubAPI::load_pull
> match: github::GithubCurl::get_and_check
> match: nitcorn::HttpResponse
> match: nitcorn::HttpRequest::http_version
> match: nitcorn::HttpResponse::http_version
> match: nitcorn::HTTPConnection
> match: core::abstract_text::Object::to_s
> match: github::User::name
> match: nitcorn::HttpResponse::finalize
> match: github::GithubCurl::header
> match: github::PullRef

Default is `nit_github_api`.

> match: github::GithubAPI::user_agent
> match: github::GithubAPI::api_url
> match: more_collections::DefaultMap::default
> match: core::Finalizable::finalize
> match: serialization>
> match: serialization
> match: console::TermCharFormat::default
> match: json::JsonDeserializer::class_name_heuristic
> match: core::LineIterator::close_on_finish
> match: core::Collection::has_exactly
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Writable::write_to_string
> match: json::JsonSerializer::plain_json
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::hash
> match: core::Error::message
> match: core::ProcessDuplex
> match: core::FlatText::items
> match: core::flat::FlatBuffer::with_infos
> match: core::Sys
> match: core::MinHeap::default
> match: core::Object::output
> match: core::Map
> match: more_collections::UnrolledList::nodes_length
> match: core::Writable
> match: github::cache::GithubAPI::store
> match: core::Object::output_class_name
> match: core::Buffer::written
> match: popcorn::AppGlobRoute
> match: core::math::Float::is_nan
> match: github::LoaderConfig::default_db_name
> match: core::FileStat
> match: serialization::Serializer::serialize_core
> match: core::Bytes::items
> match: github::LoaderConfig::default_db_host
> match: core::Writable::write_to_bytes
> match: opts::Option::default_value
> match: popcorn::pop_repos::AppConfig::default_db_name
> match: opts::OptionContext::options_before_rest
> match: popcorn::pop_repos::AppConfig::default_db_host
> match: core::Task
> match: config>
> match: config
> match: config::IniConfig::default_config_file
> match: core::Object::SELF
> match: core::Text::to_snake_case
> match: serialization::Deserializer::deserialize_attribute
> match: mongodb::NativeBSON::destroy
> match: core::bytes::Int::to_bytes
> match: core::MapRead::has_key
> match: mongodb::MongoCollection::save
> match: github::DeleteEvent::ref_type
> match: core::Text::chomp
> match: core::Reader
> match: core::Writer
> match: core::file::Text::simplify_path
> match: github::CreateEvent::ref_type
> match: popcorn>
> match: popcorn
> match: core::FinalizableOnce
> match: core::Text::to_camel_case
> match: popcorn::pop_logging::ConsoleLog::display
> match: core::FlatText::fast_cstring
> match: popcorn::AppRoute
> match: core::Collection::has_all
> match: template::Template
> match: popcorn::RepoObject::id
> match: core::flat::FlatString::full
> match: core::Range::step
> match: serialization::Deserializer::deserialize_class_intern
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::file::Text::relpath
> match: mongodb::NativeMongoCollection::save
> match: nitcorn::FileServer::default_file
> match: libevent::Connection::close_requested
> match: core::Duplex
> match: core::SimpleCollection
> match: json>
> match: json
> match: core::Pattern::split_in
> match: core::flat::FlatString::with_infos
> match: serialization::Serializable
> match: core::Writer::is_writable
> match: json::serialization_write::Serializable::serialize_to_json
> match: popcorn::StaticHandler::default_file
> match: core::Stream::lookahead
> match: core::Comparable::OTHER
> match: core::RemovableCollection
> match: github::PullRequest
> match: curl::CurlRequest::verbose
> match: serialization::Deserializer::keep_going
> match: poset::POSet
> match: core::Object::object_id
> match: nitcorn::ServerConfig::default_virtual_host
> match: csv::CsvReader::skip_empty
> match: core::AbstractArrayRead::sub
> match: core::Object::==
> match: core::Reader::read_char
> match: core::Collection::has_any
> match: core::Cloneable
> match: mongodb::native_mongodb::NativeCStringArray::destroy
> match: more_collections::BestDistance::update
> match: core::String

See <https://developer.github.com/v3/#user-agent-required>

> match: github::GithubAPI::user_agent
> match: core::abstract_text::AlphaComparator
> match: mongodb::MongoGroup::id
> match: github::Commit
> match: github::Issue
> match: github::Branch
> match: core::file::Text::file_stat
> match: c::CArray::destroyed
> match: github::Milestone

#### Debugging

> match: popcorn::ConsoleLog::debug

### `verbose_lvl` - # Verbosity level.

> match: github::HookListener::verbosity
> match: github>
> match: github
> match: popcorn::ConsoleLog::level

* `0`: only errors (default)
* `1`: verbose

> match: core::MaybeError::error
> match: more_collections::DefaultMap::default
> match: github::Loader::error
> match: popcorn::ConsoleLog::error
> match: popcorn::pop_handlers::HttpResponse::error
> match: console::TermCharFormat::default
> match: more_collections::DefaultMap
> match: core::Error
> match: core::Stderr
> match: nitcorn::ErrorTemplate
> match: core::Error::cause
> match: github::GithubAPI::verbose_lvl
> match: github::GithubError
> match: core::MinHeap::default
> match: opts::OptionEnum::init
> match: core::re::NativeRegex::regerror
> match: opts::OptionContext::errors
> match: core::file::Text::mkdir
> match: core::file::Text::chdir
> match: mongodb::MongoError
> match: opts::Option::errors
> match: popcorn::StaticHandler::default_file
> match: serialization::Deserializer::errors
> match: core::Path::files
> match: core::FinalizableOnce
> match: core::Path::read_all_bytes
> match: core::Path::read_all
> match: core::Path::read_lines
> match: curl::CURLOption::verbose
> match: curl::CurlRequest::verbose

#### Using with GitLab

> match: popcorn::Router::use
> match: core::re::NativeRegex
> match: core::MaybeError
> match: github::GithubCurl::header
> match: core::ropes::RopeCharIteratorPiece
> match: core::Iterator::finish
> match: core::Stream::finish
> match: core::MapIterator::finish
> match: github::GithubWallet::no_colors
> match: core::Iterator::start
> match: core::MapIterator::start
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Stream::start
> match: serialization::engine_tools::Object::serialization_hash
> match: serialization::AsyncCache::use_even
> match: core::CachedAlphaComparator
> match: libevent::NativeEventBase::new
> match: curl::native_curl::CURLSList::new
> match: core::FlatText::fast_cstring
> match: core::file::Text::join_path
> match: popcorn::pop_logging::ConsoleLog::display
> match: meta::meta::Object::class_factory
> match: libevent::Connection
> match: core::Object::object_id
> match: curl::CurlHTTPRequest::unix_socket_path
> match: core::MinHeap::default
> match: popcorn::AppGlobRoute
> match: c::CArray::destroy
> match: popcorn::StaticHandler
> match: core::flat::FlatText::fetch_char_at
> match: nitcorn::HttpFactory::and_libevent
> match: github::GithubAPI::get
> match: popcorn::RepositoryQuery
> match: core::Object::SELF

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

> match: curl::CURLOption::url
> match: nitcorn::HttpRequest::url
> match: curl::CurlHTTPRequest::url
> match: github::GithubAPI
> match: nitcorn::HttpRequest::query_string
> match: github::GithubAPI::api_url
> match: github::github
> match: core::Finalizable::finalize
> match: github::PullRequest::patch_url
> match: curl::NativeCurl::escape
> match: github::User::avatar_url
> match: nitcorn::http_request::HttpRequestParser::parse_url
> match: github::GithubEntity
> match: core::FlatText::fast_cstring
> match: mongodb::NativeBSON::new
> match: popcorn::AppParamRoute
> match: core::re::NativeRegex
> match: serialization>
> match: serialization
> match: github::GithubWallet::tokens
> match: github::ContributorStats::api
> match: curl::curl::Sys::curl
> match: github::GithubAPI::auth
> match: mongodb::NativeMongoCollection::save
> match: more_collections::UnrolledList::nodes_length
> match: github::GithubEntity::html_url
> match: core::String
> match: github::HookListener::api
> match: mongodb::NativeMongoCollection::destroy
> match: core::MaybeError
> match: popcorn::RepoObject
> match: mongodb::NativeMongoDb::destroy
> match: mongodb::NativeMongoClient::destroy
> match: mongodb::NativeMongoCursor::destroy
> match: serialization::Serializer::serialize_core
> match: json::JsonDeserializer::class_name_heuristic
> match: popcorn::Router::use
> match: github::GithubAPI::get
> match: json::JsonSerializer::plain_json
> match: core::Collection::has_exactly
> match: serialization::Serializable::core_serialize_to
> match: github::GithubAPI::last_error
> match: core::Object::SELF
> match: github::GithubAPI::load_user
> match: nitcorn>
> match: nitcorn
> match: core::abstract_collection::CoupleMapIterator
> match: popcorn>
> match: popcorn
> match: mongodb::NativeBSON::from_json_string
> match: curl::native_curl::NativeCurl::native_register_read_datas_callback
> match: core::Bytes::items
> match: json::serialization_read::Text::deserialize_json
> match: github::GithubFile
> match: github::GithubAPI::load_repo
> match: github::StatusEvent::branches
> match: core::Collection::has_any
> match: serialization::Serializer::try_to_serialize
> match: serialization::SafeDeserializer::check_subtypes
> match: core::file::Text::join_path
> match: core::Collection::has_all
> match: nitcorn::token::Sys::generate_token
> match: github::GithubAPI::load_auth_user
> match: github>
> match: github
> match: core::Buffer::capitalize
> match: popcorn::App
> match: github::GithubError
> match: libevent::Connection::close_requested
> match: core::Text::capitalized
> match: mongodb::NativeMongoCollection::rename
> match: serialization::Serializer::current_object
> match: mongodb::MongoCollection::save
> match: core::Object::object_id
> match: core::Text::to_snake_case
> match: mongodb::NativeBSON::destroy
> match: config>
> match: config
> match: core::file::Text::relpath
> match: core::Object::output
> match: core::Sys
> match: github::Repo
> match: mongodb::NativeMongoCollection::drop
> match: core::MapRead::provide_default_value
> match: curl::CurlHTTPRequest::execute
> match: github::api::GithubAPI::ghcurl
> match: mongodb::NativeMongoCollection
> match: github::IssueComment::issue_url
> match: curl::CURLOption::follow_location
> match: github::User
> match: github::ReviewComment::pull_request_url
> match: poset::POSet::has_direct_edge
> match: core::Object::output_class_name
> match: core::Stream::lookahead
> match: core::Text::to_camel_case
> match: json>
> match: json
> match: mongodb::NativeMongoClient::new
> match: github::cache
> match: core::FlatText::items
> match: github::Loader::check_error
> match: opts::OptionEnum
> match: mongodb::NativeMongoDb

### `api_url` - # Github API base url.

> match: github>
> match: github
> match: github::GithubAPI::api_url
> match: curl::CURLOption::url
> match: nitcorn::HttpRequest::url
> match: github::PullRequest::base
> match: github::GithubAPI
> match: github::github
> match: curl::CurlHTTPRequest::url
> match: libevent::ConnectionListener::base
> match: core::abstract_text::Int::fill_buffer

Default is `https://api.github.com` and should not be changed.

> match: github::GithubAPI::api_url
> match: core::math::Float::is_nan
> match: core::Error::message
> match: serialization>
> match: serialization
> match: serialization::SafeDeserializer::check_subtypes
> match: mongodb::NativeBSON::destroy
> match: mongodb::native_mongodb::NativeCStringArray::destroy
> match: core::Finalizable::finalize
> match: mongodb::NativeMongoCollection::destroy
> match: mongodb::NativeMongoDb::destroy
> match: mongodb::NativeMongoClient::destroy
> match: mongodb::NativeMongoCursor::destroy
> match: mongodb::MongoClient::close
> match: json::JsonDeserializer::class_name_heuristic
> match: json::JsonSerializer::plain_json
> match: csv::CsvReader::skip_empty
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Object::hash
> match: core::flat::FlatBuffer::with_infos
> match: csv::CsvStream
> match: core::file::Text::simplify_path
> match: core::Object::output
> match: core::Collection::has_exactly
> match: core::Iterator::next_by
> match: json::serialization_read::Text::deserialize_json
> match: core::FinalizableOnce
> match: core::Object::object_id
> match: github::Commit
> match: popcorn::pop_handlers::HttpResponse::error
> match: core::Object::output_class_name
> match: github::Issue
> match: core::Sys
> match: github::PullRequest
> match: github::Branch
> match: core::FileStat
> match: template::Template::add
> match: github::Milestone
> match: github::Label
> match: github::ContributorStats
> match: nitcorn::HttpFactory::config
> match: serialization::Serializable::core_serialize_to
> match: github::Repo
> match: github::User
> match: core::Cloneable::clone
> match: libevent::Connection::close_requested
> match: mongodb::MongoMatch::lnot
> match: core::Writable::write_to_string
> match: core::file::NativeFileStat::ctime
> match: json::serialization_write::Serializable::serialize_to_json
> match: github::IssueEvent
> match: serialization::Deserializer::deserialize_class
> match: serialization::Serializer::serialize_attribute
> match: core::Object::is_same_type
> match: libevent::NativeEventBase::reinit
> match: core::ProcessDuplex
> match: core::FlatText::items
> match: popcorn::AppGlobRoute
> match: github::IssueComment
> match: core::Text::to_snake_case
> match: core::Map
> match: github::ReviewComment
> match: core::math::Sys::nan
> match: core::Object::SELF
> match: core::Collection::has_all
> match: core::Object::==
> match: core::flat::FlatText::chars_to_escape_to_c
> match: mongodb::MongoMatch::is_nin
> match: csv::csv::Text::chars_to_unescape_csv
> match: core::Pattern::split_in
> match: more_collections::UnrolledList::nodes_length
> match: core::Writable
> match: serialization::Deserializer::keep_going
> match: popcorn>
> match: popcorn
> match: config>
> match: config
> match: core::Buffer::written
> match: mongodb::NativeBSON::new
> match: poset::POSet::has_direct_edge
> match: core::Reader::each_line
> match: nitcorn::token::Sys::generate_token
> match: core::FileStat::ctime
> match: serialization::Serializer::serialize_core
> match: core::bytes::Text::hexdigest_to_bytes
> match: core::Bytes::items
> match: core::FlatText::fast_cstring
> match: core::Writable::write_to_bytes
> match: more_collections::DefaultMap
> match: csv::csv::Text::chars_to_escape_csv
> match: opts::OptionContext::options_before_rest
> match: nitcorn::reactor::ServerConfig::factory
> match: core::ISODate::timezone
> match: curl::CurlHTTPRequest::body
> match: json>
> match: json
> match: core::Task
> match: serialization::Deserializer::deserialize_attribute
> match: core::Text::escape_to_mk
> match: core::bytes::Int::to_bytes
> match: core::MapRead::has_key
> match: mongodb::MongoCollection::save
> match: core::FileStat::last_status_change_time
> match: core::Object::is_same_instance
> match: console>
> match: console
> match: github::DeleteEvent::ref_type

## Creating hooks

> match: github::hooks::HookAction
> match: curl::CURLStatusCode::created
> match: core::Array::from
> match: opts::Option::init
> match: core::FlatBuffer::from
> match: mongodb::MongoClient::database
> match: core::Range::init
> match: nitcorn::VirtualHost::init
> match: core::CString::new
> match: mongodb::MongoCollection
> match: core::Array::with_items
> match: core::ArraySet::with_capacity
> match: core::Array::with_capacity
> match: c::CIntArray::from
> match: c::CUInt16Array::from
> match: core::FlatBuffer::with_capacity
> match: core::Array::filled_with
> match: mongodb::MongoDb
> match: c::CCStringArray::from
> match: c::CByteArray::from
> match: serialization::Serializable::from_deserializer

Using this API you can create Github hooks able to respond to actions performed
on a repository.

> match: github::HookListener::api
> match: github::GithubEvent::action
> match: github::GithubAPI
> match: curl::curl::CurlRequest::perform
> match: github::hooks::HookAction
> match: github::github
> match: github::ContributorStats::api
> match: nitcorn::HttpFactory::and_libevent
> match: popcorn>
> match: popcorn
> match: github::api::GithubAPI::ghcurl
> match: nitcorn::HttpServer::respond
> match: core::re::NativeRegex
> match: popcorn::Handler
> match: popcorn::RequestClock
> match: github::RenameAction
> match: nitcorn::Action
> match: popcorn::Handler::all
> match: popcorn::JsonRepository
> match: github::GithubAPI::auth
> match: github::CreateEvent::ref
> match: core::Iterator::finish
> match: core::Stream::finish
> match: core::MapIterator::finish
> match: popcorn::Router::use
> match: nitcorn::Route::path
> match: popcorn::StaticHandler
> match: popcorn::MongoRepository
> match: popcorn::Repository
> match: popcorn::App
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::Stream::start
> match: github::GithubWallet::api
> match: github::Repo
> match: github::CreateEvent::ref_type
> match: github::Loader::jobs
> match: github::LoaderJobRepo
> match: github::DeploymentEvent::name
> match: libevent::NativeEventBase::new
> match: json>
> match: json
> match: curl::CURLStatusCode::created
> match: github>
> match: github
> match: github::GithubWallet::tokens
> match: github::DeleteEvent::ref
> match: popcorn::MongoRepository::aggregate
> match: github::PushEvent
> match: curl::NativeCurl::easy_perform
> match: nitcorn::ServerConfig::default_virtual_host
> match: github::HookListener
> match: nitcorn>
> match: nitcorn
> match: github::GithubCurl
> match: core::Object::SELF
> match: github::DeleteEvent::ref_type
> match: serialization::Deserializer::deserialize_class_intern
> match: popcorn::AppGlobRoute
> match: popcorn::Router
> match: curl::curl::Sys::curl
> match: github::ForkEvent::forkee

### `hooks` - # Github hook event listening with `nitcorn`.

> match: github>
> match: github
> match: github::hooks::HookAction
> match: github::IssueEvent::event
> match: github::HookListener
> match: github::HookListener::listen
> match: nitcorn::nitcorn
> match: github::GithubAPI::load_issue_event
> match: github::HookListener::apply_event
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: libevent::NativeEventBase::reinit
> match: nitcorn>
> match: nitcorn
> match: github::GithubEvent

Usage:

> match: config::Config::usage
> match: opts::OptionContext::usage

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
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::dispatch

GithubAPI can trigger different events depending on the hook configuration.

> match: github::IssueEvent::event
> match: core::Task
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::reinit
> match: config>
> match: config
> match: config::Config
> match: libevent::NativeEventBase::dispatch
> match: github::IssuesEvent
> match: nitcorn::ServerConfig
> match: nitcorn::VirtualHost
> match: github::IssueEvent
> match: ini::ConfigTree
> match: github::PullRequestEvent
> match: github::LoaderConfig
> match: github::HookListener::apply_event
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: popcorn::AppConfig
> match: core::Object::!=
> match: github::hooks::HookAction
> match: github::IssueEvent::assignee
> match: config::IniConfig
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: nitcorn::VirtualHost::server_config
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: nitcorn::HttpFactory::config
> match: nitcorn::reactor::Action::prepare_respond_and_close
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: curl::CurlResponseFailed
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: core::Path::filename

### `GithubEvent` - # Github event stub.

> match: github::GithubEvent
> match: github>
> match: github
> match: github::IssueEvent::event
> match: github::GithubAPI::load_issue_event
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: libevent::NativeEventBase::reinit

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

> match: github>
> match: github
> match: github::CommitCommentEvent
> match: github::IssueEvent::event
> match: github::Branch::commit
> match: github::Commit::commit
> match: github::IssueCommentEvent
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::GithubAPI::load_commit_comment
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent
> match: github::IssueEvent::commit_id
> match: github::PullRequestEvent
> match: github::StatusEvent
> match: libevent::NativeEventBase::reinit
> match: github::Comment
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit
> match: github::GithubAPI::load_issue_event
> match: github::GithubAPI::load_review_comment
> match: github::CommitComment
> match: github::CreateEvent
> match: github::ReviewComment::commit_id
> match: libevent::NativeEventBase::dispatch
> match: github::DeploymentEvent::sha
> match: github::Commit
> match: github::PushEvent
> match: github::Issue::comments
> match: github::DeleteEvent
> match: github::GithubAPI::load_branch_commits
> match: github::MemberEvent
> match: github::HookListener::apply_event
> match: github::Comment::body
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: github::ReviewComment::position
> match: github::GithubEvent::id
> match: github::CommitComment::position
> match: github::Commit::message
> match: github::PullRequest::commits
> match: github::ForkEvent
> match: github::GitCommit::message
> match: github::PullRequest::base
> match: more_collections::UnrolledList::nodes_length
> match: github::PullRequest::head
> match: github::Commit::sha
> match: github::StatusEvent::sha
> match: core::Finalizable::finalize
> match: github::GitCommit::sha
> match: mongodb::NativeBSON::new
> match: github::DeploymentStatusEvent
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: github::PushEvent::commits
> match: github::IssueCommentEvent::issue
> match: curl::CURLStatusCode::created
> match: core::FileStat
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::PullRef::sha
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: github::CommitComment::commit_id
> match: github::GitCommit
> match: serialization::CachingSerializer::link
> match: core::Ref
> match: github::PullRequestReviewCommentEvent::pull
> match: mongodb::MongoClient::database
> match: libevent::NativeEvSignal
> match: core::ropes::Sys::maxlen
> match: libevent::EventCallback
> match: mongodb::MongoCollection
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization>
> match: serialization
> match: github::Commit::commit_date
> match: github::ReviewComment::original_commit_id
> match: serialization::Serializer::serialize_core
> match: github>
> match: github
> match: github::CreateEvent
> match: github::DeleteEvent
> match: github::PushEvent
> match: github::IssueEvent::event
> match: github::CreateEvent::ref_type
> match: github::IssuesEvent
> match: github::GithubAPI::load_branch
> match: github::StatusEvent::branches
> match: github::DeleteEvent::ref_type
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: github::MemberEvent
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::ForkEvent
> match: github::CreateEvent::ref
> match: github::PullRequestReviewCommentEvent
> match: github::Branch
> match: libevent::NativeEventBase::dispatch
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: popcorn::Repository
> match: github::HookListener::apply_event
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: github::DeleteEvent::ref
> match: github::GithubEvent::id
> match: popcorn::JsonRepository
> match: github::Repo::default_branch
> match: github::StatusEvent
> match: github::Loader::jobs
> match: github::LoaderJobRepo
> match: more_collections::UnrolledList::nodes_length
> match: github::DeploymentEvent::name
> match: core::Finalizable::finalize
> match: github::GithubAPI::load_branch_commits
> match: mongodb::NativeBSON::new
> match: github::DeploymentStatusEvent
> match: popcorn::MongoRepository
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: curl::CURLStatusCode::created
> match: core::FileStat
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: serialization::CachingSerializer::link
> match: core::Ref
> match: github::CreateEvent::master_branch
> match: mongodb::MongoClient::database
> match: libevent::NativeEvSignal
> match: core::ropes::Sys::maxlen
> match: libevent::EventCallback
> match: mongodb::MongoCollection
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization>
> match: serialization
> match: github::ForkEvent::forkee
> match: serialization::Serializer::serialize_core
> match: core::Array::from
> match: mongodb::MongoDb
> match: json::serialization_read::Text::deserialize_json
> match: github::DeleteEvent
> match: github>
> match: github
> match: github::IssueEvent::event
> match: github::CreateEvent
> match: core::Path::delete
> match: github::PushEvent
> match: github::IssuesEvent
> match: popcorn::Handler::delete
> match: github::GithubAPI::load_branch
> match: github::DeleteEvent::ref_type
> match: github::StatusEvent::branches
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: core::ListIterator::delete
> match: github::GithubAPI::load_issue_event
> match: github::CreateEvent::ref_type
> match: github::Branch
> match: libevent::NativeEventBase::dispatch
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: json::JsonStore::clear
> match: github::MemberEvent
> match: github::PullRequestReviewCommentEvent
> match: github::HookListener::apply_event
> match: github::cache::GithubAPI::clear_cache
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: github::GithubEvent::id
> match: github::ForkEvent
> match: github::Repo::default_branch
> match: github::StatusEvent
> match: core::Finalizable::finalize
> match: github::GithubAPI::load_branch_commits
> match: github::DeploymentStatusEvent
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: core::Ref
> match: github::CreateEvent::master_branch
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization>
> match: serialization
> match: core::FileStat
> match: serialization::Serializer::serialize_core
> match: core::Char::is_whitespace
> match: json::serialization_read::Text::deserialize_json
> match: more_collections::UnrolledList::nodes_length
> match: github::GithubAPI::load_issue_comments
> match: github::Loader::branches
> match: core::ropes::Sys::maxlen
> match: popcorn::Handler
> match: github>
> match: github
> match: github::DeploymentEvent
> match: github::IssueEvent::event
> match: github::IssuesEvent
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: core::CString::new
> match: github::GithubAPI::load_issue_event
> match: core::NativeArray::new
> match: mongodb::BSONObjectId::new
> match: c::NativeCByteArray::new
> match: mongodb::NativeBSON::new
> match: c::NativeCStringArray::new
> match: libevent::NativeEventBase::new
> match: c::NativeCUInt16Array::new
> match: c::NativeCIntArray::new
> match: github::DeploymentEvent::environment
> match: realtime::realtime::Timespec::new
> match: mongodb::NativeMongoClient::new
> match: libevent::NativeEventBase::dispatch
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::PushEvent
> match: github::DeleteEvent
> match: github::CreateEvent
> match: core::Buffer::new
> match: github::MemberEvent
> match: github::PullRequestReviewCommentEvent
> match: github::HookListener::apply_event
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: core::flat::FlatBuffer::reset
> match: github::GithubEvent::id
> match: core::hash_collection::Set::new
> match: github::ForkEvent
> match: github::StatusEvent
> match: core::TimeT::new
> match: core::Finalizable::finalize
> match: github::DeploymentStatusEvent
> match: core::hash_collection::Map::new
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: mongodb::MongoCollection::insert
> match: curl::native_curl::CURLSList::new
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: libevent::NativeEvSignal::new
> match: core::Ref
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: core::Writable::write_to_string
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: github::StatusEvent::state
> match: serialization::CachingSerializer::link
> match: serialization>
> match: serialization
> match: core::FileStat
> match: serialization::Serializer::serialize_core
> match: core::flat::FlatBuffer::with_infos
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::SELF
> match: mongodb::MongoCollection::save
> match: more_collections::UnrolledList::nodes_length
> match: github::GithubAPI::load_issue_comments
> match: core::ropes::Sys::maxlen
> match: libevent::NativeEventBase::loopexit
> match: core::AbstractArrayRead::reversed
> match: mongodb::NativeBSON::destroy
> match: core::flat::FlatString::full
> match: core::bytes::Text::hexdigest_to_bytes
> match: core::Writable::write_to_bytes
> match: github>
> match: github
> match: github::DeploymentStatusEvent
> match: github::IssueEvent::event
> match: github::StatusEvent
> match: core::Process::status
> match: core::file::NativeFileStat::ctime
> match: core::exec::NativeProcess::status
> match: github::IssuesEvent
> match: popcorn::pop_logging::ConsoleLog::status
> match: core::FileStat::ctime
> match: github::PullRequestEvent
> match: core::FileStat::last_status_change_time
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: github::DeploymentEvent
> match: libevent::NativeEventBase::dispatch
> match: serialization::Deserializer
> match: github>
> match: github
> match: github::IssueEvent::event
> match: serialization::Serializer
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::dispatch
> match: github>
> match: github
> match: github::ForkEvent
> match: github::IssueEvent::event
> match: github::PullRef::user
> match: github::Issue::user
> match: libevent::NativeEventBase::reinit
> match: github::Comment::user
> match: github::MemberEvent
> match: github::PushEvent
> match: github::IssuesEvent
> match: github::IssueEvent::assignee
> match: github::User
> match: github::PullRequestEvent
> match: github::GithubAPI::load_user
> match: github::GithubAPI::load_auth_user
> match: github::CreateEvent
> match: github::GithubAPI::load_issue_event
> match: github>
> match: github
> match: github::GithubDeserializer
> match: github::IssueEvent::event
> match: json::JsonDeserializer
> match: github::GithubAPI::load_issue_event
> match: github::github
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: libevent::NativeEventBase::reinit
> match: github::GithubEvent
> match: core::Object::object_id
> match: libevent::NativeEventBase::dispatch
> match: poset::POSetElement
> match: core::Object::is_same_instance
> match: json::serialization_read::JsonDeserializer::convert_object
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: meta::meta::Object::class_factory
> match: github::IssueEvent::event
> match: github>
> match: github
> match: github::GithubEvent
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::reinit
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: libevent::NativeEventBase::dispatch
> match: github::IssueEvent::assignee
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: github::IssueEvent::milestone
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: libevent::NativeEvSignal
> match: github>
> match: github
> match: github::IssueCommentEvent
> match: github::IssueCommentEvent::issue
> match: github::IssueEvent::event
> match: github::IssuesEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequestReviewCommentEvent::comment
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_issue_event
> match: github::PullRequestReviewCommentEvent
> match: github::IssuesEvent::issue
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: github::Comment
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_issue
> match: github::Issue::comments
> match: github::GithubAPI::load_review_comment
> match: github::CreateEvent
> match: libevent::NativeEventBase::dispatch
> match: github::Issue
> match: github::IssueComment
> match: github::PushEvent
> match: github::DeleteEvent
> match: github::LoaderConfig::no_comments
> match: github::MemberEvent
> match: github::Issue::id
> match: github::HookListener::apply_event
> match: github::loader::Loader::load_issue_events
> match: github::Comment::body
> match: github::GithubAPI::load_issue_comments
> match: github::IssueEvent::id
> match: github::loader::Loader::load_issue_comments
> match: json::JsonDeserializer::class_name_heuristic
> match: github::Issue::locked
> match: github::ReviewComment::position
> match: github::GithubEvent::id
> match: github::CommitComment::position
> match: github::ForkEvent
> match: github::StatusEvent
> match: more_collections::UnrolledList::nodes_length
> match: github::Issue::is_pull_request
> match: github::CommitComment
> match: core::Finalizable::finalize
> match: mongodb::NativeBSON::new
> match: github::DeploymentStatusEvent
> match: github::Issue::number
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: curl::CURLStatusCode::created
> match: github::Issue::state
> match: github::Issue::title
> match: core::FileStat
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: curl::CURLOption::get
> match: libevent::EventCallback::callback
> match: github::IssueComment::issue_number
> match: serialization::CachingSerializer::link
> match: core::Ref
> match: github::PullRequestReviewCommentEvent::pull
> match: mongodb::MongoClient::database
> match: libevent::NativeEvSignal
> match: github::LoaderJob::last_issue
> match: core::ropes::Sys::maxlen
> match: libevent::EventCallback
> match: mongodb::MongoCollection
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization>
> match: serialization
> match: curl::CURLOption::post
> match: curl::CURLOption::put
> match: github::Issue::closed_by
> match: github::IssueComment::issue_url
> match: github::IssueEvent::event
> match: github>
> match: github
> match: github::IssuesEvent
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::reinit
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::dispatch
> match: github::GithubEvent::repo
> match: github::IssueCommentEvent::issue
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: github::IssuesEvent::issue
> match: github::IssueEvent::assignee
> match: github::IssueCommentEvent
> match: github::IssueEvent::commit_id
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: github::GithubAPI::load_issue_comments
> match: github::IssueEvent
> match: github::HookListener::apply_event
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: github::MemberEvent
> match: github>
> match: github
> match: github::IssueEvent::event
> match: github::PullRef::user
> match: github::Issue::user
> match: github::Comment::user
> match: nitcorn::Routes::add
> match: github::ForkEvent
> match: libevent::NativeEvent::add
> match: github::PushEvent
> match: github::GithubWallet::add
> match: core::SimpleCollection::add
> match: github::User
> match: github::IssuesEvent
> match: github::GithubAPI::load_user
> match: github::IssueEvent::assignee
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_auth_user
> match: core::Buffer::add
> match: github::GithubAPI::load_issue_event
> match: github::CreateEvent
> match: github::MemberEvent::member
> match: serialization::Serializer::serialize_core
> match: libevent::NativeEventBase::dispatch
> match: json::JsonDeserializer::class_name_heuristic
> match: core::FinalizableOnce
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::IssueEvent::actor
> match: core::Finalizable::finalize
> match: opts::OptionText
> match: github::DeleteEvent
> match: popcorn::Repository
> match: github::PullRequestReviewCommentEvent
> match: github::CreateEvent::ref
> match: github::HookListener::apply_event
> match: core::numeric::Numeric::add
> match: github::IssueEvent::id
> match: github::DeleteEvent::ref
> match: github::GithubEvent::id
> match: popcorn::JsonRepository
> match: github::StatusEvent
> match: github::Loader::jobs
> match: github::LoaderJobRepo
> match: github::DeploymentEvent::name
> match: github::DeploymentStatusEvent
> match: popcorn::MongoRepository
> match: github::IssueEvent
> match: config>
> match: config
> match: curl::HeaderMap::[]=
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: serialization>
> match: serialization
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: github::ContributorStats::author
> match: core::abstract_text::Object::to_s
> match: github::User::name
> match: core::Sequence::push
> match: core::Ref
> match: libevent::NativeEvSignal
> match: core::Sequence::unshift
> match: libevent::EventCallback
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization::Serializer::current_object
> match: core::hash_collection::HashCollection::store
> match: github::DeleteEvent::ref_type
> match: github::Issue::assignee
> match: github::IssuesEvent::assignee
> match: popcorn::Handler
> match: github::IssueEvent::event
> match: github::PullRequestEvent
> match: github>
> match: github
> match: libevent::NativeEventBase::reinit
> match: github::IssuesEvent
> match: github::GithubAPI::load_issue_event
> match: libevent::NativeEventBase::dispatch
> match: github::GithubEvent::repo
> match: github::PullRequestReviewCommentEvent
> match: github::GithubAPI::load_pull
> match: github::IssueEvent::id
> match: github::GithubEvent::id
> match: github::IssueEvent::assignee
> match: github::IssueEvent::commit_id
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::PullRequestEvent::number
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: github::IssueEvent
> match: github::HookListener::apply_event
> match: github::PullRequest::merged
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: github::PullRequest::mergeable
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: github::ReviewComment::pull_number
> match: github::ReviewComment::pull_request_url
> match: github::PullRef
> match: github::PullRequest::merged_by
> match: github::PullRequestReviewCommentEvent
> match: github>
> match: github
> match: github::PullRequestEvent
> match: github::Comment
> match: github::IssueEvent::event
> match: github::GithubAPI::load_pull
> match: github::GithubAPI::load_review_comment
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::IssueCommentEvent::comment
> match: github::CommitCommentEvent::comment
> match: github::PullRequest::review_comments
> match: github::PullRequestReviewCommentEvent::comment
> match: github::ReviewComment
> match: github::PullRequestReviewCommentEvent::pull
> match: github::IssuesEvent
> match: github::PullRequest::merged
> match: github::PullRequest::mergeable
> match: github::PullRequestEvent::number
> match: github::IssueComment
> match: libevent::NativeEventBase::reinit
> match: popcorn::Handler::all
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: github::ReviewComment::pull_number
> match: github::GithubAPI::load_issue_comment
> match: github::GithubAPI::load_commit_comment
> match: github::GithubAPI::load_issue_event
> match: github::ReviewComment::pull_request_url
> match: github::PullRef
> match: github::PullRequest::merged_by
> match: nitcorn::reactor::Action::answer
> match: github::PullRequestEvent::pull
> match: github::Issue::is_pull_request
> match: github::PullRequest::commits
> match: github::CreateEvent
> match: github::loader::Loader::load_pull
> match: libevent::NativeEventBase::dispatch
> match: github::PullRequest
> match: nitcorn::HTTPConnection::read_http_request
> match: curl::CurlHTTPRequest
> match: popcorn>
> match: popcorn
> match: github::PushEvent
> match: github::Issue::comments
> match: github::DeleteEvent
> match: github::MemberEvent
> match: github::HookListener::apply_event
> match: popcorn::Handler
> match: curl::CurlRequest::verbose
> match: github::Comment::body
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: github::PullRequest::mergeable_state
> match: github::loader::Loader::load_pull_events
> match: github::ReviewComment::position
> match: github::GithubEvent::id
> match: github::CommitComment::position
> match: github::ForkEvent
> match: github::StatusEvent
> match: more_collections::UnrolledList::nodes_length
> match: github::CommitComment
> match: core::Finalizable::finalize
> match: mongodb::NativeBSON::new
> match: github::DeploymentStatusEvent
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: github::IssueCommentEvent::issue
> match: curl::CURLStatusCode::created
> match: core::FileStat
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: github::PushEvent
> match: github>
> match: github
> match: github::IssueEvent::event
> match: github::DeleteEvent
> match: github::CreateEvent
> match: github::IssuesEvent
> match: github::GithubAPI::load_branch
> match: github::StatusEvent::branches
> match: github::PullRequestEvent
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: mongodb::MongoGroup::push
> match: github::MemberEvent
> match: core::Sequence::push
> match: github::ForkEvent
> match: github::Branch
> match: libevent::NativeEventBase::dispatch
> match: github::DeleteEvent::ref_type
> match: github::CreateEvent::ref_type
> match: github::IssueCommentEvent
> match: github::CommitCommentEvent
> match: github::PullRequest::base
> match: github::PullRequest::head
> match: popcorn::Repository
> match: github::PullRequestReviewCommentEvent
> match: github::CreateEvent::ref
> match: github::HookListener::apply_event
> match: github::IssueEvent::id
> match: json::JsonDeserializer::class_name_heuristic
> match: github::DeleteEvent::ref
> match: github::GithubEvent::id
> match: popcorn::JsonRepository
> match: github::Repo::default_branch
> match: github::StatusEvent
> match: github::Loader::jobs
> match: github::LoaderJobRepo
> match: github::DeploymentEvent::name
> match: core::Finalizable::finalize
> match: github::GithubAPI::load_branch_commits
> match: github::DeploymentStatusEvent
> match: popcorn::MongoRepository
> match: github::IssueEvent
> match: github::IssueEvent::assignee
> match: github::DeploymentEvent
> match: github::GithubEvent::repo
> match: github::IssueEvent::commit_id
> match: opts::OptionContext::options_before_rest
> match: github::IssueEvent::milestone
> match: github::GithubEvent
> match: github::IssueEvent::labl
> match: libevent::EventCallback::callback
> match: core::Ref
> match: github::CreateEvent::master_branch
> match: libevent::NativeEvSignal
> match: libevent::EventCallback
> match: libevent::Connection::write_callback
> match: github::IssueEvent::rename
> match: serialization>
> match: serialization
> match: core::FileStat
> match: serialization::Serializer::serialize_core
> match: json::serialization_read::Text::deserialize_json
> match: more_collections::UnrolledList::nodes_length
> match: github::GithubAPI::load_issue_comments
> match: github::Loader::branches
> match: core::ropes::Sys::maxlen
> match: libevent::NativeEventBase::loopexit
> match: mongodb::NativeBSON::destroy
> match: github::StatusEvent
> match: github>
> match: github
> match: github::Commit::commit
> match: github::IssueEvent::event
> match: github::Branch::commit
> match: github::DeploymentStatusEvent
> match: core::Process::status
> match: core::file::NativeFileStat::ctime
> match: github::CommitCommentEvent
> match: core::exec::NativeProcess::status
> match: github::IssuesEvent
> match: github::IssueEvent::commit_id
> match: popcorn::pop_logging::ConsoleLog::status
> match: core::FileStat::ctime
> match: github::PullRequestEvent
> match: github::github_curl::Sys::get_github_oauth
> match: core::FileStat::last_status_change_time
> match: github::GitCommit
> match: libevent::NativeEventBase::reinit
> match: github::GithubAPI::load_issue_event
> match: github::GithubAPI::load_commit

