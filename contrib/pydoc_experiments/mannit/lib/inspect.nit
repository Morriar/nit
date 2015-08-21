# Get useful information from live Python objects.
# This module encapsulates the interface provided by the internal special
# attributes (func_*, co_*, im_*, tb_*, etc.) in a friendlier fashion.
# It also provides some help for examining source code and class layout.
# Here are some of the useful functions provided by this module:
# ismodule(), isclass(), ismethod(), isfunction(), isgeneratorfunction(),
# isgenerator(), istraceback(), isframe(), iscode(), isbuiltin(),
# isroutine() - check object types
# getmembers() - get members of an object that satisfy a given condition
# getfile(), getsourcefile(), getsource() - find an object's source code
# getdoc(), getcomments() - get documentation on an object
# getmodule() - determine the module that an object came from
# getclasstree() - arrange classes so as to represent their hierarchy
# getargspec(), getargvalues(), getcallargs() - get info about function arguments
# formatargspec(), formatargvalues() - format an argument spec
# getouterframes(), getinnerframes() - get info about frames
# currentframe() - get the current stack frame
# stack(), trace() - get info about frames on the stack or in a traceback
module inspect

import builtins

# Attribute(name, kind, defining_class, object)
class Attribute
    super Tuple
    
    # Return a new Attribute object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new Attribute object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# Traceback(filename, lineno, function, code_context, index)
class Traceback
    super Tuple
    
    # Return a new Traceback object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new Traceback object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# attrgetter(attr, ...) --> attrgetter object
# Return a callable object that fetches the given attribute(s) from its operand.
# After f = attrgetter('name'), the call f(r) returns r.name.
# After g = attrgetter('name', 'date'), the call g(r) returns (r.name, r.date).
# After h = attrgetter('name.first', 'name.last'), the call h(r) returns
# (r.name.first, r.name.last).
class Attrgetter
    
end

class EndOfBlock
    super Exception
    
end

redef class Sys
    
end

# ArgSpec(args, varargs, keywords, defaults)
class ArgSpec
    super Tuple
    
    # Return a new ArgSpec object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new ArgSpec object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# Arguments(args, varargs, keywords)
class Arguments
    super Tuple
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Make a new Arguments object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new Arguments object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# ModuleInfo(name, suffix, mode, module_type)
class ModuleInfo
    super Tuple
    
    # Return a new ModuleInfo object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new ModuleInfo object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# ArgInfo(args, varargs, keywords, locals)
class ArgInfo
    super Tuple
    
    # Return a new ArgInfo object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new ArgInfo object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# Provide a tokeneater() method to detect the end of a code block.
class BlockFinder
    
    fun tokeneater(token, py_type, line, erow_ecol, srow_scol: Object) is abstract
    
    init do end
    
end

