# Utilities for with-statement contexts.  See PEP 343.
module contextlib

import sys
import builtins

redef class Sys
    
end

# Context to automatically close something at the end of a block.
# Code like this:
# with closing(<module>.open(<arguments>)) as f:
# <block>
# is equivalent to this:
# f = <module>.open(<arguments>)
# try:
# <block>
# finally:
# f.close()
class Closing
    
    init do end
    
    fun exit is abstract
    
    fun enter is abstract
    
end

# Helper for @contextmanager decorator.
class GeneratorContextManager
    
    init do end
    
    fun exit(traceback, py_type, value: Object) is abstract
    
    fun enter is abstract
    
end

