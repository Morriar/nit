# Python part of the warnings subsystem.
module warnings

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

# Exception used by option processing helpers.
private class OptionError
    super Exception
    
end

# Holds the result of a single showwarning() call.
class WarningMessage
    
    init do end
    
    fun str is abstract
    
end

