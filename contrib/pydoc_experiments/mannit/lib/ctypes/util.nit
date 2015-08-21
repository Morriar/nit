# create and manipulate C data types in Python
module util

import private__endian
import sys
import os
import util
import builtins

# Union base class
redef class Union
    
end

redef class C_byte
    
end

redef class C_char_p
    
    redef fun repr is abstract
    
end

redef class C_longdouble
    
end

redef class C_wchar
    
end

redef class C_bool
    
end

redef class Sys
    
end

redef class C_void_p
    
end

# Structure with big endian byte order
redef class BigEndianStructure
    
end

redef class C_wchar_p
    
end

# Structure base class
redef class Structure
    
end

# An instance of this class represents a loaded dll/shared
# library, exporting functions using the standard C calling
# convention (named 'cdecl' on Windows).
# The exported functions can be accessed as attributes, or by
# indexing with the function name.  Examples:
# <obj>.qsort -> callable object
# <obj>['qsort'] -> callable object
# Calling the functions releases the Python GIL during the call and
# reacquires it afterwards.
redef class CDLL
    
    redef fun getattr(name) is abstract
    
    init do end
    
    redef fun repr is abstract
    
    redef fun getitem(name_or_ordinal) is abstract
    
end

redef class C_short
    
end

redef class C_double
    
end

# Function Pointer
redef class PyCFuncPtr
    
end

# This class represents the Python library itself.  It allows to
# access Python API functions.  The GIL is not released, and
# Python exceptions are handled correctly.
redef class PyDLL
    
end

redef class C_long
    
end

# XXX to be provided
redef class Pointer
    
end

# XXX to be provided
redef class SimpleCData
    
end

redef class C_uint
    
end

redef class Py_object
    
    redef fun repr is abstract
    
end

redef class C_ubyte
    
end

redef class C_char
    
end

redef class LibraryLoader
    
    redef fun getattr(name) is abstract
    
    init do end
    
    redef fun loadlibrary(name) is abstract
    
    redef fun getitem(name) is abstract
    
end

redef class C_ulong
    
end

redef class C_float
    
end

redef class ArgumentError
    
end

# XXX to be provided
redef class Array
    
end

redef class C_int
    
end

redef class C_ushort
    
end

