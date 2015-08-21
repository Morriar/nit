# Python interface for the 'lsprof' profiler.
# Compatible with the 'profile' module.
module cprofile

import builtins

redef class Sys
    
end

# Profile(custom_timer=None, time_unit=None, subcalls=True, builtins=True)
# Builds a profiler object using the specified timer function.
# The default timer is a fast built-in one based on real time.
# For custom timer functions returning integers, time_unit can
# be a float specifying a scale (i.e. how long each integer unit
# is, in seconds).
class Profile
    super Profiler
    
    fun run(cmd: Object) is abstract
    
    fun create_stats is abstract
    
    fun print_stats(sort: Object) is abstract
    
    fun dump_stats(file: Object) is abstract
    
    fun runcall(func: Object) is abstract
    
    fun runctx(cmd, globals, locals: Object) is abstract
    
    fun snapshot_stats is abstract
    
end

