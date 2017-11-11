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

module cards_html

import cards
import doc::templates::templates_html

redef class DocCard
	super Template
end

redef class CardHome
	redef fun rendering do
		var content = self.content
		if content == null then return
		addn "<div>"
		addn content
		addn "</div>"
	end
end

redef class CardSection
	redef fun rendering do
		addn "<h{level}>{title}</h{level}>"
	end
end

redef class CardPageHeader
	redef fun rendering do
		addn "<div class='page-header'>"
		super
		var subtitle = self.subtitle
		if subtitle != null then
			addn "<p class='text-muted'>"
			addn subtitle
			addn "</p>"
		end
		addn "</div>"
	end
end

redef class CardMEntity
	redef fun rendering do
		addn """
		<div class='card'>
			<div class='card-left text-center'>
			{{{mentity.html_icon.write_to_string}}}
			</div>
			<div class='card-body'>
				<h5 class='card-heading'>
					{{{mentity.html_declaration.write_to_string}}}
				</h5>"""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			if full_doc then
				addn mdoc.html_documentation
			else
				addn mdoc.html_synopsis
			end
		end
		addn """
			</div>
		</div>"""
	end
end

redef class CardList
	redef fun rendering do
		addn "<div class='card-list'>"
		for card in cards do
			addn card
		end
		addn "</div>"
	end
end

redef class CardLinearizationList
	redef fun rendering do
		if cards.is_empty then return

		addn "<div>"
		for card in cards do
			addn card
			if card == cards.last then break
			addn "<h4 class='text-muted text-center'>"
			addn " <span class='glyphicon glyphicon-chevron-up'></span>"
			addn "</h4>"
		end
		addn "</div>"
	end
end

redef class CardLinearizationDef
	redef fun rendering do
		var cin = if is_active then "in" else ""
		var active = if is_active then "active" else ""
		addn """
		<div class='card {{{active}}}' id='def_{{{mentity.html_id}}}'>
			<div class='card-body'>
				<h5>
					{{{mentity.html_icon.write_to_string}}}
					{{{mentity.html_namespace.write_to_string}}}
					<div class='btn-bar'>
						<button class='btn btn-link' data-toggle='collapse'
						  data-target='#{{{mentity.html_id}}}'>
							<span class='glyphicon glyphicon-console' title='Show code' />
						</button>
					</div>
				</h5>
				<div id='{{{mentity.html_id}}}' class='collapse {{{cin}}}'>
					<pre>"""
		render_code
		addn """	</pre>
					<span class='text-muted'>{{{mentity.location.to_s}}}</span>
				</div>
			</div>
		</div>"""
	end
end

redef class CardSectionMEntity
	redef fun rendering do
		addn "<h2>"
		addn mentity.html_declaration
		addn "</h2>"
		addn mentity.html_namespace
	end
end

redef class CardMDoc
	redef fun rendering do
		var mdoc = self.mdoc
		if mdoc == null then return
		addn "<div class='card'>"
		addn " <div class='card-body nitdoc'>"
		addn mdoc.html_documentation
		addn " </div>"
		addn "</div>"
	end
end

redef class CardInheritance
	redef fun rendering do
		var ancestors = self.ancestors
		var descendants = self.descendants
		if ancestors == null and parents == null and
			children == null and descendants == null then return

		addn "<div class='card'>"
		addn " <div class='card-body'>"
		if ancestors != null and ancestors.length <= 10 then
			render_list("Ancestors", ancestors)
		else
			render_list("Parents", parents)
		end
		if descendants != null and descendants.length <= 10 then
			render_list("Descendants", descendants)
		else
			render_list("Children", children)
		end
		addn " </div>"
		addn "</div>"
	end

	fun render_list(title: String, mentities: nullable Array[MEntity]) do
		if mentities == null or mentities.is_empty then return
		addn "<h4>{title}</h4>"
		addn "<ul class='list-unstyled'>"
		for mentity in mentities do
			addn mentity.html_list_item
		end
		addn "</ul>"
	end
end

redef class CardCode
	redef fun rendering do
		addn "<div class='card'>"
		addn " <div class='card-body'>"

		addn "<pre>"
		render_code
		addn "</pre>"
		addn "<span class='text-muted'>{mentity.location}</span>"

		addn " </div>"
		addn "</div>"
	end

	fun render_code do
		var hl = new HighlightVisitor
		hl.enter_visit node
		addn hl.html
	end
end

redef class CardGraph
	redef fun rendering do
		addn "<div class='card'>"
		addn " <div class='card-body'>"
		addn "  <div class='text-center'>"
		addn graph.graph.to_svg
		addn "  </div>"
		addn " </div>"
		addn "</div>"
	end
end

redef class CardSummary
	redef fun rendering do
		addn "<div>"
		addn " <h4>Summary</h4>"
		addn " <ul class='list-unstyled'>"
		for section in sections do
			addn "<li><a href='{section.title}'>{section.title}</a></li>"
		end
		addn " </ul>"
		addn "</div>"
	end
end

redef class CardMdSummary
	redef fun rendering do
		addn "<h4>Summary</h4>"
		addn "<div class='summary'>"
		addn " <ul class='list-unstyled'>"
		for id, headline in headlines do
			var level = headline.level
			var title = md_processor.process(headline.title)
			addn "<li><a href='#{id}'><h{level}>{title}</h{level}></a></li>"
		end
		addn " </ul>"
		addn "</div>"
	end
end

redef class CardCatalogStats
	redef fun rendering do
		addn "<div class='container-fluid no-padding'>"
		for key, value in catalog.catalog_stats.to_map do
			addn "<span class='text-muted small'>"
			addn " <strong>{value}</strong>&nbsp;<span>{key}</span>&nbsp;"
			addn "</span>"
		end
		addn "</div>"
		addn "<hr/>"
	end
end

redef class CardCatalogTags

	# Sorter to sort tags alphabetically
	var tags_sorter = new CatalogTagsSorter

	redef fun rendering do
		var tags = catalog.tag2proj.keys.to_a
		if tags.is_empty then return
		tags_sorter.sort(tags)

		addn "<h2>Tags</h2>"
		addn "<div class='container-fluid no-padding'>"
		for tag in tags do
			addn "<div class='col-xs-3 col-md-12'>"
			addn " <span class='badge'>{catalog.tag2proj[tag].length}</span>"
			addn " <a ui-sref='tag(\{id: tag\})'>{tag}</a>"
			addn "</div>"
		end
		addn "</div>"
		addn "<hr/>"
	end
end

redef class CardCatalogPackage
	redef fun rendering do
		var mpackage = self.mentity
		if not mpackage isa MPackage then return

		addn """
			<div class='card'>
			 <div class='card-left text-center'>{{{mpackage.html_icon.write_to_string}}}</div>
			 <div class='card-body' style='width: 75%'>
			  <h5 class='card-heading'>
				{{{mentity.html_declaration.write_to_string}}}
				<small>&nbsp;"""
		for tag in mpackage.metadata.tags do
			add "<span>"
			add "<a ui-sref='tag(\{id: tag\})' class='text-muted'>{tag}</a>"
			if tag != mpackage.metadata.tags.last then addn ", "
			add "</span>"
		end
		addn """</small>
				</h5>"""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			if full_doc then
				addn mdoc.html_documentation
			else
				addn mdoc.html_synopsis
			end
		end
		addn " </div>"
		addn " <div class='card-right' style='width: 25%'>"
		for maintainer in mpackage.metadata.maintainers do
			addn maintainer.to_html
		end
		addn " <br>"
		var license = mpackage.metadata.license
		if license != null then
			addn """
				 <span class='text-muted'>
				  <a href='http://opensource.org/licenses/{{{license}}}' class='text-muted'>
				   {{{license}}}
				  </a>
				</span>"""
		end
		addn " </div>"
		addn "</div>"
	end
end

redef class CardMetadata
	redef fun rendering do
		for maintainer in metadata.maintainers do
			addn """
				<p class='lead'>
					{{{maintainer.to_html}}}
				</p>"""
		end
		var license = metadata.license
		if license != null then
			addn """
				<span class='text-muted'>
					<a href='http://opensource.org/licenses/{{{license}}}'>{{{license}}}</a>
					license
				</span>"""
		end

		var homepage = metadata.homepage
		var browse = metadata.browse
		var issues = metadata.issues
		if homepage != null or browse != null or issues != null then
			addn """
				<h4>Links</h4>
				<ul class='list-unstyled'>"""
			if homepage != null then addn "<li><a href='{homepage}'>Homepage</a></li>"
			if browse != null then addn "<li><a href='{browse}'>Source Code</a></li>"
			if issues != null then addn "<li><a href='{issues}'>Issues</a></li>"
			addn "</ul>"
		end

		var git = metadata.git
		var last_date = metadata.last_date
		var first_date = metadata.first_date
		if git != null then
			addn """
				<h4>Git</h4>
				<ul class='list-unstyled'>
					<li><a href='{{{git}}}'>{{{git}}}</a></li>
				</ul>
				<span class='text-muted'><b>{{{stats.commits}}}</b> commits</span>
				<br>"""
			if last_date != null then
				addn """<b class=text-muted>Last:</b> {{{last_date}}}<br>"""
			end
			if first_date != null then
				addn """<b class=text-muted>First:</b> {{{first_date}}}"""
			end
		end

		addn """
			<h4>Quality</h4>
			<ul class='list-unstyled'>
				<li>{{{stats.documentation_score}}}% documented</li>
			</ul>"""

		if metadata.tags.not_empty then
			addn "<h4>Tags</h4>"
			for tag in metadata.tags do
				addn "<a href=''>{tag}</a>"
				if tag != metadata.tags.last then add ", "
			end
		end

		if deps.not_empty then
			addn "<h4>Dependencies</h4>"
			for dep in deps do
				add dep.html_link
				if dep != deps.last then add ", "
			end
		end

		if clients.not_empty then
			addn "<h4>Clients</h4>"
			for client in clients do
				add client.html_link
				if client != clients.last then add ", "
			end
		end

		if metadata.contributors.not_empty then
			addn """
				<h4>Contributors</h4>
				<ul class='list-unstyled'>"""
			for contrib in metadata.contributors do
				addn """<li>{{{contrib.to_html}}}</li>"""
			end
			addn "</ul>"
		end

		addn """
			<h4>Stats</h4>
			<ul class='list-unstyled'>
				<li>{{{stats.mmodules}}} modules</li>
				<li>{{{stats.mclasses}}} classes</li>
				<li>{{{stats.mmethods}}} methods</li>
				<li>{{{stats.loc}}} loc</li>
			</ul>"""
	end
end

redef class Person
	redef fun to_html do
		var tpl = new Template
		tpl.addn "<span>"
		var gravatar = self.gravatar
		if gravatar != null then
			tpl.addn "<img class='avatar' src='https://secure.gravatar.com/avatar/{gravatar}?size=14&amp;default=retro' />"
		end
		tpl.addn " <a ui-sref='person(\{id: maintainer.name\})'>{name}</a>"
		tpl.addn "</span>"
		return tpl.write_to_string
	end
end
