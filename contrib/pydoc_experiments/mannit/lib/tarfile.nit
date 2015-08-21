# Read from and write to tar format archives.
module tarfile

import stat
import shutil
import struct
import grp
import errno
import sys
import re
import pwd
import time
import operator
import copy
import os
import builtins

# Exception for empty headers.
class EmptyHeaderError
    super HeaderError
    
end

# Base class for _data and _hole.
private class Section
    
    init do end
    
    fun contains(offset: Object) is abstract
    
end

# Base exception for header errors.
class HeaderError
    super TarError
    
end

# File-like object for reading an archive member.
# Is returned by TarFile.extractfile().
class ExFileObject
    
    # Read at most size bytes from the file. If size is not
    # present or None, read all data until EOF is reached.
    fun read(size: Object) is abstract
    
    # Return a list with all remaining lines.
    fun readlines is abstract
    
    # Get an iterator over the file's lines.
    fun iter is abstract
    
    init do end
    
    # Close the file object.
    fun close is abstract
    
    # Read one entire line from the file. If size is present
    # and non-negative, return a string with at most that
    # size, which may be an incomplete line.
    fun readline(size: Object) is abstract
    
    # Seek to a position in the file.
    fun seek(whence, pos: Object) is abstract
    
    # Return the current file position.
    fun tell is abstract
    
end

# Exception for missing and invalid extended headers.
class SubsequentHeaderError
    super HeaderError
    
end

# Exception for unavailable compression methods.
class CompressionError
    super TarError
    
end

# General exception for extract errors.
class ExtractError
    super TarError
    
end

# The TarFile Class provides an interface to tar archives.
class TarFile
    
    # Add the TarInfo object `tarinfo' to the archive. If `fileobj' is
    # given, tarinfo.size bytes are read from it and added to the archive.
    # You can create TarInfo objects using gettarinfo().
    # On Windows platforms, `fileobj' should always be opened with mode
    # 'rb' to avoid irritation about the file size.
    fun addfile(tarinfo, fileobj: Object) is abstract
    
    # Read through the entire archive file and look for readable
    # members.
    private fun private_load is abstract
    
    # Set file permissions of targetpath according to tarinfo.
    fun chmod(targetpath, tarinfo: Object) is abstract
    
    # Return a TarInfo object for member `name'. If `name' can not be
    # found in the archive, KeyError is raised. If a member occurs more
    # than once in the archive, its last occurrence is assumed to be the
    # most up-to-date version.
    fun getmember(name: Object) is abstract
    
    # Close the TarFile. In write-mode, two finishing zero blocks are
    # appended to the archive.
    fun close is abstract
    
    # Return the next member of the archive as a TarInfo object, when
    # TarFile is opened for reading. Return None if there is no more
    # available.
    fun next is abstract
    
    # Extract a member from the archive to the current working directory,
    # using its full name. Its file information is extracted as accurately
    # as possible. `member' may be a filename or a TarInfo object. You can
    # specify a different directory using `path'.
    fun extract(member, path: Object) is abstract
    
    # Make a (symbolic) link called targetpath. If it cannot be created
    # (platform limitation), we try to make a copy of the referenced file
    # instead of a link.
    fun makelink(targetpath, tarinfo: Object) is abstract
    
    # Find an archive member by name from bottom to top.
    # If tarinfo is given, it is used as the starting point.
    private fun private_getmember(normalize, name, tarinfo: Object) is abstract
    
    # Make a file from a TarInfo object with an unknown type
    # at targetpath.
    fun makeunknown(targetpath, tarinfo: Object) is abstract
    
    # Extract the TarInfo object tarinfo to a physical
    # file called targetpath.
    private fun private_extract_member(targetpath, tarinfo: Object) is abstract
    
    # Open a tar archive for reading, writing or appending. Return
    # an appropriate TarFile class.
    # mode:
    # 'r' or 'r:*' open for reading with transparent compression
    # 'r:'         open for reading exclusively uncompressed
    # 'r:gz'       open for reading with gzip compression
    # 'r:bz2'      open for reading with bzip2 compression
    # 'a' or 'a:'  open for appending, creating the file if necessary
    # 'w' or 'w:'  open for writing without compression
    # 'w:gz'       open for writing with gzip compression
    # 'w:bz2'      open for writing with bzip2 compression
    # 'r|*'        open a stream of tar blocks with transparent compression
    # 'r|'         open an uncompressed stream of tar blocks for reading
    # 'r|gz'       open a gzip compressed stream of tar blocks
    # 'r|bz2'      open a bzip2 compressed stream of tar blocks
    # 'w|'         open an uncompressed stream for writing
    # 'w|gz'       open a gzip compressed stream for writing
    # 'w|bz2'      open a bzip2 compressed stream for writing
    fun open(cls, bufsize, mode, fileobj, name: Object) is abstract
    
    # Make a file called targetpath.
    fun makefile(targetpath, tarinfo: Object) is abstract
    
    # Open an (uncompressed) tar archive `name'. `mode' is either 'r' to
    # read from an existing archive, 'a' to append data to an existing
    # file or 'w' to create a new file overwriting an existing one. `mode'
    # defaults to 'r'.
    # If `fileobj' is given, it is used for reading or writing data. If it
    # can be determined, `mode' is overridden by `fileobj's mode.
    # `fileobj' is not closed, when TarFile is closed.
    init do end
    
    # Create a TarInfo object for either the file `name' or the file
    # object `fileobj' (using os.fstat on its file descriptor). You can
    # modify some of the TarInfo's attributes before you add it using
    # addfile(). If given, `arcname' specifies an alternative name for the
    # file in the archive.
    fun gettarinfo(arcname, name, fileobj: Object) is abstract
    
    # Add the file `name' to the archive. `name' may be any type of file
    # (directory, fifo, symbolic link, etc.). If given, `arcname'
    # specifies an alternative name for the file in the archive.
    # Directories are added recursively by default. This can be avoided by
    # setting `recursive' to False. `exclude' is a function that should
    # return True for each filename to be excluded. `filter' is a function
    # that expects a TarInfo object argument and returns the changed
    # TarInfo object, if it returns None the TarInfo object will be
    # excluded from the archive.
    fun add(filter, exclude, name, arcname, recursive: Object) is abstract
    
    fun exit(traceback, py_type, value: Object) is abstract
    
    # Return the members of the archive as a list of TarInfo objects. The
    # list has the same order as the members in the archive.
    fun getmembers is abstract
    
    # Find the target member of a symlink or hardlink member in the
    # archive.
    private fun private_find_link_target(tarinfo: Object) is abstract
    
    # Make a character or block device called targetpath.
    fun makedev(targetpath, tarinfo: Object) is abstract
    
    # Open gzip compressed tar archive name for reading or writing.
    # Appending is not allowed.
    fun gzopen(cls, compresslevel, mode, fileobj, name: Object) is abstract
    
    # Make a fifo called targetpath.
    fun makefifo(targetpath, tarinfo: Object) is abstract
    
    # Check if TarFile is still open, and if the operation's mode
    # corresponds to TarFile's mode.
    private fun private_check(mode: Object) is abstract
    
    # Extract all members from the archive to the current working
    # directory and set owner, modification time and permissions on
    # directories afterwards. `path' specifies a different directory
    # to extract to. `members' is optional and must be a subset of the
    # list returned by getmembers().
    fun extractall(path, members: Object) is abstract
    
    # Open uncompressed tar archive name for reading or writing.
    fun taropen(cls, mode, fileobj, name: Object) is abstract
    
    # Open bzip2 compressed tar archive name for reading or writing.
    # Appending is not allowed.
    fun bz2open(cls, compresslevel, mode, fileobj, name: Object) is abstract
    
    # Return the members of the archive as a list of their names. It has
    # the same order as the list returned by getmembers().
    fun getnames is abstract
    
    private fun private_setposix(value: Object) is abstract
    
    # Set modification time of targetpath according to tarinfo.
    fun utime(targetpath, tarinfo: Object) is abstract
    
    # Write debugging output to sys.stderr.
    private fun private_dbg(msg, level: Object) is abstract
    
    # Print a table of contents to sys.stdout. If `verbose' is False, only
    # the names of the members are printed. If it is True, an `ls -l'-like
    # output is produced.
    fun list(verbose: Object) is abstract
    
    # Provide an iterator object.
    fun iter is abstract
    
    # Set owner of targetpath according to tarinfo.
    fun chown(targetpath, tarinfo: Object) is abstract
    
    # Extract a member from the archive as a file object. `member' may be
    # a filename or a TarInfo object. If `member' is a regular file, a
    # file-like object is returned. If `member' is a link, a file-like
    # object is constructed from the link's target. If `member' is none of
    # the above, None is returned.
    # The file-like object is read-only and provides the following
    # methods: read(), readline(), readlines(), seek() and tell()
    fun extractfile(member: Object) is abstract
    
    fun enter is abstract
    
    # Make a directory called targetpath.
    fun makedir(targetpath, tarinfo: Object) is abstract
    
    private fun private_getposix is abstract
    
end

# Low-level file object. Supports reading and writing.
# It is used instead of a regular file object for streaming
# access.
private class LowLevelFile
    
    fun read(size: Object) is abstract
    
    fun write(s: Object) is abstract
    
    init do end
    
    fun close is abstract
    
end

# Exception for end of file headers.
class EOFHeaderError
    super HeaderError
    
end

redef class Sys
    
end

# Small proxy class that enables external file object
# support for "r:bz2" and "w:bz2" modes. This is actually
# a workaround for a limitation in bz2 module's BZ2File
# class which (unlike gzip.GzipFile) has no support for
# a file object argument.
private class BZ2Proxy
    
    fun read(size: Object) is abstract
    
    fun write(data: Object) is abstract
    
    init do end
    
    fun close is abstract
    
    fun seek(pos: Object) is abstract
    
    fun tell is abstract
    
end

# Ringbuffer class which increases performance
# over a regular list.
private class Ringbuffer
    super List
    
    init do end
    
    fun find(offset: Object) is abstract
    
end

# Represent a hole section in a sparse file.
private class Hole
    super Section
    
end

# Represent a data section in a sparse file.
private class Data
    super Section
    
    init do end
    
end

# A thin wrapper around an existing file object that
# provides a part of its data as an individual file
# object.
private class FileInFile
    
    # Read operation for regular files.
    fun readnormal(size: Object) is abstract
    
    # Read data from the file.
    fun read(size: Object) is abstract
    
    # Read operation for sparse files.
    fun readsparse(size: Object) is abstract
    
    init do end
    
    # Read a single section of a sparse file.
    fun readsparsesection(size: Object) is abstract
    
    # Seek to a position in the file.
    fun seek(position: Object) is abstract
    
    # Return the current file position.
    fun tell is abstract
    
end

# Iterator Class.
# for tarinfo in TarFile(...):
# suite...
class TarIter
    
    # Construct a TarIter object.
    init do end
    
    # Return iterator object.
    fun iter is abstract
    
    # Return the next item using TarFile's next() method.
    # When all members have been read, set TarFile as _loaded.
    fun next is abstract
    
end

# Small proxy class that enables transparent compression
# detection for the Stream interface (mode 'r|*').
private class StreamProxy
    
    fun read(size: Object) is abstract
    
    fun close is abstract
    
    fun getcomptype is abstract
    
    init do end
    
end

# TarFile class compatible with standard module zipfile's
# ZipFile class.
class TarFileCompat
    
    fun namelist is abstract
    
    fun infolist is abstract
    
    fun getinfo(name: Object) is abstract
    
    fun read(name: Object) is abstract
    
    fun printdir is abstract
    
    fun write(arcname, compress_type, filename: Object) is abstract
    
    init do end
    
    fun close is abstract
    
    fun writestr(bytes, zinfo: Object) is abstract
    
    fun testzip is abstract
    
end

# Exception for unreadable tar archives.
class ReadError
    super TarError
    
end

# Class that serves as an adapter between TarFile and
# a stream-like object.  The stream-like object only
# needs to have a read() or write() method and is accessed
# blockwise.  Use of gzip or bzip2 compression is possible.
# A stream-like object could be for example: sys.stdin,
# sys.stdout, a socket, a tape device etc.
# _Stream is intended to be used only internally.
private class Stream
    
    # Initialize for reading a gzip compressed fileobj.
    private fun private_init_read_gz is abstract
    
    # Return size bytes from stream. If internal buffer is empty,
    # read another block from the stream.
    fun read(size: Object) is abstract
    
    # Set the stream's file pointer to pos. Negative seeking
    # is forbidden.
    fun seek(pos: Object) is abstract
    
    # Write string s to the stream if a whole new block
    # is ready to be written.
    fun write(s: Object) is abstract
    
    # Construct a _Stream object.
    init do end
    
    fun del is abstract
    
    # Close the _Stream object. No operation should be
    # done on it afterwards.
    fun close is abstract
    
    # Initialize for writing with gzip compression.
    private fun private_init_write_gz is abstract
    
    # Return size bytes from the stream.
    private fun private_read(size: Object) is abstract
    
    # Return the stream's file pointer position.
    fun tell is abstract
    
end

# Exception for invalid headers.
class InvalidHeaderError
    super HeaderError
    
end

# Exception for truncated headers.
class TruncatedHeaderError
    super HeaderError
    
end

# Exception for unsupported operations on stream-like TarFiles.
class StreamError
    super TarError
    
end

# Base exception.
class TarError
    super Exception
    
end

# Informational class which holds the details about an
# archive member given by a tar header block.
# TarInfo objects are returned by TarFile.getmember(),
# TarFile.getmembers() and TarFile.gettarinfo() and are
# usually created internally.
class TarInfo
    
    fun issym is abstract
    
    fun isdev is abstract
    
    # Return the object as a pax global header block sequence.
    fun create_pax_global_header(pax_headers, cls: Object) is abstract
    
    private fun private_getlinkpath is abstract
    
    # Return the TarInfo's attributes as a dictionary.
    fun get_info(errors, encoding: Object) is abstract
    
    # Process an extended or global header as described in
    # POSIX.1-2001.
    private fun private_proc_pax(tarfile: Object) is abstract
    
    fun isfile is abstract
    
    # Return the object as a ustar header block. If it cannot be
    # represented this way, prepend a pax extended header sequence
    # with supplement information.
    fun create_pax_header(info, errors, encoding: Object) is abstract
    
    # Return the object as a GNU header block sequence.
    fun create_gnu_header(info: Object) is abstract
    
    # Return the object as a ustar header block.
    fun create_ustar_header(info: Object) is abstract
    
    # Construct a TarInfo object. name is the optional name
    # of the member.
    init do end
    
    fun isreg is abstract
    
    # Process a GNU sparse header plus extra headers.
    private fun private_proc_sparse(tarfile: Object) is abstract
    
    # Round up a byte count by BLOCKSIZE and return it,
    # e.g. _block(834) => 1024.
    private fun private_block(count: Object) is abstract
    
    fun ischr is abstract
    
    # Return the next TarInfo object from TarFile object
    # tarfile.
    fun fromtarfile(tarfile, cls: Object) is abstract
    
    # Return a GNUTYPE_LONGNAME or GNUTYPE_LONGLINK sequence
    # for name.
    private fun private_create_gnu_long_header(py_type, name, cls: Object) is abstract
    
    # Return a POSIX.1-2001 extended or global header sequence
    # that contains a list of keyword, value pairs. The values
    # must be unicode objects.
    private fun private_create_pax_generic_header(pax_headers, py_type, cls: Object) is abstract
    
    fun repr is abstract
    
    # Process a builtin type or an unknown type which
    # will be treated as a regular file.
    private fun private_proc_builtin(tarfile: Object) is abstract
    
    fun islnk is abstract
    
    private fun private_setlinkpath(linkname: Object) is abstract
    
    fun isdir is abstract
    
    # Split a name longer than 100 chars into a prefix
    # and a name part.
    private fun private_posix_split_name(name: Object) is abstract
    
    fun isblk is abstract
    
    # Choose the right processing method depending on
    # the type and call it.
    private fun private_proc_member(tarfile: Object) is abstract
    
    # Return a tar header as a string of 512 byte blocks.
    fun tobuf(format, errors, encoding: Object) is abstract
    
    fun issparse is abstract
    
    # Process the blocks that hold a GNU longname
    # or longlink member.
    private fun private_proc_gnulong(tarfile: Object) is abstract
    
    fun isfifo is abstract
    
    # Construct a TarInfo object from a 512 byte string buffer.
    fun frombuf(buf, cls: Object) is abstract
    
    # Replace fields with supplemental information from a previous
    # pax extended or global header.
    private fun private_apply_pax_info(pax_headers, errors, encoding: Object) is abstract
    
    private fun private_getpath is abstract
    
    private fun private_setpath(name: Object) is abstract
    
end

