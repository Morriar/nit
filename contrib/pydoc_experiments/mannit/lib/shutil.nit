# Utility functions for copying and archiving files and directory trees.
# XXX The functions here don't copy the resource fork or other metadata on Mac.
module shutil

import builtins

redef class Sys
    
end

# Raised when trying to do a kind of operation (e.g. copying) which is
# not supported on a special file (e.g. a named pipe)
class SpecialFileError
    super EnvironmentError
    
end

# Raised when a command could not be executed
class ExecError
    super EnvironmentError
    
end

redef class Error
    
end

