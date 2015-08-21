# An RFC 2821 smtp proxy.
# Usage: %(program)s [options] [localhost:localport [remotehost:remoteport]]
# Options:
# --nosetuid
# -n
# This program generally tries to setuid `nobody', unless this flag is
# set.  The setuid call will fail if this program is not run as root (in
# which case, use this flag).
# --version
# -V
# Print the version number and exit.
# --class classname
# -c classname
# Use `classname' as the concrete SMTP proxy class.  Uses `PureProxy' by
# default.
# --debug
# -d
# Turn on debugging prints.
# --help
# -h
# Print this message and exit.
# Version: %(__version__)s
# If localhost is not given then `localhost' is used, and if localport is not
# given then 8025 is used.  If remotehost is not given then `localhost' is used,
# and if remoteport is not given, then 25 is used.
module smtpd

import asynchat
import asyncore
import py_socket
import errno
import sys
import time
import getopt
import os
import builtins

class MailmanProxy
    super PureProxy
    
    redef fun process_message(peer, mailfrom, rcpttos, data) is abstract
    
end

class PureProxy
    super SMTPServer
    
    redef fun process_message(peer, mailfrom, rcpttos, data) is abstract
    
    private fun private_deliver(mailfrom, rcpttos, data: Object) is abstract
    
end

redef class Sys
    
end

class Devnull
    
    fun write(msg: Object) is abstract
    
    fun flush is abstract
    
end

class SMTPChannel
    super Async_chat
    
    init do end
    
    fun smtp_noop(arg: Object) is abstract
    
    fun smtp_helo(arg: Object) is abstract
    
    fun smtp_rcpt(arg: Object) is abstract
    
    redef fun collect_incoming_data(data) is abstract
    
    fun smtp_data(arg: Object) is abstract
    
    redef fun push(data) is abstract
    
    fun getaddr(keyword, arg: Object) is abstract
    
    fun smtp_mail(arg: Object) is abstract
    
    redef fun found_terminator is abstract
    
    fun smtp_rset(arg: Object) is abstract
    
    fun smtp_quit(arg: Object) is abstract
    
end

class SMTPServer
    super Dispatcher
    
    redef fun handle_accept is abstract
    
    # Override this abstract method to handle messages from the client.
    # peer is a tuple containing (ipaddr, port) of the client that made the
    # socket connection to our smtp port.
    # mailfrom is the raw address the client claims the message is coming
    # from.
    # rcpttos is a list of raw addresses the client wishes to deliver the
    # message to.
    # data is a string containing the entire full text of the message,
    # headers (if supplied) and all.  It has been `de-transparencied'
    # according to RFC 821, Section 4.5.2.  In other words, a line
    # containing a `.' followed by other text has had the leading dot
    # removed.
    # This function should return None, for a normal `250 Ok' response;
    # otherwise it returns the desired response string in RFC 821 format.
    fun process_message(peer, mailfrom, rcpttos, data: Object) is abstract
    
    init do end
    
end

class Options
    
end

class DebuggingServer
    super SMTPServer
    
    redef fun process_message(peer, mailfrom, rcpttos, data) is abstract
    
end

