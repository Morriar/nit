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

module static_html

import static::static_structure
import cards::cards_html
import json

redef class DocModel

	# Render the `doc` as a HTML website
	fun render_html(output_dir: String) do
		for page in pages.values do
			page.render(self).write_to_file("{output_dir}/{page.html_url}")
		end
	end
end

redef class DocPage
	super Template

	# Page url.
	var html_url: String is writable, noinit

	# Directory where css, js and other assets can be found.
	var shareurl: String is writable, noinit

	# Top menu template if any.
	var topmenu: DocTopMenu is writable, noinit

	# Footer content if any.
	var footer: nullable Writable = null is writable

	# Render the page as a html template.
	private fun render(doc: DocModel): Writable do
		# init page options
		self.shareurl = doc.share_url or else "."
		self.footer = doc.custom_footer

		# build page
		init_title(doc)
		init_topmenu(doc)
		init_content(doc)

		# piwik tracking
		var tracker_url = doc.tracker_url
		var site_id = doc.piwik_site_id
		if tracker_url != null and site_id != null then
			piwik_script = new PiwikScript(tracker_url, site_id)
		end
		return self
	end

	# Build page title string
	fun init_title(doc: DocModel) do end

	# Build top menu template if any.
	fun init_topmenu(doc: DocModel) do
		topmenu = new DocTopMenu
		topmenu.brand = new Link("index.html", doc.custom_brand or else "Nitdoc")
	end

	#
	fun init_content(doc: DocModel) do end

	# Renders the html `<head>`.
	private fun render_head do
		var css = (self.shareurl / "css").html_escape
		var vendors = (self.shareurl / "vendors").html_escape

		addn "<!DOCTYPE html>"
		addn "<head>"
		addn " <meta charset='utf-8'/>"
		addn " <!--link rel='stylesheet' href='{css}/Nitdoc.UI.css' type='text/css'/-->"
		addn " <link rel='stylesheet' href='{vendors}/bootstrap/css/bootstrap.min.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.bootstrap.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.cards.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.code.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.css'/>"
		addn " <link rel='stylesheet' href='{css}/Nitdoc.QuickSearch.css'/>"
		addn " <title>{title.html_escape}</title>"
		addn "</head>"
		add "<body>"
	end

	# Renders the footer and content.
	private fun render_content do
		if tabs.is_empty then return
		if tabs.length == 1 then
			addn tabs.first
			return
		end
		addn "<ul class='nav nav-tabs'>"
		for tab in tabs do
			if tab.is_empty then continue
			addn tab.tab_link
		end
		addn "</ul>"
		addn "<div class='tab-content'>"
		for tab in tabs do
			if tab.is_empty then continue
			addn tab
		end
		addn "</div>"
	end

	var piwik_script: nullable PiwikScript = null is writable

	# Render JS scripts
	private fun render_footer do
		if footer != null then
			addn "<div class='well footer'>"
			add footer.as(not null)
			addn "</div>"
		end
		var vendors = (self.shareurl / "vendors").html_escape
		var js = (self.shareurl / "js").html_escape

		addn "<script src='quicksearch-list.js'></script>"
		addn "<script src='{vendors}/jquery/jquery-1.11.1.min.js'></script>"
		addn "<script src='{vendors}/jquery/jquery-ui-1.10.4.custom.min.js'></script>"
		addn "<script src='{vendors}/bootstrap/js/bootstrap.min.js'></script>"
		addn "<script src='{js}/nitdoc.utils.js'></script>"
		addn "<script src='{js}/nitdoc.quicksearch.js'></script>"

		var piwik_script = self.piwik_script
		if piwik_script != null then
			add piwik_script
		end
		addn "</body>"
		addn "</html>"
	end

	# Render the whole page
	redef fun rendering do
		render_head
		add topmenu
		addn "<div class='container-fluid'>"
		render_content
		addn "</div>"
		render_footer
	end
end

redef class PageHome
	redef var html_url = "index.html"

	redef fun render(doc) do
		main_tab.show_sidebar = false
		return super
	end

	redef fun init_title(doc) do
		title = doc.custom_title or else "Nitdoc"
	end

	redef fun render_content do
		addn "<div class='container'>"
		if tabs.not_empty then
			addn tabs.first
		end
		addn "</div>"
	end
end

redef class PageMEntity
	redef var html_url is lazy do return mentity.html_url
	redef fun init_title(doc) do title = mentity.html_name

	redef fun render_content do
		addn new CardPageHeader(
			mentity.html_declaration.write_to_string,
			mentity.html_namespace.write_to_string)
		super
	end

	redef fun init_topmenu(doc) do
		super
		for m in mentity.nitdoc_breadcrumbs do
			topmenu.add_li new ListItem(new Link(m.html_url, m.html_name))
		end
		topmenu.active_item = topmenu.items.last
	end
end

redef class PagePerson
	redef var html_url is lazy do return person.html_url
end

redef class PageTag
	redef var html_url is lazy do return "tag_{tag.to_cmangle}.html"
end

redef class MEntity
	redef fun to_dot_node do
		var node = super
		node["URL"] = html_url
		return node
	end
end

redef class DocTab
	super Template

	#
	var show_sidebar = true is writable

	#
	fun tab_link: Template do
		var tpl = new Template
		tpl.addn "<li class='{if is_active then "active" else ""}'>"
		tpl.addn " <a data-toggle='tab' href='#{id}'>"

		var icon = self.icon
		if icon != null then
			tpl.addn "  <span class='glyphicon glyphicon-{icon}'></span>"
		end
		tpl.addn " {title}"
		tpl.addn " </a>"
		tpl.addn "</li>"
		return tpl
	end

	redef fun rendering do
		# var sections = new Array[CardSection]
		# for card in content do
			# if card isa CardSection then sections.add card
		# end
		# var sidebar = new DocSidebar
		# if sections.not_empty then sidebar.cards.add new CardSummary(sections)

		var has_left = show_sidebar and sidebar.cards.not_empty
		var has_right = metadata.cards.not_empty

		addn "<div class='tab-pane {if is_active then "active" else ""}' id='{id}'>"
		if has_left then
			addn " <div class='col-sm-3'>"
			addn sidebar
			addn " </div>"
		end
		var cols = 12
		if has_left then cols -= 3
		if has_right then cols -= 3
		addn " <div class='col-sm-{cols}'>"
		for card in content do addn card
		addn " </div>"
		if has_right then
			addn " <div class='col-sm-3'>"
			addn metadata
			addn " </div>"
		end
		addn "</div>"
	end
end

# Top menu bar template.
#
# FIXME should be a Bootstrap component template
# At this moment, the topmenu structure stills to specific to Nitdoc to use the
# generic component.
class DocTopMenu
	super UnorderedList

	# Brand link to display in first position of the top menu.
	#
	# This is where you want to put your logo.
	var brand: nullable Link is noinit, writable

	# Active menu item.
	#
	# Depends on the current page, this allows to hilighted the current item.
	#
	# FIXME should be using Boostrap breadcrumbs component.
	# This will still like this to avoid diff and be changed in further fixes
	# when we will modify the output.
	var active_item: nullable ListItem is noinit, writable

	redef fun rendering do
		addn "<nav class='navbar navbar-default navbar-fixed-top'>"
		addn " <div class='container-fluid'>"
		addn "  <div class='col-xs-8'>"
		addn "   <div class='navbar-header'>"
		add  "     <button type='button' class='navbar-toggle' "
		addn "       data-toggle='collapse' data-target='#topmenu-collapse'>"
		addn "      <span class='sr-only'>Toggle menu</span>"
		addn "      <span class='icon-bar'></span>"
		addn "      <span class='icon-bar'></span>"
		addn "      <span class='icon-bar'></span>"
		addn "    </button>"

		var brand = self.brand
		if brand != null then
			add " <span class='navbar-brand'>"
			add brand
			add " </span>"
		end

		addn "   </div>"
		addn "   <div class='collapse navbar-collapse' id='topmenu-collapse'>"
		addn "    <ul class='nav navbar-nav'>"
		for item in items do
			if item == active_item then item.css_classes.add "active"
			add item.write_to_string
		end
		addn "    </ul>"
		addn "   </div>"
		addn "  </div>"
		addn "  <div class='col-xs-4' id='search-placeholder'>"
		addn "  </div>"
		addn " </div>"
		addn "</nav>"
	end
end

redef class DocSidebar
	super Template

	redef fun rendering do
		if cards.is_empty then return
		addn "<div id='sidebar'>"
		for card in cards do addn card
		addn "</div>"
	end
end

# JS script for Piwik Tracker
class PiwikScript
	super Template

	# Piwik URL to use for this tracker.
	var tracker_url: String

	# Site ID used on Piwik system.
	var site_id: String

	redef fun rendering do
		addn "<script>"

		var site_id = self.site_id.to_json
		var tracker_url = self.tracker_url.trim
		if tracker_url.chars.last != '/' then tracker_url += "/"
		tracker_url = "://{tracker_url}".to_json

		addn "<!-- Piwik -->"
		addn "var _paq = _paq || [];"
		addn " _paq.push([\"trackPageView\"]);"
		addn " _paq.push([\"enableLinkTracking\"]);"
		addn "(function() \{"
		addn " var u=((\"https:\" == document.location.protocol) ? \"https\" : \"http\") + {tracker_url};"
		addn " _paq.push([\"setTrackerUrl\", u+\"piwik.php\"]);"
		addn " _paq.push([\"setSiteId\", {site_id}]);"
		addn " var d=document, g=d.createElement(\"script\"), s=d.getElementsByTagName(\"script\")[0]; g.type=\"text/javascript\";"
		addn " g.defer=true; g.async=true; g.src=u+\"piwik.js\"; s.parentNode.insertBefore(g,s);"
		addn "\})();"

		addn "</script>"
	end
end
