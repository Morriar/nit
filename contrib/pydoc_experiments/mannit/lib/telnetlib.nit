# TELNET client class.
# Based on RFC 854: TELNET Protocol Specification, by J. Postel and
# J. Reynolds
# Example:
# >>> from telnetlib import Telnet
# >>> tn = Telnet('www.python.org', 79)   # connect to finger port
# >>> tn.write('guido\r\n')
# >>> print tn.read_all()
# Login       Name               TTY         Idle    When    Where
# guido    Guido van Rossum      pts/2        <Dec  2 11:10> snag.cnri.reston..
# >>>
# Note that read_all() won't read until eof -- it just reads some data
# -- but it guarantees to read at least one byte unless EOF is hit.
# It is possible to pass a Telnet object to select.select() in order to
# wait until more data is available.  Note that in this case,
# read_eager() may return '' even if there was data on the socket,
# because the protocol negotiation may have eaten the data.  This is why
# EOFError is needed in some cases to distinguish between "no data" and
# "connection closed" (since the socket also appears ready for reading
# when it is closed).
# To do:
# - option negotiation
# - timeout should be intrinsic to the connection object instead of an
# option on one of the read calls only
module telnetlib

import sys
import errno
import py_socket
import select
import builtins

redef class Sys
    
end

# Telnet interface class.
# An instance of this class represents a connection to a telnet
# server.  The instance is initially not connected; the open()
# method must be used to establish a connection.  Alternatively, the
# host name and optional port number can be passed to the
# constructor, too.
# Don't try to reopen an already connected instance.
# This class has many read_*() methods.  Note that some of them
# raise EOFError when the end of the connection is read, because
# they can return an empty string for other reasons.  See the
# individual doc strings.
# read_until(expected, [timeout])
# Read until the expected string has been seen, or a timeout is
# hit (default is no timeout); may block.
# read_all()
# Read all data until EOF; may block.
# read_some()
# Read at least one byte or EOF; may block.
# read_very_eager()
# Read all data available already queued or on the socket,
# without blocking.
# read_eager()
# Read either data already queued or some data available on the
# socket, without blocking.
# read_lazy()
# Read all data in the raw queue (processing it first), without
# doing any socket I/O.
# read_very_lazy()
# Reads all data in the cooked queue, without doing any socket
# I/O.
# read_sb_data()
# Reads available data between SB ... SE sequence. Don't block.
# set_option_negotiation_callback(callback)
# Each time a telnet option is read on the input flow, this callback
# (if set) is called with the following parameters :
# callback(telnet socket, command, option)
# option will be chr(0) when there is no option.
# No other action is done afterwards by telnetlib.
class Telnet
    
    # Set the debug level.
    # The higher it is, the more debug output you get (on sys.stdout).
    fun set_debuglevel(debuglevel: Object) is abstract
    
    # Return any data available in the cooked queue (very lazy).
    # Raise EOFError if connection closed and no data available.
    # Return '' if no cooked data available otherwise.  Don't block.
    fun read_very_lazy is abstract
    
    # Return any data available in the SB ... SE queue.
    # Return '' if no SB ... SE available. Should only be called
    # after seeing a SB or SE command. When a new SB command is
    # found, old unread SB data will be discarded. Don't block.
    fun read_sb_data is abstract
    
    # Read until one from a list of a regular expressions matches.
    # The first argument is a list of regular expressions, either
    # compiled (re.RegexObject instances) or uncompiled (strings).
    # The optional second argument is a timeout, in seconds; default
    # is no timeout.
    # Return a tuple of three items: the index in the list of the
    # first regular expression that matches; the match object
    # returned; and the text read up till and including the match.
    # If EOF is read and no text was read, raise EOFError.
    # Otherwise, when nothing matches, return (-1, None, text) where
    # text is the text received so far (may be the empty string if a
    # timeout happened).
    # If a regular expression ends with a greedy match (e.g. '.*')
    # or if more than one expression can match the same input, the
    # results are undeterministic, and may depend on the I/O timing.
    fun expect(list, timeout: Object) is abstract
    
    # Close the connection.
    fun close is abstract
    
    # Test whether data is available on the socket.
    fun sock_avail is abstract
    
    # Provide a callback function called after each receipt of a telnet option.
    fun set_option_negotiation_callback(callback: Object) is abstract
    
    # Fill raw queue from exactly one recv() system call.
    # Block if no data is immediately available.  Set self.eof when
    # connection is closed.
    fun fill_rawq is abstract
    
    # Connect to a host.
    # The optional second argument is the port number, which
    # defaults to the standard telnet port (23).
    # Don't try to reopen an already connected instance.
    fun open(host, port, timeout: Object) is abstract
    
    # Interaction function, emulates a very dumb telnet client.
    fun interact is abstract
    
    # Read until one from a list of a regular expressions matches.
    # This method uses select.poll() to implement the timeout.
    private fun private_expect_with_poll(expect_list, timeout: Object) is abstract
    
    # Read at least one byte of cooked data unless EOF is hit.
    # Return '' if EOF is hit.  Block if no data is immediately
    # available.
    fun read_some is abstract
    
    # Write a string to the socket, doubling any IAC characters.
    # Can block if the connection is blocked.  May raise
    # socket.error if the connection is closed.
    fun write(buffer: Object) is abstract
    
    # Constructor.
    # When called without arguments, create an unconnected instance.
    # With a hostname argument, it connects the instance; port number
    # and timeout are optional.
    init do end
    
    # Process and return data that's already in the queues (lazy).
    # Raise EOFError if connection closed and no data available.
    # Return '' if no cooked data available otherwise.  Don't block
    # unless in the midst of an IAC sequence.
    fun read_lazy is abstract
    
    # Return the socket object used internally.
    fun get_socket is abstract
    
    # Get next char from raw queue.
    # Block if no data is immediately available.  Raise EOFError
    # when connection is closed.
    fun rawq_getchar is abstract
    
    # Multithreaded version of interact().
    fun mt_interact is abstract
    
    # Read until a given string is encountered or until timeout.
    # This method uses select.poll() to implement the timeout.
    private fun private_read_until_with_poll(match, timeout: Object) is abstract
    
    # Transfer from raw queue to cooked queue.
    # Set self.eof when connection is closed.  Don't block unless in
    # the midst of an IAC sequence.
    fun process_rawq is abstract
    
    # Helper for mt_interact() -- this executes in the other thread.
    fun listener is abstract
    
    # Print a debug message, when the debug level is > 0.
    # If extra arguments are present, they are substituted in the
    # message using the standard string formatting operator.
    fun msg(msg: Object) is abstract
    
    # Return the fileno() of the socket object used internally.
    fun fileno is abstract
    
    # Read until one from a list of a regular expressions matches.
    # The timeout is implemented using select.select().
    private fun private_expect_with_select(list, timeout: Object) is abstract
    
    # Read readily available data.
    # Raise EOFError if connection closed and no cooked data
    # available.  Return '' if no cooked data available otherwise.
    # Don't block unless in the midst of an IAC sequence.
    fun read_eager is abstract
    
    # Read all data until EOF; block until connection closed.
    fun read_all is abstract
    
    # Destructor -- close the connection.
    fun del is abstract
    
    # Read everything that's possible without blocking in I/O (eager).
    # Raise EOFError if connection closed and no cooked data
    # available.  Return '' if no cooked data available otherwise.
    # Don't block unless in the midst of an IAC sequence.
    fun read_very_eager is abstract
    
    # Read until a given string is encountered or until timeout.
    # The timeout is implemented using select.select().
    private fun private_read_until_with_select(match, timeout: Object) is abstract
    
    # Read until a given string is encountered or until timeout.
    # When no match is found, return whatever is available instead,
    # possibly the empty string.  Raise EOFError if the connection
    # is closed and no cooked data is available.
    fun read_until(match, timeout: Object) is abstract
    
end

