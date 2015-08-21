# Generate Python documentation in HTML or text for interactive use.
# In the Python interpreter, do "from pydoc import help" to provide online
# help.  Calling help(thing) on a Python object documents the object.
# Or, at the shell command line outside of Python:
# Run "pydoc <name>" to show documentation on something.  <name> may be
# the name of a function, module, package, or a dotted reference to a
# class or function within a module or module in a package.  If the
# argument contains a path segment delimiter (e.g. slash on Unix,
# backslash on Windows) it is treated as the path to a Python source file.
# Run "pydoc -k <keyword>" to search for a keyword in the synopsis lines
# of all available modules.
# Run "pydoc -p <port>" to start an HTTP server on a given port on the
# local machine to generate documentation web pages.
# For platforms without a command line, "pydoc -g" starts the HTTP server
# and also pops up a little window for controlling it.
# Run "pydoc -w <name>" to write out the HTML documentation for a module
# to a file named "<name>.html".
# Module docs for core modules are assumed to be in
# http://docs.python.org/library/
# This can be overridden by setting the PYTHONDOCS environment variable
# to a different URL or to a local directory containing the Library
# Reference Manual pages.
module pydoc

import builtins

# Formatter class for HTML documentation.
class HTMLDoc
    super Doc
    
    # Make a link for a class.
    fun classlink(modname, object: Object) is abstract
    
    # Format literal preformatted text.
    fun preformat(text: Object) is abstract
    
    # Produce HTML documentation for a data object.
    fun docother(object, name, mod: Object) is abstract
    
    # Produce HTML for a class tree as given by inspect.getclasstree().
    fun formattree(modname, tree, parent: Object) is abstract
    
    # Produce HTML documentation for a function or method object.
    fun docroutine(funcs, name, cl, object, classes, mod, methods: Object) is abstract
    
    fun escape(text: Object) is abstract
    
    private fun private_docdescriptor(name, value, mod: Object) is abstract
    
    # Generate an HTML index for a directory of modules.
    fun index(dir, shadowed: Object) is abstract
    
    # Format a section with a heading.
    fun section(bgcol, title, gap, width, marginalia, fgcol, prelude, contents: Object) is abstract
    
    # Make a link for a module.
    fun modulelink(object: Object) is abstract
    
    # Produce html documentation for a property.
    fun docproperty(mod, object, name, cl: Object) is abstract
    
    # Format an argument default value as text.
    fun formatvalue(object: Object) is abstract
    
    # Make a link for an identifier, given name-to-URL mappings.
    fun namelink(name: Object) is abstract
    
    # Produce HTML documentation for a module object.
    fun docmodule(object, name, mod: Object) is abstract
    
    fun repr(object: Object) is abstract
    
    # Produce html documentation for a data descriptor.
    fun docdata(mod, object, name, cl: Object) is abstract
    
    # Make a link for a module or package to display in an index.
    fun modpkglink(data: Object) is abstract
    
    # Format a section with a big heading.
    fun bigsection(title: Object) is abstract
    
    # Mark up some plain text, given a context of symbols to look for.
    # Each context dictionary maps object names to anchor names.
    fun markup(funcs, text, classes, methods, escape: Object) is abstract
    
    fun grey(text: Object) is abstract
    
    # Format a page heading.
    fun heading(fgcol, extras, bgcol, title: Object) is abstract
    
    # Produce HTML documentation for a class object.
    fun docclass(funcs, object, classes, name, mod: Object) is abstract
    
    # Format a list of items into a multi-column list.
    fun multicolumn(list, cols, format: Object) is abstract
    
    # Format an HTML page.
    fun page(contents, title: Object) is abstract
    
end

# Class for safely making a text representation of a Python object.
class TextRepr
    super Repr
    
    redef fun repr_instance(x, level) is abstract
    
    init do end
    
    fun repr_string(x, level: Object) is abstract
    
    redef fun repr1(x, level) is abstract
    
end

# A generic tree iterator.
class Scanner
    
    init do end
    
    fun next is abstract
    
end

class Helper
    
    fun listkeywords is abstract
    
    fun help(request: Object) is abstract
    
    fun showtopic(topic, more_xrefs: Object) is abstract
    
    fun interact is abstract
    
    fun list(items, columns, width: Object) is abstract
    
    fun repr is abstract
    
    init do end
    
    fun intro is abstract
    
    fun call(request: Object) is abstract
    
    fun listmodules(key: Object) is abstract
    
    fun listsymbols is abstract
    
    # Read one line, using raw_input when available.
    fun getline(prompt: Object) is abstract
    
    fun listtopics is abstract
    
    fun showsymbol(symbol: Object) is abstract
    
end

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
end

class Doc
    
    # Raise an exception for unimplemented types.
    fun fail(object, name: Object) is abstract
    
    # Generate documentation for an object.
    fun document(object, name: Object) is abstract
    
    # Return the location of module docs or None
    fun getdocloc(object: Object) is abstract
    
end

# Class for safely making an HTML representation of a Python object.
class HTMLRepr
    super Repr
    
    redef fun repr_instance(x, level) is abstract
    
    fun repr_string(x, level: Object) is abstract
    
    redef fun repr(x) is abstract
    
    redef fun repr1(x, level) is abstract
    
    init do end
    
    fun escape(text: Object) is abstract
    
end

# Errors that occurred while trying to import something to document it.
class ErrorDuringImport
    super Exception
    
    init do end
    
    fun str is abstract
    
end

class Repr
    
    fun repr_instance(x, level: Object) is abstract
    
    fun repr_array(x, level: Object) is abstract
    
    private fun private_repr_iterable(right, level, trail, maxiter, x, left: Object) is abstract
    
    fun repr_tuple(x, level: Object) is abstract
    
    fun repr_list(x, level: Object) is abstract
    
    fun repr_long(x, level: Object) is abstract
    
    fun repr(x: Object) is abstract
    
    fun repr1(x, level: Object) is abstract
    
    init do end
    
    fun repr_set(x, level: Object) is abstract
    
    fun repr_str(x, level: Object) is abstract
    
    fun repr_deque(x, level: Object) is abstract
    
    fun repr_frozenset(x, level: Object) is abstract
    
    fun repr_dict(x, level: Object) is abstract
    
end

redef class Sys
    
end

# instance(class[, dict])
# Create an instance without calling its __init__() method.
# The class must be a classic class.
# If present, dict must be a dictionary or None.
class Instance
    
end

# Formatter class for text documentation.
class TextDoc
    super Doc
    
    # Produce text documentation for a property.
    fun docproperty(mod, object, name, cl: Object) is abstract
    
    # Indent text by prepending a given prefix to each line.
    fun indent(text, prefix: Object) is abstract
    
    # Format a string in bold by overstriking.
    fun bold(text: Object) is abstract
    
    # Produce text documentation for a given module object.
    fun docmodule(object, name, mod: Object) is abstract
    
    # Format a section with a given heading.
    fun section(contents, title: Object) is abstract
    
    # Format an argument default value as text.
    fun formatvalue(object: Object) is abstract
    
    # Produce text documentation for a data object.
    fun docother(name, parent, doc, object, maxlen, mod: Object) is abstract
    
    fun repr(x: Object) is abstract
    
    # Produce text documentation for a data descriptor.
    fun docdata(mod, object, name, cl: Object) is abstract
    
    # Produce text documentation for a function or method object.
    fun docroutine(mod, object, name, cl: Object) is abstract
    
    # Produce text documentation for a given class object.
    fun docclass(object, name, mod: Object) is abstract
    
    private fun private_docdescriptor(name, value, mod: Object) is abstract
    
    # Render in text a class tree as returned by inspect.getclasstree().
    fun formattree(prefix, tree, modname, parent: Object) is abstract
    
end

# An interruptible scanner that searches module synopses.
class ModuleScanner
    
    fun run(onerror, callback, completer, key: Object) is abstract
    
end

# unicode(object='') -> unicode object
# unicode(string[, encoding[, errors]]) -> unicode object
# Create a new Unicode object from the given encoded string.
# encoding defaults to the current default string encoding.
# errors can be 'strict', 'replace' or 'ignore' and defaults to 'strict'.
class Unicode
    super Basestring
    
end

private class OldStyleClass
    
end

