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

import frontend
import model::model_views
import model::model_collect
import counter

var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mods = mbuilder.parse_full(arguments)

# process
if mods.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mods)

var pdircount = new Counter[String]
var packcount = new Counter[MPackage]
for mpackage in model.mpackages do
	#print mpackage
	var location = mpackage.location
	if location.to_s == "contrib/nitc" or location.to_s.has_prefix("contrib/nitc/") then
		pdircount.inc("nitc")
	else if location.to_s.has_prefix("contrib") then
		pdircount.inc("contrib")
	else if location.to_s.has_prefix("lib") then
		pdircount.inc("lib")
	else
		pdircount.inc("unknown")
	end
	var mmods = new Array[MModule]
	for mgroup in mpackage.mgroups do mmods.add_all mgroup.mmodules
	packcount[mpackage] = mmods.length
end
print "MPackage: {packcount.length}"
pdircount.print_elements(pdircount.length)
# packcount.print_elements(packcount.length)
# packcount.print_summary

var mdircount = new Counter[String]
var mkindcount = new Counter[String]
var modules_counter = new Counter[MModule]
var mmodules = new Array[MModule]
for mmodule in model.mmodules do
	var location = mmodule.location
	if location.to_s.has_prefix("contrib/nitc/") then
		mdircount.inc("nitc")
	else if location.to_s.has_prefix("contrib/") then
		mdircount.inc("contrib")
	else if location.to_s.has_prefix("lib/") then
		mdircount.inc("lib")
	else
		mdircount.inc("unknown")
	end
	if mmodule.is_generated then
		mkindcount.inc("generated")
	else if mmodule.is_fictive then
		mkindcount.inc("fictive")
	else if mmodule.is_test_suite or
		(mmodule.name.has_prefix("test") and not mmodule.name == "test_suite") then
		mkindcount.inc("test")
	else if mmodule.name.has("example") or mmodule.location.to_s.has("example") then
		mkindcount.inc("example")
	else
		mkindcount.inc("other")
		mmodules.add mmodule
	end
	modules_counter[mmodule] = 1
end

print "MModules: {model.mmodules.length}"
mdircount.print_elements(mdircount.length)
print "MModules by kind:"
mkindcount.print_elements(mkindcount.length)

var mpackages_count = new Counter[nullable MPackage]
pdircount = new Counter[String]
for mmodule in mmodules do
	var mpackage = mmodule.mpackage
	if mpackage == null then
		pdircount.inc("unknown")
		continue
	end
	var location = mpackage.location
	if location.to_s == "contrib/nitc" or location.to_s.has_prefix("contrib/nitc/") then
		pdircount.inc("nitc")
	else if location.to_s.has_prefix("contrib") then
		pdircount.inc("contrib")
	else if location.to_s.has_prefix("lib") then
		pdircount.inc("lib")
	else
		pdircount.inc("unknown")
	end

	mpackages_count.inc(mmodule.mpackage)
end
print "Package once filtered:"
pdircount.print_elements(pdircount.length)

var mcdefs_counter = new Counter[MModule]
mkindcount = new Counter[String]
for mmodule in mmodules do
	var mgroup = mmodule.mgroup
	var n_module  = mbuilder.mmodule2node(mmodule)
	var n_decl = if n_module != null then n_module.n_moduledecl else null
	var len = mmodule.mclassdefs.length
	var has_main = false
	var only_main = true
	for mclassdef in mmodule.mclassdefs do
		if mclassdef.name == "Sys" then
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.name == "main" then
					has_main = true
				else
					only_main = false
				end
			end
		end
	end

	mcdefs_counter[mmodule] = len
	if len == 0 and
		mgroup != null and mmodule.name == mgroup.name and
		(n_decl == null or n_decl.n_annotations == null) then
		mkindcount.inc("bottom")
	else if len == 1 and
		mmodule.mclassdefs.first.name == "Sys" and has_main and only_main then
		mkindcount.inc("exec")
	else
		if has_main then
			mkindcount.inc("exec + lib")
		else
			mkindcount.inc("lib")
		end
	end
end
# mcdefs_counter.print_elements(mcdefs_counter.length)
mkindcount.print_elements(mkindcount.length)

var vis_counter = new Counter[MVisibility]
for mmodule in mmodules do
	for mclass in mmodule.intro_mclasses do
		vis_counter.inc(mclass.visibility)
	end
end
print model.mclasses.length
print "MClasses: {vis_counter.sum}"
vis_counter.print_elements(vis_counter.length)

vis_counter = new Counter[MVisibility]
for mmodule in mmodules do
	for mclass in mmodule.intro_mclasses do
		if mclass.visibility == private_visibility then continue
		for mclassdef in mclass.mclassdefs do
			for mprop in mclassdef.intro_mproperties do
				vis_counter.inc(mprop.visibility)
			end
		end
	end
end
print model.mproperties.length
print "MProperties: {vis_counter.sum}"
vis_counter.print_elements(vis_counter.length)
