# General floating point formatting functions.
# Functions:
# fix(x, digits_behind)
# sci(x, digits_behind)
# Each takes a number or a string and a number of digits as arguments.
# Parameters:
# x:             number to be formatted; or a string resembling a number
# digits_behind: number of digits behind the decimal point
module fpformat

import re
import builtins

redef class Sys
    
end

class NotANumber
    super ValueError
    
end

