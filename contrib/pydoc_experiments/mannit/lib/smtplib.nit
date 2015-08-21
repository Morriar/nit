# SMTP/ESMTP client class.
# This should follow RFC 821 (SMTP), RFC 1869 (ESMTP), RFC 2554 (SMTP
# Authentication) and RFC 2487 (Secure SMTP over TLS).
# Notes:
# Please remember, when doing ESMTP, that the names of the SMTP service
# extensions are NOT the same thing as the option keywords for the RCPT
# and MAIL commands!
# Example:
# >>> import smtplib
# >>> s=smtplib.SMTP("localhost")
# >>> print s.help()
# This is Sendmail version 8.8.4
# Topics:
# HELO    EHLO    MAIL    RCPT    DATA
# RSET    NOOP    QUIT    HELP    VRFY
# EXPN    VERB    ETRN    DSN
# For more info use "HELP <topic>".
# To report bugs in the implementation send email to
# sendmail-bugs@sendmail.org.
# For local information send email to Postmaster at your site.
# End of HELP info
# >>> s.putcmd("vrfy","someone@here")
# >>> s.getreply()
# (250, "Somebody OverHere <somebody@here.my.org>")
# >>> s.quit()
module smtplib

import py_socket
import ssl
import py_base64
import hmac
import re
import text
import builtins

# Sender address refused.
# In addition to the attributes set by on all SMTPResponseException
# exceptions, this sets `sender' to the string that the SMTP refused.
class SMTPSenderRefused
    super SMTPResponseException
    
    init do end
    
end

# Base class for all exceptions that include an SMTP error code.
# These exceptions are generated in some instances when the SMTP
# server returns an error code.  The error code is stored in the
# `smtp_code' attribute of the error, and the `smtp_error' attribute
# is set to the error message.
class SMTPResponseException
    super SMTPException
    
    init do end
    
end

# This is a subclass derived from SMTP that connects over an SSL
# encrypted socket (to use this class you need a socket module that was
# compiled with SSL support). If host is not specified, '' (the local
# host) is used. If port is omitted, the standard SMTP-over-SSL port
# (465) is used.  local_hostname has the same meaning as it does in the
# SMTP class.  keyfile and certfile are also optional - they can contain
# a PEM formatted private key and certificate chain file for the SSL
# connection.
class SMTP_SSL
    super SMTP
    
    init do end
    
    redef fun private_get_socket(host, port, timeout) is abstract
    
end

# Error during connection establishment.
class SMTPConnectError
    super SMTPResponseException
    
end

# All recipient addresses refused.
# The errors for each recipient are accessible through the attribute
# 'recipients', which is a dictionary of exactly the same sort as
# SMTP.sendmail() returns.
class SMTPRecipientsRefused
    super SMTPException
    
    init do end
    
end

# This class manages a connection to an SMTP or ESMTP server.
# SMTP Objects:
# SMTP objects have the following attributes:
# helo_resp
# This is the message given by the server in response to the
# most recent HELO command.
# ehlo_resp
# This is the message given by the server in response to the
# most recent EHLO command. This is usually multiline.
# does_esmtp
# This is a True value _after you do an EHLO command_, if the
# server supports ESMTP.
# esmtp_features
# This is a dictionary, which, if the server supports ESMTP,
# will _after you do an EHLO command_, contain the names of the
# SMTP service extensions this server supports, and their
# parameters (if any).
# Note, all extension names are mapped to lower case in the
# dictionary.
# See each method's docstrings for details.  In general, there is a
# method of the same name to perform each SMTP command.  There is also a
# method called 'sendmail' that will do an entire mail transaction.
class SMTP
    
    # SMTP 'ehlo' command.
    # Hostname to send for this command defaults to the FQDN of the local
    # host.
    fun ehlo(name: Object) is abstract
    
    # SMTP 'help' command.
    # Returns help text from server.
    fun help(args: Object) is abstract
    
    # Puts the connection to the SMTP server into TLS mode.
    # If there has been no previous EHLO or HELO command this session, this
    # method tries ESMTP EHLO first.
    # If the server supports TLS, this will encrypt the rest of the SMTP
    # session. If you provide the keyfile and certfile parameters,
    # the identity of the SMTP server and client can be checked. This,
    # however, depends on whether the socket module really checks the
    # certificates.
    # This method may raise the following exceptions:
    # SMTPHeloError            The server didn't reply properly to
    # the helo greeting.
    fun starttls(keyfile, certfile: Object) is abstract
    
    # Set the debug output level.
    # A non-false value results in debug messages for connection and for all
    # messages sent to and received from the server.
    fun set_debuglevel(debuglevel: Object) is abstract
    
    # Send `str' to the server.
    fun send(str: Object) is abstract
    
    private fun private_get_socket(host, port, timeout: Object) is abstract
    
    # Close the connection to the SMTP server.
    fun close is abstract
    
    # SMTP 'helo' command.
    # Hostname to send for this command defaults to the FQDN of the local
    # host.
    fun helo(name: Object) is abstract
    
    # Terminate the SMTP session.
    fun quit is abstract
    
    # SMTP 'verify' command -- checks for address validity.
    fun verify(address: Object) is abstract
    
    # SMTP 'rset' command -- resets session.
    fun rset is abstract
    
    # Get a reply from the server.
    # Returns a tuple consisting of:
    # - server response code (e.g. '250', or such, if all goes well)
    # Note: returns -1 if it can't read response code.
    # - server response string corresponding to response code (multiline
    # responses are converted to a single, multiline string).
    # Raises SMTPServerDisconnected if end-of-file is reached.
    fun getreply is abstract
    
    # Initialize a new instance.
    # If specified, `host' is the name of the remote host to which to
    # connect.  If specified, `port' specifies the port to which to connect.
    # By default, smtplib.SMTP_PORT is used.  If a host is specified the
    # connect method is called, and if it returns anything other than a
    # success code an SMTPConnectError is raised.  If specified,
    # `local_hostname` is used as the FQDN of the local host for the
    # HELO/EHLO command.  Otherwise, the local hostname is found using
    # socket.getfqdn().
    init do end
    
    # SMTP 'noop' command -- doesn't do anything :>
    fun noop is abstract
    
    # SMTP 'mail' command -- begins mail xfer session.
    fun mail(sender, options: Object) is abstract
    
    # SMTP 'rcpt' command -- indicates 1 recipient for this mail.
    fun rcpt(recip, options: Object) is abstract
    
    # This command performs an entire mail transaction.
    # The arguments are:
    # - from_addr    : The address sending this mail.
    # - to_addrs     : A list of addresses to send this mail to.  A bare
    # string will be treated as a list with 1 address.
    # - msg          : The message to send.
    # - mail_options : List of ESMTP options (such as 8bitmime) for the
    # mail command.
    # - rcpt_options : List of ESMTP options (such as DSN commands) for
    # all the rcpt commands.
    # If there has been no previous EHLO or HELO command this session, this
    # method tries ESMTP EHLO first.  If the server does ESMTP, message size
    # and each of the specified options will be passed to it.  If EHLO
    # fails, HELO will be tried and ESMTP options suppressed.
    # This method will return normally if the mail is accepted for at least
    # one recipient.  It returns a dictionary, with one entry for each
    # recipient that was refused.  Each entry contains a tuple of the SMTP
    # error code and the accompanying error message sent by the server.
    # This method may raise the following exceptions:
    # SMTPHeloError          The server didn't reply properly to
    # the helo greeting.
    # SMTPRecipientsRefused  The server rejected ALL recipients
    # (no mail was sent).
    # SMTPSenderRefused      The server didn't accept the from_addr.
    # SMTPDataError          The server replied with an unexpected
    # error code (other than a refusal of
    # a recipient).
    # Note: the connection will be open even after an exception is raised.
    # Example:
    # >>> import smtplib
    # >>> s=smtplib.SMTP("localhost")
    # >>> tolist=["one@one.org","two@two.org","three@three.org","four@four.org"]
    # >>> msg = '''\
    # ... From: Me@my.org
    # ... Subject: testin'...
    # ...
    # ... This is a test '''
    # >>> s.sendmail("me@my.org",tolist,msg)
    # { "three@three.org" : ( 550 ,"User unknown" ) }
    # >>> s.quit()
    # In the above example, the message was accepted for delivery to three
    # of the four addresses, and one was rejected, with the error code
    # 550.  If all addresses are accepted, then the method will return an
    # empty dictionary.
    fun sendmail(msg, rcpt_options, to_addrs, mail_options, from_addr: Object) is abstract
    
    # Send a command to the server.
    fun putcmd(cmd, args: Object) is abstract
    
    # Send a command, and return its response code.
    fun docmd(cmd, args: Object) is abstract
    
    # SMTP 'DATA' command -- sends message data to server.
    # Automatically quotes lines beginning with a period per rfc821.
    # Raises SMTPDataError if there is an unexpected reply to the
    # DATA command; the return value from this method is the final
    # response code received when the all data is sent.
    fun data(msg: Object) is abstract
    
    # Call self.ehlo() and/or self.helo() if needed.
    # If there has been no previous EHLO or HELO command this session, this
    # method tries ESMTP EHLO first.
    # This method may raise the following exceptions:
    # SMTPHeloError            The server didn't reply properly to
    # the helo greeting.
    fun ehlo_or_helo_if_needed is abstract
    
    # Does the server support a given SMTP service extension?
    fun has_extn(opt: Object) is abstract
    
    # SMTP 'expn' command -- expands a mailing list.
    fun expn(address: Object) is abstract
    
    # Log in on an SMTP server that requires authentication.
    # The arguments are:
    # - user:     The user name to authenticate with.
    # - password: The password for the authentication.
    # If there has been no previous EHLO or HELO command this session, this
    # method tries ESMTP EHLO first.
    # This method will return normally if the authentication was successful.
    # This method may raise the following exceptions:
    # SMTPHeloError            The server didn't reply properly to
    # the helo greeting.
    # SMTPAuthenticationError  The server didn't accept the username/
    # password combination.
    # SMTPException            No suitable authentication method was
    # found.
    fun login(password, user: Object) is abstract
    
    # Connect to a host on a given port.
    # If the hostname ends with a colon (`:') followed by a number, and
    # there is no port specified, that suffix will be stripped off and the
    # number interpreted as the port number to use.
    # Note: This method is automatically invoked by __init__, if a host is
    # specified during instantiation.
    fun connect(host, port: Object) is abstract
    
end

# Base class for all exceptions raised by this module.
class SMTPException
    super Exception
    
end

redef class Sys
    
end

# The server refused our HELO reply.
class SMTPHeloError
    super SMTPResponseException
    
end

# Not connected to any SMTP server.
# This exception is raised when the server unexpectedly disconnects,
# or when an attempt is made to use the SMTP instance before
# connecting it to a server.
class SMTPServerDisconnected
    super SMTPException
    
end

# Authentication error.
# Most probably the server didn't accept the username/password
# combination provided.
class SMTPAuthenticationError
    super SMTPResponseException
    
end

# A fake file like object that really wraps a SSLObject.
# It only supports what is needed in smtplib.
class SSLFakeFile
    
    fun close is abstract
    
    fun readline(size: Object) is abstract
    
    init do end
    
end

# LMTP - Local Mail Transfer Protocol
# The LMTP protocol, which is very similar to ESMTP, is heavily based
# on the standard SMTP client. It's common to use Unix sockets for
# LMTP, so our connect() method must support that as well as a regular
# host:port server.  local_hostname has the same meaning as it does in
# the SMTP class.  To specify a Unix socket, you must use an absolute
# path as the host, starting with a '/'.
# Authentication is supported, using the regular SMTP mechanism. When
# using a Unix socket, LMTP generally don't support or require any
# authentication, but your mileage might vary.
class LMTP
    super SMTP
    
    # Initialize a new instance.
    init do end
    
    # Connect to the LMTP daemon, on either a Unix or a TCP socket.
    redef fun connect(host, port) is abstract
    
end

# The SMTP server didn't accept the data.
class SMTPDataError
    super SMTPResponseException
    
end

