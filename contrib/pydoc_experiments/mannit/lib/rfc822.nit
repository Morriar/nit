# RFC 2822 message manipulation.
# Note: This is only a very rough sketch of a full RFC-822 parser; in particular
# the tokenizing of addresses does not adhere to all the quoting rules.
# Note: RFC 2822 is a long awaited update to RFC 822.  This module should
# conform to RFC 2822, and is thus mis-named (it's not worth renaming it).  Some
# effort at RFC 2822 updates have been made, but a thorough audit has not been
# performed.  Consider any RFC 2822 non-conformance to be a bug.
# RFC 2822: http://www.faqs.org/rfcs/rfc2822.html
# RFC 822 : http://www.faqs.org/rfcs/rfc822.html (obsolete)
# Directions for use:
# To create a Message object: first open a file, e.g.:
# fp = open(file, 'r')
# You can use any other legal way of getting an open file object, e.g. use
# sys.stdin or call os.popen().  Then pass the open file object to the Message()
# constructor:
# m = Message(fp)
# This class can work with any input object that supports a readline method.  If
# the input object has seek and tell capability, the rewindbody method will
# work; also illegal lines will be pushed back onto the input stream.  If the
# input object lacks seek but has an `unread' method that can push back a line
# of input, Message will use that to push back illegal lines.  Thus this class
# can be used to parse messages coming from a buffered stream.
# The optional `seekable' argument is provided as a workaround for certain stdio
# libraries in which tell() discards buffered data before discovering that the
# lseek() system call doesn't work.  For maximum portability, you should set the
# seekable argument to zero to prevent that initial \code{tell} when passing in
# an unseekable object such as a file object created from a socket object.  If
# it is 1 on entry -- which it is by default -- the tell() method of the open
# file object is called once; if this raises an exception, seekable is reset to
# 0.  For other nonzero values of seekable, this test is not made.
# To get the text of a particular header there are several methods:
# str = m.getheader(name)
# str = m.getrawheader(name)
# where name is the name of the header, e.g. 'Subject'.  The difference is that
# getheader() strips the leading and trailing whitespace, while getrawheader()
# doesn't.  Both functions retain embedded whitespace (including newlines)
# exactly as they are specified in the header, and leave the case of the text
# unchanged.
# For addresses and address lists there are functions
# realname, mailaddress = m.getaddr(name)
# list = m.getaddrlist(name)
# where the latter returns a list of (realname, mailaddr) tuples.
# There is also a method
# time = m.getdate(name)
# which parses a Date-like field and returns a time-compatible tuple,
# i.e. a tuple such as returned by time.localtime() or accepted by
# time.mktime().
# See the class definition for lower level access methods.
# There are also some utility functions here.
module rfc822

import builtins

redef class Sys
    
end

# Address parser class by Ben Escoto.
# To understand what this class does, it helps to have a copy of
# RFC 2822 in front of you.
# http://www.faqs.org/rfcs/rfc2822.html
# Note: this class interface is deprecated and may be removed in the future.
# Use rfc822.AddressList instead.
class AddrlistClass
    
    # Get a quote-delimited fragment from self's field.
    fun getquote is abstract
    
    # Get the complete domain name from an address.
    fun getdomain is abstract
    
    # Parse a sequence of RFC 2822 phrases.
    # A phrase is a sequence of words, which are in turn either RFC 2822
    # atoms or quoted-strings.  Phrases are canonicalized by squeezing all
    # runs of continuous whitespace into one space.
    fun getphraselist is abstract
    
    # Parse an RFC 2822 addr-spec.
    fun getaddrspec is abstract
    
    # Parse all addresses.
    # Returns a list containing all of the addresses.
    fun getaddrlist is abstract
    
    # Parse up to the start of the next address.
    fun gotonext is abstract
    
    # Parse an RFC 2822 atom.
    # Optional atomends specifies a different set of end token delimiters
    # (the default is to use self.atomends).  This is used e.g. in
    # getphraselist() since phrase endings must not include the `.' (which
    # is legal in phrases).
    fun getatom(atomends: Object) is abstract
    
    # Parse a header fragment delimited by special characters.
    # `beginchar' is the start character for the fragment.  If self is not
    # looking at an instance of `beginchar' then getdelimited returns the
    # empty string.
    # `endchars' is a sequence of allowable end-delimiting characters.
    # Parsing stops when one of these is encountered.
    # If `allowcomments' is non-zero, embedded RFC 2822 comments are allowed
    # within the parsed fragment.
    fun getdelimited(allowcomments, beginchar, endchars: Object) is abstract
    
    # Parse the next address.
    fun getaddress is abstract
    
    # Parse an RFC 2822 domain-literal.
    fun getdomainliteral is abstract
    
    # Initialize a new instance.
    # `field' is an unparsed address header field, containing one or more
    # addresses.
    init do end
    
    # Parse a route address (Return-path value).
    # This method just skips all the route stuff and returns the addrspec.
    fun getrouteaddr is abstract
    
    # Get a parenthesis-delimited fragment from self's field.
    fun getcomment is abstract
    
end

# An AddressList encapsulates a list of parsed RFC 2822 addresses.
class AddressList
    super AddrlistClass
    
    fun isub(other: Object) is abstract
    
    fun getitem(index: Object) is abstract
    
    fun add(other: Object) is abstract
    
    fun len is abstract
    
    init do end
    
    fun str is abstract
    
    fun iadd(other: Object) is abstract
    
    fun sub(other: Object) is abstract
    
end

# Represents a single RFC 2822-compliant message.
class Message
    
    # Rewind the file to the start of the body (if seekable).
    fun rewindbody is abstract
    
    # A higher-level interface to getfirstmatchingheader().
    # Return a string containing the literal text of the header but with the
    # keyword stripped.  All leading, trailing and embedded whitespace is
    # kept in the string, however.  Return None if the header does not
    # occur.
    fun getrawheader(name: Object) is abstract
    
    # Get the header value for a name.
    # This is the normal interface: it returns a stripped version of the
    # header value for a given header name, or None if it doesn't exist.
    # This uses the dictionary version which finds the *last* such header.
    fun getheader(default, name: Object) is abstract
    
    # Determine whether a message contains the named header.
    fun has_key(name: Object) is abstract
    
    # Determine whether a line should be skipped entirely.
    # You may override this method in order to use Message parsing on tagged
    # data in RFC 2822-like formats that support embedded comments or
    # free-text data.
    fun iscomment(line: Object) is abstract
    
    # Retrieve a date field from a header as a 10-tuple.
    # The first 9 elements make up a tuple compatible with time.mktime(),
    # and the 10th is the offset of the poster's time zone from GMT/UTC.
    fun getdate_tz(name: Object) is abstract
    
    # Read header lines.
    # Read header lines up to the entirely blank line that terminates them.
    # The (normally blank) line that ends the headers is skipped, but not
    # included in the returned list.  If a non-header line ends the headers,
    # (which is an error), an attempt is made to backspace over it; it is
    # never included in the returned list.
    # The variable self.status is set to the empty string if all went well,
    # otherwise it is an error message.  The variable self.headers is a
    # completely uninterpreted list of lines contained in the header (so
    # printing them will reproduce the header exactly as it appears in the
    # file).
    fun readheaders is abstract
    
    # Determine whether a message contains the named header.
    fun contains(name: Object) is abstract
    
    # Get all values for a header.
    # This returns a list of values for headers given more than once; each
    # value in the result list is stripped in the same way as the result of
    # getheader().  If the header is not given, return an empty list.
    fun getheaders(name: Object) is abstract
    
    # Initialize the class instance and read the headers.
    init do end
    
    # Get the first header line matching name.
    # This is similar to getallmatchingheaders, but it returns only the
    # first matching header (and its continuation lines).
    fun getfirstmatchingheader(name: Object) is abstract
    
    # Find all header lines matching a given header name.
    # Look through the list of headers and find all lines matching a given
    # header name (and their continuation lines).  A list of the lines is
    # returned, without interpretation.  If the header does not occur, an
    # empty list is returned.  If the header occurs multiple times, all
    # occurrences are returned.  Case is not important in the header name.
    fun getallmatchingheaders(name: Object) is abstract
    
    # Get a specific header, as from a dictionary.
    fun getitem(name: Object) is abstract
    
    # Determine whether a given line is a legal header.
    # This method should return the header name, suitably canonicalized.
    # You may override this method in order to use Message parsing on tagged
    # data in RFC 2822-like formats with special header formats.
    fun isheader(line: Object) is abstract
    
    # Get all of a message's header field names.
    fun keys is abstract
    
    # Get the number of headers in a message.
    fun len is abstract
    
    # Get a single address from a header, as a tuple.
    # An example return value:
    # ('Guido van Rossum', 'guido@cwi.nl')
    fun getaddr(name: Object) is abstract
    
    # Delete all occurrences of a specific header, if it is present.
    fun delitem(name: Object) is abstract
    
    # Retrieve a date field from a header.
    # Retrieves a date field from the named header, returning a tuple
    # compatible with time.mktime().
    fun getdate(name: Object) is abstract
    
    fun setdefault(default, name: Object) is abstract
    
    # Get all of a message's headers.
    # Returns a list of name, value tuples.
    fun items is abstract
    
    fun iter is abstract
    
    # Set the value of a header.
    # Note: This is not a perfect inversion of __getitem__, because any
    # changed headers get stuck at the end of the raw-headers list rather
    # than where the altered header was.
    fun setitem(name, value: Object) is abstract
    
    # Get all of a message's header field values.
    fun values is abstract
    
    fun str is abstract
    
    # Determine whether a line is a legal end of RFC 2822 headers.
    # You may override this method if your application wants to bend the
    # rules, e.g. to strip trailing whitespace, or to recognize MH template
    # separators ('--------').  For convenience (e.g. for code reading from
    # sockets) a line consisting of \r\n also matches.
    fun islast(line: Object) is abstract
    
    # Get a list of addresses from a header.
    # Retrieves a list of addresses from a header, where each address is a
    # tuple as returned by getaddr().  Scans all named headers, so it works
    # properly with multiple To: or Cc: headers for example.
    fun getaddrlist(name: Object) is abstract
    
end

