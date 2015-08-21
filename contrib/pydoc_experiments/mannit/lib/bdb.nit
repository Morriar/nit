# Debugger basics
module bdb

import fnmatch
import sys
import os
import types
import builtins

redef class Sys
    
end

class Tdb
    super Bdb
    
    redef fun user_exception(exc_info, frame) is abstract
    
    redef fun user_line(frame) is abstract
    
    redef fun user_call(frame, argument_list) is abstract
    
    redef fun user_return(frame, return_value) is abstract
    
end

# Breakpoint class
# Implements temporary breakpoints, ignore counts, disabling and
# (re)-enabling, and conditionals.
# Breakpoints are indexed by number through bpbynumber and by
# the file,line tuple using bplist.  The former points to a
# single instance of class Breakpoint.  The latter points to a
# list of such instances since there may be more than one
# breakpoint per line.
class Breakpoint
    
    fun bpprint(out: Object) is abstract
    
    init do end
    
    fun enable is abstract
    
    fun disable is abstract
    
    fun deleteme is abstract
    
end

# Exception to give up completely
class BdbQuit
    super Exception
    
end

# Generic Python debugger base class.
# This class takes care of details of the trace facility;
# a derived class should implement user interaction.
# The standard debugger class (pdb.Pdb) is an example.
class Bdb
    
    fun get_file_breaks(filename: Object) is abstract
    
    fun clear_bpbynumber(arg: Object) is abstract
    
    fun clear_all_breaks is abstract
    
    fun dispatch_return(frame, arg: Object) is abstract
    
    fun user_exception(exc_info, frame: Object) is abstract
    
    # Start debugging from `frame`.
    # If frame is not specified, debugging starts from caller's frame.
    fun set_trace(frame: Object) is abstract
    
    fun runcall(func: Object) is abstract
    
    fun get_break(lineno, filename: Object) is abstract
    
    fun set_continue is abstract
    
    fun set_quit is abstract
    
    # Stop on the next line in or below the given frame.
    fun set_next(frame: Object) is abstract
    
    # Stop when the line with the line no greater than the current one is
    # reached or when returning from current frame
    fun set_until(frame: Object) is abstract
    
    private fun private_prune_breaks(lineno, filename: Object) is abstract
    
    fun dispatch_call(frame, arg: Object) is abstract
    
    fun dispatch_exception(frame, arg: Object) is abstract
    
    fun break_anywhere(frame: Object) is abstract
    
    init do end
    
    fun run(cmd, globals, locals: Object) is abstract
    
    fun runctx(cmd, globals, locals: Object) is abstract
    
    fun get_all_breaks is abstract
    
    fun format_stack_entry(frame_lineno, lprefix: Object) is abstract
    
    fun stop_here(frame: Object) is abstract
    
    fun clear_break(lineno, filename: Object) is abstract
    
    fun set_break(cond, filename, temporary, lineno, funcname: Object) is abstract
    
    fun dispatch_line(frame: Object) is abstract
    
    fun do_clear(arg: Object) is abstract
    
    fun get_breaks(lineno, filename: Object) is abstract
    
    private fun private_set_stopinfo(stoplineno, stopframe, returnframe: Object) is abstract
    
    fun break_here(frame: Object) is abstract
    
    fun reset is abstract
    
    # Stop after one line of code.
    fun set_step is abstract
    
    fun is_skipped_module(module_name: Object) is abstract
    
    # Stop when returning from the given frame.
    fun set_return(frame: Object) is abstract
    
    fun runeval(expr, globals, locals: Object) is abstract
    
    fun clear_all_file_breaks(filename: Object) is abstract
    
    fun canonic(filename: Object) is abstract
    
    fun get_stack(t, f: Object) is abstract
    
    # This method is called when a return trap is set here.
    fun user_return(frame, return_value: Object) is abstract
    
    fun trace_dispatch(frame, event, arg: Object) is abstract
    
    # This method is called when we stop or break at this line.
    fun user_line(frame: Object) is abstract
    
    # This method is called when there is the remote possibility
    # that we ever need to stop in this function.
    fun user_call(frame, argument_list: Object) is abstract
    
end

