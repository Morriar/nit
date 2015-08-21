# Define names for all type symbols known in the standard interpreter.
# Types that are part of optional modules (e.g. array) are not listed.
module types

import builtins

# The most base type
redef class Object
    
end

class Getset_descriptor
    
end

class Generator
    
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

# instancemethod(function, instance, class)
# Create an instance method object.
redef class Instancemethod
    
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

class NoneType
    
end

