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

# How to redefine the decorator behavior
#
# You can subclass any decorator to redefine its behavior or customize the output.
module example_decorator is example

import markdown::decorators

# We create a new Decorator for Markdown that inherits from the HTML one.
class MyHTMLDecorator
	super HTMLDecorator

	# We redefine the output for paragraphs so we can add a custom CSS class.
	redef fun add_paragraph(v, block) do
		v.add "<p class=\"my-css-class\">"
		v.emit_in block
		v.add "</p>\n"
	end
end
