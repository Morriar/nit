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

# footer of the html page
class DocFooter
	var text: String writable

	init do end

	# return html footer
	fun html: String do
		var buffer = new Buffer
		buffer.append("<footer>")
		buffer.append(text)
		buffer.append("</footer>")
		return buffer.to_s
	end
end

# sidebar of the html page
class DocSidebar
	var boxes = new Array[DocSidebox]

	# return html sidebar
	fun html: String do
		var buffer = new Buffer
		buffer.append("<div class='sidebar'>")
		for box in boxes do buffer.append(box.html)
		buffer.append("</div>")
		return buffer.to_s
	end
end

# sidebox of the html page
class DocSidebox
	var title: nullable String writable
	var groups = new Array[DocSideboxGroup]
	var css_classes = new Array[String]

	# return html sidebox
	fun html: String do
		var buffer = new Buffer
		if css_classes.is_empty then
			buffer.append("<nav>")
		else
			buffer.append("<nav class='{css_classes.join(" ")}'>")
		end
		if title != null then buffer.append("<h3>{title}</h3>")
		for group in groups do buffer.append(group.html)
		buffer.append("</nav>")
		return buffer.to_s
	end
end

# sideboxgroup of the html page
class DocSideboxGroup
	var title: nullable String
	var elements = new Array[DocListElement]

	# return html sideboxgroup
	fun html: String do
		var buffer = new Buffer
		if title != null then buffer.append("<h4>{title}</h4>")
		buffer.append("<ul>")
		for element in elements do buffer.append(element.html)
		buffer.append("</ul>")
		return buffer.to_s
	end
end

# elements of the html page
class DocListElement
	var text: String
	var css_classes = new Array[String]

	# return html element
	fun html: String do
		var buffer = new Buffer
		if css_classes.is_empty then
			buffer.append("<li>")
		else
			buffer.append("<li class='{css_classes.join(" ")}'>")
		end
		buffer.append(text)
		buffer.append("</li>")
		return buffer.to_s
	end
end

# main content of the Overview html page
class DocContentOverview
	var title: String
	var graph: String
	var description: String
	var sections = new Array[DocContentOverviewSection]

	# return html main content for an overview page
	fun html: String do
		var buffer = new Buffer
		buffer.append("<div class='content'>")
		buffer.append("<h1>{title}</h1>")
		buffer.append("<article class='overview'>{description}</article>")
		buffer.append(graph)
		for section in sections do buffer.append(section.html)
		buffer.append("</div>")
		return buffer.to_s
	end
end

# main content sections of the overview html page
class DocContentOverviewSection
	var title: nullable String
	var css_classes = new Array[String]
	var articles = new Array[String]

	# return html Content Box
	fun html: String do
		var buffer = new Buffer
		if title != null then buffer.append("<h2>{title}</h2>")
		if css_classes.is_empty then
			buffer.append("<section>")
		else
			buffer.append("<section class='{css_classes.join(" ")}'>")
		end
		for article in articles do buffer.append(article)
		buffer.append("</section>")
		return buffer.to_s
	end
end

# main content of the module html page
class DocContentModule
	var title: String
	var subtitle: String
	var description: String
	var graph: String
	var sections = new Array[DocContentModuleSection]

	# return main content of a module html page
	fun html:String do
		var buffer = new Buffer
		buffer.append("<div class='content'>")
		buffer.append("<h1>{title}</h1>")
		buffer.append("<div class= 'subtitle info'>{subtitle}</div>")
		buffer.append(description)
		buffer.append(graph)
		for section in sections do buffer.append(section.html)
		return buffer.to_s
	end
end
# Section of the main content of a module html page
class DocContentModuleSection
	var title: String
	var articles = new Array[String]

	# return a section for the main content of a module html page
	fun html: String do
		var buffer = new Buffer
		buffer.append("<section class='classes'>")
		buffer.append("<h2 class='section-header'>{title}</h2>")
		for article in articles do buffer.append(article)
		buffer.append("</section>")
		return buffer.to_s
	end
end

# main content of a class html page
class DocContentClass
	var title: String
	var subtitle: String
	var description: String
	var graph: String
	var concerns = new Array[DocContentClassConcern]
	var sections = new Array[DocContentClassSection]

	# return main content for a class html page
	fun html: String do
		var buffer = new Buffer
		buffer.append("<div class='content'>")
		buffer.append("<h1>{title}</h1>")
		buffer.append("<div class='subtitle info'>{subtitle}</div>")
		buffer.append(description)
		buffer.append(graph)
		for concern in concerns do buffer.append(concern.html)
		for section in sections do buffer.append(section.html)
		buffer.append("</div>")
		return buffer.to_s
	end
end

# section of class html page
class DocContentClassSection
	var title: String
	var section_css_classes = new Array[String]
	var title_css_classes = new Array[String]
	var articles = new Array[DocContentClassSectionFormal]
	var texts = new Array[String]

	# return a section for a class html page
	fun html: String do
		var buffer = new Buffer
		if section_css_classes.is_empty then
			buffer.append("<section>")
		else
			buffer.append("<section class='{section_css_classes.join(" ")}'>")
		end
		if title_css_classes.is_empty then
			buffer.append("<h2>{title}</h2>")
		else
			buffer.append("<h2 class='{title_css_classes.join(" ")}'>{title}</h2>")
		end
		if not articles.is_empty then
			for article in articles do buffer.append(article.html)
		end
		if not texts.is_empty then
			for text in texts do buffer.append(text)
		end
		buffer.append("</section>")
		return buffer.to_s
	end
end


class DocContentClassSectionFormal
	var ft: String
	var link : String

	fun html: String do
		var buffer = new Buffer
		buffer.append("<article id='FT_{ft}'>")
		buffer.append("<h3 class='signature' data-untyped-signature='{ft.to_s}'>")
		buffer.append("<span>{ft}: {link}</span>")
		buffer.append("</h3>")
		buffer.append("<div class='info'>formal generic type</div>")
		buffer.append("</article>")
		return buffer.to_s
	end
end

# concern of a class html page
class DocContentClassConcern
	var concerns = new ArrayMap[String, Array[String]]

	init(concern: ArrayMap[String, Array[String]]) do
		self.concerns = concern
	end

	# return the concern for a class html page
	fun html: String do
		var buffer = new Buffer
		buffer.append("<section class='concerns'>")
		buffer.append("<h2 class='section-header'>Concern</h2>")
		buffer.append("<ul>")
		for owner, mmodules in concerns do
			buffer.append("<li>{owner}")
			if not mmodules.is_empty then
				buffer.append("<ul>")
				for mmodule in mmodules do
					buffer.append("<li>{mmodule}</li>")
				end
				buffer.append("</ul>")
			end
		end
		buffer.append("</ul>")
		buffer.append("</section>")
		return buffer.to_s
	end
end
