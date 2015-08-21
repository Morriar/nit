# Implements (a subset of) Sun XDR -- eXternal Data Representation.
# See: RFC 1014
module xdrlib

import struct
import builtins

redef class Sys
    
end

# Pack various data representations into a buffer.
class Packer
    
    fun reset is abstract
    
    fun pack_bool(x: Object) is abstract
    
    fun pack_int(x: Object) is abstract
    
    fun pack_string(s: Object) is abstract
    
    fun pack_uint(x: Object) is abstract
    
    init do end
    
    fun pack_uhyper(x: Object) is abstract
    
    fun pack_float(x: Object) is abstract
    
    fun pack_array(pack_item, list: Object) is abstract
    
    fun pack_list(pack_item, list: Object) is abstract
    
    fun pack_double(x: Object) is abstract
    
    fun pack_farray(pack_item, list, n: Object) is abstract
    
    fun pack_fstring(s, n: Object) is abstract
    
    fun get_buffer is abstract
    
end

# Unpacks various data representations from the given buffer.
class Unpacker
    
    fun unpack_fstring(n: Object) is abstract
    
    fun reset(data: Object) is abstract
    
    fun unpack_uint is abstract
    
    fun unpack_array(unpack_item: Object) is abstract
    
    fun get_position is abstract
    
    fun unpack_double is abstract
    
    fun unpack_farray(n, unpack_item: Object) is abstract
    
    fun unpack_uhyper is abstract
    
    fun unpack_list(unpack_item: Object) is abstract
    
    fun unpack_float is abstract
    
    init do end
    
    fun done is abstract
    
    fun unpack_bool is abstract
    
    fun unpack_hyper is abstract
    
    fun set_position(position: Object) is abstract
    
    fun get_buffer is abstract
    
    fun unpack_int is abstract
    
    fun unpack_string is abstract
    
end

class ConversionError
    super Error
    
end

# Exception class for this module. Use:
# except xdrlib.Error, var:
# # var has the Error instance for the exception
# Public ivars:
# msg -- contains the message
redef class Error
    
    init do end
    
    fun repr is abstract
    
    fun str is abstract
    
end

