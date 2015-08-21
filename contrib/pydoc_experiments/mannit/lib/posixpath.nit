# Common operations on Posix pathnames.
# Instead of importing this module directly, import os and refer to
# this module as os.path.  The "os.path" name is an alias for this
# module on Posix systems; on other systems (e.g. Mac, Windows),
# os.path provides the same operations in a manner specific to that
# platform, and is an alias to another module (e.g. macpath, ntpath).
# Some of this can actually be useful on non-Posix systems too, e.g.
# for manipulation of the pathname component of URLs.
module posixpath

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

