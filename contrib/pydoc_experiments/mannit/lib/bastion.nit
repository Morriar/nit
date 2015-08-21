# Bastionification utility.
# A bastion (for another object -- the 'original') is an object that has
# the same methods as the original but does not give access to its
# instance variables.  Bastions have a number of uses, but the most
# obvious one is to provide code executing in restricted mode with a
# safe interface to an object implemented in unrestricted mode.
# The bastionification routine has an optional second argument which is
# a filter function.  Only those methods for which the filter method
# (called with the method name as argument) returns true are accessible.
# The default filter method returns true unless the method name begins
# with an underscore.
# There are a number of possible implementations of bastions.  We use a
# 'lazy' approach where the bastion's __getattr__() discipline does all
# the work for a particular method the first time it is used.  This is
# usually fastest, especially if the user doesn't call all available
# methods.  The retrieved methods are stored as instance variables of
# the bastion, so the overhead is only occurred on the first use of each
# method.
# Detail: the bastion class has a __repr__() discipline which includes
# the repr() of the original object.  This is precomputed when the
# bastion is created.
module bastion

import builtins

redef class Sys
    
end

# Helper class used by the Bastion() function.
# You could subclass this and pass the subclass as the bastionclass
# argument to the Bastion() function, as long as the constructor has
# the same signature (a get() function and a name for the object).
class BastionClass
    
    # Get an as-yet undefined attribute value.
    # This calls the get() function that was passed to the
    # constructor.  The result is stored as an instance variable so
    # that the next time the same attribute is requested,
    # __getattr__() won't be invoked.
    # If the get() function raises an exception, this is simply
    # passed on -- exceptions are not cached.
    fun getattr(name: Object) is abstract
    
    # Constructor.
    # Arguments:
    # get - a function that gets the attribute value (by name)
    # name - a human-readable name for the original object
    # (suggestion: use repr(object))
    init do end
    
    # Return a representation string.
    # This includes the name passed in to the constructor, so that
    # if you print the bastion during debugging, at least you have
    # some idea of what it is.
    fun repr is abstract
    
end

# instancemethod(function, instance, class)
# Create an instance method object.
redef class Instancemethod
    
end

