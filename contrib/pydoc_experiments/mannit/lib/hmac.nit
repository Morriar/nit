# HMAC (Keyed-Hashing for Message Authentication) Python module.
# Implements the HMAC algorithm as described by RFC 2104.
module hmac

import warnings
import builtins

redef class Sys
    
end

# RFC 2104 HMAC class.  Also complies with RFC 4231.
# This supports the API for Cryptographic Hash Functions (PEP 247).
class HMAC
    
    # Return a hash object for the current state.
    # To be used only internally with digest() and hexdigest().
    private fun private_current is abstract
    
    # Update this hashing object with the string msg.
    fun update(msg: Object) is abstract
    
    # Like digest(), but returns a string of hexadecimal digits instead.
    fun hexdigest is abstract
    
    # Create a new HMAC object.
    # key:       key for the keyed hash object.
    # msg:       Initial input for the hash, if provided.
    # digestmod: A module supporting PEP 247.  *OR*
    # A hashlib constructor returning a new hash object.
    # Defaults to hashlib.md5.
    init do end
    
    # Return a separate copy of this hashing object.
    # An update to this copy won't affect the original object.
    fun copy is abstract
    
    # Return the hash value of this hashing object.
    # This returns a string containing 8-bit data.  The object is
    # not altered in any way by this function; you can continue
    # updating the object after calling this function.
    fun digest is abstract
    
end

