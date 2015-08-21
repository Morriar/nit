# Simple HTTP Server.
# This module builds on BaseHTTPServer by implementing the standard GET
# and HEAD requests in a fairly straightforward manner.
module simplehttpserver

import basehttpserver

redef class Sys

end

# Simple HTTP request handler with GET and HEAD commands.
# This serves files from the current directory and any of its
# subdirectories.  The MIME type for files is determined by
# calling the .guess_type() method.
# The GET and HEAD requests are identical except that the HEAD
# request omits the actual contents of the file.
class SimpleHTTPRequestHandler
    super BaseHTTPRequestHandler

    # Guess the type of a file.
    # Argument is a PATH (a filename).
    # Return value is a string of the form type/subtype,
    # usable for a MIME Content-type header.
    # The default implementation looks the file's extension
    # up in the table self.extensions_map, using application/octet-stream
    # as a default; however it would be permissible (if
    # slow) to look inside the data to make a better guess.
    fun guess_type(path: Object) is abstract

    # Copy all data between two file objects.
    # The SOURCE argument is a file object open for reading
    # (or anything with a read() method) and the DESTINATION
    # argument is a file object open for writing (or
    # anything with a write() method).
    # The only reason for overriding this would be to change
    # the block size or perhaps to replace newlines by CRLF
    # -- note however that this the default server uses this
    # to copy binary data as well.
    fun copyfile(source, outputfile: Object) is abstract

    # Helper to produce a directory listing (absent index.html).
    # Return value is either a file object, or None (indicating an
    # error).  In either case, the headers are sent, making the
    # interface the same as for send_head().
    fun list_directory(path: Object) is abstract

    # Common code for GET and HEAD commands.
    # This sends the response code and MIME headers.
    # Return value is either a file object (which has to be copied
    # to the outputfile by the caller unless the command was HEAD,
    # and must be closed by the caller under all circumstances), or
    # None, in which case the caller has nothing further to do.
    fun send_head is abstract

    # Serve a GET request.
    fun do_get is abstract

    # Serve a HEAD request.
    fun do_head is abstract

    # Translate a /-separated PATH to the local filename syntax.
    # Components that mean special things to the local file system
    # (e.g. drive or directory names) are ignored.  (XXX They should
    # probably be diagnosed.)
    fun translate_path(path: Object) is abstract

end

