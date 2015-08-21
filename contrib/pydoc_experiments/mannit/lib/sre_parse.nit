# Internal support module for sre
module sre_parse

import builtins

redef class Sys
    
end

class Pattern
    
    fun opengroup(name: Object) is abstract
    
    init do end
    
    fun checkgroup(gid: Object) is abstract
    
    fun closegroup(gid: Object) is abstract
    
end

class SubPattern
    
    fun insert(index, code: Object) is abstract
    
    fun dump(level: Object) is abstract
    
    init do end
    
    fun len is abstract
    
    fun repr is abstract
    
    fun getwidth is abstract
    
    fun setitem(index, code: Object) is abstract
    
    fun delitem(index: Object) is abstract
    
    fun getitem(index: Object) is abstract
    
    fun append(code: Object) is abstract
    
end

class Tokenizer
    
    fun get is abstract
    
    fun next is abstract
    
    init do end
    
    fun seek(index: Object) is abstract
    
    fun tell is abstract
    
    fun match(char, skip: Object) is abstract
    
end

redef class Error
    
end

