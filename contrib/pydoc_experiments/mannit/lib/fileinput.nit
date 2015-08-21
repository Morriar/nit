# Helper class to quickly write a loop over all standard input files.
# Typical use is:
# import fileinput
# for line in fileinput.input():
# process(line)
# This iterates over the lines of all files listed in sys.argv[1:],
# defaulting to sys.stdin if the list is empty.  If a filename is '-' it
# is also replaced by sys.stdin.  To specify an alternative list of
# filenames, pass it as the argument to input().  A single file name is
# also allowed.
# Functions filename(), lineno() return the filename and cumulative line
# number of the line that has just been read; filelineno() returns its
# line number in the current file; isfirstline() returns true iff the
# line just read is the first line of its file; isstdin() returns true
# iff the line was read from sys.stdin.  Function nextfile() closes the
# current file so that the next iteration will read the first line from
# the next file (if any); lines not read from the file will not count
# towards the cumulative line count; the filename is not changed until
# after the first line of the next file has been read.  Function close()
# closes the sequence.
# Before any lines have been read, filename() returns None and both line
# numbers are zero; nextfile() has no effect.  After all lines have been
# read, filename() and the line number functions return the values
# pertaining to the last line read; nextfile() has no effect.
# All files are opened in text mode by default, you can override this by
# setting the mode parameter to input() or FileInput.__init__().
# If an I/O error occurs during opening or reading a file, the IOError
# exception is raised.
# If sys.stdin is used more than once, the second and further use will
# return no lines, except perhaps for interactive use, or if it has been
# explicitly reset (e.g. using sys.stdin.seek(0)).
# Empty files are opened and immediately closed; the only time their
# presence in the list of filenames is noticeable at all is when the
# last file opened is empty.
# It is possible that the last line of a file doesn't end in a newline
# character; otherwise lines are returned including the trailing
# newline.
# Class FileInput is the implementation; its methods filename(),
# lineno(), fileline(), isfirstline(), isstdin(), nextfile() and close()
# correspond to the functions in the module.  In addition it has a
# readline() method which returns the next input line, and a
# __getitem__() method which implements the sequence behavior.  The
# sequence must be accessed in strictly sequential order; sequence
# access and readline() cannot be mixed.
# Optional in-place filtering: if the keyword argument inplace=1 is
# passed to input() or to the FileInput constructor, the file is moved
# to a backup file and standard output is directed to the input file.
# This makes it possible to write a filter that rewrites its input file
# in place.  If the keyword argument backup=".<some extension>" is also
# given, it specifies the extension for the backup file, and the backup
# file remains around; by default, the extension is ".bak" and it is
# deleted when the output file is closed.  In-place filtering is
# disabled when standard input is read.  XXX The current implementation
# does not work for MS-DOS 8+3 filesystems.
# Performance: this module is unfortunately one of the slower ways of
# processing large numbers of input lines.  Nevertheless, a significant
# speed-up has been obtained by using readlines(bufsize) instead of
# readline().  A new keyword argument, bufsize=N, is present on the
# input() function and the FileInput() class to override the default
# buffer size.
# XXX Possible additions:
# - optional getopt argument processing
# - isatty()
# - read(), read(size), even readlines()
module fileinput

import sys
import os
import builtins

redef class Sys
    
end

# FileInput([files[, inplace[, backup[, bufsize[, mode[, openhook]]]]]])
# Class FileInput is the implementation of the module; its methods
# filename(), lineno(), fileline(), isfirstline(), isstdin(), fileno(),
# nextfile() and close() correspond to the functions of the same name
# in the module.
# In addition it has a readline() method which returns the next
# input line, and a __getitem__() method which implements the
# sequence behavior. The sequence must be accessed in strictly
# sequential order; random access and readline() cannot be mixed.
class FileInput
    
    fun fileno is abstract
    
    fun nextfile is abstract
    
    fun isstdin is abstract
    
    fun filename is abstract
    
    fun iter is abstract
    
    fun isfirstline is abstract
    
    init do end
    
    fun filelineno is abstract
    
    fun del is abstract
    
    fun lineno is abstract
    
    fun getitem(i: Object) is abstract
    
    fun close is abstract
    
    fun readline is abstract
    
    fun next is abstract
    
end

