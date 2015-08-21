# Functions to convert between Python values and C structs represented
# as Python strings. It uses format strings (explained below) as compact
# descriptions of the lay-out of the C structs and the intended conversion
# to/from Python values.
# The optional first format char indicates byte order, size and alignment:
# @: native order, size & alignment (default)
# =: native order, std. size & alignment
# <: little-endian, std. size & alignment
# >: big-endian, std. size & alignment
# !: same as >
# The remaining chars indicate types of args and must match exactly;
# these can be preceded by a decimal repeat count:
# x: pad byte (no data); c:char; b:signed byte; B:unsigned byte;
# ?: _Bool (requires C99; if not available, char is used instead)
# h:short; H:unsigned short; i:int; I:unsigned int;
# l:long; L:unsigned long; f:float; d:double.
# Special cases (preceding decimal count indicates length):
# s:string (array of char); p: pascal string (with count byte).
# Special case (only available in native format):
# P:an integer type that is wide enough to hold a pointer.
# Special case (not in native mode unless 'long long' in platform C):
# q:long long; Q:unsigned long long
# Whitespace between formats is ignored.
# The variable struct.error is an exception raised on errors.
module struct

import builtins

redef class Sys
    
end

# Compiled struct object
class Struct
    
end

redef class Error
    
end

