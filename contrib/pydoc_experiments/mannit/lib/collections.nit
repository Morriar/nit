module collections

import builtins

class Container
    
    fun contains(x: Object) is abstract
    
    fun subclasshook(c, cls: Object) is abstract
    
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

# Dictionary that remembers insertion order
class OrderedDict
    super Dict
    
    # od.iteritems -> an iterator over the (key, value) pairs in od
    fun iteritems is abstract
    
    # Return state information for pickling
    fun reduce is abstract
    
    # od.pop(k[,d]) -> v, remove specified key and return the corresponding
    # value.  If key is not found, d is returned if given, otherwise KeyError
    # is raised.
    fun pop(default, key: Object) is abstract
    
    # od.viewkeys() -> a set-like object providing a view on od's keys
    fun viewkeys is abstract
    
    # od.__eq__(y) <==> od==y.  Comparison to another OD is order-sensitive
    # while comparison to a regular mapping is order-insensitive.
    fun eq(other: Object) is abstract
    
    # od.viewitems() -> a set-like object providing a view on od's items
    fun viewitems is abstract
    
    # od.__ne__(y) <==> od!=y
    fun ne(other: Object) is abstract
    
    # Initialize an ordered dictionary.  The signature is the same as
    # regular dictionaries, but keyword arguments are not recommended because
    # their insertion order is arbitrary.
    init do end
    
    # od.itervalues -> an iterator over the values in od
    fun itervalues is abstract
    
    # od.keys() -> list of keys in od
    fun keys is abstract
    
    # od.__reversed__() <==> reversed(od)
    fun reversed is abstract
    
    # D.update([E, ]**F) -> None.  Update D from mapping/iterable E and F.
    # If E present and has a .keys() method, does:     for k in E: D[k] = E[k]
    # If E present and lacks .keys() method, does:     for (k, v) in E: D[k] = v
    # In either case, this is followed by: for k, v in F.items(): D[k] = v
    fun update is abstract
    
    # od.__repr__() <==> repr(od)
    fun repr(repr_running: Object) is abstract
    
    # od.__delitem__(y) <==> del od[y]
    fun delitem(key, dict_delitem: Object) is abstract
    
    # od.popitem() -> (k, v), return and remove a (key, value) pair.
    # Pairs are returned in LIFO order if last is true or FIFO order if false.
    fun popitem(last: Object) is abstract
    
    # od.copy() -> a shallow copy of od
    fun copy is abstract
    
    # od.iterkeys() -> an iterator over the keys in od
    fun iterkeys is abstract
    
    # OD.fromkeys(S[, v]) -> New ordered dictionary with keys from S.
    # If not specified, the value defaults to None.
    fun fromkeys(iterable, value, cls: Object) is abstract
    
    # od.setdefault(k[,d]) -> od.get(k,d), also set od[k]=d if k not in od
    fun setdefault(default, key: Object) is abstract
    
    # od.viewvalues() -> an object providing a view on od's values
    fun viewvalues is abstract
    
    # od.items() -> list of (key, value) pairs in od
    fun items is abstract
    
    # od.clear() -> None.  Remove all items from od.
    fun clear is abstract
    
    # od.__iter__() <==> iter(od)
    fun iter is abstract
    
    # od.__setitem__(i, y) <==> od[i]=y
    fun setitem(dict_setitem, key, value: Object) is abstract
    
    # od.values() -> list of values in od
    fun values is abstract
    
end

# defaultdict(default_factory[, ...]) --> dict with default factory
# The default factory is called without arguments to produce
# a new value when a key is not present, in __getitem__ only.
# A defaultdict compares equal to a dict with the same items.
# All remaining arguments are treated the same as if they were
# passed to the dict constructor, including keyword arguments.
class Defaultdict
    super Dict
    
end

redef class Sys
    
end

# repeat(object [,times]) -> create an iterator which returns the object
# for the specified number of times.  If not specified, returns the object
# endlessly.
class Repeat
    
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

class Callable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun call is abstract
    
end

# imap(func, *iterables) --> imap object
# Make an iterator that computes the function using arguments from
# each of the iterables.  Like map() except that it returns
# an iterator instead of a list and that it stops when the shortest
# iterable is exhausted instead of filling in None for shorter
# iterables.
class Imap
    
end

class MappingView
    super Sized
    
    init do end
    
    fun repr is abstract
    
    redef fun len is abstract
    
end

class Hashable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun hash is abstract
    
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

class ValuesView
    super MappingView
    
    fun contains(value: Object) is abstract
    
    fun iter is abstract
    
end

# Dict subclass for counting hashable items.  Sometimes called a bag
# or multiset.  Elements are stored as dictionary keys and their counts
# are stored as dictionary values.
# >>> c = Counter('abcdeabcdabcaba')  # count elements from a string
# >>> c.most_common(3)                # three most common elements
# [('a', 5), ('b', 4), ('c', 3)]
# >>> sorted(c)                       # list all unique elements
# ['a', 'b', 'c', 'd', 'e']
# >>> ''.join(sorted(c.elements()))   # list elements with repetitions
# 'aaaaabbbbcccdde'
# >>> sum(c.values())                 # total of all counts
# 15
# >>> c['a']                          # count of letter 'a'
# 5
# >>> for elem in 'shazam':           # update counts from an iterable
# ...     c[elem] += 1                # by adding 1 to each element's count
# >>> c['a']                          # now there are seven 'a'
# 7
# >>> del c['b']                      # remove all 'b'
# >>> c['b']                          # now there are zero 'b'
# 0
# >>> d = Counter('simsalabim')       # make another counter
# >>> c.update(d)                     # add in the second counter
# >>> c['a']                          # now there are nine 'a'
# 9
# >>> c.clear()                       # empty the counter
# >>> c
# Counter()
# Note:  If a count is set to zero or reduced to zero, it will remain
# in the counter until the entry is deleted or the counter is cleared:
# >>> c = Counter('aaabbc')
# >>> c['b'] -= 2                     # reduce the count of 'b' by two
# >>> c.most_common()                 # 'b' is still in, but its count is zero
# [('a', 3), ('c', 1), ('b', 0)]
class Counter
    super Dict
    
    # Iterator over elements repeating each as many times as its count.
    # >>> c = Counter('ABCABC')
    # >>> sorted(c.elements())
    # ['A', 'A', 'B', 'B', 'C', 'C']
    # # Knuth's example for prime factors of 1836:  2**2 * 3**3 * 17**1
    # >>> prime_factors = Counter({2: 2, 3: 3, 17: 1})
    # >>> product = 1
    # >>> for factor in prime_factors.elements():     # loop over factors
    # ...     product *= factor                       # and multiply them
    # >>> product
    # 1836
    # Note, if an element's count has been set to zero or is a negative
    # number, elements() will ignore it.
    fun elements is abstract
    
    # Create a new, empty Counter object.  And if given, count elements
    # from an input iterable.  Or, initialize the count from another mapping
    # of elements to their counts.
    # >>> c = Counter()                           # a new, empty counter
    # >>> c = Counter('gallahad')                 # a new counter from an iterable
    # >>> c = Counter({'a': 4, 'b': 2})           # a new counter from a mapping
    # >>> c = Counter(a=4, b=2)                   # a new counter from keyword args
    init do end
    
    # Subtract count, but keep only results with positive counts.
    # >>> Counter('abbbc') - Counter('bccd')
    # Counter({'b': 2, 'a': 1})
    fun sub(other: Object) is abstract
    
    # The count of elements not in the Counter is zero.
    fun missing(key: Object) is abstract
    
    fun fromkeys(cls, iterable, v: Object) is abstract
    
    fun reduce is abstract
    
    # Like dict.update() but add counts instead of replacing them.
    # Source can be an iterable, a dictionary, or another Counter instance.
    # >>> c = Counter('which')
    # >>> c.update('witch')           # add elements from another iterable
    # >>> d = Counter('watch')
    # >>> c.update(d)                 # add elements from another counter
    # >>> c['h']                      # four 'h' in which, witch, and watch
    # 4
    fun update(iterable: Object) is abstract
    
    fun repr is abstract
    
    # Add counts from two counters.
    # >>> Counter('abbb') + Counter('bcc')
    # Counter({'b': 4, 'c': 2, 'a': 1})
    fun add(other: Object) is abstract
    
    # Like dict.__delitem__() but does not raise KeyError for missing values.
    fun delitem(elem: Object) is abstract
    
    # List the n most common elements and their counts from the most
    # common to the least.  If n is None, then list all element counts.
    # >>> Counter('abcdeabcdabcaba').most_common(3)
    # [('a', 5), ('b', 4), ('c', 3)]
    fun most_common(n: Object) is abstract
    
    # Intersection is the minimum of corresponding counts.
    # >>> Counter('abbb') & Counter('bcc')
    # Counter({'b': 1})
    fun py_and(other: Object) is abstract
    
    # Return a shallow copy.
    fun copy is abstract
    
    # Like dict.update() but subtracts counts instead of replacing them.
    # Counts can be reduced below zero.  Both the inputs and outputs are
    # allowed to contain zero and negative counts.
    # Source can be an iterable, a dictionary, or another Counter instance.
    # >>> c = Counter('which')
    # >>> c.subtract('witch')             # subtract elements from another iterable
    # >>> c.subtract(Counter('watch'))    # subtract elements from another counter
    # >>> c['h']                          # 2 in which, minus 1 in witch, minus 1 in watch
    # 0
    # >>> c['w']                          # 1 in which, minus 1 in witch, minus 1 in watch
    # -1
    fun subtract(iterable: Object) is abstract
    
    # Union is the maximum of value in either of the input counters.
    # >>> Counter('abbb') | Counter('bcc')
    # Counter({'b': 3, 'c': 2, 'a': 1})
    fun py_or(other: Object) is abstract
    
end

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
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

class Sized
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun len is abstract
    
end

# itemgetter(item, ...) --> itemgetter object
# Return a callable object that fetches the given item(s) from its operand.
# After f = itemgetter(2), the call f(r) returns r[2].
# After g = itemgetter(2, 5, 3), the call g(r) returns (r[2], r[5], r[3])
class Itemgetter
    
end

# starmap(function, sequence) --> starmap object
# Return an iterator whose values are returned from the function evaluated
# with a argument tuple taken from the given sequence.
class Starmap
    
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

# chain(*iterables) --> chain object
# Return a chain object whose .next() method returns elements from the
# first iterable until it is exhausted, then elements from the next
# iterable, until all of the iterables are exhausted.
class Chain
    
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

class ItemsView
    super Set
    super MappingView
    
    redef fun private_from_iterable(it, cls) is abstract
    
    redef fun contains(x) is abstract
    
    redef fun iter is abstract
    
end

class Iterable
    
    fun subclasshook(c, cls: Object) is abstract
    
    fun iter is abstract
    
end

