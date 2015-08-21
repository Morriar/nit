# Create portable serialized representations of Python objects.
# See module cPickle for a (much) faster implementation.
# See module copy_reg for a mechanism for registering custom picklers.
# See module pickletools source for extensive comments.
# Classes:
# Pickler
# Unpickler
# Functions:
# dump(object, file)
# dumps(object) -> string
# load(file) -> object
# loads(string) -> object
# Misc variables:
# __version__
# format_version
# compatible_formats
module pickle

import sys
import re
import binascii
import marshal
import struct
import builtins

# The most base type
redef class Object
    
end

class Getset_descriptor
    
end

class Generator
    
end

class Unpickler
    
    # Read a pickled object representation from the open file.
    # Return the reconstituted object hierarchy specified in the file.
    fun load is abstract
    
    fun load_binput is abstract
    
    fun load_pop_mark is abstract
    
    fun load_empty_list is abstract
    
    fun load_mark is abstract
    
    fun load_binfloat(unpack: Object) is abstract
    
    fun load_unicode is abstract
    
    fun load_short_binstring is abstract
    
    fun load_tuple is abstract
    
    fun marker is abstract
    
    fun load_dup is abstract
    
    fun load_binint2 is abstract
    
    fun load_appends is abstract
    
    fun load_tuple2 is abstract
    
    fun load_tuple3 is abstract
    
    fun load_int is abstract
    
    fun load_tuple1 is abstract
    
    fun load_ext1 is abstract
    
    fun load_ext2 is abstract
    
    fun load_ext4 is abstract
    
    fun load_float is abstract
    
    # This takes a file-like object for reading a pickle data stream.
    # The protocol version of the pickle is detected automatically, so no
    # proto argument is needed.
    # The file-like object must have two methods, a read() method that
    # takes an integer argument, and a readline() method that requires no
    # arguments.  Both methods should return a string.  Thus file-like
    # object can be a file object opened for reading, a StringIO object,
    # or any other custom object that meets this interface.
    init do end
    
    fun load_long is abstract
    
    fun load_empty_tuple is abstract
    
    fun load_put is abstract
    
    fun load_binstring is abstract
    
    fun load_stop is abstract
    
    fun load_binunicode is abstract
    
    fun load_get is abstract
    
    fun load_obj is abstract
    
    fun load_setitem is abstract
    
    fun load_dict is abstract
    
    fun load_inst is abstract
    
    fun load_build is abstract
    
    fun load_long4 is abstract
    
    fun load_long1 is abstract
    
    fun load_binint is abstract
    
    private fun private_instantiate(k, klass: Object) is abstract
    
    fun load_binget is abstract
    
    fun load_append is abstract
    
    fun find_class(name, py_module: Object) is abstract
    
    fun load_persid is abstract
    
    fun load_pop is abstract
    
    fun load_none is abstract
    
    fun load_false is abstract
    
    fun load_eof is abstract
    
    fun load_binint1 is abstract
    
    fun load_empty_dictionary is abstract
    
    fun load_reduce is abstract
    
    fun load_setitems is abstract
    
    fun load_long_binput is abstract
    
    fun load_binpersid is abstract
    
    fun load_global is abstract
    
    fun load_list is abstract
    
    fun load_proto is abstract
    
    fun load_long_binget is abstract
    
    fun load_newobj is abstract
    
    fun load_string is abstract
    
    fun get_extension(code: Object) is abstract
    
    fun load_true is abstract
    
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

# type(object) -> the object's type
# type(name, bases, dict) -> a new type
redef class Type
    
end

# function(code, globals[, name[, argdefs[, closure]]])
# Create a function object from a code object and a dictionary.
# The optional name string overrides the name from the code object.
# The optional argdefs tuple specifies the default argument values.
# The optional closure tuple supplies the bindings for free variables.
class Function
    
end

redef class Sys
    
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

class NotImplementedType
    
end

private class Stop
    super Exception
    
    init do end
    
end

# instancemethod(function, instance, class)
# Create an instance method object.
redef class Instancemethod
    
end

# This exception is raised when there is a problem unpickling an object,
# such as a security violation.
# Note that other exceptions may also be raised during unpickling, including
# (but not necessarily limited to) AttributeError, EOFError, ImportError,
# and IndexError.
class UnpicklingError
    super PickleError
    
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

# str(object='') -> string
# Return a nice string representation of the object.
# If the argument is a string, the return value is the same object.
class Str
    super Basestring
    
end

# slice(stop)
# slice(start, stop[, step])
# Create a slice object.  This is used for extended slicing (e.g. a[0:10:2]).
class Slice
    
end

# This exception is raised when an unpicklable object is passed to the
# dump() method.
class PicklingError
    super PickleError
    
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

private class EmptyClass
    
end

# A common base class for the other pickling exceptions.
class PickleError
    super Exception
    
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

class Pickler
    
    # Write a pickled representation of obj to the open file.
    fun dump(obj: Object) is abstract
    
    private fun private_batch_setitems(items: Object) is abstract
    
    fun save_float(obj, pack: Object) is abstract
    
    # This takes a file-like object for writing a pickle data stream.
    # The optional protocol argument tells the pickler to use the
    # given protocol; supported protocols are 0, 1, 2.  The default
    # protocol is 0, to be backwards compatible.  (Protocol 0 is the
    # only protocol that can be written to a file opened in text
    # mode and read back successfully.  When using a protocol higher
    # than 0, make sure the file is opened in binary mode, both when
    # pickling and unpickling.)
    # Protocol 1 is more efficient than protocol 0; protocol 2 is
    # more efficient than protocol 1.
    # Specifying a negative protocol version selects the highest
    # protocol version supported.  The higher the protocol used, the
    # more recent the version of Python needed to read the pickle
    # produced.
    # The file parameter must have a write() method that accepts a single
    # string argument.  It can thus be an open file object, a StringIO
    # object, or any other custom object that meets this interface.
    init do end
    
    private fun private_batch_appends(items: Object) is abstract
    
    fun save_int(obj, pack: Object) is abstract
    
    # Clears the pickler's "memo".
    # The memo is the data structure that remembers which objects the
    # pickler has already seen, so that shared or recursive objects are
    # pickled by reference and not by value.  This method is useful when
    # re-using picklers.
    fun clear_memo is abstract
    
    fun save_dict(obj: Object) is abstract
    
    # Store an object in the memo.
    fun memoize(obj: Object) is abstract
    
    fun get(i, pack: Object) is abstract
    
    fun save_none(obj: Object) is abstract
    
    fun save_reduce(obj, args, listitems, state, dictitems, func: Object) is abstract
    
    fun save_inst(obj: Object) is abstract
    
    fun save_unicode(obj, pack: Object) is abstract
    
    fun put(i, pack: Object) is abstract
    
    fun save_long(obj, pack: Object) is abstract
    
    fun save_global(obj, name, pack: Object) is abstract
    
    fun save(obj: Object) is abstract
    
    fun persistent_id(obj: Object) is abstract
    
    fun save_empty_tuple(obj: Object) is abstract
    
    fun save_pers(pid: Object) is abstract
    
    fun save_string(obj, pack: Object) is abstract
    
    fun save_bool(obj: Object) is abstract
    
    fun save_tuple(obj: Object) is abstract
    
    fun save_list(obj: Object) is abstract
    
end

class NoneType
    
end

