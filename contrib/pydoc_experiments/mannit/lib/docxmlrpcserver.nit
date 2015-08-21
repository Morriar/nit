# Self documenting XML-RPC Server.
# This module can be used to create XML-RPC servers that
# serve pydoc-style documentation in response to HTTP
# GET requests. This documentation is dynamically generated
# based on the functions and methods registered with the
# server.
# This module is built upon the pydoc and SimpleXMLRPCServer
# modules.
module docxmlrpcserver

import pydoc
import re
import inspect
import sys
import builtins

# XML-RPC and documentation request handler class.
# Handles all HTTP POST requests and attempts to decode them as
# XML-RPC requests.
# Handles all HTTP GET requests and interprets them as requests
# for documentation.
class DocXMLRPCRequestHandler
    super SimpleXMLRPCRequestHandler
    
    # Handles the HTTP GET request.
    # Interpret all HTTP GET requests as requests for server
    # documentation.
    fun do_get is abstract
    
end

# Generates documentation for an XML-RPC server.
# This class is designed as mix-in and should not
# be constructed directly.
class XMLRPCDocGenerator
    
    # Set the name of the generated HTML server documentation
    fun set_server_name(server_name: Object) is abstract
    
    # Set the documentation string for the entire server.
    fun set_server_documentation(server_documentation: Object) is abstract
    
    init do end
    
    # generate_html_documentation() => html documentation for the server
    # Generates HTML documentation for the server using introspection for
    # installed functions and instances that do not implement the
    # _dispatch method. Alternatively, instances can choose to implement
    # the _get_method_argstring(method_name) method to provide the
    # argument string used in the documentation and the
    # _methodHelp(method_name) method to provide the help text used
    # in the documentation.
    fun generate_html_documentation is abstract
    
    # Set the HTML title of the generated server documentation
    fun set_server_title(server_title: Object) is abstract
    
end

# Class used to generate pydoc HTML document for a server
class ServerHTMLDoc
    super HTMLDoc
    
    # Produce HTML documentation for a function or method object.
    redef fun docroutine(funcs, name, cl, object, classes, mod, methods) is abstract
    
    # Mark up some plain text, given a context of symbols to look for.
    # Each context dictionary maps object names to anchor names.
    redef fun markup(funcs, text, classes, methods, escape) is abstract
    
    # Produce HTML documentation for an XML-RPC server.
    fun docserver(server_name, package_documentation, methods: Object) is abstract
    
end

# Handler for XML-RPC data and documentation requests passed through
# CGI
class DocCGIXMLRPCRequestHandler
    super XMLRPCDocGenerator
    super CGIXMLRPCRequestHandler
    
    init do end
    
    # Handles the HTTP GET request.
    # Interpret all HTTP GET requests as requests for server
    # documentation.
    redef fun handle_get is abstract
    
end

# Simple handler for XML-RPC data passed through CGI.
class CGIXMLRPCRequestHandler
    super SimpleXMLRPCDispatcher
    
    # Handle a single XML-RPC request passed through a CGI post method.
    # If no XML data is given then it is read from stdin. The resulting
    # XML-RPC response is printed to stdout along with the correct HTTP
    # headers.
    fun handle_request(request_text: Object) is abstract
    
    init do end
    
    # Handle a single XML-RPC request
    fun handle_xmlrpc(request_text: Object) is abstract
    
    # Handle a single HTTP GET request.
    # Default implementation indicates an error because
    # XML-RPC uses the POST method.
    fun handle_get is abstract
    
end

# Simple XML-RPC server.
# Simple XML-RPC server that allows functions and a single instance
# to be installed to handle requests. The default implementation
# attempts to dispatch XML-RPC calls to the functions or instance
# installed in the server. Override the _dispatch method inhereted
# from SimpleXMLRPCDispatcher to change this behavior.
class SimpleXMLRPCServer
    super TCPServer
    super SimpleXMLRPCDispatcher
    
    init do end
    
end

redef class Sys
    
end

# Simple XML-RPC request handler class.
# Handles all HTTP POST requests and attempts to decode them as
# XML-RPC requests.
class SimpleXMLRPCRequestHandler
    super BaseHTTPRequestHandler
    
    fun decode_request_content(data: Object) is abstract
    
    fun is_rpc_path_valid is abstract
    
    fun accept_encodings is abstract
    
    # Selectively log an accepted request.
    redef fun log_request(code, size) is abstract
    
    # Handles the HTTP POST request.
    # Attempts to interpret all HTTP POST requests as XML-RPC calls,
    # which are forwarded to the server's _dispatch method for handling.
    fun do_post is abstract
    
    fun report_404 is abstract
    
end

# XML-RPC and HTML documentation server.
# Adds the ability to serve server documentation to the capabilities
# of SimpleXMLRPCServer.
class DocXMLRPCServer
    super XMLRPCDocGenerator
    super SimpleXMLRPCServer
    
    init do end
    
end

