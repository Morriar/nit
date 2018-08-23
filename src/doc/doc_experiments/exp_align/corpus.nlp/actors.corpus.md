# Nit Actor Model

> match: actors

This group introduces the `actors` module which contains the abstraction of a Nit Actor Model,
based on Celluloid (https://github.com/celluloid/celluloid).

> match: actors
> match: actors::Actor

## What is an actor ?

> match: actors::Actor

An actor is an entity which receives messages and does some kind of computation based on it.
An actor has a mailbox in which it receives its messages, and process them one at a time.

> match: actors::Actor
> match: actors::Actor::mailbox
> match: actors::Mailbox
> match: actors::Message

## `actor` annotation

> match: actors

The `actors` module introduces the annotation `actor` which is to be used on classes.
This annotation transform a normal Nit class into an actor.

> match: actors::Actor
> match: actors::actors

In practice, it adds a new property `async` to the annotated class.
When using `async` on your annotated class, this means that you want your calls to be asynchronous,
executed by the actor.

> match: actors::A::async
> match: actors::Actor
> match: actors::Agent::async
> match: actors::ClockAgent::async
> match: actors::Creature::async
> match: actors::FannkuchRedux::async
> match: actors::ThreadRing::async
> match: actors::Worker::async

For instance, if you call `a.async.foo` and `foo` doesn't have a return value, it will send
a message to the mailbox of the actor attached to `a` which will process it asynchronously.

> match: actors::A
> match: actors::A::foo
> match: actors::Actor
> match: actors::Actor::mailbox
> match: actors::ActorA
> match: actors::Mailbox
> match: actors::Message

On the other hand, if you call `a.async.bar` and `bar` returns an`Int`, it will still send
a message to the actor, but you'll get a `Future[Int]` to be able to retrieve the value.
When using `join` on the future, the calling thread will wait until the value of the future is set.

> match: actors::A
> match: actors::A::bar
> match: actors::Actor
> match: actors::ActorA
> match: actors::Future
> match: actors::Future::set_value
> match: actors::Future::value
> match: actors::Message

## Managing actors

> match: actors
> match: actors::Actor

When you annotate a class with `actor` and create an instance of it with `new`, the actor is not
automatically created (which means you can completely skip the use of the actors if you
don't need them for a specific program).

> match: actors::Actor

The `async` added property is actually created lazily when you use it.

> match: actors::A::async
> match: actors::Agent::async
> match: actors::ClockAgent::async
> match: actors::Creature::async
> match: actors::FannkuchRedux::async
> match: actors::ThreadRing::async
> match: actors::Worker::async

Actors are not automatically garbage collected, but you have solutions to terminate them
if you need to. For this, you need to use the `async` property of your annotated class :

> match: actors::Actor
> match: actors::Agent::async
> match: actors::ClockAgent::async
> match: actors::Creature::async
> match: actors::FannkuchRedux::async
> match: actors::Proxy::terminate
> match: actors::ThreadRing::async
> match: actors::Worker::async

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

> match: actors
> match: actors::Actor
> match: actors::Actor::kill
> match: actors::Proxy::kill
> match: actors::Proxy::terminate
> match: actors::Proxy::terminate_now
> match: actors::Proxy::wait_termination
> match: actors::ShutDownMessage

For now, there isn't any mecanism to recreate and actor after it was terminated.
Sending messages after terminating it results in unspecified behaviour.

> match: actors::Actor
> match: actors::Message
> match: actors::Proxy::terminate

## Waiting for all actors to finish processing

> match: actors::Actor
> match: actors::Proxy::wait_termination

Let's imagine you create a whole bunch of actors and make them do things asynchronously from the main thread.
You don't want your program to exit right after giving work to your actors.
To prevent that, we added a mecanism that waits before all your actors finished all their messages
before quitting.

> match: actors::Actor
> match: actors::Actor::working
> match: actors::Message
> match: actors::Proxy::wait_termination
> match: actors::ShutDownMessage

It's materialized by the `active_actors` property added to `Sys` which is a `ReverseBlockingQueue`.
In short, the `is_empty` method on this list is blocking until the list is effectively empty.
When every actors finished working, and we're sure they won't even send another message to another
actor, `active_actors` is empty.

> match: actors::ReverseBlockingQueue
> match: actors::actors::Sys::active_actors
> match: core::Collection::is_empty

You can use this property as a mean of synchronisation in some specific cases (for example if you're
using actors for fork/join parallelism instead of concurrency).

> match: actors::Actor

## Examples

> match: actors>examples>

You can find example of differents small programs implemented with Nit actors in the `examples`
directory. For a really simple example, you can check `examples/simple`.

> match: actors::actors_simple
> match: actors::actors_simple_simulation
> match: actors::simple
> match: actors::simple_simulation
> match: actors
> match: actors>examples>
> match: actors>examples>simple>
> match: actors>examples>fannkuchredux>
> match: actors>examples>mandelbrot>
> match: actors>examples>agent_simulation>
