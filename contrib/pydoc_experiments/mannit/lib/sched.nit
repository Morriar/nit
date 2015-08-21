# A generally useful event scheduler class.
# Each instance of this class manages its own queue.
# No multi-threading is implied; you are supposed to hack that
# yourself, or use a single instance per application.
# Each instance is parametrized with two functions, one that is
# supposed to return the current time, one that is supposed to
# implement a delay.  You can implement real-time scheduling by
# substituting time and sleep from built-in module time, or you can
# implement simulated time by writing your own functions.  This can
# also be used to integrate scheduling with STDWIN events; the delay
# function is allowed to modify the queue.  Time can be expressed as
# integers or floating point numbers, as long as it is consistent.
# Events are specified by tuples (time, priority, action, argument).
# As in UNIX, lower priority numbers mean higher priority; in this
# way the queue can be maintained as a priority queue.  Execution of the
# event means calling the action function, passing it the argument
# sequence in "argument" (remember that in Python, multiple function
# arguments are be packed in a sequence).
# The action function may be an instance method so it
# has another way to reference private data (besides global variables).
module sched

import heapq
import builtins

redef class Sys
    
end

# Event(time, priority, action, argument)
class Event
    super Tuple
    
    # Return a new Event object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Make a new Event object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

class Scheduler
    
    # Execute events until the queue is empty.
    # When there is a positive delay until the first event, the
    # delay function is called and the event is left in the queue;
    # otherwise, the event is removed from the queue and executed
    # (its action function is called, passing it the argument).  If
    # the delay function returns prematurely, it is simply
    # restarted.
    # It is legal for both the delay function and the action
    # function to modify the queue or to raise an exception;
    # exceptions are not caught but the scheduler's state remains
    # well-defined so run() may be called again.
    # A questionable hack is added to allow other threads to run:
    # just after an event is executed, a delay of 0 is executed, to
    # avoid monopolizing the CPU when other threads are also
    # runnable.
    fun run is abstract
    
    # Enter a new event in the queue at an absolute time.
    # Returns an ID for the event which can be used to remove it,
    # if necessary.
    fun enterabs(priority, action, argument, time: Object) is abstract
    
    # Initialize a new instance, passing the time and delay
    # functions
    init do end
    
    # A variant that specifies the time as a relative time.
    # This is actually the more commonly used interface.
    fun enter(delay, priority, action, argument: Object) is abstract
    
    # Remove an event from the queue.
    # This must be presented the ID as returned by enter().
    # If the event is not in the queue, this raises ValueError.
    fun cancel(event: Object) is abstract
    
    # Check whether the queue is empty.
    fun empty is abstract
    
end

