module private__weakrefset

import builtins

redef class Sys
    
end

class Weakref
    
end

private class IterationGuard
    
    init do end
    
    fun exit(b, e, t: Object) is abstract
    
    fun enter is abstract
    
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

