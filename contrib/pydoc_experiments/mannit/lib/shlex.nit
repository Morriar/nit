# A lexical analyzer class for simple shell-like syntaxes.
module shlex

import builtins

redef class Sys
    
end

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
end

# A lexical analyzer class for simple shell-like syntaxes.
class Shlex
    
    # Hook called on a filename to be sourced.
    fun sourcehook(newfile: Object) is abstract
    
    fun read_token is abstract
    
    fun iter is abstract
    
    fun next is abstract
    
    init do end
    
    # Get a token from the input stream (or from stack if it's nonempty)
    fun get_token is abstract
    
    # Emit a C-compiler-like, Emacs-friendly error-message leader.
    fun error_leader(infile, lineno: Object) is abstract
    
    # Push a token onto the stack popped by the get_token method
    fun push_token(tok: Object) is abstract
    
    # Push an input source onto the lexer's input source stack.
    fun push_source(newstream, newfile: Object) is abstract
    
    # Pop the input source stack.
    fun pop_source is abstract
    
end

