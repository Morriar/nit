# POSIX Threads support

> match: pthreads

The threads can be manipulated and synchronized using the classes `Thread`,
`Mutex` and `Barrier`.

> match: pthreads::Thread
> match: pthreads::Barrier
> match: pthreads::Mutex
> match: pthreads::pthreads::NativePthreadMutex
> match: pthreads::pthreads::NativePthreadMutexAttr
> match: pthreads::MainThread
> match: pthreads::threadpool::PoolThread
> match: pthreads::ThreadPool
> match: pthreads::extra::NativePthreadBarrier
> match: pthreads::concurrent_array_and_barrier::MyThread
> match: pthreads::concurrent_array_and_barrier
> match: pthreads
> match: pthreads::threaded_example
> match: pthreads::extra
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections

This group also provides two optional modules with thread-safe collections:

> match: pthreads::ConcurrentCollection
> match: pthreads>
> match: pthreads
> match: pthreads::redef_collections
> match: pthreads::ReverseBlockingQueue
> match: pthreads::concurrent_collections

* `redef_collections` redefines existing collection to make them thread-safe.
  This incures a small overhead in all usage of the redefined collections.
* `concurrent_collections` intro new thread-safe collections.

> match: pthreads::ConcurrentCollection
> match: pthreads::redef_collections
> match: pthreads
> match: pthreads::ReverseBlockingQueue
> match: pthreads::Barrier
> match: pthreads::concurrent_collections
> match: pthreads::concurrent_array_and_barrier
> match: pthreads::Mutex
> match: pthreads::ConcurrentCollection
> match: pthreads
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections
> match: pthreads::ReverseBlockingQueue

Theses services are implemented using the POSIX threads.

> match: pthreads::Thread
> match: pthreads::concurrent_array_and_barrier::MyThread
> match: pthreads::threaded_example
> match: pthreads
> match: pthreads::extra
> match: pthreads::ThreadPool
> match: pthreads::Mutex
> match: pthreads::BlockingQueue
> match: pthreads::MainThread
> match: pthreads::threadpool::PoolThread
> match: pthreads::Barrier
> match: pthreads::concurrent_array_and_barrier
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections

You can also use the `is threaded` annotation on methods, which makes them run on their own thread.
Methods with self calls are not supported.

> match: pthreads::Thread
> match: pthreads::concurrent_array_and_barrier::MyThread
> match: pthreads
> match: pthreads::threaded_example
> match: pthreads::threadpool::PoolThread
> match: pthreads::Barrier
> match: pthreads::Mutex
> match: pthreads::MainThread
> match: pthreads::extra
> match: pthreads::concurrent_array_and_barrier
> match: pthreads::ReverseBlockingQueue
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections

A method or function annotated with `is threaded` has its return value changed during compilation.
You will get a subclass of `Thread`, even if there wasn't a return value before. You can know if the threaded method is done with the `is_done` boolean from `Thread`.
A call to the `join` method will block the execution until the threaded method is done, or immediatly return if it's already done.
`join` will return an object typed with the orginial return type, or `null` if there wasn't.

> match: pthreads::Thread
> match: pthreads::MainThread
> match: pthreads::ReverseBlockingQueue
> match: pthreads::threadpool::PoolThread
> match: pthreads
> match: pthreads::ThreadPool
> match: pthreads::BlockingQueue
> match: pthreads::concurrent_array_and_barrier::MyThread
> match: pthreads::threaded_example
> match: pthreads::JoinTask
> match: pthreads::Barrier
> match: pthreads::Mutex
> match: pthreads::extra
> match: pthreads::concurrent_array_and_barrier
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections

## Known limitations:

> match: pthreads

* Most services from the Nit library are not thread-safe. You must manage
  your own mutex to avoid conflicts on shared data.
* FFI's global references are not thread-safe.

> match: pthreads::Mutex
> match: pthreads
> match: pthreads::extra
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections
> match: pthreads
> match: pthreads::ConcurrentCollection::REAL
> match: pthreads::concurrent_collections::Collection::to_concurrent
> match: pthreads::redef_collections
> match: pthreads::concurrent_collections

## For more information:

> match: pthreads
> match: pthreads::redef_collections

* See: `man pthreads`
* See: `examples/concurrent_array_and_barrier.nit`
* See: `examples/threaded_example.nit`

> match: pthreads::pthreads::NativePthread
> match: pthreads::pthreads::NativePthreadAttr
> match: pthreads::pthreads::NativePthreadCond
> match: pthreads
> match: pthreads::concurrent_array_and_barrier
> match: pthreads
> match: pthreads

