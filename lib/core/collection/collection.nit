# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module define several collection classes.
module collection

import range
import list
import array
import circular_array
import sorter
import hash_collection
import union_find

redef class Sequence[E]

	# Copy the content of `self` between `start` and `len` to a new Array.
	fun subarray(start, len: Int): Array[E]
	do
		var a = new Array[E].with_capacity(len)
		for i in [start .. start+len[ do a.add(self[i])
		return a
	end

	# Return the Levenshtein distance between two squences
	#
	# ~~~
	# assert [1, 2, 3, 4].levenshtein_distance([1, 2, 3, 4])		== 0
	# assert (new Array[Int]).levenshtein_distance([1, 2, 3,  4])   == 4
	# assert [1, 2, 3, 4].levenshtein_distance(new Array[Int])		== 4
	# assert [1, 2, 3, 4].levenshtein_distance([7, 8, 9])			== 4
	# assert [1, 2, 3, 4].levenshtein_distance([7, 2, 4, 8])		== 3
	# ~~~
	fun levenshtein_distance(other: Sequence[E]): Int do
		var slen = self.length
		var olen = other.length

		# fast cases
		if slen == 0 then return olen
		if olen == 0 then return slen
		if self == other then return 0

		# previous row of distances
		var v0 = new Array[Int].with_capacity(olen+1)

		# current row of distances
		var v1 = new Array[Int].with_capacity(olen+1)

		for j in [0..olen] do
			# prefix insert cost
			v0[j] = j
		end

		for i in [0..slen[ do

			# prefix delete cost
			v1[0] = i + 1

			for j in [0..olen[ do
				# delete cost
				var cost1 = v1[j] + 1
				# insert cost
				var cost2 = v0[j + 1] + 1
				# same char cost (+0)
				var cost3 = v0[j]
				# change cost
				if self[i] != other[j] then cost3 += 1
				# keep the min
				v1[j+1] = cost1.min(cost2).min(cost3)
			end

			# Switch columns:
			# * v1 become v0 in the next iteration
			# * old v0 is reused as the new v1
			var tmp = v1
			v1 = v0
			v0 = tmp
		end

		return v0[olen]
	end
end
