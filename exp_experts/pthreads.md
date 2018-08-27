# [pthreads](pthreads) - POSIX Threads support

This module is a Nit wrapper on top of classic posix Threads, with a little bit of extra to make it easier to use.
The Main functionnalities are introduced in the main module [pthreads](pthreads).

## Examples

If you really don't want to write some threaded code and you don't have too specific needs,
you can start by using the `threaded` annotation on functions:

~~~
# test for threaded annotation
module threaded_example is example

import pthreads

# the `is threaded` annotation makes this method run on an other thread
fun foo is threaded do
	sys.nanosleep(1,0)
	print "threaded"
end

# Parameterized `threaded` method, same as foo, but with parameters
fun bar(i : Int, s : String) is threaded do
	sys.nanosleep(2, 0)
	print i
	print s
end

# Parameterized `threaded` method with a return type
fun baz(i : Int, j : Int): Int is threaded do
	sys.nanosleep(10, 0)
	return i + j
end

print "main"
foo
bar(10, "parameterized and threaded")
sys.nanosleep(5,0)
var x  = baz(2, 3)
print "main, waiting for baz"
var y = x.join
print("baz result : " + y.to_s)
~~~

**TODO:ecrire un exemple de Thread tout court**

If you want to launch some tasks, and be able to retrieve their result, you can use `JoinTask`:
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

Next, you can use [threadpool](pthreads::threadpool) if you want to add multiple tasks and allow them to run concurrently:
~~~
# Simple example using threadpool
module threadpool_example is example

import threadpool

# Task printing "hello world" on standard output
class HWTask
	super JoinTask

	# Sleeping time
	var sec: Int

	# id
	var id: Int
	redef fun main do
		print "Hello from {id}"
		nanosleep(sec, 0)
		print "World from {id}"
	end
end

var tp = new ThreadPool
for i in 100.times do
	var t = new HWTask(2.rand, i)
	tp.execute(t)
end

nanosleep(20,10)
~~~

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `core` - Nit common library of core classes and methods

### Getting the sources

Clone the source from the git repository:

~~~bash
git clone https://github.com/nitlang/nit.git
~~~

## Features

This diagram shows the organisation of the package `pthreads`:

![uml]()

When dealing with Threads, you don't want to access collections at the same time with multiple Threads, so you should always use
[concurrent_collections](pthreads::concurrent_collections) so you're safe for accessing/editing collections.

> ### [concurrent_collections](pthreads::concurrent_collections)
> This module offers new thread-safe collections. If you want to
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

If you want to consume data with your custom Threads, you may also need to use a [BlockingQueue](pthreads::BlockingQueue),
on which [BlockingQueue::shift](pthreads$BlockingQueue$core::Sequence::shift)
to make sure your threads aren't trying to get values from the Queue while it's empty.

To synchronize multiple threads at some point in your code, you can use [Barrier](pthreads::Barrier):

> Ensures that `count` threads call and block on `wait` before releasing them.

* `Barrier::count` - Number of threads that must be waiting for `wait` to unblock
* `Barrier::wait` - Wait at this barrier and block until there are a `count` threads waiting

Another good tool is `Mutex` which gives you full control over which thread can modify
some specific resources. But be careful, it' s highly error-prone and can lead to deadlocks easily.

> Instances of this class can only be acquired by a single thread at any one
point in time. Uses the recursive protocol so they can be locked many time by
the same thread, must then be unlocked as many time.

## Contributing

This project is versioned with git.
We accept pull requests on [https://github.com/nitlang/nit.git](https://github.com/nitlang/nit.git).

## Authors

This project is maintained by **Alexis Laferrière <alexis.laf@xymus.net>**.

## License

This project is licensed under the [Apache-2.0](https://opensource.org/licenses/Apache-2.0)
license.
