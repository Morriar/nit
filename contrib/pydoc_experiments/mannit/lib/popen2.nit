# Spawn a command with pipes to its stdin, stdout, and optionally stderr.
# The normal os.popen(cmd, mode) call spawns a shell command and provides a
# file interface to just the input or output of the process depending on
# whether mode is 'r' or 'w'.  This module provides the functions popen2(cmd)
# and popen3(cmd) which return two or three pipes to the spawned command.
module popen2

import sys
import os
import warnings
import builtins

redef class Sys
    
end

class Popen4
    super Popen3
    
    init do end
    
end

# Class representing a child process.  Normally, instances are created
# internally by the functions popen2() and popen3().
class Popen3
    
    private fun private_run_child(cmd: Object) is abstract
    
    # The parameter 'cmd' is the shell command to execute in a
    # sub-process.  On UNIX, 'cmd' may be a sequence, in which case arguments
    # will be passed directly to the program without shell intervention (as
    # with os.spawnv()).  If 'cmd' is a string it will be passed to the shell
    # (as with os.system()).   The 'capturestderr' flag, if true, specifies
    # that the object should capture standard error output of the child
    # process.  The default is false.  If the 'bufsize' parameter is
    # specified, it specifies the size of the I/O buffers to/from the child
    # process.
    init do end
    
    # Return the exit status of the child process if it has finished,
    # or -1 if it hasn't finished yet.
    fun poll(deadstate: Object) is abstract
    
    fun del is abstract
    
    # Wait for and return the exit status of the child process.
    fun wait is abstract
    
end

