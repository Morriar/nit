# A parser for XML, using the derived class as static DTD.
module xmllib

import re
import string
import builtins

redef class Sys
    
end

class TestXMLParser
    super XMLParser
    
    redef fun unknown_starttag(tag, attrs) is abstract
    
    redef fun syntax_error(message) is abstract
    
    redef fun handle_data(data) is abstract
    
    redef fun unknown_charref(ref) is abstract
    
    redef fun handle_cdata(data) is abstract
    
    init do end
    
    redef fun unknown_endtag(tag) is abstract
    
    redef fun handle_doctype(syslit, tag, data, pubid) is abstract
    
    redef fun unknown_entityref(name) is abstract
    
    fun flush is abstract
    
    redef fun close is abstract
    
    redef fun handle_proc(data, name) is abstract
    
    redef fun handle_comment(data) is abstract
    
    redef fun handle_xml(encoding, standalone) is abstract
    
end

class XMLParser
    
    fun feed(data: Object) is abstract
    
    fun unknown_starttag(tag, attrs: Object) is abstract
    
    fun syntax_error(message: Object) is abstract
    
    fun parse_attributes(i, tag, j: Object) is abstract
    
    fun parse_doctype(res: Object) is abstract
    
    fun finish_starttag(attrdict, method, tagname: Object) is abstract
    
    fun close is abstract
    
    fun handle_starttag(tag, method, attrs: Object) is abstract
    
    fun handle_comment(data: Object) is abstract
    
    fun goahead(py_end: Object) is abstract
    
    fun translate_references(all, data: Object) is abstract
    
    fun parse_comment(i: Object) is abstract
    
    fun fixclass(kl: Object) is abstract
    
    fun setnomoretags is abstract
    
    fun getnamespace is abstract
    
    init do end
    
    fun handle_xml(encoding, standalone: Object) is abstract
    
    fun finish_endtag(tag: Object) is abstract
    
    fun setliteral is abstract
    
    fun parse_starttag(i: Object) is abstract
    
    fun handle_endtag(tag, method: Object) is abstract
    
    fun handle_charref(name: Object) is abstract
    
    fun fixdict(dict: Object) is abstract
    
    fun parse_proc(i: Object) is abstract
    
    fun unknown_entityref(name: Object) is abstract
    
    fun handle_proc(data, name: Object) is abstract
    
    fun reset is abstract
    
    fun unknown_charref(ref: Object) is abstract
    
    fun handle_cdata(data: Object) is abstract
    
    fun parse_endtag(i: Object) is abstract
    
    fun unknown_endtag(tag: Object) is abstract
    
    fun handle_doctype(syslit, tag, data, pubid: Object) is abstract
    
    fun fixelements is abstract
    
    fun parse_cdata(i: Object) is abstract
    
    fun handle_data(data: Object) is abstract
    
end

redef class Error
    
end

