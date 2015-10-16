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

class KMeansProcessor[E: KMeanElement]

	var k: Int

	var clusters = new HashMap[E, Array[E]]

	private fun init_clusters(points: Array[E]) do
		default_comparator.sort(points)

		clusters.clear
		for i in [0 .. k[ do
			var r = (points.rand)
			while clusters.has_key(r) do
				r = (points.rand)
			end
			clusters[(r)] = new Array[E]
		end
		print "Random centers: {clusters.keys.join(", ")}"
	end

	fun process(points: Array[E]) do
		var step = 1
		loop

			# Points dispatch
			for point in points do
				var key = null
				var min_dist = null
				for c in clusters.keys do
					var dist = point.distance_from(c)
					if min_dist == null or dist < min_dist then
						key = c
						min_dist = dist
					end
				end
				clusters[key].add point
				key = null
				min_dist = null
			end

			# DIsplay step
			print "\n# Step {step}"
			for c, v in clusters do
				print "{c}: [{v.join(", ")}]"
			end

			# Compute new centers
			var new_clusters = new HashMap[E, Array[E]]
			for c, v in clusters do
				var mean = 0
				if not v.is_empty then
					for p in v do mean += p
					mean = mean / v.length
				end
				new_clusters[mean] = new Array[E]
			end

			# Stop condition
			var c1 = clusters.keys.to_a
			default_comparator.sort(c1)
			var c2 = new_clusters.keys.to_a
			default_comparator.sort(c2)
			if c1 == c2 then break

			# Update centers
			clusters = new_clusters
			step += 1
		end
	end
end

interface KMeanElement
	super Comparable

	fun distance_from(o: OTHER): Float is abstract
end

redef class Int
	super KMeanElement
	redef fun distance_from(o) do return (o.to_f - self.to_f).abs
end

var points = [1, 2, 2, 4, 5, 6, 6, 7, 8, 10, 10, 11, 11, 12, 13, 13, 13]

var k = 3
if k > points.length then
	print "Error: cannot have more cluster than points"
	sys.exit 1
end

var proc = new KMeansProcessor[Int](k)
proc.process(points)
