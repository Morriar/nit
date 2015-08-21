# Simple XML-RPC Server.
# This module can be used to create simple XML-RPC servers
# by creating a server and either installing functions, a
# class instance, or by extending the SimpleXMLRPCServer
# class.
# It can also be used to handle XML-RPC requests in a CGI
# environment using CGIXMLRPCRequestHandler.
# A list of possible usage patterns follows:
# 1. Install functions:
# server = SimpleXMLRPCServer(("localhost", 8000))
# server.register_function(pow)
# server.register_function(lambda x,y: x+y, 'add')
# server.serve_forever()
# 2. Install an instance:
# class MyFuncs:
# def __init__(self):
# # make all of the string functions available through
# # string.func_name
# import string
# self.string = string
# def _listMethods(self):
# # implement this method so that system.listMethods
# # knows to advertise the strings methods
# return list_public_methods(self) + \
# ['string.' + method for method in list_public_methods(self.string)]
# def pow(self, x, y): return pow(x, y)
# def add(self, x, y) : return x + y
# server = SimpleXMLRPCServer(("localhost", 8000))
# server.register_introspection_functions()
# server.register_instance(MyFuncs())
# server.serve_forever()
# 3. Install an instance with custom dispatch method:
# class Math:
# def _listMethods(self):
# # this method must be present for system.listMethods
# # to work
# return ['add', 'pow']
# def _methodHelp(self, method):
# # this method must be present for system.methodHelp
# # to work
# if method == 'add':
# return "add(2,3) => 5"
# elif method == 'pow':
# return "pow(x, y[, z]) => number"
# else:
# # By convention, return empty
# # string if no help is available
# return ""
# def _dispatch(self, method, params):
# if method == 'pow':
# return pow(*params)
# elif method == 'add':
# return params[0] + params[1]
# else:
# raise 'bad method'
# server = SimpleXMLRPCServer(("localhost", 8000))
# server.register_introspection_functions()
# server.register_instance(Math())
# server.serve_forever()
# 4. Subclass SimpleXMLRPCServer:
# class MathServer(SimpleXMLRPCServer):
# def _dispatch(self, method, params):
# try:
# # We are forcing the 'export_' prefix on methods that are
# # callable through XML-RPC to prevent potential security
# # problems
# func = getattr(self, 'export_' + method)
# except AttributeError:
# raise Exception('method "%s" is not supported' % method)
# else:
# return func(*params)
# def export_add(self, x, y):
# return x + y
# server = MathServer(("localhost", 8000))
# server.serve_forever()
# 5. CGI script:
# server = CGIXMLRPCRequestHandler()
# server.register_function(pow)
# server.handle_request()
module simplexmlrpcserver

import fcntl
import socketserver
import traceback
import xmlrpclib
import sys
import re
import basehttpserver
import os
import builtins

# Indicates an XML-RPC fault package.
redef class Fault
    
    init do end
    
    redef fun repr is abstract
    
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

# Mix-in class that dispatches XML-RPC requests.
# This class is used to register XML-RPC method handlers
# and then to dispatch them. This class doesn't need to be
# instanced directly when used by SimpleXMLRPCServer but it
# can be instanced when used by the MultiPathXMLRPCServer.
class SimpleXMLRPCDispatcher
    
    # Registers the XML-RPC multicall method in the system
    # namespace.
    # see http://www.xmlrpc.com/discuss/msgReader$1208
    fun register_multicall_functions is abstract
    
    # system.methodHelp('add') => "Adds two integers together"
    # Returns a string containing documentation for the specified method.
    fun system_methodhelp(method_name: Object) is abstract
    
    # system.methodSignature('add') => [double, int, int]
    # Returns a list describing the signature of the method. In the
    # above example, the add method takes two integers as arguments
    # and returns a double result.
    # This server does NOT support system.methodSignature.
    fun system_methodsignature(method_name: Object) is abstract
    
    init do end
    
    # Registers a function to respond to XML-RPC requests.
    # The optional name argument can be used to set a Unicode name
    # for the function.
    fun register_function(function, name: Object) is abstract
    
    # system.listMethods() => ['add', 'subtract', 'multiple']
    # Returns a list of the methods supported by the server.
    fun system_listmethods is abstract
    
    # Dispatches an XML-RPC method from marshalled (XML) data.
    # XML-RPC methods are dispatched from the marshalled (XML) data
    # using the _dispatch method and the result is returned as
    # marshalled data. For backwards compatibility, a dispatch
    # function can be provided as an argument (see comment in
    # SimpleXMLRPCRequestHandler.do_POST) but overriding the
    # existing method through subclassing is the preferred means
    # of changing method dispatch behavior.
    private fun private_marshaled_dispatch(path, data, dispatch_method: Object) is abstract
    
    # system.multicall([{'methodName': 'add', 'params': [2, 2]}, ...]) => [[4], ...]
    # Allows the caller to package multiple XML-RPC calls into a single
    # request.
    # See http://www.xmlrpc.com/discuss/msgReader$1208
    fun system_multicall(call_list: Object) is abstract
    
    # Dispatches the XML-RPC method.
    # XML-RPC calls are forwarded to a registered function that
    # matches the called XML-RPC method name. If no such function
    # exists then the call is forwarded to the registered instance,
    # if available.
    # If the registered instance has a _dispatch method then that
    # method will be called with the name of the XML-RPC method and
    # its parameters as a tuple
    # e.g. instance._dispatch('add',(2,3))
    # If the registered instance does not have a _dispatch method
    # then the instance will be searched to find a matching method
    # and, if found, will be called.
    # Methods beginning with an '_' are considered private and will
    # not be called.
    private fun private_dispatch(params, method: Object) is abstract
    
    # Registers the XML-RPC introspection methods in the system
    # namespace.
    # see http://xmlrpc.usefulinc.com/doc/reserved.html
    fun register_introspection_functions is abstract
    
    # Registers an instance to respond to XML-RPC requests.
    # Only one instance can be installed at a time.
    # If the registered instance has a _dispatch method then that
    # method will be called with the name of the XML-RPC method and
    # its parameters as a tuple
    # e.g. instance._dispatch('add',(2,3))
    # If the registered instance does not have a _dispatch method
    # then the instance will be searched to find a matching method
    # and, if found, will be called. Methods beginning with an '_'
    # are considered private and will not be called by
    # SimpleXMLRPCServer.
    # If a registered function matches a XML-RPC request, then it
    # will be called instead of the registered instance.
    # If the optional allow_dotted_names argument is true and the
    # instance does not have a _dispatch method, method names
    # containing dots are supported and resolved, as long as none of
    # the name segments start with an '_'.
    # *** SECURITY WARNING: ***
    # Enabling the allow_dotted_names options allows intruders
    # to access your module's global variables and may allow
    # intruders to execute arbitrary code on your machine.  Only
    # use this option on a secure, closed network.
    fun register_instance(instance, allow_dotted_names: Object) is abstract
    
end

# Multipath XML-RPC Server
# This specialization of SimpleXMLRPCServer allows the user to create
# multiple Dispatcher instances and assign them to different
# HTTP request paths.  This makes it possible to run two or more
# 'virtual XML-RPC servers' at the same port.
# Make sure that the requestHandler accepts the paths in question.
class MultiPathXMLRPCServer
    super SimpleXMLRPCServer
    
    redef fun private_marshaled_dispatch(path, data, dispatch_method) is abstract
    
    fun get_dispatcher(path: Object) is abstract
    
    init do end
    
    fun add_dispatcher(path, dispatcher: Object) is abstract
    
end

