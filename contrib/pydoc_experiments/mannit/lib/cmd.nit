# A generic class to build line-oriented command interpreters.
# Interpreters constructed with this class obey the following conventions:
# 1. End of file on input is processed as the command 'EOF'.
# 2. A command is parsed out of each line by collecting the prefix composed
# of characters in the identchars member.
# 3. A command `foo' is dispatched to a method 'do_foo()'; the do_ method
# is passed a single argument consisting of the remainder of the line.
# 4. Typing an empty line repeats the last command.  (Actually, it calls the
# method `emptyline', which may be overridden in a subclass.)
# 5. There is a predefined `help' method.  Given an argument `topic', it
# calls the command `help_topic'.  With no arguments, it lists all topics
# with defined help_ functions, broken into up to three topics; documented
# commands, miscellaneous help topics, and undocumented commands.
# 6. The command '?' is a synonym for `help'.  The command '!' is a synonym
# for `shell', if a do_shell method exists.
# 7. If completion is enabled, completing commands will be done automatically,
# and completing of commands args is done by calling complete_foo() with
# arguments text, line, begidx, endidx.  text is string we are matching
# against, all returned matches must begin with it.  line is the current
# input line (lstripped), begidx and endidx are the beginning and end
# indexes of the text being matched, which could be used to provide
# different completion depending upon which position the argument is in.
# The `default' method may be overridden to intercept commands for which there
# is no do_ method.
# The `completedefault' method may be overridden to intercept completions for
# commands that have no complete_ method.
# The data member `self.ruler' sets the character used to draw separator lines
# in the help messages.  If empty, no ruler line is drawn.  It defaults to "=".
# If the value of `self.intro' is nonempty when the cmdloop method is called,
# it is printed out on interpreter startup.  This value may be overridden
# via an optional argument to the cmdloop() method.
# The data members `self.doc_header', `self.misc_header', and
# `self.undoc_header' set the headers used for the help function's
# listings of documented functions, miscellaneous topics, and undocumented
# functions respectively.
# These interpreters use raw_input; thus, if the readline module is loaded,
# they automatically support Emacs-like command history and editing features.
module cmd

import string
import builtins

redef class Sys
    
end

# A simple framework for writing line-oriented command interpreters.
# These are often useful for test harnesses, administrative tools, and
# prototypes that will later be wrapped in a more sophisticated interface.
# A Cmd instance or subclass instance is a line-oriented interpreter
# framework.  There is no good reason to instantiate Cmd itself; rather,
# it's useful as a superclass of an interpreter class you define yourself
# in order to inherit Cmd's methods and encapsulate action methods.
class Cmd
    
    # List available commands with "help" or detailed help with "help cmd".
    fun do_help(arg: Object) is abstract
    
    # Hook method executed once when the cmdloop() method is about to
    # return.
    fun postloop is abstract
    
    # Display a list of strings as a compact set of columns.
    # Each column is only as wide as necessary.
    # Columns are separated by two spaces (one was not legible enough).
    fun columnize(displaywidth, list: Object) is abstract
    
    # Return the next possible completion for 'text'.
    # If a command has not been entered, then complete against command list.
    # Otherwise try to call complete_<command> to get list of completions.
    fun complete(text, state: Object) is abstract
    
    # Called on an input line when the command prefix is not recognized.
    # If this method is not overridden, it prints an error message and
    # returns.
    fun default(line: Object) is abstract
    
    fun get_names is abstract
    
    # Interpret the argument as though it had been typed in response
    # to the prompt.
    # This may be overridden, but should not normally need to be;
    # see the precmd() and postcmd() methods for useful execution hooks.
    # The return value is a flag indicating whether interpretation of
    # commands by the interpreter should stop.
    fun onecmd(line: Object) is abstract
    
    # Called when an empty line is entered in response to the prompt.
    # If this method is not overridden, it repeats the last nonempty
    # command entered.
    fun emptyline is abstract
    
    # Hook method executed just after a command dispatch is finished.
    fun postcmd(line, stop: Object) is abstract
    
    # Instantiate a line-oriented interpreter framework.
    # The optional argument 'completekey' is the readline name of a
    # completion key; it defaults to the Tab key. If completekey is
    # not None and the readline module is available, command completion
    # is done automatically. The optional arguments stdin and stdout
    # specify alternate input and output file objects; if not specified,
    # sys.stdin and sys.stdout are used.
    init do end
    
    fun complete_help is abstract
    
    # Repeatedly issue a prompt, accept input, parse an initial prefix
    # off the received input, and dispatch to action methods, passing them
    # the remainder of the line as argument.
    fun cmdloop(intro: Object) is abstract
    
    # Parse the line into a command name and a string containing
    # the arguments.  Returns a tuple containing (command, args, line).
    # 'command' and 'args' may be None if the line couldn't be parsed.
    fun parseline(line: Object) is abstract
    
    fun print_topics(header, maxcol, cmdlen, cmds: Object) is abstract
    
    # Hook method executed once when the cmdloop() method is called.
    fun preloop is abstract
    
    # Hook method executed just before the command line is
    # interpreted, but after the input prompt is generated and issued.
    fun precmd(line: Object) is abstract
    
    fun completenames(text: Object) is abstract
    
    # Method called to complete an input line when no command-specific
    # complete_*() method is available.
    # By default, it returns an empty list.
    fun completedefault is abstract
    
end

