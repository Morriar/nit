# Utilities needed to emulate Python's interactive interpreter.
module code

import sys
import traceback
import builtins

redef class Sys
    
end

# Base class for InteractiveConsole.
# This class deals with parsing and interpreter state (the user's
# namespace); it doesn't deal with input buffering or prompting or
# input file naming (the filename is always passed in explicitly).
class InteractiveInterpreter
    
    # Execute a code object.
    # When an exception occurs, self.showtraceback() is called to
    # display a traceback.  All exceptions are caught except
    # SystemExit, which is reraised.
    # A note about KeyboardInterrupt: this exception may occur
    # elsewhere in this code, and may not always be caught.  The
    # caller should be prepared to deal with it.
    fun runcode(code: Object) is abstract
    
    # Display the exception that just occurred.
    # We remove the first stack item because it is our own code.
    # The output is written by self.write(), below.
    fun showtraceback is abstract
    
    # Display the syntax error that just occurred.
    # This doesn't display a stack trace because there isn't one.
    # If a filename is given, it is stuffed in the exception instead
    # of what was there before (because Python's parser always uses
    # "<string>" when reading from a string).
    # The output is written by self.write(), below.
    fun showsyntaxerror(filename: Object) is abstract
    
    # Write a string.
    # The base implementation writes to sys.stderr; a subclass may
    # replace this with a different implementation.
    fun write(data: Object) is abstract
    
    # Compile and run some source in the interpreter.
    # Arguments are as for compile_command().
    # One several things can happen:
    # 1) The input is incorrect; compile_command() raised an
    # exception (SyntaxError or OverflowError).  A syntax traceback
    # will be printed by calling the showsyntaxerror() method.
    # 2) The input is incomplete, and more input is required;
    # compile_command() returned None.  Nothing happens.
    # 3) The input is complete; compile_command() returned a code
    # object.  The code is executed by calling self.runcode() (which
    # also handles run-time exceptions, except for SystemExit).
    # The return value is True in case 2, False in the other cases (unless
    # an exception is raised).  The return value can be used to
    # decide whether to use sys.ps1 or sys.ps2 to prompt the next
    # line.
    fun runsource(source, symbol, filename: Object) is abstract
    
    # Constructor.
    # The optional 'locals' argument specifies the dictionary in
    # which code will be executed; it defaults to a newly created
    # dictionary with key "__name__" set to "__console__" and key
    # "__doc__" set to None.
    init do end
    
end

# Closely emulate the behavior of the interactive Python interpreter.
# This class builds on InteractiveInterpreter and adds prompting
# using the familiar sys.ps1 and sys.ps2, and input buffering.
class InteractiveConsole
    super InteractiveInterpreter
    
    # Push a line to the interpreter.
    # The line should not have a trailing newline; it may have
    # internal newlines.  The line is appended to a buffer and the
    # interpreter's runsource() method is called with the
    # concatenated contents of the buffer as source.  If this
    # indicates that the command was executed or invalid, the buffer
    # is reset; otherwise, the command is incomplete, and the buffer
    # is left as it was after the line was appended.  The return
    # value is 1 if more input is required, 0 if the line was dealt
    # with in some way (this is the same as runsource()).
    fun push(line: Object) is abstract
    
    # Closely emulate the interactive Python console.
    # The optional banner argument specify the banner to print
    # before the first interaction; by default it prints a banner
    # similar to the one printed by the real Python interpreter,
    # followed by the current class name in parentheses (so as not
    # to confuse this with the real interpreter -- since it's so
    # close!).
    fun interact(banner: Object) is abstract
    
    # Constructor.
    # The optional locals argument will be passed to the
    # InteractiveInterpreter base class.
    # The optional filename argument should specify the (file)name
    # of the input stream; it will show up in tracebacks.
    init do end
    
    # Reset the input buffer.
    fun resetbuffer is abstract
    
    # Write a prompt and read a line.
    # The returned line does not include the trailing newline.
    # When the user enters the EOF key sequence, EOFError is raised.
    # The base implementation uses the built-in function
    # raw_input(); a subclass may replace this with a different
    # implementation.
    fun raw_input(prompt: Object) is abstract
    
end

# Instances of this class have __call__ methods identical in
# signature to compile_command; the difference is that if the
# instance compiles program text containing a __future__ statement,
# the instance 'remembers' and compiles all subsequent program texts
# with the statement in force.
class CommandCompiler
    
    init do end
    
    # Compile a command and determine whether it is incomplete.
    # Arguments:
    # source -- the source string; may contain \n characters
    # filename -- optional filename from which source was read;
    # default "<input>"
    # symbol -- optional grammar start symbol; "single" (default) or
    # "eval"
    # Return value / exceptions raised:
    # - Return a code object if the command is complete and valid
    # - Return None if the command is incomplete
    # - Raise SyntaxError, ValueError or OverflowError if the command is a
    # syntax error (OverflowError and ValueError can be produced by
    # malformed literals).
    fun call(source, symbol, filename: Object) is abstract
    
end

