# A more or less complete user-defined wrapper around dictionary objects.
module userdict

import builtins

redef class Sys
    
end

class UserDict
    
    fun iteritems is abstract
    
    fun pop(key: Object) is abstract
    
    fun has_key(key: Object) is abstract
    
    fun contains(key: Object) is abstract
    
    init do end
    
    fun itervalues is abstract
    
    fun get(failobj, key: Object) is abstract
    
    fun keys is abstract
    
    fun update(dict: Object) is abstract
    
    fun len is abstract
    
    fun repr is abstract
    
    fun delitem(key: Object) is abstract
    
    fun popitem is abstract
    
    fun copy is abstract
    
    fun iterkeys is abstract
    
    fun fromkeys(iterable, value, cls: Object) is abstract
    
    fun setdefault(failobj, key: Object) is abstract
    
    fun items is abstract
    
    fun clear is abstract
    
    fun setitem(item, key: Object) is abstract
    
    fun values is abstract
    
    fun getitem(key: Object) is abstract
    
    fun cmp(dict: Object) is abstract
    
end

class DictMixin
    
    fun setdefault(default, key: Object) is abstract
    
    fun get(default, key: Object) is abstract
    
    fun items is abstract
    
    fun clear is abstract
    
    fun contains(key: Object) is abstract
    
    fun update(other: Object) is abstract
    
    fun pop(key: Object) is abstract
    
    fun repr is abstract
    
    fun has_key(key: Object) is abstract
    
    fun iter is abstract
    
    fun len is abstract
    
    fun itervalues is abstract
    
    fun popitem is abstract
    
    fun values is abstract
    
    fun iteritems is abstract
    
    fun iterkeys is abstract
    
    fun cmp(other: Object) is abstract
    
end

class IterableUserDict
    super UserDict
    
    fun iter is abstract
    
end

