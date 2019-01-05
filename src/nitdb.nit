import frontend
import model_collect
import vsm

class MDb
	var entries = new HashSet[MEntry]

	fun add(entry: MEntry) do
		entries.add entry
	end

	fun find(ops: Array[MOp]): MResults do
		var res = new MResults
		for entry in entries do
			var keep = false
			for op in ops do
				if not op.match(entry) then continue
				keep = true
				break
			end
			if keep then res.add new MResult(entry)
		end
		return res
	end
end

class MEntry
	super HashMap[Object, nullable Object]

	var mentity: MEntity

	redef fun [](key) do
		if not has_key(key) then return null
		return super
	end

	redef fun to_s do return "MEntry<{mentity.full_name}>"
end

class MResults
	super Array[MResult]

	init from(results: Array[MResult]) do
		add_all results
	end

	fun sort: MResults do
		return new MResults
	end

	fun filter: MResults do
		return new MResults
	end

	fun limit(count: Int): MResults do
		return new MResults.from(sub(0, 2))
	end
end

class MResult
	var entry: MEntry

	redef fun to_s do return entry.to_s
end

abstract class MOp
	var key: String

	fun match(entry: MEntry): Bool is abstract
end

class OpEq
	super MOp

	var value: Comparable

	redef fun match(entry) do return entry[key] == value
end

class OpNot
	super MOp
	autoinit op

	var op: MOp

	redef fun match(entry) do return not op.match(entry)
end

class OpAnd
	super MOp
	autoinit op1, op2

	var op1: MOp
	var op2: MOp

	redef fun match(entry) do return op1.match(entry) and op2.match(entry)
end

class OpIn
	super MOp

	var values: Array[Object]

	redef fun match(entry) do return values.has(entry[key])
end

class OpBool
	super MOp

	var value: Bool

	redef fun match(entry) do return entry[key] == value
end

class OpPrefix
	super MOp

	var prefix: String

	redef fun match(entry) do
		var value = entry[key]
		if not value isa String then return false
		return value.has_prefix(prefix)
	end
end

class OpRe
	super MOp

	var re: Regex

	redef fun match(entry) do
		var value = entry[key]
		if not value isa String then return false
		return value.has(re)
	end
end

class OpHas
	super MOp

	var value: nullable Object

	redef fun match(entry) do
		var array = entry[key]
		if not array isa Collection[nullable Object] then return false
		return array.has(value)
	end
end

class OpHasAny
	super MOp

	var values: Array[nullable Object]

	redef fun match(entry) do
		var value = entry[key]
		if not value isa Collection[nullable Object] then return false
		for v in value do
			if values.has(v) then return true
		end
		return false
	end
end

class OpVector
	super MOp

	var vector: Vector
	var threshold = 0.0 is optional

	redef fun match(entry) do
		var vector = entry[key]
		if not vector isa Vector then return false
		if self.vector.cosine_similarity(vector) > threshold then
			print entry.mentity
			print self.vector
			print vector
			print self.vector.cosine_similarity(vector)
			print self.vector.cosine_similarity(vector) > threshold
			print "------"
		end
		return self.vector.cosine_similarity(vector) > threshold
	end
end

redef class ToolContext
	var index_phase: Phase = new IndexPhase(self, null)

	var index: MDb is noinit
end

class IndexPhase
	super Phase

	redef fun process_mainmodule(mainmodule, mmodules) do
		print "Indexing..."
		var index = new MDb
		var done = new HashSet[MEntity]

		for mmodule in mmodules do
			index.add(mmodule.to_doc(mainmodule))

			var mpackage = mmodule.mpackage
			if mpackage != null then
				if not done.has(mpackage) then
					index.add(mpackage.to_doc(mainmodule))
					done.add mpackage
				end
			end

			var mgroup = mmodule.mgroup
			if mgroup != null then
				if not done.has(mgroup) then
					index.add(mgroup.to_doc(mainmodule))
					done.add mgroup
				end
			end

			for mclassdef in mmodule.mclassdefs do
				index.add(mclassdef.to_doc(mainmodule))

				var mclass = mclassdef.mclass
				if not done.has(mclass) then
					index.add(mclass.to_doc(mainmodule))
					done.add mclass
				end

				for mpropdef in mclassdef.mpropdefs do
					index.add(mpropdef.to_doc(mainmodule))

					var mproperty = mpropdef.mproperty
					if not done.has(mproperty) then
						index.add(mproperty.to_doc(mainmodule))
						done.add mproperty
					end
				end
			end
		end

		toolcontext.index = index
	end
end

redef class MEntity
	fun to_doc(mainmodule: MModule): MEntry do
		var doc = new MEntry(self)

		# Base data
		doc["full-name"] = self.full_name
		doc["name"] = self.name
		# doc["c_name"] = self.c_name
		doc["visibility"] = self.visibility.to_s
		doc["is-broken"] = self.is_broken
		# doc["is_example"] = self.is_example
		doc["is-fictive"] = self.is_fictive
		doc["is-test"] = self.is_test
		doc["kind"] = self.class_name

		# Location data
		doc["location"] = self.location.to_s
		var file = self.location.file
		if file != null then
			# TODO location (line, col)
			doc["file"] = file.to_s
		end

		index_mdoc(doc)
		index_hierarchy(doc, mainmodule)
		# TODO code

		return doc
	end

	protected fun index_mdoc(doc: MEntry) do
		doc["has-mdoc"] = self.mdoc != null

		var mdoc = self.mdoc_or_fallback
		if mdoc == null then return
		doc["mdoc"] = mdoc.content.join("\n").to_vector
		# TODO lemma
	end

	protected fun index_hierarchy(doc: MEntry, mainmodule: MModule) do
		doc["ancestors"] = mentities_to_fullnames(collect_ancestors(mainmodule))
		doc["parents"] = mentities_to_fullnames(collect_parents(mainmodule))
		doc["children"] = mentities_to_fullnames(collect_children(mainmodule))
		doc["descendants"] = mentities_to_fullnames(collect_descendants(mainmodule))
	end

	private fun mentities_to_fullnames(mentities: Collection[MEntity]): Array[String] do
		var res = new Array[String]
		for mentity in mentities do res.add mentity.full_name
		return res
	end
end

redef class MPackage
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["package"]
		index_ini(doc)
		return doc
	end

	private fun index_value(doc: MEntry, ini: ConfigTree, ini_key, doc_key: String) do
		if not ini.has_key(ini_key) then return
		doc[doc_key] = ini[ini_key]
	end

	private fun index_values(doc: MEntry, ini: ConfigTree, ini_key, doc_key: String) do
		var value = ini[ini_key]
		if value == null then return
		doc[doc_key] = value.split(",")
	end

	private fun index_ini(doc: MEntry) do
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
		index_values(doc, ini, "package.more_contributors", "ini-contributors")
		index_values(doc, ini, "package.tags", "ini-tags")
	end
end

redef class MGroup
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["group"]
		doc["mpackage"] = mpackage.full_name
		return doc
		# TODO mmodules, intro, etc...
	end
end

redef class MModule
	redef fun to_doc(mmodule) do
		var doc = super
		doc["kind"] = ["module"]

		var mpackage = self.mpackage
		if mpackage != null then
			doc["mpackage"] = mpackage.full_name
		end
		var mgroup = self.mgroup
		if mgroup  != null then
			doc["mgroup"] = mgroup.full_name
		end
		# TODO clsses, props
		return doc
	end
end

redef class MClass
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["class"]
		doc["intro"] = intro.full_name
		doc["is-abstract"] = is_abstract
		doc["is-interface"] = is_interface
		return doc
		# TODO inits, mmethods, attrs
		# TODO mclassdefs
		# TODO sign
	end
end

redef class MClassDef
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["classdef"]
		doc["class"] = mclass.full_name
		doc["is-intro"] = is_intro
		doc["is-abstract"] = mclass.is_abstract
		doc["is-interface"] = mclass.is_interface
		return doc
		# TODO inits, methods, attrs, types etc...
		# TODO mpropdefs, intros
		# TODO sign
	end
end

redef class MProperty
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property"]
		doc["intro"] = intro.full_name
		return doc
		# TODO redefs
	end
end

redef class MVirtualTypeDef
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property", "vt"]
		return doc
		# TODO sign
	end
end

redef class MMethod
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property", "method"]
		doc["is-init"] =  is_init

		var all_abstract = true
		for mpropdef in mpropdefs do
			if not mpropdef.is_abstract then all_abstract = false
		end
		doc["is-abstract"] = all_abstract
		return doc
		# TODO sign
	end
end

redef class MAttribute
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property", "attribute"]
		return doc
		# TODO sign
	end
end

redef class MPropDef
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["propdef"]
		doc["property"] = mproperty.full_name
		doc["is-intro"] = is_intro
		return doc
		# TODO supers
	end
end

redef class MVirtualTypeProp
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["propdef", "vtdef"]
		return doc
		# TODO sign
	end
end

redef class MMethodDef
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property", "methoddef"]
		doc["is-abstract"] = is_abstract
		doc["is-init"] =  mproperty.is_init
		return doc
		# TODO sign
	end
end

redef class MAttributeDef
	redef fun to_doc(mainmodule) do
		var doc = super
		doc["kind"] = ["property", "attributedef"]
		return doc
		# TODO sign
	end
end

redef class String
	fun to_vector: Vector do
		var vector = new Vector
		for word in split("[ .,!?\n\r\t]".to_re) do
			if word.is_empty then continue
			vector.inc(word)
			var lower = word.to_lower
			if word != lower then
				vector.inc(lower)
			end
		end
		return vector
	end
end

fun pretty(results: MResults) do
	for result in results do
		var doc = ""
		var mdoc = result.entry.mentity.mdoc
		if mdoc != null then
			# doc = ": {mdoc.content.join(" ")}"
		end
		print " * {result}{doc}"
	end
end

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

var index = toolcontext.index

print "r0: empty"
var r0 = index.find(new Array[MOp])
assert r0.is_empty

print "r1: full-name"
var r1 = index.find([new OpEq("full-name", "core::kernel")])
pretty r1
assert r1.length == 1
assert r1.first.entry.mentity.full_name == "core::kernel"

print "r2: name"
var r2 = index.find([new OpEq("name", "kernel")])
pretty r2
assert r2.length == 1
assert r2.first.entry.mentity.name == "kernel"

print "r3: kind in"
var r4 = index.find([new OpHasAny("kind", ["package", "module"])]).limit(2)
pretty r4
assert r4.length == 2

print "r4: name in"
var r3 = index.find([new OpIn("name", ["kernel", "collection"])])
pretty r3
assert r3.length == 3

print "r5: name re"
var r5 = index.find([new OpRe("name", "(ker|collectio)n(el)?".to_re)])
pretty r5
assert r5.length == 7

print "r6: tags"
var r6 = index.find([
	new OpHas("kind", "package"),
	new OpHas("ini-tags", "lib")
])
pretty r6
assert r6.length == 1

print "r7: name prefix"
var r7 = index.find([new OpPrefix("name", "ker")])
pretty r7
assert r7.length == 1

print "r8: is-test"
var r8 = index.find([new OpBool("is-test", true)])
pretty r8
assert r8.length == 5

print "r9: parents"
var r9 = index.find([new OpHas("parents", "core::Collection")])
pretty r9
assert r9.length == 4

print "r10: ancestors without parents"
var r10 = index.find([
	new OpAnd(
		new OpHas("descendants", "core::Array"),
		new OpNot(new OpHas("children", "core::Array"))
	)
: MOp])
pretty r10
assert r10.length == 7

print "r10: mdoc"
var r11 = index.find([
	new OpAnd(
		new OpBool("has-mdoc", true),
		new OpVector("mdoc", "language, top-level".to_vector)
	)
: MOp])
pretty r11
assert r11.length == 2


# TODO content: All/Intro/Redef
# TODO Groups and modules / Content
# TODO Redef from properties

# TODO Code search

# TODO Querying
# var r1 = index.find([
	# location = new OpLoc(10, 15),
	# code = new OpCodeReturn("Integer"),
	# dit = new OpGt(2),
	# score = new OpBetween(5.0, 12.5),
	# sig = new OpSig(params = ["a", "b"], returns = "String"),
	# visibility = new OpVisGt("protected"),

# TODO Order/Sort
	# mode
	# keys
	# order
	# score
	# levenstein
	# lin

# TODO Partial match
	# name: core # exact
	# name*: core # prefix match
	# *name: core # suffix match
	# *name*: core # inffix match
	# +name: core # must match
	# -name: core # must not match
	# /name: core # re match
	# ~name: core # lemma match
	# name: !core # boost match?

# TODO Indexing/Caching
# db.unique_indexes("full_name")
# db.indexes("name")
# db.freeze



# TODO Where am i?
 # Must have vs Optional
 # Becnh the results
 # Index columns: key: value
 # Search by index, then normal
 # Search in subqueries (unfrozen mode)
