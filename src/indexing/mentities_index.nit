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

import vsm
import nlp
import model_collect
import doc_down

class MEntityIndex
	super VSMIndex

	redef type DOC: MEntityDocument

	var nlp_processor: NLPProcessor

	fun index_model(model: Model, filter: ModelFilter) do
		for mentity in model.collect_mentities(filter) do
			index_mentity(mentity)
		end
		update_index
	end

	fun index_mentity(mentity: MEntity):MEntityDocument do
		var document = new MEntityDocument(mentity)
		document.build_vector(self)
		index_document(document, false)
		return document
	end

	redef fun match_vector(query) do
		var documents = new HashSet[DOC]
		for term, count in query do
			if inversed_index.has_key(term) then
				documents.add_all inversed_index[term]
			end
		end
		var documents2 = new HashSet[DOC]
		for doc in documents do
			for term, count in query do
				if not term isa String then continue
				if not term.chars.first == '!' then continue
				if doc.terms_frequency.has_key(term.substring(1, term.length)) then continue label docs
			end
			documents2.add doc
		end label docs
		var matches = new Array[vsm::IndexMatch[DOC]]
		for doc in documents2 do
			var sim = query.cosine_similarity(doc.tfidf)
			if sim == 0.0 then continue
			matches.add new vsm::IndexMatch[DOC](doc, sim)
		end
		sorter.sort(matches)
		return matches
	end

	fun parse_vector(string: String): Vector do
		var md5 = string.md5
		if has_cache(md5) then return load_cache(md5)
		var vector = new Vector
		if string.trim.is_empty then return vector
		var doc = nlp_processor.process(string)
		for sentence in doc.sentences do
			for token in sentence.tokens do
				if not accept_token(token) then continue
				var lemma = token.lemma
				if not vector.has_key(lemma) then
					vector[lemma] = 1.0
				else
					vector[lemma] += 1.0
				end
			end
		end
		save_cache(md5, vector)
		return vector
	end

	init do cache_dir.mkdir

	# Cache directory
	#
	# Used so we don't need to call the NLP server for already processed vectors.
	var cache_dir: String = ".nlp" is optional

	# Is there a cached vector for the `md5` representation of a string?
	fun has_cache(md5: String): Bool do
		return (cache_dir / md5).file_exists
	end

	# Cache the `vector` associated with the `md5` representation of a string
	fun save_cache(md5: String, vector: Vector) do
		vector.join(", ", ": ").write_to_file(cache_dir / md5)
	end

	# Load the corresponding vector from a cached `md5` representation of a string
	fun load_cache(md5: String): Vector do
		var v = new Vector
		var content = (cache_dir / md5).to_path.read_all
		if content.is_empty then return v
		var parts = content.split(", ")
		for part in parts do
			var ps = part.split(": ")
			v[ps.first.trim] = ps.last.trim.to_f
		end
		return v
	end

	# Is `token` accepted by this index?
	#
	# See `whitelist_pos` and `blacklist_pos`.
	fun accept_token(token: NLPToken): Bool do
		var pos = token.pos
		if whitelist_pos.not_empty and not whitelist_pos.has(pos) then return false
		if blacklist_pos.has(pos) then return false
		if stoplist.has(token.lemma) then return false
		return true
	end

	# Part-Of-Speech whitelist
	#
	# If not empty, the index accept only the POS tags contained in this list.
	var whitelist_pos = new Array[String] is writable

	# Part-Of-Speech blacklist
	#
	# Reject POS tags contained in this list.
	var blacklist_pos = [
		".", ",", "''", "``", ":", "-RRB-", "-LRB-",
		"CC", "CD", "DT", "IN", "LS", "POS", "PRP$", "SYM", "TO", "WDT"
	]

	# List of lemmas that must not be indexed
	var stoplist = [
		"=", "==", "&lt;", "&gt;", "*", "/", "\\", "=]", "%", "_", "!=", ">=",
		"<=", "<=>", "+", "-", ">>", "<<"]
end

class MEntityDocument
	super Document
	autoinit(mentity)

	var mentity: MEntity

	redef var terms_count = new Vector

	redef var title is lazy do return mentity.full_name
	redef var uri is lazy do return mentity.full_name

	fun build_vector(index: MEntityIndex) do
		mentity.build_base_vector(terms_count)
		mentity.build_sign_vector(terms_count)
		mentity.build_nlp_vector(terms_count, index)
	end

	# TODO supers
	# TODO children
	# TODO NLP
	# TODO code
	# TODO examples
end

redef class MEntity
	private fun build_base_vector(vector: Vector) do
		vector.inc "full_name: {full_name}"
		vector.inc "name: {name}"
		vector.inc "kind: {class_name}"
		vector.inc "visibility: {visibility.to_s}"

		var mdoc = mdoc_or_fallback
		if mdoc == null then return
		var text_renderer = new RawTextVisitor
		var ast = mdoc.mdoc_document
		var text = text_renderer.render(ast).to_lower

		for word in text.split("[ \n]+".to_re) do
			vector.inc "comment: {word}"
		end
	end

	private fun build_sign_vector(vector: Vector) do
		parse_name(vector, "sign", name)
	end

	private fun build_nlp_vector(vector: Vector, index: MEntityIndex) do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return
		var text_renderer = new RawTextVisitor
		var ast = mdoc.mdoc_document
		var text = text_renderer.render(ast).to_lower
		var nlp_vector = index.parse_vector(text)
		for k, v in nlp_vector do
			vector["nlp: {k or else "null"}"] += v
		end
	end

	private fun parse_type(vector: Vector, prefix: String, mtype: MType) do
		if mtype isa MNullableType then
			vector.inc "{prefix}: nullable"
			mtype = mtype.mtype
		end
		parse_name(vector, prefix, mtype.name)
	end

	private fun parse_name(vector: Vector, prefix, name: String) do
		vector.inc "{prefix}: {name}"
		var names = new Array[String]
		var buffer = new Buffer
		for c in name.chars do
			if c == '_' or not c.is_letter then
				if not buffer.is_empty then
					names.add buffer.to_s
					buffer = new Buffer
				end
				continue
			else if c.is_upper then
				if not buffer.is_empty and not buffer.last.is_upper then
					names.add buffer.to_s
					buffer = new Buffer
				end
			end
			buffer.add c
		end
		if not buffer.is_empty then names.add buffer.to_s

		for sname in names do
			if sname.is_empty then continue
			if sname == name then continue
			vector["{prefix}: {sname}"] += 1.0
		end
		# TODO nlp names
	end
end

redef class MPackage
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {full_name}"
	end

	redef fun build_sign_vector(vector) do
		super
		vector.inc "sign: package"
	end
end

redef class MGroup
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {mpackage.full_name}"
		vector.inc "in: {full_name}"
	end

	redef fun build_sign_vector(vector) do
		super
		vector.inc "sign: group"
	end
end

redef class MModule
	redef fun build_base_vector(vector) do
		super
		var mgroup = self.mgroup
		if mgroup != null then
			vector.inc "in: {mgroup.mpackage.full_name}"
			vector.inc "in: {mgroup.full_name}"
		end
		vector.inc "in: {full_name}"
	end

	redef fun build_sign_vector(vector) do
		super
		vector.inc "sign: module"
	end
end

redef class MClass
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {intro_mmodule.full_name}"
		var mgroup = intro_mmodule.mgroup
		if mgroup != null then
			vector.inc "in: {mgroup.mpackage.full_name}"
			vector.inc "in: {mgroup.full_name}"
		end
		vector.inc "in: {full_name}"
	end

	redef fun build_sign_vector(vector) do
		super
		vector.inc "sign: class"
		for mparam in mparameters do
			vector.inc "sign: {mparam.name}"
			# vector.inc "sign: {mparam.lookup_bound(intro_mmodule, mclass_type).name}"
		end
		# TODO param names
	end
end

redef class MClassDef
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {mmodule.full_name}"
		var mgroup = mmodule.mgroup
		if mgroup != null then
			vector.inc "in: {mgroup.mpackage.full_name}"
			vector.inc "in: {mgroup.full_name}"
		end
		vector.inc "in: {mclass.full_name}"
		vector.inc "in: {full_name}"

		vector.inc "is_intro: {is_intro}"
	end

	redef fun build_sign_vector(vector) do
		super
		vector.inc "sign: class"
		if not is_intro then
			vector.inc "sign: redef"
		end
		# for mparam in mparameters do
			# vector.inc "sign: {mparam.name}"
			# vector.inc "sign: {mparam.lookup_bound(intro_mmodule, mclass_type).name}"
		# end
		# TODO params names
	end
end

redef class MProperty
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {intro_mclassdef.mmodule.full_name}"
		var mgroup = intro_mclassdef.mmodule.mgroup
		if mgroup != null then
			vector.inc "in: {mgroup.mpackage.full_name}"
			vector.inc "in: {mgroup.full_name}"
		end
		vector.inc "in: {intro_mclassdef.mclass.full_name}"
		vector.inc "in: {full_name}"

		vector.inc "kind: MProperty"
		if self isa MMethod then
			vector.inc "getter: {is_getter}"
			vector.inc "setter: {is_setter}"
		end
	end

	redef fun build_sign_vector(vector) do
		super
		# TODO params names
		if self isa MMethod then
			vector.inc "sign: fun"
			vector.inc "sign: method"
			var msignature = self.intro.as(MMethodDef).msignature
			if msignature != null then
				for param in msignature.mparameters do
					parse_name(vector, "sign", param.name)
					parse_type(vector, "sign", param.mtype)
				end
				var mreturn = msignature.return_mtype
				if mreturn != null then
					parse_type(vector, "sign", mreturn)
				end
			end
		else if self isa MAttribute then
			vector.inc "sign: var"
			vector.inc "sign: attribute"
			var mtype = self.intro.as(MAttributeDef).static_mtype
			if mtype != null then
				parse_type(vector, "sign", mtype)
			end
		else if self isa MVirtualTypeProp then
			vector.inc "sign: type"
			var mtype = self.intro.as(MVirtualTypeDef).bound
			if mtype != null then
				parse_type(vector, "sign", mtype)
			end
		end
	end
end

redef class MPropDef
	redef fun build_base_vector(vector) do
		super
		vector.inc "in: {mclassdef.mmodule.full_name}"
		var mgroup = mclassdef.mmodule.mgroup
		if mgroup != null then
			vector.inc "in: {mgroup.mpackage.full_name}"
			vector.inc "in: {mgroup.full_name}"
		end
		vector.inc "in: {mclassdef.mclass.full_name}"
		vector.inc "in: {mclassdef.full_name}"
		vector.inc "in: {full_name}"

		vector.inc "kind: MPropDef"
		vector.inc "is_intro: {is_intro}"
		if self isa MMethodDef then
			vector.inc "getter: {mproperty.as(MMethod).is_getter}"
			vector.inc "setter: {mproperty.as(MMethod).is_setter}"
		end
	end

	redef fun build_sign_vector(vector) do
		super
		if not is_intro then
			vector.inc "sign: redef"
		end
		# TODO params names
		if self isa MMethodDef then
			vector.inc "sign: fun"
			vector.inc "sign: method"

			var msignature = self.msignature
			if msignature != null then
				for param in msignature.mparameters do
					parse_name(vector, "sign", param.name)
					parse_type(vector, "sign", param.mtype)
				end
				var mreturn = msignature.return_mtype
				if mreturn != null then
					parse_type(vector, "sign", mreturn)
				end
			end
		else if self isa MAttributeDef then
			vector.inc "sign: var"
			vector.inc "sign: attribute"
			var mtype = self.static_mtype
			if mtype != null then
				parse_type(vector, "sign", mtype)
			end
		else if self isa MVirtualTypeDef then
			vector.inc "sign: type"
			var mtype = self.bound
			if mtype != null then
				parse_type(vector, "sign", mtype)
			end
		end
	end
end
