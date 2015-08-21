# Restricted execution facilities.
# The class RExec exports methods r_exec(), r_eval(), r_execfile(), and
# r_import(), which correspond roughly to the built-in operations
# exec, eval(), execfile() and import, but executing the code in an
# environment that only exposes those built-in operations that are
# deemed safe.  To this end, a modest collection of 'fake' modules is
# created which mimics the standard modules by the same names.  It is a
# policy decision which built-in modules and operations are made
# available; this module provides a reasonable default, but derived
# classes can change the policies e.g. by overriding or extending class
# variables like ok_builtin_modules or methods like make_sys().
# XXX To do:
# - r_open should allow writing tmp dir
# - r_exec etc. with explicit globals/locals? (Use rexec("exec ... in ...")?)
module rexec

import sys
import ihooks
import os
import imp
import builtins

class FileBase
    
end

class RHooks
    super Hooks
    
    redef fun load_compiled(name, file, filename) is abstract
    
    fun set_rexec(rexec: Object) is abstract
    
    redef fun load_source(name, file, filename) is abstract
    
    redef fun get_suffixes is abstract
    
    redef fun load_dynamic(name, file, filename) is abstract
    
    redef fun init_builtin(name) is abstract
    
    redef fun load_package(name, file, filename) is abstract
    
    init do end
    
    redef fun default_path is abstract
    
    redef fun modules_dict is abstract
    
    redef fun init_frozen(name) is abstract
    
    redef fun is_builtin(name) is abstract
    
    redef fun add_module(name) is abstract
    
end

class FileDelegate
    super FileBase
    
    fun fileno is abstract
    
    fun isatty is abstract
    
    fun read is abstract
    
    fun writelines is abstract
    
    fun flush is abstract
    
    fun readlines is abstract
    
    fun iter is abstract
    
    fun write is abstract
    
    init do end
    
    fun xreadlines is abstract
    
    fun close is abstract
    
    fun readline is abstract
    
    fun seek is abstract
    
    fun tell is abstract
    
end

redef class Sys
    
end

# Fancy module loader -- parses and execs the code itself.
redef class FancyModuleLoader
    
    redef fun load_module(stuff, name) is abstract
    
end

# Basic restricted execution framework.
# Code executed in this restricted environment will only have access to
# modules and functions that are deemed safe; you can subclass RExec to
# add or remove capabilities as desired.
# The RExec class can prevent code from performing unsafe operations like
# reading or writing disk files, or using TCP/IP sockets.  However, it does
# not protect against code using extremely large amounts of memory or
# processor time.
class RExec
    super Verbose
    
    # Import a module, raising an ImportError exception if the module
    # is considered unsafe.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    fun r_import(fromlist, mname, globals, locals: Object) is abstract
    
    fun restore_files is abstract
    
    fun get_suffixes is abstract
    
    fun copy_only(src, names: Object) is abstract
    
    fun load_dynamic(name, file, filename: Object) is abstract
    
    # Import a module, raising an ImportError exception if the module
    # is considered unsafe.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    # Similar to the r_import() method, but has access to restricted
    # versions of the standard I/O streams sys.stdin, sys.stderr, and
    # sys.stdout.
    fun s_import is abstract
    
    fun set_trusted_path is abstract
    
    fun save_files is abstract
    
    fun is_builtin(mname: Object) is abstract
    
    fun make_osname is abstract
    
    fun add_module(mname: Object) is abstract
    
    fun set_files is abstract
    
    # Evaluate code within a restricted environment.
    # Similar to the r_eval() method, but the code will be granted access
    # to restricted versions of the standard I/O streams sys.stdin,
    # sys.stderr, and sys.stdout.
    # The code parameter must either be a string containing a Python
    # expression, or a compiled code object, which will be evaluated in
    # the restricted environment's __main__ module.  The value of the
    # expression or code object will be returned.
    fun s_eval is abstract
    
    fun make_main is abstract
    
    # Evaluate code within a restricted environment.
    # The code parameter must either be a string containing a Python
    # expression, or a compiled code object, which will be evaluated in
    # the restricted environment's __main__ module.  The value of the
    # expression or code object will be returned.
    fun r_eval(code: Object) is abstract
    
    fun copy_none(src: Object) is abstract
    
    # Returns an instance of the RExec class.
    # The hooks parameter is an instance of the RHooks class or a subclass
    # of it.  If it is omitted or None, the default RHooks class is
    # instantiated.
    # Whenever the RExec module searches for a module (even a built-in one)
    # or reads a module's code, it doesn't actually go out to the file
    # system itself.  Rather, it calls methods of an RHooks instance that
    # was passed to or created by its constructor.  (Actually, the RExec
    # object doesn't make these calls --- they are made by a module loader
    # object that's part of the RExec object.  This allows another level of
    # flexibility, which can be useful when changing the mechanics of
    # import within the restricted environment.)
    # By providing an alternate RHooks object, we can control the file
    # system accesses made to import a module, without changing the
    # actual algorithm that controls the order in which those accesses are
    # made.  For instance, we could substitute an RHooks object that
    # passes all filesystem requests to a file server elsewhere, via some
    # RPC mechanism such as ILU.  Grail's applet loader uses this to support
    # importing applets from a URL for a directory.
    # If the verbose parameter is true, additional debugging output may be
    # sent to standard output.
    init do end
    
    # Execute code within a restricted environment.
    # Similar to the r_exec() method, but the code will be granted access
    # to restricted versions of the standard I/O streams sys.stdin,
    # sys.stderr, and sys.stdout.
    # The code parameter must either be a string containing one or more
    # lines of Python code, or a compiled code object, which will be
    # executed in the restricted environment's __main__ module.
    fun s_exec is abstract
    
    # Reload the module object, re-parsing and re-initializing it.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    # Similar to the r_reload() method, but has access to restricted
    # versions of the standard I/O streams sys.stdin, sys.stderr, and
    # sys.stdout.
    fun s_reload is abstract
    
    fun make_initial_modules is abstract
    
    fun make_builtin is abstract
    
    # Method called when open() is called in the restricted environment.
    # The arguments are identical to those of the open() function, and a
    # file object (or a class instance compatible with file objects)
    # should be returned.  RExec's default behaviour is allow opening
    # any file for reading, but forbidding any attempt to write a file.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    fun r_open(buf, mode, file: Object) is abstract
    
    # Execute code within a restricted environment.
    # The code parameter must either be a string containing one or more
    # lines of Python code, or a compiled code object, which will be
    # executed in the restricted environment's __main__ module.
    fun r_exec(code: Object) is abstract
    
    # Execute the Python code in the file in the restricted
    # environment's __main__ module.
    # Similar to the r_execfile() method, but the code will be granted
    # access to restricted versions of the standard I/O streams sys.stdin,
    # sys.stderr, and sys.stdout.
    fun s_execfile is abstract
    
    fun copy_except(exceptions, src: Object) is abstract
    
    # Unload the module.
    # Removes it from the restricted environment's sys.modules dictionary.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    # Similar to the r_unload() method, but has access to restricted
    # versions of the standard I/O streams sys.stdin, sys.stderr, and
    # sys.stdout.
    fun s_unload is abstract
    
    fun s_apply(args, kw, func: Object) is abstract
    
    fun r_exc_info is abstract
    
    # Execute the Python code in the file in the restricted
    # environment's __main__ module.
    fun r_execfile(file: Object) is abstract
    
    # Unload the module.
    # Removes it from the restricted environment's sys.modules dictionary.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    fun r_unload(m: Object) is abstract
    
    fun make_sys is abstract
    
    fun make_delegate_files is abstract
    
    # Reload the module object, re-parsing and re-initializing it.
    # This method is implicitly called by code executing in the
    # restricted environment.  Overriding this method in a subclass is
    # used to change the policies enforced by a restricted environment.
    fun r_reload(m: Object) is abstract
    
    fun reset_files is abstract
    
end

class FileWrapper
    super FileBase
    
    fun close is abstract
    
    init do end
    
end

# A module importer that supports packages.
redef class ModuleImporter
    
    redef fun find_head_package(name, parent) is abstract
    
    redef fun import_it(fqname, partname, force_load, parent) is abstract
    
    redef fun reload(path, py_module) is abstract
    
    redef fun determine_parent(globals, level) is abstract
    
    redef fun load_tail(q, tail) is abstract
    
    redef fun ensure_fromlist(fromlist, m, recursive) is abstract
    
    redef fun import_module(fromlist, globals, name, locals) is abstract
    
end

