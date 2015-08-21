module util

import builtins

class TimeoutError
    super ProcessError
    
end

# Process objects represent activity that is run in a separate process
# The class is analagous to `threading.Thread`
class Process
    
    # Method to be run in sub-process; can be overridden in sub-class
    fun run is abstract
    
    # Terminate process; sends SIGTERM signal or uses TerminateProcess()
    fun terminate is abstract
    
    fun repr is abstract
    
    # Start child process
    fun start is abstract
    
    init do end
    
    # Wait until child process terminates
    fun join(timeout: Object) is abstract
    
    # Return whether process is alive
    fun is_alive is abstract
    
    private fun private_bootstrap is abstract
    
end

redef class Sys
    
end

class AuthenticationError
    super ProcessError
    
end

class BufferTooShort
    super ProcessError
    
end

class ProcessError
    super Exception
    
end

