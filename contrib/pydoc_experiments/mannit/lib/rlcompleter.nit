# Word completion for GNU readline.
# The completer completes keywords, built-ins and globals in a selectable
# namespace (which defaults to __main__); when completing NAME.NAME..., it
# evaluates (!) the expression up to the last dot and completes its attributes.
# It's very cool to do "import sys" type "sys.", hit the completion key (twice),
# and see the list of names defined by the sys module!
# Tip: to use the tab key as the completion key, call
# readline.parse_and_bind("tab: complete")
# Notes:
# - Exceptions raised by the completer function are *ignored* (and generally cause
# the completion to fail).  This is a feature -- since readline sets the tty
# device in raw (or cbreak) mode, printing a traceback wouldn't work well
# without some complicated hoopla to save, reset and restore the tty state.
# - The evaluation of the NAME.NAME... form may cause arbitrary application
# defined code to be executed if an object with a __getattr__ hook is found.
# Since it is the responsibility of the application (or the user) to enable this
# feature, I consider this an acceptable risk.  More complicated expressions
# (e.g. function calls or indexing operations) are *not* evaluated.
# - GNU readline is also used by the built-in functions input() and
# raw_input(), and thus these also benefit/suffer from the completer
# features.  Clearly an interactive application can benefit by
# specifying its own completer function and using raw_input() for all
# its input.
# - When the original stdin is not a tty device, GNU readline is never
# used, and this module (and the readline module) are silently inactive.
module rlcompleter

import readline
import builtins

redef class Sys
    
end

class Completer
    
    # Compute matches when text is a simple name.
    # Return a list of all keywords, built-in functions and names currently
    # defined in self.namespace that match.
    fun global_matches(text: Object) is abstract
    
    private fun private_callable_postfix(word, val: Object) is abstract
    
    # Create a new completer for the command line.
    # Completer([namespace]) -> completer instance.
    # If unspecified, the default namespace where completions are performed
    # is __main__ (technically, __main__.__dict__). Namespaces should be
    # given as dictionaries.
    # Completer instances should be used as the completion mechanism of
    # readline via the set_completer() call:
    # readline.set_completer(Completer(my_namespace).complete)
    init do end
    
    # Return the next possible completion for 'text'.
    # This is called successively with state == 0, 1, 2, ... until it
    # returns None.  The completion should begin with 'text'.
    fun complete(text, state: Object) is abstract
    
    # Compute matches when text contains a dot.
    # Assuming the text is of the form NAME.NAME....[NAME], and is
    # evaluable in self.namespace, it will be evaluated and its attributes
    # (as revealed by dir()) are used as possible completions.  (For class
    # instances, class members are also considered.)
    # WARNING: this can still invoke arbitrary C code, if an object
    # with a __getattr__ hook is evaluated.
    fun attr_matches(text: Object) is abstract
    
end

