# This file is part of NIT ( http://www.nitlanguage.org ).
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

import github_curl

redef class GithubCurl

	var api_url: String = "https://api.github.com"

	fun save_reponse(uri: String) do
		var request = new CurlHTTPRequest("{api_url}/{uri}")
		request.user_agent = user_agent
		request.headers = header
		var response = request.execute
		if response isa CurlResponseSuccess then
			# print response.status_code
			print response.body_str
		else if response isa CurlResponseFailed then
			# print response.error_code
			print response.error_msg
		else abort
	end
end

if args.length != 1 then
	print "usage: save_response <uri>"
	exit 1
end

var gh = new GithubCurl(get_github_oauth, "github-save")
gh.save_reponse args.last
