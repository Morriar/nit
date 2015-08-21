# Module/script to byte-compile all .py files to .pyc (or .pyo) files.
# When called as a script with arguments, this compiles the directories
# given as arguments recursively; the -l option prevents it from
# recursing into directories.
# Without arguments, if compiles all modules on sys.path, without
# recursing into subdirectories.  (Even though it should do so for
# packages -- for now, you'll have to deal with packages separately.)
# See module py_compile for details of the actual byte-compilation.
module compileall

import sys
import imp
import os
import struct
import py_compile
import builtins

redef class Sys
    
end

