# HTTP cookie handling for web clients.
# This module has (now fairly distant) origins in Gisle Aas' Perl module
# HTTP::Cookies, from the libwww-perl library.
# Docstrings, comments and debug strings in this code refer to the
# attributes of the HTTP cookie system as cookie-attributes, to distinguish
# them clearly from Python attributes.
# Class diagram (note that BSDDBCookieJar and the MSIE* classes are not
# distributed with the Python standard library, but are available from
# http://wwwsearch.sf.net/):
# CookieJar____
# /     \      \
# FileCookieJar      \      \
# /    |   \         \      \
# MozillaCookieJar | LWPCookieJar \      \
# |               |      \
# |   ---MSIEBase |       \
# |  /      |     |        \
# | /   MSIEDBCookieJar BSDDBCookieJar
# |/
# MSIECookieJar
module cookielib

import httplib
import re
import urllib
import urlparse
import threading
import time
import copy
import builtins

# Implements the standard rules for accepting and returning cookies.
class DefaultCookiePolicy
    super CookiePolicy
    
    fun set_ok_domain(cookie, request: Object) is abstract
    
    fun return_ok_domain(cookie, request: Object) is abstract
    
    # Set the sequence of allowed domains, or None.
    fun set_allowed_domains(allowed_domains: Object) is abstract
    
    # Return the sequence of blocked domains (as a tuple).
    fun blocked_domains is abstract
    
    fun set_ok_verifiability(cookie, request: Object) is abstract
    
    fun return_ok_verifiability(cookie, request: Object) is abstract
    
    fun set_ok_version(cookie, request: Object) is abstract
    
    redef fun path_return_ok(path, request) is abstract
    
    # Constructor arguments should be passed as keyword arguments only.
    init do end
    
    fun return_ok_version(cookie, request: Object) is abstract
    
    redef fun domain_return_ok(domain, request) is abstract
    
    fun is_not_allowed(domain: Object) is abstract
    
    # If you override .return_ok(), be sure to call this method.  If it
    # returns false, so should your subclass (assuming your subclass wants to
    # be more strict about which cookies to return).
    redef fun return_ok(cookie, request) is abstract
    
    fun return_ok_expires(cookie, request: Object) is abstract
    
    fun is_blocked(domain: Object) is abstract
    
    fun return_ok_secure(cookie, request: Object) is abstract
    
    fun set_ok_name(cookie, request: Object) is abstract
    
    # Return None, or the sequence of allowed domains (as a tuple).
    fun allowed_domains is abstract
    
    fun return_ok_port(cookie, request: Object) is abstract
    
    # Set the sequence of blocked domains.
    fun set_blocked_domains(blocked_domains: Object) is abstract
    
    fun set_ok_port(cookie, request: Object) is abstract
    
    # If you override .set_ok(), be sure to call this method.  If it returns
    # false, so should your subclass (assuming your subclass wants to be more
    # strict about which cookies to accept).
    redef fun set_ok(cookie, request) is abstract
    
    fun set_ok_path(cookie, request: Object) is abstract
    
end

class Absent
    
end

# Collection of HTTP cookies.
# You may not need to know about this class: try
# urllib2.build_opener(HTTPCookieProcessor).open(url).
class CookieJar
    
    # Return a list of cookies to be returned to server.
    private fun private_cookies_for_request(request: Object) is abstract
    
    fun str is abstract
    
    # Set a cookie if policy says it's OK to do so.
    fun set_cookie_if_ok(cookie, request: Object) is abstract
    
    # Set a cookie, without checking whether or not it should be set.
    fun set_cookie(cookie: Object) is abstract
    
    # Return list of tuples containing normalised cookie information.
    # attrs_set is the list of lists of key,value pairs extracted from
    # the Set-Cookie or Set-Cookie2 headers.
    # Tuples are name, value, standard, rest, where name and value are the
    # cookie name and value, standard is a dictionary containing the standard
    # cookie-attributes (discard, secure, version, expires or max-age,
    # domain, path and port) and rest is a dictionary containing the rest of
    # the cookie-attributes.
    private fun private_normalized_cookie_tuples(attrs_set: Object) is abstract
    
    # Add correct Cookie: header to request (urllib2.Request object).
    # The Cookie2 header is also added unless policy.hide_cookie2 is true.
    fun add_cookie_header(request: Object) is abstract
    
    fun iter is abstract
    
    # Return number of contained cookies.
    fun len is abstract
    
    fun repr is abstract
    
    # Clear some cookies.
    # Invoking this method without arguments will clear all cookies.  If
    # given a single argument, only cookies belonging to that domain will be
    # removed.  If given two arguments, cookies belonging to the specified
    # path within that domain are removed.  If given three arguments, then
    # the cookie with the specified name, path and domain is removed.
    # Raises KeyError if no matching cookie exists.
    fun clear(path, domain, name: Object) is abstract
    
    init do end
    
    fun set_policy(policy: Object) is abstract
    
    # Extract cookies from response, where allowable given the request.
    fun extract_cookies(request, response: Object) is abstract
    
    private fun private_cookie_from_cookie_tuple(tup, request: Object) is abstract
    
    private fun private_cookies_from_attrs_set(attrs_set, request: Object) is abstract
    
    # Discard all session cookies.
    # Note that the .save() method won't save session cookies anyway, unless
    # you ask otherwise by passing a true ignore_discard argument.
    fun clear_session_cookies is abstract
    
    # Discard all expired cookies.
    # You probably don't need to call this method: expired cookies are never
    # sent back to the server (provided you're using DefaultCookiePolicy),
    # this method is called by CookieJar itself every so often, and the
    # .save() method won't save expired cookies anyway (unless you ask
    # otherwise by passing a true ignore_expires argument).
    fun clear_expired_cookies is abstract
    
    private fun private_process_rfc2109_cookies(cookies: Object) is abstract
    
    private fun private_cookies_for_domain(domain, request: Object) is abstract
    
    # Return sequence of Cookie objects extracted from response object.
    fun make_cookies(request, response: Object) is abstract
    
    # Return a list of cookie-attributes to be returned to server.
    # like ['foo="bar"; $Path="/"', ...]
    # The $Version attribute is also added when appropriate (currently only
    # once per request).
    private fun private_cookie_attrs(cookies: Object) is abstract
    
end

# CookieJar that can be loaded from and saved to a file.
class FileCookieJar
    super CookieJar
    
    # Load cookies from a file.
    fun load(filename, ignore_expires, ignore_discard: Object) is abstract
    
    # Cookies are NOT loaded from the named file until either the .load() or
    # .revert() method is called.
    init do end
    
    # Save cookies to a file.
    fun save(filename, ignore_expires, ignore_discard: Object) is abstract
    
    # Clear all cookies and reload cookies from a saved file.
    # Raises LoadError (or IOError) if reversion is not successful; the
    # object's state will not be altered if this happens.
    fun revert(filename, ignore_expires, ignore_discard: Object) is abstract
    
end

class LoadError
    super IOError
    
end

# WARNING: you may want to backup your browser's cookies file if you use
# this class to save cookies.  I *think* it works, but there have been
# bugs in the past!
# This class differs from CookieJar only in the format it uses to save and
# load cookies to and from a file.  This class uses the Mozilla/Netscape
# `cookies.txt' format.  lynx uses this file format, too.
# Don't expect cookies saved while the browser is running to be noticed by
# the browser (in fact, Mozilla on unix will overwrite your saved cookies if
# you change them on disk while it's running; on Windows, you probably can't
# save at all while the browser is running).
# Note that the Mozilla/Netscape format will downgrade RFC2965 cookies to
# Netscape cookies on saving.
# In particular, the cookie version and port number information is lost,
# together with information about whether or not Path, Port and Discard were
# specified by the Set-Cookie2 (or Set-Cookie) header, and whether or not the
# domain as set in the HTTP header started with a dot (yes, I'm aware some
# domains in Netscape files start with a dot and some don't -- trust me, you
# really don't want to know any more about this).
# Note that though Mozilla and Netscape use the same format, they use
# slightly different headers.  The class saves cookies using the Netscape
# header by default (Mozilla can cope with that).
class MozillaCookieJar
    super FileCookieJar
    
    redef fun save(filename, ignore_expires, ignore_discard) is abstract
    
    private fun private_really_load(filename, ignore_expires, f, ignore_discard: Object) is abstract
    
end

redef class Sys
    
end

# HTTP Cookie.
# This class represents both Netscape and RFC 2965 cookies.
# This is deliberately a very simple class.  It just holds attributes.  It's
# possible to construct Cookie instances that don't comply with the cookie
# standards.  CookieJar.make_cookies is the factory function for Cookie
# objects -- it deals with cookie parsing, supplying defaults, and
# normalising to the representation used in this class.  CookiePolicy is
# responsible for checking them to see whether they should be accepted from
# and returned to the server.
# Note that the port may be present in the headers, but unspecified ("Port"
# rather than"Port=80", for example); if this is the case, port is None.
class Cookie
    
    fun has_nonstandard_attr(name: Object) is abstract
    
    fun repr is abstract
    
    init do end
    
    fun str is abstract
    
    fun get_nonstandard_attr(default, name: Object) is abstract
    
    fun is_expired(now: Object) is abstract
    
    fun set_nonstandard_attr(name, value: Object) is abstract
    
end

# Defines which cookies get accepted from and returned to server.
# May also modify cookies, though this is probably a bad idea.
# The subclass DefaultCookiePolicy defines the standard rules for Netscape
# and RFC 2965 cookies -- override that if you want a customised policy.
class CookiePolicy
    
    # Return false if cookies should not be returned, given cookie path.
    fun path_return_ok(path, request: Object) is abstract
    
    # Return false if cookies should not be returned, given cookie domain.
    fun domain_return_ok(domain, request: Object) is abstract
    
    # Return true if (and only if) cookie should be accepted from server.
    # Currently, pre-expired cookies never get this far -- the CookieJar
    # class deletes such cookies itself.
    fun set_ok(cookie, request: Object) is abstract
    
    # Return true if (and only if) cookie should be returned to server.
    fun return_ok(cookie, request: Object) is abstract
    
end

# The LWPCookieJar saves a sequence of "Set-Cookie3" lines.
# "Set-Cookie3" is the format used by the libwww-perl libary, not known
# to be compatible with any browser, but which is easy to read and
# doesn't lose information about RFC 2965 cookies.
# Additional methods
# as_lwp_str(ignore_discard=True, ignore_expired=True)
class LWPCookieJar
    super FileCookieJar
    
    redef fun save(filename, ignore_expires, ignore_discard) is abstract
    
    # Return cookies as a string of "\n"-separated "Set-Cookie3" headers.
    # ignore_discard and ignore_expires: see docstring for FileCookieJar.save
    fun as_lwp_str(ignore_expires, ignore_discard: Object) is abstract
    
    private fun private_really_load(filename, ignore_expires, f, ignore_discard: Object) is abstract
    
end

