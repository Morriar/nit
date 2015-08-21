# Append module search paths for third-party packages to sys.path.
# ****************************************************************
# * This module is automatically imported during initialization. *
# ****************************************************************
# In earlier versions of Python (up to 1.5a3), scripts or modules that
# needed to use site-specific modules would place ``import site''
# somewhere near the top of their code.  Because of the automatic
# import, this is no longer necessary (but code that does it still
# works).
# This will append site-specific paths to the module search path.  On
# Unix (including Mac OSX), it starts with sys.prefix and
# sys.exec_prefix (if different) and appends
# lib/python<version>/site-packages as well as lib/site-python.
# On other platforms (such as Windows), it tries each of the
# prefixes directly, as well as with lib/site-packages appended.  The
# resulting directories, if they exist, are appended to sys.path, and
# also inspected for path configuration files.
# For Debian and derivatives, this sys.path is augmented with directories
# for packages distributed within the distribution. Local addons go
# into /usr/local/lib/python<version>/dist-packages, Debian addons
# install into /usr/{lib,share}/python<version>/dist-packages.
# /usr/lib/python<version>/site-packages is not used.
# A path configuration file is a file whose name has the form
# <package>.pth; its contents are additional directories (one per line)
# to be added to sys.path.  Non-existing directories (or
# non-directories) are never added to sys.path; no directory is added to
# sys.path more than once.  Blank lines and lines beginning with
# '#' are skipped. Lines starting with 'import' are executed.
# For example, suppose sys.prefix and sys.exec_prefix are set to
# /usr/local and there is a directory /usr/local/lib/python2.5/site-packages
# with three subdirectories, foo, bar and spam, and two path
# configuration files, foo.pth and bar.pth.  Assume foo.pth contains the
# following:
# # foo package configuration
# foo
# bar
# bletch
# and bar.pth contains:
# # bar package configuration
# bar
# Then the following directories are added to sys.path, in this order:
# /usr/local/lib/python2.5/site-packages/bar
# /usr/local/lib/python2.5/site-packages/foo
# Note that bletch is omitted because it doesn't exist; bar precedes foo
# because bar.pth comes alphabetically before foo.pth; and spam is
# omitted because it is not mentioned in either path configuration file.
# After these path manipulations, an attempt is made to import a module
# named sitecustomize, which can perform arbitrary additional
# site-specific customizations.  If this import fails with an
# ImportError exception, it is silently ignored.
module site

import sys
import traceback
import os
import builtins

redef class Sys
    
end

# interactive prompt objects for printing the license text, a list of
# contributors and the copyright notice.
private class Printer
    
    fun setup is abstract
    
    init do end
    
    fun call is abstract
    
    fun repr is abstract
    
end

# Define the builtin 'help'.
# This is a wrapper around pydoc.help (with a twist).
private class Helper
    
    fun call is abstract
    
    fun repr is abstract
    
end

