# Mimification and unmimification of mail messages.
# Decode quoted-printable parts of a mail message or encode using
# quoted-printable.
# Usage:
# mimify(input, output)
# unmimify(input, output, decode_base64 = 0)
# to encode and decode respectively.  Input and output may be the name
# of a file or an open file object.  Only a readline() method is used
# on the input file, only a write() method is used on the output file.
# When using file names, the input and output file names may be the
# same.
# Interactive usage:
# mimify.py -e [infile [outfile]]
# mimify.py -d [infile [outfile]]
# to encode and decode respectively.  Infile defaults to standard
# input and outfile to standard output.
module mimify

import sys
import re
import warnings
import builtins

redef class Sys
    
end

class HeaderFile
    
    fun readline is abstract
    
    init do end
    
end

# A simple fake file object that knows about limited read-ahead and
# boundaries.  The only supported method is readline().
class File
    
    fun readline is abstract
    
    init do end
    
end

