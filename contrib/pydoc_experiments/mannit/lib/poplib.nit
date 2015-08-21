# A POP3 client class.
# Based on the J. Myers POP3 draft, Jan. 96
module poplib

import re
import py_socket
import ssl
import builtins

redef class Sys
    
end

# This class supports both the minimal and optional command sets.
# Arguments can be strings or integers (where appropriate)
# (e.g.: retr(1) and retr('1') both work equally well.
# Minimal Command Set:
# USER name               user(name)
# PASS string             pass_(string)
# STAT                    stat()
# LIST [msg]              list(msg = None)
# RETR msg                retr(msg)
# DELE msg                dele(msg)
# NOOP                    noop()
# RSET                    rset()
# QUIT                    quit()
# Optional Commands (some servers support these):
# RPOP name               rpop(name)
# APOP name digest        apop(name, digest)
# TOP msg n               top(msg, n)
# UIDL [msg]              uidl(msg = None)
# Raises one exception: 'error_proto'.
# Instantiate with:
# POP3(hostname, port=110)
# NB:     the POP protocol locks the mailbox from user
# authorization until QUIT, so be sure to get in, suck
# the messages, and quit, each time you access the
# mailbox.
# POP is a line-based protocol, which means large mail
# messages consume lots of python cycles reading them
# line-by-line.
# If it's available on your mail server, use IMAP4
# instead, it doesn't suffer from the two problems
# above.
class POP3
    
    private fun private_putline(line: Object) is abstract
    
    private fun private_getline is abstract
    
    fun set_debuglevel(level: Object) is abstract
    
    # Signoff: commit changes on server, unlock mailbox, close connection.
    fun quit is abstract
    
    fun getwelcome is abstract
    
    # Send password, return response
    # (response includes message count, mailbox size).
    # NB: mailbox is locked by server from here to 'quit()'
    fun pass_(pswd: Object) is abstract
    
    # Retrieve message header of message number 'which'
    # and first 'howmuch' lines of message body.
    # Result is in form ['response', ['line', ...], octets].
    fun top(howmuch, which: Object) is abstract
    
    # Unmark all messages marked for deletion.
    fun rset is abstract
    
    # Retrieve whole message number 'which'.
    # Result is in form ['response', ['line', ...], octets].
    fun retr(which: Object) is abstract
    
    init do end
    
    # Does nothing.
    # One supposes the response indicates the server is alive.
    fun noop is abstract
    
    # Authorisation
    # - only possible if server has supplied a timestamp in initial greeting.
    # Args:
    # user    - mailbox user;
    # secret  - secret shared between client and server.
    # NB: mailbox is locked by server from here to 'quit()'
    fun apop(secret, user: Object) is abstract
    
    private fun private_getlongresp is abstract
    
    # Get mailbox status.
    # Result is tuple of 2 ints (message count, mailbox size)
    fun stat is abstract
    
    # Delete message number 'which'.
    # Result is 'response'.
    fun dele(which: Object) is abstract
    
    private fun private_getresp is abstract
    
    # Send user name, return response
    # (should indicate password required).
    fun user(user: Object) is abstract
    
    private fun private_putcmd(line: Object) is abstract
    
    private fun private_shortcmd(line: Object) is abstract
    
    # Not sure what this does.
    fun rpop(user: Object) is abstract
    
    private fun private_longcmd(line: Object) is abstract
    
    # Request listing, return result.
    # Result without a message number argument is in form
    # ['response', ['mesg_num octets', ...], octets].
    # Result when a message number argument is given is a
    # single response: the "scan listing" for that message.
    fun list(which: Object) is abstract
    
    # Return message digest (unique id) list.
    # If 'which', result contains unique id for that message
    # in the form 'response mesgnum uid', otherwise result is
    # the list ['response', ['mesgnum uid', ...], octets]
    fun uidl(which: Object) is abstract
    
end

# POP3 client class over SSL connection
# Instantiate with: POP3_SSL(hostname, port=995, keyfile=None, certfile=None)
# hostname - the hostname of the pop3 over ssl server
# port - port number
# keyfile - PEM formatted file that contains your private key
# certfile - PEM formatted certificate chain file
# See the methods of the parent class POP3 for more documentation.
class POP3_SSL
    super POP3
    
    # Signoff: commit changes on server, unlock mailbox, close connection.
    redef fun quit is abstract
    
    redef fun private_putline(line) is abstract
    
    private fun private_fillbuffer is abstract
    
    init do end
    
    redef fun private_getline is abstract
    
end

class Error_proto
    super Exception
    
end

