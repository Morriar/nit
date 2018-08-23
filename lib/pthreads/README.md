# `pthreads` - POSIX Threads support

* [`redef_collections`](#`redef_collections`)
* [`concurrent_collections`](#`concurrent_collections`)
* [`BlockingQueue`](#`BlockingQueue`)
* [`Barrier`](#`Barrier`)
* [`Mutex`](#`Mutex`)
* [`Thread`](#`Thread`)
* [Known limitations:](#Known-limitations:)
* [For more information:](#For-more-information:)
* [Authors](#Authors)

The threads can be manipulated and synchronized using the classes [`Thread`](pthreads::Thread),
[`Mutex`](pthreads::Mutex) and [`Barrier`](pthreads::Barrier).

This group also provides two optional modules with thread-safe collections:

* `redef_collections` redefines existing collection to make them thread-safe.
  This incures a small overhead in all usage of the redefined collections.
* `concurrent_collections` intro new thread-safe collections.

Theses services are implemented using the POSIX threads.

You can also use the `is threaded` annotation on methods, which makes them run on their own thread.
Methods with self calls are not supported.

A method or function annotated with `is threaded` has its return value changed during compilation.
You will get a subclass of `Thread`, even if there wasn't a return value before. You can know if the threaded method is done with the `is_done` boolean from `Thread`.
A call to the `join` method will block the execution until the threaded method is done, or immediatly return if it's already done.
`join` will return an object typed with the orginial return type, or `null` if there wasn't.

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

* `concurrent_collections` - Introduces thread-safe concurrent collections
* `extra` - Offers some POSIX threads services that are not available on all platforms
* `pthreads` - Main POSIX threads support and intro the classes `Thread`, `Mutex` and `Barrier`
* `redef_collections` - Redef _some_ basic collections to be thread-safe
* `threadpool` - Introduces a minimal ThreadPool implementation using Tasks

## `redef_collections`

> This modules is intended to be used with scripts or quick prototypes.
> It makes thread safe _all_ instances of _some_ collections which
> also slightly slow down single threaded use. For more robust software,
> it is recommended to use `threads::concurrent_collections`.

Thread-safe collections:

- [x] `Array`
- [ ] `List`
- [ ] `HashMap`
- [ ] `HashSet`
- [ ] `Ref`
- [ ] `Queue`

## `concurrent_collections`

> This module offers new thread-safe collections. If you want to
> render basic collections thread-safe and don't mind the overhead cost,
> you can use `threads::redef_collections`.

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

## `BlockingQueue`


## `Barrier`

> Ensures that `count` threads call and block on `wait` before releasing them.

## `Mutex`

> Instances of this class can only be acquired by a single thread at any one
> point in time. Uses the recursive protocol so they can be locked many time by
> the same thread, must then be unlocked as many time.

## `Thread`

> Instances of this class are each used to launch and control a thread.

## Known limitations:

* Most services from the Nit library are not thread-safe. You must manage
  your own mutex to avoid conflicts on shared data.
* FFI's global references are not thread-safe.

## For more information:

![Diagram for `pthreads`](uml-pthreads-2.svg)

* See: `man pthreads`
* See: `examples/concurrent_array_and_barrier.nit`
* See: `examples/threaded_example.nit`

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
