# HTML 2.0 parser.
# See the HTML 2.0 specification:
# http://www.w3.org/hypertext/WWW/MarkUp/html-spec/html-spec_toc.html
module htmllib

import sgmllib
import builtins

redef class Sys
    
end

# Error raised when an HTML document can't be parsed.
class HTMLParseError
    super SGMLParseError
    
end

# This is the basic HTML parser class.
# It supports all entity names required by the XHTML 1.0 Recommendation.
# It also defines handlers for all HTML 2.0 and many HTML 3.0 and 3.2
# elements.
class HTMLParser
    super SGMLParser
    
    fun end_dir is abstract
    
    fun start_xmp(attrs: Object) is abstract
    
    fun end_code is abstract
    
    fun end_menu is abstract
    
    fun start_listing(attrs: Object) is abstract
    
    fun start_strong(attrs: Object) is abstract
    
    # Ends buffering character data and returns all data saved since
    # the preceding call to the save_bgn() method.
    # If the nofill flag is false, whitespace is collapsed to single
    # spaces.  A call to this method without a preceding call to the
    # save_bgn() method will raise a TypeError exception.
    fun save_end is abstract
    
    fun start_title(attrs: Object) is abstract
    
    fun start_code(attrs: Object) is abstract
    
    fun end_tt is abstract
    
    fun end_blockquote is abstract
    
    # Creates an instance of the HTMLParser class.
    # The formatter parameter is the formatter instance associated with
    # the parser.
    init do end
    
    fun start_address(attrs: Object) is abstract
    
    fun do_br(attrs: Object) is abstract
    
    fun start_h3(attrs: Object) is abstract
    
    fun end_ol is abstract
    
    fun start_h1(attrs: Object) is abstract
    
    fun start_h6(attrs: Object) is abstract
    
    fun start_h5(attrs: Object) is abstract
    
    fun start_h4(attrs: Object) is abstract
    
    fun end_strong is abstract
    
    fun start_blockquote(attrs: Object) is abstract
    
    fun start_var(attrs: Object) is abstract
    
    fun end_title is abstract
    
    redef fun handle_data(data) is abstract
    
    fun do_meta(attrs: Object) is abstract
    
    fun end_html is abstract
    
    fun start_pre(attrs: Object) is abstract
    
    fun end_listing is abstract
    
    fun end_em is abstract
    
    fun start_cite(attrs: Object) is abstract
    
    fun do_nextid(attrs: Object) is abstract
    
    # This method is called at the end of an anchor region.
    # The default implementation adds a textual footnote marker using an
    # index into the list of hyperlinks created by the anchor_bgn()method.
    fun anchor_end is abstract
    
    fun do_hr(attrs: Object) is abstract
    
    fun end_ul is abstract
    
    fun start_menu(attrs: Object) is abstract
    
    fun end_dl is abstract
    
    fun ddpop(bl: Object) is abstract
    
    fun start_head(attrs: Object) is abstract
    
    fun start_body(attrs: Object) is abstract
    
    fun end_samp is abstract
    
    fun end_cite is abstract
    
    fun end_xmp is abstract
    
    fun start_ul(attrs: Object) is abstract
    
    fun end_var is abstract
    
    fun start_kbd(attrs: Object) is abstract
    
    fun do_isindex(attrs: Object) is abstract
    
    fun do_img(attrs: Object) is abstract
    
    fun end_pre is abstract
    
    fun do_base(attrs: Object) is abstract
    
    fun start_dir(attrs: Object) is abstract
    
    fun end_kbd is abstract
    
    fun start_h2(attrs: Object) is abstract
    
    fun end_body is abstract
    
    fun end_i is abstract
    
    fun end_b is abstract
    
    fun end_a is abstract
    
    # This method is called to handle images.
    # The default implementation simply passes the alt value to the
    # handle_data() method.
    fun handle_image(src, alt: Object) is abstract
    
    fun start_html(attrs: Object) is abstract
    
    redef fun reset is abstract
    
    fun start_i(attrs: Object) is abstract
    
    fun start_b(attrs: Object) is abstract
    
    fun start_em(attrs: Object) is abstract
    
    fun start_a(attrs: Object) is abstract
    
    fun do_p(attrs: Object) is abstract
    
    redef fun error(message) is abstract
    
    fun do_link(attrs: Object) is abstract
    
    fun start_samp(attrs: Object) is abstract
    
    fun do_plaintext(attrs: Object) is abstract
    
    redef fun unknown_starttag(tag, attrs) is abstract
    
    fun do_li(attrs: Object) is abstract
    
    fun end_h4 is abstract
    
    fun end_h5 is abstract
    
    fun end_h6 is abstract
    
    fun end_h1 is abstract
    
    fun end_h2 is abstract
    
    fun end_h3 is abstract
    
    fun do_dt(attrs: Object) is abstract
    
    fun start_tt(attrs: Object) is abstract
    
    fun do_dd(attrs: Object) is abstract
    
    fun start_ol(attrs: Object) is abstract
    
    fun end_head is abstract
    
    fun start_dl(attrs: Object) is abstract
    
    # Begins saving character data in a buffer instead of sending it
    # to the formatter object.
    # Retrieve the stored data via the save_end() method.  Use of the
    # save_bgn() / save_end() pair may not be nested.
    fun save_bgn is abstract
    
    fun end_address is abstract
    
    redef fun unknown_endtag(tag) is abstract
    
    # This method is called at the start of an anchor region.
    # The arguments correspond to the attributes of the <A> tag with
    # the same names.  The default implementation maintains a list of
    # hyperlinks (defined by the HREF attribute for <A> tags) within
    # the document.  The list of hyperlinks is available as the data
    # attribute anchorlist.
    fun anchor_bgn(href, py_type, name: Object) is abstract
    
end

