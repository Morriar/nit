# Heap queue algorithm (a.k.a. priority queue).
# Heaps are arrays for which a[k] <= a[2*k+1] and a[k] <= a[2*k+2] for
# all k, counting elements from 0.  For the sake of comparison,
# non-existing elements are considered to be infinite.  The interesting
# property of a heap is that a[0] is always its smallest element.
# Usage:
# heap = []            # creates an empty heap
# heappush(heap, item) # pushes a new item on the heap
# item = heappop(heap) # pops the smallest item from the heap
# item = heap[0]       # smallest item on the heap without popping it
# heapify(x)           # transforms list into a heap, in-place, in linear time
# item = heapreplace(heap, item) # pops and returns smallest item, and adds
# # new item; the heap size is unchanged
# Our API differs from textbook heap algorithms as follows:
# - We use 0-based indexing.  This makes the relationship between the
# index for a node and the indexes for its children slightly less
# obvious, but is more suitable since Python uses 0-based indexing.
# - Our heappop() method returns the smallest item, not the largest.
# These two make it possible to view the heap as a regular Python list
# without surprises: heap[0] is the smallest item, and heap.sort()
# maintains the heap invariant!
module heapq

import builtins

# count(start=0, step=1) --> count object
# Return a count object whose .next() method returns consecutive values.
# Equivalent to:
# def count(firstval=0, step=1):
# x = firstval
# while 1:
# yield x
# x += step
class Count
    
end

# chain(*iterables) --> chain object
# Return a chain object whose .next() method returns elements from the
# first iterable until it is exhausted, then elements from the next
# iterable, until all of the iterables are exhausted.
class Chain
    
end

# izip(iter1 [,iter2 [...]]) --> izip object
# Return a izip object whose .next() method returns a tuple where
# the i-th element comes from the i-th iterable argument.  The .next()
# method continues until the shortest iterable in the argument sequence
# is exhausted and then it raises StopIteration.  Works like the zip()
# function but consumes less memory by returning an iterator instead of
# a list.
class Izip
    
end

redef class Sys
    
end

# islice(iterable, [start,] stop [, step]) --> islice object
# Return an iterator whose next() method returns selected values from an
# iterable.  If start is specified, will skip all preceding elements;
# otherwise, start defaults to zero.  Step defaults to one.  If
# specified as another value, step determines how many values are
# skipped between successive calls.  Works like a slice() on a list
# but returns an iterator.
class Islice
    
end

# imap(func, *iterables) --> imap object
# Make an iterator that computes the function using arguments from
# each of the iterables.  Like map() except that it returns
# an iterator instead of a list and that it stops when the shortest
# iterable is exhausted instead of filling in None for shorter
# iterables.
class Imap
    
end

# itemgetter(item, ...) --> itemgetter object
# Return a callable object that fetches the given item(s) from its operand.
# After f = itemgetter(2), the call f(r) returns r[2].
# After g = itemgetter(2, 5, 3), the call g(r) returns (r[2], r[5], r[3])
class Itemgetter
    
end

