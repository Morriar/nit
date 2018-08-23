# `libevent` - Low-level wrapper around the libevent library to manage events on file descriptors

* [Features](#Features)
* [`NativeEventBase` - Structure to hold information and state for a Libevent dispatch loop.](#`NativeEventBase`---Structure-to-hold-information-and-state-for-a-Libevent-dispatch-loop.)
* [`Connection` - Spawned to manage a specific connection](#`Connection`---Spawned-to-manage-a-specific-connection)
* [Other features](#Other-features)
* [Authors](#Authors)

For mor information, refer to the libevent documentation at
http://monkey.org/~provos/libevent/doxygen-2.0.1/

## Features

![Diagram for `libevent`](uml-libevent.svg)

### `NativeEventBase` - Structure to hold information and state for a Libevent dispatch loop.

The event_base lies at the center of Libevent; every application will
have one.  It keeps track of all pending and active events, and
notifies your application of the active ones.

Properties:

* `NativeEventBase::dispatch` - Event dispatching loop
* `NativeEventBase::is_valid` - Has `self` been correctly initialized?
* `NativeEventBase::loopexit` - Exit the event loop
* `NativeEventBase::new` - Create a new event_base to use with the rest of Libevent
* `NativeEventBase::reinit` - Reinitialize the event base after a fork

### `Connection` - Spawned to manage a specific connection

TODO, use polls

Properties:

* `Connection::event_callback` - Callback method on events: EOF, user-defined timeout and unrecoverable errors
* `Connection::force_close` - Force closing this connection and freeing `native_buffer_event`
* `Connection::read_callback` - Callback method when data is available to read
* `Connection::write_callback` - Callback method on a write event
* `Connection::write_file` - Write a file to the connection

## Other features

* `ConnectionFactory` - Factory to listen on sockets and create new `Connection`
* `ConnectionListener` - A listener acting on an interface and port, spawns `Connection` on new connections
* `EventCallback` - Receiver of event callbacks
* `InputNativeEvBuffer` - An input buffer
* `NativeBufferEvent` - A buffer event structure, strongly associated to a connection, an input buffer and an output_buffer
* `NativeEvBuffer` - A single buffer
* `NativeEvSignal` - Signal event
* `NativeEvent` - Event, libevent's basic unit of operation
* `OutputNativeEvBuffer` - An output buffer

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
