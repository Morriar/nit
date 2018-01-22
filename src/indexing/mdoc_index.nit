# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# An index for MDoc contents
#
# Indexes MEntities with their comments so they can be retrieved with NLP queries.
module mdoc_index

import commands_docdown
import nlp
import md5

# Index for Nit MDoc contents
class MDocIndex
	super NLPIndex

	redef type DOC: MDocDocument

	# Text renderer used to extract raw text from Markdown format
	private var text_renderer = new RawTextVisitor

	# Add `mentity` MDoc
	fun index_mentity(mentity: MEntity) do
		var terms = vectorize_mentity(mentity)
		var doc = new MDocDocument(mentity, terms)
		index_document(doc, false)
	end

	# Get the NLP vector for a MEntity
	private fun vectorize_mentity(mentity: MEntity): Vector do
		var content = ""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			var ast = mdoc.mdoc_document
			content = text_renderer.render(ast)
		end

		var md5 = content.md5
		if has_cache(md5) then return load_cache(md5)

		var vector = parse_string(content)
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

	# By default we blacklist things like symbols and numbers
	redef var blacklist_pos = [".", ",", "''", "``", ":", "POS", "CD", "-RRB-", "-LRB-", "SYM"]

	# Default stoplist includes most of the symbols not recognized by StanfordNLP
	#
	# FIXME this should be done by the NLP engine.
	redef var stoplist = [
		"=", "==", "&lt;", "&gt;", "*", "/", "\\", "=]", "%", "_", "!=", ">=",
		"<=", "<=>", "+", "-", ">>", "<<"]
end

# A specific document for mentities MDoc
class MDocDocument
	super Document
	autoinit(mentity, terms_count)

	# MEntity related to this document
	var mentity: MEntity

	redef var title = mentity.full_name is lazy

	redef var uri = mentity.location.to_s is lazy
end
