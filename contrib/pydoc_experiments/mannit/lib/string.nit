# A collection of string operations (most are no longer used).
# Warning: most of the code you see here isn't normally used nowadays.
# Beginning with Python 1.6, many of these functions are implemented as
# methods on the standard string object. They used to be implemented by
# a built-in module called strop, but strop is now obsolete itself.
# Public module variables:
# whitespace -- a string containing all characters considered whitespace
# lowercase -- a string containing all characters considered lowercase letters
# uppercase -- a string containing all characters considered uppercase letters
# letters -- a string containing all characters considered letters
# digits -- a string containing all characters considered decimal digits
# hexdigits -- a string containing all characters considered hexadecimal digits
# octdigits -- a string containing all characters considered octal digits
# punctuation -- a string containing all characters considered punctuation
# printable -- a string containing all characters considered printable
module string

import builtins

private class TemplateMetaclass
    super Type
    
    init do end
    
end

# Helper class for combining multiple mappings.
# Used by .{safe_,}substitute() to combine the mapping and keyword
# arguments.
private class Multimap
    
    init do end
    
    fun getitem(key: Object) is abstract
    
end

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

# A string class for supporting $-substitutions.
class Template
    
    private fun private_invalid(mo: Object) is abstract
    
    init do end
    
    fun safe_substitute is abstract
    
    fun substitute is abstract
    
end

class Formatter
    
    fun parse(format_string: Object) is abstract
    
    fun format_field(value, format_spec: Object) is abstract
    
    fun format(format_string: Object) is abstract
    
    fun convert_field(conversion, value: Object) is abstract
    
    fun get_value(args, key, kwargs: Object) is abstract
    
    fun vformat(format_string, args, kwargs: Object) is abstract
    
    private fun private_vformat(recursion_depth, format_string, args, used_args, kwargs: Object) is abstract
    
    fun get_field(args, field_name, kwargs: Object) is abstract
    
    fun check_unused_args(args, used_args, kwargs: Object) is abstract
    
end

# Inappropriate argument value (of correct type).
redef class ValueError
    
end

