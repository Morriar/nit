# Support module for CGI (Common Gateway Interface) scripts.
# This module defines a number of utilities for use by CGI scripts
# written in Python.
module cgi

import mimetools
import urlparse
import rfc822
import userdict
import sys
import os
import builtins

# This class is present for backwards compatibility only.
class FormContent
    super FormContentDict
    
    fun stripped(key: Object) is abstract
    
    fun value(key: Object) is abstract
    
    fun indexed_value(location, key: Object) is abstract
    
    fun length(key: Object) is abstract
    
    redef fun values is abstract
    
    fun pars is abstract
    
end

# Form content as dictionary expecting a single value per field.
# If you only expect a single value for each field, then form[key]
# will return that single value.  It will raise an IndexError if
# that expectation is not true.  If you expect a field to have
# possible multiple values, than you can use form.getlist(key) to
# get all of the values.  values() and items() are a compromise:
# they return single strings where there is a single value, and
# lists of strings otherwise.
class SvFormContentDict
    super FormContentDict
    
    redef fun items is abstract
    
    fun getlist(key: Object) is abstract
    
    redef fun values is abstract
    
    redef fun getitem(key) is abstract
    
end

# Store a sequence of fields, reading multipart/form-data.
# This class provides naming, typing, files stored on disk, and
# more.  At the top level, it is accessible like a dictionary, whose
# keys are the field names.  (Note: None can occur as a field name.)
# The items are either a Python list (if there's multiple values) or
# another FieldStorage or MiniFieldStorage object.  If it's a single
# object, it has the following attributes:
# name: the field name, if specified; otherwise None
# filename: the filename, if specified; otherwise None; this is the
# client side filename, *not* the file name on which it is
# stored (that's a temporary file you don't deal with)
# value: the value as a *string*; for file uploads, this
# transparently reads the file every time you request the value
# file: the file(-like) object from which you can read the data;
# None if the data is stored a simple string
# type: the content-type, or None if not specified
# type_options: dictionary of options specified on the content-type
# line
# disposition: content-disposition, or None if not specified
# disposition_options: dictionary of corresponding options
# headers: a dictionary(-like) object (sometimes rfc822.Message or a
# subclass thereof) containing *all* headers
# The class is subclassable, mostly for the purpose of overriding
# the make_file() method, which is called internally to come up with
# a file open for reading and writing.  This makes it possible to
# override the default choice of storing all files in a temporary
# directory and unlinking them as soon as they have been opened.
class FieldStorage
    
    # Return list of received values.
    fun getlist(key: Object) is abstract
    
    # Dictionary style get() method, including 'value' lookup.
    fun getvalue(default, key: Object) is abstract
    
    # Dictionary style has_key() method.
    fun has_key(key: Object) is abstract
    
    # Internal: read lines until EOF or outerboundary.
    fun read_lines is abstract
    
    fun nonzero is abstract
    
    # Internal: read a part that is itself multipart.
    fun read_multi(keep_blank_values, strict_parsing, environ: Object) is abstract
    
    # Dictionary style __contains__ method.
    fun contains(key: Object) is abstract
    
    # Constructor.  Read multipart/* until last part.
    # Arguments, all optional:
    # fp              : file pointer; default: sys.stdin
    # (not used when the request method is GET)
    # headers         : header dictionary-like object; default:
    # taken from environ as per CGI spec
    # outerboundary   : terminating multipart boundary
    # (for internal use only)
    # environ         : environment dictionary; default: os.environ
    # keep_blank_values: flag indicating whether blank values in
    # percent-encoded forms should be treated as blank strings.
    # A true value indicates that blanks should be retained as
    # blank strings.  The default false value indicates that
    # blank values are to be ignored and treated as if they were
    # not included.
    # strict_parsing: flag indicating what to do with parsing errors.
    # If false (the default), errors are silently ignored.
    # If true, errors raise a ValueError exception.
    init do end
    
    fun write(line: Object) is abstract
    
    # Internal: read lines until outerboundary.
    fun read_lines_to_outerboundary is abstract
    
    fun getattr(name: Object) is abstract
    
    # Internal: read data in query string format.
    fun read_urlencoded is abstract
    
    # Internal: read an atomic part.
    fun read_single is abstract
    
    # Dictionary style keys() method.
    fun keys is abstract
    
    # Internal: skip lines until outer boundary if defined.
    fun skip_lines is abstract
    
    # Return a printable representation.
    fun repr is abstract
    
    # Dictionary style len(x) support.
    fun len is abstract
    
    # Internal: read lines until EOF.
    fun read_lines_to_eof is abstract
    
    fun iter is abstract
    
    # Overridable: return a readable & writable file.
    # The file will be used as follows:
    # - data is written to it
    # - seek(0)
    # - data is read from it
    # The 'binary' argument is unused -- the file is always opened
    # in binary mode.
    # This version opens a temporary file for reading and writing,
    # and immediately deletes (unlinks) it.  The trick (on Unix!) is
    # that the file can still be used, but it can't be opened by
    # another process, and it will automatically be deleted when it
    # is closed or when the current process terminates.
    # If you want a more permanent file, you derive a class which
    # overrides this method.  If you want a visible temporary file
    # that is nevertheless automatically deleted when the script
    # terminates, try defining a __del__ method in a derived class
    # which unlinks the temporary files you have created.
    fun make_file(binary: Object) is abstract
    
    # Dictionary style indexing.
    fun getitem(key: Object) is abstract
    
    # Internal: read binary data.
    fun read_binary is abstract
    
    # Return the first value received.
    fun getfirst(default, key: Object) is abstract
    
end

# attrgetter(attr, ...) --> attrgetter object
# Return a callable object that fetches the given attribute(s) from its operand.
# After f = attrgetter('name'), the call f(r) returns r.name.
# After g = attrgetter('name', 'date'), the call g(r) returns (r.name, r.date).
# After h = attrgetter('name.first', 'name.last'), the call h(r) returns
# (r.name.first, r.name.last).
class Attrgetter
    
end

redef class Sys
    
end

# Form content as dictionary with a list of values per field.
# form = FormContentDict()
# form[key] -> [value, value, ...]
# key in form -> Boolean
# form.keys() -> [key, key, ...]
# form.values() -> [[val, val, ...], [val, val, ...], ...]
# form.items() ->  [(key, [val, val, ...]), (key, [val, val, ...]), ...]
# form.dict == {key: [val, val, ...], ...}
class FormContentDict
    super UserDict
    
    init do end
    
end

# Like FieldStorage, for use when no file uploads are possible.
class MiniFieldStorage
    
    # Constructor from field name and value.
    init do end
    
    # Return printable representation.
    fun repr is abstract
    
end

# A context manager that copies and restores the warnings filter upon
# exiting the context.
# The 'record' argument specifies whether warnings should be captured by a
# custom implementation of warnings.showwarning() and be appended to a list
# returned by the context manager. Otherwise None is returned by the context
# manager. The objects appended to the list are arguments whose attributes
# mirror the arguments to showwarning().
# The 'module' argument is to specify an alternative module to the module
# named 'warnings' and imported under that name. This argument is only useful
# when testing the warnings module itself.
redef class Catch_warnings
    
    # Specify whether to record warnings and if an alternative module
    # should be used other than sys.modules['warnings'].
    # For compatibility with Python 3.0, please consider all arguments to be
    # keyword-only.
    init do end
    
    redef fun exit is abstract
    
    redef fun repr is abstract
    
    redef fun enter is abstract
    
end

# This class is present for backwards compatibility only.
class InterpFormContentDict
    super SvFormContentDict
    
    redef fun items is abstract
    
    redef fun values is abstract
    
    redef fun getitem(key) is abstract
    
end

