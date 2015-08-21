# Tokenization help for Python programs.
# generate_tokens(readline) is a generator that breaks a stream of
# text into Python tokens.  It accepts a readline-like method which is called
# repeatedly to get the next line of input (or "" for EOF).  It generates
# 5-tuples with these members:
# the token type (see token.py)
# the token (a string)
# the starting (row, column) indices of the token (a 2-tuple of ints)
# the ending (row, column) indices of the token (a 2-tuple of ints)
# the original line (string)
# It is designed to match the working of the Python tokenizer exactly, except
# that it produces COMMENT tokens for comments and gives type OP for all
# operators
# Older entry points
# tokenize_loop(readline, tokeneater)
# tokenize(readline, tokeneater=printtoken)
# are the same, except instead of generating tokens, tokeneater is a callback
# function to which the 5 fields described above are passed as 5 arguments,
# each time a new token is found.
module tokenize

import builtins

redef class Sys
    
end

class TokenError
    super Exception
    
end

class Untokenizer
    
    fun compat(token, iterable: Object) is abstract
    
    init do end
    
    fun untokenize(iterable: Object) is abstract
    
    fun add_whitespace(start: Object) is abstract
    
end

class StopTokenizing
    super Exception
    
end

# chain(*iterables) --> chain object
# Return a chain object whose .next() method returns elements from the
# first iterable until it is exhausted, then elements from the next
# iterable, until all of the iterables are exhausted.
class Chain
    
end

