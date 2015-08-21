# A more or less complete user-defined wrapper around list objects.
module userlist

import collections
import builtins

redef class Sys
    
end

class UserList
    super MutableSequence
    
    fun delslice(i, j: Object) is abstract
    
    fun imul(n: Object) is abstract
    
    redef fun pop(index) is abstract
    
    fun ge(other: Object) is abstract
    
    fun gt(other: Object) is abstract
    
    fun eq(other: Object) is abstract
    
    redef fun append(value) is abstract
    
    redef fun index(value) is abstract
    
    fun radd(other: Object) is abstract
    
    fun getslice(i, j: Object) is abstract
    
    redef fun contains(x) is abstract
    
    fun ne(other: Object) is abstract
    
    fun setslice(i, j, other: Object) is abstract
    
    fun add(other: Object) is abstract
    
    fun lt(other: Object) is abstract
    
    redef fun iadd(values) is abstract
    
    fun mul(n: Object) is abstract
    
    fun sort is abstract
    
    redef fun extend(values) is abstract
    
    fun repr is abstract
    
    fun len is abstract
    
    fun le(other: Object) is abstract
    
    redef fun delitem(index) is abstract
    
    redef fun count(value) is abstract
    
    redef fun insert(index, value) is abstract
    
    init do end
    
    redef fun reverse is abstract
    
    redef fun remove(value) is abstract
    
    fun cast(other: Object) is abstract
    
    redef fun setitem(index, value) is abstract
    
    redef fun getitem(index) is abstract
    
    fun cmp(other: Object) is abstract
    
end

