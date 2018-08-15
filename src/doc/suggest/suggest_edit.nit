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

module suggest_edit

import suggest_align

class MDocEditor
	var titles = new MdTitleEditor
	# var links = new MdLinkInsert
	# var docs = new MdDocInsert
	# var lists = new MdListInsert
	# var examples = new MdExampleInsert
	# var uml = new MdUmlInsert

	fun edit_document(document: MdDocument) do
		titles.enter_visit(document)
	end
end

abstract class MdEditor
	super MdVisitor

	redef fun visit(node) do
		if node isa MdBlock then
			visit_block(node)
		else
			node.visit_all(self)
		end
	end

	fun visit_block(block: MdBlock) do
		block.visit_all(self)
	end
end

# Scaffolding

class MdTitleEditor
	super MdEditor

	redef fun visit_block(block) do
		if not block isa MdHeading or not block.md_themes_names.has("title") then
			super
			return
		end
		# TODO

		# Has span code already?
			# return
		# Has name already?
			# add span
		# Has description?
			# return
		# Add description

		print block
		super
	end
end

# Intro
# Installation
# Usage
# API
# Issues
# Contributing
# Authors
# LIcense

# TODO
	# Get position dans automate
		# Noeud courrant

# Free Doc

# TODO trouver best spot
	# Ref in block / section / theme

class MdLinkInsert
	super MdEditor

	var doc_url: String

	redef fun visit(node) do
		# TODO

		# Collect mentities
			# in package
			# out package
		# Pour chaque mentity
			# Make link
			# Trouver la première ocorrurence utilisable
			# Ajouter lien
		node.visit_all(self)
	end
end

class MdDocInsert
	super MdEditor

	var doc_url: String

	redef fun visit_block(block) do
		# TODO

		# Collect mentities
			# in package
			# out package?
		# Pour chaque mentity
			# Make card
			# Trouver la première ocorrurence utilisable
			# Ajouter doc
		super
	end
end

class MdExampleReplace
	super MdEditor

	redef fun visit_block(block) do
		# TODO

		# Example has example_refs
		# Replace

		super
	end
end


class MdExampleInsert
	super MdEditor

	redef fun visit_block(block) do
		# TODO

		# Collect examples
		# Collect mentities from examples + best entity for insertiotn
			# in package
			# out package?
			# Make card
			# Trouver la première ocorrurence utilisable
			# Ajouter doc
		super
	end
end


class MdListInsert
	super MdEditor

	var doc_url: String

	redef fun visit_block(block) do
		# TODO

		# Collect packages
		# Collect mgroups
		# Collect modules
		# Collect classes
		# Collect mprops

		# Parents / Children
		# Members


		# Blocks / Sections avec le plus de refs?
		# Premiere occurence
		# Insert

		super
	end
end

class MdUmlInsert
	super MdEditor

	var doc_url: String

	redef fun visit_block(block) do
		# TODO

		# Collect packages
		# Collect mgroups
		# Collect modules
		# Collect classes

		# Parents / Children
		# Members

		# Blocks / Sections avec le plus de refs?
		# Premiere occurence
		# Insert
		super
	end
end
