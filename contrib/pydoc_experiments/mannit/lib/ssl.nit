# This module provides some more Pythonic support for SSL.
# Object types:
# SSLSocket -- subtype of socket.socket which does SSL over the socket
# Exceptions:
# SSLError -- exception raised for I/O errors
# Functions:
# cert_time_to_seconds -- convert time string used for certificate
# notBefore and notAfter functions to integer
# seconds past the Epoch (the time values
# returned from time.time())
# fetch_server_certificate (HOST, PORT) -- fetch the certificate provided
# by the server running on HOST at port PORT.  No
# validation of the certificate is performed.
# Integer constants:
# SSL_ERROR_ZERO_RETURN
# SSL_ERROR_WANT_READ
# SSL_ERROR_WANT_WRITE
# SSL_ERROR_WANT_X509_LOOKUP
# SSL_ERROR_SYSCALL
# SSL_ERROR_SSL
# SSL_ERROR_WANT_CONNECT
# SSL_ERROR_EOF
# SSL_ERROR_INVALID_ERROR_CODE
# The following group define certificate requirements that one side is
# allowing/requiring from the other side:
# CERT_NONE - no certificates from the other side are required (or will
# be looked at if provided)
# CERT_OPTIONAL - certificates are not required, but if provided will be
# validated, and if validation fails, the connection will
# also fail
# CERT_REQUIRED - certificates are required, and will be validated, and
# if validation fails, the connection will also fail
# The following constants identify various SSL protocol variants:
# PROTOCOL_SSLv2
# PROTOCOL_SSLv3
# PROTOCOL_SSLv23
# PROTOCOL_TLSv1
module ssl

import builtins

class CertificateError
    super ValueError
    
end

redef class Sys
    
end

# This class implements a subtype of socket.socket that wraps
# the underlying OS socket in an SSL context when necessary, and
# provides read and write methods over that channel.
class SSLSocket
    super Socketobject
    
    # Perform a TLS/SSL handshake.
    fun do_handshake is abstract
    
    # Accepts a new connection from a remote client, and returns
    # a tuple containing that new connection wrapped with a server-side
    # SSL channel, and the address of the remote client.
    redef fun accept is abstract
    
    # Connects to remote ADDR, and then wraps the connection in
    # an SSL channel.
    redef fun connect is abstract
    
    redef fun shutdown is abstract
    
    redef fun close(delegate_methods, setattr, closedsocket) is abstract
    
    fun recvfrom_into(buffer, flags, nbytes: Object) is abstract
    
    # Connects to remote ADDR, and then wraps the connection in
    # an SSL channel.
    redef fun connect_ex is abstract
    
    # Make and return a file-like object that
    # works with the SSL connection.  Just use the code
    # from the socket module.
    redef fun makefile(bufsize, mode) is abstract
    
    # Returns a formatted version of the data in the
    # certificate provided by the other end of the SSL channel.
    # Return None if no certificate was provided, {} if a
    # certificate was provided, but not validated.
    fun getpeercert(binary_form: Object) is abstract
    
    fun send(data, flags: Object) is abstract
    
    # Write DATA to the underlying SSL channel.  Returns
    # number of bytes of DATA actually transmitted.
    fun write(data: Object) is abstract
    
    init do end
    
    fun recv_into(buffer, flags, nbytes: Object) is abstract
    
    fun pending is abstract
    
    fun unwrap is abstract
    
    # Read up to LEN bytes and return them.
    # Return zero-length string on EOF.
    fun read(len: Object) is abstract
    
    private fun private_real_connect(return_errno, addr: Object) is abstract
    
    fun cipher is abstract
    
    fun recv(buflen, flags: Object) is abstract
    
    fun recvfrom(buflen, flags: Object) is abstract
    
    fun sendto(data, addr, flags_or_addr: Object) is abstract
    
    redef fun sendall is abstract
    
end

redef class Error
    
end

class SSLError
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

