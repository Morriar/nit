# This module provides socket operations and some related functions.
# On Unix, it supports IP (Internet Protocol) and Unix domain sockets.
# On other systems, it only supports IP. Functions specific for a
# socket are available as methods of the socket object.
# Functions:
# socket() -- create a new socket object
# socketpair() -- create a pair of new socket objects [*]
# fromfd() -- create a socket object from an open file descriptor [*]
# gethostname() -- return the current hostname
# gethostbyname() -- map a hostname to its IP number
# gethostbyaddr() -- map an IP number or hostname to DNS info
# getservbyname() -- map a service name and a protocol name to a port number
# getprotobyname() -- map a protocol name (e.g. 'tcp') to a number
# ntohs(), ntohl() -- convert 16, 32 bit int from network to host byte order
# htons(), htonl() -- convert 16, 32 bit int from host to network byte order
# inet_aton() -- convert IP addr string (123.45.67.89) to 32-bit packed format
# inet_ntoa() -- convert 32-bit packed format IP to string (123.45.67.89)
# ssl() -- secure socket layer support (only available if configured)
# socket.getdefaulttimeout() -- get the default timeout value
# socket.setdefaulttimeout() -- set the default timeout value
# create_connection() -- connects to an address, with an optional timeout and
# optional source address.
# [*] not available on all platforms!
# Special objects:
# SocketType -- type object for socket objects
# error -- exception raised for I/O errors
# has_ipv6 -- boolean value indicating if IPv6 is supported
# Integer constants:
# AF_INET, AF_UNIX -- socket domains (first argument to socket() call)
# SOCK_STREAM, SOCK_DGRAM, SOCK_RAW -- socket types (second argument)
# Many other constants may be defined; these may be used in calls to
# the setsockopt() and getsockopt() methods.
module py_socket

import builtins

# instancemethod(function, instance, class)
# Create an instance method object.
redef class Instancemethod
    
end

# partial(func, *args, **keywords) - new function with partial application
# of the given arguments and keywords.
class Partial
    
end

# socket([family[, type[, proto]]]) -> socket object
# Open a socket of the given type.  The family argument specifies the
# address family; it defaults to AF_INET.  The type argument specifies
# whether this is a stream (SOCK_STREAM, this is the default)
# or datagram (SOCK_DGRAM) socket.  The protocol argument defaults to 0,
# specifying the default protocol.  Keyword arguments are accepted.
# A socket object represents one endpoint of a network connection.
# Methods of socket objects (keyword arguments not allowed):
# accept() -- accept a connection, returning new socket and client address
# bind(addr) -- bind the socket to a local address
# close() -- close the socket
# connect(addr) -- connect the socket to a remote address
# connect_ex(addr) -- connect, return an error code instead of an exception
# dup() -- return a new socket object identical to the current one [*]
# fileno() -- return underlying file descriptor
# getpeername() -- return remote address [*]
# getsockname() -- return local address
# getsockopt(level, optname[, buflen]) -- get socket options
# gettimeout() -- return timeout or None
# listen(n) -- start listening for incoming connections
# makefile([mode, [bufsize]]) -- return a file object for the socket [*]
# recv(buflen[, flags]) -- receive data
# recv_into(buffer[, nbytes[, flags]]) -- receive data (into a buffer)
# recvfrom(buflen[, flags]) -- receive data and sender's address
# recvfrom_into(buffer[, nbytes, [, flags])
# -- receive data and sender's address (into a buffer)
# sendall(data[, flags]) -- send all data
# send(data[, flags]) -- send data, may not send all of it
# sendto(data[, flags], addr) -- send data to a given address
# setblocking(0 | 1) -- set or clear the blocking I/O flag
# setsockopt(level, optname, value) -- set socket options
# settimeout(None | float) -- set or clear the timeout
# shutdown(how) -- shut down traffic in one or both directions
# [*] not available on all platforms!
class Socket
    
end

class Gaierror
    super Error
    
end

redef class Sys
    
end

class Timeout
    super Error
    
end

redef class Error
    
end

class SSLError
    super Error
    
end

class Herror
    super Error
    
end

# Faux file object attached to a socket object.
private class Fileobject
    
    fun fileno is abstract
    
    fun writelines(list: Object) is abstract
    
    fun read(size: Object) is abstract
    
    fun readlines(sizehint: Object) is abstract
    
    fun iter is abstract
    
    fun next is abstract
    
    fun write(data: Object) is abstract
    
    private fun private_getclosed is abstract
    
    init do end
    
    fun del is abstract
    
    fun flush is abstract
    
    fun close is abstract
    
    fun readline(size: Object) is abstract
    
end

# socket([family[, type[, proto]]]) -> socket object
# Open a socket of the given type.  The family argument specifies the
# address family; it defaults to AF_INET.  The type argument specifies
# whether this is a stream (SOCK_STREAM, this is the default)
# or datagram (SOCK_DGRAM) socket.  The protocol argument defaults to 0,
# specifying the default protocol.  Keyword arguments are accepted.
# A socket object represents one endpoint of a network connection.
# Methods of socket objects (keyword arguments not allowed):
# accept() -- accept a connection, returning new socket and client address
# bind(addr) -- bind the socket to a local address
# close() -- close the socket
# connect(addr) -- connect the socket to a remote address
# connect_ex(addr) -- connect, return an error code instead of an exception
# dup() -- return a new socket object identical to the current one [*]
# fileno() -- return underlying file descriptor
# getpeername() -- return remote address [*]
# getsockname() -- return local address
# getsockopt(level, optname[, buflen]) -- get socket options
# gettimeout() -- return timeout or None
# listen(n) -- start listening for incoming connections
# makefile([mode, [bufsize]]) -- return a file object for the socket [*]
# recv(buflen[, flags]) -- receive data
# recv_into(buffer[, nbytes[, flags]]) -- receive data (into a buffer)
# recvfrom(buflen[, flags]) -- receive data and sender's address
# recvfrom_into(buffer[, nbytes, [, flags])
# -- receive data and sender's address (into a buffer)
# sendall(data[, flags]) -- send all data
# send(data[, flags]) -- send data, may not send all of it
# sendto(data[, flags], addr) -- send data to a given address
# setblocking(0 | 1) -- set or clear the blocking I/O flag
# setsockopt(level, optname, value) -- set socket options
# settimeout(None | float) -- set or clear the timeout
# shutdown(how) -- shut down traffic in one or both directions
# [*] not available on all platforms!
private class Socketobject
    
    # setsockopt(level, option, value)
    # Set a socket option.  See the Unix manual for level and option.
    # The value argument can either be an integer or a string.
    fun setsockopt is abstract
    
    # settimeout(timeout)
    # Set a timeout on socket operations.  'timeout' can be a float,
    # giving in seconds, or None.  Setting a timeout of None disables
    # the timeout feature and is equivalent to setblocking(1).
    # Setting a timeout of zero is the same as setblocking(0).
    fun settimeout is abstract
    
    # shutdown(flag)
    # Shut down the reading side of the socket (flag == SHUT_RD), the writing side
    # of the socket (flag == SHUT_WR), or both ends (flag == SHUT_RDWR).
    fun shutdown is abstract
    
    # gettimeout() -> timeout
    # Returns the timeout in seconds (float) associated with socket
    # operations. A timeout of None indicates that timeouts on socket
    # operations are disabled.
    fun gettimeout is abstract
    
    # connect_ex(address) -> errno
    # This is like connect(address), but returns an error code (the errno value)
    # instead of raising an exception when an error occurs.
    fun connect_ex is abstract
    
    # bind(address)
    # Bind the socket to a local address.  For IP sockets, the address is a
    # pair (host, port); the host must refer to the local host. For raw packet
    # sockets the address is a tuple (ifname, proto [,pkttype [,hatype]])
    fun bind is abstract
    
    # fileno() -> integer
    # Return the integer file descriptor of the socket.
    fun fileno is abstract
    
    # makefile([mode[, bufsize]]) -> file object
    # Return a regular file object corresponding to the socket.  The mode
    # and bufsize arguments are as for the built-in open() function.
    fun makefile(bufsize, mode: Object) is abstract
    
    # accept() -> (socket object, address info)
    # Wait for an incoming connection.  Return a new socket representing the
    # connection, and the address of the client.  For IP sockets, the address
    # info is a pair (hostaddr, port).
    fun accept is abstract
    
    # sendall(data[, flags])
    # Send a data string to the socket.  For the optional flags
    # argument, see the Unix manual.  This calls send() repeatedly
    # until all data is sent.  If an error occurs, it's impossible
    # to tell how much data has been sent.
    fun sendall is abstract
    
    init do end
    
    # connect(address)
    # Connect the socket to a remote address.  For IP sockets, the address
    # is a pair (host, port).
    fun connect is abstract
    
    # getsockname() -> address info
    # Return the address of the local endpoint.  For IP sockets, the address
    # info is a pair (hostaddr, port).
    fun getsockname is abstract
    
    # dup() -> socket object
    # Return a new socket object connected to the same system resource.
    fun dup is abstract
    
    # close()
    # Close the socket.  It cannot be used after this call.
    fun close(delegate_methods, setattr, closedsocket: Object) is abstract
    
    # getpeername() -> address info
    # Return the address of the remote endpoint.  For IP sockets, the address
    # info is a pair (hostaddr, port).
    fun getpeername is abstract
    
    # listen(backlog)
    # Enable a server to accept connections.  The backlog argument must be at
    # least 0 (if it is lower, it is set to 0); it specifies the number of
    # unaccepted connections that the system will allow before refusing new
    # connections.
    fun listen is abstract
    
    # setblocking(flag)
    # Set the socket to blocking (flag is true) or non-blocking (false).
    # setblocking(True) is equivalent to settimeout(None);
    # setblocking(False) is equivalent to settimeout(0.0).
    fun setblocking is abstract
    
    # getsockopt(level, option[, buffersize]) -> value
    # Get a socket option.  See the Unix manual for level and option.
    # If a nonzero buffersize argument is given, the return value is a
    # string of that length; otherwise it is an integer.
    fun getsockopt is abstract
    
end

private class Closedsocket
    
    private fun private_dummy is abstract
    
end

