module connection

import process
import dummy
import sys
import os
import util
import builtins

redef class TimeoutError
    
end

# Process objects represent activity that is run in a separate process
# The class is analagous to `threading.Thread`
redef class Process
    
    # Method to be run in sub-process; can be overridden in sub-class
    redef fun run is abstract
    
    # Terminate process; sends SIGTERM signal or uses TerminateProcess()
    redef fun terminate is abstract
    
    redef fun repr is abstract
    
    # Start child process
    redef fun start is abstract
    
    init do end
    
    # Wait until child process terminates
    redef fun join(timeout) is abstract
    
    # Return whether process is alive
    redef fun is_alive is abstract
    
    redef fun private_bootstrap is abstract
    
end

redef class Sys
    
end

redef class AuthenticationError
    
end

redef class BufferTooShort
    
end

redef class ProcessError
    
end

