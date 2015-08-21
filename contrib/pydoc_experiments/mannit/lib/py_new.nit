# Create new objects of various types.  Deprecated.
# This module is no longer required except for backward compatibility.
# Objects of most types can now be created by calling the type object.
module py_new

import builtins

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

# code(argcount, nlocals, stacksize, flags, codestring, constants, names,
# varnames, filename, name, firstlineno, lnotab[, freevars[, cellvars]])
# Create a code object.  Not for the faint of heart.
class Code
    
end

# classobj(name, bases, dict)
# Create a class object.  The name must be a string; the second argument
# a tuple of classes, and the third a dictionary.
class Classobj
    
end

# module(name[, doc])
# Create a module object.
# The name must be a string; the optional doc argument can have any type.
redef class Module
    
end

redef class Sys
    
end

# instance(class[, dict])
# Create an instance without calling its __init__() method.
# The class must be a classic class.
# If present, dict must be a dictionary or None.
class Instance
    
end

