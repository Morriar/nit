# Utilities to support packages.
module pkgutil

import sys
import imp
import zipimport
import os
import builtins

redef class Sys
    
end

# zipimporter(archivepath) -> zipimporter object
# Create a new zipimporter instance. 'archivepath' must be a path to
# a zipfile, or to a specific path inside a zipfile. For example, it can be
# '/tmp/myimport.zip', or '/tmp/myimport.zip/mydirectory', if mydirectory is a
# valid directory inside the archive.
# 'ZipImportError is raised if 'archivepath' doesn't point to a valid Zip
# archive.
# The 'archive' attribute of zipimporter objects contains the name of the
# zipfile targeted.
redef class Zipimporter
    
end

# PEP 302 Loader that wraps Python's "classic" import algorithm
class ImpLoader
    
    private fun private_reopen is abstract
    
    fun get_source(fullname: Object) is abstract
    
    fun get_data(pathname: Object) is abstract
    
    fun load_module(fullname: Object) is abstract
    
    fun get_code(fullname: Object) is abstract
    
    init do end
    
    fun is_package(fullname: Object) is abstract
    
    fun get_filename(fullname: Object) is abstract
    
    private fun private_fix_name(fullname: Object) is abstract
    
    private fun private_get_delegate is abstract
    
end

# PEP 302 Importer that wraps Python's "classic" import algorithm
# ImpImporter(dirname) produces a PEP 302 importer that searches that
# directory.  ImpImporter(None) produces a PEP 302 importer that searches
# the current sys.path, plus any modules that are frozen or built-in.
# Note that ImpImporter does not currently support being used by placement
# on sys.meta_path.
class ImpImporter
    
    fun iter_modules(prefix: Object) is abstract
    
    init do end
    
    fun find_module(path, fullname: Object) is abstract
    
end

# module(name[, doc])
# Create a module object.
# The name must be a string; the optional doc argument can have any type.
redef class Module
    
end

