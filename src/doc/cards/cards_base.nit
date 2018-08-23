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

module cards_base

import serialization

abstract class DocCard
	serialize

	fun id: String is abstract

	# Card icon
	fun icon: String is abstract

	# Card title
	fun title: String is abstract

	# Card description / explanation
	fun description: String is abstract

	# Card options
	fun options: Map[String, String] do return new HashMap[String, String]

	# Does this card have any options associated?
	fun has_options: Bool do return options.not_empty

	redef fun core_serialize_to(v) do
		v.serialize_attribute("icon", icon)
		v.serialize_attribute("title", title)
		v.serialize_attribute("description", description)
		v.serialize_attribute("options", options)
		v.serialize_attribute("has_options", has_options)
		v.serialize_attribute("kind", class_name)
	end

	fun markdown: String is abstract

	fun commands: Array[String] do return new Array[String]
end
