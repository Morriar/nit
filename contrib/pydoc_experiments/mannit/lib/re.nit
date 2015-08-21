# Support for regular expressions (RE).
# This module provides regular expression matching operations similar to
# those found in Perl.  It supports both 8-bit and Unicode strings; both
# the pattern and the strings being processed can contain null bytes and
# characters outside the US ASCII range.
# Regular expressions can contain both special and ordinary characters.
# Most ordinary characters, like "A", "a", or "0", are the simplest
# regular expressions; they simply match themselves.  You can
# concatenate ordinary characters, so last matches the string 'last'.
# The special characters are:
# "."      Matches any character except a newline.
# "^"      Matches the start of the string.
# "$"      Matches the end of the string or just before the newline at
# the end of the string.
# "*"      Matches 0 or more (greedy) repetitions of the preceding RE.
# Greedy means that it will match as many repetitions as possible.
# "+"      Matches 1 or more (greedy) repetitions of the preceding RE.
# "?"      Matches 0 or 1 (greedy) of the preceding RE.
# *?,+?,?? Non-greedy versions of the previous three special characters.
# {m,n}    Matches from m to n repetitions of the preceding RE.
# {m,n}?   Non-greedy version of the above.
# "\\"     Either escapes special characters or signals a special sequence.
# []       Indicates a set of characters.
# A "^" as the first character indicates a complementing set.
# "|"      A|B, creates an RE that will match either A or B.
# (...)    Matches the RE inside the parentheses.
# The contents can be retrieved or matched later in the string.
# (?iLmsux) Set the I, L, M, S, U, or X flag for the RE (see below).
# (?:...)  Non-grouping version of regular parentheses.
# (?P<name>...) The substring matched by the group is accessible by name.
# (?P=name)     Matches the text matched earlier by the group named name.
# (?#...)  A comment; ignored.
# (?=...)  Matches if ... matches next, but doesn't consume the string.
# (?!...)  Matches if ... doesn't match next.
# (?<=...) Matches if preceded by ... (must be fixed length).
# (?<!...) Matches if not preceded by ... (must be fixed length).
# (?(id/name)yes|no) Matches yes pattern if the group with id/name matched,
# the (optional) no pattern otherwise.
# The special sequences consist of "\\" and a character from the list
# below.  If the ordinary character is not on the list, then the
# resulting RE will match the second character.
# \number  Matches the contents of the group of the same number.
# \A       Matches only at the start of the string.
# \Z       Matches only at the end of the string.
# \b       Matches the empty string, but only at the start or end of a word.
# \B       Matches the empty string, but not at the start or end of a word.
# \d       Matches any decimal digit; equivalent to the set [0-9].
# \D       Matches any non-digit character; equivalent to the set [^0-9].
# \s       Matches any whitespace character; equivalent to [ \t\n\r\f\v].
# \S       Matches any non-whitespace character; equiv. to [^ \t\n\r\f\v].
# \w       Matches any alphanumeric character; equivalent to [a-zA-Z0-9_].
# With LOCALE, it will match the set [0-9_] plus characters defined
# as letters for the current locale.
# \W       Matches the complement of \w.
# \\       Matches a literal backslash.
# This module exports the following functions:
# match    Match a regular expression pattern to the beginning of a string.
# search   Search a string for the presence of a pattern.
# sub      Substitute occurrences of a pattern found in a string.
# subn     Same as sub, but also return the number of substitutions made.
# split    Split a string by the occurrences of a pattern.
# findall  Find all occurrences of a pattern in a string.
# finditer Return an iterator yielding a match object for each match.
# compile  Compile a pattern into a RegexObject.
# purge    Clear the regular expression cache.
# escape   Backslash all non-alphanumerics in a string.
# Some of the functions in this module takes flags as optional parameters:
# I  IGNORECASE  Perform case-insensitive matching.
# L  LOCALE      Make \w, \W, \b, \B, dependent on the current locale.
# M  MULTILINE   "^" matches the beginning of lines (after a newline)
# as well as the string.
# "$" matches the end of lines (before a newline) as well
# as the end of the string.
# S  DOTALL      "." matches any character at all, including the newline.
# X  VERBOSE     Ignore whitespace and comments for nicer looking RE's.
# U  UNICODE     Make \w, \W, \b, \B, dependent on the Unicode locale.
# This module also defines an exception 'error'.
module re

import builtins

redef class Sys
    
end

# Compiled regular expression objects
class SRE_Pattern
    
end

class Scanner
    
    init do end
    
    fun scan(string: Object) is abstract
    
end

redef class Error
    
end

