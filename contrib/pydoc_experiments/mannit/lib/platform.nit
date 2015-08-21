# This module tries to retrieve as much platform-identifying data as
# possible. It makes this information available via function APIs.
# If called from the command line, it prints the platform
# information concatenated as single string to stdout. The output
# format is useable as part of a filename.
module platform

import sys
import re
import os
import string
import builtins

redef class Sys
    
end

# Fairly portable (alternative) popen implementation.
# This is mostly needed in case os.popen() is not available, or
# doesn't work as advertised, e.g. in Win9X GUI programs like
# PythonWin or IDLE.
# Writing to the pipe is currently not supported.
private class Popen
    
    fun read is abstract
    
    fun close(remove, error: Object) is abstract
    
    init do end
    
    fun readlines is abstract
    
end

