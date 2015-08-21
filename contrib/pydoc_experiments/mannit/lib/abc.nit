# Abstract Base Classes (ABCs) according to PEP 3119.
module abc

import builtins

# Metaclass for defining Abstract Base Classes (ABCs).
# Use this metaclass to create an ABC.  An ABC can be subclassed
# directly, and then acts as a mix-in class.  You can also register
# unrelated concrete classes (even built-in classes) and unrelated
# ABCs as 'virtual subclasses' -- these and their descendants will
# be considered subclasses of the registering ABC by the built-in
# issubclass() function, but the registering ABC won't show up in
# their MRO (Method Resolution Order) nor will method
# implementations defined by the registering ABC be callable (not
# even via super()).
class ABCMeta
    super Type
    
    # Override for issubclass(subclass, cls).
    fun subclasscheck(subclass, cls: Object) is abstract
    
    # Override for isinstance(instance, cls).
    fun instancecheck(instance, cls: Object) is abstract
    
    # Register a virtual subclass of an ABC.
    fun register(subclass, cls: Object) is abstract
    
    # Debug helper to print the ABC registry.
    private fun private_dump_registry(file, cls: Object) is abstract
    
end

private class C
    
end

# instance(class[, dict])
# Create an instance without calling its __init__() method.
# The class must be a classic class.
# If present, dict must be a dictionary or None.
class Instance
    
end

redef class Sys
    
end

# A decorator indicating abstract properties.
# Requires that the metaclass is ABCMeta or derived from it.  A
# class that has a metaclass derived from ABCMeta cannot be
# instantiated unless all of its abstract properties are overridden.
# The abstract properties can be called using any of the normal
# 'super' call mechanisms.
# Usage:
# class C:
# __metaclass__ = ABCMeta
# @abstractproperty
# def my_abstract_property(self):
# ...
# This defines a read-only property; you can also define a read-write
# abstract property using the 'long' form of property declaration:
# class C:
# __metaclass__ = ABCMeta
# def getx(self): ...
# def setx(self, value): ...
# x = abstractproperty(getx, setx)
class Abstractproperty
    super Property
    
end

class WeakSet
    
    fun iand(other: Object) is abstract
    
    fun gt(other: Object) is abstract
    
    fun ixor(other: Object) is abstract
    
    fun issubset(other: Object) is abstract
    
    fun symmetric_difference(other: Object) is abstract
    
    fun copy is abstract
    
    fun reduce is abstract
    
    fun pop is abstract
    
    fun issuperset(other: Object) is abstract
    
    fun iter is abstract
    
    fun eq(other: Object) is abstract
    
    private fun private_commit_removals is abstract
    
    fun difference(other: Object) is abstract
    
    fun difference_update(other: Object) is abstract
    
    fun union(other: Object) is abstract
    
    fun contains(item: Object) is abstract
    
    fun ne(other: Object) is abstract
    
    init do end
    
    fun lt(other: Object) is abstract
    
    fun symmetric_difference_update(other: Object) is abstract
    
    fun update(other: Object) is abstract
    
    fun len is abstract
    
    fun ior(other: Object) is abstract
    
    fun add(item: Object) is abstract
    
    fun intersection(other: Object) is abstract
    
    fun isub(other: Object) is abstract
    
    fun isdisjoint(other: Object) is abstract
    
    fun intersection_update(other: Object) is abstract
    
    fun clear is abstract
    
    fun remove(item: Object) is abstract
    
    fun discard(item: Object) is abstract
    
end

