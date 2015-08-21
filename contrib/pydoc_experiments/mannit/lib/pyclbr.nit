# Parse a Python module and describe its classes and methods.
# Parse enough of a Python file to recognize imports and class and
# method definitions, and to find out the superclasses of a class.
# The interface consists of a single function:
# readmodule_ex(module [, path])
# where module is the name of a Python module, and path is an optional
# list of directories where the module is to be searched.  If present,
# path is prepended to the system search path sys.path.  The return
# value is a dictionary.  The keys of the dictionary are the names of
# the classes defined in the module (including classes that are defined
# via the from XXX import YYY construct).  The values are class
# instances of the class Class defined here.  One special key/value pair
# is present for packages: the key '__path__' has a list as its value
# which contains the package search path.
# A class is described by the class Class in this module.  Instances
# of this class have the following instance variables:
# module -- the module name
# name -- the name of the class
# super -- a list of super classes (Class instances)
# methods -- a dictionary of methods
# file -- the file in which the class was defined
# lineno -- the line in the file on which the class statement occurred
# The dictionary of methods uses the method names as keys and the line
# numbers on which the method was defined as values.
# If the name of a super class is not recognized, the corresponding
# entry in the list of super classes is not a class instance but a
# string giving the name of the super class.  Since import statements
# are recognized and imported modules are scanned as well, this
# shouldn't happen often.
# A function is described by the class Function in this module.
# Instances of this class have the following instance variables:
# module -- the module name
# name -- the name of the class
# file -- the file in which the class was defined
# lineno -- the line in the file on which the class statement occurred
module pyclbr

import sys
import imp
import tokenize
import builtins

redef class Sys
    
end

# Class to represent a top-level Python function
class Function
    
    init do end
    
end

# Class to represent a Python class.
redef class Class
    
    init do end
    
    private fun private_addmethod(name, lineno: Object) is abstract
    
end

# itemgetter(item, ...) --> itemgetter object
# Return a callable object that fetches the given item(s) from its operand.
# After f = itemgetter(2), the call f(r) returns r[2].
# After g = itemgetter(2, 5, 3), the call g(r) returns (r[2], r[5], r[3])
class Itemgetter
    
end

