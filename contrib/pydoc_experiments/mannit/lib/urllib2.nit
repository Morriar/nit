# An extensible library for opening URLs using a variety of protocols
# The simplest way to use this module is to call the urlopen function,
# which accepts a string containing a URL or a Request object (described
# below).  It opens the URL and returns the results as file-like
# object; the returned object has some extra methods described below.
# The OpenerDirector manages a collection of Handler objects that do
# all the actual work.  Each Handler implements a particular protocol or
# option.  The OpenerDirector is a composite object that invokes the
# Handlers needed to open the requested URL.  For example, the
# HTTPHandler performs HTTP GET and POST requests and deals with
# non-error returns.  The HTTPRedirectHandler automatically deals with
# HTTP 301, 302, 303 and 307 redirect errors, and the HTTPDigestAuthHandler
# deals with digest authentication.
# urlopen(url, data=None) -- Basic usage is the same as original
# urllib.  pass the url and optionally data to post to an HTTP URL, and
# get a file-like object back.  One difference is that you can also pass
# a Request instance instead of URL.  Raises a URLError (subclass of
# IOError); for HTTP errors, raises an HTTPError, which can also be
# treated as a valid response.
# build_opener -- Function that creates a new OpenerDirector instance.
# Will install the default handlers.  Accepts one or more Handlers as
# arguments, either instances or Handler classes that it will
# instantiate.  If one of the argument is a subclass of the default
# handler, the argument will be installed instead of the default.
# install_opener -- Installs a new opener as the default opener.
# objects of interest:
# OpenerDirector -- Sets up the User Agent as the Python-urllib client and manages
# the Handler classes, while dealing with requests and responses.
# Request -- An object that encapsulates the state of a request.  The
# state can be as simple as the URL.  It can also include extra HTTP
# headers, e.g. a User-Agent.
# BaseHandler --
# exceptions:
# URLError -- A subclass of IOError, individual protocols have their own
# specific subclass.
# HTTPError -- Also a valid HTTP response, so you can treat an HTTP error
# as an exceptional event or valid response.
# internals:
# BaseHandler and parent
# _call_chain conventions
# Example usage:
# import urllib2
# # set up authentication info
# authinfo = urllib2.HTTPBasicAuthHandler()
# authinfo.add_password(realm='PDQ Application',
# uri='https://mahler:8092/site-updates.py',
# user='klem',
# passwd='geheim$parole')
# proxy_support = urllib2.ProxyHandler({"http" : "http://ahad-haam:3128"})
# # build a new opener that adds authentication and caching FTP handlers
# opener = urllib2.build_opener(proxy_support, authinfo, urllib2.CacheFTPHandler)
# # install it
# urllib2.install_opener(opener)
# f = urllib2.urlopen('http://www.python.org/')
module urllib2

import mimetools
import urlparse
import hashlib
import random
import posixpath
import warnings
import bisect
import py_base64
import httplib
import sys
import re
import time
import os
import py_socket
import builtins

class ProxyHandler
    super BaseHandler
    
    fun proxy_open(req, py_type, proxy: Object) is abstract
    
    init do end
    
end

class BaseHandler
    
    fun close is abstract
    
    fun lt(other: Object) is abstract
    
    fun add_parent(parent: Object) is abstract
    
end

class HTTPRedirectHandler
    super BaseHandler
    
    fun http_error_302(fp, headers, code, req, msg: Object) is abstract
    
    # Return a Request or None in response to a redirect.
    # This is called by the http_error_30x methods when a
    # redirection response is received.  If a redirection should
    # take place, return a new Request to allow http_error_30x to
    # perform the redirect.  Otherwise, raise HTTPError if no-one
    # else should try to handle this url.  Return None if you can't
    # but another Handler might.
    fun redirect_request(fp, newurl, req, headers, code, msg: Object) is abstract
    
end

class AbstractBasicAuthHandler
    
    fun retry_http_basic_auth(host, req, realm: Object) is abstract
    
    fun http_error_auth_reqed(headers, host, req, authreq: Object) is abstract
    
    init do end
    
    fun reset_retry_count is abstract
    
end

class HTTPHandler
    super AbstractHTTPHandler
    
    fun http_open(req: Object) is abstract
    
    redef fun do_request_(request) is abstract
    
end

class FileHandler
    super BaseHandler
    
    fun get_names is abstract
    
    fun file_open(req: Object) is abstract
    
    fun open_local_file(req: Object) is abstract
    
end

class HTTPPasswordMgr
    
    # Accept authority or URI and extract only the authority and path.
    fun reduce_uri(uri, default_port: Object) is abstract
    
    fun find_user_password(realm, authuri: Object) is abstract
    
    init do end
    
    fun add_password(passwd, realm, uri, user: Object) is abstract
    
    # Check if test is below base in a URI tree
    # Both args must be URIs in reduced form.
    fun is_suburi(test, base: Object) is abstract
    
end

redef class Sys
    
end

class HTTPDefaultErrorHandler
    super BaseHandler
    
    fun http_error_default(fp, msg, req, code, hdrs: Object) is abstract
    
end

class HTTPSHandler
    super AbstractHTTPHandler
    
    redef fun do_request_(request) is abstract
    
    fun https_open(req: Object) is abstract
    
end

class FTPHandler
    super BaseHandler
    
    fun connect_ftp(dirs, passwd, host, user, timeout, port: Object) is abstract
    
    fun ftp_open(req: Object) is abstract
    
end

class CacheFTPHandler
    super FTPHandler
    
    fun clear_cache is abstract
    
    fun setmaxconns(m: Object) is abstract
    
    init do end
    
    redef fun connect_ftp(dirs, passwd, host, user, timeout, port) is abstract
    
    fun settimeout(t: Object) is abstract
    
    fun check_cache is abstract
    
end

# Process HTTP error responses.
class HTTPErrorProcessor
    super BaseHandler
    
    fun http_response(request, response: Object) is abstract
    
end

class URLError
    super IOError
    
    init do end
    
    fun str is abstract
    
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

class ProxyDigestAuthHandler
    super AbstractDigestAuthHandler
    super BaseHandler
    
    fun http_error_407(fp, headers, code, req, msg: Object) is abstract
    
end

class AbstractDigestAuthHandler
    
    fun get_entity_digest(data, chal: Object) is abstract
    
    fun retry_http_digest_auth(req, auth: Object) is abstract
    
    fun get_algorithm_impls(algorithm: Object) is abstract
    
    fun get_cnonce(nonce: Object) is abstract
    
    init do end
    
    fun http_error_auth_reqed(headers, host, req, auth_header: Object) is abstract
    
    fun reset_retry_count is abstract
    
    fun get_authorization(req, chal: Object) is abstract
    
end

class Request
    
    fun header_items is abstract
    
    fun set_proxy(host, py_type: Object) is abstract
    
    fun get_host is abstract
    
    fun is_unverifiable is abstract
    
    fun get_data is abstract
    
    fun add_data(data: Object) is abstract
    
    init do end
    
    fun get_full_url is abstract
    
    fun has_proxy is abstract
    
    fun add_header(key, val: Object) is abstract
    
    fun getattr(attr: Object) is abstract
    
    fun get_type is abstract
    
    fun get_selector is abstract
    
    fun get_method is abstract
    
    fun add_unredirected_header(key, val: Object) is abstract
    
    fun get_origin_req_host is abstract
    
    fun has_header(header_name: Object) is abstract
    
    fun get_header(default, header_name: Object) is abstract
    
    fun has_data is abstract
    
end

class OpenerDirector
    
    private fun private_open(req, data: Object) is abstract
    
    fun open(data, fullurl, timeout: Object) is abstract
    
    init do end
    
    fun add_handler(handler: Object) is abstract
    
    fun error(proto: Object) is abstract
    
    fun close is abstract
    
    private fun private_call_chain(kind, meth_name, chain: Object) is abstract
    
end

class HTTPPasswordMgrWithDefaultRealm
    super HTTPPasswordMgr
    
    redef fun find_user_password(realm, authuri) is abstract
    
end

# Raised when HTTP error occurs, but also acts like non-error return
class HTTPError
    super Addinfourl
    super URLError
    
    redef fun info is abstract
    
    init do end
    
    redef fun str is abstract
    
end

class HTTPCookieProcessor
    super BaseHandler
    
    fun http_request(request: Object) is abstract
    
    init do end
    
    fun http_response(request, response: Object) is abstract
    
end

class HTTPBasicAuthHandler
    super BaseHandler
    super AbstractBasicAuthHandler
    
    fun http_error_401(fp, headers, code, req, msg: Object) is abstract
    
end

class UnknownHandler
    super BaseHandler
    
    fun unknown_open(req: Object) is abstract
    
end

class ProxyBasicAuthHandler
    super BaseHandler
    super AbstractBasicAuthHandler
    
    fun http_error_407(fp, headers, code, req, msg: Object) is abstract
    
end

# An authentication protocol defined by RFC 2069
# Digest authentication improves on basic authentication because it
# does not transmit passwords in the clear.
class HTTPDigestAuthHandler
    super AbstractDigestAuthHandler
    super BaseHandler
    
    fun http_error_401(fp, headers, code, req, msg: Object) is abstract
    
end

class AbstractHTTPHandler
    super BaseHandler
    
    fun set_http_debuglevel(level: Object) is abstract
    
    # Return an addinfourl object for the request, using http_class.
    # http_class must implement the HTTPConnection API from httplib.
    # The addinfourl return value is a file-like object.  It also
    # has methods and attributes including:
    # - info(): return a mimetools.Message object for the headers
    # - geturl(): return the original request URL
    # - code: HTTP status code
    fun do_open(req, http_class: Object) is abstract
    
    init do end
    
    fun do_request_(request: Object) is abstract
    
end

# class to add info() and geturl() methods to an open file.
class Addinfourl
    super Addbase
    
    fun info is abstract
    
    fun geturl is abstract
    
    init do end
    
    fun getcode is abstract
    
end

