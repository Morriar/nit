# Classes to represent arbitrary sets (including sets of sets).
# This module implements sets using dictionaries whose values are
# ignored.  The usual operations (union, intersection, deletion, etc.)
# are provided as both methods and operators.
# Important: sets are not sequences!  While they support 'x in s',
# 'len(s)', and 'for x in s', none of those operations are unique for
# sequences; for example, mappings support all three as well.  The
# characteristic operation for sequences is subscripting with small
# integers: s[i], for i in range(len(s)).  Sets don't support
# subscripting at all.  Also, sequences allow multiple occurrences and
# their elements have a definite order; sets on the other hand don't
# record multiple occurrences and don't remember the order of element
# insertion (which is why they don't support s[i]).
# The following classes are provided:
# BaseSet -- All the operations common to both mutable and immutable
# sets. This is an abstract class, not meant to be directly
# instantiated.
# Set -- Mutable sets, subclass of BaseSet; not hashable.
# ImmutableSet -- Immutable sets, subclass of BaseSet; hashable.
# An iterable argument is mandatory to create an ImmutableSet.
# _TemporarilyImmutableSet -- A wrapper around a Set, hashable,
# giving the same hash value as the immutable set equivalent
# would have.  Do not use this class directly.
# Only hashable objects can be added to a Set. In particular, you cannot
# really add a Set as an element to another Set; if you try, what is
# actually added is an ImmutableSet built from it (it compares equal to
# the one you tried adding).
# When you ask if `x in y' where x is a Set and y is a Set or
# ImmutableSet, x is wrapped into a _TemporarilyImmutableSet z, and
# what's tested is actually `z in y'.
module sets

import warnings
import builtins

# Immutable set class.
class ImmutableSet
    super BaseSet
    
    # Construct an immutable set from an optional iterable.
    init do end
    
    fun getstate is abstract
    
    fun hash is abstract
    
    fun setstate(state: Object) is abstract
    
end

# ifilter(function or None, sequence) --> ifilter object
# Return those items of sequence for which function(item) is true.
# If function is None, return the items that are true.
class Ifilter
    
end

# Mutable set class.
redef class Set
    
    # Update a set with the intersection of itself and another.
    fun iand(other: Object) is abstract
    
    # Remove all elements of another set from this set.
    fun isub(other: Object) is abstract
    
    fun getstate is abstract
    
    # Update a set with the symmetric difference of itself and another.
    fun ixor(other: Object) is abstract
    
    # Remove all elements of another set from this set.
    fun difference_update(other: Object) is abstract
    
    # Update a set with the symmetric difference of itself and another.
    fun symmetric_difference_update(other: Object) is abstract
    
    # Remove all elements from this set.
    fun clear is abstract
    
    # Add all values from an iterable (such as a list or file).
    fun update(iterable: Object) is abstract
    
    # Remove and return an arbitrary set element.
    fun pop is abstract
    
    # Update a set with the union of itself and another.
    fun union_update(other: Object) is abstract
    
    fun as_temporarily_immutable is abstract
    
    fun as_immutable is abstract
    
    # Construct a set from an optional iterable.
    init do end
    
    # Add an element to a set.
    # This has no effect if the element is already present.
    fun add(element: Object) is abstract
    
    # Update a set with the intersection of itself and another.
    fun intersection_update(other: Object) is abstract
    
    # Remove an element from a set; it must be a member.
    # If the element is not a member, raise a KeyError.
    fun remove(element: Object) is abstract
    
    # Remove an element from a set if it is a member.
    # If the element is not a member, do nothing.
    fun discard(element: Object) is abstract
    
    # Update a set with the union of itself and another.
    fun ior(other: Object) is abstract
    
    fun setstate(data: Object) is abstract
    
end

# Common base class for mutable and immutable sets.
class BaseSet
    
    private fun private_update(iterable: Object) is abstract
    
    fun gt(other: Object) is abstract
    
    # Report whether another set contains this set.
    fun issubset(other: Object) is abstract
    
    # Return the symmetric difference of two sets as a new set.
    # (I.e. all elements that are in exactly one of the sets.)
    fun symmetric_difference(other: Object) is abstract
    
    private fun private_binary_sanity_check(other: Object) is abstract
    
    # Return a shallow copy of a set.
    fun copy is abstract
    
    # Report whether this set contains another set.
    fun issuperset(other: Object) is abstract
    
    # Return a deep copy of a set; used by copy module.
    fun deepcopy(memo: Object) is abstract
    
    fun eq(other: Object) is abstract
    
    private fun private_compute_hash is abstract
    
    # Return the intersection of two sets as a new set.
    # (I.e. all elements that are in both sets.)
    fun intersection(other: Object) is abstract
    
    # Return the symmetric difference of two sets as a new set.
    # (I.e. all elements that are in exactly one of the sets.)
    fun xor(other: Object) is abstract
    
    # Return the difference of two sets as a new Set.
    # (I.e. all elements that are in this set and not in the other.)
    fun sub(other: Object) is abstract
    
    # Return the union of two sets as a new set.
    # (I.e. all elements that are in either set.)
    fun union(other: Object) is abstract
    
    # Report whether an element is a member of a set.
    # (Called in response to the expression `element in self'.)
    fun contains(element: Object) is abstract
    
    fun ne(other: Object) is abstract
    
    # This is an abstract class.
    init do end
    
    fun lt(other: Object) is abstract
    
    # Return string representation of a set.
    # This looks like 'Set([<list of elements>])'.
    fun repr is abstract
    
    # Return the number of elements of a set.
    fun len is abstract
    
    private fun private_repr(sorted: Object) is abstract
    
    # Return the difference of two sets as a new Set.
    # (I.e. all elements that are in this set and not in the other.)
    fun difference(other: Object) is abstract
    
    # Return an iterator over the elements or a set.
    # This is the keys iterator for the underlying dict.
    fun iter is abstract
    
    # Return the intersection of two sets as a new set.
    # (I.e. all elements that are in both sets.)
    fun py_and(other: Object) is abstract
    
    # Return the union of two sets as a new set.
    # (I.e. all elements that are in either set.)
    fun py_or(other: Object) is abstract
    
    fun cmp(other: Object) is abstract
    
end

redef class Sys
    
end

private class TemporarilyImmutableSet
    super BaseSet
    
    init do end
    
    fun hash is abstract
    
end

# ifilterfalse(function or None, sequence) --> ifilterfalse object
# Return those items of sequence for which function(item) is false.
# If function is None, return the items that are false.
class Ifilterfalse
    
end

