# Nit Actor Model

> match: actors::Actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

This group introduces the `actors` module which contains the abstraction of a Nit Actor Model,
based on Celluloid (https://github.com/celluloid/celluloid).

> match: actors::Actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

## What is an actor ?

> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor

An actor is an entity which receives messages and does some kind of computation based on it.
An actor has a mailbox in which it receives its messages, and process them one at a time.

> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Actor::mailbox
> match: actors::Mailbox
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: core::Process
> match: core::time

## `actor` annotation

The `actors` module introduces the annotation `actor` which is to be used on classes.
This annotation transform a normal Nit class into an actor.

> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor

In practice, it adds a new property `async` to the annotated class.
When using `async` on your annotated class, this means that you want your calls to be asynchronous,
executed by the actor.

> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor

For instance, if you call `a.async.foo` and `foo` doesn't have a return value, it will send
a message to the mailbox of the actor attached to `a` which will process it asynchronously.

> match: actors::Actor::instance
> match: actors::Future::value
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::Actor::mailbox
> match: actors::Mailbox
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: core::Process

On the other hand, if you call `a.async.bar` and `bar` returns an`Int`, it will still send
a message to the actor, but you'll get a `Future[Int]` to be able to retrieve the value.
When using `join` on the future, the calling thread will wait until the value of the future is set.

> match: actors::simple_simulation::Agent::others
> match: actors::ProxyAgent::others
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Future::value
> match: actors::Future
> match: pthreads::Thread
> match: actors::SynchronizedCounter::wait
> match: actors::Future::value
> match: actors::Future
> match: core::Set

## Managing actors

> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

When you annotate a class with `actor` and create an instance of it with `new`, the actor is not
automatically created (which means you can completely skip the use of the actors if you
don't need them for a specific program).

> match: actors::Actor::instance
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

The `async` added property is actually created lazily when you use it.

Actors are not automatically garbage collected, but you have solutions to terminate them
if you need to. For this, you need to use the `async` property of your annotated class :

> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::Proxy::terminate

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

> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::simple_simulation::Agent::others
> match: actors::ProxyAgent::others
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Actor::mailbox
> match: actors::Mailbox
> match: actors::simple_simulation::Agent::others
> match: actors::ProxyAgent::others
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: core::time
> match: actors::Creature::place
> match: actors::ProxyCreature::place
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::ThreadRing::next
> match: actors::ProxyThreadRing::next
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Actor::mailbox
> match: actors::Mailbox
> match: actors::SynchronizedCounter::wait
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Proxy::terminate
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: core::native
> match: pthreads
> match: pthreads>
> match: pthreads::pthreads
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor

For now, there isn't any mecanism to recreate and actor after it was terminated.
Sending messages after terminating it results in unspecified behaviour.

> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message

## Waiting for all actors to finish processing

> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor

Let's imagine you create a whole bunch of actors and make them do things asynchronously from the main thread.
You don't want your program to exit right after giving work to your actors.
To prevent that, we added a mecanism that waits before all your actors finished all their messages
before quitting.

> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: pthreads::Thread
> match: actors::chameneosredux::Sys::work
> match: actors::Worker::work
> match: actors::ProxyWorker::work
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::SynchronizedCounter::wait
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::Message
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message

It's materialized by the `active_actors` property added to `Sys` which is a `ReverseBlockingQueue`.
In short, the `is_empty` method on this list is blocking until the list is effectively empty.
When every actors finished working, and we're sure they won't even send another message to another
actor, `active_actors` is empty.

> match: core::list
> match: core::List
> match: core::list
> match: core::List
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::Actor::working
> match: core::re
> match: actors::ThreadRingMessagesend_token::message
> match: actors::AgentMessagegreet::message
> match: actors::AgentMessagegreet_back::message
> match: actors::Message
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor

You can use this property as a mean of synchronisation in some specific cases (for example if you're
using actors for fork/join parallelism instead of concurrency).

> match: actors::A
> match: actors>examples>
> match: pthreads>examples>
> match: core::re
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors::Future::join

## Examples

> match: actors>examples>
> match: pthreads>examples>

You can find example of differents small programs implemented with Nit actors in the `examples`
directory. For a really simple example, you can check `examples/simple`.

> match: actors>examples>
> match: pthreads>examples>
> match: actors
> match: actors>
> match: actors::actors
> match: actors::Actor
> match: actors::Mailbox::actor
> match: actors::Proxy::actor
> match: actors>examples>simple>
> match: actors::simple
> match: actors>examples>
> match: pthreads>examples>

