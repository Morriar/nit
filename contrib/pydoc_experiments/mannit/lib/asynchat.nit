# A class supporting chat-style (command/response) protocols.
# This class adds support for 'chat' style protocols - where one side
# sends a 'command', and the other sends a response (examples would be
# the common internet protocols - smtp, nntp, ftp, etc..).
# The handle_read() method looks at the input stream for the current
# 'terminator' (usually '\r\n' for single-line responses, '\r\n.\r\n'
# for multi-line output), calling self.found_terminator() on its
# receipt.
# for example:
# Say you build an async nntp client using this class.  At the start
# of the connection, you'll have self.terminator set to '\r\n', in
# order to process the single-line greeting.  Just before issuing a
# 'LIST' command you'll set it to '\r\n.\r\n'.  The output of the LIST
# command will be accumulated (using your own 'collect_incoming_data'
# method) up to the terminator, and then control will be returned to
# you - by calling your self.found_terminator() method.
module asynchat

import asyncore
import py_socket
import builtins

# deque([iterable[, maxlen]]) --> deque object
# Build an ordered collection with optimized access from its endpoints.
class Deque
    
end

# A context manager that copies and restores the warnings filter upon
# exiting the context.
# The 'record' argument specifies whether warnings should be captured by a
# custom implementation of warnings.showwarning() and be appended to a list
# returned by the context manager. Otherwise None is returned by the context
# manager. The objects appended to the list are arguments whose attributes
# mirror the arguments to showwarning().
# The 'module' argument is to specify an alternative module to the module
# named 'warnings' and imported under that name. This argument is only useful
# when testing the warnings module itself.
class Catch_warnings
    
    # Specify whether to record warnings and if an alternative module
    # should be used other than sys.modules['warnings'].
    # For compatibility with Python 3.0, please consider all arguments to be
    # keyword-only.
    init do end
    
    fun exit is abstract
    
    fun repr is abstract
    
    fun enter is abstract
    
end

class Simple_producer
    
    init do end
    
    fun more is abstract
    
end

class Fifo
    
    init do end
    
    fun pop is abstract
    
    fun is_empty is abstract
    
    fun len is abstract
    
    fun push(data: Object) is abstract
    
    fun first is abstract
    
end

redef class Sys
    
end

# This is an abstract class.  You must derive from this class, and add
# the two methods collect_incoming_data() and found_terminator()
class Async_chat
    super Dispatcher
    
    fun get_terminator is abstract
    
    init do end
    
    redef fun handle_write is abstract
    
    # Set the input delimiter.  Can be a fixed string of any length, an integer, or None
    fun set_terminator(term: Object) is abstract
    
    private fun private_get_data is abstract
    
    fun discard_buffers is abstract
    
    fun initiate_send is abstract
    
    # predicate for inclusion in the readable for select()
    redef fun readable is abstract
    
    fun collect_incoming_data(data: Object) is abstract
    
    redef fun handle_read is abstract
    
    # predicate for inclusion in the writable for select()
    redef fun writable is abstract
    
    fun push_with_producer(producer: Object) is abstract
    
    fun found_terminator is abstract
    
    # automatically close this channel once the outgoing queue is empty
    fun close_when_done is abstract
    
    redef fun handle_close is abstract
    
    fun push(data: Object) is abstract
    
    private fun private_collect_incoming_data(data: Object) is abstract
    
end

