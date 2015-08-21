# "Executable documentation" for the pickle module.
# Extensive comments about the pickle protocols and pickle-machine opcodes
# can be found here.  Some functions meant for external use:
# genops(pickle)
# Generate all the opcodes in a pickle, as (opcode, arg, position) triples.
# dis(pickle, out=None, memo=None, indentlevel=4)
# Print a symbolic disassembly of a pickle.
module pickletools

import builtins

redef class Sys
    
end

class ArgumentDescriptor
    
    init do end
    
end

class OpcodeInfo
    
    init do end
    
end

class StackObject
    
    init do end
    
    fun repr is abstract
    
end

private class Example
    
    init do end
    
end

