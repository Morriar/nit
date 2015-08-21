# Various tools used by MIME-reading or MIME-writing programs.
module mimetools

import builtins

redef class Sys
    
end

# A context manager that copies and restores the warnings filter upon
# exiting the context.
# The 'record' argument specifies whether warnings should be captured by a
# custom implementation of warnings.showwarning() and be appended to a list
# returned by the context manager. Otherwise None is returned by the context
# manager. The objects appended to the list are arguments whose attributes
# mirror the arguments to showwarning().
# The 'module' argument is to specify an alternative module to the module
# named 'warnings' and imported under that name. This argument is only useful
# when testing the warnings module itself.
class Catch_warnings
    
    # Specify whether to record warnings and if an alternative module
    # should be used other than sys.modules['warnings'].
    # For compatibility with Python 3.0, please consider all arguments to be
    # keyword-only.
    init do end
    
    fun exit is abstract
    
    fun repr is abstract
    
    fun enter is abstract
    
end

# A derived class of rfc822.Message that knows about MIME headers and
# contains some hooks for decoding encoded and multipart messages.
class Message
    
    fun getparamnames is abstract
    
    fun getmaintype is abstract
    
    fun parsetype is abstract
    
    fun getencoding is abstract
    
    fun gettype is abstract
    
    fun getplist is abstract
    
    fun getsubtype is abstract
    
    init do end
    
    fun getparam(name: Object) is abstract
    
    fun parseplist is abstract
    
end

