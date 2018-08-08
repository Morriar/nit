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

# An example of how you can customize the HTML output rendering for a MdNode
module example_html_rendering is example

import markdown2::markdown_html_rendering

# Redefine the HTML output for a `MdParagraph`
redef class MdParagraph
	redef fun render_html(v) do
		v.add_raw "<p class=\"ma_class\">"
		visit_all(v)
		v.add_raw "</p>"
	end
end

# Redefine the HTML output for a `MdThematicBreak`
redef class MdThematicBreak
	redef fun render_html(v) do
		v.add_line
		v.add_raw "<hr class=\"autre classe\"/>"
		v.add_line
	end
end
