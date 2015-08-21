# RFC 3548: Base16, Base32, Base64 Data Encodings
module base64

fun translate(s, altchars: Object) is abstract

# Decode a Base16 encoded string.
# 
# s is the string to decode.  Optional casefold is a flag specifying whether
# a lowercase alphabet is acceptable as input.  For security purposes, the
# default is False.
# 
# The decoded string is returned.  A TypeError is raised if s were
# incorrectly padded or if there are non-alphabet characters present in the
# string.
# 
fun b16decode(s, casefold: Object) is abstract

# Encode a string using Base16.
# 
# s is the string to encode.  The encoded string is returned.
# 
fun b16encode(s: Object) is abstract

# Decode a Base32 encoded string.
# 
# s is the string to decode.  Optional casefold is a flag specifying whether
# a lowercase alphabet is acceptable as input.  For security purposes, the
# default is False.
# 
# RFC 3548 allows for optional mapping of the digit 0 (zero) to the letter O
# (oh), and for optional mapping of the digit 1 (one) to either the letter I
# (eye) or letter L (el).  The optional argument map01 when not None,
# specifies which letter the digit 1 should be mapped to (when map01 is not
# None, the digit 0 is always mapped to the letter O).  For security
# purposes the default is None, so that 0 and 1 are not allowed in the
# input.
# 
# The decoded string is returned.  A TypeError is raised if s were
# incorrectly padded or if there are non-alphabet characters present in the
# string.
# 
fun b32decode(s, casefold, map01: Object) is abstract

# Encode a string using Base32.
# 
# s is the string to encode.  The encoded string is returned.
# 
fun b32encode(s: Object) is abstract

# Decode a Base64 encoded string.
# 
# s is the string to decode.  Optional altchars must be a string of at least
# length 2 (additional characters are ignored) which specifies the
# alternative alphabet used instead of the '+' and '/' characters.
# 
# The decoded string is returned.  A TypeError is raised if s were
# incorrectly padded or if there are non-alphabet characters present in the
# string.
# 
fun b64decode(s, altchars: Object) is abstract

# Encode a string using Base64.
# 
# s is the string to encode.  Optional altchars must be a string of at least
# length 2 (additional characters are ignored) which specifies an
# alternative alphabet for the '+' and '/' characters.  This allows an
# application to e.g. generate url or filesystem safe Base64 strings.
# 
# The encoded string is returned.
# 
fun b64encode(s, altchars: Object) is abstract

# Decode a file.
fun decode(input, output: Object) is abstract

# Decode a string.
fun decodestring(s: Object) is abstract

# Encode a file.
fun encode(input, output: Object) is abstract

# Encode a string into multiple lines of base-64 data.
fun encodestring(s: Object) is abstract

# Decode a string encoded with the standard Base64 alphabet.
# 
# s is the string to decode.  The decoded string is returned.  A TypeError
# is raised if the string is incorrectly padded or if there are non-alphabet
# characters present in the string.
# 
fun standard_b64decode(s: Object) is abstract

# Encode a string using the standard Base64 alphabet.
# 
# s is the string to encode.  The encoded string is returned.
# 
fun standard_b64encode(s: Object) is abstract

# Small test program
fun test is abstract

fun test1 is abstract

# Decode a string encoded with the standard Base64 alphabet.
# 
# s is the string to decode.  The decoded string is returned.  A TypeError
# is raised if the string is incorrectly padded or if there are non-alphabet
# characters present in the string.
# 
# The alphabet uses '-' instead of '+' and '_' instead of '/'.
# 
fun urlsafe_b64decode(s: Object) is abstract

# Encode a string using a url-safe Base64 alphabet.
# 
# s is the string to encode.  The encoded string is returned.  The alphabet
# uses '-' instead of '+' and '_' instead of '/'.
# 
fun urlsafe_b64encode(s: Object) is abstract

