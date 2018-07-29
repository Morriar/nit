# POSIX Threads support

> match: pthreads::threadpool::ThreadPool::threads
> match: pthreads::Thread
> match: pthreads>
> match: pthreads
> match: pthreads::pthreads::MainThread::init
> match: pthreads::pthreads::NativePthread
> match: pthreads::pthreads::Barrier::mutex

The threads can be manipulated and synchronized using the classes `Thread`,
`Mutex` and `Barrier`.

> match: pthreads::Thread
> match: pthreads::Mutex
> match: pthreads::Barrier
> match: pthreads::threadpool::ThreadPool::threads
> match: pthreads::ConcurrentCollection::mutex
> match: pthreads::Thread::join
> match: pthreads>

This group also provides two optional modules with thread-safe collections:

> match: pthreads::Thread
> match: pthreads::pthreads::Sys::thread
> match: pthreads::concurrent_collections::Collection::to_concurrent
> match: pthreads::ConcurrentCollection::REAL
> match: pthreads>
> match: pthreads
> match: pthreads::ConcurrentCollection

* `redef_collections` redefines existing collection to make them thread-safe.
  This incures a small overhead in all usage of the redefined collections.
* `concurrent_collections` intro new thread-safe collections.

> match: pthreads::Thread
> match: pthreads::pthreads::Sys::thread
> match: pthreads::concurrent_collections
> match: pthreads::redef_collections
> match: pthreads>
> match: pthreads
> match: pthreads::concurrent_collections::Collection::to_concurrent
> match: pthreads::ConcurrentCollection::REAL
> match: pthreads::ConcurrentCollection

Theses services are implemented using the POSIX threads.

> match: pthreads::threadpool::ThreadPool::threads
> match: pthreads::Thread
> match: pthreads::Thread::join
> match: pthreads>
> match: pthreads
> match: pthreads::ConcurrentCollection::mutex

You can also use the `is threaded` annotation on methods, which makes them run on their own thread.
Methods with self calls are not supported.

> match: pthreads::Thread
> match: pthreads::pthreads::Sys::thread
> match: pthreads>
> match: pthreads
> match: pthreads::threaded_example::Sys::foo
> match: pthreads::Thread::join
> match: pthreads::ConcurrentCollection::mutex

A method or function annotated with `is threaded` has its return value changed during compilation.
You will get a subclass of `Thread`, even if there wasn't a return value before. You can know if the threaded method is done with the `is_done` boolean from `Thread`.
A call to the `join` method will block the execution until the threaded method is done, or immediatly return if it's already done.
`join` will return an object typed with the orginial return type, or `null` if there wasn't.

> match: pthreads::Thread
> match: pthreads::pthreads::NativePthreadKey::get
> match: pthreads::Thread::is_done
> match: pthreads::JoinTask::is_done
> match: pthreads::AtomicInt::value
> match: pthreads::StringTask::value
> match: pthreads::Thread::join
> match: pthreads::pthreads::NativePthread::join
> match: pthreads::JoinTask::join
> match: pthreads>
> match: pthreads
> match: pthreads::JoinTask
> match: pthreads::threaded_example::Sys::baz

## Known limitations:

> match: pthreads>
> match: pthreads
> match: pthreads::pthreads::MainThread::init
> match: pthreads::pthreads::NativePthread
> match: pthreads::pthreads::Barrier::mutex

* Most services from the Nit library are not thread-safe. You must manage
  your own mutex to avoid conflicts on shared data.
* FFI's global references are not thread-safe.

> match: pthreads::Thread
> match: pthreads::pthreads::Sys::thread
> match: pthreads::Mutex
> match: pthreads::threadpool::ThreadPool::mutex
> match: pthreads::redef_collections::Array::mutex
> match: pthreads::ConcurrentCollection::mutex
> match: pthreads::pthreads::Barrier::mutex
> match: pthreads::threadpool::PoolThread::mutex
> match: pthreads::threadpool::JoinTask::mutex
> match: pthreads>
> match: pthreads
> match: pthreads::concurrent_collections::Collection::to_concurrent
> match: pthreads::concurrent_array_and_barrier::MyThread::array
> match: pthreads::ConcurrentCollection::REAL
> match: pthreads::extra::Sys::test_cancel
> match: pthreads::PthreadCond::wait

## For more information:

> match: pthreads::pthreads::MainThread::init
> match: pthreads::pthreads::NativePthread
> match: pthreads>
> match: pthreads
> match: pthreads::pthreads::Barrier::mutex

* See: `man pthreads`
* See: `examples/concurrent_array_and_barrier.nit`
* See: `examples/threaded_example.nit`

> match: pthreads>
> match: pthreads
> match: pthreads::concurrent_array_and_barrier
> match: pthreads::pthreads::MainThread::init
> match: pthreads::pthreads::NativePthread

