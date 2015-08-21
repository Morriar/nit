# Thread module emulating a subset of Java's threading model.
module threading

import builtins

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
end

# A bounded semaphore checks to make sure its current value doesn't exceed
# its initial value. If it does, ValueError is raised. In most situations
# semaphores are used to guard resources with limited capacity.
private class BoundedSemaphore
    super Semaphore
    
    # Release a semaphore, incrementing the internal counter by one.
    # When the counter is zero on entry and another thread is waiting for it
    # to become larger than zero again, wake up that thread.
    # If the number of releases exceeds the number of acquires,
    # raise a ValueError.
    redef fun release is abstract
    
    init do end
    
end

private class Verbose
    
    init do end
    
    private fun private_note(format: Object) is abstract
    
end

# A class that represents a thread of control.
# This class can be safely subclassed in a limited fashion.
class Thread
    super Verbose
    
    fun bootstrap_inner is abstract
    
    # Return whether the thread is alive.
    # This method returns True just before the run() method starts until just
    # after the run() method terminates. The module function enumerate()
    # returns a list of all alive threads.
    fun isalive is abstract
    
    fun setname(name: Object) is abstract
    
    # Start the thread's activity.
    # It must be called at most once per thread object. It arranges for the
    # object's run() method to be invoked in a separate thread of control.
    # This method will raise a RuntimeError if called more than once on the
    # same thread object.
    fun start is abstract
    
    private fun private_set_ident is abstract
    
    fun stop is abstract
    
    fun getname is abstract
    
    fun bootstrap is abstract
    
    # Method representing the thread's activity.
    # You may override this method in a subclass. The standard run() method
    # invokes the callable object passed to the object's constructor as the
    # target argument, if any, with sequential and keyword arguments taken
    # from the args and kwargs arguments, respectively.
    fun run is abstract
    
    fun setdaemon(daemonic: Object) is abstract
    
    fun repr is abstract
    
    private fun private_set_daemon is abstract
    
    # This constructor should always be called with keyword arguments. Arguments are:
    # *group* should be None; reserved for future extension when a ThreadGroup
    # class is implemented.
    # *target* is the callable object to be invoked by the run()
    # method. Defaults to None, meaning nothing is called.
    # *name* is the thread name. By default, a unique name is constructed of
    # the form "Thread-N" where N is a small decimal number.
    # *args* is the argument tuple for the target invocation. Defaults to ().
    # *kwargs* is a dictionary of keyword arguments for the target
    # invocation. Defaults to {}.
    # If a subclass overrides the constructor, it must make sure to invoke
    # the base class constructor (Thread.__init__()) before doing anything
    # else to the thread.
    init do end
    
    fun isdaemon is abstract
    
    private fun private_reset_internal_locks is abstract
    
    # Wait until the thread terminates.
    # This blocks the calling thread until the thread whose join() method is
    # called terminates -- either normally or through an unhandled exception
    # or until the optional timeout occurs.
    # When the timeout argument is present and not None, it should be a
    # floating point number specifying a timeout for the operation in seconds
    # (or fractions thereof). As join() always returns None, you must call
    # isAlive() after join() to decide whether a timeout happened -- if the
    # thread is still alive, the join() call timed out.
    # When the timeout argument is not present or None, the operation will
    # block until the thread terminates.
    # A thread can be join()ed many times.
    # join() raises a RuntimeError if an attempt is made to join the current
    # thread as that would cause a deadlock. It is also an error to join() a
    # thread before it has been started and attempts to do so raises the same
    # exception.
    fun join(timeout: Object) is abstract
    
    # Remove current thread from the dict of currently running threads.
    fun delete is abstract
    
end

private class DummyThread
    super Thread
    
    redef fun private_set_daemon is abstract
    
    init do end
    
    redef fun join(timeout) is abstract
    
end

private class MainThread
    super Thread
    
    redef fun private_set_daemon is abstract
    
    init do end
    
    private fun private_exitfunc is abstract
    
end

# Semaphores manage a counter representing the number of release() calls
# minus the number of acquire() calls, plus an initial value. The acquire()
# method blocks if necessary until it can return without making the counter
# negative. If not given, value defaults to 1.
private class Semaphore
    super Verbose
    
    # Release a semaphore, incrementing the internal counter by one.
    # When the counter is zero on entry and another thread is waiting for it
    # to become larger than zero again, wake up that thread.
    fun release is abstract
    
    init do end
    
    # Acquire a semaphore, decrementing the internal counter by one.
    # When invoked without arguments: if the internal counter is larger than
    # zero on entry, decrement it by one and return immediately. If it is zero
    # on entry, block, waiting until some other thread has called release() to
    # make it larger than zero. This is done with proper interlocking so that
    # if multiple acquire() calls are blocked, release() will wake exactly one
    # of them up. The implementation may pick one at random, so the order in
    # which blocked threads are awakened should not be relied on. There is no
    # return value in this case.
    # When invoked with blocking set to true, do the same thing as when called
    # without arguments, and return true.
    # When invoked with blocking set to false, do not block. If a call without
    # an argument would block, return false immediately; otherwise, do the
    # same thing as when called without arguments, and return true.
    fun acquire(blocking: Object) is abstract
    
    fun exit(tb, t, v: Object) is abstract
    
end

# A reentrant lock must be released by the thread that acquired it. Once a
# thread has acquired a reentrant lock, the same thread may acquire it
# again without blocking; the thread must release it once for each time it
# has acquired it.
private class RLock
    super Verbose
    
    # Acquire a lock, blocking or non-blocking.
    # When invoked without arguments: if this thread already owns the lock,
    # increment the recursion level by one, and return immediately. Otherwise,
    # if another thread owns the lock, block until the lock is unlocked. Once
    # the lock is unlocked (not owned by any thread), then grab ownership, set
    # the recursion level to one, and return. If more than one thread is
    # blocked waiting until the lock is unlocked, only one at a time will be
    # able to grab ownership of the lock. There is no return value in this
    # case.
    # When invoked with the blocking argument set to true, do the same thing
    # as when called without arguments, and return true.
    # When invoked with the blocking argument set to false, do not block. If a
    # call without an argument would block, return false immediately;
    # otherwise, do the same thing as when called without arguments, and
    # return true.
    fun acquire(blocking: Object) is abstract
    
    private fun private_acquire_restore(count_owner: Object) is abstract
    
    fun repr is abstract
    
    init do end
    
    fun exit(tb, t, v: Object) is abstract
    
    # Release a lock, decrementing the recursion level.
    # If after the decrement it is zero, reset the lock to unlocked (not owned
    # by any thread), and if any other threads are blocked waiting for the
    # lock to become unlocked, allow exactly one of them to proceed. If after
    # the decrement the recursion level is still nonzero, the lock remains
    # locked and owned by the calling thread.
    # Only call this method when the calling thread owns the lock. A
    # RuntimeError is raised if this method is called when the lock is
    # unlocked.
    # There is no return value.
    fun release is abstract
    
    private fun private_release_save is abstract
    
    private fun private_is_owned is abstract
    
end

redef class Sys
    
end

# Call a function after a specified number of seconds:
# t = Timer(30.0, f, args=[], kwargs={})
# t.start()
# t.cancel()     # stop the timer's action if it's still waiting
private class Timer
    super Thread
    
    # Stop the timer if it hasn't finished yet
    fun cancel is abstract
    
    init do end
    
    redef fun run is abstract
    
end

redef class Error
    
end

# Thread-local data
redef class Local
    
end

# A factory function that returns a new event object. An event manages a
# flag that can be set to true with the set() method and reset to false
# with the clear() method. The wait() method blocks until the flag is true.
private class Event
    super Verbose
    
    # Set the internal flag to true.
    # All threads waiting for the flag to become true are awakened. Threads
    # that call wait() once the flag is true will not block at all.
    fun set is abstract
    
    # Reset the internal flag to false.
    # Subsequently, threads calling wait() will block until set() is called to
    # set the internal flag to true again.
    fun clear is abstract
    
    # Return true if and only if the internal flag is true.
    fun py_isset is abstract
    
    init do end
    
    private fun private_reset_internal_locks is abstract
    
    # Block until the internal flag is true.
    # If the internal flag is true on entry, return immediately. Otherwise,
    # block until another thread calls set() to set the flag to true, or until
    # the optional timeout occurs.
    # When the timeout argument is present and not None, it should be a
    # floating point number specifying a timeout for the operation in seconds
    # (or fractions thereof).
    # This method returns the internal flag on exit, so it will always return
    # True except if a timeout is given and the operation times out.
    fun wait(timeout: Object) is abstract
    
end

# Condition variables allow one or more threads to wait until they are
# notified by another thread.
private class Condition
    super Verbose
    
    # Wake up all threads waiting on this condition.
    # If the calling thread has not acquired the lock when this method
    # is called, a RuntimeError is raised.
    fun notifyall is abstract
    
    private fun private_acquire_restore(x: Object) is abstract
    
    fun repr is abstract
    
    init do end
    
    fun exit is abstract
    
    # Wake up one or more threads waiting on this condition, if any.
    # If the calling thread has not acquired the lock when this method is
    # called, a RuntimeError is raised.
    # This method wakes up at most n of the threads waiting for the condition
    # variable; it is a no-op if no threads are waiting.
    fun notify(n: Object) is abstract
    
    fun enter is abstract
    
    private fun private_release_save is abstract
    
    private fun private_is_owned is abstract
    
    # Wait until notified or until a timeout occurs.
    # If the calling thread has not acquired the lock when this method is
    # called, a RuntimeError is raised.
    # This method releases the underlying lock, and then blocks until it is
    # awakened by a notify() or notifyAll() call for the same condition
    # variable in another thread, or until the optional timeout occurs. Once
    # awakened or timed out, it re-acquires the lock and returns.
    # When the timeout argument is present and not None, it should be a
    # floating point number specifying a timeout for the operation in seconds
    # (or fractions thereof).
    # When the underlying lock is an RLock, it is not released using its
    # release() method, since this may not actually unlock the lock when it
    # was acquired multiple times recursively. Instead, an internal interface
    # of the RLock class is used, which really unlocks it even when it has
    # been recursively acquired several times. Another internal interface is
    # then used to restore the recursion level when the lock is reacquired.
    fun wait(timeout: Object) is abstract
    
end

