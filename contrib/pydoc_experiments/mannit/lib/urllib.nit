# Open an arbitrary URL.
# See the following document for more info on URLs:
# "Names and Addresses, URIs, URLs, URNs, URCs", at
# http://www.w3.org/pub/WWW/Addressing/Overview.html
# See also the HTTP spec (from which the error codes are derived):
# "HTTP - Hypertext Transfer Protocol", at
# http://www.w3.org/pub/WWW/Protocols/
# Related standards and specs:
# - RFC1808: the "relative URL" spec. (authoritative status)
# - RFC1738 - the "URL standard". (authoritative status)
# - RFC1630 - the "URI spec". (informational status)
# The object returned by URLopener().open(file) will differ per
# protocol.  All you know is that is has methods read(), readline(),
# readlines(), fileno(), close() and info().  The read*(), fileno()
# and close() methods work like those of open files.
# The info() method returns a mimetools.Message object which can be
# used to query various info about the object, if available.
# (mimetools.Message objects are queried with the getheader() method.)
module urllib

import builtins

# Derived class with handlers for errors we can handle (perhaps).
class FancyURLopener
    super URLopener
    
    fun retry_proxy_http_basic_auth(url, realm, data: Object) is abstract
    
    # Error 307 -- relocated, but turn POST into error.
    fun http_error_307(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    fun retry_proxy_https_basic_auth(url, realm, data: Object) is abstract
    
    # Error 401 -- authentication required.
    # This function supports Basic authentication only.
    fun http_error_401(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    # Override this in a GUI environment!
    fun prompt_user_passwd(host, realm: Object) is abstract
    
    # Default error handling -- don't raise an exception.
    redef fun http_error_default(fp, url, errcode, errmsg, headers) is abstract
    
    # Error 407 -- proxy authentication required.
    # This function supports Basic authentication only.
    fun http_error_407(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    fun get_user_passwd(host, realm, clear_cache: Object) is abstract
    
    fun redirect_internal(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    init do end
    
    # Error 303 -- also relocated (essentially identical to 302).
    fun http_error_303(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    fun retry_https_basic_auth(url, realm, data: Object) is abstract
    
    # Error 301 -- also relocated (permanently).
    fun http_error_301(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    fun retry_http_basic_auth(url, realm, data: Object) is abstract
    
    # Error 302 -- relocated (temporarily).
    fun http_error_302(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
end

# Class to open URLs.
# This is a class rather than just a subroutine because we may need
# more than one set of global protocol-specific options.
# Note -- this is a base class for those who don't want the
# automatic handling of errors type 302 (relocated) and 401
# (authorization needed).
class URLopener
    
    # retrieve(url) returns (filename, headers) for a local object
    # or (tempfilename, headers) for a remote object.
    fun retrieve(url, data, reporthook, filename: Object) is abstract
    
    # Use URLopener().open(file) instead of open(file, 'r').
    fun open(data, fullurl: Object) is abstract
    
    # Default error handler: close the connection and raise IOError.
    fun http_error_default(fp, url, errcode, errmsg, headers: Object) is abstract
    
    # Use local file or FTP depending on form of URL.
    fun open_file(url: Object) is abstract
    
    # Handle http errors.
    # Derived class can override this, or provide specific handlers
    # named http_error_DDD where DDD is the 3-digit error code.
    fun http_error(fp, url, errcode, headers, data, errmsg: Object) is abstract
    
    # Use local file.
    fun open_local_file(url: Object) is abstract
    
    # Add a header to be used by the HTTP interface only
    # e.g. u.addheader('Accept', 'sound/basic')
    fun addheader is abstract
    
    # Overridable interface to open unknown URL type.
    fun open_unknown_proxy(data, proxy, fullurl: Object) is abstract
    
    init do end
    
    fun cleanup is abstract
    
    fun del is abstract
    
    # Use HTTP protocol.
    fun open_http(url, data: Object) is abstract
    
    fun close is abstract
    
    # Use FTP protocol.
    fun open_ftp(url: Object) is abstract
    
    # Use HTTPS protocol.
    fun open_https(url, data: Object) is abstract
    
    # Use "data" URL.
    fun open_data(url, data: Object) is abstract
    
    # Overridable interface to open unknown URL type.
    fun open_unknown(data, fullurl: Object) is abstract
    
end

# Class to add a close hook to an open file.
class Addclosehook
    super Addbase
    
    redef fun close is abstract
    
    init do end
    
end

# Class used by open_ftp() for cache of open FTP connections.
class Ftpwrapper
    
    fun file_close is abstract
    
    fun real_close is abstract
    
    init do end
    
    fun retrfile(py_type, file: Object) is abstract
    
    fun endtransfer is abstract
    
    fun close is abstract
    
end

# Base class for addinfo and addclosehook.
class Addbase
    
    fun close is abstract
    
    init do end
    
    fun repr is abstract
    
end

redef class Sys
    
end

# class to add an info() method to an open file.
class Addinfo
    super Addbase
    
    fun info is abstract
    
    init do end
    
end

class ContentTooShortError
    super IOError
    
    init do end
    
end

# class to add info() and geturl() methods to an open file.
class Addinfourl
    super Addbase
    
    fun info is abstract
    
    fun geturl is abstract
    
    init do end
    
    fun getcode is abstract
    
end

