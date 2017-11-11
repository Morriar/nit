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

module cards

import doc::commands::commands_graph
import doc::commands::commands_docdown
import doc::commands::commands_catalog

abstract class DocCard
end

#
class CardSection
	super DocCard
	#
	var level: Int

	#
	var title: String

	#
	var subtitle: nullable String
end

#
class CardPageHeader
	super CardSection
	autoinit(title, subtitle)

	redef var level = 2
end

#
class CardMEntity
	super DocCard

	#
	var mentity: MEntity

	#
	var full_doc = false is optional, writable
end

#
class CardMDoc
	super DocCard

	#
	var mdoc: nullable MDoc
end

class CardMdSummary
	super CardMDoc

	#
	var md_processor: MarkdownProcessor

	var headlines: ArrayMap[String, HeadLine]
end

#
class CardInheritance
	super DocCard

	#
	var ancestors: nullable Array[MEntity]
	#
	var parents: nullable Array[MEntity]
	#
	var children: nullable Array[MEntity]
	#
	var descendants: nullable Array[MEntity]
end


#
class CardList
	super DocCard

	#
	var cards = new Array[DocCard]
end

#
class CardLinearizationList
	super DocCard

	#
	var cards = new Array[CardLinearizationDef]
end

#
class CardLinearizationDef
	super CardCode

	#
	var is_active: Bool = false is optional, writable
end

#
class CardSectionMEntity
	super DocCard

	#
	var mentity: MEntity
end

# Card
class CardCode
	super DocCard

	#
	var mentity: MEntity

	#
	var node: ANode
end

#
class CardGraph
	super DocCard

	#
	var mentity: MEntity

	#
	var graph: InheritanceGraph
end

#
class CardSummary
	super DocCard

	#
	var sections: Array[CardSection]
end

#
class CardHome
	super DocCard

	#
	var content: nullable String
end

#
abstract class CardCatalog
	super DocCard

	#
	var catalog: Catalog
end

#
class CardCatalogStats
	super CardCatalog
end

#
class CardCatalogTags
	super CardCatalog
end

#
class CardCatalogPackage
	super CardCatalog
	super CardMEntity
	autoinit(catalog, mentity)
end

class CardMetadata
	super DocCard

	var metadata: MPackageMetadata
	var stats: MPackageStats
	var deps: Array[MPackage]
	var clients: Array[MPackage]
end
