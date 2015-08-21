# A multi-producer, multi-consumer queue.
module queue

import threading
import heapq
import builtins

# Variant of Queue that retrieves most recently added entries first.
class LifoQueue
    super Queue
    
    redef fun private_get is abstract
    
    redef fun private_put(item) is abstract
    
    redef fun private_init(maxsize) is abstract
    
    redef fun private_qsize(len) is abstract
    
end

# Variant of Queue that retrieves open entries in priority order (lowest first).
# Entries are typically tuples of the form:  (priority number, data).
class PriorityQueue
    super Queue
    
    redef fun private_get is abstract
    
    redef fun private_put(item) is abstract
    
    redef fun private_init(maxsize) is abstract
    
    redef fun private_qsize(len) is abstract
    
end

# Exception raised by Queue.put(block=0)/put_nowait().
class Full
    super Exception
    
end

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
redef class Deque
    
end

# Create a queue object with a given maximum size.
# If maxsize is <= 0, the queue size is infinite.
class Queue
    
    # Return the approximate size of the queue (not reliable!).
    fun qsize is abstract
    
    # Blocks until all items in the Queue have been gotten and processed.
    # The count of unfinished tasks goes up whenever an item is added to the
    # queue. The count goes down whenever a consumer thread calls task_done()
    # to indicate the item was retrieved and all work on it is complete.
    # When the count of unfinished tasks drops to zero, join() unblocks.
    fun join is abstract
    
    # Put an item into the queue without blocking.
    # Only enqueue the item if a free slot is immediately available.
    # Otherwise raise the Full exception.
    fun put_nowait(item: Object) is abstract
    
    private fun private_init(maxsize: Object) is abstract
    
    # Remove and return an item from the queue.
    # If optional args 'block' is true and 'timeout' is None (the default),
    # block if necessary until an item is available. If 'timeout' is
    # a non-negative number, it blocks at most 'timeout' seconds and raises
    # the Empty exception if no item was available within that time.
    # Otherwise ('block' is false), return an item if one is immediately
    # available, else raise the Empty exception ('timeout' is ignored
    # in that case).
    fun get(block, timeout: Object) is abstract
    
    # Remove and return an item from the queue without blocking.
    # Only get an item if one is immediately available. Otherwise
    # raise the Empty exception.
    fun get_nowait is abstract
    
    init do end
    
    private fun private_get is abstract
    
    # Return True if the queue is full, False otherwise (not reliable!).
    fun full is abstract
    
    # Indicate that a formerly enqueued task is complete.
    # Used by Queue consumer threads.  For each get() used to fetch a task,
    # a subsequent call to task_done() tells the queue that the processing
    # on the task is complete.
    # If a join() is currently blocking, it will resume when all items
    # have been processed (meaning that a task_done() call was received
    # for every item that had been put() into the queue).
    # Raises a ValueError if called more times than there were items
    # placed in the queue.
    fun task_done is abstract
    
    private fun private_qsize(len: Object) is abstract
    
    # Put an item into the queue.
    # If optional args 'block' is true and 'timeout' is None (the default),
    # block if necessary until a free slot is available. If 'timeout' is
    # a non-negative number, it blocks at most 'timeout' seconds and raises
    # the Full exception if no free slot was available within that time.
    # Otherwise ('block' is false), put an item on the queue if a free slot
    # is immediately available, else raise the Full exception ('timeout'
    # is ignored in that case).
    fun put(item, block, timeout: Object) is abstract
    
    private fun private_put(item: Object) is abstract
    
    # Return True if the queue is empty, False otherwise (not reliable!).
    fun empty is abstract
    
end

redef class Sys
    
end

# Exception raised by Queue.get(block=0)/get_nowait().
class Empty
    super Exception
    
end

