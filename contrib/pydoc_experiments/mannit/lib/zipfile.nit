# Read and write ZIP files.
module zipfile

import cstringio
import stat
import string
import zlib
import binascii
import sys
import re
import io
import time
import shutil
import os
import struct
import builtins

class BadZipfile
    super Exception
    
end

# Raised when writing a zipfile, the zipfile requires ZIP64 extensions
# and those extensions are disabled.
class LargeZipFile
    super Exception
    
end

# Class with methods to open, read, write, close, list zip files.
# z = ZipFile(file, mode="r", compression=ZIP_STORED, allowZip64=False)
# file: Either the path to the file, or a file-like object.
# If it is a path, the file will be opened and closed by ZipFile.
# mode: The mode can be either read "r", write "w" or append "a".
# compression: ZIP_STORED (no compression) or ZIP_DEFLATED (requires zlib).
# allowZip64: if True ZipFile will create files with ZIP64 extensions when
# needed, otherwise it will raise an exception when this would
# be necessary.
class ZipFile
    
    # Return a list of file names in the archive.
    fun namelist is abstract
    
    # Open the ZIP file with mode read "r", write "w" or append "a".
    init do end
    
    # Return a list of class ZipInfo instances for files in the
    # archive.
    fun infolist is abstract
    
    # Extract the ZipInfo object 'member' to a physical
    # file on the path targetpath.
    private fun private_extract_member(member, pwd, targetpath: Object) is abstract
    
    # Return the instance of ZipInfo given 'name'.
    fun getinfo(name: Object) is abstract
    
    # Return file bytes (as a string) for name.
    fun read(pwd, name: Object) is abstract
    
    # Return file-like object for 'name'.
    fun open(pwd, name, mode: Object) is abstract
    
    # Print a table of contents for the zip file.
    fun printdir is abstract
    
    fun enter is abstract
    
    # Check for errors before writing a file to the archive.
    private fun private_writecheck(zinfo: Object) is abstract
    
    # Put the bytes from filename into the archive under the name
    # arcname.
    fun write(arcname, compress_type, filename: Object) is abstract
    
    # Extract all members from the archive to the current working
    # directory. `path' specifies a different directory to extract to.
    # `members' is optional and must be a subset of the list returned
    # by namelist().
    fun extractall(path, pwd, members: Object) is abstract
    
    # Call the "close()" method in case the user forgot.
    fun del is abstract
    
    # Read in the table of contents for the ZIP file.
    private fun private_realgetcontents is abstract
    
    # Close the file, and for mode "w" and "a" write the ending
    # records.
    fun close is abstract
    
    # Set default password for encrypted files.
    fun setpassword(pwd: Object) is abstract
    
    fun exit(traceback, py_type, value: Object) is abstract
    
    # Extract a member from the archive to the current working directory,
    # using its full name. Its file information is extracted as accurately
    # as possible. `member' may be a filename or a ZipInfo object. You can
    # specify a different directory using `path'.
    fun extract(member, path, pwd: Object) is abstract
    
    # Write a file into the archive.  The contents is the string
    # 'bytes'.  'zinfo_or_arcname' is either a ZipInfo instance or
    # the name of the file in the archive.
    fun writestr(bytes, zinfo_or_arcname, compress_type: Object) is abstract
    
    # Read all the files and check the CRC.
    fun testzip is abstract
    
end

# Class to create ZIP archives with Python library files and packages.
class PyZipFile
    super ZipFile
    
    # Return (filename, archivename) for the path.
    # Given a module name path, return the correct file path and
    # archive name, compiling if necessary.  For example, given
    # /python/lib/string, return (/python/lib/string.pyc, string).
    private fun private_get_codename(basename, pathname: Object) is abstract
    
    # Add all files from "pathname" to the ZIP archive.
    # If pathname is a package directory, search the directory and
    # all package subdirectories recursively for all *.py and enter
    # the modules into the archive.  If pathname is a plain
    # directory, listdir *.py and enter all modules.  Else, pathname
    # must be a Python *.py file and the module will be put into the
    # archive.  Added modules are always module.pyo or module.pyc.
    # This method will compile the module.py into module.pyc if
    # necessary.
    fun writepy(basename, pathname: Object) is abstract
    
end

redef class Sys
    
end

# Class to handle decryption of files stored within a ZIP archive.
# ZIP supports a password-based form of encryption. Even though known
# plaintext attacks have been found against it, it is still useful
# to be able to get data out of such a file.
# Usage:
# zd = _ZipDecrypter(mypwd)
# plain_char = zd(cypher_char)
# plain_text = map(zd, cypher_text)
private class ZipDecrypter
    
    # Decrypt a single character.
    fun call(c: Object) is abstract
    
    init do end
    
    # Generate a CRC-32 table.
    # ZIP encryption uses the CRC32 one-byte primitive for scrambling some
    # internal keys. We noticed that a direct implementation is faster than
    # relying on binascii.crc32().
    private fun private_generatecrctable is abstract
    
    # Compute the CRC32 primitive on one byte.
    private fun private_crc32(crc, ch: Object) is abstract
    
    private fun private_updatekeys(c: Object) is abstract
    
end

# File-like object for reading an archive member.
# Is returned by ZipFile.open().
class ZipExtFile
    super BufferedIOBase
    
    # Returns buffered bytes without advancing the position.
    fun peek(n: Object) is abstract
    
    # Read and return up to n bytes.
    # If the argument is omitted, None, or negative, data is read and returned until EOF is reached..
    fun read(n: Object) is abstract
    
    fun readable is abstract
    
    # Read up to n bytes with at most one read() system call.
    fun read1(n: Object) is abstract
    
    init do end
    
    private fun private_update_crc(newdata, eof: Object) is abstract
    
    fun close is abstract
    
    # Read and return a line from the stream.
    # If limit is specified, at most limit bytes will be read.
    fun readline(limit: Object) is abstract
    
end

# Class with attributes describing each file in the ZIP archive.
class ZipInfo
    
    # Return the per-file header as a string.
    fun fileheader(zip64: Object) is abstract
    
    init do end
    
    private fun private_decodeextra is abstract
    
    private fun private_encodefilenameflags is abstract
    
    private fun private_decodefilename is abstract
    
end

