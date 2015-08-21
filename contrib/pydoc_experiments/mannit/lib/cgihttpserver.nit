# CGI-savvy HTTP Server.
# This module builds on SimpleHTTPServer by implementing GET and POST
# requests to cgi-bin scripts.
# If the os.fork() function is not present (e.g. on Windows),
# os.popen2() is used as a fallback, with slightly altered semantics; if
# that function is not present either (e.g. on Macintosh), only Python
# scripts are supported, and they are executed by the current process.
# In all cases, the implementation is intentionally naive -- all
# requests are executed sychronously.
# SECURITY WARNING: DON'T USE THIS CODE UNLESS YOU ARE INSIDE A FIREWALL
# -- it may execute arbitrary Python code or external programs.
# Note that status code 200 is sent prior to execution of a CGI script, so
# scripts cannot send other status codes such as 302 (redirect).
module cgihttpserver

import simplehttpserver
import urllib
import sys
import basehttpserver
import copy
import os
import select
import builtins

redef class Sys
    
end

# Complete HTTP server with GET, HEAD and POST commands.
# GET and HEAD also support running CGI scripts.
# The POST command is *only* implemented for CGI scripts.
class CGIHTTPRequestHandler
    super SimpleHTTPRequestHandler
    
    # Test whether self.path corresponds to a CGI script.
    # Returns True and updates the cgi_info attribute to the tuple
    # (dir, rest) if self.path requires running a CGI script.
    # Returns False otherwise.
    # If any exception is raised, the caller should assume that
    # self.path was rejected as invalid and act accordingly.
    # The default implementation tests whether the normalized url
    # path begins with one of the strings in self.cgi_directories
    # (and the next character is a '/' or the end of the string).
    fun is_cgi is abstract
    
    # Version of send_head that support CGI scripts
    redef fun send_head is abstract
    
    # Test whether argument path is an executable file.
    fun is_executable(path: Object) is abstract
    
    # Test whether argument path is a Python script.
    fun is_python(path: Object) is abstract
    
    # Serve a POST request.
    # This is only implemented for CGI scripts.
    fun do_post is abstract
    
    # Execute a CGI script.
    fun run_cgi is abstract
    
end

