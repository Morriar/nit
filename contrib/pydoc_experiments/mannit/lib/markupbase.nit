# Shared support for scanning document type declarations in HTML and XHTML.
# This module is used as a foundation for the HTMLParser and sgmllib
# modules (indirectly, for htmllib as well).  It has no documented
# public API and should not be used directly.
module markupbase

import builtins

redef class Sys
    
end

# Parser base class which provides some common support methods used
# by the SGML/HTML and XHTML parsers.
class ParserBase
    
    fun reset is abstract
    
    fun parse_marked_section(i, report: Object) is abstract
    
    # Return current line number and offset.
    fun getpos is abstract
    
    private fun private_scan_name(i, declstartpos: Object) is abstract
    
    private fun private_parse_doctype_notation(i, declstartpos: Object) is abstract
    
    fun parse_comment(i, report: Object) is abstract
    
    private fun private_parse_doctype_attlist(i, declstartpos: Object) is abstract
    
    fun parse_declaration(i: Object) is abstract
    
    fun updatepos(i, j: Object) is abstract
    
    private fun private_parse_doctype_subset(i, declstartpos: Object) is abstract
    
    init do end
    
    fun error(message: Object) is abstract
    
    private fun private_parse_doctype_entity(i, declstartpos: Object) is abstract
    
    fun unknown_decl(data: Object) is abstract
    
    private fun private_parse_doctype_element(i, declstartpos: Object) is abstract
    
end

