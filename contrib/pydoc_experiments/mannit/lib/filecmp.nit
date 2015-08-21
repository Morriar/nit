# Utilities for comparing files and directories.
# Classes:
# dircmp
# Functions:
# cmp(f1, f2, shallow=1) -> int
# cmpfiles(a, b, common) -> ([], [], [])
module filecmp

import stat
import os
import builtins

# ifilter(function or None, sequence) --> ifilter object
# Return those items of sequence for which function(item) is true.
# If function is None, return the items that are true.
class Ifilter
    
end

# A class that manages the comparison of 2 directories.
# dircmp(a,b,ignore=None,hide=None)
# A and B are directories.
# IGNORE is a list of names to ignore,
# defaults to ['RCS', 'CVS', 'tags'].
# HIDE is a list of names to hide,
# defaults to [os.curdir, os.pardir].
# High level usage:
# x = dircmp(dir1, dir2)
# x.report() -> prints a report on the differences between dir1 and dir2
# or
# x.report_partial_closure() -> prints report on differences between dir1
# and dir2, and reports on common immediate subdirectories.
# x.report_full_closure() -> like report_partial_closure,
# but fully recursive.
# Attributes:
# left_list, right_list: The files in dir1 and dir2,
# filtered by hide and ignore.
# common: a list of names in both dir1 and dir2.
# left_only, right_only: names only in dir1, dir2.
# common_dirs: subdirectories in both dir1 and dir2.
# common_files: files in both dir1 and dir2.
# common_funny: names in both dir1 and dir2 where the type differs between
# dir1 and dir2, or the name is not stat-able.
# same_files: list of identical files.
# diff_files: list of filenames which differ.
# funny_files: list of files which could not be compared.
# subdirs: a dictionary of dircmp objects, keyed by names in common_dirs.
class Dircmp
    
    fun phase1 is abstract
    
    fun phase0 is abstract
    
    fun phase3 is abstract
    
    fun phase2 is abstract
    
    fun phase4 is abstract
    
    init do end
    
    fun phase4_closure is abstract
    
    fun getattr(attr: Object) is abstract
    
    fun report_full_closure is abstract
    
    fun report_partial_closure is abstract
    
    fun report is abstract
    
end

# izip(iter1 [,iter2 [...]]) --> izip object
# Return a izip object whose .next() method returns a tuple where
# the i-th element comes from the i-th iterable argument.  The .next()
# method continues until the shortest iterable in the argument sequence
# is exhausted and then it raises StopIteration.  Works like the zip()
# function but consumes less memory by returning an iterator instead of
# a list.
class Izip
    
end

redef class Sys
    
end

# ifilterfalse(function or None, sequence) --> ifilterfalse object
# Return those items of sequence for which function(item) is false.
# If function is None, return the items that are false.
class Ifilterfalse
    
end

# imap(func, *iterables) --> imap object
# Make an iterator that computes the function using arguments from
# each of the iterables.  Like map() except that it returns
# an iterator instead of a list and that it stops when the shortest
# iterable is exhausted instead of filling in None for shorter
# iterables.
class Imap
    
end

