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

# Manage indexing of Nit model for Nitdoc QuickSearch.
module static_index

import static::static_html
import json

# Generate the index for then Nitdoc QuickSearch field.
#
# Create a JSON object containing links to:
#  * modules
#  * mclasses
#  * mpropdefs
# All entities are grouped by name to make the research easier.
#
# TODO Merge with model_index
redef class DocModel

	# Build the nitdoc quick search index
	fun create_index_file(file: String) do
		var table = new QuickSearchTable(self)
		var tpl = new Template
		tpl.add "var nitdocQuickSearchRawList="
		tpl.add table.to_json
		tpl.add ";"
		tpl.write_to_file(file)
	end
end

# The result map for QuickSearch.
private class QuickSearchTable
	super HashMap[String, Array[QuickSearchResult]]

	var doc: DocModel

	init do
		for mmodule in doc.mmodules do
			self[mmodule.name].add new QuickSearchResult(mmodule.full_name, mmodule.html_url)
		end
		for mclass in doc.mclasses do
			self[mclass.name].add new QuickSearchResult(mclass.full_name, mclass.html_url)
		end
		for mproperty in doc.mproperties do
			for mpropdef in mproperty.mpropdefs do
				var full_name = mpropdef.mclassdef.mclass.full_name
				var cls_url = mpropdef.mclassdef.mclass.html_url
				var def_url = "{cls_url}#{mpropdef.html_id}.definition"
				self[mproperty.name].add new QuickSearchResult(full_name, def_url)
			end
		end
	end

	redef fun provide_default_value(key) do
		var v = new Array[QuickSearchResult]
		assert key isa String
		self[key] = v
		return v
	end
end

# A QuickSearch result.
private class QuickSearchResult
	serialize

	# The text of the link.
	var txt: String

	# The destination of the link.
	var url: String
end
