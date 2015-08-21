# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>.
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

# Compute documentation related metrics about the python library.
module metrics

import parse_py
import parse_rst
import csv
import template

redef class DocFile

	# LOC: lines of code
	var loc: Int is lazy do return lines.length

	# LOD: lines of documentation
	fun lod: Int is abstract
end

redef class RstFile
	# In a RST file every line is a documentation line
	redef fun lod do return loc

	# NBCC: Number of documented classes
	fun nbcc: Int do return documented_classes.length

	# NBCM: Number of commented methods
	fun nbcm: Int do return documented_methods.length

	# NBCF: Number of documented functions
	fun nbcf: Int do return documented_functions.length

	# Pretty print `self` metrics
	fun pretty_print_metrics do
		print "Metrics for {module_name}.rst:"
		print " * LOD:  {lod}"
		print " * NBCC: {nbcc}"
		print " * NBCM: {nbcm}"
		print " * NBCF: {nbcf}"
	end

	# Get the csv data for a document returned by `to_csv`.
	fun csv_record(csv: CsvDocument) do
		csv.add_record(module_name, lod, nbcc, nbcm, nbcf)
	end
end

redef class PyFile
	redef fun lod do
		parse
		var sum = 0
		for c in py_module.as(not null).classes do
			if c.has_doc then sum += c.doc.as(not null).length
			for m in c.methods do
				if m.has_doc then sum += m.doc.as(not null).length
			end
		end
		for f in py_module.as(not null).functions do
			if f.has_doc then
				sum += f.doc.as(not null).length
			end
		end
		return sum
	end

	# NBC: Number of classes
	fun nbc: Int do
		parse
		return py_module.as(not null).classes.length
	end

	# NBCC: Number of documented classes
	fun nbcc: Int do
		parse
		var sum = 0
		for c in py_module.as(not null).classes do if c.has_doc then sum += 1
		return sum
	end

	# NBM: Number of methods
	fun nbm: Int do
		parse
		var sum = 0
		for c in py_module.as(not null).classes do sum += c.methods.length
		return sum
	end

	# NBCM: Number of commented methods
	fun nbcm: Int do
		parse
		var sum = 0
		for c in py_module.as(not null).classes do
			for m in c.methods do if m.has_doc then sum += 1
		end
		return sum
	end

	# NBF: Number of functions (toplevel)
	fun nbf: Int do
		parse
		return py_module.as(not null).functions.length
	end

	# NBCF: Number of documented functions
	fun nbcf: Int do
		parse
		var sum = 0
		for f in py_module.as(not null).functions do if f.has_doc then sum += 1
		return sum
	end

	# Pretty print `self` metrics
	fun pretty_print_metrics do
		print "Metrics for {module_name}.py:"
		print " * LOC:  {loc}"
		print " * LOD:  {lod} ({if loc != 0 then lod * 100 / loc else 0}%)"
		print " * NBC:  {nbc}"
		print " * NBCC: {nbcc} ({if nbc != 0 then nbcc * 100 / nbc else 0}%)"
		print " * NBM:  {nbm}"
		print " * NBCM: {nbcm} ({if nbm != 0 then nbcm * 100 / nbm else 0}%)"
		print " * NBF:  {nbf}"
		print " * NBCF: {nbcf} ({if nbf != 0 then nbcf * 100 / nbf else 0}%)"
	end

	# Get the csv data for a document returned by `to_csv`.
	fun csv_record(csv: CsvDocument) do
		csv.add_record(module_name, loc, lod, nbc, nbcc, nbm, nbcm, nbf, nbcf)
	end
end

# Prepare a new `CsvDocument` from rst metrics
#
# Only headers are set, use `RstFile::csv_record` to get the data.
fun rst_csv: CsvDocument do
	var csv = new CsvDocument
	csv.set_header("name", "LOD", "NBCC", "NBCM", "NBCF")
	return csv
end

# Prepare a new `CsvDocument` from py metrics
#
# Only headers are set, use `csv_record` to get the data.
fun py_csv: CsvDocument do
	var csv = new CsvDocument
	csv.set_header("name", "LOC", "LOD", "NBC", "NBCC", "NBM", "NBCM", "NBF", "NBCF")
	return csv
end
