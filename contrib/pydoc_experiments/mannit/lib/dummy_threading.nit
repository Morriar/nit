# Faux ``threading`` version using ``dummy_thread`` instead of ``thread``.
# The module ``_dummy_threading`` is added to ``sys.modules`` in order
# to not have ``threading`` considered imported.  Had ``threading`` been
# directly imported it would have made all subsequent imports succeed
# regardless of whether ``thread`` was available which is not desired.
module dummy_threading

import threading
import builtins

redef class Sys
    
end

redef class Local
    
    fun getattribute(name: Object) is abstract
    
    fun delattr(name: Object) is abstract
    
    fun del is abstract
    
    fun setattr(name, value: Object) is abstract
    
end

# A class that represents a thread of control.
# This class can be safely subclassed in a limited fashion.
redef class Thread
    
    redef fun bootstrap_inner is abstract
    
    # Return whether the thread is alive.
    # This method returns True just before the run() method starts until just
    # after the run() method terminates. The module function enumerate()
    # returns a list of all alive threads.
    redef fun isalive is abstract
    
    redef fun setname(name) is abstract
    
    # Start the thread's activity.
    # It must be called at most once per thread object. It arranges for the
    # object's run() method to be invoked in a separate thread of control.
    # This method will raise a RuntimeError if called more than once on the
    # same thread object.
    redef fun start is abstract
    
    redef fun private_set_ident is abstract
    
    redef fun stop is abstract
    
    redef fun getname is abstract
    
    redef fun bootstrap is abstract
    
    # Method representing the thread's activity.
    # You may override this method in a subclass. The standard run() method
    # invokes the callable object passed to the object's constructor as the
    # target argument, if any, with sequential and keyword arguments taken
    # from the args and kwargs arguments, respectively.
    redef fun run is abstract
    
    redef fun setdaemon(daemonic) is abstract
    
    redef fun repr is abstract
    
    redef fun private_set_daemon is abstract
    
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
    
    redef fun isdaemon is abstract
    
    redef fun private_reset_internal_locks is abstract
    
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
    redef fun join(timeout) is abstract
    
    # Remove current thread from the dict of currently running threads.
    redef fun delete is abstract
    
end

