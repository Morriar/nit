# Abstract Base Classes (ABCs) for collections, according to PEP 3119.
# DON'T USE THIS MODULE DIRECTLY!  The classes here should be imported
# via collections; they are defined here only to alleviate certain
# bootstrapping issues.  Unit tests are in test_collections.
module private__abcoll

import sys
import builtins

class Hashable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun hash is abstract
    
end

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

# A set is a finite, iterable container.
# This class provides concrete generic implementations of all
# methods except for __contains__, __iter__ and __len__.
# To override the comparisons (presumably for speed, as the
# semantics are fixed), all you have to do is redefine __le__ and
# then the other operations will automatically follow suit.
redef class Set
    
    # Return True if two sets have a null intersection.
    fun isdisjoint(other: Object) is abstract
    
    fun gt(other: Object) is abstract
    
    fun xor(other: Object) is abstract
    
    fun sub(other: Object) is abstract
    
    fun ge(other: Object) is abstract
    
    fun ne(other: Object) is abstract
    
    # Construct an instance of the class from any iterable input.
    # Must override this method if the class constructor signature
    # does not accept an iterable for an input.
    private fun private_from_iterable(it, cls: Object) is abstract
    
    fun lt(other: Object) is abstract
    
    fun le(other: Object) is abstract
    
    # Compute the hash value of a set.
    # Note that we don't define __hash__: not all sets are hashable.
    # But if you define a hashable set type, its __hash__ should
    # call this function.
    # This must be compatible __eq__.
    # All sets ought to compare equal if they contain the same
    # elements, regardless of how they are implemented, and
    # regardless of the order of the elements; so there's not much
    # freedom for __eq__ or __hash__.  We match the algorithm used
    # by the built-in frozenset type.
    private fun private_hash is abstract
    
    fun py_and(other: Object) is abstract
    
    fun eq(other: Object) is abstract
    
    fun py_or(other: Object) is abstract
    
end

class Container
    
    fun contains(x: Object) is abstract
    
    fun subclasshook(c, cls: Object) is abstract
    
end

class Sized
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun len is abstract
    
end

class Iterator
    super Iterable
    
    redef fun subclasshook(c, cls) is abstract
    
    redef fun iter is abstract
    
    # Return the next item from the iterator. When exhausted, raise StopIteration
    fun next is abstract
    
end

# All the operations on a read-only sequence.
# Concrete subclasses must override __new__ or __init__,
# __getitem__, and __len__.
class Sequence
    super Sized
    super Container
    super Iterable
    
    # S.count(value) -> integer -- return number of occurrences of value
    fun count(value: Object) is abstract
    
    # S.index(value) -> integer -- return first index of value.
    # Raises ValueError if the value is not present.
    fun index(value: Object) is abstract
    
    fun reversed is abstract
    
    redef fun contains(x) is abstract
    
    redef fun iter is abstract
    
    fun getitem(index: Object) is abstract
    
end

# A MutableMapping is a generic container for associating
# key/value pairs.
# This class provides concrete generic implementations of all
# methods except for __getitem__, __setitem__, __delitem__,
# __iter__, and __len__.
class MutableMapping
    super Mapping
    
    # D.setdefault(k[,d]) -> D.get(k,d), also set D[k]=d if k not in D
    fun setdefault(default, key: Object) is abstract
    
    # D.clear() -> None.  Remove all items from D.
    fun clear is abstract
    
    # D.update([E, ]**F) -> None.  Update D from mapping/iterable E and F.
    # If E present and has a .keys() method, does:     for k in E: D[k] = E[k]
    # If E present and lacks .keys() method, does:     for (k, v) in E: D[k] = v
    # In either case, this is followed by: for k, v in F.items(): D[k] = v
    fun update is abstract
    
    # D.pop(k[,d]) -> v, remove specified key and return the corresponding value.
    # If key is not found, d is returned if given, otherwise KeyError is raised.
    fun pop(default, key: Object) is abstract
    
    fun setitem(key, value: Object) is abstract
    
    fun delitem(key: Object) is abstract
    
    # D.popitem() -> (k, v), remove and return some (key, value) pair
    # as a 2-tuple; but raise KeyError if D is empty.
    fun popitem is abstract
    
end

class KeysView
    super Set
    super MappingView
    
    redef fun private_from_iterable(it, cls) is abstract
    
    redef fun contains(x) is abstract
    
    redef fun iter is abstract
    
end

# A Mapping is a generic container for associating key/value
# pairs.
# This class provides concrete generic implementations of all
# methods except for __getitem__, __iter__, and __len__.
class Mapping
    super Sized
    super Container
    super Iterable
    
    # D.itervalues() -> an iterator over the values of D
    fun itervalues is abstract
    
    # D.get(k[,d]) -> D[k] if k in D, else d.  d defaults to None.
    fun get(default, key: Object) is abstract
    
    # D.keys() -> list of D's keys
    fun keys is abstract
    
    # D.items() -> list of D's (key, value) pairs, as 2-tuples
    fun items is abstract
    
    redef fun contains(x) is abstract
    
    fun ne(other: Object) is abstract
    
    # D.values() -> list of D's values
    fun values is abstract
    
    fun getitem(key: Object) is abstract
    
    # D.iteritems() -> an iterator over the (key, value) items of D
    fun iteritems is abstract
    
    fun eq(other: Object) is abstract
    
    # D.iterkeys() -> an iterator over the keys of D
    fun iterkeys is abstract
    
end

# All the operations on a read-only sequence.
# Concrete subclasses must provide __new__ or __init__,
# __getitem__, __setitem__, __delitem__, __len__, and insert().
class MutableSequence
    super Sequence
    
    # S.insert(index, object) -- insert object before index
    fun insert(index, value: Object) is abstract
    
    # S.reverse() -- reverse *IN PLACE*
    fun reverse is abstract
    
    # S.extend(iterable) -- extend sequence by appending elements from the iterable
    fun extend(values: Object) is abstract
    
    # S.remove(value) -- remove first occurrence of value.
    # Raise ValueError if the value is not present.
    fun remove(value: Object) is abstract
    
    fun setitem(index, value: Object) is abstract
    
    # S.pop([index]) -> item -- remove and return item at index (default last).
    # Raise IndexError if list is empty or index is out of range.
    fun pop(index: Object) is abstract
    
    # S.append(object) -- append object to the end of the sequence
    fun append(value: Object) is abstract
    
    fun iadd(values: Object) is abstract
    
    fun delitem(index: Object) is abstract
    
end

redef class Sys
    
end

class ValuesView
    super MappingView
    
    fun contains(value: Object) is abstract
    
    fun iter is abstract
    
end

class MappingView
    super Sized
    
    init do end
    
    fun repr is abstract
    
    redef fun len is abstract
    
end

class ItemsView
    super Set
    super MappingView
    
    redef fun private_from_iterable(it, cls) is abstract
    
    redef fun contains(x) is abstract
    
    redef fun iter is abstract
    
end

class Callable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun call is abstract
    
end

# A mutable set is a finite, iterable container.
# This class provides concrete generic implementations of all
# methods except for __contains__, __iter__, __len__,
# add(), and discard().
# To override the comparisons (presumably for speed, as the
# semantics are fixed), all you have to do is redefine __le__ and
# then the other operations will automatically follow suit.
class MutableSet
    super Set
    
    fun iand(it: Object) is abstract
    
    fun isub(it: Object) is abstract
    
    fun ixor(it: Object) is abstract
    
    # This is slow (creates N new iterators!) but effective.
    fun clear is abstract
    
    fun ior(it: Object) is abstract
    
    # Remove an element. If not a member, raise a KeyError.
    fun remove(value: Object) is abstract
    
    # Add an element.
    fun add(value: Object) is abstract
    
    # Return the popped value.  Raise KeyError if empty.
    fun pop is abstract
    
    # Remove an element.  Do not raise an exception if absent.
    fun discard(value: Object) is abstract
    
end

class Iterable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun iter is abstract
    
end

