# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2018 Alexandre Terrasa <alexandre@moz-code.org>
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

import nitindex
import realtime

print "Parsing..."

var toolcontext = new ToolContext
# toolcontext.process_options(["./tests/test_prog"])
# toolcontext.process_options(["./lib/core"])
# toolcontext.process_options(["./lib"])
# toolcontext.process_options(["./lib", "./src", "--keep-going"])
toolcontext.process_options(["./lib", "./contrib", "--keep-going"])

var arguments = toolcontext.option_context.rest
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

print "Indexing..."

var timer = new Clock

if not mmodules.is_empty then
	mbuilder.run_phases
	toolcontext.run_global_phases(mmodules)
end

var index = toolcontext.index
var indexing_time = timer.lapse

var nb_docs = 0
var nb_keys = 0
for doc in index.documents do
	nb_docs += 1
	nb_keys += doc.keys.length
end

print "\n\nIndexing Time: {indexing_time} s"
print "Docs: {nb_docs}"
print "Keys: {nb_keys}"
print "Keys / Doc: {nb_keys / nb_docs}"

var nb_queries = 10000
timer = new Clock
for i in [0 .. nb_queries] do
	var q = new Query
	# q["kind"] = "MModule"
	index.find(q)
end
var time = timer.lapse

print "\n\nQueries: {nb_queries}"
print "Total Time: {time} s"
print "Time / Query: {time * 1000.0 / nb_queries.to_f} ms\n\n"

var q = new Query
# q["kind"] = "MPackage"
print "MPackages: {index.find(q).length}"

q = new Query
# q["kind"] = "MGroup"
print "MGroups: {index.find(q).length}"

q = new Query
# q["kind"] = "MModule"
print "MModule: {index.find(q).length}"

q = new Query
# q["kind"] = "MClass"
print "MClasses: {index.find(q).length}"

q = new Query
# q["kind"] = "MClassDef"
print "MClassDef: {index.find(q).length}"

q = new Query
# q["kind"] = "MProperty"
print "MProperties: {index.find(q).length}"

q = new Query
# q["kind"] = "MPropDef"
print "MPropDefs: {index.find(q).length}"
