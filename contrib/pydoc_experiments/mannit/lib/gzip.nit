# Functions that read and write gzipped files.
# The user of the file doesn't have to worry about the compression,
# but random access is not allowed.
module gzip

import struct
import zlib
import sys
import io
import time
import os
import builtins

redef class Sys
    
end

# The GzipFile class simulates most of the methods of a file object with
# the exception of the readinto() and truncate() methods.
class GzipFile
    super BufferedIOBase
    
    fun writable is abstract
    
    fun flush(zlib_mode: Object) is abstract
    
    fun close is abstract
    
    fun seek(whence, offset: Object) is abstract
    
    # Raises a ValueError if the underlying file object has been closed.
    private fun private_check_closed is abstract
    
    private fun private_read(size: Object) is abstract
    
    fun readable is abstract
    
    fun write(data: Object) is abstract
    
    # Constructor for the GzipFile class.
    # At least one of fileobj and filename must be given a
    # non-trivial value.
    # The new class instance is based on fileobj, which can be a regular
    # file, a StringIO object, or any other object which simulates a file.
    # It defaults to None, in which case filename is opened to provide
    # a file object.
    # When fileobj is not None, the filename argument is only used to be
    # included in the gzip file header, which may includes the original
    # filename of the uncompressed file.  It defaults to the filename of
    # fileobj, if discernible; otherwise, it defaults to the empty string,
    # and in this case the original filename is not included in the header.
    # The mode argument can be any of 'r', 'rb', 'a', 'ab', 'w', or 'wb',
    # depending on whether the file will be read or written.  The default
    # is the mode of fileobj if discernible; otherwise, the default is 'rb'.
    # Be aware that only the 'rb', 'ab', and 'wb' values should be used
    # for cross-platform portability.
    # The compresslevel argument is an integer from 0 to 9 controlling the
    # level of compression; 1 is fastest and produces the least compression,
    # and 9 is slowest and produces the most compression. 0 is no compression
    # at all. The default is 9.
    # The mtime argument is an optional numeric timestamp to be written
    # to the stream when compressing.  All gzip compressed streams
    # are required to contain a timestamp.  If omitted or None, the
    # current time is used.  This module ignores the timestamp when
    # decompressing; however, some programs, such as gunzip, make use
    # of it.  The format of the timestamp is the same as that of the
    # return value of time.time() and of the st_mtime member of the
    # object returned by os.stat().
    init do end
    
    private fun private_read_eof is abstract
    
    private fun private_add_read_data(data: Object) is abstract
    
    # Return the uncompressed stream file position indicator to the
    # beginning of the file
    fun rewind is abstract
    
    private fun private_write_gzip_header is abstract
    
    private fun private_init_read is abstract
    
    fun read(size: Object) is abstract
    
    fun repr is abstract
    
    fun seekable is abstract
    
    fun readline(size: Object) is abstract
    
    private fun private_init_write(filename: Object) is abstract
    
    # Invoke the underlying file object's fileno() method.
    # This will raise AttributeError if the underlying file object
    # doesn't support fileno().
    fun fileno is abstract
    
    private fun private_read_gzip_header is abstract
    
    private fun private_unread(buf: Object) is abstract
    
end

