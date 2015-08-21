# An object-oriented interface to .netrc files.
module netrc

import stat
import pwd
import os
import shlex
import builtins

redef class Sys
    
end

# Exception raised on syntax errors in the .netrc file.
class NetrcParseError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

class Netrc
    
    # Return a (user, account, password) tuple for given host.
    fun authenticators(host: Object) is abstract
    
    init do end
    
    private fun private_parse(fp, file, default_netrc: Object) is abstract
    
    # Dump the class data in the format of a .netrc file.
    fun repr is abstract
    
end

