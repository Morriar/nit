# `pthreads` - POSIX Threads support

* [Features](#Features)
* [`concurrent_collections` - Introduces thread-safe concurrent collections](#`concurrent_collections`---Introduces-thread-safe-concurrent-collections)
* [`redef_collections` - Redef _some_ basic collections to be thread-safe](#`redef_collections`---Redef-_some_-basic-collections-to-be-thread-safe)
* [Other features](#Other-features)
* [Authors](#Authors)

Example from `pthreads::jointask_example`:

~~~
# Simple example of joinable task using threadpool
module jointask_example is example

import threadpool

# Task computing a string
class StringTask
	super JoinTask

	# Sleeping time
	var sec: Int

	# result of `self` execution
	var value: String

	# ID for printing
	var id: Int

	redef fun main do
		nanosleep(sec, 0)
		value += " id: {id}"
	end
end

var tp = new ThreadPool
var t0 = new StringTask(10, "First, long task", 0)
var tasks = new Array[StringTask]
for i in 5.times do
	tasks.add(new StringTask(1, "Small task", i + 1))
end
tp.execute(t0)
for t in tasks do tp.execute(t)
for t in tasks do
	t.join
	print t.value
end
t0.join
print t0.value
~~~

## Features

![Diagram for `pthreads`](uml-pthreads.svg)

### `concurrent_collections` - Introduces thread-safe concurrent collections

This module offers new thread-safe collections. If you want to
render basic collections thread-safe and don't mind the overhead cost,
you can use `threads::redef_collections`.

Concurrent collections:

- [x] `ConcurrentArray`
- [x] `ConcurrentList`
- [ ] `ConcurrentHashMap`
- [ ] `ConcurrentHashSet`
- [ ] `ConcurrentRef`
- [ ] `ConcurrentQueue`

Introduced collections specialize their critical methods according to the
current implementation in the standard library. If additional services
are added to the underlying collections by refinement or evolution, they
might need to be covered in the concurrent version.

Example from `pthreads::concurrent_array_and_barrier`:

~~~
# A basic usage example of the modules `pthreads` and `pthreads::cocurrent_collections`
#
# 20 threads share an array and a barrier. They each insert 1000 strings into
# the array and wait at a barrier before finishing.
module concurrent_array_and_barrier is example

import pthreads::concurrent_collections

private class MyThread
	super Thread

	# This `ConcurrentArray` has its own `Mutex`
	var array: ConcurrentArray[String]

	# Use an explicit `Barrier`
	var barrier: Barrier

	var id: Int

	redef fun main
	do
		# Print and add to Array 1000 times
		for i in 1000.times do
			var str = "thread {id}: {i}"
			array.add str
		end

		# Wait at the `barrier`
		barrier.wait

		return id
	end
end

var n_threads = 20

# This `ConcurrentArray` has its own `Mutex`
var array = new ConcurrentArray[String]

# Use an explicit `Barrier`
var barrier = new Barrier(n_threads)

# Create all our threads
var threads = new Array[Thread]
for t in n_threads.times do
	var thread = new MyThread(array, barrier, t)
	threads.add thread
	thread.start
end

# Wait for the threads to complete
for thread in threads do
	print "Thread {thread.join or else "null"} is done"
end

print "{array.length} strings inserted"
~~~

### `redef_collections` - Redef _some_ basic collections to be thread-safe

This modules is intended to be used with scripts or quick prototypes.
It makes thread safe _all_ instances of _some_ collections which
also slightly slow down single threaded use. For more robust software,
it is recommended to use `threads::concurrent_collections`.

Thread-safe collections:

- [x] `Array`
- [ ] `List`
- [ ] `HashMap`
- [ ] `HashSet`
- [ ] `Ref`
- [ ] `Queue`

## Other features

* `extra` - Offers some POSIX threads services that are not available on all platforms
* `threadpool` - Introduces a minimal ThreadPool implementation using Tasks

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
