# Interface to the compiler's internal symbol tables
module symtable

import weakref
import builtins

class Function
    super SymbolTable
    
    fun get_parameters is abstract
    
    fun get_globals is abstract
    
    fun get_frees is abstract
    
    fun idents_matching(test_func: Object) is abstract
    
    fun get_locals is abstract
    
end

class SymbolTableFactory
    
    fun py_new(table, filename: Object) is abstract
    
    init do end
    
    fun call(table, filename: Object) is abstract
    
end

class Symbol
    
    fun is_local is abstract
    
    fun is_referenced is abstract
    
    fun is_assigned is abstract
    
    fun is_imported is abstract
    
    fun is_declared_global is abstract
    
    fun is_parameter is abstract
    
    fun repr is abstract
    
    fun get_name is abstract
    
    # Return a list of namespaces bound to this name
    fun get_namespaces is abstract
    
    init do end
    
    # Returns true if name binding introduces new namespace.
    # If the name is used as the target of a function or class
    # statement, this will be true.
    # Note that a single name can be bound to multiple objects.  If
    # is_namespace() is true, the name may also be bound to other
    # objects, like an int or list, that does not introduce a new
    # namespace.
    fun is_namespace is abstract
    
    fun is_free is abstract
    
    # Returns the single namespace bound to this name.
    # Raises ValueError if the name is bound to multiple namespaces.
    fun get_namespace is abstract
    
    fun is_global is abstract
    
end

redef class Sys
    
end

class SymbolTable
    
    fun get_lineno is abstract
    
    init do end
    
    fun get_symbols is abstract
    
    fun is_optimized is abstract
    
    fun is_nested is abstract
    
    # Return true if the scope uses import *
    fun has_import_star is abstract
    
    fun has_children is abstract
    
    # Return true if the scope uses exec
    fun has_exec is abstract
    
    fun repr is abstract
    
    fun get_children is abstract
    
    fun check_children(name: Object) is abstract
    
    fun get_id is abstract
    
    fun get_type is abstract
    
    fun lookup(name: Object) is abstract
    
    fun get_name is abstract
    
    fun get_identifiers is abstract
    
end

redef class Class
    
    fun get_methods is abstract
    
end

