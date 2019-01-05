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

module nitindex

import frontend
import parse_examples
import realtime
# import vsm

# TODO
# Index code
# Index NLP

# Requests
	# API (filter, order, uniq, cast...)
	# Parse request
	# Modifiers
	# TODO Exemples

# Dimensions
	# package/group/module/class
	# intro/redef
	# is abstract, redef, init, etc, ...
	# tags
	# ini (contrib, license, etc...)
	# maintaining, contributing
	# code
	# path
	# main
	# methods, attrs, const etc...
	# has
	# new
	# return
	# call
	# param
	# sign
	# super/redef
	# code contains...
		# TODO mexample?

# Document
	# String
	# Fichier

# Order/Sort
	# mode
	# keys
	# order
	# levenstein

# Partial match
	# name: core # exact
	# name*: core # prefix match
	# *name: core # suffix match
	# *name*: core # inffix match
	# +name: core # must match
	# -name: core # must not match
	# /name: core # re match
	# ~name: core # lemma match
	# name: !core # boost match?

# Indexing modes
	# Columns, lemma, prefix, suffix ...

# Cache

# Clients
	# uml
	# nitx + srv connexion
	# Commands
	# Metrics
	# Docs

class NitIndex
	var documents = new Array[MDocument]

	# var vectors = new HashMap[Vector, Array[MDocument]]

	var inversed_index = new HashMap[nullable Object, Array[MDocument]]
	# var docs_by_keys = new HashMap[nullable Object, Array[MDocument]]

	fun index(document: MDocument) do
		documents.add document

		# var vector = document.to_vector
		# if not vectors.has_key(vector) then
			# vectors[vector].add new Array[MDocument]
		# end
		# vectors[vector].add document

		for key, values in document do
			for value in values do
				var k = "{key or else "null"}: {value or else "null"}"
				if not inversed_index.has_key(k) then
					inversed_index[k] = new Array[MDocument]
				end
				inversed_index[k].add document
			end
		end
		# for key, value in document do
			# if not docs_by_keys.has_key(key) then
				# docs_by_keys[key].add new Array[MDocument]
			# end
			# docs_by_keys[key].add document
		# end
	end

	fun find(query: Query): MMatches do
		# for field, value in query do
			# if not docs_by_keys.has_key(field) then continue
#
			# for doc in docs_by_keys[field] do
				# if doc.has_key(field) and doc[field] == value then
					# res.add new MMatch(doc)
				# end
			# end
		# end
		var all = new MultiHashMap[nullable Object, nullable Object]
		all.add_all query
		# all.add_all query.must_have
		all.add_all query.has_all_keys
		all.add_all query.has_one_keys

		var matches = new MMatches
		for key, values in all do
			for value in values do
				var q_str = "{key or else "null"}: {value or else "null"}"
				if inversed_index.has_key(q_str) then
					for doc in inversed_index[q_str] do
						matches.add new MMatch(doc)
					end
				end
			end
		end

		for key, value in query.vector_counter do
			if inversed_index.has_key(key) then
				for doc in inversed_index[key] do
					if not matches.has_doc(doc) then matches.add new MMatch(doc)
				end
			end
		end

		var all_matches = new MMatches
		for match in matches do
			var doc = match.document
			for key, values in query.has_all_keys do
				for value in values do
					if not doc.has_key(key) or not doc[key].has(value) then continue label matches
				end
			end
			if not all_matches.has(match) then all_matches.add match
		end label matches

		var one_matches = new MMatches
		for match in all_matches do
			var doc = match.document
			for key, values in query.has_one_keys do
				if not doc.has_key(key) then continue label matches
				var has_one = false
				for value in values do
					if doc[key].has(value) then has_one = true
				end
				if not has_one then continue label matches
			end
			if not one_matches.has(match) then one_matches.add match
		end label matches

		return one_matches
	end
end

class MDocument
	super MultiHashMap[nullable Object, nullable Object]

	var mentity: MEntity

	var comment_vector = new Counter[String]

	# fun to_vector: Vector do
		# var vector = new Vector
		# for k, v in self do
			# var k_str = if k == null then "null" else k.to_s
			# var v_str = if v == null then "null" else v.to_s
			# if v isa Int then
				# vector["{k_str}: {v_str}"].add v.to_f
			# else if v isa Float then
				# vector["{k_str}: {v_str}"].add v
			# else
				# vector["{k_str}: {v_str}"].add 1.0
			# end
		# end
		# return vector
	# end

	fun print: String do
		var buffer = new Buffer
		buffer.append "\{\n"
		for k, v in self do
			buffer.append "\t\"{k or else "null"}\": {v},\n"
		end
		# buffer.append "\t\"comment_vector\": {comment_vector.join(", ", ": ")},\n"
		buffer.append "\}\n"
		return buffer.write_to_string
	end

	redef fun ==(o) do return o isa MDocument and o.mentity == mentity

	redef fun to_s do return "<{mentity.full_name}>"
end

class MMatches
	super Array[MMatch]

	fun limit(count: Int): MMatches do
		var res = new MMatches
		for i in [0..count[ do
			if i >= length then break
			res .add self[i]
		end
		return res
	end

	fun has_doc(doc: MDocument): Bool do
		for m in self do
			if m.document == doc then return true
		end
		return false
	end
end

class MMatch
	var document: MDocument

	redef fun ==(o) do return o isa MMatch and o.document == document

	redef fun to_s do return document.to_s
end

class Query
	super MultiHashMap[nullable Object, nullable Object]

	var has_all_keys = new MultiHashMap[nullable Object, nullable Object]
	var has_one_keys = new MultiHashMap[nullable Object, nullable Object]

	var vector_counter = new Counter[String]

	# fun has(key: nullable Object, value: nullable Object) do
		# has_all_keys[key].add value
	# end

	fun has_all(key: nullable Object, values: Collection[nullable Object]) do
		has_all_keys[key].add_all values
	end

	fun has_one(key: nullable Object, values: Collection[nullable Object]) do
		has_one_keys[key].add_all values
	end

	fun vector(key, value: nullable Object, weight: Int) do
		vector_counter["{key or else "null"}: {value or else "null"}"] = weight
	end

	# var must_have = new MultiHashMap[nullable Object, nullable Object]
end

redef class ToolContext
	var index_phase: Phase = new IndexPhase(self, null)

	var index: NitIndex is noinit
end

class IndexPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		print "Indexing..."
		var timer = new Clock
		var index = new NitIndex
		var done = new HashSet[MEntity]

		for mmodule in mmodules do
			index.index(mmodule.to_document(mainmodule))

			var mpackage = mmodule.mpackage
			if mpackage != null then
				if not done.has(mpackage) then
					index.index(mpackage.to_document(mainmodule))
					done.add mpackage
				end
			end

			# var mgroup = mmodule.mgroup
			# if mgroup != null then
				# if not done.has(mgroup) then
					# index.index(mgroup.to_document(mainmodule))
					# done.add mgroup
				# end
			# end
#
			# for mclassdef in mmodule.mclassdefs do
				# index.index(mclassdef.to_document(mainmodule))
#
				# var mclass = mclassdef.mclass
				# if not done.has(mclass) then
					# index.index(mclass.to_document(mainmodule))
					# done.add mclass
				# end
#
				# for mpropdef in mclassdef.mpropdefs do
					# index.index(mpropdef.to_document(mainmodule))
#
					# var mproperty = mpropdef.mproperty
					# if not done.has(mproperty) then
						# index.index(mproperty.to_document(mainmodule))
						# done.add mproperty
					# end
				# end
			# end
		end

		print "Took {timer.lapse}s"
		toolcontext.index = index
	end
end

redef class MEntity
	fun to_document(mainmodule: MModule): MDocument do
		var doc = new MDocument(self)

		# Base data
		doc["full_name"].add self.full_name
		doc["name"].add self.name
		# doc["c_name"].add self.c_name
		doc["visibility"].add self.visibility.to_s
		doc["is_broken"].add self.is_broken
		doc["is_example"].add self.is_example
		doc["is_fictive"].add self.is_fictive
		doc["is_test"].add self.is_test
		doc["kind"].add "MEntity"

		# Location data
		doc["location"].add self.location.to_s
		var file = self.location.file
		if file != null then
			# TODO location (line, col)
			doc["file"].add file.to_s
		end

		# TODO MDoc data
		var mdoc = self.mdoc_or_fallback
		if mdoc != null then
			# TODO mdoc
			# mdoc_or_fallback
			# lemma
			# comment
			# nlp
			var counter = doc.comment_vector
			for line in mdoc.content do
				for word in line.split("[ .,!?\n\r\t]".to_re) do
					counter.inc(word.to_lower)
				end
			end
			for w, c in counter do
				doc["comment"].add w
				# doc["comment_{w}"].add c
			end
		end

		# TODO code

		return doc
	end
end

redef class MPackage
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MPackage"
		index_ini(doc)
		return doc
	end

	private fun index_value(doc: MDocument, ini: ConfigTree, ini_key, doc_key: String) do
		if not ini.has_key(ini_key) then return
		doc[doc_key].add ini[ini_key]
	end

	private fun index_ini(doc: MDocument) do
		var ini = self.ini
		if ini == null then return

		index_value(doc, ini, "package.license", "ini-license")
		index_value(doc, ini, "package.maintainer", "ini-maintainer")

		index_value(doc, ini, "upstream.apk", "ini-apk")
		index_value(doc, ini, "upstream.browse", "ini-browse")
		index_value(doc, ini, "upstream.tryit", "ini-tryit")
		index_value(doc, ini, "upstream.git", "ini-git")
		index_value(doc, ini, "upstream.homepage", "ini-homepage")
		index_value(doc, ini, "upstream.issues", "ini-issues")

		if ini.has_key("package.more_contributors") then
			# doc["ini-contributors"].add new Array[String]
			var contributors_str = ini["package.more_contributors"]
			if contributors_str != null then
				doc["ini-contributors"].add_all contributors_str.split(",")
			end
		end

		if ini.has_key("package.tags") then
			# doc["ini-tags"].add new Array[String]
			var tags_str = ini["package.tags"]
			if tags_str != null then
				doc["ini-tags"].add_all tags_str.split(",")
			end
		end
	end

	private fun index_hierarchy do
		# TODO
	end

	private fun index_content do
		# TODO
	end
end

redef class MGroup
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MGroup"
		return doc
		# TODO mpackage
		# TODO hierarchy
		# TODO content = mmodules, intro, etc...
	end
end

redef class MModule
	redef fun to_document(mainmodule) do
		var doc = super

		# TODO mpackage
		# TODO mgroup
		# TODO hierarchy
		# TODO content
		doc["kind"].add "MModule"

		# for parent in collect_parents(mainmodule) do
		#	document.fields["parent: {parent.full_name}"].add 1.0
		# end
		# for parent in collect_ancestors(mainmodule) do
		#	document.fields["ancestor: {parent.full_name}"].add 1.0
		# end
		# for parent in collect_descendants(mainmodule) do
		#	document.fields["descendant: {parent.full_name}"].add 1.0
		# end
		# for parent in collect_children(mainmodule) do
		#	document.fields["child: {parent.full_name}"].add 1.0
		# end

		return doc
	end
end

redef class MClass
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MClass"
		return doc
		# TODO interface
		# TODO intro
		# TODO methods, attrs, const etc...
		# TODO hierarchy
		# TODO content = mclassdefs, intro, etc...
		# TODO is abstract, redef, init, etc, ...
		# TODO sign
	end
end

redef class MClassDef
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MClassDef"
		return doc
		# TODO intro/redef
		# TODO methods, attrs, const etc...
		# TODO hierarchy
		# TODO content = mpropdefs, intro, etc...
		# TODO is abstract, redef, init, etc, ...
		# TODO sign
	end
end

redef class MProperty
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MProperty"
		return doc
		# TODO kind
		# TODO intro
		# TODO method, attrs, const etc...
		# TODO hierarchy
		# TODO content = mpropdefs, intro, etc...
		# TODO is abstract, redef, init, etc, ...
		# TODO sign
	end
end

redef class MPropDef
	redef fun to_document(mainmodule) do
		var doc = super
		doc["kind"].add "MPropDef"
		return doc
		# TODO kind
		# TODO intro/redef
		# TODO method, attrs, const etc...
		# TODO hierarchy/lin
		# TODO content = mpropdefs, intro, etc...
		# TODO is abstract, redef, init, etc, ...
		# TODO sign
	end
end

# TODO
	# main
	# new
	# return
	# call
	# param
	# sign
	# super/redef
	# code contains...
	# mexample?

# build toolcontext
var toolcontext = new ToolContext

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

# TODO

var index = toolcontext.index

# var query = new Query
# query["full_name"].add "core::core"
# query["kind"].add "MModule"
# query["comment: collection"].add 1.0
# query["ancestor"].add "core::kernel"

# print "Results for `{query}`:"
# var res = toolcontext.index.find(query)
# if res.is_empty then
	# print "No result..."
# else
	# for r in res do print r
# end

print "Querying..."
var clock = new Clock

var q = new Query
q.has_all("kind", ["MPackage"])

var matches = index.find(q)
print "MPackages: {matches.length}"
# print matches
# for m in index.find(q) do
	# print m.document.join(", ", ": ")
	# print m.document.mentity.name
# end

# var v = new Vector
# v["vsm"] = 1.0
# v["object"] = 1.0

q = new Query
# q["kind"].add "MPackage"
# q.has_all("kind", ["MPackage"])
# q.has_one("name", ["popcorn", "vsm"])
# q["ini-tags"].add "vsm"
# q["ini-tags"].add "web"
# q["comment"] = ["vsm", "object", "get"]
q.vector("comment", "object", 1)
# q["comment"].add "object"
# q["comment"].add "get"
# q["full_name"] = "core"
# q["kind"] = "MPackage"
# q["is_test"] = true

matches = index.find(q)
matches = matches.limit(3)
print "Matches: {index.find(q).length}"
for m in matches do
	print m.document.print
end
# print matches.first.document.print

# q = new Query
# q["kind"] = "MGroup"
# print "MGroups: {index.find(q).length}"

# q = new Query
# q["kind"] = "MModule"
# print "MModule: {index.find(q).length}"

# q = new Query
# q["kind"] = "MClass"
# print "MClasses: {index.find(q).length}"

# q = new Query
# q["kind"]=  "MClassDef"
# print "MClassDef: {index.find(q).length}"

# q = new Query
# q["kind"] = "MProperty"
# print "MProperties: {index.find(q).length}"

# q = new Query
# q["kind"] = "MPropDef"
# print "MPropDefs: {index.find(q).length}"

# q = new Query
# q["name"] = "NitIndex"
# print "Matches: {index.find(q).length}"
# print "Matches: {index.find(q)}"


print "\nTook {clock.lapse}s"
# Indexing: tfidf
# Querying:
	# cosine sim
	# limit
	# order
# Playing with results
	# FILTERS
	# pages
	# casts
	# etc...
