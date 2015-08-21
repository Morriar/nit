# An NNTP client class based on RFC 977: Network News Transfer Protocol.
# Example:
# >>> from nntplib import NNTP
# >>> s = NNTP('news')
# >>> resp, count, first, last, name = s.group('comp.lang.python')
# >>> print 'Group', name, 'has', count, 'articles, range', first, 'to', last
# Group comp.lang.python has 51 articles, range 5770 to 5821
# >>> resp, subs = s.xhdr('subject', first + '-' + last)
# >>> resp = s.quit()
# >>>
# Here 'resp' is the server response line.
# Error responses are turned into exceptions.
# To post an article from a file:
# >>> f = open(filename, 'r') # file containing article, including header
# >>> resp = s.post(f)
# >>>
# For descriptions of all methods, read the comments in the code below.
# Note that all arguments and return values representing article numbers
# are strings, not numbers, since they are rarely used for calculations.
module nntplib

import re
import py_socket
import builtins

# Unexpected [123]xx reply
class NNTPReplyError
    super NNTPError
    
end

# 5xx errors
class NNTPPermanentError
    super NNTPError
    
end

# Base class for all nntplib exceptions
class NNTPError
    super Exception
    
    init do end
    
end

# 4xx errors
class NNTPTemporaryError
    super NNTPError
    
end

# Error in response data
class NNTPDataError
    super NNTPError
    
end

redef class Sys
    
end

class NNTP
    
    # Process a BODY command.  Argument:
    # - id: article number or message id
    # - file: Filename string or file object to store the article in
    # Returns:
    # - resp: server response if successful
    # - nr: article number
    # - id: message id
    # - list: the lines of the article's body or an empty list
    # if file was used
    fun body(id, file: Object) is abstract
    
    # Process a HELP command.  Returns:
    # - resp: server response if successful
    # - list: list of strings
    fun help(file: Object) is abstract
    
    # Set the debugging level.  Argument 'level' means:
    # 0: no debugging output (default)
    # 1: print commands and responses but not body text etc.
    # 2: also print raw lines read and sent before stripping CR/LF
    fun set_debuglevel(level: Object) is abstract
    
    # Internal: send a command and get the response plus following text.
    fun longcmd(line, file: Object) is abstract
    
    # Process an XOVER command (optional server extension) Arguments:
    # - start: start of range
    # - end: end of range
    # Returns:
    # - resp: server response if successful
    # - list: list of (art-nr, subject, poster, date,
    # id, references, size, lines)
    fun xover(start, py_end, file: Object) is abstract
    
    # Get descriptions for a range of groups.
    fun descriptions(group_pattern: Object) is abstract
    
    # Internal: process a STAT, NEXT or LAST command.
    fun statcmd(line: Object) is abstract
    
    # Process a POST command.  Arguments:
    # - f: file containing the article
    # Returns:
    # - resp: server response if successful
    fun post(f: Object) is abstract
    
    # Process a QUIT command and close the socket.  Returns:
    # - resp: server response if successful
    fun quit is abstract
    
    # Get the welcome message from the server
    # (this is read and squirreled away by __init__()).
    # If the response code is 200, posting is allowed;
    # if it 201, posting is not allowed.
    fun getwelcome is abstract
    
    # Process a GROUP command.  Argument:
    # - group: the group name
    # Returns:
    # - resp: server response if successful
    # - count: number of articles (string)
    # - first: first article number (string)
    # - last: last article number (string)
    # - name: the group name
    fun group(name: Object) is abstract
    
    # Process an XGTITLE command (optional server extension) Arguments:
    # - group: group name wildcard (i.e. news.*)
    # Returns:
    # - resp: server response if successful
    # - list: list of (name,title) strings
    fun xgtitle(group, file: Object) is abstract
    
    # Process a NEXT command.  No arguments.  Return as for STAT.
    fun next is abstract
    
    # Initialize an instance.  Arguments:
    # - host: hostname to connect to
    # - port: port to connect to (default the standard NNTP port)
    # - user: username to authenticate with
    # - password: password to use with username
    # - readermode: if true, send 'mode reader' command after
    # connecting.
    # readermode is sometimes necessary if you are connecting to an
    # NNTP server on the local machine and intend to call
    # reader-specific commands, such as `group'.  If you get
    # unexpected NNTPPermanentErrors, you might need to set
    # readermode.
    init do end
    
    # Process an XHDR command (optional server extension).  Arguments:
    # - hdr: the header type (e.g. 'subject')
    # - str: an article nr, a message id, or a range nr1-nr2
    # Returns:
    # - resp: server response if successful
    # - list: list of (nr, value) strings
    fun xhdr(str, hdr, file: Object) is abstract
    
    # Internal: return one line from the server, stripping CRLF.
    # Raise EOFError if the connection is closed.
    fun getline is abstract
    
    # Internal: parse the response of a STAT, NEXT or LAST command.
    fun statparse(resp: Object) is abstract
    
    # Process an XPATH command (optional server extension) Arguments:
    # - id: Message id of article
    # Returns:
    # resp: server response if successful
    # path: directory path to article
    fun xpath(id: Object) is abstract
    
    # Process a STAT command.  Argument:
    # - id: article number or message id
    # Returns:
    # - resp: server response if successful
    # - nr:   the article number
    # - id:   the message id
    fun stat(id: Object) is abstract
    
    # Process a SLAVE command.  Returns:
    # - resp: server response if successful
    fun slave is abstract
    
    # Get a description for a single group.  If more than one
    # group matches ('group' is a pattern), return the first.  If no
    # group matches, return an empty string.
    # This elides the response code from the server, since it can
    # only be '215' or '285' (for xgtitle) anyway.  If the response
    # code is needed, use the 'descriptions' method.
    # NOTE: This neither checks for a wildcard in 'group' nor does
    # it check whether the group actually exists.
    fun description(group: Object) is abstract
    
    # Internal: get a response plus following text from the server.
    # Raise various errors if the response indicates an error.
    fun getlongresp(file: Object) is abstract
    
    # Internal: process a HEAD, BODY or ARTICLE command.
    fun artcmd(line, file: Object) is abstract
    
    # Internal: send one command to the server (through putline()).
    fun putcmd(line: Object) is abstract
    
    # Process the DATE command. Arguments:
    # None
    # Returns:
    # resp: server response if successful
    # date: Date suitable for newnews/newgroups commands etc.
    # time: Time suitable for newnews/newgroups commands etc.
    fun date is abstract
    
    # Process an ARTICLE command.  Argument:
    # - id: article number or message id
    # Returns:
    # - resp: server response if successful
    # - nr: article number
    # - id: message id
    # - list: the lines of the article
    fun article(id: Object) is abstract
    
    # Process an IHAVE command.  Arguments:
    # - id: message-id of the article
    # - f:  file containing the article
    # Returns:
    # - resp: server response if successful
    # Note that if the server refuses the article an exception is raised.
    fun ihave(id, f: Object) is abstract
    
    # Process a LAST command.  No arguments.  Return as for STAT.
    fun last is abstract
    
    # Process a NEWNEWS command.  Arguments:
    # - group: group name or '*'
    # - date: string 'yymmdd' indicating the date
    # - time: string 'hhmmss' indicating the time
    # Return:
    # - resp: server response if successful
    # - list: list of message ids
    fun newnews(date, group, file, time: Object) is abstract
    
    # Process a LIST command.  Return:
    # - resp: server response if successful
    # - list: list of (group, last, first, flag) (strings)
    fun list(file: Object) is abstract
    
    # Internal: send a command and get the response.
    fun shortcmd(line: Object) is abstract
    
    # Process a NEWGROUPS command.  Arguments:
    # - date: string 'yymmdd' indicating the date
    # - time: string 'hhmmss' indicating the time
    # Return:
    # - resp: server response if successful
    # - list: list of newsgroup names
    fun newgroups(date, file, time: Object) is abstract
    
    # Process a HEAD command.  Argument:
    # - id: article number or message id
    # Returns:
    # - resp: server response if successful
    # - nr: article number
    # - id: message id
    # - list: the lines of the article's header
    fun head(id: Object) is abstract
    
    # Internal: get a response from the server.
    # Raise various errors if the response indicates an error.
    fun getresp is abstract
    
    # Internal: send one line to the server, appending CRLF.
    fun putline(line: Object) is abstract
    
end

# Response does not begin with [1-5]
class NNTPProtocolError
    super NNTPError
    
end

