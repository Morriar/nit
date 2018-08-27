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

import nitc::doc_tool

class Tmp
	super DocTool

	redef fun execute do

		# Collect model to document
		var mpackages = model.collect_mpackages(null)
		# var mgroups = model.collect_mgroups(filter)
		# var nmodules = model.collect_mmodules(filter)
		# var mclasses = model.collect_mclasses(filter)
		# var mprops = model.collect_mproperties(filter)

		# var mentities = new Array[MEntity]
		# mentities.add_all mpackages
		# mentities.add_all mgroups
		# mentities.add_all nmodules
		# mentities.add_all mclasses
		# mentities.add_all mprops

		var filter = new ModelFilter(
			min_visibility = public_visibility,
			accept_fictive = false,
			accept_broken = false,
			accept_extern = false,
			accept_attribute = false,
			accept_test = false,
			accept_example = false
		)

		for mpackage in mpackages do
			var mgroups = mpackage.collect_all_mgroups(filter)
			var mmodules = mpackage.collect_mmodules(filter)
			var mclasses = mpackage.collect_intro_mclasses(filter)
			var mprops = mpackage.collect_intro_mproperties(filter)
			print "{mpackage}\t{mgroups.length}\t{mmodules.length}\t{mclasses.length}\t{mprops.length}"
		end
	end
end

var nitdoc = new Tmp
nitdoc.start

# for file in "lib".files do
	# var docdown = "lib" / file / "README.docdown.md"
	# sys.system "touch {docdown}"
	# if docdown.file_exists then
		# sys.system "mv {docdown} {docdown}.old"
	# end

	# var readme = "lib" / file / "README.md"
	# sys.system "touch {readme}"
	# if readme.file_exists then
		# sys.system "mv {readme} {readme}.old"
	# end

# end
