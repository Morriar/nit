# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module loader

import rules
import ini
import opts
import github::cache
import events_generator
import config

# Loader configuration file
class LoaderConfig
	super NitrpgConfig

	redef type OPTIONS: LoaderOptions

	redef var default_config_file = "loader.ini"

	# Should we avoid loading issue comments?
	var no_comments: Bool is lazy do return value_or_default("loader.no_comments", "false") == "true"

	# Should we avoid loading events?
	var no_events: Bool is lazy do return value_or_default("loader.no_events", "false") == "true"

	# At which issue number should we start?
	var start_from_issue: Int is lazy do return value_or_default("loader.start", "1").to_i

	# Init `self` from a `AppOptions` option values
	redef init from_options(opts) do
		super
		self["loader.no_comments"] = opts.opt_no_comments.value.to_s
		self["loader.no_events"] = opts.opt_no_events.value.to_s
		var opt_start = opts.opt_start.value
		if opt_start > 0 then start_from_issue = opt_start
	end
end

# Loader options
class LoaderOptions
	super NitrpgOptions

	# --show-jobs
	var opt_show_jobs = new OptionBool("Show jobs status", "--show-jobs")

	# --no-comments
	var opt_no_comments = new OptionBool("Do not load issue comments", "--no-comments")

	# --no-events
	var opt_no_events = new OptionBool("Do not load issues events", "--no-events")

	# --from
	var opt_start = new OptionInt("Start loading issues from a number", 0, "--from")

	# --clear
	var opt_clear = new OptionBool("Clear job for given repo name", "--clear")

	init do
		super
		add_option(opt_show_jobs, opt_no_comments, opt_no_events)
		add_option(opt_start, opt_clear)
	end

	redef fun show_usage do
		print "Usage:"
		print "loader <repo_name>\n"
		usage
		exit 1
	end
end

redef class GithubWallet
	redef fun api do
		var api = super
		api.enable_cache = true
		return api
	end
end

class Loader
	super NitrpgApp

	redef type CONFIG: LoaderConfig

	# Generator used to translate json returned by API in event triggered by hook.
	var generator: EventsGenerator = new EventsGenerator(config.wallet.api) is lazy

	# Jobs repository
	var jobs: LoaderJobRepo is lazy do
		return new LoaderJobRepo(config.db.collection("loader_status"))
	end

	fun start(repo_full_name: String) do
		var job = jobs.find_by_id(repo_full_name)
		if job == null then
			log.info "Creating new job for `{repo_full_name}`"
			job = add_job(repo_full_name)
		else
			log.info "Resuming pending job for `{repo_full_name}`"
		end
		load_issues(job)
	end

	fun remove(repo_full_name: String) do
		var job = jobs.find_by_id(repo_full_name)
		if job == null then
			log.info "No job found for `{repo_full_name}`"
		else
			jobs.remove_by_id(repo_full_name)
			log.info "Deleted job for `{repo_full_name}`"
		end
	end

	# Show wallet status
	fun show_wallet do config.wallet.show_status

	# Show jobs status
	fun show_jobs do
		var jobs = jobs.find_all
		print "{jobs.length} jobs pending..."
		for job in jobs do
			print " * {job}"
		end
		print "\nUse `loader <job> to start a new or resume a pending one"
	end

	# Add a new job
	fun add_job(repo_full_name: String): LoaderJob do
		var repo = config.wallet.api.load_repo(repo_full_name)
		assert repo != null else
			error "Repository `{repo_full_name}` not found"
		end
		var job = new LoaderJob(repo, config.start_from_issue)
		jobs.save job
		return job
	end

	# Finish a job
	fun finish_job(job: LoaderJob) do
		print "Finished job {job}"
		jobs.remove_by_id(job.id)
	end

	# Load game for `repo_name`.
	fun load_issues(job: LoaderJob) do
		print "Load history for {job}..."

		var i = job.last_issue
		var last_issue = load_last_issue(job)
		while i <= last_issue.number do
			load_issue(job, i)

			job.last_issue = i
			jobs.save job
			i += 1
		end

		finish_job(job)
	end

	# Load the `repo` last issue or abort.
	private fun load_last_issue(job: LoaderJob): Issue do
		var api = config.wallet.api
		var last_issue = api.load_repo_last_issue(job.repo)
		assert last_issue != null else
			check_error(api, "Last issue for repo {job.repo} not found")
		end
		return last_issue
	end

	# Load an issue or abort.
	private fun load_issue(job: LoaderJob, issue_number: Int) do
		var api = config.wallet.api
		var issue = api.load_issue(job.repo, issue_number)
		assert issue != null else
			check_error(api, "Issue #{issue_number} not found")
		end
		if issue.is_pull_request then
			load_pull(job, issue)
		else
			log.info "Load issue #{issue.number}: {issue.title.split("\n").first}"
			react_event(job, generator.issue_open(job.repo, issue))
			load_issue_events(job, issue)
		end
		load_issue_comments(job, issue)
	end

	# Load issue comments.
	private fun load_issue_comments(job: LoaderJob, issue: Issue) do
		if config.no_comments then return
		var api = config.wallet.api
		for comment in api.load_issue_comments(job.repo, issue) do
			react_event(job, generator.issue_comment_event(job.repo, issue, comment))
		end
	end

	# Load issue events.
	private fun load_issue_events(job: LoaderJob, issue: Issue) do
		if config.no_events then return

		var api = config.wallet.api
		for event in api.load_issue_events(job.repo, issue) do
			react_event(job, generator.issue_raw_event(job.repo, issue, event))
		end
	end

	# Load a pull request or abort.
	private fun load_pull(job: LoaderJob, issue: Issue): PullRequest do
		var api = config.wallet.api
		var pr = api.load_pull(job.repo, issue.number)
		assert pr != null else
			check_error(api, "Pull request #{issue.number} not found")
		end
		log.debug "Load pull request #{issue.number}: {pr.title.split("\n").first}"
		react_event(job, generator.pull_open(job.repo, pr))
		load_pull_events(job, pr)
		return pr
	end

	# Load pull events.
	private fun load_pull_events(job: LoaderJob, pull: PullRequest) do
		if config.no_events then return

		var api = config.wallet.api
		for event in api.load_issue_events(job.repo, pull) do
			react_event(job, generator.pull_raw_event(job.repo, pull, event))
		end
	end

	# Apply the github event to the game
	fun react_event(job: LoaderJob, event: GithubEvent) do
		for reactor in rules.reactors do reactor.react_event(self, event)
		for reactor in rules.achievements do reactor.react_event(self, event)
	end

	# Check if the API is in error state then abort
	fun check_error(api: GithubAPI, message: nullable String) do
		var err = api.last_error
		if err != null then
			error message or else err.message
		end
	end

	# Logger shortcut
	fun log: ConsoleLog do return config.logger

	# Display a error and exit
	fun error(msg: String) do
		log.error "Error: {msg}"
		exit 1
	end
end

# Loader status by repo
class LoaderJob
	super RepoObject
	serialize

	# Repo this status is about
	var repo: Repo

	# Primary key: the repo id
	redef var id is lazy, serialize_as("_id") do return repo.full_name

	# Last issue loaded
	var last_issue: Int
end

# Loader status repository
class LoaderJobRepo
	super MongoRepository[LoaderJob]
end

# Init options
var opts = new LoaderOptions.from_args(args)
var config = new LoaderConfig.from_options(opts)
var loader = new Loader(config)

if opts.opt_help.value then opts.show_usage

if opts.opt_show_wallet.value then
	loader.show_wallet
end

var args = opts.rest
if opts.opt_show_jobs.value or args.is_empty then
	loader.show_jobs
end

if args.not_empty then
	if opts.opt_clear.value then
		loader.remove args.first
	else
		loader.start args.first
	end
end
