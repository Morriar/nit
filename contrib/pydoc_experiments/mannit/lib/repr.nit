# Redo the builtin repr() (representation) but with limits on most sizes.
module repr

import builtins

redef class Sys
    
end

class Repr
    
    fun repr_instance(x, level: Object) is abstract
    
    fun repr_array(x, level: Object) is abstract
    
    private fun private_repr_iterable(right, level, trail, maxiter, x, left: Object) is abstract
    
    fun repr_tuple(x, level: Object) is abstract
    
    fun repr_list(x, level: Object) is abstract
    
    fun repr_long(x, level: Object) is abstract
    
    fun repr(x: Object) is abstract
    
    fun repr1(x, level: Object) is abstract
    
    init do end
    
    fun repr_set(x, level: Object) is abstract
    
    fun repr_str(x, level: Object) is abstract
    
    fun repr_deque(x, level: Object) is abstract
    
    fun repr_frozenset(x, level: Object) is abstract
    
    fun repr_dict(x, level: Object) is abstract
    
end

# islice(iterable, [start,] stop [, step]) --> islice object
# Return an iterator whose next() method returns selected values from an
# iterable.  If start is specified, will skip all preceding elements;
# otherwise, start defaults to zero.  Step defaults to one.  If
# specified as another value, step determines how many values are
# skipped between successive calls.  Works like a slice() on a list
# but returns an iterator.
class Islice
    
end

