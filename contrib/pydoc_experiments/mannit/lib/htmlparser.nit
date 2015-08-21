# A parser for HTML and XHTML.
module htmlparser

import markupbase
import re
import builtins

redef class Sys
    
end

# Exception raised for all parse errors.
class HTMLParseError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

# Find tags and other markup and call handler functions.
# Usage:
# p = HTMLParser()
# p.feed(data)
# ...
# p.close()
# Start tags are handled by calling self.handle_starttag() or
# self.handle_startendtag(); end tags by self.handle_endtag().  The
# data between tags is passed from the parser to the derived class
# by calling self.handle_data() with the data as argument (the data
# may be split up in arbitrary chunks).  Entity references are
# passed by calling self.handle_entityref() with the entity
# reference as the argument.  Numeric character references are
# passed to self.handle_charref() with the string containing the
# reference as the argument.
class HTMLParser
    super ParserBase
    
    # Feed data to the parser.
    # Call this as often as you want, with as little or as much text
    # as you want (may include '\n').
    fun feed(data: Object) is abstract
    
    fun parse_html_declaration(i: Object) is abstract
    
    fun handle_startendtag(tag, attrs: Object) is abstract
    
    fun handle_entityref(name: Object) is abstract
    
    # Handle any buffered data.
    fun close is abstract
    
    fun handle_starttag(tag, attrs: Object) is abstract
    
    fun handle_comment(data: Object) is abstract
    
    fun goahead(py_end: Object) is abstract
    
    fun parse_bogus_comment(i, report: Object) is abstract
    
    fun set_cdata_mode(elem: Object) is abstract
    
    # Initialize and reset this instance.
    init do end
    
    # Return full source of start tag: '<...>'.
    fun get_starttag_text is abstract
    
    fun check_for_whole_start_tag(i: Object) is abstract
    
    fun handle_decl(decl: Object) is abstract
    
    fun clear_cdata_mode is abstract
    
    fun parse_starttag(i: Object) is abstract
    
    fun handle_endtag(tag: Object) is abstract
    
    fun handle_charref(name: Object) is abstract
    
    fun parse_pi(i: Object) is abstract
    
    redef fun unknown_decl(data) is abstract
    
    # Reset this instance.  Loses all unprocessed data.
    redef fun reset is abstract
    
    fun unescape(s: Object) is abstract
    
    fun handle_pi(data: Object) is abstract
    
    fun parse_endtag(i: Object) is abstract
    
    redef fun error(message) is abstract
    
    fun handle_data(data: Object) is abstract
    
end

