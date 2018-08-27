# [[pthreads]] - [[ini-desc: pthreads]]

This module is a Nit wrapper on top of classic posix Threads, with a little bit of extra to make it easier to use.
The Main functionnalities are introduced in the main module [[pthreads]].

## Examples

If you really don't want to write some threaded code and you don't have too specific needs, 
you can start by using the `threaded` annotation on functions:

[[code: pthreads::threaded_example | format: html]]

**TODO:ecrire un exemple de Thread tout court**

If you want to launch some tasks, and be able to retrieve their result, you can use `JoinTask`:
[[code: pthreads::jointask_example | format: html]]

Next, you can use [[threadpool]] if you want to add multiple tasks and allow them to run concurrently:
[[code: pthreads::threadpool_example | format: html]]

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: pthreads]]

### Getting the sources

Clone the source from the git repository:

[[git-clone: pthreads]]

## Features

This diagram shows the organisation of the package `pthreads`:

[[uml: pthreads | format: svg, mentities: core::core;pthreads::extra;pthreads::threaded_example;pthreads::pthreads;pthreads::redef_collections;pthreads::concurrent_collections]]

When dealing with Threads, you don't want to access collections at the same time with multiple Threads, so you should always use
[[pthreads::concurrent_collections]] so you're safe for accessing/editing collections.

> ### [[pthreads::concurrent_collections]]
> [[doc: pthreads::concurrent_collections]]

If you want to consume data with your custom Threads, you may also need to use a [[pthreads::BlockingQueue]],
on which [[pthreads$BlockingQueue$core::Sequence::shift | text: BlockingQueue::shift]] 
to make sure your threads aren't trying to get values from the Queue while it's empty.

To synchronize multiple threads at some point in your code, you can use [[pthreads::Barrier]]:

> [[doc: pthreads::Barrier]]

[[features: pthreads | mentities: pthreads::Barrier::count;pthreads::Barrier::wait]]


Another good tool is [[sign: pthreads::Mutex]] which gives you full control over which thread can modify
 some specific resources. But be careful, it' s highly error-prone and can lead to deadlocks easily.

> [[doc: pthreads::Mutex]]

## Contributing

This project is versioned with git.
We accept pull requests on [[ini-git: pthreads | contrib]].

## Authors

This project is maintained by [[ini-maintainer: pthreads]].

## License

This project is licensed under the [[ini-license: pthreads]]
license.






