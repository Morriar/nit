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

module suggest_steps

import suggest_align

class SuggestAutomatae
	var steps = new HashMap[Step, Array[Step]]

	fun get_step(md_node: MdNode): nullable Step is abstract

	fun next_step(step: Step): nullable Step is abstract

	fun next_possible_step(step: Step): nullable Step is abstract
end

class Step

end

class TitleStep

	fun suggest: Array[MdCard] is abstract
end

class TOCStep
end

class IntroStep
end
