# HTTP server base class.
# Note: the class in this module doesn't implement any HTTP request; see
# SimpleHTTPServer for simple implementations of GET, HEAD and POST
# (including CGI scripts).  It does, however, optionally implement HTTP/1.1
# persistent connections, as of version 0.3.
# Contents:
# - BaseHTTPRequestHandler: HTTP request handler base class
# - test: test function
# XXX To do:
# - log requests even later (to capture byte count)
# - log user-agent header and other interesting goodies
# - send error log to separate file
module basehttpserver

import mimetools
import sys
import py_socket
import socketserver
import time
import builtins

redef class Sys
    
end

# HTTP request handler base class.
# The following explanation of HTTP serves to guide you through the
# code as well as to expose any misunderstandings I may have about
# HTTP (so you don't need to read the code to figure out I'm wrong
# :-).
# HTTP (HyperText Transfer Protocol) is an extensible protocol on
# top of a reliable stream transport (e.g. TCP/IP).  The protocol
# recognizes three parts to a request:
# 1. One line identifying the request type and path
# 2. An optional set of RFC-822-style headers
# 3. An optional data part
# The headers and data are separated by a blank line.
# The first line of the request has the form
# <command> <path> <version>
# where <command> is a (case-sensitive) keyword such as GET or POST,
# <path> is a string containing path information for the request,
# and <version> should be the string "HTTP/1.0" or "HTTP/1.1".
# <path> is encoded using the URL encoding scheme (using %xx to signify
# the ASCII character with hex code xx).
# The specification specifies that lines are separated by CRLF but
# for compatibility with the widest range of clients recommends
# servers also handle LF.  Similarly, whitespace in the request line
# is treated sensibly (allowing multiple spaces between components
# and allowing trailing whitespace).
# Similarly, for output, lines ought to be separated by CRLF pairs
# but most clients grok LF characters just fine.
# If the first line of the request has the form
# <command> <path>
# (i.e. <version> is left out) then this is assumed to be an HTTP
# 0.9 request; this form has no optional headers and data part and
# the reply consists of just the data.
# The reply form of the HTTP 1.x protocol again has three parts:
# 1. One line giving the response code
# 2. An optional set of RFC-822-style headers
# 3. The data
# Again, the headers and data are separated by a blank line.
# The response code line has the form
# <version> <responsecode> <responsestring>
# where <version> is the protocol version ("HTTP/1.0" or "HTTP/1.1"),
# <responsecode> is a 3-digit response code indicating success or
# failure of the request, and <responsestring> is an optional
# human-readable string explaining what the response code means.
# This server parses the request and the headers, and then calls a
# function specific to the request type (<command>).  Specifically,
# a request SPAM will be handled by a method do_SPAM().  If no
# such method exists the server sends an error response to the
# client.  If it exists, it is called with no arguments:
# do_SPAM()
# Note that the request name is case sensitive (i.e. SPAM and spam
# are different requests).
# The various request details are stored in instance variables:
# - client_address is the client IP address in the form (host,
# port);
# - command, path and version are the broken-down request line;
# - headers is an instance of mimetools.Message (or a derived
# class) containing the header information;
# - rfile is a file object open for reading positioned at the
# start of the optional input data part;
# - wfile is a file object open for writing.
# IT IS IMPORTANT TO ADHERE TO THE PROTOCOL FOR WRITING!
# The first thing to be written must be the response line.  Then
# follow 0 or more header lines, then a blank line, and then the
# actual data (if any).  The meaning of the header lines depends on
# the command executed by the server; in most cases, when data is
# returned, there should be at least one header line of the form
# Content-type: <type>/<subtype>
# where <type> and <subtype> should be registered MIME types,
# e.g. "text/html" or "text/plain".
class BaseHTTPRequestHandler
    super StreamRequestHandler
    
    # Return the server software version string.
    fun version_string is abstract
    
    # Handle multiple requests if necessary.
    redef fun handle is abstract
    
    # Parse a request (internal).
    # The request should be stored in self.raw_requestline; the results
    # are in self.command, self.path, self.request_version and
    # self.headers.
    # Return True for success, False for failure; on failure, an
    # error is sent back.
    fun parse_request is abstract
    
    # Send the blank line ending the MIME headers.
    fun end_headers is abstract
    
    # Return the current date and time formatted for a message header.
    fun date_time_string(timestamp: Object) is abstract
    
    # Return the client address formatted for logging.
    # This version looks up the full hostname using gethostbyaddr(),
    # and tries to find a name that contains at least one dot.
    fun address_string is abstract
    
    # Send the response header and log the response code.
    # Also send two standard headers with the server software
    # version and the current date.
    fun send_response(message, code: Object) is abstract
    
    # Return the current time formatted for logging.
    fun log_date_time_string is abstract
    
    # Send and log an error reply.
    # Arguments are the error code, and a detailed message.
    # The detailed message defaults to the short entry matching the
    # response code.
    # This sends an error response (so it must be called before any
    # output has been generated), logs the error, and finally sends
    # a piece of HTML explaining the error to the user.
    fun send_error(message, code: Object) is abstract
    
    # Log an error.
    # This is called when a request cannot be fulfilled.  By
    # default it passes the message on to log_message().
    # Arguments are the same as for log_message().
    # XXX This should go to the separate error log.
    fun log_error(format: Object) is abstract
    
    # Log an accepted request.
    # This is called by send_response().
    fun log_request(code, size: Object) is abstract
    
    # Handle a single HTTP request.
    # You normally don't need to override this method; see the class
    # __doc__ string for information on how to handle specific HTTP
    # commands such as GET and POST.
    fun handle_one_request is abstract
    
    # Log an arbitrary message.
    # This is used by all other logging functions.  Override
    # it if you have specific logging wishes.
    # The first argument, FORMAT, is a format string for the
    # message to be logged.  If the format string contains
    # any % escapes requiring parameters, they should be
    # specified as subsequent arguments (it's just like
    # printf!).
    # The client ip address and current date/time are prefixed to every
    # message.
    fun log_message(format: Object) is abstract
    
    # Send a MIME header.
    fun send_header(keyword, value: Object) is abstract
    
end

class HTTPServer
    super TCPServer
    
    # Override server_bind to store the server name.
    redef fun server_bind is abstract
    
end

# A context manager that copies and restores the warnings filter upon
# exiting the context.
# The 'record' argument specifies whether warnings should be captured by a
# custom implementation of warnings.showwarning() and be appended to a list
# returned by the context manager. Otherwise None is returned by the context
# manager. The objects appended to the list are arguments whose attributes
# mirror the arguments to showwarning().
# The 'module' argument is to specify an alternative module to the module
# named 'warnings' and imported under that name. This argument is only useful
# when testing the warnings module itself.
redef class Catch_warnings
    
    # Specify whether to record warnings and if an alternative module
    # should be used other than sys.modules['warnings'].
    # For compatibility with Python 3.0, please consider all arguments to be
    # keyword-only.
    init do end
    
    redef fun exit is abstract
    
    redef fun repr is abstract
    
    redef fun enter is abstract
    
end

