# hashlib module - A common interface to many hash functions.
# new(name, string='') - returns a new hash object implementing the
# given hash function; initializing the hash
# using the given string data.
# Named constructor functions are also available, these are much faster
# than using new():
# md5(), sha1(), sha224(), sha256(), sha384(), and sha512()
# More algorithms may be available on your platform but the above are
# guaranteed to exist.
# NOTE: If you want the adler32 or crc32 hash functions they are available in
# the zlib module.
# Choose your hash function wisely.  Some have known collision weaknesses.
# sha384 and sha512 will be slow on 32 bit platforms.
# Hash objects have these methods:
# - update(arg): Update the hash object with the string arg. Repeated calls
# are equivalent to a single call with the concatenation of all
# the arguments.
# - digest():    Return the digest of the strings passed to the update() method
# so far. This may contain non-ASCII characters, including
# NUL bytes.
# - hexdigest(): Like digest() except the digest is returned as a string of
# double length, containing only hexadecimal digits.
# - copy():      Return a copy (clone) of the hash object. This can be used to
# efficiently compute the digests of strings that share a common
# initial substring.
# For example, to obtain the digest of the string 'Nobody inspects the
# spammish repetition':
# >>> import hashlib
# >>> m = hashlib.md5()
# >>> m.update("Nobody inspects")
# >>> m.update(" the spammish repetition")
# >>> m.digest()
# '\xbbd\x9c\x83\xdd\x1e\xa5\xc9\xd9\xde\xc9\xa1\x8d\xf0\xff\xe9'
# More condensed:
# >>> hashlib.sha224("Nobody inspects the spammish repetition").hexdigest()
# 'a4337bc45a8fc544c03f52dc550cd6e1e87021bc896588bd79e901e2'
module hashlib

import builtins

redef class Sys
    
end

