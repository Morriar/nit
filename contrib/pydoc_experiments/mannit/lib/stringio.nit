# File-like objects that read from or write to a string buffer.
# This implements (nearly) all stdio methods.
# f = StringIO()      # ready for writing
# f = StringIO(buf)   # ready for reading
# f.close()           # explicitly release resources held
# flag = f.isatty()   # always false
# pos = f.tell()      # get current position
# f.seek(pos)         # set current position
# f.seek(pos, mode)   # mode 0: absolute; 1: relative; 2: relative to EOF
# buf = f.read()      # read until EOF
# buf = f.read(n)     # read up to n bytes
# buf = f.readline()  # read until end of line ('\n') or EOF
# list = f.readlines()# list of f.readline() results until EOF
# f.truncate([size])  # truncate file at to at most size (default: current pos)
# f.write(buf)        # write at current position
# f.writelines(list)  # for line in list: f.write(line)
# f.getvalue()        # return whole file's contents as a string
# Notes:
# - Using a real file is often faster (but less convenient).
# - There's also a much faster implementation in C, called cStringIO, but
# it's not subclassable.
# - fileno() is left unimplemented so that code which uses it triggers
# an exception early.
# - Seeking far beyond EOF and then writing will insert real null
# bytes that occupy space in the buffer.
# - There's a simple test set (see end of this file).
module stringio

import builtins

redef class Sys
    
end

# class StringIO([buffer])
# When a StringIO object is created, it can be initialized to an existing
# string by passing the string to the constructor. If no string is given,
# the StringIO will start empty.
# The StringIO object can accept either Unicode or 8-bit strings, but
# mixing the two may take some care. If both are used, 8-bit strings that
# cannot be interpreted as 7-bit ASCII (that use the 8th bit) will cause
# a UnicodeError to be raised when getvalue() is called.
class StringIO
    
    # Write a sequence of strings to the file. The sequence can be any
    # iterable object producing strings, typically a list of strings. There
    # is no return value.
    # (The name is intended to match readlines(); writelines() does not add
    # line separators.)
    fun writelines(iterable: Object) is abstract
    
    # Truncate the file's size.
    # If the optional size argument is present, the file is truncated to
    # (at most) that size. The size defaults to the current position.
    # The current file position is not changed unless the position
    # is beyond the new file size.
    # If the specified size exceeds the file's current size, the
    # file remains unchanged.
    fun truncate(size: Object) is abstract
    
    # Read at most size bytes from the file
    # (less if the read hits EOF before obtaining size bytes).
    # If the size argument is negative or omitted, read all data until EOF
    # is reached. The bytes are returned as a string object. An empty
    # string is returned when EOF is encountered immediately.
    fun read(n: Object) is abstract
    
    # Read until EOF using readline() and return a list containing the
    # lines thus read.
    # If the optional sizehint argument is present, instead of reading up
    # to EOF, whole lines totalling approximately sizehint bytes (or more
    # to accommodate a final whole line).
    fun readlines(sizehint: Object) is abstract
    
    fun iter is abstract
    
    # A file object is its own iterator, for example iter(f) returns f
    # (unless f is closed). When a file is used as an iterator, typically
    # in a for loop (for example, for line in f: print line), the next()
    # method is called repeatedly. This method returns the next input line,
    # or raises StopIteration when EOF is hit.
    fun next is abstract
    
    # Write a string to the file.
    # There is no return value.
    fun write(s: Object) is abstract
    
    init do end
    
    # Flush the internal buffer
    fun flush is abstract
    
    # Free the memory buffer.
    fun close is abstract
    
    # Returns False because StringIO objects are not connected to a
    # tty-like device.
    fun isatty is abstract
    
    # Read one entire line from the file.
    # A trailing newline character is kept in the string (but may be absent
    # when a file ends with an incomplete line). If the size argument is
    # present and non-negative, it is a maximum byte count (including the
    # trailing newline) and an incomplete line may be returned.
    # An empty string is returned only when EOF is encountered immediately.
    # Note: Unlike stdio's fgets(), the returned string contains null
    # characters ('\0') if they occurred in the input.
    fun readline(length: Object) is abstract
    
    # Retrieve the entire contents of the "file" at any time before
    # the StringIO object's close() method is called.
    # The StringIO object can accept either Unicode or 8-bit strings,
    # but mixing the two may take some care. If both are used, 8-bit
    # strings that cannot be interpreted as 7-bit ASCII (that use the
    # 8th bit) will cause a UnicodeError to be raised when getvalue()
    # is called.
    fun getvalue is abstract
    
    # Set the file's current position.
    # The mode argument is optional and defaults to 0 (absolute file
    # positioning); other values are 1 (seek relative to the current
    # position) and 2 (seek relative to the file's end).
    # There is no return value.
    fun seek(pos, mode: Object) is abstract
    
    # Return the file's current position.
    fun tell is abstract
    
end

