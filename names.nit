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

# Helpful features about packages
module names

import nitc::frontend
import nitc::model_collect
import counter

# build toolcontext
var toolcontext = new ToolContext

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

# Collect model
var mpackages = model.collect_mpackages
var mgroups = model.collect_mgroups
var mmods = model.collect_mmodules
var mclasses = model.collect_mclasses
var mprops = model.collect_mproperties

# var counter = new Counter[String]
# var count = 0
# for mentity in mclasses do
#	# print mentity.name
#	if mentity.name.has("_") then
#		counter.inc "compound"
#	else if mentity.name.has("[0-9]".to_re) then
#		counter.inc "number"
#	else if mentity.name.has("[A-Z].*[A-Z]".to_re) then
#		counter.inc "compA"
#	else
#		counter.inc "word"
#	end
#	count += 1
# end
#
# for k, v in counter do
#	print "{k}: {v}"
# end
# print count

print mgroups.length / mpackages.length
print mmods.length / mpackages.length
