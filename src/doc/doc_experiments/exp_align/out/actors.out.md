# Nit Actor Model

This group introduces the `actors` module which contains the abstraction of a Nit Actor Model,
based on Celluloid (https://github.com/celluloid/celluloid).

> span: actors

## What is an actor ?

An actor is an entity which receives messages and does some kind of computation based on it.
An actor has a mailbox in which it receives its messages, and process them one at a time.

## `actor` annotation


The `actors` module introduces the annotation `actor` which is to be used on classes.
This annotation transform a normal Nit class into an actor.

> span: actors

In practice, it adds a new property `async` to the annotated class.
When using `async` on your annotated class, this means that you want your calls to be asynchronous,
executed by the actor.

> span: actors::ClockAgent::async
> span: actors::Agent::async
> span: actors::Creature::async
> span: actors::FannkuchRedux::async
> span: actors::Worker::async
> span: actors::A::async
> span: actors::ThreadRing::async
> span: actors::ClockAgent::async
> span: actors::Agent::async
> span: actors::Creature::async
> span: actors::FannkuchRedux::async
> span: actors::Worker::async
> span: actors::A::async
> span: actors::ThreadRing::async

For instance, if you call `a.async.foo` and `foo` doesn't have a return value, it will send
a message to the mailbox of the actor attached to `a` which will process it asynchronously.

> span: actors::A::foo
> span: actors::ProxyA::foo
> span: actors::A::foo
> span: actors::ProxyA::foo

On the other hand, if you call `a.async.bar` and `bar` returns an`Int`, it will still send
a message to the actor, but you'll get a `Future[Int]` to be able to retrieve the value.
When using `join` on the future, the calling thread will wait until the value of the future is set.

> span: actors::A::bar
> span: actors::ProxyA::bar
> span: actors::A::bar
> span: actors::ProxyA::bar
> span: core::Int
> span: actors::Future
> span: actors::Future::join

## Managing actors

When you annotate a class with `actor` and create an instance of it with `new`, the actor is not
automatically created (which means you can completely skip the use of the actors if you
don't need them for a specific program).

> span: core::NativeArray::new
> span: core::hash_collection::Map::new
> span: core::hash_collection::Set::new
> span: core::CString::new
> span: core::Buffer::new
> span: core::TimeT::new
> span: pthreads::AtomicInt::new
> span: pthreads::pthreads::NativePthreadAttr::new
> span: pthreads::pthreads::NativePthreadMutex::new
> span: pthreads::pthreads::NativePthreadMutexAttr::new
> span: pthreads::pthreads::NativePthreadKey::new
> span: pthreads::pthreads::NativePthreadCond::new
> span: pthreads::extra::NativePthreadBarrier::new

The `async` added property is actually created lazily when you use it.

> span: actors::ClockAgent::async
> span: actors::Agent::async
> span: actors::Creature::async
> span: actors::FannkuchRedux::async
> span: actors::Worker::async
> span: actors::A::async
> span: actors::ThreadRing::async

Actors are not automatically garbage collected, but you have solutions to terminate them
if you need to. For this, you need to use the `async` property of your annotated class :

> span: actors::ClockAgent::async
> span: actors::Agent::async
> span: actors::Creature::async
> span: actors::FannkuchRedux::async
> span: actors::Worker::async
> span: actors::A::async
> span: actors::ThreadRing::async

* `async.terminate` sends a shutdown message to the actor telling him to stop, so he'll finish
  processing every other messages in his mailbox before terminating properly. Every other messages sent
  to this actor after he received the shutdown message won't be processed.
* `async.terminate_now` sends a shutdown message too, but this time it places it first, so
  if the actor is processing one message now, the next one will be the shutdown message, discarding
  every messages in its mailbox.
* `async.wait_termination` wait for the actor to terminate properly. This call is synchronous.
* `async.kill`. If you really need this actor to stop, without any regards of what he was doing
  or in which state he'll leave the memory, you can with this call. it's synchronous but not really
  blocking, since it's direcly canceling the native pthread associated to the actor.

> span: actors::Proxy::terminate
> span: actors::Proxy::terminate_now
> span: actors::Proxy::wait_termination
> span: actors::Actor::kill
> span: actors::Proxy::kill

For now, there isn't any mecanism to recreate and actor after it was terminated.
Sending messages after terminating it results in unspecified behaviour.

## Waiting for all actors to finish processing

Let's imagine you create a whole bunch of actors and make them do things asynchronously from the main thread.
You don't want your program to exit right after giving work to your actors.
To prevent that, we added a mecanism that waits before all your actors finished all their messages
before quitting.

It's materialized by the `active_actors` property added to `Sys` which is a `ReverseBlockingQueue`.
In short, the `is_empty` method on this list is blocking until the list is effectively empty.
When every actors finished working, and we're sure they won't even send another message to another
actor, `active_actors` is empty.

> span: actors::actors::Sys::active_actors
> span: core::Sys
> span: pthreads::ReverseBlockingQueue
> span: core::Collection::is_empty
> span: core::MapRead::is_empty
> span: core::Text::is_empty
> span: actors::actors::Sys::active_actors

You can use this property as a mean of synchronisation in some specific cases (for example if you're
using actors for fork/join parallelism instead of concurrency).

## Examples

You can find example of differents small programs implemented with Nit actors in the `examples`
directory. For a really simple example, you can check `examples/simple`.

> span: actors>examples>
> span: lib/actors/examples/simple

