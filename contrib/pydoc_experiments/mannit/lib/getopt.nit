# Parser for command line options.
# This module helps scripts to parse the command line arguments in
# sys.argv.  It supports the same conventions as the Unix getopt()
# function (including the special meanings of arguments of the form `-'
# and `--').  Long options similar to those supported by GNU software
# may be used as well via an optional third argument.  This module
# provides two functions and an exception:
# getopt() -- Parse command line options
# gnu_getopt() -- Like getopt(), but allow option and non-option arguments
# to be intermixed.
# GetoptError -- exception (class) raised with 'opt' attribute, which is the
# option involved with the exception.
module getopt

import os
import builtins

redef class Sys
    
end

class GetoptError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

