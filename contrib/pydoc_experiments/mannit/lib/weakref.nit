# Weak reference support for Python.
# This module is an implementation of PEP 205:
# http://www.python.org/dev/peps/pep-0205/
module weakref

import builtins

class Weakref
    
end

# Mapping class that references keys weakly.
# Entries in the dictionary will be discarded when there is no
# longer a strong reference to the key. This can be used to
# associate additional data with an object owned by other parts of
# an application without adding attributes to those objects. This
# can be especially useful with objects that override attribute
# accesses.
class WeakKeyDictionary
    super UserDict
    
    redef fun iteritems is abstract
    
    redef fun pop(key) is abstract
    
    redef fun has_key(key) is abstract
    
    # Return a list of weak references to the keys.
    # The references are not guaranteed to be 'live' at the time
    # they are used, so the result of calling the references needs
    # to be checked before being used.  This can be used to avoid
    # creating references that will cause the garbage collector to
    # keep the keys around longer than needed.
    fun keyrefs is abstract
    
    fun deepcopy(memo: Object) is abstract
    
    private fun private_commit_removals is abstract
    
    redef fun contains(key) is abstract
    
    init do end
    
    redef fun itervalues is abstract
    
    redef fun get(failobj, key) is abstract
    
    redef fun keys is abstract
    
    redef fun update(dict) is abstract
    
    redef fun repr is abstract
    
    redef fun delitem(key) is abstract
    
    redef fun popitem is abstract
    
    redef fun copy is abstract
    
    redef fun iterkeys is abstract
    
    redef fun setdefault(failobj, key) is abstract
    
    redef fun items is abstract
    
    # Return an iterator that yields the weak references to the keys.
    # The references are not guaranteed to be 'live' at the time
    # they are used, so the result of calling the references needs
    # to be checked before being used.  This can be used to avoid
    # creating references that will cause the garbage collector to
    # keep the keys around longer than needed.
    fun iterkeyrefs is abstract
    
    redef fun setitem(item, key) is abstract
    
    redef fun getitem(key) is abstract
    
end

class Weakproxy
    
end

# Mapping class that references values weakly.
# Entries in the dictionary will be discarded when no strong
# reference to the value exists anymore
class WeakValueDictionary
    super UserDict
    
    redef fun popitem is abstract
    
    # Return an iterator that yields the weak references to the values.
    # The references are not guaranteed to be 'live' at the time
    # they are used, so the result of calling the references needs
    # to be checked before being used.  This can be used to avoid
    # creating references that will cause the garbage collector to
    # keep the values around longer than needed.
    fun itervaluerefs is abstract
    
    redef fun has_key(key) is abstract
    
    fun deepcopy(memo: Object) is abstract
    
    private fun private_commit_removals is abstract
    
    redef fun contains(key) is abstract
    
    init do end
    
    redef fun itervalues is abstract
    
    redef fun get(failobj, key) is abstract
    
    # Return a list of weak references to the values.
    # The references are not guaranteed to be 'live' at the time
    # they are used, so the result of calling the references needs
    # to be checked before being used.  This can be used to avoid
    # creating references that will cause the garbage collector to
    # keep the values around longer than needed.
    fun valuerefs is abstract
    
    redef fun update(dict) is abstract
    
    redef fun repr is abstract
    
    redef fun pop(key) is abstract
    
    redef fun iteritems is abstract
    
    redef fun copy is abstract
    
    redef fun iterkeys is abstract
    
    redef fun setdefault(failobj, key) is abstract
    
    redef fun items is abstract
    
    redef fun clear is abstract
    
    redef fun setitem(item, key) is abstract
    
    redef fun values is abstract
    
    redef fun getitem(key) is abstract
    
    redef fun delitem(key) is abstract
    
end

private class IterationGuard
    
    init do end
    
    fun exit(b, e, t: Object) is abstract
    
    fun enter is abstract
    
end

# Specialized reference that includes a key corresponding to the value.
# This is used in the WeakValueDictionary to avoid having to create
# a function object for each key stored in the mapping.  A shared
# callback object can use the 'key' attribute of a KeyedRef instead
# of getting a reference to the key from an enclosing scope.
class KeyedRef
    super Weakref
    
    init do end
    
end

redef class Sys
    
end

class Weakcallableproxy
    
end

# Weak ref proxy used after referent went away.
class ReferenceError
    super StandardError
    
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

