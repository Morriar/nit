# Python implementation of the io module.
module private__pyio

import abc
import warnings
import errno
import io
import codecs
import os
import builtins

# Base class for raw binary I/O.
redef class RawIOBase
    
    # Read and return up to n bytes.
    # Returns an empty bytes object on EOF, or None if the object is
    # set not to block and has no data to read.
    fun read(n: Object) is abstract
    
    # Write the given buffer to the IO stream.
    # Returns the number of bytes written, which may be less than len(b).
    fun write(b: Object) is abstract
    
    # Read until EOF, using multiple read() call.
    fun readall is abstract
    
    # Read up to len(b) bytes into b.
    # Returns number of bytes read (0 for EOF), or None if the object
    # is set not to block and has no data to read.
    fun readinto(b: Object) is abstract
    
end

redef class UnsupportedOperation
    
end

# type(object) -> the object's type
# type(name, bases, dict) -> a new type
redef class Type
    
end

# Character and line based layer over a BufferedIOBase object, buffer.
# encoding gives the name of the encoding that the stream will be
# decoded or encoded with. It defaults to locale.getpreferredencoding.
# errors determines the strictness of encoding and decoding (see the
# codecs.register) and defaults to "strict".
# newline can be None, '', '\n', '\r', or '\r\n'.  It controls the
# handling of line endings. If it is None, universal newlines is
# enabled.  With this enabled, on input, the lines endings '\n', '\r',
# or '\r\n' are translated to '\n' before being returned to the
# caller. Conversely, on output, '\n' is translated to the system
# default line separator, os.linesep. If newline is any other of its
# legal values, that newline becomes the newline when the file is read
# and it is returned untranslated. On output, '\n' is converted to the
# newline.
# If line_buffering is True, a call to flush is implied when a call to
# write contains a newline character.
redef class TextIOWrapper
    
    redef fun writable is abstract
    
    redef fun flush is abstract
    
    redef fun close is abstract
    
    redef fun seek(whence, pos) is abstract
    
    private fun private_get_decoder is abstract
    
    private fun private_get_encoder is abstract
    
    redef fun readable is abstract
    
    redef fun next is abstract
    
    redef fun write(s) is abstract
    
    init do end
    
    # Set the _decoded_chars buffer.
    private fun private_set_decoded_chars(chars: Object) is abstract
    
    redef fun tell is abstract
    
    redef fun isatty is abstract
    
    redef fun truncate(pos) is abstract
    
    private fun private_pack_cookie(position, bytes_to_feed, chars_to_skip, dec_flags, need_eof: Object) is abstract
    
    redef fun read(n) is abstract
    
    fun repr is abstract
    
    redef fun seekable is abstract
    
    redef fun readline(limit) is abstract
    
    redef fun detach is abstract
    
    # Rewind the _decoded_chars buffer.
    private fun private_rewind_decoded_chars(n: Object) is abstract
    
    redef fun fileno is abstract
    
    # Advance into the _decoded_chars buffer.
    private fun private_get_decoded_chars(n: Object) is abstract
    
    # Read and decode the next chunk of data from the BufferedReader.
    private fun private_read_chunk is abstract
    
    private fun private_unpack_cookie(bigint: Object) is abstract
    
end

redef class IOBase
    
    # Return a list of lines from the stream.
    # hint can be specified to control the number of lines read: no more
    # lines will be read if the total size (in bytes/characters) of all
    # lines so far exceeds hint.
    fun readlines(hint: Object) is abstract
    
    # Internal: raise an ValueError if file is closed
    private fun private_checkclosed(msg: Object) is abstract
    
    # Return whether object was opened for writing.
    # If False, write() and truncate() will raise IOError.
    fun writable is abstract
    
    # Flush write buffers, if applicable.
    # This is not implemented for read-only and non-blocking streams.
    fun flush is abstract
    
    # Flush and close the IO object.
    # This method has no effect if the file is already closed.
    fun close is abstract
    
    # Change stream position.
    # Change the stream position to byte offset pos. Argument pos is
    # interpreted relative to the position indicated by whence.  Values
    # for whence are:
    # * 0 -- start of stream (the default); offset should be zero or positive
    # * 1 -- current stream position; offset may be negative
    # * 2 -- end of stream; offset is usually negative
    # Return the new absolute position.
    fun seek(whence, pos: Object) is abstract
    
    # Return whether object was opened for reading.
    # If False, read() will raise IOError.
    fun readable is abstract
    
    fun next is abstract
    
    # Context management protocol.  Calls close()
    fun exit is abstract
    
    # Return current stream position.
    fun tell is abstract
    
    # Return whether this is an 'interactive' stream.
    # Return False if it can't be determined.
    fun isatty is abstract
    
    # Truncate file to size bytes.
    # Size defaults to the current IO position as reported by tell().  Return
    # the new size.
    fun truncate(pos: Object) is abstract
    
    # Returns underlying file descriptor if one exists.
    # An IOError is raised if the IO object does not use a file descriptor.
    fun fileno is abstract
    
    # Internal: raise an exception for unsupported operations.
    private fun private_unsupported(name: Object) is abstract
    
    # Internal: raise an IOError if file is not readable
    private fun private_checkreadable(msg: Object) is abstract
    
    # Return whether object supports random access.
    # If False, seek(), tell() and truncate() will raise IOError.
    # This method may need to do a test seek().
    fun seekable is abstract
    
    # Read and return a line from the stream.
    # If limit is specified, at most limit bytes will be read.
    # The line terminator is always b'\n' for binary files; for text
    # files, the newlines argument to open can be used to select the line
    # terminator(s) recognized.
    fun readline(limit: Object) is abstract
    
    # Internal: raise an IOError if file is not writable
    private fun private_checkwritable(msg: Object) is abstract
    
    fun writelines(lines: Object) is abstract
    
    # Internal: raise an IOError if file is not seekable
    private fun private_checkseekable(msg: Object) is abstract
    
    fun iter is abstract
    
    # Destructor.  Calls close().
    fun del is abstract
    
    # Context management protocol.  Returns self.
    fun enter is abstract
    
end

# A buffered reader and writer object together.
# A buffered reader object and buffered writer object put together to
# form a sequential IO object that can read and write. This is typically
# used with a socket or two-way pipe.
# reader and writer are RawIOBase objects that are readable and
# writeable respectively. If the buffer_size is omitted it defaults to
# DEFAULT_BUFFER_SIZE.
redef class BufferedRWPair
    
    fun peek(n: Object) is abstract
    
    redef fun isatty is abstract
    
    redef fun read(n) is abstract
    
    redef fun readinto(b) is abstract
    
    redef fun readable is abstract
    
    redef fun write(b) is abstract
    
    # Constructor.
    # The arguments are two RawIO instances.
    init do end
    
    redef fun read1(n) is abstract
    
    redef fun writable is abstract
    
    redef fun flush is abstract
    
    redef fun close is abstract
    
end

# Text I/O implementation using an in-memory buffer.
# The initial_value argument sets the value of object.  The newline
# argument is like the one of TextIOWrapper's constructor.
redef class StringIO
    
    init do end
    
    redef fun detach is abstract
    
    redef fun repr is abstract
    
    fun getvalue is abstract
    
end

# Helper for builtins.open.__doc__
class DocDescriptor
    
    fun get(obj, typ: Object) is abstract
    
end

# A buffered interface to random access streams.
# The constructor creates a reader and writer for a seekable stream,
# raw, given in the first argument. If the buffer_size is omitted it
# defaults to DEFAULT_BUFFER_SIZE.
redef class BufferedRandom
    
    redef fun peek(n) is abstract
    
    redef fun truncate(pos) is abstract
    
    redef fun read(n) is abstract
    
    fun readinto(b: Object) is abstract
    
    redef fun write(b) is abstract
    
    init do end
    
    redef fun read1(n) is abstract
    
    redef fun seek(whence, pos) is abstract
    
    redef fun tell is abstract
    
end

# Base class for text I/O.
# This class provides a character and line based interface to stream
# I/O. There is no readinto method because Python's character strings
# are immutable. There is no public constructor.
redef class TextIOBase
    
    # Read at most n characters from stream.
    # Read from underlying buffer until we have n characters or we hit EOF.
    # If n is negative or omitted, read until EOF.
    fun read(n: Object) is abstract
    
    # Write string s to stream.
    fun write(s: Object) is abstract
    
    # Read until newline or EOF.
    # Returns an empty string if EOF is hit immediately.
    redef fun readline(limit) is abstract
    
    # Separate the underlying buffer from the TextIOBase and return it.
    # After the underlying buffer has been detached, the TextIO is in an
    # unusable state.
    fun detach is abstract
    
    # Truncate size to pos.
    redef fun truncate(pos) is abstract
    
end

# Exception raised when I/O would block on a non-blocking I/O stream.
redef class BlockingIOError
    
    init do end
    
end

# Codec used when reading a file in universal newlines mode.  It wraps
# another incremental decoder, translating \r\n and \r into \n.  It also
# records the types of newlines encountered.  When used with
# translate=False, it ensures that the newline sequence is returned in
# one piece.
redef class IncrementalNewlineDecoder
    
    redef fun reset is abstract
    
    redef fun decode(input, final) is abstract
    
    init do end
    
    redef fun getstate is abstract
    
    redef fun setstate(state) is abstract
    
end

redef class Sys
    
end

# BufferedReader(raw[, buffer_size])
# A buffer for a readable, sequential BaseRawIO object.
# The constructor creates a BufferedReader for the given readable raw
# stream and buffer_size. If buffer_size is omitted, DEFAULT_BUFFER_SIZE
# is used.
redef class BufferedReader
    
    # Returns buffered bytes without advancing the position.
    # The argument indicates a desired minimal number of bytes; we
    # do at most one raw read to satisfy it.  We never return more
    # than self.buffer_size.
    fun peek(n: Object) is abstract
    
    # Read n bytes.
    # Returns exactly n bytes of data unless the underlying raw IO
    # stream reaches EOF or if the call would block in non-blocking
    # mode. If n is negative, read until EOF or until read() would
    # block.
    redef fun read(n) is abstract
    
    # Reads up to n bytes, with at most one read() system call.
    redef fun read1(n) is abstract
    
    private fun private_reset_read_buf is abstract
    
    # Create a new buffered reader using the given readable raw IO object.
    init do end
    
    private fun private_peek_unlocked(n: Object) is abstract
    
    private fun private_read_unlocked(n: Object) is abstract
    
    redef fun seek(whence, pos) is abstract
    
    redef fun tell is abstract
    
end

# file(name: str[, mode: str]) -> file IO object
# Open a file.  The mode can be 'r', 'w' or 'a' for reading (default),
# writing or appending.  The file will be created if it doesn't exist
# when opened for writing or appending; it will be truncated when
# opened for writing.  Add a '+' to the mode to allow simultaneous
# reading and writing.
redef class FileIO
    
end

# A mixin implementation of BufferedIOBase with an underlying raw stream.
# This passes most requests on to the underlying raw stream.  It
# does *not* provide implementations of read(), readinto() or
# write().
private class BufferedIOMixin
    super BufferedIOBase
    
    redef fun fileno is abstract
    
    redef fun isatty is abstract
    
    redef fun truncate(pos) is abstract
    
    redef fun readable is abstract
    
    fun repr is abstract
    
    redef fun writable is abstract
    
    init do end
    
    redef fun flush is abstract
    
    redef fun seekable is abstract
    
    redef fun close is abstract
    
    redef fun detach is abstract
    
    redef fun seek(whence, pos) is abstract
    
    redef fun tell is abstract
    
end

# open(file, mode='r', buffering=-1, encoding=None, errors=None, newline=None, closefd=True)
# Open file and return a stream.  Raise IOError upon failure.
# file is either a text or byte string giving the name (and the path
# if the file isn't in the current working directory) of the file to
# be opened or an integer file descriptor of the file to be
# wrapped. (If a file descriptor is given, it is closed when the
# returned I/O object is closed, unless closefd is set to False.)
# mode is an optional string that specifies the mode in which the file
# is opened. It defaults to 'r' which means open for reading in text
# mode.  Other common values are 'w' for writing (truncating the file if
# it already exists), and 'a' for appending (which on some Unix systems,
# means that all writes append to the end of the file regardless of the
# current seek position). In text mode, if encoding is not specified the
# encoding used is platform dependent. (For reading and writing raw
# bytes use binary mode and leave encoding unspecified.) The available
# modes are:
# ========= ===============================================================
# Character Meaning
# --------- ---------------------------------------------------------------
# 'r'       open for reading (default)
# 'w'       open for writing, truncating the file first
# 'a'       open for writing, appending to the end of the file if it exists
# 'b'       binary mode
# 't'       text mode (default)
# '+'       open a disk file for updating (reading and writing)
# 'U'       universal newline mode (for backwards compatibility; unneeded
# for new code)
# ========= ===============================================================
# The default mode is 'rt' (open for reading text). For binary random
# access, the mode 'w+b' opens and truncates the file to 0 bytes, while
# 'r+b' opens the file without truncation.
# Python distinguishes between files opened in binary and text modes,
# even when the underlying operating system doesn't. Files opened in
# binary mode (appending 'b' to the mode argument) return contents as
# bytes objects without any decoding. In text mode (the default, or when
# 't' is appended to the mode argument), the contents of the file are
# returned as strings, the bytes having been first decoded using a
# platform-dependent encoding or using the specified encoding if given.
# buffering is an optional integer used to set the buffering policy.
# Pass 0 to switch buffering off (only allowed in binary mode), 1 to select
# line buffering (only usable in text mode), and an integer > 1 to indicate
# the size of a fixed-size chunk buffer.  When no buffering argument is
# given, the default buffering policy works as follows:
# * Binary files are buffered in fixed-size chunks; the size of the buffer
# is chosen using a heuristic trying to determine the underlying device's
# "block size" and falling back on `io.DEFAULT_BUFFER_SIZE`.
# On many systems, the buffer will typically be 4096 or 8192 bytes long.
# * "Interactive" text files (files for which isatty() returns True)
# use line buffering.  Other text files use the policy described above
# for binary files.
# encoding is the name of the encoding used to decode or encode the
# file. This should only be used in text mode. The default encoding is
# platform dependent, but any encoding supported by Python can be
# passed.  See the codecs module for the list of supported encodings.
# errors is an optional string that specifies how encoding errors are to
# be handled---this argument should not be used in binary mode. Pass
# 'strict' to raise a ValueError exception if there is an encoding error
# (the default of None has the same effect), or pass 'ignore' to ignore
# errors. (Note that ignoring encoding errors can lead to data loss.)
# See the documentation for codecs.register for a list of the permitted
# encoding error strings.
# newline controls how universal newlines works (it only applies to text
# mode). It can be None, '', '\n', '\r', and '\r\n'.  It works as
# follows:
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
# If closefd is False, the underlying file descriptor will be kept open
# when the file is closed. This does not work when a file name is given
# and must be True in that case.
# open() returns a file object whose type depends on the mode, and
# through which the standard file operations such as reading and writing
# are performed. When open() is used to open a file in a text mode ('w',
# 'r', 'wt', 'rt', etc.), it returns a TextIOWrapper. When used to open
# a file in a binary mode, the returned class varies: in read binary
# mode, it returns a BufferedReader; in write binary and append binary
# modes, it returns a BufferedWriter, and in read/write mode, it returns
# a BufferedRandom.
# It is also possible to use a string or bytearray as a file for both
# reading and writing. For strings StringIO can be used like a file
# opened in a text mode, and for bytes a BytesIO can be used like a file
# opened in a binary mode.
class OpenWrapper
    
end

# A buffer for a writeable sequential RawIO object.
# The constructor creates a BufferedWriter for the given writeable raw
# stream. If the buffer_size is not given, it defaults to
# DEFAULT_BUFFER_SIZE.
redef class BufferedWriter
    
    redef fun truncate(pos) is abstract
    
    private fun private_flush_unlocked is abstract
    
    redef fun write(b) is abstract
    
    init do end
    
    redef fun flush is abstract
    
    redef fun seek(whence, pos) is abstract
    
    redef fun tell is abstract
    
end

# Base class for buffered IO objects.
# The main difference with RawIOBase is that the read() method
# supports omitting the size argument, and does not have a default
# implementation that defers to readinto().
# In addition, read(), readinto() and write() may raise
# BlockingIOError if the underlying raw stream is in non-blocking
# mode and not ready; unlike their raw counterparts, they will never
# return None.
# A typical implementation should not inherit from a RawIOBase
# implementation, but wrap one.
redef class BufferedIOBase
    
    # Read and return up to n bytes.
    # If the argument is omitted, None, or negative, reads and
    # returns all data until EOF.
    # If the argument is positive, and the underlying raw stream is
    # not 'interactive', multiple raw reads may be issued to satisfy
    # the byte count (unless EOF is reached first).  But for
    # interactive raw streams (XXX and for pipes?), at most one raw
    # read will be issued, and a short result does not imply that
    # EOF is imminent.
    # Returns an empty bytes array on EOF.
    # Raises BlockingIOError if the underlying raw stream has no
    # data at the moment.
    fun read(n: Object) is abstract
    
    # Read up to n bytes with at most one read() system call.
    fun read1(n: Object) is abstract
    
    # Read up to len(b) bytes into b.
    # Like read(), this may issue multiple reads to the underlying raw
    # stream, unless the latter is 'interactive'.
    # Returns the number of bytes read (0 for EOF).
    # Raises BlockingIOError if the underlying raw stream has no
    # data at the moment.
    fun readinto(b: Object) is abstract
    
    # Separate the underlying raw stream from the buffer and return it.
    # After the raw stream has been detached, the buffer is in an unusable
    # state.
    fun detach is abstract
    
    # Write the given buffer to the IO stream.
    # Return the number of bytes written, which is never less than
    # len(b).
    # Raises BlockingIOError if the buffer is full and the
    # underlying raw stream cannot accept more data at the moment.
    fun write(b: Object) is abstract
    
end

# Buffered I/O implementation using an in-memory bytes buffer.
redef class BytesIO
    
    redef fun write(b) is abstract
    
    fun getstate is abstract
    
    redef fun truncate(pos) is abstract
    
    redef fun read(n) is abstract
    
    redef fun readable is abstract
    
    # Return the bytes value (contents) of the buffer
    fun getvalue is abstract
    
    redef fun writable is abstract
    
    init do end
    
    # This is the same as read.
    redef fun read1(n) is abstract
    
    redef fun seekable is abstract
    
    redef fun seek(whence, pos) is abstract
    
    redef fun tell is abstract
    
end

