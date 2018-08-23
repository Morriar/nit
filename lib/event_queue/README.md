# `event_queue` - Register, update and discard events in a timeline

* [Features](#Features)
* [`EventInfo` - Information and management about a registered event](#`EventInfo`---Information-and-management-about-a-registered-event)
* [Other features](#Other-features)
* [Authors](#Authors)

A queue of event is used to register objects associated with a start time and
a duration and to return them when they are active.

The main class is `EventQueue`. It controls a timeline and register events.
Event can be any kind of object, usually specific time-related domain objects should be used.

The auxiliary class `EventInfo` registers and control information about each event.
It can also be used for fluent programming and create new events relatively to existing ones.

## Basic usage

The event queue is created empty, and can handle any kind of data.

~~~
var eq = new EventQueue[String]
~~~

To register an event, add it with a start time and a duration.
Note that the time is relative to the current time frame in the queue.

~~~
eq.add("1..2", 1.0, 1.0)
eq.add("2..10", 2.0, 8.0)
~~~

To register instantaneous event, use a 0.0 duration (or no duration)

~~~
eq.add("1.5", 1.5)
~~~

To get active events, use `update` with a time difference.
This returns a sequence of currently active events.

~~~
var es = eq.update(1.0) # What is active after 1 unit of time?
assert es.length == 1 # only "1..2" is active
~~~

Each `update` increments the time frame of the queue and returns an updated information about active events.

~~~
es = eq.update(1.0) # What is active after an other unit of time?
assert eq.time == 2.0

assert es.length == 3 # there is now 3 active events
~~~

Results of the `update` method contains a lot of information.

Obviously the original events:

~~~
assert es[0].event == "1..2"
assert es[1].event == "1.5"
assert es[2].event == "2..10"
~~~

The time since the begin of the event:

~~~
assert es[0].time == 1.0 # Started 1 unit of time ago
assert es[1].time == 0.5
assert es[2].time == 0.0 # Started just now
~~~

The completion ratio of the event until its termination:

~~~
assert es[0].completion == 1.0 # has just finished
assert es[1].completion == inf # completion ratio does not make sense for instant events
assert es[2].completion == 0.0 # has just started
~~~

And a lot of other things, just look at `EventInfo`.

## Expiration and control

When `update` returns events, `occurrences` count the number of time an
event is returned by update. It can be used for instance to see if it
is the first time that a specific event is active.

~~~
assert es[0].occurrences == 2 # it is the second time we see it
assert es[1].occurrences == 1 # instant one
assert es[2].occurrences == 1 # first time we see it
~~~

The duration is used to automatically manage the expiration of the event.

Note that if a event expires during an `update`, then it is still returned by the function.
This is the way to handle instant events and newly expired events.

To distinguish them `has_expired` can be used.

~~~
assert es[0].has_expired == true  # just finished
assert es[1].has_expired == true  # instant one
assert es[2].has_expired == false # sill active
~~~

On the next `update`, the already expired events are not returned again.

~~~
es = eq.update(1.0) # What is active after an other unit of time?
assert eq.time == 3.0
assert es.length == 1
assert es.first.event == "2..10" # No more "1..2" or "1.5"
~~~

The `expire` method can force the expiration of an event.

~~~
es.first.expire
es = eq.update(1.0)
assert es.is_empty # Sorry, "2..10" was expired
~~~

## Fluent programming

The `add` method (and its derivates) returns a `EventInfo` object that can be used to have
information about the newly registered event but also to chain the creation of time-related events.

For instance, the following example registers 4 events, each one relative to the previous one:

~~~
eq = new EventQueue[String]
eq.add("e1", 10.0, 5.0).
   add_after("e2", 2.0, 5.0).
   add_sync("e3", 2.0, 5.0).
   add_before("e4", 2.0, 5.0)
~~~

This can be decomposed as:

~~~
eq = new EventQueue[String]
var e1 = eq.add("e1", 10.0, 5.0)
assert e1.start == 10.0 # First event starts at 10

var e2 = e1.add_after("e2", 2.0, 5.0) # starts 2 units of time after the end of e1
assert e2.start == 17.0 # So starts at 10 + 5 + 2

var e3 = e2.add_sync("e3", 2.0, 5.0) # starts 2 units of time after the begin of e2
assert e3.start == 19.0 # So starts at 17 + 2

var e4 = e3.add_before("e4", 2.0, 5.0) # ends 2 units of time before the start of e3
assert e4.start == 12.0 # So starts at 19 - 2 - 5
~~~

## Features

### `EventInfo` - Information and management about a registered event

It allows to retrieve static and dynamic information about an event.
It also allows to register other time-related events with a fluent programming way.

Properties:

* `EventInfo::add_after` - Register an event that starts after the end of the current one.
* `EventInfo::add_before` - Register an event that finishes before the begin of current one.
* `EventInfo::add_sync` - Register an event that starts with the current one.
* `EventInfo::expire` - Force the event to expire.

## Other features

* `EventQueue` - Queuing and management of arbitrary events in a timeline

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
