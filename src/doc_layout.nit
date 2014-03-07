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

# Documentation generator for the nit language.
# Generate API documentation in HTML format from nit source code.

module doc_layout

# header of the html page
class DocHeader
	var menu: DocMenu = new DocMenu

	# return html header
	fun html: String do
		var buffer = new Buffer
		buffer.append("<header>")
		buffer.append(menu.html)
		buffer.append("</header>")
		return buffer.to_s
	end
end

# menu of the html page
class DocMenu
	var items = new Array[String]
	
	# return html menu
	fun html: String do
		var buffer = new Buffer
		buffer.append("<nav class='main'>")
		buffer.append("<ul>")
		for item in items do buffer.append(item)
		buffer.append("</ul>")
		buffer.append("</nav>")
		return buffer.to_s
	end
end

