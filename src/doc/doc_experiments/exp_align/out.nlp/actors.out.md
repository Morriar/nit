# Nit Actor Model

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors>examples>agent_simulation>
> match: actors::ThreadRing
> match: actors::ShutDownMessage

This group introduces the `actors` module which contains the abstraction of a Nit Actor Model,
based on Celluloid (https://github.com/celluloid/celluloid).

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors>
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::Proxy
> match: actors::actors_agent_simulation
> match: actors::A
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors>examples>simple>
> match: actors::actors
> match: actors::ThreadRing
> match: actors::ShutDownMessage
> match: actors>examples>agent_simulation>
> match: actors::simple
> match: actors::agent_simulation

## What is an actor ?

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::actors_simple
> match: actors
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing
> match: actors::ShutDownMessage

An actor is an entity which receives messages and does some kind of computation based on it.
An actor has a mailbox in which it receives its messages, and process them one at a time.

> match: actors::Message
> match: actors::Actor
> match: actors::Mailbox
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::MessageA
> match: actors::MessageAgent
> match: actors::MessageCreature
> match: actors::ActorA
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::ShutDownMessage
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::ThreadRing
> match: actors::actors_agent_simulation
> match: actors::A
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ClockAgent

## `actor` annotation

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing
> match: actors::ShutDownMessage

The `actors` module introduces the annotation `actor` which is to be used on classes.
This annotation transform a normal Nit class into an actor.

> match: actors::Actor
> match: actors::ActorClockAgent
> match: actors::ActorAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::A
> match: actors::Proxy
> match: actors::actors_agent_simulation
> match: actors>examples>simple>
> match: actors::actors_chameneosredux
> match: actors::ThreadRing
> match: actors::actors_fannkuchredux
> match: actors::ShutDownMessage
> match: actors::actors
> match: actors::simple
> match: actors>examples>agent_simulation>
> match: actors::agent_simulation

In practice, it adds a new property `async` to the annotated class.
When using `async` on your annotated class, this means that you want your calls to be asynchronous,
executed by the actor.

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing
> match: actors::ShutDownMessage

For instance, if you call `a.async.foo` and `foo` doesn't have a return value, it will send
a message to the mailbox of the actor attached to `a` which will process it asynchronously.

> match: actors::Mailbox
> match: actors::Actor
> match: actors::Message
> match: actors::ActorAgent
> match: actors::MessageAgent
> match: actors::ActorClockAgent
> match: actors::MessageA
> match: actors::ActorA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::ShutDownMessage
> match: actors
> match: actors::actors_simple
> match: actors::Future
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::ThreadRing
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::SynchronizedCounter

On the other hand, if you call `a.async.bar` and `bar` returns an`Int`, it will still send
a message to the actor, but you'll get a `Future[Int]` to be able to retrieve the value.
When using `join` on the future, the calling thread will wait until the value of the future is set.

> match: actors::Future
> match: actors::Actor
> match: actors::Message
> match: actors::ActorThreadRing
> match: actors::MessageThreadRing
> match: actors::ActorAgent
> match: actors::MessageAgent
> match: actors::ActorClockAgent
> match: actors
> match: actors::MessageA
> match: actors::ActorA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::MessageFannkuchRedux
> match: actors>examples>thread-ring>
> match: actors::ActorFannkuchRedux
> match: actors::ThreadRingMessagenext
> match: actors::ThreadRingMessagesend_token
> match: actors::ShutDownMessage
> match: actors::actors_thread_ring
> match: actors::actors_simple
> match: actors::thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::ThreadRing
> match: actors::SynchronizedCounter
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ClockAgent

## Managing actors

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::actors_simple
> match: actors
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing
> match: actors::ShutDownMessage

When you annotate a class with `actor` and create an instance of it with `new`, the actor is not
automatically created (which means you can completely skip the use of the actors if you
don't need them for a specific program).

> match: actors::Actor
> match: actors::ActorClockAgent
> match: actors::ActorAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::A
> match: actors::Proxy
> match: actors::ShutDownMessage
> match: actors::actors_agent_simulation
> match: actors>examples>simple>
> match: actors::actors_chameneosredux
> match: actors::ThreadRing
> match: actors::actors_fannkuchredux
> match: actors::ClockAgent

The `async` added property is actually created lazily when you use it.

> match: actors::Agent::async
> match: actors::Creature::async
> match: actors::Worker::async
> match: actors::ClockAgent::async
> match: actors::FannkuchRedux::async
> match: actors::ThreadRing::async
> match: actors::A::async
> match: actors
> match: actors::thread_ring::Sys::nb_actors

Actors are not automatically garbage collected, but you have solutions to terminate them
if you need to. For this, you need to use the `async` property of your annotated class :

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::ClockAgent
> match: actors::ShutDownMessage
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing

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
> match: actors
> match: actors::ShutDownMessage
> match: actors::MessageA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::MessageAgent
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::ClockAgentMessagenb_finished
> match: actors::actors_simple
> match: actors::ThreadRing
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::A
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::Future
> match: actors::ClockAgent
> match: actors::Message
> match: actors::Mailbox
> match: actors::Actor
> match: actors::MessageA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::ShutDownMessage
> match: actors::MessageAgent
> match: actors::MeetingPlace
> match: actors
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::ThreadRing
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::Future
> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::ShutDownMessage
> match: actors::actors_fannkuchredux
> match: actors::ClockAgent
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::SynchronizedCounter
> match: actors::ThreadRing
> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::ThreadRing
> match: actors::actors_agent_simulation
> match: actors::A
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ShutDownMessage
> match: actors::Future

For now, there isn't any mecanism to recreate and actor after it was terminated.
Sending messages after terminating it results in unspecified behaviour.

> match: actors::Actor
> match: actors::Message
> match: actors::ActorAgent
> match: actors::MessageAgent
> match: actors::ActorClockAgent
> match: actors::MessageA
> match: actors::ActorA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::MessageClockAgent
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::ShutDownMessage
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::ClockAgent
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::ThreadRing

## Waiting for all actors to finish processing

> match: actors::Actor
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ClockAgentMessagenb_finished
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::SynchronizedCounter
> match: actors::ThreadRing
> match: actors::ClockAgent
> match: actors::ShutDownMessage

Let's imagine you create a whole bunch of actors and make them do things asynchronously from the main thread.
You don't want your program to exit right after giving work to your actors.
To prevent that, we added a mecanism that waits before all your actors finished all their messages
before quitting.

> match: actors::Actor
> match: actors::Message
> match: actors::ActorThreadRing
> match: actors::MessageThreadRing
> match: actors::ActorClockAgent
> match: actors::ActorAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors
> match: actors::MessageAgent
> match: actors::ShutDownMessage
> match: actors::MessageA
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::ClockAgentMessagenb_finished
> match: actors::MessageClockAgent
> match: actors::MessageFannkuchRedux
> match: actors>examples>thread-ring>
> match: actors::ThreadRingMessagenext
> match: actors::ThreadRingMessagesend_token
> match: actors::actors_thread_ring
> match: actors::actors_simple
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::thread_ring
> match: actors::A
> match: actors::Proxy
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors>examples>simple>
> match: actors::actors_fannkuchredux
> match: actors::ThreadRing
> match: actors::SynchronizedCounter
> match: actors::ClockAgent
> match: actors::Future
> match: actors>examples>agent_simulation>
> match: actors::simple_simulation

It's materialized by the `active_actors` property added to `Sys` which is a `ReverseBlockingQueue`.
In short, the `is_empty` method on this list is blocking until the list is effectively empty.
When every actors finished working, and we're sure they won't even send another message to another
actor, `active_actors` is empty.

> match: actors::Actor
> match: actors::Message
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::MessageAgent
> match: actors::MessageA
> match: actors::ShutDownMessage
> match: actors::MessageCreature
> match: actors::MessageWorker
> match: actors::ClockAgentMessagenb_finished
> match: actors::MessageClockAgent
> match: actors::MessageFannkuchRedux
> match: actors::MessageThreadRing
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::ThreadRing
> match: actors::actors_agent_simulation
> match: actors::A
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::Proxy
> match: actors>examples>simple>
> match: actors::Future
> match: actors::ClockAgent

You can use this property as a mean of synchronisation in some specific cases (for example if you're
using actors for fork/join parallelism instead of concurrency).

> match: actors::Actor
> match: actors>examples>
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors
> match: actors::actors_simple
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors::actors_simple_simulation
> match: actors::actors_agent_simulation
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors>examples>simple>
> match: actors::A
> match: actors::Proxy
> match: actors::ThreadRing
> match: actors::ShutDownMessage
> match: actors>examples>fannkuchredux>
> match: actors>examples>mandelbrot>
> match: actors::thread_ring
> match: actors::chameneosredux

## Examples

> match: actors>examples>
> match: actors>examples>simple>
> match: actors>examples>fannkuchredux>
> match: actors>examples>mandelbrot>
> match: actors
> match: actors::thread_ring
> match: actors::chameneosredux

You can find example of differents small programs implemented with Nit actors in the `examples`
directory. For a really simple example, you can check `examples/simple`.

> match: actors>examples>simple>
> match: actors::Actor
> match: actors>examples>
> match: actors::ActorAgent
> match: actors::ActorClockAgent
> match: actors::ActorA
> match: actors::ActorCreature
> match: actors::ActorWorker
> match: actors::ActorFannkuchRedux
> match: actors::ActorThreadRing
> match: actors::actors_simple
> match: actors::actors_simple_simulation
> match: actors
> match: actors::simple_simulation
> match: actors::actors_thread_ring
> match: actors::actors_mandelbrot
> match: actors>examples>fannkuchredux>
> match: actors::actors_agent_simulation
> match: actors>examples>mandelbrot>
> match: actors::actors_chameneosredux
> match: actors::actors_fannkuchredux
> match: actors::A
> match: actors::Mailbox
> match: actors::Proxy
> match: actors::thread_ring
> match: actors>examples>agent_simulation>
> match: actors::ThreadRing
> match: actors::ShutDownMessage
> match: actors::chameneosredux

