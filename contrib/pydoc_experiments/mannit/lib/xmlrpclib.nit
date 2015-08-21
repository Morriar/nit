# An XML-RPC client interface for Python.
# The marshalling and response parser code can also be used to
# implement XML-RPC servers.
# Exported exceptions:
# Error          Base class for client errors
# ProtocolError  Indicates an HTTP protocol error
# ResponseError  Indicates a broken response package
# Fault          Indicates an XML-RPC fault package
# Exported classes:
# ServerProxy    Represents a logical connection to an XML-RPC server
# MultiCall      Executor of boxcared xmlrpc requests
# Boolean        boolean wrapper to generate a "boolean" XML-RPC value
# DateTime       dateTime wrapper for an ISO 8601 string or time tuple or
# localtime integer value to generate a "dateTime.iso8601"
# XML-RPC value
# Binary         binary data wrapper
# SlowParser     Slow but safe standard parser (based on xmllib)
# Marshaller     Generate an XML-RPC params chunk from a Python data structure
# Unmarshaller   Unmarshal an XML-RPC response from incoming XML event message
# Transport      Handles an HTTP transaction to an XML-RPC server
# SafeTransport  Handles an HTTPS transaction to an XML-RPC server
# Exported constants:
# True
# False
# Exported functions:
# boolean        Convert any Python value to an XML-RPC boolean
# getparser      Create instance of the fastest available parser & attach
# to an unmarshalling object
# dumps          Convert an argument tuple or a Fault instance to an XML-RPC
# request (or response, if the methodresponse option is used).
# loads          Convert an XML-RPC packet to unmarshalled data plus a method
# name (None if not present).
module xmlrpclib

import builtins

# Wrapper for binary data.
class Binary
    
    fun decode(data: Object) is abstract
    
    fun encode(out: Object) is abstract
    
    init do end
    
    fun str is abstract
    
    fun cmp(other: Object) is abstract
    
end

# The most base type
redef class Object
    
end

class Getset_descriptor
    
end

class Generator
    
end

# Indicates a broken response package.
class ResponseError
    super Error
    
end

# Unmarshal an XML-RPC response, based on incoming XML event
# messages (start, data, end).  Call close() to get the resulting
# data structure.
# Note that this reader is fairly tolerant, and gladly accepts bogus
# XML-RPC data without complaining (but not bogus XML).
class Unmarshaller
    
    fun xml(encoding, standalone: Object) is abstract
    
    fun end_base64(data: Object) is abstract
    
    fun end_struct(data: Object) is abstract
    
    fun end_array(data: Object) is abstract
    
    fun end_params(data: Object) is abstract
    
    fun end_dispatch(tag, data: Object) is abstract
    
    fun end_double(data: Object) is abstract
    
    fun end_value(data: Object) is abstract
    
    fun end_int(data: Object) is abstract
    
    fun end_fault(data: Object) is abstract
    
    fun start(tag, attrs: Object) is abstract
    
    init do end
    
    fun end_datetime(data: Object) is abstract
    
    fun end_methodname(data: Object) is abstract
    
    fun end_boolean(data: Object) is abstract
    
    fun close is abstract
    
    fun end_string(data: Object) is abstract
    
    fun data(text: Object) is abstract
    
    fun py_end(tag, join: Object) is abstract
    
    fun end_nil(data: Object) is abstract
    
    fun getmethodname is abstract
    
end

# long(x=0) -> long
# long(x, base=10) -> long
# Convert a number or string to a long integer, or return 0L if no arguments
# are given.  If x is floating point, the conversion truncates towards zero.
# If x is not a number or if base is given, then x must be a string or
# Unicode object representing an integer literal in the given base.  The
# literal can be preceded by '+' or '-' and be surrounded by whitespace.
# The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to
# interpret the base from the string as an integer literal.
# >>> int('0b100', base=0)
# 4L
class Long
    
end

# DateTime wrapper for an ISO 8601 string or time tuple or
# localtime integer value to generate 'dateTime.iso8601' XML-RPC
# value.
class DateTime
    
    fun le(other: Object) is abstract
    
    fun lt(other: Object) is abstract
    
    fun timetuple is abstract
    
    fun make_comparable(other: Object) is abstract
    
    init do end
    
    fun ne(other: Object) is abstract
    
    fun repr is abstract
    
    fun decode(data: Object) is abstract
    
    fun ge(other: Object) is abstract
    
    fun gt(other: Object) is abstract
    
    fun str is abstract
    
    fun encode(out: Object) is abstract
    
    fun eq(other: Object) is abstract
    
    fun cmp(other: Object) is abstract
    
end

# Iterates over the results of a multicall. Exceptions are
# raised in response to xmlrpc faults.
class MultiCallIterator
    
    init do end
    
    fun getitem(i: Object) is abstract
    
end

# instance(class[, dict])
# Create an instance without calling its __init__() method.
# The class must be a classic class.
# If present, dict must be a dictionary or None.
class Instance
    
end

# complex(real[, imag]) -> complex number
# Create a complex number from a real part and an optional imaginary part.
# This is equivalent to (real + imag*1j) where imag defaults to 0.
class Complex
    
end

# bool(x) -> bool
# Returns True when the argument x is true, False otherwise.
# The builtins True and False are the only two instances of the class bool.
# The class bool is a subclass of the class int, and cannot be subclassed.
class Bool
    super Int
    
end

class Ellipsis
    
end

# Indicates an HTTP protocol error.
class ProtocolError
    super Error
    
    init do end
    
    fun repr is abstract
    
end

# uri [,options] -> a logical connection to an XML-RPC server
# uri is the connection point on the server, given as
# scheme://host/target.
# The standard implementation always supports the "http" scheme.  If
# SSL socket support is available (Python 2.0), it also supports
# "https".
# If the target part and the slash preceding it are both omitted,
# "/RPC2" is assumed.
# The following options can be given as keyword arguments:
# transport: a transport factory
# encoding: the request encoding (default is UTF-8)
# All 8-bit strings passed to the server proxy are assumed to use
# the given encoding.
class ServerProxy
    
    fun request(methodname, params: Object) is abstract
    
    init do end
    
    fun repr is abstract
    
    fun getattr(name: Object) is abstract
    
    # A workaround to get special attributes on the ServerProxy
    # without interfering with the magic __getattr__
    fun call(attr: Object) is abstract
    
    fun close is abstract
    
end

private class Method
    
    fun getattr(name: Object) is abstract
    
    fun call is abstract
    
    init do end
    
end

# function(code, globals[, name[, argdefs[, closure]]])
# Create a function object from a code object and a dictionary.
# The optional name string overrides the name from the code object.
# The optional argdefs tuple specifies the default argument values.
# The optional closure tuple supplies the bindings for free variables.
class Function
    
end

# instancemethod(function, instance, class)
# Create an instance method object.
redef class Instancemethod
    
end

# Default XML parser (based on xmllib.XMLParser).
class SlowParser
    
    init do end
    
end

class Builtin_function_or_method
    
end

# tuple() -> empty tuple
# tuple(iterable) -> tuple initialized from iterable's items
# If the argument is a tuple, the return value is the same object.
redef class Tuple
    
end

# buffer(object [, offset[, size]])
# Create a new buffer object which references the given object.
# The buffer will reference a slice of the target object from the
# start of the object (or at the specified offset). The slice will
# extend to the end of the target object (or with the specified size).
class Buffer
    
end

# type(object) -> the object's type
# type(name, bases, dict) -> a new type
redef class Type
    
end

# server -> a object used to boxcar method calls
# server should be a ServerProxy object.
# Methods can be added to the MultiCall using normal
# method call syntax e.g.:
# multicall = MultiCall(server_proxy)
# multicall.add(2,3)
# multicall.get_address("Guido")
# To execute the multicall, call the MultiCall object e.g.:
# add_result, address = multicall()
class MultiCall
    
    fun getattr(name: Object) is abstract
    
    init do end
    
    fun call is abstract
    
    fun repr is abstract
    
end

class NotImplementedType
    
end

redef class Sys
    
end

# Indicates an XML-RPC fault package.
class Fault
    super Error
    
    init do end
    
    fun repr is abstract
    
end

class Member_descriptor
    
end

# unicode(object='') -> unicode object
# unicode(string[, encoding[, errors]]) -> unicode object
# Create a new Unicode object from the given encoded string.
# encoding defaults to the current default string encoding.
# errors can be 'strict', 'replace' or 'ignore' and defaults to 'strict'.
class Unicode
    super Basestring
    
end

# classobj(name, bases, dict)
# Create a class object.  The name must be a string; the second argument
# a tuple of classes, and the third a dictionary.
class Classobj
    
end

class Dictproxy
    
end

class Traceback
    
end

# list() -> new empty list
# list(iterable) -> new list initialized from iterable's items
redef class List
    
end

private class MultiCallMethod
    
    fun getattr(name: Object) is abstract
    
    fun call is abstract
    
    init do end
    
end

# Handles an HTTPS transaction to an XML-RPC server.
class SafeTransport
    super Transport
    
    redef fun make_connection(host) is abstract
    
end

class ExpatParser
    
    fun feed(data: Object) is abstract
    
    fun close is abstract
    
    init do end
    
end

# str(object='') -> string
# Return a nice string representation of the object.
# If the argument is a string, the return value is the same object.
class Str
    super Basestring
    
end

# Base class for client errors.
redef class Error
    
    fun str is abstract
    
end

# slice(stop)
# slice(start, stop[, step])
# Create a slice object.  This is used for extended slicing (e.g. a[0:10:2]).
class Slice
    
end

# code(argcount, nlocals, stacksize, flags, codestring, constants, names,
# varnames, filename, name, firstlineno, lnotab[, freevars[, cellvars]])
# Create a code object.  Not for the faint of heart.
class Code
    
end

# int(x=0) -> int or long
# int(x, base=10) -> int or long
# Convert a number or string to an integer, or return 0 if no arguments
# are given.  If x is floating point, the conversion truncates towards zero.
# If x is outside the integer range, the function returns a long instead.
# If x is not a number or if base is given, then x must be a string or
# Unicode object representing an integer literal in the given base.  The
# literal can be preceded by '+' or '-' and be surrounded by whitespace.
# The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to
# interpret the base from the string as an integer literal.
# >>> int('0b100', base=0)
# 4
class Int
    
end

# xrange(stop) -> xrange object
# xrange(start, stop[, step]) -> xrange object
# Like range(), but instead of returning a list, returns an object that
# generates the numbers in the range on demand.  For looping, this is
# slightly faster than range() and more memory efficient.
class Xrange
    
end

class Frame
    
end

# float(x) -> floating point number
# Convert a string or number to a floating point number, if possible.
class Float
    
end

# module(name[, doc])
# Create a module object.
# The name must be a string; the optional doc argument can have any type.
redef class Module
    
end

# Generate an XML-RPC params chunk from a Python data structure.
# Create a Marshaller instance for each set of parameters, and use
# the "dumps" method to convert your data (represented as a tuple)
# to an XML-RPC params chunk.  To write a fault response, pass a
# Fault instance instead.  You may prefer to use the "dumps" module
# function for this purpose.
class Marshaller
    
    fun dump_int(write, value: Object) is abstract
    
    fun dump_nil(write, value: Object) is abstract
    
    fun dump(write, value: Object) is abstract
    
    fun dump_long(write, value: Object) is abstract
    
    fun dumps(values: Object) is abstract
    
    fun dump_string(write, value, escape: Object) is abstract
    
    init do end
    
    fun dump_instance(write, value: Object) is abstract
    
    fun dump_unicode(write, value, escape: Object) is abstract
    
    fun dump_datetime(write, value: Object) is abstract
    
    fun dump_double(write, value: Object) is abstract
    
    fun dump_array(write, value: Object) is abstract
    
    fun dump_bool(write, value: Object) is abstract
    
    fun dump_struct(write, value, escape: Object) is abstract
    
end

# Handles an HTTP transaction to an XML-RPC server.
class Transport
    
    fun getparser is abstract
    
    fun make_connection(host: Object) is abstract
    
    fun single_request(host, handler, verbose, request_body: Object) is abstract
    
    fun get_host_info(host: Object) is abstract
    
    fun send_request(connection, handler, request_body: Object) is abstract
    
    fun request(host, handler, verbose, request_body: Object) is abstract
    
    fun send_content(connection, request_body: Object) is abstract
    
    init do end
    
    fun send_host(host, connection: Object) is abstract
    
    fun close is abstract
    
    fun parse_response(response: Object) is abstract
    
    fun send_user_agent(connection: Object) is abstract
    
end

# file(name[, mode[, buffering]]) -> file object
# Open a file.  The mode can be 'r', 'w' or 'a' for reading (default),
# writing or appending.  The file will be created if it doesn't exist
# when opened for writing or appending; it will be truncated when
# opened for writing.  Add a 'b' to the mode for binary files.
# Add a '+' to the mode to allow simultaneous reading and writing.
# If the buffering argument is given, 0 means unbuffered, 1 means line
# buffered, and larger numbers specify the buffer size.  The preferred way
# to open a file is with the builtin open() function.
# Add a 'U' to mode to open the file for input with universal newline
# support.  Any line ending in the input file will be seen as a '\n'
# in Python.  Also, a file so opened gains the attribute 'newlines';
# the value for this attribute is one of None (no newline read yet),
# '\r', '\n', '\r\n' or a tuple containing all the newline types seen.
# 'U' cannot be combined with 'w' or '+' mode.
class File
    
end

# a file-like object to decode a response encoded with the gzip
# method, as described in RFC 1952.
class GzipDecodedResponse
    super GzipFile
    
    redef fun close is abstract
    
    init do end
    
end

# dict() -> new empty dictionary
# dict(mapping) -> new dictionary initialized from a mapping object's
# (key, value) pairs
# dict(iterable) -> new dictionary initialized as if via:
# d = {}
# for k, v in iterable:
# d[k] = v
# dict(**kwargs) -> new dictionary initialized with the name=value pairs
# in the keyword argument list.  For example:  dict(one=1, two=2)
redef class Dict
    
end

class NoneType
    
end

