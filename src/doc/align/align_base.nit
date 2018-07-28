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

import doc_down

# A reference from the Markdown document to something
abstract class MdRef

	# Source node for this reference
	var node: MdNode

	# String associated to the `node`
	var string: String

	var confidence = 0.0 is writable, optional

	redef fun to_s do return "{class_name}\{{node}\}"
end

# A reference to an option
class MdRefOption
	super MdRef
end

class MdRefPath
	super MdRef

	var path: nullable Path = null

	redef fun confidence do return if path == null then 0.0 else 100.0
end

class MdRefCommand
	super MdRef

	var command: nullable String = null
	var args = new Array[String]

	redef fun confidence do return if command == null then 0.0 else 100.0
end

class MdRefAnnot
	super MdRef

	var annot: nullable String = null

	redef fun confidence do return if annot == null then 0.0 else 100.0
end

class MdRefMEntity
	super MdRef

	var mentity:  MEntity
end

class MdRefName
	super MdRef

	var model_refs = new Array[MdRefMEntity]
end

class MdRefQName
	super MdRefName
end

class MdRefSignature
	super MdRefName
end

class MdRefOther
	super MdRef
end

class MdRefText
	super MdRef

	var model_refs = new Array[MdRefMEntity]
end
