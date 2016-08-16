# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Nitrpg configuration and options
module config

import mongodb
import popcorn
import popcorn::pop_config
import popcorn::pop_repos
import github
import github::wallet

# Nitrpg config file
class NitrpgConfig
	super AppConfig

	redef type OPTIONS: NitrpgOptions

	redef var default_config_file = "nitrpg.ini"

	redef var default_db_name = "nitrpg"

	# Github tokens used to access data.
	var tokens: Array[String] is lazy do
		var arr = at("tokens")
		if arr == null then return new Array[String]
		return arr.values.to_a
	end

	# Github tokens wallet
	var wallet: GithubWallet is lazy do
		var wallet = new GithubWallet.from_tokens(tokens)
		wallet.no_colors = no_colors
		return wallet
	end

	# Use colors in console display
	var no_colors = false is writable

	# Verbosity level (the higher the more verbose)
	var verbose_level: Int is lazy do return value_or_default("loader.verbose", "4").to_i

	# Logger used to print things
	var logger: ConsoleLog is lazy do
		var logger = new ConsoleLog
		logger.level = verbose_level
		return logger
	end

	# Init `self` from a `AppOptions` option values
	redef init from_options(opts) do
		super
		init(opts.opt_config.value or else default_config_file)

		var opt_db_host = opts.opt_db_host.value
		if opt_db_host != null then self["db.host"] = opt_db_host
		var opt_db_name = opts.opt_db_name.value
		if opt_db_name != null then self["db.port"] = opt_db_name

		var opt_tokens = opts.opt_tokens.value
		for token in opt_tokens do self["tokens[]"] = token

		var opt_verbose = opts.opt_verbose.value
		if opt_verbose != 0 then self["loader.verbose"] = opt_verbose.to_s
	end
end

# Specific options for NitRpg
class NitrpgOptions
	super AppOptions

	# --verbose
	var opt_verbose = new OptionCount("Verbosity level", "-v", "--verbose")

	# --no-colors
	var opt_no_colors = new OptionBool("Do not use colors in output", "--no-colors")

	# --tokens
	var opt_tokens = new OptionArray("Token list", "--tokens")

	# --show-wallet
	var opt_show_wallet = new OptionBool("Show wallet status", "--show-wallet")

	init do
		super
		add_option(opt_tokens, opt_show_wallet)
		add_option(opt_verbose, opt_no_colors, opt_db_host)
	end

	# Display the help message for this tool.
	fun show_usage do
		print "Usage:"
		print "nitrpg\n"
		usage
		exit 1
	end
end
