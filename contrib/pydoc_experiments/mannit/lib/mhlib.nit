# MH interface -- purely object-oriented (well, almost)
# Executive summary:
# import mhlib
# mh = mhlib.MH()         # use default mailbox directory and profile
# mh = mhlib.MH(mailbox)  # override mailbox location (default from profile)
# mh = mhlib.MH(mailbox, profile) # override mailbox and profile
# mh.error(format, ...)   # print error message -- can be overridden
# s = mh.getprofile(key)  # profile entry (None if not set)
# path = mh.getpath()     # mailbox pathname
# name = mh.getcontext()  # name of current folder
# mh.setcontext(name)     # set name of current folder
# list = mh.listfolders() # names of top-level folders
# list = mh.listallfolders() # names of all folders, including subfolders
# list = mh.listsubfolders(name) # direct subfolders of given folder
# list = mh.listallsubfolders(name) # all subfolders of given folder
# mh.makefolder(name)     # create new folder
# mh.deletefolder(name)   # delete folder -- must have no subfolders
# f = mh.openfolder(name) # new open folder object
# f.error(format, ...)    # same as mh.error(format, ...)
# path = f.getfullname()  # folder's full pathname
# path = f.getsequencesfilename() # full pathname of folder's sequences file
# path = f.getmessagefilename(n)  # full pathname of message n in folder
# list = f.listmessages() # list of messages in folder (as numbers)
# n = f.getcurrent()      # get current message
# f.setcurrent(n)         # set current message
# list = f.parsesequence(seq)     # parse msgs syntax into list of messages
# n = f.getlast()         # get last message (0 if no messagse)
# f.setlast(n)            # set last message (internal use only)
# dict = f.getsequences() # dictionary of sequences in folder {name: list}
# f.putsequences(dict)    # write sequences back to folder
# f.createmessage(n, fp)  # add message from file f as number n
# f.removemessages(list)  # remove messages in list from folder
# f.refilemessages(list, tofolder) # move messages in list to other folder
# f.movemessage(n, tofolder, ton)  # move one message to a given destination
# f.copymessage(n, tofolder, ton)  # copy one message to a given destination
# m = f.openmessage(n)    # new open message object (costs a file descriptor)
# m is a derived class of mimetools.Message(rfc822.Message), with:
# s = m.getheadertext()   # text of message's headers
# s = m.getheadertext(pred) # text of message's headers, filtered by pred
# s = m.getbodytext()     # text of message's body, decoded
# s = m.getbodytext(0)    # text of message's body, not decoded
module mhlib

import mimetools
import sys
import re
import multifile
import shutil
import os
import builtins

# Class implementing sets of integers.
# This is an efficient representation for sets consisting of several
# continuous ranges, e.g. 1-100,200-400,402-1000 is represented
# internally as a list of three pairs: [(1,100), (200,400),
# (402,1000)].  The internal representation is always kept normalized.
# The constructor has up to three arguments:
# - the string used to initialize the set (default ''),
# - the separator between ranges (default ',')
# - the separator between begin and end of a range (default '-')
# The separators must be strings (not regexprs) and should be different.
# The tostring() function yields a string that can be passed to another
# IntSet constructor; __repr__() is a valid IntSet constructor itself.
class IntSet
    
    fun reset is abstract
    
    fun normalize is abstract
    
    fun fromlist(list: Object) is abstract
    
    fun hash is abstract
    
    fun addpair(xlo, xhi: Object) is abstract
    
    fun tolist is abstract
    
    fun max is abstract
    
    fun clone is abstract
    
    fun contains(x: Object) is abstract
    
    fun repr is abstract
    
    init do end
    
    fun tostring is abstract
    
    fun min is abstract
    
    fun fromstring(data: Object) is abstract
    
    fun append(x: Object) is abstract
    
    fun cmp(other: Object) is abstract
    
end

# Class representing a particular collection of folders.
# Optional constructor arguments are the pathname for the directory
# containing the collection, and the MH profile to use.
# If either is omitted or empty a default is used; the default
# directory is taken from the MH profile if it is specified there.
class MH
    
    # Return the names of all folders and subfolders, recursively.
    fun listallfolders is abstract
    
    # Set the name of the current folder.
    fun setcontext(context: Object) is abstract
    
    # Return a profile entry, None if not found.
    fun getprofile(key: Object) is abstract
    
    # Return the names of subfolders in a given folder, recursively.
    fun listallsubfolders(name: Object) is abstract
    
    # String representation.
    fun repr is abstract
    
    # Return the path (the name of the collection's directory).
    fun getpath is abstract
    
    # Return the name of the current folder.
    fun getcontext is abstract
    
    # Constructor.
    init do end
    
    # Return the names of the top-level folders.
    fun listfolders is abstract
    
    # Routine to print an error.  May be overridden by a derived class.
    fun error(msg: Object) is abstract
    
    # Delete a folder.  This removes files in the folder but not
    # subdirectories.  Raise os.error if deleting the folder itself fails.
    fun deletefolder(name: Object) is abstract
    
    # Return the names of the subfolders in a given folder
    # (prefixed with the given folder name).
    fun listsubfolders(name: Object) is abstract
    
    # Create a new folder (or raise os.error if it cannot be created).
    fun makefolder(name: Object) is abstract
    
    # Return a new Folder object for the named folder.
    fun openfolder(name: Object) is abstract
    
end

redef class Sys
    
end

redef class Error
    
end

class SubMessage
    super Message
    
    redef fun getbodyparts is abstract
    
    # Constructor.
    init do end
    
    # String representation.
    redef fun repr is abstract
    
    redef fun getbodytext(decode) is abstract
    
    redef fun getbody is abstract
    
end

redef class Message
    
    # Constructor.
    init do end
    
    # String representation.
    fun repr is abstract
    
    # Only for multipart messages: return the message's body as a
    # list of SubMessage objects.  Each submessage object behaves
    # (almost) as a Message object.
    fun getbodyparts is abstract
    
    # Return the message's header text as a string.  If an
    # argument is specified, it is used as a filter predicate to
    # decide which headers to return (its argument is the header
    # name converted to lower case).
    fun getheadertext(pred: Object) is abstract
    
    # Return the message's body text as string.  This undoes a
    # Content-Transfer-Encoding, but does not interpret other MIME
    # features (e.g. multipart messages).  To suppress decoding,
    # pass 0 as an argument.
    fun getbodytext(decode: Object) is abstract
    
    # Return body, either a string or a list of messages.
    fun getbody is abstract
    
end

# Class representing a particular folder.
class Folder
    
    # Return the full pathname of the folder's sequences file.
    fun getsequencesfilename is abstract
    
    # Helper for refilemessages() to copy sequences.
    private fun private_copysequences(refileditems, fromfolder: Object) is abstract
    
    # Return list of direct subfolders.
    fun listsubfolders is abstract
    
    # Return the full pathname of a message in the folder.
    fun getmessagefilename(n: Object) is abstract
    
    # Internal: parse a message number (or cur, first, etc.).
    private fun private_parseindex(all, seq: Object) is abstract
    
    # Open a message -- returns a Message object.
    fun openmessage(n: Object) is abstract
    
    # Remove one or more messages -- may raise os.error.
    fun removemessages(list: Object) is abstract
    
    # Return the list of messages currently present in the folder.
    # As a side effect, set self.last to the last message (or 0).
    fun listmessages is abstract
    
    # Constructor.
    init do end
    
    # Refile one or more messages -- may raise os.error.
    # 'tofolder' is an open folder object.
    fun refilemessages(keepsequences, tofolder, list: Object) is abstract
    
    # Set the current message.
    fun setcurrent(n: Object) is abstract
    
    # Return the set of sequences for the folder.
    fun getsequences is abstract
    
    # Create a message, with text from the open file txt.
    fun createmessage(txt, n: Object) is abstract
    
    # String representation.
    fun repr is abstract
    
    # Parse an MH sequence specification into a message list.
    # Attempt to mimic mh-sequence(5) as close as possible.
    # Also attempt to mimic observed behavior regarding which
    # conditions cause which error messages.
    fun parsesequence(seq: Object) is abstract
    
    # Return the last message number.
    fun getlast is abstract
    
    # Set the last message number.
    fun setlast(last: Object) is abstract
    
    # Return the current message.  Raise Error when there is none.
    fun getcurrent is abstract
    
    # Copy one message over a specific destination message,
    # which may or may not already exist.
    fun copymessage(tofolder, ton, n: Object) is abstract
    
    # Write the set of sequences back to the folder.
    fun putsequences(sequences: Object) is abstract
    
    # Return the full pathname of the folder.
    fun getfullname is abstract
    
    # Error message handler.
    fun error is abstract
    
    # Return list of all subfolders.
    fun listallsubfolders is abstract
    
    # Move one message over a specific destination message,
    # which may or may not already exist.
    fun movemessage(tofolder, ton, n: Object) is abstract
    
    # Remove one or more messages from all sequences (including last)
    # -- but not from 'cur'!!!
    fun removefromallsequences(list: Object) is abstract
    
end

