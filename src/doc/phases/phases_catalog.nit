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

module phases_catalog

import phases_base
import catalog

redef class ToolContext
	var catalog_phase = new CatalogPhase(self, [typing_phase])

	var catalog = new Catalog(modelbuilder) is lazy

    # Parse the mpackages catalog
	#
	# Initializes the `catalog`.
	private fun parse_catalog do
		var mpackages = modelbuilder.model.collect_mpackages
		# Compute the poset
		for p in mpackages do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)

			catalog.deps.add_node(p)
			for gg in p.mgroups do for m in gg.mmodules do
				for im in m.in_importation.direct_greaters do
					var ip = im.mpackage
					if ip == null or ip == p then continue
					catalog.deps.add_edge(p, ip)
				end
			end
		end
		# Build the catalog
		for mpackage in mpackages do
			catalog.package_page(mpackage)
			catalog.git_info(mpackage)
			catalog.mpackage_stats(mpackage)
		end
		self.catalog = catalog
	end
end

class CatalogPhase
	super DocPhase

	redef fun process_mainmodule(mainmodule, mmodules) do
		toolcontext.parse_catalog
	end
end
