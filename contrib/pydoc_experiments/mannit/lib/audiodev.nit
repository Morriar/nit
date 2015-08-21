# Classes for manipulating audio devices (currently only for Sun and SGI)
module audiodev

import builtins

redef class Sys
    
end

class Play_Audio_sgi
    
    fun setsampwidth(width: Object) is abstract
    
    fun setnchannels(nchannels: Object) is abstract
    
    fun setoutrate(rate: Object) is abstract
    
    fun writeframes(data: Object) is abstract
    
    fun stop is abstract
    
    fun getfilled is abstract
    
    init do end
    
    fun del is abstract
    
    fun ulaw2lin(data: Object) is abstract
    
    fun initclass is abstract
    
    fun getfillable is abstract
    
    fun wait is abstract
    
end

class Play_Audio_sun
    
    fun setsampwidth(width: Object) is abstract
    
    fun setnchannels(nchannels: Object) is abstract
    
    fun setoutrate(rate: Object) is abstract
    
    fun writeframes(data: Object) is abstract
    
    fun stop is abstract
    
    fun getfilled is abstract
    
    init do end
    
    fun del is abstract
    
    fun wait is abstract
    
end

redef class Error
    
end

