# Import hook support.
# Consistent use of this module will make it possible to change the
# different mechanisms involved in loading modules independently.
# While the built-in module imp exports interfaces to the built-in
# module searching and loading algorithm, and it is possible to replace
# the built-in function __import__ in order to change the semantics of
# the import statement, until now it has been difficult to combine the
# effect of different __import__ hacks, like loading modules from URLs
# by rimport.py, or restricted execution by rexec.py.
# This module defines three new concepts:
# 1) A "file system hooks" class provides an interface to a filesystem.
# One hooks class is defined (Hooks), which uses the interface provided
# by standard modules os and os.path.  It should be used as the base
# class for other hooks classes.
# 2) A "module loader" class provides an interface to search for a
# module in a search path and to load it.  It defines a method which
# searches for a module in a single directory; by overriding this method
# one can redefine the details of the search.  If the directory is None,
# built-in and frozen modules are searched instead.
# Two module loader class are defined, both implementing the search
# strategy used by the built-in __import__ function: ModuleLoader uses
# the imp module's find_module interface, while HookableModuleLoader
# uses a file system hooks class to interact with the file system.  Both
# use the imp module's load_* interfaces to actually load the module.
# 3) A "module importer" class provides an interface to import a
# module, as well as interfaces to reload and unload a module.  It also
# provides interfaces to install and uninstall itself instead of the
# default __import__ and reload (and unload) functions.
# One module importer class is defined (ModuleImporter), which uses a
# module loader instance passed in (by default HookableModuleLoader is
# instantiated).
# The classes defined here should be used as base classes for extended
# functionality along those lines.
# If a module importer class supports dotted names, its import_module()
# must return a different value depending on whether it is called on
# behalf of a "from ... import ..." statement or not.  (This is caused
# by the way the __import__ hook is used by the Python interpreter.)  It
# would also do wise to install a different version of reload().
module ihooks

import sys
import imp
import os
import builtins

private class Verbose
    
    fun get_verbose is abstract
    
    fun note is abstract
    
    fun message(format: Object) is abstract
    
    fun set_verbose(verbose: Object) is abstract
    
    init do end
    
end

# Hooks into the filesystem and interpreter.
# By deriving a subclass you can redefine your filesystem interface,
# e.g. to merge it with the URL space.
# This base class behaves just like the native filesystem.
class Hooks
    super Verbose
    
    fun path_split(x: Object) is abstract
    
    fun load_source(name, file, filename: Object) is abstract
    
    fun get_suffixes is abstract
    
    fun load_dynamic(name, file, filename: Object) is abstract
    
    fun init_builtin(name: Object) is abstract
    
    fun path_isabs(x: Object) is abstract
    
    fun is_builtin(name: Object) is abstract
    
    fun add_module(name: Object) is abstract
    
    fun openfile is abstract
    
    fun load_compiled(name, file, filename: Object) is abstract
    
    fun new_module(name: Object) is abstract
    
    fun modules_dict is abstract
    
    fun init_frozen(name: Object) is abstract
    
    fun path_islink(x: Object) is abstract
    
    fun listdir(x: Object) is abstract
    
    fun get_frozen_object(name: Object) is abstract
    
    fun load_package(name, file, filename: Object) is abstract
    
    fun path_exists(x: Object) is abstract
    
    fun path_isdir(x: Object) is abstract
    
    fun path_join(y, x: Object) is abstract
    
    fun default_path is abstract
    
    fun is_frozen(name: Object) is abstract
    
    fun path_isfile(x: Object) is abstract
    
end

redef class Sys
    
end

# Fancy module loader -- parses and execs the code itself.
class FancyModuleLoader
    super ModuleLoader
    
    redef fun load_module(stuff, name) is abstract
    
end

# A module importer that supports packages.
class ModuleImporter
    super BasicModuleImporter
    
    fun find_head_package(name, parent: Object) is abstract
    
    fun import_it(fqname, partname, force_load, parent: Object) is abstract
    
    redef fun reload(path, py_module) is abstract
    
    fun determine_parent(globals, level: Object) is abstract
    
    fun load_tail(q, tail: Object) is abstract
    
    fun ensure_fromlist(fromlist, m, recursive: Object) is abstract
    
    redef fun import_module(fromlist, globals, name, locals) is abstract
    
end

# Default module loader; uses file system hooks.
# By defining suitable hooks, you might be able to load modules from
# other sources than the file system, e.g. from compressed or
# encrypted files, tar files or (if you're brave!) URLs.
class ModuleLoader
    super BasicModuleLoader
    
    redef fun find_module_in_dir(name, dir) is abstract
    
    redef fun default_path is abstract
    
    redef fun find_builtin_module(name) is abstract
    
    redef fun load_module(stuff, name) is abstract
    
    init do end
    
    fun get_hooks is abstract
    
    fun modules_dict is abstract
    
    fun set_hooks(hooks: Object) is abstract
    
end

# Basic module loader.
# This provides the same functionality as built-in import.  It
# doesn't deal with checking sys.modules -- all it provides is
# find_module() and a load_module(), as well as find_module_in_dir()
# which searches just one directory, and can be overridden by a
# derived class to change the module search algorithm when the basic
# dependency on sys.path is unchanged.
# The interface is a little more convenient than imp's:
# find_module(name, [path]) returns None or 'stuff', and
# load_module(name, stuff) loads the module.
class BasicModuleLoader
    super Verbose
    
    fun find_module_in_dir(name, dir: Object) is abstract
    
    fun find_module(path, name: Object) is abstract
    
    fun default_path is abstract
    
    fun load_module(stuff, name: Object) is abstract
    
    fun find_builtin_module(name: Object) is abstract
    
end

# Basic module importer; uses module loader.
# This provides basic import facilities but no package imports.
class BasicModuleImporter
    super Verbose
    
    fun set_loader(loader: Object) is abstract
    
    fun unload(py_module: Object) is abstract
    
    fun reload(path, py_module: Object) is abstract
    
    init do end
    
    fun get_hooks is abstract
    
    fun install is abstract
    
    fun set_hooks(hooks: Object) is abstract
    
    fun get_loader is abstract
    
    fun import_module(fromlist, globals, name, locals: Object) is abstract
    
    fun uninstall is abstract
    
end

