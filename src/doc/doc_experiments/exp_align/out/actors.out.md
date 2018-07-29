# Nit Actor Model

> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors>
> match: actors

This group introduces the `actors` module which contains the abstraction of a Nit Actor Model,
based on Celluloid (https://github.com/celluloid/celluloid).

> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::Proxy

## What is an actor ?

> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors>
> match: actors
> match: actors::Proxy::E

An actor is an entity which receives messages and does some kind of computation based on it.
An actor has a mailbox in which it receives its messages, and process them one at a time.

> match: actors::Actor
> match: actors::Mailbox
> match: actors::Message
> match: actors::Actor::mailbox
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: actors>
> match: actors
> match: actors::ShutDownMessage

## `actor` annotation

> match: actors>
> match: actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

The `actors` module introduces the annotation `actor` which is to be used on classes.
This annotation transform a normal Nit class into an actor.

> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::A
> match: actors::ActorCreature
> match: actors::ActorWorker

In practice, it adds a new property `async` to the annotated class.
When using `async` on your annotated class, this means that you want your calls to be asynchronous,
executed by the actor.

> match: actors::Actor
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: actors::FannkuchRedux::async
> match: actors::ThreadRing::async
> match: actors::ClockAgent::async
> match: actors::Agent::async
> match: actors::Creature::async
> match: actors::Worker::async
> match: actors::A::async
> match: actors>
> match: actors
> match: actors::A
> match: actors::Message::E
> match: actors::ActorCreature

For instance, if you call `a.async.foo` and `foo` doesn't have a return value, it will send
a message to the mailbox of the actor attached to `a` which will process it asynchronously.

> match: actors::Message
> match: actors::Actor
> match: actors::Mailbox
> match: actors::A::foo
> match: actors::ProxyA::foo
> match: actors::Actor::mailbox
> match: actors::Actor::instance
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Future::value
> match: actors>
> match: actors
> match: actors::Future

On the other hand, if you call `a.async.bar` and `bar` returns an`Int`, it will still send
a message to the actor, but you'll get a `Future[Int]` to be able to retrieve the value.
When using `join` on the future, the calling thread will wait until the value of the future is set.

> match: actors::Future
> match: actors::Actor
> match: actors::Message
> match: core::Int
> match: actors::A::bar
> match: actors::ProxyA::bar
> match: actors::AgentMessagegreet::other
> match: actors::Future::value
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Future::join
> match: actors::SynchronizedCounter::wait
> match: actors>
> match: actors
> match: actors::Future::set_value

## Managing actors

> match: actors
> match: actors::actors
> match: actors::Actor
> match: actors>
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

When you annotate a class with `actor` and create an instance of it with `new`, the actor is not
automatically created (which means you can completely skip the use of the actors if you
don't need them for a specific program).

> match: actors::Actor
> match: actors
> match: actors::actors
> match: actors::Actor::instance
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: pthreads::pthreads::NativePthreadMutex::new
> match: core::hash_collection::Map::new
> match: core::hash_collection::Set::new
> match: core::CString::new
> match: core::Buffer::new
> match: core::TimeT::new
> match: pthreads::AtomicInt::new
> match: pthreads::pthreads::NativePthreadAttr::new
> match: pthreads::pthreads::NativePthreadMutexAttr::new
> match: pthreads::pthreads::NativePthreadKey::new
> match: pthreads::pthreads::NativePthreadCond::new
> match: pthreads::extra::NativePthreadBarrier::new
> match: core::NativeArray::new
> match: actors>
> match: actors::A
> match: actors::ActorCreature

The `async` added property is actually created lazily when you use it.

> match: actors::Creature::async
> match: actors::ThreadRing::async
> match: actors::A::async
> match: actors::Worker::async
> match: actors::FannkuchRedux::async
> match: actors::ClockAgent::async
> match: actors::Agent::async
> match: actors>
> match: actors
> match: actors::thread_ring::Sys::nb_actors
> match: actors::Future::is_done
> match: actors::ThreadRing::send_token

Actors are not automatically garbage collected, but you have solutions to terminate them
if you need to. For this, you need to use the `async` property of your annotated class :

> match: actors
> match: actors::Proxy::terminate
> match: actors::actors
> match: actors::Actor
> match: actors::A::async
> match: actors::ThreadRing::async
> match: actors::Agent::async
> match: actors::ClockAgent::async
> match: actors::Creature::async
> match: actors::FannkuchRedux::async
> match: actors::Worker::async
> match: actors>
> match: actors::Proxy::wait_termination
> match: actors::Proxy::terminate_now

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

> match: actors::Message
> match: actors::Actor
> match: actors::Mailbox
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::Proxy::terminate
> match: actors::Actor::mailbox
> match: actors::AgentMessagegreet::other
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Proxy::wait_termination
> match: actors::Proxy::terminate_now
> match: actors::Actor::kill
> match: actors::Proxy::kill
> match: actors::ProxyThreadRing::next
> match: actors::ThreadRing::next
> match: actors::SynchronizedCounter::wait
> match: actors>
> match: actors
> match: actors::ShutDownMessage
> match: actors::Proxy::E

For now, there isn't any mecanism to recreate and actor after it was terminated.
Sending messages after terminating it results in unspecified behaviour.

> match: actors::Actor
> match: actors::Message
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: actors>
> match: actors
> match: actors::Proxy::terminate_now
> match: actors::Proxy::wait_termination
> match: actors::Proxy::terminate

## Waiting for all actors to finish processing

> match: actors
> match: actors::actors
> match: actors::Actor
> match: actors>
> match: actors::Proxy::wait_termination
> match: actors::Mailbox::actor

Let's imagine you create a whole bunch of actors and make them do things asynchronously from the main thread.
You don't want your program to exit right after giving work to your actors.
To prevent that, we added a mecanism that waits before all your actors finished all their messages
before quitting.

> match: actors
> match: actors::actors
> match: actors::Actor
> match: actors::Message
> match: actors::ProxyWorker::work
> match: actors::Worker::work
> match: actors::chameneosredux::Sys::work
> match: actors>
> match: actors::Proxy::wait_termination
> match: actors::ShutDownMessage

It's materialized by the `active_actors` property added to `Sys` which is a `ReverseBlockingQueue`.
In short, the `is_empty` method on this list is blocking until the list is effectively empty.
When every actors finished working, and we're sure they won't even send another message to another
actor, `active_actors` is empty.

> match: actors::Actor
> match: actors::actors::Sys::active_actors
> match: actors::Message
> match: core::Sys
> match: pthreads::ReverseBlockingQueue
> match: actors
> match: actors::actors
> match: actors::Actor::working
> match: actors::Proxy::actor
> match: actors::Mailbox::actor
> match: core::Text::is_empty
> match: core::MapRead::is_empty
> match: core::Collection::is_empty
> match: actors::AgentMessagegreet_back::message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors>
> match: actors::Future::join
> match: actors::Future
> match: actors::ThreadRing::next

You can use this property as a mean of synchronisation in some specific cases (for example if you're
using actors for fork/join parallelism instead of concurrency).

> match: actors
> match: actors>examples>
> match: actors::actors
> match: actors::Actor
> match: actors::Future::join
> match: actors>
> match: actors>examples>simple>
> match: actors::Future::is_done
> match: actors::Future::mutex

## Examples

> match: actors>examples>
> match: actors>examples>simple>
> match: actors>examples>fannkuchredux>
> match: actors>examples>mandelbrot>
> match: actors::simple
> match: actors::thread_ring

You can find example of differents small programs implemented with Nit actors in the `examples`
directory. For a really simple example, you can check `examples/simple`.

> match: actors>examples>
> match: actors
> match: actors::simple
> match: actors::actors
> match: actors::Actor
> match: actors>
> match: actors>examples>simple>
> match: actors::Future::is_done

