# Drop-in replacement for the thread module.
# Meant to be used as a brain-dead substitute so that threaded code does
# not need to be rewritten for when the thread module is not present.
# Suggested usage is::
# try:
# import thread
# except ImportError:
# import dummy_thread as thread
module dummy_thread

import traceback
import builtins

redef class Sys
    
end

# Class implementing dummy implementation of thread.LockType.
# Compatibility is maintained by maintaining self.locked_status
# which is a boolean that stores the state of the lock.  Pickling of
# the lock, though, should not be done since if the thread module is
# then used with an unpickled ``lock()`` from here problems could
# occur from this class not having atomic methods.
class LockType
    
    # Release the dummy lock.
    fun release is abstract
    
    fun locked is abstract
    
    init do end
    
    # Dummy implementation of acquire().
    # For blocking calls, self.locked_status is automatically set to
    # True and returned appropriately based on value of
    # ``waitflag``.  If it is non-blocking, then the value is
    # actually checked and not set if it is already acquired.  This
    # is all done so that threading.Condition's assert statements
    # aren't triggered and throw a little fit.
    fun acquire(waitflag: Object) is abstract
    
    fun exit(typ, tb, val: Object) is abstract
    
end

# Dummy implementation of thread.error.
redef class Error
    
    init do end
    
end

