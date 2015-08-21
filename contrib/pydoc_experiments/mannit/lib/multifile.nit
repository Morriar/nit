# A readline()-style interface to the parts of a multipart message.
# The MultiFile class makes each part of a multipart message "feel" like
# an ordinary file, as long as you use fp.readline().  Allows recursive
# use, for nested multipart messages.  Probably best used together
# with module mimetools.
# Suggested use:
# real_fp = open(...)
# fp = MultiFile(real_fp)
# "read some lines from fp"
# fp.push(separator)
# while 1:
# "read lines from fp until it returns an empty string" (A)
# if not fp.next(): break
# fp.pop()
# "read remaining lines from fp until it returns an empty string"
# The latter sequence may be used recursively at (A).
# It is also allowed to use multiple push()...pop() sequences.
# If seekable is given as 0, the class code will not do the bookkeeping
# it normally attempts in order to make seeks relative to the beginning of the
# current file part.  This may be useful when using MultiFile with a non-
# seekable stream object.
module multifile

import builtins

redef class Sys
    
end

class MultiFile
    
    fun is_data(line: Object) is abstract
    
    fun end_marker(str: Object) is abstract
    
    fun read is abstract
    
    fun section_divider(str: Object) is abstract
    
    fun readlines is abstract
    
    fun pop is abstract
    
    fun next is abstract
    
    init do end
    
    fun push(sep: Object) is abstract
    
    fun readline is abstract
    
    fun seek(whence, pos: Object) is abstract
    
    fun tell is abstract
    
end

redef class Error
    
end

