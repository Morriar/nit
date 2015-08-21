# The Tab Nanny despises ambiguous indentation.  She knows no mercy.
# tabnanny -- Detection of ambiguous indentation
# For the time being this module is intended to be called as a script.
# However it is possible to import it into an IDE and use the function
# check() described below.
# Warning: The API provided by this module is likely to change in future
# releases; such changes may not be backward compatible.
module tabnanny

import sys
import getopt
import os
import tokenize
import builtins

redef class Sys
    
end

class Whitespace
    
    fun not_equal_witness(other: Object) is abstract
    
    fun indent_level(tabsize: Object) is abstract
    
    fun less(other: Object) is abstract
    
    fun not_less_witness(other: Object) is abstract
    
    fun longest_run_of_spaces is abstract
    
    init do end
    
    fun equal(other: Object) is abstract
    
end

# Raised by tokeneater() if detecting an ambiguous indent.
# Captured and handled in check().
class NannyNag
    super Exception
    
    fun get_line is abstract
    
    fun get_lineno is abstract
    
    init do end
    
    fun get_msg is abstract
    
end

