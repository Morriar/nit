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

import popcorn

class CatfactsHandler
	super Handler

	var facts: JsonArray

	redef fun get(req, res) do
		var fact = new JsonObject
		fact["fact"] = facts.rand
		res.json fact
		res.header["Access-Control-Allow-Origin"] = "*"
	end
end

var path = "catfacts.json"
if not path.file_exists then
	print "Cannot find catfacts file at {path}"
	abort
end
var file = new FileReader.open(path)
var json = file.read_all.parse_json
if not json isa JsonObject then
	if json == null then
		print "Expected JsonObject got null"
	else
		print "Expected JsonObject got {json.class_name}: {json}"
	end
	abort
end
var facts = json["facts"]
if not facts isa JsonArray then
	if facts == null then
		print "Expected JsonArray got null"
	else
		print "Expected JsonArray got {facts.class_name}: {facts}"
	end
	abort
end

var app = new App
app.use("/", new CatfactsHandler(facts))
app.listen("localhost", 3000)
