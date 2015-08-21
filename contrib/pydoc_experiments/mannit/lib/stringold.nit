# Common string manipulations.
# Public module variables:
# whitespace -- a string containing all characters considered whitespace
# lowercase -- a string containing all characters considered lowercase letters
# uppercase -- a string containing all characters considered uppercase letters
# letters -- a string containing all characters considered letters
# digits -- a string containing all characters considered decimal digits
# hexdigits -- a string containing all characters considered hexadecimal digits
# octdigits -- a string containing all characters considered octal digits
module stringold

import builtins

# int(x=0) -> int or long
# int(x, base=10) -> int or long
# Convert a number or string to an integer, or return 0 if no arguments
# are given.  If x is floating point, the conversion truncates towards zero.
# If x is outside the integer range, the function returns a long instead.
# If x is not a number or if base is given, then x must be a string or
# Unicode object representing an integer literal in the given base.  The
# literal can be preceded by '+' or '-' and be surrounded by whitespace.
# The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to
# interpret the base from the string as an integer literal.
# >>> int('0b100', base=0)
# 4
class Int
    
end

# float(x) -> floating point number
# Convert a string or number to a floating point number, if possible.
class Float
    
end

# long(x=0) -> long
# long(x, base=10) -> long
# Convert a number or string to a long integer, or return 0L if no arguments
# are given.  If x is floating point, the conversion truncates towards zero.
# If x is not a number or if base is given, then x must be a string or
# Unicode object representing an integer literal in the given base.  The
# literal can be preceded by '+' or '-' and be surrounded by whitespace.
# The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to
# interpret the base from the string as an integer literal.
# >>> int('0b100', base=0)
# 4L
class Long
    
end

redef class Sys
    
end

# str(object='') -> string
# Return a nice string representation of the object.
# If the argument is a string, the return value is the same object.
class Str
    super Basestring
    
end

# Inappropriate argument value (of correct type).
redef class ValueError
    
end

