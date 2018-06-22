# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Runs a webserver based on nitcorn that render things from model.
module nitweb

import doc_tool
import doc::api

redef class ToolContext

	# Path to app config file.
	var opt_config = new OptionString("Path to app config file", "--config")

	# Host name to bind on (will overwrite the config one).
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Port number to bind on (will overwrite the config one).
	var opt_port = new OptionInt("Port number to use", -1, "--port")

	# Directory for embedded images and files
	var opt_tmp_dir = new OptionString("Temporary file directory", "--tmp-dir")

	init do
		super
		option_context.add_option(opt_config, opt_host, opt_port, opt_tmp_dir)
	end
end

# Phase that builds the model and wait for http request to serve pages.
class Nitweb
	super DocTool

	redef var tool_description do
		var tpl = new Template
		tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
		tpl.add "Run a webserver based on nitcorn that serves pages about model."
		return tpl.write_to_string
	end

	redef var mdoc_post_processors is lazy do
		var processors = super
		processors.add new MDocProcessImages(config.tmp_dir, "/")
		return processors
	end

	# Tool Config
	var config = new NitwebConfig(toolcontext, model, mainmodule, modelbuilder, filter, catalog) is lazy

	redef fun execute do
		var app = new App

		var config_file = toolcontext.opt_config.value
		if config_file == null then config.default_config_file = "nitweb.ini"
		config.parse_options(args)
		var opt_host = toolcontext.opt_host.value
		if opt_host != null then config.ini["app.host"] = opt_host
		var opt_port = toolcontext.opt_port.value
		if opt_port >= 0 then config.ini["app.port"] = opt_port.to_s
		var opt_tmp_dir = toolcontext.opt_tmp_dir.value
		if opt_tmp_dir != null then config.tmp_dir = opt_tmp_dir


		app.use_before("/*", new SessionInit)
		app.use_before("/*", new RequestClock)
		app.use("/api", new APIRouter(config))
		app.use("/login", new GithubLogin(config.github_client_id))
		app.use("/oauth", new GithubOAuthCallBack(config.github_client_id, config.github_client_secret))
		app.use("/logout", new GithubLogout)
		app.use("/*", new StaticHandler(config.tmp_dir))
		app.use("/*", new StaticHandler(toolcontext.share_dir / "nitweb", "index.html"))
		app.use_after("/*", new ConsoleLog)
		app.listen(config.app_host, config.app_port)
	end
end

var nitweb = new Nitweb
nitweb.start
