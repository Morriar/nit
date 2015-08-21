# Read/write support for Maildir, mbox, MH, Babyl, and MMDF mailboxes.
module mailbox

import fcntl
import py_socket
import stringio
import errno
import rfc822
import sys
import warnings
import time
import calendar
import copy
import os
import text
import builtins

# A single-file mailbox.
private class SinglefileMailbox
    super Mailbox
    
    # Called before writing the mailbox to file f.
    private fun private_pre_mailbox_hook(f: Object) is abstract
    
    # Called before writing each message to file f.
    private fun private_pre_message_hook(f: Object) is abstract
    
    # Append message to mailbox and return (start, stop) offsets.
    private fun private_append_message(message: Object) is abstract
    
    # Lock the mailbox.
    redef fun lock is abstract
    
    # Return (start, stop) or raise KeyError.
    private fun private_lookup(key: Object) is abstract
    
    # Called after writing each message to file f.
    private fun private_post_message_hook(f: Object) is abstract
    
    # Initialize a single-file mailbox.
    init do end
    
    # Replace the keyed message; raise KeyError if it doesn't exist.
    redef fun setitem(message, key) is abstract
    
    # Remove the keyed message; raise KeyError if it doesn't exist.
    redef fun remove(key) is abstract
    
    # Add message and return assigned key.
    redef fun add(message) is abstract
    
    # Return True if the keyed message exists, False otherwise.
    redef fun has_key(key) is abstract
    
    # Return a count of messages in the mailbox.
    redef fun len is abstract
    
    # Unlock the mailbox if it is locked.
    redef fun unlock is abstract
    
    # Write any pending changes to disk.
    redef fun flush is abstract
    
    # Flush and close the mailbox.
    redef fun close is abstract
    
    # Return an iterator over keys.
    redef fun iterkeys is abstract
    
end

# Message with MMDF-specific properties.
class MMDFMessage
    super MboxMMDFMessage
    
end

# Message with Maildir-specific properties.
class MaildirMessage
    super Message
    
    # Copy Maildir-specific state to message insofar as possible.
    redef fun private_explain_to(message) is abstract
    
    # Initialize a MaildirMessage instance.
    init do end
    
    # Return as a string the flags that are set.
    fun get_flags is abstract
    
    # Return 'new' or 'cur'.
    fun get_subdir is abstract
    
    # Return delivery date of message, in seconds since the epoch.
    fun get_date is abstract
    
    # Set the given flag(s) without changing others.
    fun add_flag(flag: Object) is abstract
    
    # Set delivery date of message, in seconds since the epoch.
    fun set_date(date: Object) is abstract
    
    # Get the message's "info" as a string.
    fun get_info is abstract
    
    # Set the given flags and unset all others.
    fun set_flags(flags: Object) is abstract
    
    # Unset the given string flag(s) without changing others.
    fun remove_flag(flag: Object) is abstract
    
    # Set the message's "info" string.
    fun set_info(info: Object) is abstract
    
    # Set subdir to 'new' or 'cur'.
    fun set_subdir(subdir: Object) is abstract
    
end

# A qmail-style Maildir mailbox.
class Maildir
    super Mailbox
    
    # Return a list of folder names.
    fun list_folders is abstract
    
    # Lock the mailbox.
    redef fun lock is abstract
    
    # Update table of contents mapping.
    private fun private_refresh is abstract
    
    # Unlock the mailbox if it is locked.
    redef fun unlock is abstract
    
    # Return True if the keyed message exists, False otherwise.
    redef fun has_key(key) is abstract
    
    # Write any pending changes to disk.
    redef fun flush is abstract
    
    # Flush and close the mailbox.
    redef fun close is abstract
    
    # Create a folder and return a Maildir instance representing it.
    fun add_folder(folder: Object) is abstract
    
    # Delete the named folder, which must be empty.
    fun remove_folder(folder: Object) is abstract
    
    # Return the next message in a one-time iteration.
    fun next is abstract
    
    # Initialize a Maildir instance.
    init do end
    
    # Return a string representation or raise a KeyError.
    redef fun get_string(key) is abstract
    
    # Return a Maildir instance for the named folder.
    fun get_folder(folder: Object) is abstract
    
    # Create a file in the tmp subdirectory and open and return it.
    private fun private_create_tmp is abstract
    
    # Return a Message representation or raise a KeyError.
    redef fun get_message(key) is abstract
    
    # Return a count of messages in the mailbox.
    redef fun len is abstract
    
    # Add message and return assigned key.
    redef fun add(message) is abstract
    
    # Return an iterator over keys.
    redef fun iterkeys is abstract
    
    # Use TOC to return subpath for given key, or raise a KeyError.
    private fun private_lookup(key: Object) is abstract
    
    # Remove the keyed message; raise KeyError if it doesn't exist.
    redef fun remove(key) is abstract
    
    # Replace the keyed message; raise KeyError if it doesn't exist.
    redef fun setitem(message, key) is abstract
    
    # Delete old files in "tmp".
    fun clean is abstract
    
    # If the keyed message exists, remove it.
    redef fun discard(key) is abstract
    
    # Return a file-like representation or raise a KeyError.
    redef fun get_file(key) is abstract
    
end

class MHMailbox
    
    init do end
    
    fun iter is abstract
    
    fun next is abstract
    
end

# An MMDF mailbox.
class MMDF
    super MboxMMDF
    
    # Called after writing each message to file f.
    redef fun private_post_message_hook(f) is abstract
    
    # Generate key-to-(start, stop) table of contents.
    private fun private_generate_toc is abstract
    
    # Called before writing each message to file f.
    redef fun private_pre_message_hook(f) is abstract
    
    # Initialize an MMDF mailbox.
    init do end
    
end

private class Mailbox
    
    init do end
    
    fun iter is abstract
    
    fun next is abstract
    
end

redef class Sys
    
end

# An mbox or MMDF mailbox.
private class MboxMMDF
    super SinglefileMailbox
    
    # Format a message and blindly write to self._file.
    private fun private_install_message(message: Object) is abstract
    
    # Return a Message representation or raise a KeyError.
    redef fun get_message(key) is abstract
    
    # Return a file-like representation or raise a KeyError.
    redef fun get_file(key) is abstract
    
    # Return a string representation or raise a KeyError.
    redef fun get_string(key) is abstract
    
end

# Message with mbox- or MMDF-specific properties.
private class MboxMMDFMessage
    super Message
    
    # Return contents of "From " line.
    fun get_from is abstract
    
    # Return as a string the flags that are set.
    fun get_flags is abstract
    
    # Initialize an mboxMMDFMessage instance.
    init do end
    
    # Copy mbox- or MMDF-specific state to message insofar as possible.
    redef fun private_explain_to(message) is abstract
    
    # Set the given flag(s) without changing others.
    fun add_flag(flag: Object) is abstract
    
    # Set the given flags and unset all others.
    fun set_flags(flags: Object) is abstract
    
    # Unset the given string flag(s) without changing others.
    fun remove_flag(flag: Object) is abstract
    
    # Set "From " line, formatting and appending time_ if specified.
    fun set_from(from_, time_: Object) is abstract
    
end

# Message with Babyl-specific properties.
class BabylMessage
    super Message
    
    # Set the Message representation of visible headers.
    fun set_visible(visible: Object) is abstract
    
    # Return a Message representation of visible headers.
    fun get_visible is abstract
    
    # Set the list of labels on the message.
    fun set_labels(labels: Object) is abstract
    
    # Copy Babyl-specific state to message insofar as possible.
    redef fun private_explain_to(message) is abstract
    
    # Initialize an BabylMessage instance.
    init do end
    
    # Remove label from the list of labels on the message.
    fun remove_label(py_label: Object) is abstract
    
    # Return a list of labels on the message.
    fun get_labels is abstract
    
    # Update and/or sensibly generate a set of visible headers.
    fun update_visible is abstract
    
    # Add label to list of labels on the message.
    fun add_label(py_label: Object) is abstract
    
end

class MmdfMailbox
    super Mailbox
    
    private fun private_search_start is abstract
    
    private fun private_search_end is abstract
    
end

# Message with MH-specific properties.
class MHMessage
    super Message
    
    # Copy MH-specific state to message insofar as possible.
    redef fun private_explain_to(message) is abstract
    
    # Add sequence to list of sequences including the message.
    fun add_sequence(sequence: Object) is abstract
    
    # Initialize an MHMessage instance.
    init do end
    
    # Remove sequence from the list of sequences including the message.
    fun remove_sequence(sequence: Object) is abstract
    
    # Return a list of sequences that include the message.
    fun get_sequences is abstract
    
    # Set the list of sequences that include the message.
    fun set_sequences(sequences: Object) is abstract
    
end

# Message with mbox-specific properties.
class MboxMessage
    super MboxMMDFMessage
    
end

# Another process caused an action to fail.
class ExternalClashError
    super Error
    
end

class BabylMailbox
    super Mailbox
    
    private fun private_search_start is abstract
    
    private fun private_search_end is abstract
    
end

class PortableUnixMailbox
    super UnixMailbox
    
    redef fun private_portable_isrealfromline(line) is abstract
    
end

# A file appears to have an invalid format.
class FormatError
    super Error
    
end

# Raised for module-specific errors.
redef class Error
    
end

# The specified mailbox is not empty and deletion was requested.
class NotEmptyError
    super Error
    
end

# A classic mbox mailbox.
class Mbox
    super MboxMMDF
    
    # Called after writing each message to file f.
    redef fun private_post_message_hook(f) is abstract
    
    # Generate key-to-(start, stop) table of contents.
    private fun private_generate_toc is abstract
    
    # Initialize an mbox mailbox.
    init do end
    
end

# An Rmail-style Babyl mailbox.
class Babyl
    super SinglefileMailbox
    
    # Called before writing the mailbox to file f.
    redef fun private_pre_mailbox_hook(f) is abstract
    
    # Write message contents and return (start, stop).
    private fun private_install_message(message: Object) is abstract
    
    # Called before writing each message to file f.
    redef fun private_pre_message_hook(f) is abstract
    
    # Called after writing each message to file f.
    redef fun private_post_message_hook(f) is abstract
    
    # Return a Message representation or raise a KeyError.
    redef fun get_message(key) is abstract
    
    # Initialize a Babyl mailbox.
    init do end
    
    # Add message and return assigned key.
    redef fun add(message) is abstract
    
    # Remove the keyed message; raise KeyError if it doesn't exist.
    redef fun remove(key) is abstract
    
    # Generate key-to-(start, stop) table of contents.
    private fun private_generate_toc is abstract
    
    # Replace the keyed message; raise KeyError if it doesn't exist.
    redef fun setitem(message, key) is abstract
    
    # Return a string representation or raise a KeyError.
    redef fun get_string(key) is abstract
    
    # Return a list of user-defined labels in the mailbox.
    fun get_labels is abstract
    
    # Return a file-like representation or raise a KeyError.
    redef fun get_file(key) is abstract
    
end

class UnixMailbox
    super Mailbox
    
    private fun private_portable_isrealfromline(line: Object) is abstract
    
    private fun private_search_end is abstract
    
    private fun private_strict_isrealfromline(line: Object) is abstract
    
    private fun private_search_start is abstract
    
end

# A read-only wrapper of a file.
private class ProxyFile
    
    # Read bytes.
    fun read(size: Object) is abstract
    
    # Change position.
    fun seek(whence, offset: Object) is abstract
    
    # Read multiple lines.
    fun readlines(sizehint: Object) is abstract
    
    # Iterate over lines.
    fun iter is abstract
    
    # Initialize a _ProxyFile.
    init do end
    
    # Close the file.
    fun close is abstract
    
    # Read a line.
    fun readline(size: Object) is abstract
    
    # Read size bytes using read_method.
    private fun private_read(size, read_method: Object) is abstract
    
    # Return the position.
    fun tell is abstract
    
end

# An MH mailbox.
class MH
    super Mailbox
    
    # Return a list of folder names.
    fun list_folders is abstract
    
    # Lock the mailbox.
    redef fun lock is abstract
    
    # Unlock the mailbox if it is locked.
    redef fun unlock is abstract
    
    # Return True if the keyed message exists, False otherwise.
    redef fun has_key(key) is abstract
    
    # Write any pending changes to the disk.
    redef fun flush is abstract
    
    # Flush and close the mailbox.
    redef fun close is abstract
    
    # Return a name-to-key-list dictionary to define each sequence.
    fun get_sequences is abstract
    
    # Create a folder and return an MH instance representing it.
    fun add_folder(folder: Object) is abstract
    
    # Delete the named folder, which must be empty.
    fun remove_folder(folder: Object) is abstract
    
    # Initialize an MH instance.
    init do end
    
    # Return a string representation or raise a KeyError.
    redef fun get_string(key) is abstract
    
    # Return an MH instance for the named folder.
    fun get_folder(folder: Object) is abstract
    
    # Return a Message representation or raise a KeyError.
    redef fun get_message(key) is abstract
    
    # Return a count of messages in the mailbox.
    redef fun len is abstract
    
    # Inspect a new MHMessage and update sequences appropriately.
    private fun private_dump_sequences(message, key: Object) is abstract
    
    # Return an iterator over keys.
    redef fun iterkeys is abstract
    
    # Remove the keyed message; raise KeyError if it doesn't exist.
    redef fun remove(key) is abstract
    
    # Replace the keyed message; raise KeyError if it doesn't exist.
    redef fun setitem(message, key) is abstract
    
    # Add message and return assigned key.
    redef fun add(message) is abstract
    
    # Return a file-like representation or raise a KeyError.
    redef fun get_file(key) is abstract
    
    # Set sequences using the given name-to-key-list dictionary.
    fun set_sequences(sequences: Object) is abstract
    
    # Re-name messages to eliminate numbering gaps. Invalidates keys.
    fun pack is abstract
    
end

# A read-only wrapper of part of a file.
private class PartialFile
    super ProxyFile
    
    redef fun close is abstract
    
    # Change position, possibly with respect to start or stop.
    redef fun seek(whence, offset) is abstract
    
    # Initialize a _PartialFile.
    init do end
    
    # Read size bytes using read_method, honoring start and stop.
    redef fun private_read(size, read_method) is abstract
    
    # Return the position with respect to start.
    redef fun tell is abstract
    
end

# The specified mailbox does not exist and won't be created.
class NoSuchMailboxError
    super Error
    
end

# Message with mailbox-format-specific properties.
redef class Message
    
    # Initialize a Message instance.
    init do end
    
    # Assume the non-format-specific state of message.
    private fun private_become_message(message: Object) is abstract
    
    # Copy format-specific state to message insofar as possible.
    private fun private_explain_to(message: Object) is abstract
    
end

