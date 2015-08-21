# Stuff to parse AIFF-C and AIFF files.
# Unless explicitly stated otherwise, the description below is true
# both for AIFF-C files and AIFF files.
# An AIFF-C file has the following structure.
# +-----------------+
# | FORM            |
# +-----------------+
# | <size>          |
# +----+------------+
# |    | AIFC       |
# |    +------------+
# |    | <chunks>   |
# |    |    .       |
# |    |    .       |
# |    |    .       |
# +----+------------+
# An AIFF file has the string "AIFF" instead of "AIFC".
# A chunk consists of an identifier (4 bytes) followed by a size (4 bytes,
# big endian order), followed by the data.  The size field does not include
# the size of the 8 byte header.
# The following chunk types are recognized.
# FVER
# <version number of AIFF-C defining document> (AIFF-C only).
# MARK
# <# of markers> (2 bytes)
# list of markers:
# <marker ID> (2 bytes, must be > 0)
# <position> (4 bytes)
# <marker name> ("pstring")
# COMM
# <# of channels> (2 bytes)
# <# of sound frames> (4 bytes)
# <size of the samples> (2 bytes)
# <sampling frequency> (10 bytes, IEEE 80-bit extended
# floating point)
# in AIFF-C files only:
# <compression type> (4 bytes)
# <human-readable version of compression type> ("pstring")
# SSND
# <offset> (4 bytes, not used by this program)
# <blocksize> (4 bytes, not used by this program)
# <sound data>
# A pstring consists of 1 byte length, a string of characters, and 0 or 1
# byte pad to make the total length even.
# Usage.
# Reading AIFF files:
# f = aifc.open(file, 'r')
# where file is either the name of a file or an open file pointer.
# The open file pointer must have methods read(), seek(), and close().
# In some types of audio files, if the setpos() method is not used,
# the seek() method is not necessary.
# This returns an instance of a class with the following public methods:
# getnchannels()  -- returns number of audio channels (1 for
# mono, 2 for stereo)
# getsampwidth()  -- returns sample width in bytes
# getframerate()  -- returns sampling frequency
# getnframes()    -- returns number of audio frames
# getcomptype()   -- returns compression type ('NONE' for AIFF files)
# getcompname()   -- returns human-readable version of
# compression type ('not compressed' for AIFF files)
# getparams() -- returns a tuple consisting of all of the
# above in the above order
# getmarkers()    -- get the list of marks in the audio file or None
# if there are no marks
# getmark(id) -- get mark with the specified id (raises an error
# if the mark does not exist)
# readframes(n)   -- returns at most n frames of audio
# rewind()    -- rewind to the beginning of the audio stream
# setpos(pos) -- seek to the specified position
# tell()      -- return the current position
# close()     -- close the instance (make it unusable)
# The position returned by tell(), the position given to setpos() and
# the position of marks are all compatible and have nothing to do with
# the actual position in the file.
# The close() method is called automatically when the class instance
# is destroyed.
# Writing AIFF files:
# f = aifc.open(file, 'w')
# where file is either the name of a file or an open file pointer.
# The open file pointer must have methods write(), tell(), seek(), and
# close().
# This returns an instance of a class with the following public methods:
# aiff()      -- create an AIFF file (AIFF-C default)
# aifc()      -- create an AIFF-C file
# setnchannels(n) -- set the number of channels
# setsampwidth(n) -- set the sample width
# setframerate(n) -- set the frame rate
# setnframes(n)   -- set the number of frames
# setcomptype(type, name)
# -- set the compression type and the
# human-readable compression type
# setparams(tuple)
# -- set all parameters at once
# setmark(id, pos, name)
# -- add specified mark to the list of marks
# tell()      -- return current position in output file (useful
# in combination with setmark())
# writeframesraw(data)
# -- write audio frames without pathing up the
# file header
# writeframes(data)
# -- write audio frames and patch up the file header
# close()     -- patch up the file header and close the
# output file
# You should set the parameters before the first writeframesraw or
# writeframes.  The total number of frames does not need to be set,
# but when it is set to the correct value, the header does not have to
# be patched up.
# It is best to first set all parameters, perhaps possibly the
# compression type, and then write audio frames using writeframesraw.
# When all frames have been written, either call writeframes('') or
# close() to patch up the sizes in the header.
# Marks can be added anytime.  If there are any marks, you must call
# close() after all frames have been written.
# The close() method is called automatically when the class instance
# is destroyed.
# When a file is opened with the extension '.aiff', an AIFF file is
# written, otherwise an AIFF-C file is written.  This default can be
# changed by calling aiff() or aifc() before the first writeframes or
# writeframesraw.
module aifc

import struct
import builtins

redef class Sys
    
end

class Chunk
    
    fun isatty is abstract
    
    # Read at most size bytes from the chunk.
    # If size is omitted or negative, read until the end
    # of the chunk.
    fun read(size: Object) is abstract
    
    # Skip the rest of the chunk.
    # If you are not interested in the contents of the chunk,
    # this method should be called so that the file points to
    # the start of the next chunk.
    fun skip is abstract
    
    # Return the name (ID) of the current chunk.
    fun getname is abstract
    
    # Return the size of the current chunk.
    fun getsize is abstract
    
    init do end
    
    fun close is abstract
    
    # Seek to specified position into the chunk.
    # Default position is 0 (start of chunk).
    # If the file is not seekable, this will result in an error.
    fun seek(whence, pos: Object) is abstract
    
    fun tell is abstract
    
end

redef class Error
    
end

class Aifc_write
    
    fun getcompname is abstract
    
    fun getparams is abstract
    
    fun writeframes(data: Object) is abstract
    
    fun aiff is abstract
    
    fun aifc is abstract
    
    private fun private_lin2ulaw(data: Object) is abstract
    
    private fun private_patchheader is abstract
    
    private fun private_comp_data(data: Object) is abstract
    
    fun close is abstract
    
    fun setnframes(nframes: Object) is abstract
    
    fun getsampwidth is abstract
    
    private fun private_write_header(initlength: Object) is abstract
    
    fun setmark(pos, id, name: Object) is abstract
    
    init do end
    
    private fun private_writemarkers is abstract
    
    fun getcomptype is abstract
    
    private fun private_init_compression is abstract
    
    fun initfp(file: Object) is abstract
    
    fun setparams(info: Object) is abstract
    
    fun tell is abstract
    
    fun setsampwidth(sampwidth: Object) is abstract
    
    fun setnchannels(nchannels: Object) is abstract
    
    fun getnframes is abstract
    
    private fun private_ensure_header_written(datasize: Object) is abstract
    
    fun getframerate is abstract
    
    private fun private_lin2adpcm(data: Object) is abstract
    
    fun writeframesraw(data: Object) is abstract
    
    fun setframerate(framerate: Object) is abstract
    
    private fun private_write_form_length(datalength: Object) is abstract
    
    fun getmarkers is abstract
    
    fun getmark(id: Object) is abstract
    
    fun del is abstract
    
    fun getnchannels is abstract
    
    fun setcomptype(compname, comptype: Object) is abstract
    
end

class Aifc_read
    
    fun getcompname is abstract
    
    fun getparams is abstract
    
    fun setpos(pos: Object) is abstract
    
    fun getfp is abstract
    
    private fun private_decomp_data(data: Object) is abstract
    
    fun close is abstract
    
    private fun private_ulaw2lin(data: Object) is abstract
    
    fun getsampwidth is abstract
    
    fun getcomptype is abstract
    
    init do end
    
    fun rewind is abstract
    
    fun readframes(nframes: Object) is abstract
    
    fun initfp(file: Object) is abstract
    
    fun tell is abstract
    
    private fun private_readmark(chunk: Object) is abstract
    
    fun getnframes is abstract
    
    fun getframerate is abstract
    
    private fun private_adpcm2lin(data: Object) is abstract
    
    fun getmarkers is abstract
    
    fun getmark(id: Object) is abstract
    
    private fun private_read_comm_chunk(chunk: Object) is abstract
    
    fun getnchannels is abstract
    
end

