# `curl` - Data transfer powered by the native curl library

Download or upload over HTTP with `CurlHTTPRequest` and send emails with `CurlMail`.

Example from `curl::curl_http`:

~~~
# Example use of the Curl module
module curl_http is example

import curl

# Custom delegate to receive callbacks from a Curl transfer
class MyHttpFetcher
	super CurlCallbacks

	# Body of the downloaded file
	var fetched_body = ""

	redef fun header_callback(line) do
		# We keep this callback silent for testing purposes
		#if not line.has_prefix("Date:") then print "Header_callback: {line}"
	end

	redef fun body_callback(line) do self.fetched_body += line

	redef fun stream_callback(buffer) do print "Stream_callback: {buffer}"
end

private fun print_usage do print "Usage: curl_http [POST|GET|GET_FILE] url"

if args.length < 2 then
	print_usage
	exit 1
end

var url = args[1]
var request = new CurlHTTPRequest(url)
request.verbose = false # Set to `true` to debug

if args[0] == "GET" then
	# HTTP Get Request
	var response = request.execute

	if response isa CurlResponseSuccess then
		print "Status code: {response.status_code}"
		print "Body: {response.body_str}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else if args[0] == "POST" then
	# HTTP Post Request
	var my_http_fetcher = new MyHttpFetcher
	request.delegate = my_http_fetcher

	var post_data = new HeaderMap
	post_data["Bugs Bunny"] = "Daffy Duck"
	post_data["Batman"] = "Robin likes special characters @#ùà!è§'(\"é&://,;<>∞~*"
	post_data["Batman"] = "Yes you can set multiple identical keys, but APACHE will consider only one, the last one"
	request.data = post_data
	var response = request.execute

	print "Our body from the callback: {my_http_fetcher.fetched_body}"

	if response isa CurlResponseSuccess then
		print "*** Answer ***"
		print "Status code: {response.status_code}"
		print "Body should be empty, because we decided to manage callbacks: {response.body_str.length}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else if args[0] == "GET_FILE" then
	# HTTP Get to file Request
	var headers = new HeaderMap
	headers["Accept"] = "Moo"
	request.headers = headers
	var response = request.download_to_file(null)

	if response isa CurlFileResponseSuccess then
		print "*** Answer ***"
		print "Status code: {response.status_code}"
		print "Size downloaded: {response.size_download}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else
	print_usage
	exit 1
end
~~~

## Features

![Diagram for `curl`](uml-curl.svg)

* `native_curl` - Binding of C libCurl which allow us to interact with network.

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
