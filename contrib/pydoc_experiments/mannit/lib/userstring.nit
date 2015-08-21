# A user-defined wrapper around string objects
# Note: string objects have grown methods in Python 1.6
# This module requires Python 1.6 or later.
module userstring

import sys
import collections
import builtins

redef class Sys
    
end

class UserString
    super Sequence
    
    fun upper is abstract
    
    fun int is abstract
    
    fun float is abstract
    
    fun rpartition(sep: Object) is abstract
    
    fun replace(py_new, maxsplit, old: Object) is abstract
    
    fun endswith(start, py_end, suffix: Object) is abstract
    
    fun splitlines(keepends: Object) is abstract
    
    fun rfind(start, py_end, sub: Object) is abstract
    
    fun strip(chars: Object) is abstract
    
    fun isdigit is abstract
    
    fun isalpha is abstract
    
    fun ljust(width: Object) is abstract
    
    fun isdecimal is abstract
    
    fun find(start, py_end, sub: Object) is abstract
    
    redef fun index(value) is abstract
    
    fun radd(other: Object) is abstract
    
    fun isalnum is abstract
    
    fun title is abstract
    
    fun rindex(start, py_end, sub: Object) is abstract
    
    fun rsplit(maxsplit, sep: Object) is abstract
    
    fun getslice(start, py_end: Object) is abstract
    
    redef fun contains(x) is abstract
    
    fun add(other: Object) is abstract
    
    fun long is abstract
    
    fun decode(errors, encoding: Object) is abstract
    
    fun lstrip(chars: Object) is abstract
    
    init do end
    
    fun complex is abstract
    
    fun split(maxsplit, sep: Object) is abstract
    
    fun rstrip(chars: Object) is abstract
    
    fun isnumeric is abstract
    
    fun mul(n: Object) is abstract
    
    fun translate is abstract
    
    fun isspace is abstract
    
    fun startswith(start, prefix, py_end: Object) is abstract
    
    fun hash is abstract
    
    redef fun getitem(index) is abstract
    
    fun rjust(width: Object) is abstract
    
    fun swapcase is abstract
    
    redef fun len is abstract
    
    fun repr is abstract
    
    fun encode(errors, encoding: Object) is abstract
    
    fun zfill(width: Object) is abstract
    
    fun capitalize is abstract
    
    fun mod(args: Object) is abstract
    
    redef fun count(value) is abstract
    
    fun lower is abstract
    
    fun join(seq: Object) is abstract
    
    fun center(width: Object) is abstract
    
    fun partition(sep: Object) is abstract
    
    fun expandtabs(tabsize: Object) is abstract
    
    fun istitle is abstract
    
    fun str is abstract
    
    fun islower is abstract
    
    fun isupper is abstract
    
    fun cmp(string: Object) is abstract
    
end

# mutable string objects
# Python strings are immutable objects.  This has the advantage, that
# strings may be used as dictionary keys.  If this property isn't needed
# and you insist on changing string values in place instead, you may cheat
# and use MutableString.
# But the purpose of this class is an educational one: to prevent
# people from inventing their own mutable string class derived
# from UserString and than forget thereby to remove (override) the
# __hash__ method inherited from UserString.  This would lead to
# errors that would be very hard to track down.
# A faster and better solution is to rewrite your program using lists.
class MutableString
    super UserString
    super MutableSequence
    
    redef fun insert(index, value) is abstract
    
    init do end
    
    fun imul(n: Object) is abstract
    
    fun setslice(start, py_end, sub: Object) is abstract
    
    redef fun setitem(index, value) is abstract
    
    fun delslice(start, py_end: Object) is abstract
    
    redef fun delitem(index) is abstract
    
    fun immutable is abstract
    
    redef fun iadd(values) is abstract
    
end

