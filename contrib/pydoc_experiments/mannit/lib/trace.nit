# program/module to trace Python program or function execution
# Sample use, command line:
# trace.py -c -f counts --ignore-dir '$prefix' spam.py eggs
# trace.py -t --ignore-dir '$prefix' spam.py eggs
# trace.py --trackcalls spam.py eggs
# Sample use, programmatically
# import sys
# # create a Trace object, telling it what to ignore, and whether to
# # do tracing or line-counting or both.
# tracer = trace.Trace(ignoredirs=[sys.prefix, sys.exec_prefix,], trace=0,
# count=1)
# # run the new command using the given tracer
# tracer.run('main()')
# # make a report, placing output in /tmp
# r = tracer.results()
# r.write_results(show_missing=True, coverdir="/tmp")
module trace

import tokenize
import cpickle
import re
import inspect
import sys
import linecache
import token
import gc
import time
import threading
import os
import dis
import builtins

redef class Sys
    
end

class Ignore
    
    init do end
    
    fun names(modulename, filename: Object) is abstract
    
end

class Trace
    
    fun localtrace_trace(frame, why, arg: Object) is abstract
    
    fun run(cmd: Object) is abstract
    
    fun file_module_function_of(frame: Object) is abstract
    
    fun localtrace_trace_and_count(frame, why, arg: Object) is abstract
    
    fun results is abstract
    
    # Handler for call events.
    # If the code block being entered is to be ignored, returns `None',
    # else returns self.localtrace.
    fun globaltrace_lt(frame, why, arg: Object) is abstract
    
    # @param count true iff it should count number of times each
    # line is executed
    # @param trace true iff it should print out each line that is
    # being counted
    # @param countfuncs true iff it should just output a list of
    # (filename, modulename, funcname,) for functions
    # that were called at least once;  This overrides
    # `count' and `trace'
    # @param ignoremods a list of the names of modules to ignore
    # @param ignoredirs a list of the names of directories to ignore
    # all of the (recursive) contents of
    # @param infile file from which to read stored counts to be
    # added into the results
    # @param outfile file in which to write the results
    # @param timing true iff timing information be displayed
    init do end
    
    # Handler for call events.
    # Adds information about who called who to the self._callers dict.
    fun globaltrace_trackcallers(frame, why, arg: Object) is abstract
    
    fun localtrace_count(frame, why, arg: Object) is abstract
    
    fun runfunc(func: Object) is abstract
    
    # Handler for call events.
    # Adds (filename, modulename, funcname) to the self._calledfuncs dict.
    fun globaltrace_countfuncs(frame, why, arg: Object) is abstract
    
    fun runctx(cmd, globals, locals: Object) is abstract
    
end

class CoverageResults
    
    # Merge in the data from another CoverageResults
    fun update(other: Object) is abstract
    
    init do end
    
    # Return a coverage results file in path.
    fun write_results_file(lnotab, path, lines_hit, lines: Object) is abstract
    
    # @param coverdir
    fun write_results(show_missing, coverdir, summary: Object) is abstract
    
end

