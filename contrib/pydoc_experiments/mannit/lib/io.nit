# The io module provides the Python interfaces to stream handling. The
# builtin open function is defined in this module.
# At the top of the I/O hierarchy is the abstract base class IOBase. It
# defines the basic interface to a stream. Note, however, that there is no
# separation between reading and writing to streams; implementations are
# allowed to raise an IOError if they do not support a given operation.
# Extending IOBase is RawIOBase which deals simply with the reading and
# writing of raw bytes to a stream. FileIO subclasses RawIOBase to provide
# an interface to OS files.
# BufferedIOBase deals with buffering on a raw byte stream (RawIOBase). Its
# subclasses, BufferedWriter, BufferedReader, and BufferedRWPair buffer
# streams that are readable, writable, and both respectively.
# BufferedRandom provides a buffered interface to random access
# streams. BytesIO is a simple stream of in-memory bytes.
# Another IOBase subclass, TextIOBase, deals with the encoding and decoding
# of streams into text. TextIOWrapper, which extends it, is a buffered text
# interface to a buffered raw stream (`BufferedIOBase`). Finally, StringIO
# is a in-memory stream for text.
# Argument names are not part of the specification, and only the arguments
# of open() are intended to be used as keyword arguments.
# data:
# DEFAULT_BUFFER_SIZE
# An int containing the default buffer size used by the module's buffered
# I/O classes. open() uses the file's blksize (as obtained by os.stat) if
# possible.
module io

import builtins

class RawIOBase
    super IOBase
    
end

class UnsupportedOperation
    super IOError
    super ValueError
    
end

# Character and line based layer over a BufferedIOBase object, buffer.
# encoding gives the name of the encoding that the stream will be
# decoded or encoded with. It defaults to locale.getpreferredencoding.
# errors determines the strictness of encoding and decoding (see the
# codecs.register) and defaults to "strict".
# newline controls how line endings are handled. It can be None, '',
# '\n', '\r', and '\r\n'.  It works as follows:
# * On input, if newline is None, universal newlines mode is
# enabled. Lines in the input can end in '\n', '\r', or '\r\n', and
# these are translated into '\n' before being returned to the
# caller. If it is '', universal newline mode is enabled, but line
# endings are returned to the caller untranslated. If it has any of
# the other legal values, input lines are only terminated by the given
# string, and the line ending is returned to the caller untranslated.
# * On output, if newline is None, any '\n' characters written are
# translated to the system default line separator, os.linesep. If
# newline is '', no translation takes place. If newline is any of the
# other legal values, any '\n' characters written are translated to
# the given string.
# If line_buffering is True, a call to flush is implied when a call to
# write contains a newline character.
class TextIOWrapper
    super TextIOBase
    
end

class IOBase
    
end

# A buffered reader and writer object together.
# A buffered reader object and buffered writer object put together to
# form a sequential IO object that can read and write. This is typically
# used with a socket or two-way pipe.
# reader and writer are RawIOBase objects that are readable and
# writeable respectively. If the buffer_size is omitted it defaults to
# DEFAULT_BUFFER_SIZE.
class BufferedRWPair
    super BufferedIOBase
    
end

# Text I/O implementation using an in-memory buffer.
# The initial_value argument sets the value of object.  The newline
# argument is like the one of TextIOWrapper's constructor.
class StringIO
    super TextIOBase
    
end

# A buffered interface to random access streams.
# The constructor creates a reader and writer for a seekable stream,
# raw, given in the first argument. If the buffer_size is omitted it
# defaults to DEFAULT_BUFFER_SIZE. max_buffer_size isn't used anymore.
class BufferedRandom
    super BufferedIOBase
    
end

class TextIOBase
    super IOBase
    
end

# Exception raised when I/O would block on a non-blocking I/O stream
class BlockingIOError
    super IOError
    
end

# Codec used when reading a file in universal newlines mode.  It wraps
# another incremental decoder, translating \r\n and \r into \n.  It also
# records the types of newlines encountered.  When used with
# translate=False, it ensures that the newline sequence is returned in
# one piece. When used with decoder=None, it expects unicode strings as
# decode input and translates newlines without first invoking an external
# decoder.
class IncrementalNewlineDecoder
    
end

redef class Sys
    
end

# Create a new buffered reader using the given readable raw IO object.
class BufferedReader
    super BufferedIOBase
    
end

# file(name: str[, mode: str]) -> file IO object
# Open a file.  The mode can be 'r', 'w' or 'a' for reading (default),
# writing or appending.  The file will be created if it doesn't exist
# when opened for writing or appending; it will be truncated when
# opened for writing.  Add a '+' to the mode to allow simultaneous
# reading and writing.
class FileIO
    super RawIOBase
    
end

# A buffer for a writeable sequential RawIO object.
# The constructor creates a BufferedWriter for the given writeable raw
# stream. If the buffer_size is not given, it defaults to
# DEFAULT_BUFFER_SIZE. max_buffer_size isn't used anymore.
class BufferedWriter
    super BufferedIOBase
    
end

class BufferedIOBase
    super IOBase
    
end

# BytesIO([buffer]) -> object
# Create a buffered I/O implementation using an in-memory bytes
# buffer, ready for reading and writing.
class BytesIO
    super BufferedIOBase
    
end

