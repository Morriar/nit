# IMAP4 client.
# Based on RFC 2060.
# Public class:           IMAP4
# Public variable:        Debug
# Public functions:       Internaldate2tuple
# Int2AP
# ParseFlags
# Time2Internaldate
module imaplib

import py_socket
import re
import errno
import random
import binascii
import subprocess
import sys
import ssl
import time
import builtins

redef class Sys
    
end

# IMAP4 client class over SSL connection
# Instantiate with: IMAP4_SSL([host[, port[, keyfile[, certfile]]]])
# host - host's name (default: localhost);
# port - port number (default: standard IMAP4 SSL port).
# keyfile - PEM formatted file that contains your private key (default: None);
# certfile - PEM formatted certificate chain file (default: None);
# for more documentation see the docstring of the parent class IMAP4.
class IMAP4_SSL
    super IMAP4
    
    # Return socket instance used to connect to IMAP4 server.
    # socket = <instance>.socket()
    redef fun py_socket is abstract
    
    # Read 'size' bytes from remote.
    redef fun read(size) is abstract
    
    # Send data to remote.
    redef fun send(data) is abstract
    
    # Return SSLObject instance used to communicate with the IMAP4 server.
    # ssl = ssl.wrap_socket(<instance>.socket)
    fun ssl is abstract
    
    init do end
    
    # Close I/O established in "open".
    redef fun shutdown is abstract
    
    # Read line from remote.
    redef fun readline is abstract
    
    # Setup connection to remote server on "host:port".
    # (default: localhost:standard IMAP4 SSL port).
    # This connection will be used by the routines:
    # read, readline, send, shutdown.
    redef fun open(host, port) is abstract
    
end

# IMAP4 client class.
# Instantiate with: IMAP4([host[, port]])
# host - host's name (default: localhost);
# port - port number (default: standard IMAP4 port).
# All IMAP4rev1 commands are supported by methods of the same
# name (in lower-case).
# All arguments to commands are converted to strings, except for
# AUTHENTICATE, and the last argument to APPEND which is passed as
# an IMAP4 literal.  If necessary (the string contains any
# non-printing characters or white-space and isn't enclosed with
# either parentheses or double quotes) each string is quoted.
# However, the 'password' argument to the LOGIN command is always
# quoted.  If you want to avoid having an argument string quoted
# (eg: the 'flags' argument to STORE) then enclose the string in
# parentheses (eg: "(\Deleted)").
# Each command returns a tuple: (type, [data, ...]) where 'type'
# is usually 'OK' or 'NO', and 'data' is either the text from the
# tagged response, or untagged results from command. Each 'data'
# is either a string, or a tuple. If a tuple, then the first part
# is the header of the response, and the second part contains
# the data (ie: 'literal' value).
# Errors raise the exception class <instance>.error("<reason>").
# IMAP4 server errors raise <instance>.abort("<reason>"),
# which is a sub-class of 'error'. Mailbox status changes
# from READ-WRITE to READ-ONLY raise the exception class
# <instance>.readonly("<reason>"), which is a sub-class of 'abort'.
# "error" exceptions imply a program error.
# "abort" exceptions imply the connection should be reset, and
# the command re-tried.
# "readonly" exceptions imply the command should be re-tried.
# Note: to use this module, you must read the RFCs pertaining to the
# IMAP4 protocol, as the semantics of the arguments to each IMAP4
# command are left to the invoker, not to mention the results. Also,
# most IMAP servers implement a sub-set of the commands available here.
class IMAP4
    
    # Rename old mailbox name to new.
    # (typ, [data]) = <instance>.rename(oldmailbox, newmailbox)
    fun rename(oldmailbox, newmailbox: Object) is abstract
    
    # Get the list of quota roots for the named mailbox.
    # (typ, [[QUOTAROOT responses...], [QUOTA responses]]) = <instance>.getquotaroot(mailbox)
    fun getquotaroot(mailbox: Object) is abstract
    
    # Get the quota root's resource usage and limits.
    # Part of the IMAP4 QUOTA extension defined in rfc2087.
    # (typ, [data]) = <instance>.getquota(root)
    fun getquota(root: Object) is abstract
    
    # Execute "command arg ..." with messages identified by UID,
    # rather than message number.
    # (typ, [data]) = <instance>.uid(command, arg1, arg2, ...)
    # Returns response appropriate to 'command'.
    fun uid(command: Object) is abstract
    
    # Get the ACLs for a mailbox.
    # (typ, [data]) = <instance>.getacl(mailbox)
    fun getacl(mailbox: Object) is abstract
    
    private fun private_mesg(secs, s: Object) is abstract
    
    # Return socket instance used to connect to IMAP4 server.
    # socket = <instance>.socket()
    fun py_socket is abstract
    
    # Allow simple extension commands
    # notified by server in CAPABILITY response.
    # Assumes command is legal in current state.
    # (typ, [data]) = <instance>.xatom(name, arg, ...)
    # Returns response appropriate to extension command `name'.
    fun xatom(name: Object) is abstract
    
    # Read line from remote.
    fun readline is abstract
    
    # Subscribe to new mailbox.
    # (typ, [data]) = <instance>.subscribe(mailbox)
    fun subscribe(mailbox: Object) is abstract
    
    # Delete the ACLs (remove any rights) set for who on mailbox.
    # (typ, [data]) = <instance>.deleteacl(mailbox, who)
    fun deleteacl(who, mailbox: Object) is abstract
    
    private fun private_untagged_response(dat, typ, name: Object) is abstract
    
    # Close I/O established in "open".
    fun shutdown is abstract
    
    # Close currently selected mailbox.
    # Deleted messages are removed from writable mailbox.
    # This is the recommended command before 'LOGOUT'.
    # (typ, [data]) = <instance>.close()
    fun close is abstract
    
    # Setup connection to remote server on "host:port"
    # (default: localhost:standard IMAP4 port).
    # This connection will be used by the routines:
    # read, readline, send, shutdown.
    fun open(host, port: Object) is abstract
    
    # Checkpoint mailbox on server.
    # (typ, [data]) = <instance>.check()
    fun check is abstract
    
    # Append message to named mailbox.
    # (typ, [data]) = <instance>.append(mailbox, flags, date_time, message)
    # All args except `message' can be None.
    fun append(date_time, message, flags, mailbox: Object) is abstract
    
    # Authenticate command - requires response processing.
    # 'mechanism' specifies which authentication mechanism is to
    # be used - it must appear in <instance>.capabilities in the
    # form AUTH=<mechanism>.
    # 'authobject' must be a callable object:
    # data = authobject(response)
    # It will be called to process server continuation responses.
    # It should return data that will be encoded and sent to server.
    # It should return None if the client abort response '*' should
    # be sent instead.
    fun authenticate(authobject, mechanism: Object) is abstract
    
    # Force use of CRAM-MD5 authentication.
    # (typ, [data]) = <instance>.login_cram_md5(user, password)
    fun login_cram_md5(password, user: Object) is abstract
    
    private fun private_dump_ur(dict: Object) is abstract
    
    # Create new mailbox.
    # (typ, [data]) = <instance>.create(mailbox)
    fun create(mailbox: Object) is abstract
    
    # Returns IMAP namespaces ala rfc2342
    # (typ, [data, ...]) = <instance>.namespace()
    fun namespace is abstract
    
    fun getattr(attr: Object) is abstract
    
    # Send data to remote.
    fun send(data: Object) is abstract
    
    # Authobject to use with CRAM-MD5 authentication.
    private fun private_cram_md5_auth(challenge: Object) is abstract
    
    private fun private_checkquote(arg: Object) is abstract
    
    # Send NOOP command.
    # (typ, [data]) = <instance>.noop()
    fun noop is abstract
    
    # Select a mailbox.
    # Flush all untagged responses.
    # (typ, [data]) = <instance>.select(mailbox='INBOX', readonly=False)
    # 'data' is count of messages in mailbox ('EXISTS' response).
    # Mandated responses are ('FLAGS', 'EXISTS', 'RECENT', 'UIDVALIDITY'), so
    # other responses should be obtained via <instance>.response('FLAGS') etc.
    fun select(readonly, mailbox: Object) is abstract
    
    private fun private_match(s, cre: Object) is abstract
    
    private fun private_get_line is abstract
    
    private fun private_get_response is abstract
    
    # Set the quota root's resource limits.
    # (typ, [data]) = <instance>.setquota(root, limits)
    fun setquota(root, limits: Object) is abstract
    
    private fun private_log(line: Object) is abstract
    
    # Show my ACLs for a mailbox (i.e. the rights that I have on mailbox).
    # (typ, [data]) = <instance>.myrights(mailbox)
    fun myrights(mailbox: Object) is abstract
    
    private fun private_command(name: Object) is abstract
    
    private fun private_quote(arg: Object) is abstract
    
    private fun private_get_tagged_response(tag: Object) is abstract
    
    private fun private_append_untagged(dat, typ: Object) is abstract
    
    # IMAP4rev1 extension SORT command.
    # (typ, [data]) = <instance>.sort(sort_criteria, charset, search_criteria, ...)
    fun sort(charset, sort_criteria: Object) is abstract
    
    # Assume authentication as "user".
    # Allows an authorised administrator to proxy into any user's
    # mailbox.
    # (typ, [data]) = <instance>.proxyauth(user)
    fun proxyauth(user: Object) is abstract
    
    # Shutdown connection to server.
    # (typ, [data]) = <instance>.logout()
    # Returns server 'BYE' response.
    fun logout is abstract
    
    # Fetch truncated part of a message.
    # (typ, [data, ...]) = <instance>.partial(message_num, message_part, start, length)
    # 'data' is tuple of message part envelope and data.
    fun partial(start, length, message_num, message_part: Object) is abstract
    
    # List 'subscribed' mailbox names in directory matching pattern.
    # (typ, [data, ...]) = <instance>.lsub(directory='""', pattern='*')
    # 'data' are tuples of message part envelope and data.
    fun lsub(directory, pattern: Object) is abstract
    
    fun print_log is abstract
    
    private fun private_check_bye is abstract
    
    # (typ, [data]) = <instance>.setannotation(mailbox[, entry, attribute]+)
    # Set ANNOTATIONs.
    fun setannotation is abstract
    
    # Copy 'message_set' messages onto end of 'new_mailbox'.
    # (typ, [data]) = <instance>.copy(message_set, new_mailbox)
    fun copy(message_set, new_mailbox: Object) is abstract
    
    # Return data for response 'code' if received, or None.
    # Old value for response 'code' is cleared.
    # (code, [data]) = <instance>.response(code)
    fun response(code: Object) is abstract
    
    # Return most recent 'RECENT' responses if any exist,
    # else prompt server for an update using the 'NOOP' command.
    # (typ, [data]) = <instance>.recent()
    # 'data' is None if no new messages,
    # else list of RECENT responses, most recent last.
    fun recent is abstract
    
    # Search mailbox for matching messages.
    # (typ, [data]) = <instance>.search(charset, criterion, ...)
    # 'data' is space separated list of matching message numbers.
    fun search(charset: Object) is abstract
    
    init do end
    
    # IMAPrev1 extension THREAD command.
    # (type, [data]) = <instance>.thread(threading_algorithm, charset, search_criteria, ...)
    fun thread(charset, threading_algorithm: Object) is abstract
    
    private fun private_simple_command(name: Object) is abstract
    
    # Permanently remove deleted items from selected mailbox.
    # Generates 'EXPUNGE' response for each deleted message.
    # (typ, [data]) = <instance>.expunge()
    # 'data' is list of 'EXPUNGE'd message numbers in order received.
    fun expunge is abstract
    
    # Read 'size' bytes from remote.
    fun read(size: Object) is abstract
    
    # Set a mailbox acl.
    # (typ, [data]) = <instance>.setacl(mailbox, who, what)
    fun setacl(what, who, mailbox: Object) is abstract
    
    # List mailbox names in directory matching pattern.
    # (typ, [data]) = <instance>.list(directory='""', pattern='*')
    # 'data' is list of LIST responses.
    fun list(directory, pattern: Object) is abstract
    
    # (typ, [data]) = <instance>.capability()
    # Fetch capabilities list from server.
    fun capability is abstract
    
    # Request named status conditions for mailbox.
    # (typ, [data]) = <instance>.status(mailbox, names)
    fun status(names, mailbox: Object) is abstract
    
    # Alters flag dispositions for messages in mailbox.
    # (typ, [data]) = <instance>.store(message_set, command, flags)
    fun store(command, message_set, flags: Object) is abstract
    
    private fun private_new_tag is abstract
    
    # Unsubscribe from old mailbox.
    # (typ, [data]) = <instance>.unsubscribe(mailbox)
    fun unsubscribe(mailbox: Object) is abstract
    
    # Identify client using plaintext password.
    # (typ, [data]) = <instance>.login(user, password)
    # NB: 'password' will be quoted.
    fun login(password, user: Object) is abstract
    
    # Delete old mailbox.
    # (typ, [data]) = <instance>.delete(mailbox)
    fun delete(mailbox: Object) is abstract
    
    # Fetch (parts of) messages.
    # (typ, [data, ...]) = <instance>.fetch(message_set, message_parts)
    # 'message_parts' should be a string of selected parts
    # enclosed in parentheses, eg: "(UID BODY[TEXT])".
    # 'data' are tuples of message part envelope and data.
    fun fetch(message_set, message_parts: Object) is abstract
    
    # (typ, [data]) = <instance>.getannotation(mailbox, entry, attribute)
    # Retrieve ANNOTATIONs.
    fun getannotation(attribute, mailbox, entry: Object) is abstract
    
    private fun private_command_complete(tag, name: Object) is abstract
    
end

# IMAP4 client class over a stream
# Instantiate with: IMAP4_stream(command)
# where "command" is a string that can be passed to subprocess.Popen()
# for more documentation see the docstring of the parent class IMAP4.
class IMAP4_stream
    super IMAP4
    
    # Read 'size' bytes from remote.
    redef fun read(size) is abstract
    
    # Send data to remote.
    redef fun send(data) is abstract
    
    init do end
    
    # Close I/O established in "open".
    redef fun shutdown is abstract
    
    # Read line from remote.
    redef fun readline is abstract
    
    # Setup a stream connection.
    # This connection will be used by the routines:
    # read, readline, send, shutdown.
    redef fun open(host, port) is abstract
    
end

# Private class to provide en/decoding
# for base64-based authentication conversation.
private class Authenticator
    
    fun process(data: Object) is abstract
    
    fun decode(inp: Object) is abstract
    
    init do end
    
    fun encode(inp: Object) is abstract
    
end

