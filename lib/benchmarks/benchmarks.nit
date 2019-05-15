# This file is part of NIT (http://www.nitlanguage.org).
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

import realtime

class Benchmarks

	var groups = new Array[BenchGroup]
	var results = new HashMap[BenchGroup, BenchResults]

	fun add_group(group: BenchGroup) do groups.add(group)

	fun run(warmups, runs: Int) do
		print "Benchmarking..."
		for group in groups do
			results[group] = group.run(warmups, runs)
		end
	end

	fun pretty do
		for group, res in results do
			res.pretty
		end
	end
end

class BenchGroup
	var title: String
	var benches = new Array[Benchmark]

	fun add_bench(bench: Benchmark) do benches.add bench

	fun run(warmups, runs: Int): BenchResults do
		print "\nRunning \"{title}\" (benches: {benches.length}, warm: {warmups}, runs: {runs})..."
		var res = new BenchResults(title, warmups, runs)
		for bench in benches do
			res.add bench.run(warmups, runs)
		end
		return res
	end

	redef fun to_s do return title
end

# Benchmark a piec of code
abstract class Benchmark

	# Title of this benchmark
	var title: String

	# Run the benchmark
	#
	# The `bench` method will be called `warmups + runs` times.
	# The `warmups` are used to pre-fill the caches.
	fun run(warmups, runs: Int): BenchResult do
		assert warmups >= 0
		assert runs >= 0

		var result = new BenchResult(title, warmups, runs)

		# Warmups to fill the caches
		for i in [1..warmups] do
			printn "\r  {title} | warm {i}/{warmups}..."
			bench
		end

		# Actual benches
		for i in [1..runs] do
			printn "\r  {title} | run {i}/{runs}..."
			var clock = new Clock
			bench
			var time = clock.total
			result.wall_times.add time
		end
		print ""
		return result
	end

	# Method that will be benchmarked
	fun bench is abstract

	redef fun to_s do return title
end

class BenchResults
	super Array[BenchResult]

	var title:  String
	var warmups: Int
	var runs: Int

	fun pretty do
		print "\n-- {title} ----------------"
		print "\tavg\tmin\tmax"
		for res in self do
			res.pretty
		end
		print "----------------------------"
	end

	# TODO escape title
	fun to_plot: String do
		var plot = new Buffer
		plot.append """
set nokey
set style data histogram
set style histogram cluster gap 1
set style histogram errorbars linewidth 1
set style fill solid 0.3 border -1
set xtic nomirror rotate by -45
set ylabel "time (s)
set yrange [0:]
set grid y
set ytic  nomirror

set title "{{{title}}}; avg. on {{{runs}}} runs"
plot '-' using 2:3:xticlabels(1)\n"""

		for res in self do
			plot.append res.to_plot
		end
		plot.append "EOF"
		return plot.write_to_string
	end

	# TODO escape title
	fun to_html: String do
		var html = new Buffer
		html.append "<h1>{title}</h1>"
		html.append to_svg
		return html.write_to_string
	end

	fun to_svg: String do
		var proc = new ProcessDuplex("gnuplot", "-p")
		proc.write("set term svg\n")
		var svg = proc.write_and_read( to_plot)
		proc.close
		proc.wait
		return svg
	end

	fun show do
		var proc = new ProcessWriter("gnuplot", "-p")
		proc.write to_plot
		proc.close
		proc.wait
	end
end

class BenchResult
	var title:  String
	var warmups: Int
	var runs: Int

	var wall_times = new Array[Float]

	fun pretty do
		var avg = avg_time.to_precision(3)
		var min = min_time.to_precision(3)
		var max = max_time.to_precision(3)
		print "{title}\t{avg}\t{min}\t{max}"
	end

	fun pretty_results do
		var i = 1
		for res in wall_times do
			print " {i}. {res}"
			i  += 1
		end
	end

	fun avg_time: Float do
		if wall_times.is_empty then return nan
		var sum	 = 0.0
		for res in wall_times do sum += res
		return  sum / runs.to_f
	end

	fun min_time: Float do
		var min = null
		for res in wall_times do
			if min == null or res < min then min = res
		end
		return min or else nan
	end

	fun max_time: Float do
		var max = null
		for res in wall_times do
			if max == null or res > max then max = res
		end
		return max or else nan
	end

	fun dev_time: Float do
		var avg = avg_time
		var sum = 0.0
		for value in wall_times do
			sum += (value.to_f - avg).pow(2.0)
		end
		return (sum / runs.to_f).sqrt
	end

	# TODO escape title
	fun to_plot: String do
		var plot = new Buffer
		plot.append "{title}\t{avg_time}\t{dev_time}\n"
		return plot.write_to_string
	end

	redef fun to_s do return title
end

class BenchNit
	super Benchmark

	redef fun bench do
		for i in [0..1000000] do
			print "Foo"
		end
	end

	fun print(str: String) do end
end

class BenchCmd
	super Benchmark

	var cmd: String

	redef fun bench do
		sys.system cmd
	end
end

var benches = new Benchmarks

var g1 = new BenchGroup("Display String")
g1.add_bench new BenchCmd("cmd", "sleep 0; echo 'Foo' > /dev/null")
g1.add_bench new BenchNit("nit")
benches.add_group g1

benches.run(3, 10)
benches.pretty
for group, res in benches.results do
	# res.show
	# res.to_html.write_to_file "test.html"
end

# TODO bench full html repport
# TODO multiple series in same plot
# TODO save logs, show timeline

# TODO bench -> runner
# TODO more runners
# TODO examples
# TODO doc
# TODO tests
# TODO package.ini etc.
# TODO README
