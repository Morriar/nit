# Find modules used by a script, using introspection.
module modulefinder

import struct
import sys
import imp
import os
import marshal
import types
import dis
import builtins

redef class Sys
    
end

class ModuleFinder
    
    fun load_tail(q, tail: Object) is abstract
    
    fun add_module(fqname: Object) is abstract
    
    fun msgin is abstract
    
    # Return a list of modules that appear to be missing. Use
    # any_missing_maybe() if you want to know which modules are
    # certain to be missing, and which *may* be missing.
    fun any_missing is abstract
    
    fun find_module(path, name, parent: Object) is abstract
    
    fun load_module(fqname, fp, pathname, file_info: Object) is abstract
    
    init do end
    
    fun find_all_submodules(m: Object) is abstract
    
    fun msg(str, level: Object) is abstract
    
    fun load_file(pathname: Object) is abstract
    
    fun msgout is abstract
    
    fun import_hook(fromlist, caller, name, level: Object) is abstract
    
    fun replace_paths_in_code(co: Object) is abstract
    
    fun run_script(pathname: Object) is abstract
    
    private fun private_add_badmodule(caller, name: Object) is abstract
    
    fun load_package(fqname, pathname: Object) is abstract
    
    fun determine_parent(caller, level: Object) is abstract
    
    # Print a report to stdout, listing the found modules with their
    # paths, as well as modules that are missing, or seem to be missing.
    fun report is abstract
    
    fun scan_opcodes_25(co, unpack: Object) is abstract
    
    fun find_head_package(name, parent: Object) is abstract
    
    fun scan_opcodes(co, unpack: Object) is abstract
    
    fun scan_code(co, m: Object) is abstract
    
    fun ensure_fromlist(fromlist, m, recursive: Object) is abstract
    
    fun import_module(fqname, partname, parent: Object) is abstract
    
    private fun private_safe_import_hook(fromlist, caller, name, level: Object) is abstract
    
    # Return two lists, one with modules that are certainly missing
    # and one with modules that *may* be missing. The latter names could
    # either be submodules *or* just global names in the package.
    # The reason it can't always be determined is that it's impossible to
    # tell which names are imported when "from module import *" is done
    # with an extension module, short of actually importing it.
    fun any_missing_maybe is abstract
    
end

redef class Module
    
    init do end
    
    fun repr is abstract
    
end

