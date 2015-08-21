# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>.
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

# Analyze a python library
module analyzer

import parse_py
import parse_rst
import metrics
import opts
import template

# Analysis orchestrer
class Analyzer

	# --py-metrics
	var opt_py_metrics = new OptionBool("Show .py metrics", "--py-metrics")
	# --rst-metrics
	var opt_rst_metrics =new OptionBool("Show .rst metrics", "--rst-metrics")
	# --gen-nit
	var opt_gen_nit = new OptionBool("Generate Nit API stub", "--gen-nit")
	# --gen-md
	var opt_gen_md = new OptionBool("Generate README.md from rst file", "--gen-md")
	# --gen-doc
	var opt_gen_doc = new OptionBool("Generate Nitdoc documentation from generated stub", "--gen-doc")
	# --batch
	var opt_batch = new OptionBool("Explore pylib/ recursively looking for libraries", "--batch")

	# Option Context
	var opts = new OptionContext

	init do
		opts.options.add_all(
			[opt_py_metrics, opt_rst_metrics, opt_gen_nit, opt_gen_md, opt_gen_doc, opt_batch])
	end

	# Start the analisys for `args`
	fun start(args: Sequence[String]) do
		opts.parse(args)
		args = opts.rest

		if args.length != 2 then
			print "Usage: pylib/ nitlib/\n"
			opts.usage
			exit 1
		end

		var python_dir = args[0]
		var nit_dir = args[1]
		check_file(python_dir)

		if opt_batch.value then
			batch_mode(python_dir, nit_dir)
		else
			file_mode(python_dir, nit_dir)
		end
	end

	private fun batch_mode(python_dir, nit_dir: String) do
		var pym = py_csv
		var rstm = rst_csv
		var libs = new Array[PyLib]
		for name in python_dir.files do
			var pylib = file_mode(python_dir / name, nit_dir / name)
			pylib.py.csv_record(pym)
			pylib.rst.csv_record(rstm)
			libs.add pylib
		end
		if opt_py_metrics.value then
			print "## in .py\n"
			var headers = ["LOC", "LOD", "NBC", "NBCC", "NBM", "NBCM", "NBF", "NBCF"]
			print "| --------------|{"-------|" * headers.length}"
			print "| name\t\t| {headers.join("\t| ")}\t|"
			print "| --------------|{"-------|" * headers.length}"
			for lib in libs do
				var p = lib.py
				var n = lib.name
				var l = [p.loc, p.lod, p.nbc, p.nbcc, p.nbm, p.nbcm, p.nbf, p.nbcf: Object]
				var space = "\t"
				if n.length < 5 then space = space * 2
				print "| {lib.name}{space}| {l.join("\t| ")}\t|"
			end
			print "| --------------|{"-------|" * headers.length}\n"
		end
		if opt_rst_metrics.value then
			print "## in .rst\n"
			var headers = ["LOD", "NBCC", "NBCM", "NBCF"]
			print "| --------------|{"-------|" * headers.length}"
			print "| name\t\t| {headers.join("\t| ")}\t|"
			print "| --------------|{"-------|" * headers.length}"
			for lib in libs do
				var r = lib.rst
				var n = lib.name
				var l = [r.lod, r.nbcc, r.nbcm, r.nbcf: Object]
				var space = "\t"
				if n.length < 5 then space = space * 2
				print "| {lib.name}{space}| {l.join("\t| ")}\t|"
			end
			print "| --------------|{"-------|" * headers.length}\n"

			print ""
		end
		pym.write_to_file("report_python.csv")
		rstm.write_to_file("report_rst.csv")
	end

	private fun file_mode(python_dir, nit_dir: String): PyLib do
		print "Process lib {python_dir}"
		var pylib = new PyLib(python_dir)

		var nitlib = new NitLib(nit_dir)
		if opt_gen_nit.value then
			nitlib.nit = pylib.py.to_nit_file("{nitlib.path}/{pylib.name}.nit")
		end
		if opt_gen_md.value then
			nitlib.md = pylib.rst.to_md_file("{nitlib.path}/README.md")
		end
		if opt_gen_doc.value then
			nitlib.nitdoc
		end
		return pylib
	end

	# Check if a file exists or abort
	fun check_file(path: String): Bool do
		if not path.file_exists then
			print "Error: Cannot find `{path}`"
			exit 1
		end
		return true
	end
end

private class LibAlphaComparator
	super Comparator
	redef type COMPARED: PyLib
	redef fun compare(a, b) do return a.name <=> b.name
end

(new Analyzer).start(args)
