# Locale support.
# The module provides low-level access to the C lib's locale APIs
# and adds high level number formatting APIs as well as a locale
# aliasing engine to complement these.
# The aliasing engine includes support for many commonly used locale
# names and maps them to values suitable for passing to the C lib's
# setlocale() function. It also includes default encodings for all
# supported locale names.
module locale

import builtins

redef class Sys
    
end

# unicode(object='') -> unicode object
# unicode(string[, encoding[, errors]]) -> unicode object
# Create a new Unicode object from the given encoded string.
# encoding defaults to the current default string encoding.
# errors can be 'strict', 'replace' or 'ignore' and defaults to 'strict'.
class Unicode
    super Basestring
    
end

redef class Error
    
end

