# Support for Berkeley DB 4.3 through 5.3 with a simple interface.
# For the full featured object oriented interface use the bsddb.db module
# instead.  It mirrors the Oracle Berkeley DB C API.
module dbutils

import sys
import warnings
import dbobj
import dbutils
import dbshelve
import collections
import dbrecio
import os
import dbtables
import builtins

# A simple wrapper around DB that makes it look like the bsddbobject in
# the old module.  It uses a cursor as needed to provide DB traversal.
redef class DBWithCursor
    
    init do end
    
    redef fun last is abstract
    
    redef fun private_closecursors(save) is abstract
    
    redef fun set_location(key) is abstract
    
    redef fun keys is abstract
    
    redef fun first is abstract
    
    redef fun sync is abstract
    
    redef fun repr is abstract
    
    redef fun private_checkopen is abstract
    
    redef fun len is abstract
    
    redef fun private_checkcursor is abstract
    
    redef fun setitem(key, value) is abstract
    
    redef fun has_key(key) is abstract
    
    redef fun del is abstract
    
    redef fun delitem(key) is abstract
    
    redef fun getitem(key) is abstract
    
    redef fun close is abstract
    
    redef fun next is abstract
    
    redef fun isopen is abstract
    
    redef fun previous is abstract
    
end

# A MutableMapping is a generic container for associating
# key/value pairs.
# This class provides concrete generic implementations of all
# methods except for __getitem__, __setitem__, __delitem__,
# __iter__, and __len__.
redef class MutableMapping
    
    # D.setdefault(k[,d]) -> D.get(k,d), also set D[k]=d if k not in D
    redef fun setdefault(default, key) is abstract
    
    # D.clear() -> None.  Remove all items from D.
    redef fun clear is abstract
    
    # D.update([E, ]**F) -> None.  Update D from mapping/iterable E and F.
    # If E present and has a .keys() method, does:     for k in E: D[k] = E[k]
    # If E present and lacks .keys() method, does:     for (k, v) in E: D[k] = v
    # In either case, this is followed by: for k, v in F.items(): D[k] = v
    redef fun update is abstract
    
    # D.pop(k[,d]) -> v, remove specified key and return the corresponding value.
    # If key is not found, d is returned if given, otherwise KeyError is raised.
    redef fun pop(default, key) is abstract
    
    redef fun setitem(key, value) is abstract
    
    redef fun delitem(key) is abstract
    
    # D.popitem() -> (k, v), remove and return some (key, value) pair
    # as a 2-tuple; but raise KeyError if D is empty.
    redef fun popitem is abstract
    
end

redef class Sys
    
end

redef class DBError
    
end

redef class Weakref
    
end

redef class Iter_mixin
    
    redef fun private_make_iter_cursor is abstract
    
    redef fun private_gen_cref_cleaner(key) is abstract
    
    redef fun iter is abstract
    
    redef fun iteritems is abstract
    
end

