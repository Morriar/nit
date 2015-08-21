# More comprehensive traceback formatting for Python scripts.
# To enable this module, do:
# import cgitb; cgitb.enable()
# at the top of your script.  The optional arguments to enable() are:
# display     - if true, tracebacks are displayed in the web browser
# logdir      - if set, tracebacks are written to files in this directory
# context     - number of lines of source code to show for each stack frame
# format      - 'text' or 'html' controls the output format
# By default, tracebacks are displayed but not saved, the context is 5 lines
# and the output format is 'html' (for backwards compatibility with the
# original use of this module)
# Alternatively, if you have caught an exception and want cgitb to display it
# for you, call cgitb.handler().  The optional argument to handler() is a
# 3-item tuple (etype, evalue, etb) just like the value of sys.exc_info().
# The default handler displays output as HTML.
module cgitb

import sys
import traceback
import keyword
import tempfile
import inspect
import tokenize
import pydoc
import linecache
import time
import os
import types
import builtins

redef class Sys
    
end

# A hook to replace sys.excepthook that shows tracebacks in HTML.
class Hook
    
    fun handle(info: Object) is abstract
    
    init do end
    
    fun call(etype, etb, evalue: Object) is abstract
    
end

