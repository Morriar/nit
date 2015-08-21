# Helper to provide extensibility for pickle/cPickle.
# This is only useful to add pickle support for extension types defined in
# C, not for instances of user-defined classes.
module copy_reg

import builtins

redef class Sys
    
end

# classobj(name, bases, dict)
# Create a class object.  The name must be a string; the second argument
# a tuple of classes, and the third a dictionary.
class Classobj
    
end

