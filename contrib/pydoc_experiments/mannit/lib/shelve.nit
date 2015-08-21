# Manage shelves of pickled objects.
# A "shelf" is a persistent, dictionary-like object.  The difference
# with dbm databases is that the values (not the keys!) in a shelf can
# be essentially arbitrary Python objects -- anything that the "pickle"
# module can handle.  This includes most class instances, recursive data
# types, and objects containing lots of shared sub-objects.  The keys
# are ordinary strings.
# To summarize the interface (key is a string, data is an arbitrary
# object):
# import shelve
# d = shelve.open(filename) # open, with (g)dbm filename -- no suffix
# d[key] = data   # store data at key (overwrites old data if
# # using an existing key)
# data = d[key]   # retrieve a COPY of the data at key (raise
# # KeyError if no such key) -- NOTE that this
# # access returns a *copy* of the entry!
# del d[key]      # delete data stored at key (raises KeyError
# # if no such key)
# flag = d.has_key(key)   # true if the key exists; same as "key in d"
# list = d.keys() # a list of all existing keys (slow!)
# d.close()       # close it
# Dependent on the implementation, closing a persistent dictionary may
# or may not be necessary to flush changes to disk.
# Normally, d[key] returns a COPY of the entry.  This needs care when
# mutable entries are mutated: for example, if d[key] is a list,
# d[key].append(anitem)
# does NOT modify the entry d[key] itself, as stored in the persistent
# mapping -- it only modifies the copy, which is then immediately
# discarded, so that the append has NO effect whatsoever.  To append an
# item to d[key] in a way that will affect the persistent mapping, use:
# data = d[key]
# data.append(anitem)
# d[key] = data
# To avoid the problem with mutable entries, you may pass the keyword
# argument writeback=True in the call to shelve.open.  When you use:
# d = shelve.open(filename, writeback=True)
# then d keeps a cache of all entries you access, and writes them all back
# to the persistent mapping when you call d.close().  This ensures that
# such usage as d[key].append(anitem) works as intended.
# However, using keyword argument writeback=True may consume vast amount
# of memory for the cache, and it may make d.close() very slow, if you
# access many of d's entries after opening it in this way: d has no way to
# check which of the entries you access are mutable and/or which ones you
# actually mutate, so it must cache, and write back at close, all of the
# entries that you access.  You can call d.sync() to write back all the
# entries in the cache, and empty the cache (d.sync() also synchronizes
# the persistent dictionary on disk, if feasible).
module shelve

import userdict
import builtins

redef class Sys
    
end

# Shelf implementation using the "BSD" db interface.
# This adds methods first(), next(), previous(), last() and
# set_location() that have no counterpart in [g]dbm databases.
# The actual database must be opened using one of the "bsddb"
# modules "open" routines (i.e. bsddb.hashopen, bsddb.btopen or
# bsddb.rnopen) and passed to the constructor.
# See the module's __doc__ string for an overview of the interface.
class BsdDbShelf
    super Shelf
    
    fun last is abstract
    
    fun set_location(key: Object) is abstract
    
    fun next is abstract
    
    init do end
    
    fun first is abstract
    
    fun previous is abstract
    
end

# Marker for a closed dict.  Access attempts raise a ValueError.
private class ClosedDict
    super DictMixin
    
    redef fun repr is abstract
    
    fun closed is abstract
    
end

# Shelf implementation using the "anydbm" generic dbm interface.
# This is initialized with the filename for the dbm database.
# See the module's __doc__ string for an overview of the interface.
class DbfilenameShelf
    super Shelf
    
    init do end
    
end

# Base class for shelf implementations.
# This is initialized with a dictionary-like object.
# See the module's __doc__ string for an overview of the interface.
class Shelf
    super DictMixin
    
    init do end
    
    redef fun get(default, key) is abstract
    
    fun keys is abstract
    
    redef fun contains(key) is abstract
    
    fun sync is abstract
    
    redef fun len is abstract
    
    fun setitem(key, value: Object) is abstract
    
    redef fun has_key(key) is abstract
    
    fun del is abstract
    
    fun delitem(key: Object) is abstract
    
    fun getitem(key: Object) is abstract
    
    fun close is abstract
    
end

