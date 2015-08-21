# robotparser.py
# Copyright (C) 2000  Bastian Kleineidam
# You can choose between two licenses when using this package:
# 1) GNU GPLv2
# 2) PSF license for Python 2.2
# The robots.txt Exclusion Protocol is implemented as specified in
# http://info.webcrawler.com/mak/projects/robots/norobots-rfc.html
module robotparser

import urlparse
import urllib
import builtins

redef class Sys
    
end

# An entry has one or more user-agents and zero or more rulelines
class Entry
    
    init do end
    
    # check if this entry applies to the specified agent
    fun applies_to(useragent: Object) is abstract
    
    fun str is abstract
    
    # Preconditions:
    # - our agent applies to this entry
    # - filename is URL decoded
    fun allowance(filename: Object) is abstract
    
end

redef class URLopener
    
    init do end
    
    redef fun prompt_user_passwd(host, realm) is abstract
    
    redef fun http_error_default(fp, url, errcode, errmsg, headers) is abstract
    
end

# This class provides a set of methods to read, parse and answer
# questions about a single robots.txt file.
class RobotFileParser
    
    # using the parsed robots.txt decide if useragent can fetch url
    fun can_fetch(url, useragent: Object) is abstract
    
    # Reads the robots.txt URL and feeds it to the parser.
    fun read is abstract
    
    # Sets the time the robots.txt file was last fetched to the
    # current time.
    fun modified is abstract
    
    # parse the input lines from a robots.txt file.
    # We allow that a user-agent: line is not preceded by
    # one or more blank lines.
    fun parse(lines: Object) is abstract
    
    init do end
    
    # Sets the URL referring to a robots.txt file.
    fun set_url(url: Object) is abstract
    
    fun str is abstract
    
    # Returns the time the robots.txt file was last fetched.
    # This is useful for long-running web spiders that need to
    # check for new robots.txt files periodically.
    fun mtime is abstract
    
    private fun private_add_entry(entry: Object) is abstract
    
end

# A rule line is a single "Allow:" (allowance==True) or "Disallow:"
# (allowance==False) followed by a path.
class RuleLine
    
    init do end
    
    fun str is abstract
    
    fun applies_to(filename: Object) is abstract
    
end

