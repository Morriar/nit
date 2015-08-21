# Support to pretty-print lists, tuples, & dictionaries recursively.
# Very simple, but useful, especially in debugging data structures.
# Classes
# -------
# PrettyPrinter()
# Handle pretty-printing operations onto a stream using a configured
# set of formatting parameters.
# Functions
# ---------
# pformat()
# Format a Python object into a pretty-printed representation.
# pprint()
# Pretty-print a Python object to a stream [default is sys.stdout].
# saferepr()
# Generate a 'standard' repr()-like value, but protect against recursive
# data structures.
module pprint

import sys
import warnings
import builtins

redef class Sys
    
end

class PrettyPrinter
    
    fun pformat(object: Object) is abstract
    
    # Format object for a specific context, returning a string
    # and flags indicating whether the representation is 'readable'
    # and whether the object represents a recursive construct.
    fun format(object, context, maxlevels, level: Object) is abstract
    
    fun pprint(object: Object) is abstract
    
    # Handle pretty printing operations onto a stream using a set of
    # configured parameters.
    # indent
    # Number of spaces to indent for each level of nesting.
    # width
    # Attempted maximum number of columns in the output.
    # depth
    # The maximum depth to print out nested structures.
    # stream
    # The desired output stream.  If omitted (or false), the standard
    # output stream available at construction will be used.
    init do end
    
    fun isreadable(object: Object) is abstract
    
    private fun private_repr(object, context, level: Object) is abstract
    
    private fun private_format(indent, stream, level, object, context, allowance: Object) is abstract
    
    fun isrecursive(object: Object) is abstract
    
end

# type(object) -> the object's type
# type(name, bases, dict) -> a new type
redef class Type
    
end

