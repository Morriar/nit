# Stuff to parse WAVE files.
# Usage.
# Reading WAVE files:
# f = wave.open(file, 'r')
# where file is either the name of a file or an open file pointer.
# The open file pointer must have methods read(), seek(), and close().
# When the setpos() and rewind() methods are not used, the seek()
# method is not  necessary.
# This returns an instance of a class with the following public methods:
# getnchannels()  -- returns number of audio channels (1 for
# mono, 2 for stereo)
# getsampwidth()  -- returns sample width in bytes
# getframerate()  -- returns sampling frequency
# getnframes()    -- returns number of audio frames
# getcomptype()   -- returns compression type ('NONE' for linear samples)
# getcompname()   -- returns human-readable version of
# compression type ('not compressed' linear samples)
# getparams()     -- returns a tuple consisting of all of the
# above in the above order
# getmarkers()    -- returns None (for compatibility with the
# aifc module)
# getmark(id)     -- raises an error since the mark does not
# exist (for compatibility with the aifc module)
# readframes(n)   -- returns at most n frames of audio
# rewind()        -- rewind to the beginning of the audio stream
# setpos(pos)     -- seek to the specified position
# tell()          -- return the current position
# close()         -- close the instance (make it unusable)
# The position returned by tell() and the position given to setpos()
# are compatible and have nothing to do with the actual position in the
# file.
# The close() method is called automatically when the class instance
# is destroyed.
# Writing WAVE files:
# f = wave.open(file, 'w')
# where file is either the name of a file or an open file pointer.
# The open file pointer must have methods write(), tell(), seek(), and
# close().
# This returns an instance of a class with the following public methods:
# setnchannels(n) -- set the number of channels
# setsampwidth(n) -- set the sample width
# setframerate(n) -- set the frame rate
# setnframes(n)   -- set the number of frames
# setcomptype(type, name)
# -- set the compression type and the
# human-readable compression type
# setparams(tuple)
# -- set all parameters at once
# tell()          -- return current position in output file
# writeframesraw(data)
# -- write audio frames without pathing up the
# file header
# writeframes(data)
# -- write audio frames and patch up the file header
# close()         -- patch up the file header and close the
# output file
# You should set the parameters before the first writeframesraw or
# writeframes.  The total number of frames does not need to be set,
# but when it is set to the correct value, the header does not have to
# be patched up.
# It is best to first set all parameters, perhaps possibly the
# compression type, and then write audio frames using writeframesraw.
# When all frames have been written, either call writeframes('') or
# close() to patch up the sizes in the header.
# The close() method is called automatically when the class instance
# is destroyed.
module wave

import sys
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

# Variables used in this class:
# These variables are available to the user though appropriate
# methods of this class:
# _file -- the open file with methods read(), close(), and seek()
# set through the __init__() method
# _nchannels -- the number of audio channels
# available through the getnchannels() method
# _nframes -- the number of audio frames
# available through the getnframes() method
# _sampwidth -- the number of bytes per audio sample
# available through the getsampwidth() method
# _framerate -- the sampling frequency
# available through the getframerate() method
# _comptype -- the AIFF-C compression type ('NONE' if AIFF)
# available through the getcomptype() method
# _compname -- the human-readable AIFF-C compression type
# available through the getcomptype() method
# _soundpos -- the position in the audio stream
# available through the tell() method, set through the
# setpos() method
# These variables are used internally only:
# _fmt_chunk_read -- 1 iff the FMT chunk has been read
# _data_seek_needed -- 1 iff positioned correctly in audio
# file for readframes()
# _data_chunk -- instantiation of a chunk class for the DATA chunk
# _framesize -- size of one frame in the file
class Wave_read
    
    fun getcompname is abstract
    
    fun getsampwidth is abstract
    
    fun getparams is abstract
    
    fun setpos(pos: Object) is abstract
    
    fun getfp is abstract
    
    init do end
    
    fun getnframes is abstract
    
    fun getmarkers is abstract
    
    fun getmark(id: Object) is abstract
    
    fun readframes(nframes: Object) is abstract
    
    fun getcomptype is abstract
    
    fun del is abstract
    
    fun rewind is abstract
    
    private fun private_read_fmt_chunk(chunk: Object) is abstract
    
    fun close is abstract
    
    fun initfp(file: Object) is abstract
    
    fun tell is abstract
    
    fun getnchannels is abstract
    
    fun getframerate is abstract
    
end

# Variables used in this class:
# These variables are user settable through appropriate methods
# of this class:
# _file -- the open file with methods write(), close(), tell(), seek()
# set through the __init__() method
# _comptype -- the AIFF-C compression type ('NONE' in AIFF)
# set through the setcomptype() or setparams() method
# _compname -- the human-readable AIFF-C compression type
# set through the setcomptype() or setparams() method
# _nchannels -- the number of audio channels
# set through the setnchannels() or setparams() method
# _sampwidth -- the number of bytes per audio sample
# set through the setsampwidth() or setparams() method
# _framerate -- the sampling frequency
# set through the setframerate() or setparams() method
# _nframes -- the number of audio frames written to the header
# set through the setnframes() or setparams() method
# These variables are used internally only:
# _datalength -- the size of the audio samples written to the header
# _nframeswritten -- the number of frames actually written
# _datawritten -- the size of the audio samples actually written
class Wave_write
    
    fun getcompname is abstract
    
    fun getparams is abstract
    
    private fun private_patchheader is abstract
    
    fun close is abstract
    
    fun setnframes(nframes: Object) is abstract
    
    fun getsampwidth is abstract
    
    private fun private_write_header(initlength: Object) is abstract
    
    fun setmark(pos, id, name: Object) is abstract
    
    init do end
    
    fun getcomptype is abstract
    
    fun initfp(file: Object) is abstract
    
    fun setparams(params: Object) is abstract
    
    fun tell is abstract
    
    fun setsampwidth(sampwidth: Object) is abstract
    
    fun setnchannels(nchannels: Object) is abstract
    
    fun getnframes is abstract
    
    private fun private_ensure_header_written(datasize: Object) is abstract
    
    fun writeframesraw(data: Object) is abstract
    
    fun getframerate is abstract
    
    fun setframerate(framerate: Object) is abstract
    
    fun writeframes(data: Object) is abstract
    
    fun getmarkers is abstract
    
    fun getmark(id: Object) is abstract
    
    fun del is abstract
    
    fun getnchannels is abstract
    
    fun setcomptype(compname, comptype: Object) is abstract
    
end

redef class Error
    
end

