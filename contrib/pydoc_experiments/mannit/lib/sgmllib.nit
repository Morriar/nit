# A parser for SGML, using the derived class as a static DTD.
module sgmllib

import builtins

redef class Sys
    
end

class TestSGMLParser
    super SGMLParser
    
    redef fun unknown_starttag(tag, attrs) is abstract
    
    redef fun handle_data(data) is abstract
    
    redef fun unknown_charref(ref) is abstract
    
    init do end
    
    redef fun unknown_endtag(tag) is abstract
    
    redef fun unknown_entityref(ref) is abstract
    
    fun flush is abstract
    
    redef fun close is abstract
    
    redef fun handle_comment(data) is abstract
    
    redef fun unknown_decl(data) is abstract
    
end

class SGMLParser
    super ParserBase
    
    # Feed some data to the parser.
    # Call this as often as you want, with as little or as much text
    # as you want (may include '
    # ').  (This just saves the text,
    # all the processing is done by goahead().)
    fun feed(data: Object) is abstract
    
    fun finish_shorttag(tag, data: Object) is abstract
    
    fun report_unbalanced(tag: Object) is abstract
    
    fun convert_codepoint(codepoint: Object) is abstract
    
    # Handle entity references, no need to override.
    fun handle_entityref(name: Object) is abstract
    
    # Convert character reference, may be overridden.
    fun convert_charref(name: Object) is abstract
    
    # Handle the remaining data.
    fun close is abstract
    
    fun handle_starttag(tag, method, attrs: Object) is abstract
    
    # Convert entity references.
    # As an alternative to overriding this method; one can tailor the
    # results by setting up the self.entitydefs mapping appropriately.
    fun convert_entityref(name: Object) is abstract
    
    fun goahead(py_end: Object) is abstract
    
    fun unknown_starttag(tag, attrs: Object) is abstract
    
    fun unknown_charref(ref: Object) is abstract
    
    private fun private_convert_ref(match: Object) is abstract
    
    # Enter literal mode (CDATA) till EOF.
    # Intended for derived classes only.
    fun setnomoretags is abstract
    
    fun get_starttag_text is abstract
    
    # Initialize and reset this instance.
    init do end
    
    fun handle_decl(decl: Object) is abstract
    
    fun finish_endtag(tag: Object) is abstract
    
    # Enter literal mode (CDATA).
    # Intended for derived classes only.
    fun setliteral is abstract
    
    fun parse_starttag(i: Object) is abstract
    
    fun handle_endtag(tag, method: Object) is abstract
    
    # Handle character reference, no need to override.
    fun handle_charref(name: Object) is abstract
    
    fun handle_comment(data: Object) is abstract
    
    fun parse_pi(i: Object) is abstract
    
    fun unknown_entityref(ref: Object) is abstract
    
    # Reset this instance. Loses all unprocessed data.
    redef fun reset is abstract
    
    fun handle_pi(data: Object) is abstract
    
    fun parse_endtag(i: Object) is abstract
    
    fun unknown_endtag(tag: Object) is abstract
    
    fun finish_starttag(tag, attrs: Object) is abstract
    
    redef fun error(message) is abstract
    
    fun handle_data(data: Object) is abstract
    
end

# Exception raised for all parse errors.
class SGMLParseError
    super RuntimeError
    
end

