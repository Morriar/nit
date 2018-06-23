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

module bm25

import vsm

redef class VSMIndex

	redef fun match_vector(query) do
		var documents = new HashSet[DOC]
		for term, count in query do
			if inversed_index.has_key(term) then
				documents.add_all inversed_index[term]
			end
		end
		var matches = new Array[IndexMatch[DOC]]
		for doc in documents do
			var sim = bm25(query, doc)
			if sim == 0.0 then continue
			matches.add new IndexMatch[DOC](doc, sim)
		end
		sorter.sort(matches)
		return matches
	end

	private fun bm25(query: Vector, document: Document): Float do
		var bm25 = 0.0
		for term, count in query do
			bm25 += bm25_term(term, document)
		end
		return bm25
	end

	private fun bm25_term(term: nullable Object, document: Document): Float do
		var idf = inverse_doc_frequency[term]
		var f = document.terms_frequency[term]
		var bm25 = idf * ((f * (k1 + 1.0)) / (f + k1 * (1.0 - b + b * (documents.length.to_f / average_document_length))))
		return bm25
	end

	var average_document_length = 0.0
	var k1 = 1.2
	var b = 0.75


	redef fun update_index do
		var length = 0.0
		for doc in documents do
			for term, ccount in doc.terms_count do
				inverse_doc_frequency[term] = (
						(documents.length.to_f - terms_doc_count[term] + 0.5) /
							(terms_doc_count[term] + 0.5)
						).log
				length += ccount
			end
		end
		average_document_length = length / documents.length.to_f
		for doc in documents do
			for term, freq in doc.terms_frequency do
				doc.tfidf[term] = freq * inverse_doc_frequency[term]
			end
		end
	end
end
