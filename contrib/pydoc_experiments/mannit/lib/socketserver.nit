# Generic socket server classes.
# This module tries to capture the various aspects of defining a server:
# For socket-based servers:
# - address family:
# - AF_INET{,6}: IP (Internet Protocol) sockets (default)
# - AF_UNIX: Unix domain sockets
# - others, e.g. AF_DECNET are conceivable (see <socket.h>
# - socket type:
# - SOCK_STREAM (reliable stream, e.g. TCP)
# - SOCK_DGRAM (datagrams, e.g. UDP)
# For request-based servers (including socket-based):
# - client address verification before further looking at the request
# (This is actually a hook for any processing that needs to look
# at the request before anything else, e.g. logging)
# - how to handle multiple requests:
# - synchronous (one request is handled at a time)
# - forking (each request is handled by a new process)
# - threading (each request is handled by a new thread)
# The classes in this module favor the server type that is simplest to
# write: a synchronous TCP/IP server.  This is bad class design, but
# save some typing.  (There's also the issue that a deep class hierarchy
# slows down method lookups.)
# There are five classes in an inheritance diagram, four of which represent
# synchronous servers of four types:
# +------------+
# | BaseServer |
# +------------+
# |
# v
# +-----------+        +------------------+
# | TCPServer |------->| UnixStreamServer |
# +-----------+        +------------------+
# |
# v
# +-----------+        +--------------------+
# | UDPServer |------->| UnixDatagramServer |
# +-----------+        +--------------------+
# Note that UnixDatagramServer derives from UDPServer, not from
# UnixStreamServer -- the only difference between an IP and a Unix
# stream server is the address family, which is simply repeated in both
# unix server classes.
# Forking and threading versions of each type of server can be created
# using the ForkingMixIn and ThreadingMixIn mix-in classes.  For
# instance, a threading UDP server class is created as follows:
# class ThreadingUDPServer(ThreadingMixIn, UDPServer): pass
# The Mix-in class must come first, since it overrides a method defined
# in UDPServer! Setting the various member variables also changes
# the behavior of the underlying server mechanism.
# To implement a service, you must derive a class from
# BaseRequestHandler and redefine its handle() method.  You can then run
# various versions of the service by combining one of the server classes
# with your request handler class.
# The request handler class must be different for datagram or stream
# services.  This can be hidden by using the request handler
# subclasses StreamRequestHandler or DatagramRequestHandler.
# Of course, you still have to use your head!
# For instance, it makes no sense to use a forking server if the service
# contains state in memory that can be modified by requests (since the
# modifications in the child process would never reach the initial state
# kept in the parent process and passed to each child).  In this case,
# you can use a threading server, but you will probably have to use
# locks to avoid two requests that come in nearly simultaneous to apply
# conflicting changes to the server state.
# On the other hand, if you are building e.g. an HTTP server, where all
# data is stored externally (e.g. in the file system), a synchronous
# class will essentially render the service "deaf" while one request is
# being handled -- which may be for a very long time if a client is slow
# to read all the data it has requested.  Here a threading or forking
# server is appropriate.
# In some cases, it may be appropriate to process part of a request
# synchronously, but to finish processing in a forked child depending on
# the request data.  This can be implemented by using a synchronous
# server and doing an explicit fork in the request handler class
# handle() method.
# Another approach to handling multiple simultaneous requests in an
# environment that supports neither threads nor fork (or where these are
# too expensive or inappropriate for the service) is to maintain an
# explicit table of partially finished requests and to use select() to
# decide which request to work on next (or whether to handle a new
# incoming request).  This is particularly important for stream services
# where each client can potentially be connected for a long time (if
# threads or subprocesses cannot be used).
# Future work:
# - Standard classes for Sun RPC (which uses either UDP or TCP)
# - Standard mix-in classes to implement various authentication
# and encryption schemes
# - Standard framework for select-based multiplexing
# XXX Open problems:
# - What to do with out-of-band data?
# BaseServer:
# - split generic "request" functionality out into BaseServer class.
# Copyright (C) 2000  Luke Kenneth Casson Leighton <lkcl@samba.org>
# example: read entries from a SQL database (requires overriding
# get_request() to return a table entry from the database).
# entry is processed by a RequestHandlerClass.
module socketserver

import builtins

class ForkingTCPServer
    super ForkingMixIn
    super TCPServer
    
end

class ForkingUDPServer
    super UDPServer
    super ForkingMixIn
    
end

# Mix-in class to handle each request in a new thread.
class ThreadingMixIn
    
    # Same as in BaseServer but as a thread.
    # In addition, exception handling is done here.
    fun process_request_thread(request, client_address: Object) is abstract
    
    # Start a new thread to process the request.
    fun process_request(request, client_address: Object) is abstract
    
end

# Base class for request handler classes.
# This class is instantiated for each request to be handled.  The
# constructor sets the instance variables request, client_address
# and server, and then calls the handle() method.  To implement a
# specific service, all you need to do is to derive a class which
# defines a handle() method.
# The handle() method can find the request as self.request, the
# client address as self.client_address, and the server (in case it
# needs access to per-server information) as self.server.  Since a
# separate instance is created for each request, the handle() method
# can define arbitrary other instance variariables.
class BaseRequestHandler
    
    fun setup is abstract
    
    fun finish is abstract
    
    fun handle is abstract
    
    init do end
    
end

class ThreadingUDPServer
    super UDPServer
    super ThreadingMixIn
    
end

class UnixDatagramServer
    super UDPServer
    
end

# Base class for various socket-based server classes.
# Defaults to synchronous IP stream (i.e., TCP).
# Methods for the caller:
# - __init__(server_address, RequestHandlerClass, bind_and_activate=True)
# - serve_forever(poll_interval=0.5)
# - shutdown()
# - handle_request()  # if you don't use serve_forever()
# - fileno() -> int   # for select()
# Methods that may be overridden:
# - server_bind()
# - server_activate()
# - get_request() -> request, client_address
# - handle_timeout()
# - verify_request(request, client_address)
# - process_request(request, client_address)
# - shutdown_request(request)
# - close_request(request)
# - handle_error()
# Methods for derived classes:
# - finish_request(request, client_address)
# Class variables that may be overridden by derived classes or
# instances:
# - timeout
# - address_family
# - socket_type
# - request_queue_size (only for stream sockets)
# - allow_reuse_address
# Instance variables:
# - server_address
# - RequestHandlerClass
# - socket
class TCPServer
    super BaseServer
    
    # Called by constructor to activate the server.
    # May be overridden.
    redef fun server_activate is abstract
    
    # Return socket file number.
    # Interface required by select().
    fun fileno is abstract
    
    # Called to clean-up the server.
    # May be overridden.
    redef fun server_close is abstract
    
    # Called to clean up an individual request.
    redef fun close_request(request) is abstract
    
    # Called to shutdown and close an individual request.
    redef fun shutdown_request(request) is abstract
    
    # Get the request and client address from the socket.
    # May be overridden.
    fun get_request is abstract
    
    # Constructor.  May be extended, do not override.
    init do end
    
    # Called by constructor to bind the socket.
    # May be overridden.
    fun server_bind is abstract
    
end

# Define self.rfile and self.wfile for datagram sockets.
class DatagramRequestHandler
    super BaseRequestHandler
    
    redef fun setup is abstract
    
    redef fun finish is abstract
    
end

class ThreadingUnixDatagramServer
    super UnixDatagramServer
    super ThreadingMixIn
    
end

redef class Sys
    
end

# Mix-in class to handle each request in a new process.
class ForkingMixIn
    
    # Internal routine to wait for children that have exited.
    fun collect_children is abstract
    
    # Wait for zombies after self.timeout seconds of inactivity.
    # May be extended, do not override.
    fun handle_timeout is abstract
    
    # Fork a new subprocess to process the request.
    fun process_request(request, client_address: Object) is abstract
    
end

class ThreadingUnixStreamServer
    super ThreadingMixIn
    super UnixStreamServer
    
end

# Define self.rfile and self.wfile for stream sockets.
class StreamRequestHandler
    super BaseRequestHandler
    
    redef fun setup is abstract
    
    redef fun finish is abstract
    
end

# UDP server class.
class UDPServer
    super TCPServer
    
    redef fun server_activate is abstract
    
    redef fun shutdown_request(request) is abstract
    
    redef fun get_request is abstract
    
    redef fun close_request(request) is abstract
    
end

class UnixStreamServer
    super TCPServer
    
end

# Base class for server classes.
# Methods for the caller:
# - __init__(server_address, RequestHandlerClass)
# - serve_forever(poll_interval=0.5)
# - shutdown()
# - handle_request()  # if you do not use serve_forever()
# - fileno() -> int   # for select()
# Methods that may be overridden:
# - server_bind()
# - server_activate()
# - get_request() -> request, client_address
# - handle_timeout()
# - verify_request(request, client_address)
# - server_close()
# - process_request(request, client_address)
# - shutdown_request(request)
# - close_request(request)
# - handle_error()
# Methods for derived classes:
# - finish_request(request, client_address)
# Class variables that may be overridden by derived classes or
# instances:
# - timeout
# - address_family
# - socket_type
# - allow_reuse_address
# Instance variables:
# - RequestHandlerClass
# - socket
class BaseServer
    
    # Called by constructor to activate the server.
    # May be overridden.
    fun server_activate is abstract
    
    # Handle one request, possibly blocking.
    # Respects self.timeout.
    fun handle_request is abstract
    
    # Handle one request at a time until shutdown.
    # Polls for shutdown every poll_interval seconds. Ignores
    # self.timeout. If you need to do periodic tasks, do them in
    # another thread.
    fun serve_forever(poll_interval: Object) is abstract
    
    # Call finish_request.
    # Overridden by ForkingMixIn and ThreadingMixIn.
    fun process_request(request, client_address: Object) is abstract
    
    # Verify the request.  May be overridden.
    # Return True if we should proceed with this request.
    fun verify_request(request, client_address: Object) is abstract
    
    # Called if no new request arrives within self.timeout.
    # Overridden by ForkingMixIn.
    fun handle_timeout is abstract
    
    # Handle one request, without blocking.
    # I assume that select.select has returned that the socket is
    # readable before this function was called, so there should be
    # no risk of blocking in get_request().
    private fun private_handle_request_noblock is abstract
    
    # Called to clean-up the server.
    # May be overridden.
    fun server_close is abstract
    
    # Called to clean up an individual request.
    fun close_request(request: Object) is abstract
    
    # Called to shutdown and close an individual request.
    fun shutdown_request(request: Object) is abstract
    
    # Constructor.  May be extended, do not override.
    init do end
    
    # Finish one request by instantiating RequestHandlerClass.
    fun finish_request(request, client_address: Object) is abstract
    
    # Stops the serve_forever loop.
    # Blocks until the loop has finished. This must be called while
    # serve_forever() is running in another thread, or it will
    # deadlock.
    fun shutdown is abstract
    
    # Handle an error gracefully.  May be overridden.
    # The default is to print a traceback and continue.
    fun handle_error(request, client_address: Object) is abstract
    
end

class ThreadingTCPServer
    super ThreadingMixIn
    super TCPServer
    
end

