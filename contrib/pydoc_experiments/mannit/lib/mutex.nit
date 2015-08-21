# Mutual exclusion -- for use with module sched
# A mutex has two pieces of state -- a 'locked' bit and a queue.
# When the mutex is not locked, the queue is empty.
# Otherwise, the queue contains 0 or more (function, argument) pairs
# representing functions (or methods) waiting to acquire the lock.
# When the mutex is unlocked while the queue is not empty,
# the first queue entry is removed and its function(argument) pair called,
# implying it now has the lock.
# Of course, no multi-threading is implied -- hence the funny interface
# for lock, where a function is called once the lock is aquired.
module mutex

import builtins

redef class Sys
    
end

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
end

class Mutex
    
    # Test the locked bit of the mutex.
    fun test is abstract
    
    # Lock a mutex, call the function with supplied argument
    # when it is acquired.  If the mutex is already locked, place
    # function and argument in the queue.
    fun lock(function, argument: Object) is abstract
    
    # Unlock a mutex.  If the queue is not empty, call the next
    # function with its argument.
    fun unlock is abstract
    
    # Atomic test-and-set -- grab the lock if it is not set,
    # return True if it succeeded.
    fun testandset is abstract
    
    # Create a new mutex -- initially unlocked.
    init do end
    
end

