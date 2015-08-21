# Basic infrastructure for asynchronous socket service clients and servers.
# There are only two ways to have a program on a single processor do "more
# than one thing at a time".  Multi-threaded programming is the simplest and
# most popular way to do it, but there is another very different technique,
# that lets you have nearly all the advantages of multi-threading, without
# actually using multiple threads. it's really only practical if your program
# is largely I/O bound. If your program is CPU bound, then pre-emptive
# scheduled threads are probably what you really need. Network servers are
# rarely CPU-bound, however.
# If your operating system supports the select() system call in its I/O
# library (and nearly all do), then you can use it to juggle multiple
# communication channels at once; doing other work while your I/O is taking
# place in the "background."  Although this strategy can seem strange and
# complex, especially at first, it is in many ways easier to understand and
# control than multi-threaded programming. The module documented here solves
# many of the difficult problems for you, making the task of building
# sophisticated high-performance network servers and clients a snap.
module asyncore

import builtins

class File_wrapper
    
    fun fileno is abstract
    
    fun getsockopt(optname, buflen, level: Object) is abstract
    
    fun send is abstract
    
    init do end
    
    fun close is abstract
    
    fun recv is abstract
    
end

class Dispatcher_with_send
    super Dispatcher
    
    redef fun writable is abstract
    
    init do end
    
    fun initiate_send is abstract
    
    redef fun send(data) is abstract
    
    redef fun handle_write is abstract
    
end

class ExitNow
    super Exception
    
end

redef class Sys
    
end

class File_dispatcher
    super Dispatcher
    
    fun set_file(fd: Object) is abstract
    
    init do end
    
end

class Dispatcher
    
    fun set_reuse_addr is abstract
    
    fun accept is abstract
    
    fun writable is abstract
    
    fun connect(address: Object) is abstract
    
    fun close is abstract
    
    fun handle_error is abstract
    
    fun log(message: Object) is abstract
    
    fun set_socket(map, sock: Object) is abstract
    
    fun handle_accept is abstract
    
    fun readable is abstract
    
    init do end
    
    fun send(data: Object) is abstract
    
    fun getattr(attr: Object) is abstract
    
    fun handle_expt_event is abstract
    
    fun log_info(message, py_type: Object) is abstract
    
    fun create_socket(py_type, family: Object) is abstract
    
    fun listen(num: Object) is abstract
    
    fun repr is abstract
    
    fun handle_expt is abstract
    
    fun handle_read is abstract
    
    fun handle_read_event is abstract
    
    fun recv(buffer_size: Object) is abstract
    
    fun handle_write is abstract
    
    fun bind(addr: Object) is abstract
    
    fun handle_connect is abstract
    
    fun add_channel(map: Object) is abstract
    
    fun handle_close is abstract
    
    fun del_channel(map: Object) is abstract
    
    fun handle_write_event is abstract
    
    fun handle_connect_event is abstract
    
end

