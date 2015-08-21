# Import utilities
# Exported classes:
# ImportManager   Manage the import process
# Importer        Base class for replacing standard import functions
# BuiltinImporter Emulate the import mechanism for builtin and frozen modules
# DynLoadSuffixImporter
module imputil

import sys
import imp
import marshal
import struct
import builtins

# Manage the import process.
class ImportManager
    
    # Python calls this hook to reload a module.
    private fun private_reload_hook(py_module: Object) is abstract
    
    private fun private_import_top_module(name: Object) is abstract
    
    # Returns the context in which a module should be imported.
    # The context could be a loaded (package) module and the imported module
    # will be looked for within that package. The context could also be None,
    # meaning there is no context -- the module should be looked for as a
    # "top-level" module.
    private fun private_determine_import_context(globals: Object) is abstract
    
    init do end
    
    # Python calls this hook to locate and import a module.
    private fun private_import_hook(fqname, fromlist, globals, locals: Object) is abstract
    
    # Install this ImportManager into the specified namespace.
    fun install(namespace: Object) is abstract
    
    fun add_suffix(suffix, importfunc: Object) is abstract
    
    # Restore the previous import mechanism.
    fun uninstall is abstract
    
end

class DynLoadSuffixImporter
    
    init do end
    
    fun import_file(fqname, finfo, filename: Object) is abstract
    
end

# module(name[, doc])
# Create a module object.
# The name must be a string; the optional doc argument can have any type.
redef class Module
    
end

redef class Sys
    
end

# Base class for replacing standard import functions.
class Importer
    
    # Import a single module.
    private fun private_import_one(fqname, modname, parent: Object) is abstract
    
    private fun private_process_result(fqname, result: Object) is abstract
    
    # Import the rest of the modules, down from the top-level module.
    # Returns the last module in the dotted list of modules.
    private fun private_load_tail(parts, m: Object) is abstract
    
    # Attempt to import the module relative to parent.
    # This method is used when the import context specifies that <self>
    # imported the parent module.
    private fun private_do_import(fromlist, parts, parent: Object) is abstract
    
    # Import a top-level module.
    fun import_top(name: Object) is abstract
    
    # Find and retrieve the code for the given module.
    # parent specifies a parent module to define a context for importing. It
    # may be None, indicating no particular context for the search.
    # modname specifies a single module (not dotted) within the parent.
    # fqname specifies the fully-qualified module name. This is a
    # (potentially) dotted name from the "root" of the module namespace
    # down to the modname.
    # If there is no parent, then modname==fqname.
    # This method should return None, or a 3-tuple.
    # * If the module was not found, then None should be returned.
    # * The first item of the 2- or 3-tuple should be the integer 0 or 1,
    # specifying whether the module that was found is a package or not.
    # * The second item is the code object for the module (it will be
    # executed within the new module's namespace). This item can also
    # be a fully-loaded module object (e.g. loaded from a shared lib).
    # * The third item is a dictionary of name/value pairs that will be
    # inserted into new module before the code object is executed. This
    # is provided in case the module's code expects certain values (such
    # as where the module was found). When the second item is a module
    # object, then these names/values will be inserted *after* the module
    # has been loaded/initialized.
    fun get_code(fqname, modname, parent: Object) is abstract
    
    # Import any sub-modules in the "from" list.
    private fun private_import_fromlist(fromlist, py_package: Object) is abstract
    
    private fun private_finish_import(fromlist, top, parts: Object) is abstract
    
end

# str(object='') -> string
# Return a nice string representation of the object.
# If the argument is a string, the return value is the same object.
class Str
    super Basestring
    
end

private class FilesystemImporter
    super Importer
    
    redef fun get_code(fqname, modname, parent) is abstract
    
    private fun private_import_pathname(fqname, pathname: Object) is abstract
    
    init do end
    
    fun import_from_dir(fqname, dir: Object) is abstract
    
    fun add_suffix(suffix, importfunc: Object) is abstract
    
end

class BuiltinImporter
    super Importer
    
    redef fun get_code(fqname, modname, parent) is abstract
    
end

