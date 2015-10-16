# var points = [1, 2, 2, 4, 5, 6, 6, 7, 8, 10, 10, 11, 11, 12, 13, 13, 13]
var points = [1, 2, 3]
default_comparator.sort(points)

var min = points.first
var max = points.last

var k = 3
if k > points.length then
	print "Error: cannot have more cluster than points"
	sys.exit 1
end

var clusters = new HashMap[Int, Array[Int]]

# First iteration with random centers
for i in [0..k[ do
	var r = ([min..max].rand)
	while clusters.has_key(r) do
		r = ([min..max].rand)
	end
	clusters[(r)] = new Array[Int]
end
print "Random centers: {clusters.keys.join(", ")}"
# clusters[1] = new Array[Int]
# clusters[2] = new Array[Int]
# clusters[3] = new Array[Int]

var step = 1
loop

	# Points dispatch
	for point in points do
		var key = null
		var min_dist = null
		for c in clusters.keys do
			var dist = (point - c).abs
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
	var new_clusters = new HashMap[Int, Array[Int]]
	for c, v in clusters do
		var mean = 0
		if not v.is_empty then
			for p in v do mean += p
			mean = mean / v.length
		end
		new_clusters[mean] = new Array[Int]
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
