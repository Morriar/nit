# runpy.py - locating and running Python code using the module namespace
# Provides support for locating and running Python scripts using the Python
# module namespace instead of the native filesystem.
# This allows Python code to play nicely with non-filesystem based PEP 302
# importers when locating support scripts as well as when importing modules.
module runpy

import sys
import imp
import builtins

redef class Sys
    
end

# Temporarily replace a module in sys.modules with an empty namespace
private class TempModule
    
    init do end
    
    fun exit is abstract
    
    fun enter is abstract
    
end

private class ModifiedArgv0
    
    init do end
    
    fun exit is abstract
    
    fun enter is abstract
    
end

