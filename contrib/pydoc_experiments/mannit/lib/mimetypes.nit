# Guess the MIME type of a file.
# This module defines two useful functions:
# guess_type(url, strict=1) -- guess the MIME type and encoding of a URL.
# guess_extension(type, strict=1) -- guess the extension for a given MIME type.
# It also contains the following, for tuning the behavior:
# Data:
# knownfiles -- list of files to parse
# inited -- flag set when init() has been called
# suffix_map -- dictionary mapping suffixes to suffixes
# encodings_map -- dictionary mapping suffixes to encodings
# types_map -- dictionary mapping suffixes to types
# Functions:
# init([files]) -- parse a list of files, default knownfiles (on Windows, the
# default values are taken from the registry)
# read_mime_types(file) -- parse one file, return a dictionary or None
module mimetypes

import sys
import os
import posixpath
import urllib
import builtins

redef class Sys
    
end

# MIME-types datastore.
# This datastore can handle information from mime.types-style files
# and supports basic determination of MIME type from a filename or
# URL, and can guess a reasonable extension given a MIME type.
class MimeTypes
    
    # Guess the type of a file based on its URL.
    # Return value is a tuple (type, encoding) where type is None if
    # the type can't be guessed (no or unknown suffix) or a string
    # of the form type/subtype, usable for a MIME Content-type
    # header; and encoding is None for no encoding or the name of
    # the program used to encode (e.g. compress or gzip).  The
    # mappings are table driven.  Encoding suffixes are case
    # sensitive; type suffixes are first tried case sensitive, then
    # case insensitive.
    # The suffixes .tgz, .taz and .tz (case sensitive!) are all
    # mapped to '.tar.gz'.  (This is table-driven too, using the
    # dictionary suffix_map.)
    # Optional `strict' argument when False adds a bunch of commonly found,
    # but non-standard types.
    fun guess_type(url, strict: Object) is abstract
    
    # Load the MIME types database from Windows registry.
    # If strict is true, information will be added to
    # list of standard types, else to the list of non-standard
    # types.
    fun read_windows_registry(strict: Object) is abstract
    
    # Guess the extension for a file based on its MIME type.
    # Return value is a string giving a filename extension,
    # including the leading dot ('.').  The extension is not
    # guaranteed to have been associated with any particular data
    # stream, but would be mapped to the MIME type `type' by
    # guess_type().  If no extension can be guessed for `type', None
    # is returned.
    # Optional `strict' argument when false adds a bunch of commonly found,
    # but non-standard types.
    fun guess_extension(strict, py_type: Object) is abstract
    
    # Guess the extensions for a file based on its MIME type.
    # Return value is a list of strings giving the possible filename
    # extensions, including the leading dot ('.').  The extension is not
    # guaranteed to have been associated with any particular data stream,
    # but would be mapped to the MIME type `type' by guess_type().
    # Optional `strict' argument when false adds a bunch of commonly found,
    # but non-standard types.
    fun guess_all_extensions(strict, py_type: Object) is abstract
    
    # Add a mapping between a type and an extension.
    # When the extension is already known, the new
    # type will replace the old one. When the type
    # is already known the extension will be added
    # to the list of known extensions.
    # If strict is true, information will be added to
    # list of standard types, else to the list of non-standard
    # types.
    fun add_type(strict, ext, py_type: Object) is abstract
    
    # Read a single mime.types-format file.
    # If strict is true, information will be added to
    # list of standard types, else to the list of non-standard
    # types.
    fun readfp(fp, strict: Object) is abstract
    
    # Read a single mime.types-format file, specified by pathname.
    # If strict is true, information will be added to
    # list of standard types, else to the list of non-standard
    # types.
    fun read(strict, filename: Object) is abstract
    
    init do end
    
end

