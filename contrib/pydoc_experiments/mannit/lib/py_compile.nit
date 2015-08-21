# Routine to "compile" a .py file to a .pyc (or .pyo) file.
# This module has intimate knowledge of the format of .pyc files.
module py_compile

import builtins

redef class Sys
    
end

# Exception raised when an error occurs while attempting to
# compile the file.
# To raise this exception, use
# raise PyCompileError(exc_type,exc_value,file[,msg])
# where
# exc_type:   exception type to be used in error message
# type name can be accesses as class variable
# 'exc_type_name'
# exc_value:  exception value to be used in error message
# can be accesses as class variable 'exc_value'
# file:       name of file being compiled to be used in error message
# can be accesses as class variable 'file'
# msg:        string message to be written as error message
# If no value is given, a default exception message will be given,
# consistent with 'standard' py_compile output.
# message (or default) can be accesses as class variable 'msg'
class PyCompileError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

