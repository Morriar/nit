# High-perfomance logging profiler, mostly written in C.
module stones

import stones
import stats
import log
import builtins

redef class Sys
    
end

redef class Profile
    
    # Return the file descriptor of the profiler's log file.
    redef fun fileno is abstract
    
    # Profile an exec-compatible string in the script
    # environment.
    # The globals from the __main__ module are used as both the
    # globals and locals for the script.
    redef fun run(cmd) is abstract
    
    # Stop the profiler.
    redef fun stop is abstract
    
    # Start the profiler.
    redef fun start is abstract
    
    init do end
    
    # Close the logfile and terminate the profiler.
    redef fun close is abstract
    
    # Profile a single call of a callable.
    # Additional positional and keyword arguments may be passed
    # along; the result of the call is returned, and exceptions are
    # allowed to propogate cleanly, while ensuring that profiling is
    # disabled on the way out.
    redef fun runcall(func) is abstract
    
    # Add an arbitrary labelled value to the profile log.
    redef fun addinfo(key, value) is abstract
    
    # Evaluate an exec-compatible string in a specific
    # environment.
    # The string is compiled before profiling begins.
    redef fun runctx(cmd, globals, locals) is abstract
    
end

redef class ProfilerError
    
end

