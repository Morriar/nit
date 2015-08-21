# Extended file operations available in POSIX.
# f = posixfile.open(filename, [mode, [bufsize]])
# will create a new posixfile object
# f = posixfile.fileopen(fileobject)
# will create a posixfile object from a builtin file object
# f.file()
# will return the original builtin file object
# f.dup()
# will return a new file object based on a new filedescriptor
# f.dup2(fd)
# will return a new file object based on the given filedescriptor
# f.flags(mode)
# will turn on the associated flag (merge)
# mode can contain the following characters:
# (character representing a flag)
# a       append only flag
# c       close on exec flag
# n       no delay flag
# s       synchronization flag
# (modifiers)
# !       turn flags 'off' instead of default 'on'
# =       copy flags 'as is' instead of default 'merge'
# ?       return a string in which the characters represent the flags
# that are set
# note: - the '!' and '=' modifiers are mutually exclusive.
# - the '?' modifier will return the status of the flags after they
# have been changed by other characters in the mode string
# f.lock(mode [, len [, start [, whence]]])
# will (un)lock a region
# mode can contain the following characters:
# (character representing type of lock)
# u       unlock
# r       read lock
# w       write lock
# (modifiers)
# |       wait until the lock can be granted
# ?       return the first lock conflicting with the requested lock
# or 'None' if there is no conflict. The lock returned is in the
# format (mode, len, start, whence, pid) where mode is a
# character representing the type of lock ('r' or 'w')
# note: - the '?' modifier prevents a region from being locked; it is
# query only
module posixfile

import warnings
import builtins

redef class Sys
    
end

# File wrapper class that provides extra POSIX file routines.
private class Posixfile_
    
    fun dup2(fd: Object) is abstract
    
    fun lock(how: Object) is abstract
    
    fun repr is abstract
    
    fun flags is abstract
    
    fun file is abstract
    
    fun dup is abstract
    
    fun fileopen(file: Object) is abstract
    
    fun open(bufsize, name, mode: Object) is abstract
    
end

