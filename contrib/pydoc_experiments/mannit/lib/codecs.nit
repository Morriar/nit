# codecs -- Python Codec Registry, API and helpers.
# Written by Marc-Andre Lemburg (mal@lemburg.com).
# (c) Copyright CNRI, All Rights Reserved. NO WARRANTY.
module codecs

import builtins

class StreamWriter
    super Codec
    
    # Flushes and resets the codec buffers used for keeping state.
    # Calling this method should ensure that the data on the
    # output is put into a clean state, that allows appending
    # of new fresh data without having to rescan the whole
    # stream to recover state.
    fun reset is abstract
    
    # Writes the concatenated list of strings to the stream
    # using .write().
    fun writelines(list: Object) is abstract
    
    # Creates a StreamWriter instance.
    # stream must be a file-like object open for writing
    # (binary) data.
    # The StreamWriter may use different error handling
    # schemes by providing the errors keyword argument. These
    # parameters are predefined:
    # 'strict' - raise a ValueError (or a subclass)
    # 'ignore' - ignore the character and continue with the next
    # 'replace'- replace with a suitable replacement character
    # 'xmlcharrefreplace' - Replace with the appropriate XML
    # character reference.
    # 'backslashreplace'  - Replace with backslashed escape
    # sequences (only for encoding).
    # The set of allowed parameter values can be extended via
    # register_error.
    init do end
    
    # Writes the object's contents encoded to self.stream.
    fun write(object: Object) is abstract
    
    # Inherit all other methods from the underlying stream.
    fun getattr(getattr, name: Object) is abstract
    
    fun exit(py_type, tb, value: Object) is abstract
    
    fun enter is abstract
    
    fun seek(whence, offset: Object) is abstract
    
end

# An IncrementalEncoder encodes an input in multiple steps. The input can be
# passed piece by piece to the encode() method. The IncrementalEncoder remembers
# the state of the Encoding process between calls to encode().
class IncrementalEncoder
    
    # Resets the encoder to the initial state.
    fun reset is abstract
    
    # Encodes input and returns the resulting object.
    fun encode(input, final: Object) is abstract
    
    # Creates an IncrementalEncoder instance.
    # The IncrementalEncoder may use different error handling schemes by
    # providing the errors keyword argument. See the module docstring
    # for a list of possible values.
    init do end
    
    # Return the current state of the encoder.
    fun getstate is abstract
    
    # Set the current state of the encoder. state must have been
    # returned by getstate().
    fun setstate(state: Object) is abstract
    
end

# StreamReaderWriter instances allow wrapping streams which
# work in both read and write modes.
# The design is such that one can use the factory functions
# returned by the codec.lookup() function to construct the
# instance.
class StreamReaderWriter
    
    fun reset is abstract
    
    fun writelines(list: Object) is abstract
    
    fun read(size: Object) is abstract
    
    fun readlines(sizehint: Object) is abstract
    
    # Creates a StreamReaderWriter instance.
    # stream must be a Stream-like object.
    # Reader, Writer must be factory functions or classes
    # providing the StreamReader, StreamWriter interface resp.
    # Error handling is done in the same way as defined for the
    # StreamWriter/Readers.
    init do end
    
    fun iter is abstract
    
    # Return the next decoded line from the input stream.
    fun next is abstract
    
    fun write(data: Object) is abstract
    
    # Inherit all other methods from the underlying stream.
    fun getattr(getattr, name: Object) is abstract
    
    fun exit(py_type, tb, value: Object) is abstract
    
    fun enter is abstract
    
    fun readline(size: Object) is abstract
    
    fun seek(whence, offset: Object) is abstract
    
end

class CodecInfo
    super Tuple
    
    fun repr is abstract
    
end

# This subclass of IncrementalEncoder can be used as the baseclass for an
# incremental encoder if the encoder must keep some of the output in a
# buffer between calls to encode().
class BufferedIncrementalEncoder
    super IncrementalEncoder
    
    redef fun reset is abstract
    
    redef fun getstate is abstract
    
    private fun private_buffer_encode(input, errors, final: Object) is abstract
    
    init do end
    
    redef fun encode(input, final) is abstract
    
    redef fun setstate(state) is abstract
    
end

redef class Sys
    
end

# Defines the interface for stateless encoders/decoders.
# The .encode()/.decode() methods may use different error
# handling schemes by providing the errors argument. These
# string values are predefined:
# 'strict' - raise a ValueError error (or a subclass)
# 'ignore' - ignore the character and continue with the next
# 'replace' - replace with a suitable replacement character;
# Python will use the official U+FFFD REPLACEMENT
# CHARACTER for the builtin Unicode codecs on
# decoding and '?' on encoding.
# 'xmlcharrefreplace' - Replace with the appropriate XML
# character reference (only for encoding).
# 'backslashreplace'  - Replace with backslashed escape sequences
# (only for encoding).
# The set of allowed values can be extended via register_error.
class Codec
    
    # Encodes the object input and returns a tuple (output
    # object, length consumed).
    # errors defines the error handling to apply. It defaults to
    # 'strict' handling.
    # The method may not store state in the Codec instance. Use
    # StreamCodec for codecs which have to keep state in order to
    # make encoding/decoding efficient.
    # The encoder must be able to handle zero length input and
    # return an empty object of the output object type in this
    # situation.
    fun encode(input, errors: Object) is abstract
    
    # Decodes the object input and returns a tuple (output
    # object, length consumed).
    # input must be an object which provides the bf_getreadbuf
    # buffer slot. Python strings, buffer objects and memory
    # mapped files are examples of objects providing this slot.
    # errors defines the error handling to apply. It defaults to
    # 'strict' handling.
    # The method may not store state in the Codec instance. Use
    # StreamCodec for codecs which have to keep state in order to
    # make encoding/decoding efficient.
    # The decoder must be able to handle zero length input and
    # return an empty object of the output object type in this
    # situation.
    fun decode(input, errors: Object) is abstract
    
end

# This subclass of IncrementalDecoder can be used as the baseclass for an
# incremental decoder if the decoder must be able to handle incomplete byte
# sequences.
class BufferedIncrementalDecoder
    super IncrementalDecoder
    
    redef fun reset is abstract
    
    redef fun getstate is abstract
    
    redef fun decode(input, final) is abstract
    
    init do end
    
    private fun private_buffer_decode(input, errors, final: Object) is abstract
    
    redef fun setstate(state) is abstract
    
end

# An IncrementalDecoder decodes an input in multiple steps. The input can be
# passed piece by piece to the decode() method. The IncrementalDecoder
# remembers the state of the decoding process between calls to decode().
class IncrementalDecoder
    
    # Resets the decoder to the initial state.
    fun reset is abstract
    
    # Decodes input and returns the resulting object.
    fun decode(input, final: Object) is abstract
    
    # Creates a IncrementalDecoder instance.
    # The IncrementalDecoder may use different error handling schemes by
    # providing the errors keyword argument. See the module docstring
    # for a list of possible values.
    init do end
    
    # Return the current state of the decoder.
    # This must be a (buffered_input, additional_state_info) tuple.
    # buffered_input must be a bytes object containing bytes that
    # were passed to decode() that have not yet been converted.
    # additional_state_info must be a non-negative integer
    # representing the state of the decoder WITHOUT yet having
    # processed the contents of buffered_input.  In the initial state
    # and after reset(), getstate() must return (b"", 0).
    fun getstate is abstract
    
    # Set the current state of the decoder.
    # state must have been returned by getstate().  The effect of
    # setstate((b"", 0)) must be equivalent to reset().
    fun setstate(state: Object) is abstract
    
end

# StreamRecoder instances provide a frontend - backend
# view of encoding data.
# They use the complete set of APIs returned by the
# codecs.lookup() function to implement their task.
# Data written to the stream is first decoded into an
# intermediate format (which is dependent on the given codec
# combination) and then written to the stream using an instance
# of the provided Writer class.
# In the other direction, data is read from the stream using a
# Reader instance and then return encoded data to the caller.
class StreamRecoder
    
    fun reset is abstract
    
    fun writelines(list: Object) is abstract
    
    fun read(size: Object) is abstract
    
    fun readlines(sizehint: Object) is abstract
    
    # Creates a StreamRecoder instance which implements a two-way
    # conversion: encode and decode work on the frontend (the
    # input to .read() and output of .write()) while
    # Reader and Writer work on the backend (reading and
    # writing to the stream).
    # You can use these objects to do transparent direct
    # recodings from e.g. latin-1 to utf-8 and back.
    # stream must be a file-like object.
    # encode, decode must adhere to the Codec interface, Reader,
    # Writer must be factory functions or classes providing the
    # StreamReader, StreamWriter interface resp.
    # encode and decode are needed for the frontend translation,
    # Reader and Writer for the backend translation. Unicode is
    # used as intermediate encoding.
    # Error handling is done in the same way as defined for the
    # StreamWriter/Readers.
    init do end
    
    fun iter is abstract
    
    # Return the next decoded line from the input stream.
    fun next is abstract
    
    fun write(data: Object) is abstract
    
    # Inherit all other methods from the underlying stream.
    fun getattr(getattr, name: Object) is abstract
    
    fun exit(py_type, tb, value: Object) is abstract
    
    fun enter is abstract
    
    fun readline(size: Object) is abstract
    
end

class StreamReader
    super Codec
    
    # Resets the codec buffers used for keeping state.
    # Note that no stream repositioning should take place.
    # This method is primarily intended to be able to recover
    # from decoding errors.
    fun reset is abstract
    
    # Decodes data from the stream self.stream and returns the
    # resulting object.
    # chars indicates the number of characters to read from the
    # stream. read() will never return more than chars
    # characters, but it might return less, if there are not enough
    # characters available.
    # size indicates the approximate maximum number of bytes to
    # read from the stream for decoding purposes. The decoder
    # can modify this setting as appropriate. The default value
    # -1 indicates to read and decode as much as possible.  size
    # is intended to prevent having to decode huge files in one
    # step.
    # If firstline is true, and a UnicodeDecodeError happens
    # after the first line terminator in the input only the first line
    # will be returned, the rest of the input will be kept until the
    # next call to read().
    # The method should use a greedy read strategy meaning that
    # it should read as much data as is allowed within the
    # definition of the encoding and the given size, e.g.  if
    # optional encoding endings or state markers are available
    # on the stream, these should be read too.
    fun read(chars, firstline, size: Object) is abstract
    
    # Read all lines available on the input stream
    # and return them as list of lines.
    # Line breaks are implemented using the codec's decoder
    # method and are included in the list entries.
    # sizehint, if given, is ignored since there is no efficient
    # way to finding the true end-of-line.
    fun readlines(sizehint, keepends: Object) is abstract
    
    # Creates a StreamReader instance.
    # stream must be a file-like object open for reading
    # (binary) data.
    # The StreamReader may use different error handling
    # schemes by providing the errors keyword argument. These
    # parameters are predefined:
    # 'strict' - raise a ValueError (or a subclass)
    # 'ignore' - ignore the character and continue with the next
    # 'replace'- replace with a suitable replacement character;
    # The set of allowed parameter values can be extended via
    # register_error.
    init do end
    
    fun iter is abstract
    
    # Return the next decoded line from the input stream.
    fun next is abstract
    
    redef fun decode(input, errors) is abstract
    
    # Inherit all other methods from the underlying stream.
    fun getattr(getattr, name: Object) is abstract
    
    fun exit(py_type, tb, value: Object) is abstract
    
    fun enter is abstract
    
    # Read one line from the input stream and return the
    # decoded data.
    # size, if given, is passed as size argument to the
    # read() method.
    fun readline(keepends, size: Object) is abstract
    
    # Set the input stream's current position.
    # Resets the codec buffers used for keeping state.
    fun seek(whence, offset: Object) is abstract
    
end

