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

module api_model

import api_base

redef class APIRouter
	redef init do
		super
		use("/list", new APIList(config))
		use("/random", new APIRandom(config))
		use("/search", new APISearch(config))

		use("/entity/:id", new APIEntity(config))
		use("/doc/:id", new APIEntityDoc(config))
		use("/code/:id", new APIEntityCode(config))
		use("/lin/:id", new APIEntityLinearization(config))
		use("/defs/:id", new APIEntityDefs(config))
		use("/intros/:id", new APIEntityIntros(config))
		use("/redefs/:id", new APIEntityRedefs(config))
		use("/meta/:id", new APIEntityMetadata(config))
		use("/all/:id", new APIEntityAll(config))

		use("/ancestors/:id", new APIEntityAncestors(config))
		use("/parents/:id", new APIEntityParents(config))
		use("/children/:id", new APIEntityChildren(config))
		use("/descendants/:id", new APIEntityDescendants(config))

		use("/uml/:id", new APIEntityUML(config))
		use("/graph/inheritance/:id", new APIInheritanceGraph(config))

		use("/catalog/packages/", new APICatalogPackages(config))
		use("/catalog/stats", new APICatalogStats(config))
		use("/catalog/tags", new APICatalogTags(config))
		use("/catalog/tag/:tid", new APICatalogTag(config))
		use("/catalog/person/:pid", new APICatalogPerson(config))
		use("/catalog/person/:pid/maintaining", new APICatalogMaintaining(config))
		use("/catalog/person/:pid/contributing", new APICatalogContributing(config))
	end
end

# An API Handler that use a DocCommand to respond
abstract class APICommand
	super APIHandler

	# Return the doc command to apply for self
	fun command: DocCommand is abstract

	redef fun get(req, res) do
		var command = self.command
		var status = command.http_init(req)
		if status isa CmdError then
			res.api_error(status.http_status_code, status.to_s)
		end
		res.api_json(req, command.to_json)
	end
end

# CmdModel

# List all mentities.
#
# Example: `GET /list?kind=modules?limit=10`
class APIList
	super APICommand

	redef fun command do return new CmdModelEntities(config.view)
end

# Return a random list of MEntities.
#
# Example: `GET /random?kind=modules&limit=10`
class APIRandom
	super APICommand

	redef fun command do return new CmdRandomEntities(config.view)
end

# Search mentities from a cmd string.
#
# Example: `GET /search?q=Arr`
class APISearch
	super APIList

	redef fun command do return new CmdCatalogSearch(config.view, config.catalog)
end

# CmdEntity

# Return the JSON representation of a MEntity.
#
# Example: `GET /entity/core::Array`
class APIEntity
	super APICommand

	redef fun command do return new CmdEntity(config.view)
end

# Return the full MDoc of a MEntity.
#
# Example: `GET /entity/core::Array/doc`
class APIEntityDoc
	super APICommand

	redef fun command do return new CmdComment(config.view)
end

# List MEntity ancestors
#
# Example: `GET /ancestors/core::Array`
class APIEntityAncestors
	super APICommand

	redef fun command do return new CmdAncestors(config.view)
end

# List MEntity parents
#
# Example: `GET /parents/core::Array`
class APIEntityParents
	super APICommand

	redef fun command do return new CmdParents(config.view)
end

# List MEntity children
#
# Example: `GET /children/core::Array`
class APIEntityChildren
	super APICommand

	redef fun command do return new CmdChildren(config.view)
end

# List MEntity descendants
#
# Example: `GET /descendants/core::Array`
class APIEntityDescendants
	super APICommand

	redef fun command do return new CmdDescendants(config.view)
end

# Linearize super definitions of a MClassDef or a MPropDef if any.
#
# Example: `GET /linearization/core::Array`
class APIEntityLinearization
	super APICommand

	redef fun command do return new CmdLinearization(config.view)
end

# List definitions of a MEntity.
#
# Example: `GET /defs/core::Array`
class APIEntityDefs
	super APICommand

	redef fun command do return new CmdFeatures(config.view)
end

# List intro definitions of a MEntity.
#
# Example: `GET /intros/core::Array`
class APIEntityIntros
	super APICommand

	redef fun command do return new CmdIntros(config.view)
end

# List redef definitions of a MEntity.
#
# Example: `GET /redefs/core::Array`
class APIEntityRedefs
	super APICommand

	redef fun command do return new CmdRedefs(config.view)
end

# List all definitions accessible from a MEntity.
#
# Example: `GET /all/core::Array`
class APIEntityAll
	super APICommand

	redef fun command do return new CmdAllProps(config.view)
end

# Return the source code of MEntity.
#
# Example: `GET /code/core::Array`
class APIEntityCode
	super APICommand

	redef fun command do return new CmdCode(config.view, config.modelbuilder)
end

# Return the metadata for MEntity is any.
#
# Example: `GET /metadata/core`
class APIEntityMetadata
	super APICommand

	redef fun command do return new CmdMetadata(config.view)
end

# CmdGraph

# Return a UML representation of MEntity.
#
# Example: `GET /uml/core::Array`
class APIEntityUML
	super APICommand

	redef fun command do return new CmdUML(config.view)
end

# Render a hierarchy graph for `mentity` if any.
class APIInheritanceGraph
	super APICommand

	redef fun command do return new CmdInheritanceGraph(config.view)
end

redef class MEntity
	redef fun to_dot_node do
		var node = super
		node["URL"] = web_url
		return node
	end
end

# CmdCatalog

# Get all the packages from the catalog using pagination
#
# `GET /packages?p=1&n=10`: get the list of catalog by page
class APICatalogPackages
	super APICommand

	redef fun command do return new CmdCatalogPackages(config.view, config.catalog)
end

# Get the catalog statistics
#
# `GET /stats`: return the catalog statistics
class APICatalogStats
	super APICommand

	redef fun command do return new CmdCatalogStats(config.view, config.catalog)
end

# Get all the tags from the catalog
#
# `GET /tags`: the list of tags associated with their number of packages
class APICatalogTags
	super APICommand

	redef fun command do return new CmdCatalogTags(config.view, config.catalog)
end

# Get the packages related to a tag
#
# `GET /tag/:tid?p=1&n=10`: return a paginated list of packages
class APICatalogTag
	super APICommand

	redef fun command do return new CmdCatalogTag(config.view, config.catalog)
end

# Get a person existing in the catalog
#
# `GET /person/:pid`: get the person with `pid`
class APICatalogPerson
	super APICommand

	redef fun command do return new CmdCatalogPerson(config.view, config.catalog)
end

# Get the list of mpackages maintained by a person
#
# `GET /person/:pid/maintaining?p=1&n=10`: return a paginated list of packages
class APICatalogMaintaining
	super APICommand

	redef fun command do return new CmdCatalogMaintaining(config.view, config.catalog)
end

# Get the list of mpackages contributed by a person
#
# `GET /person/:pid/contributing?p=1&n=10`: return a paginated list of packages
class APICatalogContributing
	super APICommand

	redef fun command do return new CmdCatalogContributing(config.view, config.catalog)
end
