# Parse (absolute and relative) URLs.
# urlparse module is based upon the following RFC specifications.
# RFC 3986 (STD66): "Uniform Resource Identifiers" by T. Berners-Lee, R. Fielding
# and L.  Masinter, January 2005.
# RFC 2732 : "Format for Literal IPv6 Addresses in URL's by R.Hinden, B.Carpenter
# and L.Masinter, December 1999.
# RFC 2396:  "Uniform Resource Identifiers (URI)": Generic Syntax by T.
# Berners-Lee, R. Fielding, and L. Masinter, August 1998.
# RFC 2368: "The mailto URL scheme", by P.Hoffman , L Masinter, J. Zwinski, July 1998.
# RFC 1808: "Relative Uniform Resource Locators", by R. Fielding, UC Irvine, June
# 1995.
# RFC 1738: "Uniform Resource Locators (URL)" by T. Berners-Lee, L. Masinter, M.
# McCahill, December 1994
# RFC 3986 is considered the current standard and any future changes to
# urlparse module should conform with it.  The urlparse module is
# currently not entirely compliant with this RFC due to defacto
# scenarios for parsing, and for backward compatibility purposes, some
# parsing quirks from older RFCs are retained. The testcases in
# test_urlparse.py provides a good indicator of parsing behavior.
module urlparse

import builtins

redef class Sys
    
end

class ParseResult
    super ResultMixin
    
    fun geturl is abstract
    
end

class SplitResult
    super ResultMixin
    
    fun geturl is abstract
    
end

# Shared methods for the parsed result objects.
class ResultMixin
    
end

