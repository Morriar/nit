# An FTP client class and some helper functions.
# Based on RFC 959: File Transfer Protocol (FTP), by J. Postel and J. Reynolds
# Example:
# >>> from ftplib import FTP
# >>> ftp = FTP('ftp.python.org') # connect to host, default port
# >>> ftp.login() # default, i.e.: user anonymous, passwd anonymous@
# '230 Guest login ok, access restrictions apply.'
# >>> ftp.retrlines('LIST') # list directory contents
# total 9
# drwxr-xr-x   8 root     wheel        1024 Jan  3  1994 .
# drwxr-xr-x   8 root     wheel        1024 Jan  3  1994 ..
# drwxr-xr-x   2 root     wheel        1024 Jan  3  1994 bin
# drwxr-xr-x   2 root     wheel        1024 Jan  3  1994 etc
# d-wxrwxr-x   2 ftp      wheel        1024 Sep  5 13:43 incoming
# drwxr-xr-x   2 root     wheel        1024 Nov 17  1993 lib
# drwxr-xr-x   6 1094     wheel        1024 Sep 13 19:07 pub
# drwxr-xr-x   3 root     wheel        1024 Jan  3  1994 usr
# -rw-r--r--   1 root     root          312 Aug  1  1994 welcome.msg
# '226 Transfer complete.'
# >>> ftp.quit()
# '221 Goodbye.'
# >>>
# A nice test that reveals some of the network dialogue would be:
# python ftplib.py -d localhost -l -p -l
module ftplib

import sys
import ssl
import os
import py_socket
import builtins

# An FTP client class.
# To create a connection, call the class using these arguments:
# host, user, passwd, acct, timeout
# The first four arguments are all strings, and have default value ''.
# timeout must be numeric and defaults to None if not passed,
# meaning that no timeout will be set on any ftp socket(s)
# If a timeout is passed, then this is now the default timeout for all ftp
# socket operations for this instance.
# Then use self.connect() with optional host and port argument.
# To download a file, use ftp.retrlines('RETR ' + filename),
# or ftp.retrbinary() with slightly different arguments.
# To upload a file, use ftp.storlines() or ftp.storbinary(),
# which have an open file as argument (see their definitions
# below for details).
# The download/upload functions first issue appropriate TYPE
# and PORT or PASV commands.
class FTP
    
    # Rename a file.
    fun rename(toname, fromname: Object) is abstract
    
    # Abort a file transfer.  Uses out-of-band data.
    # This does not follow the procedure from the RFC to send Telnet
    # IP and Synch; that doesn't seem to work with the servers I've
    # tried.  Instead, just send the ABOR command as OOB data.
    fun py_abort is abstract
    
    # Set the debugging level.
    # The required argument level means:
    # 0: no debugging output (default)
    # 1: print commands and responses but not body text etc.
    # 2: also print raw lines read and sent before stripping CR/LF
    fun set_debuglevel(level: Object) is abstract
    
    # Send a command and return the response.
    fun sendcmd(cmd: Object) is abstract
    
    # Send a EPRT command with the current host and the given port number.
    fun sendeprt(host, port: Object) is abstract
    
    # Connect to host.  Arguments are:
    # - host: hostname to connect to (string, default previous host)
    # - port: port to connect to (integer, default previous port)
    fun connect(host, port, timeout: Object) is abstract
    
    # Remove a directory.
    fun rmd(dirname: Object) is abstract
    
    # Close the connection without assuming anything about it.
    fun close is abstract
    
    # Send new account name.
    fun acct(password: Object) is abstract
    
    # Retrieve the size of a file.
    fun size(filename: Object) is abstract
    
    # Quit, and close the connection.
    fun quit is abstract
    
    # Get the welcome message from the server.
    # (this is read and squirreled away by connect())
    fun getwelcome is abstract
    
    # Make a directory, return its full pathname.
    fun mkd(dirname: Object) is abstract
    
    fun makepasv is abstract
    
    # Like ntransfercmd() but returns only the socket.
    fun transfercmd(cmd, rest: Object) is abstract
    
    fun getmultiline is abstract
    
    # Create a new socket and send a PORT command for it.
    fun makeport is abstract
    
    fun putline(line: Object) is abstract
    
    init do end
    
    # Return a list of files in a given directory (default the current).
    fun nlst is abstract
    
    fun sanitize(s: Object) is abstract
    
    # Store a file in binary mode.  A new port is created for you.
    # Args:
    # cmd: A STOR command.
    # fp: A file-like object with a read(num_bytes) method.
    # blocksize: The maximum data size to read from fp and send over
    # the connection at once.  [default: 8192]
    # callback: An optional single parameter callable that is called on
    # each block of data after it is sent.  [default: None]
    # rest: Passed to transfercmd().  [default: None]
    # Returns:
    # The response code.
    fun storbinary(fp, blocksize, cmd, rest, callback: Object) is abstract
    
    fun getline is abstract
    
    # Send a command and expect a response beginning with '2'.
    fun voidcmd(cmd: Object) is abstract
    
    # Send a PORT command with the current host and the given
    # port number.
    fun sendport(host, port: Object) is abstract
    
    # Return current working directory.
    fun pwd is abstract
    
    fun putcmd(line: Object) is abstract
    
    # Expect a response beginning with '2'.
    fun voidresp is abstract
    
    # Retrieve data in line mode.  A new port is created for you.
    # Args:
    # cmd: A RETR, LIST, NLST, or MLSD command.
    # callback: An optional single parameter callable that is called
    # for each line with the trailing CRLF stripped.
    # [default: print_line()]
    # Returns:
    # The response code.
    fun retrlines(callback, cmd: Object) is abstract
    
    # Initiate a transfer over the data connection.
    # If the transfer is active, send a port command and the
    # transfer command, and accept the connection.  If the server is
    # passive, send a pasv command, connect to it, and start the
    # transfer command.  Either way, return the socket for the
    # connection and the expected size of the transfer.  The
    # expected size may be None if it could not be determined.
    # Optional `rest' argument can be a string that is sent as the
    # argument to a REST command.  This is essentially a server
    # marker used to tell the server to skip over any data up to the
    # given marker.
    fun ntransfercmd(cmd, rest: Object) is abstract
    
    # Store a file in line mode.  A new port is created for you.
    # Args:
    # cmd: A STOR command.
    # fp: A file-like object with a readline() method.
    # callback: An optional single parameter callable that is called on
    # each line after it is sent.  [default: None]
    # Returns:
    # The response code.
    fun storlines(fp, callback, cmd: Object) is abstract
    
    # Change to a directory.
    fun cwd(dirname: Object) is abstract
    
    # Use passive or active mode for data transfers.
    # With a false argument, use the normal PORT mode,
    # With a true argument, use the PASV command.
    fun set_pasv(val: Object) is abstract
    
    # Login, default anonymous.
    fun login(passwd, acct, user: Object) is abstract
    
    # Retrieve data in binary mode.  A new port is created for you.
    # Args:
    # cmd: A RETR command.
    # callback: A single parameter callable to be called on each
    # block of data read.
    # blocksize: The maximum number of bytes to read from the
    # socket at one time.  [default: 8192]
    # rest: Passed to transfercmd().  [default: None]
    # Returns:
    # The response code.
    fun retrbinary(callback, cmd, rest, blocksize: Object) is abstract
    
    fun getresp is abstract
    
    # List a directory in long form.
    # By default list current directory to stdout.
    # Optional last argument is callback function; all
    # non-empty arguments before it are concatenated to the
    # LIST command.  (This *should* only be used for a pathname.)
    fun dir is abstract
    
    # Delete a file.
    fun delete(filename: Object) is abstract
    
end

class Error_reply
    super Error
    
end

class Error_temp
    super Error
    
end

class Error_proto
    super Error
    
end

# A FTP subclass which adds TLS support to FTP as described
# in RFC-4217.
# Connect as usual to port 21 implicitly securing the FTP control
# connection before authenticating.
# Securing the data connection requires user to explicitly ask
# for it by calling prot_p() method.
# Usage example:
# >>> from ftplib import FTP_TLS
# >>> ftps = FTP_TLS('ftp.python.org')
# >>> ftps.login()  # login anonymously previously securing control channel
# '230 Guest login ok, access restrictions apply.'
# >>> ftps.prot_p()  # switch to secure data connection
# '200 Protection level set to P'
# >>> ftps.retrlines('LIST')  # list directory content securely
# total 9
# drwxr-xr-x   8 root     wheel        1024 Jan  3  1994 .
# drwxr-xr-x   8 root     wheel        1024 Jan  3  1994 ..
# drwxr-xr-x   2 root     wheel        1024 Jan  3  1994 bin
# drwxr-xr-x   2 root     wheel        1024 Jan  3  1994 etc
# d-wxrwxr-x   2 ftp      wheel        1024 Sep  5 13:43 incoming
# drwxr-xr-x   2 root     wheel        1024 Nov 17  1993 lib
# drwxr-xr-x   6 1094     wheel        1024 Sep 13 19:07 pub
# drwxr-xr-x   3 root     wheel        1024 Jan  3  1994 usr
# -rw-r--r--   1 root     root          312 Aug  1  1994 welcome.msg
# '226 Transfer complete.'
# >>> ftps.quit()
# '221 Goodbye.'
# >>>
class FTP_TLS
    super FTP
    
    # Set up secure data connection.
    fun prot_p is abstract
    
    redef fun retrlines(callback, cmd) is abstract
    
    redef fun ntransfercmd(cmd, rest) is abstract
    
    redef fun storlines(fp, callback, cmd) is abstract
    
    init do end
    
    # Set up clear text data connection.
    fun prot_c is abstract
    
    # Set up secure control connection by using TLS/SSL.
    fun auth is abstract
    
    redef fun storbinary(fp, blocksize, cmd, rest, callback) is abstract
    
    redef fun login(passwd, acct, user) is abstract
    
    redef fun retrbinary(callback, cmd, rest, blocksize) is abstract
    
end

# Class to parse & provide access to 'netrc' format files.
# See the netrc(4) man page for information on the file format.
# WARNING: This class is obsolete -- use module netrc instead.
class Netrc
    
    # Return a list of hosts mentioned in the .netrc file.
    fun get_hosts is abstract
    
    init do end
    
    # Returns login information for the named host.
    # The return value is a triple containing userid,
    # password, and the accounting field.
    fun get_account(host: Object) is abstract
    
    # Return a sequence of lines which define a named macro.
    fun get_macro(macro: Object) is abstract
    
    # Return a list of all defined macro names.
    fun get_macros is abstract
    
end

redef class Sys
    
end

redef class Error
    
end

class Error_perm
    super Error
    
end

