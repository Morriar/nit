# HTTP/1.1 client library
# <intro stuff goes here>
# <other stuff, too>
# HTTPConnection goes through a number of "states", which define when a client
# may legally make another request or fetch the response for a particular
# request. This diagram details these state transitions:
# (null)
# |
# | HTTPConnection()
# v
# Idle
# |
# | putrequest()
# v
# Request-started
# |
# | ( putheader() )*  endheaders()
# v
# Request-sent
# |
# | response = getresponse()
# v
# Unread-response   [Response-headers-read]
# |\____________________
# |                     |
# | response.read()     | putrequest()
# v                     v
# Idle                  Req-started-unread-response
# ______/|
# /        |
# response.read() |        | ( putheader() )*  endheaders()
# v        v
# Request-started    Req-sent-unread-response
# |
# | response.read()
# v
# Request-sent
# This diagram presents the following rules:
# -- a second request may not be started until {response-headers-read}
# -- a response [object] cannot be retrieved until {request-sent}
# -- there is no differentiation between an unread response body and a
# partially read response body
# Note: this enforcement is applied by the HTTPConnection class. The
# HTTPResponse class does not enforce this state machine, which
# implies sophisticated clients may accelerate the request/response
# pipeline. Caution should be taken, though: accelerating the states
# beyond the above pattern may imply knowledge of the server's
# connection-close behavior for certain requests. For example, it
# is impossible to tell whether the server will close the connection
# UNTIL the response headers have been read; this means that further
# requests cannot be placed into the pipeline until it is known that
# the server will NOT be closing the connection.
# Logical State                  __state            __response
# -------------                  -------            ----------
# Idle                           _CS_IDLE           None
# Request-started                _CS_REQ_STARTED    None
# Request-sent                   _CS_REQ_SENT       None
# Unread-response                _CS_IDLE           <response_class>
# Req-started-unread-response    _CS_REQ_STARTED    <response_class>
# Req-sent-unread-response       _CS_REQ_SENT       <response_class>
module httplib

import rfc822

# Compatibility class with httplib.py from 1.5.
class HTTP

    # Compat definition since superclass does not define it.
    # Returns a tuple consisting of:
    # - server status code (e.g. '200' if all goes well)
    # - server "reason" corresponding to status code
    # - any RFC822 headers in the response from the server
    fun getreply(buffering: Object) is abstract

    # Provide a default host, since the superclass requires one.
    init do end

    # Accept arguments to set the host/port, since the superclass doesn't.
    fun connect(host, port: Object) is abstract

    # Provide a getfile, since the superclass' does not use this concept.
    fun getfile is abstract

    fun close is abstract

    private fun private_setup(conn: Object) is abstract

end

class HTTPConnection

    # Send a request header line to the server.
    # For example: h.putheader('Accept', 'text/html')
    fun putheader(header: Object) is abstract

    # Send a complete request to the server.
    fun request(url, body, method, headers: Object) is abstract

    private fun private_send_request(url, body, method, headers: Object) is abstract

    private fun private_set_content_length(body: Object) is abstract

    fun set_debuglevel(level: Object) is abstract

    # Get the response from the server.
    fun getresponse(buffering: Object) is abstract

    # Send `data' to the server.
    fun send(data: Object) is abstract

    # Sets up the host and the port for the HTTP CONNECT Tunnelling.
    # The headers argument should be a mapping of extra HTTP headers
    # to send with the CONNECT request.
    fun set_tunnel(headers, host, port: Object) is abstract

    private fun private_set_hostport(host, port: Object) is abstract

    init do end

    # Connect to the host and port specified in __init__.
    fun connect is abstract

    # Indicate that the last header line has been sent to the server.
    # This method sends the request to the server.  The optional
    # message_body argument can be used to pass a message body
    # associated with the request.  The message body will be sent in
    # the same packet as the message headers if it is string, otherwise it is
    # sent as a separate packet.
    fun endheaders(message_body: Object) is abstract

    # Send a request to the server.
    # `method' specifies an HTTP request method, e.g. 'GET'.
    # `url' specifies the object being requested, e.g. '/index.html'.
    # `skip_host' if True does not add automatically a 'Host:' header
    # `skip_accept_encoding' if True does not add automatically an
    # 'Accept-Encoding:' header
    fun putrequest(url, skip_accept_encoding, method, skip_host: Object) is abstract

    # Close the connection to the HTTP server.
    fun close is abstract

    private fun private_tunnel is abstract

    # Send the currently buffered request and clear the buffer.
    # Appends an extra \r\n to the buffer.
    # A message_body may be specified, to be appended to the request.
    private fun private_send_output(message_body: Object) is abstract

    # Add a line of output to the current request buffer.
    # Assumes that the line does *not* end with \r\n.
    private fun private_output(s: Object) is abstract

end

class BadStatusLine
    super HTTPException

    init do end

end

class UnimplementedFileMode
    super HTTPException

end

class IncompleteRead
    super HTTPException

    init do end

    fun repr is abstract

    fun str is abstract

end

class InvalidURL
    super HTTPException

end

# A limited file-like object for HTTP/0.9 responses.
class LineAndFileWrapper

    private fun private_done is abstract

    fun readlines(size: Object) is abstract

    init do end

    fun read(amt: Object) is abstract

    fun getattr(attr: Object) is abstract

    fun readline is abstract

end

redef class Sys

end

class HTTPResponse

    fun fileno is abstract

    fun begin is abstract

    fun read(amt: Object) is abstract

    fun getheader(default, name: Object) is abstract

    fun isclosed is abstract

    init do end

    private fun private_check_close is abstract

    # Return list of (header, value) tuples.
    fun getheaders is abstract

    fun close is abstract

    private fun private_read_chunked(amt: Object) is abstract

    private fun private_read_status is abstract

    # Read the number of bytes requested, compensating for partial reads.
    # Normally, we have a blocking socket, but a read() can be interrupted
    # by a signal (resulting in a partial read).
    # Note that we cannot distinguish between EOF and an interrupt when zero
    # bytes have been read. IncompleteRead() will be raised in this
    # situation.
    # This function should be used when <amt> bytes "should" be present for
    # reading. If the bytes are truly not available (due to EOF), then the
    # IncompleteRead exception can be used to detect the problem.
    private fun private_safe_read(amt: Object) is abstract

end

class LineTooLong
    super HTTPException

    init do end

end

class HTTPException
    super Exception

end

class ResponseNotReady
    super ImproperConnectionState

end

class UnknownTransferEncoding
    super HTTPException

end

class CannotSendHeader
    super ImproperConnectionState

end

# Compatibility with 1.5 httplib interface
# Python 1.5.2 did not have an HTTPS class, but it defined an
# interface for sending http requests that is also useful for
# https.
class HTTPS
    super HTTP

    init do end

end

class NotConnected
    super HTTPException

end

class UnknownProtocol
    super HTTPException

    init do end

end

class ImproperConnectionState
    super HTTPException

end

class HTTPMessage
    super Message

    # Read header lines.
    # Read header lines up to the entirely blank line that terminates them.
    # The (normally blank) line that ends the headers is skipped, but not
    # included in the returned list.  If a non-header line ends the headers,
    # (which is an error), an attempt is made to backspace over it; it is
    # never included in the returned list.
    # The variable self.status is set to the empty string if all went well,
    # otherwise it is an error message.  The variable self.headers is a
    # completely uninterpreted list of lines contained in the header (so
    # printing them will reproduce the header exactly as it appears in the
    # file).
    # If multiple header fields with the same name occur, they are combined
    # according to the rules in RFC 2616 sec 4.2:
    # Appending each subsequent field-value to the first, each separated
    # by a comma. The order in which header fields with the same field-name
    # are received is significant to the interpretation of the combined
    # field value.
    redef fun readheaders is abstract

    # Add more field data from a continuation line.
    fun addcontinue(key, more: Object) is abstract

    # Add header for field key handling repeats.
    fun addheader(key, value: Object) is abstract

end

# This class allows communication via SSL.
class HTTPSConnection
    super HTTPConnection

    init do end

    # Connect to a host on a given (SSL) port.
    redef fun connect is abstract

end

# array(typecode [, initializer]) -> array
# Return a new array whose items are restricted by typecode, and
# initialized from the optional initializer value, which must be a list,
# string or iterable over elements of the appropriate type.
# Arrays represent basic values and behave very much like lists, except
# the type of objects stored in them is constrained.
# Methods:
# append() -- append a new item to the end of the array
# buffer_info() -- return information giving the current memory info
# byteswap() -- byteswap all the items of the array
# count() -- return number of occurrences of an object
# extend() -- extend array by appending multiple elements from an iterable
# fromfile() -- read items from a file object
# fromlist() -- append items from the list
# fromstring() -- append items from the string
# index() -- return index of first occurrence of an object
# insert() -- insert a new item into the array at a provided position
# pop() -- remove and return item (default last)
# read() -- DEPRECATED, use fromfile()
# remove() -- remove first occurrence of an object
# reverse() -- reverse the order of the items in the array
# tofile() -- write all items to a file object
# tolist() -- return the array converted to an ordinary list
# tostring() -- return the array converted to a string
# write() -- DEPRECATED, use tofile()
# Attributes:
# typecode -- the typecode character used to create the array
# itemsize -- the length in bytes of one array item
class Array

end

class CannotSendRequest
    super ImproperConnectionState

end

