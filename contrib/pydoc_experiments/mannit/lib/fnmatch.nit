# Filename matching with shell patterns.
# fnmatch(FILENAME, PATTERN) matches according to the local convention.
# fnmatchcase(FILENAME, PATTERN) always takes case in account.
# The functions operate by translating the pattern into a regular
# expression.  They cache the compiled regular expressions for speed.
# The function translate(PATTERN) returns a regular expression
# corresponding to PATTERN.  (It does not compile it.)
module fnmatch

import builtins

redef class Sys
    
end

