# Macintosh binhex compression/decompression.
# easy interface:
# binhex(inputfilename, outputfilename)
# hexbin(inputfilename, outputfilename)
module binhex

import sys
import os
import binascii
import struct
import builtins

# Write data to the coder in 3-byte chunks
private class Hqxcoderengine
    
    fun write(data: Object) is abstract
    
    fun close is abstract
    
    init do end
    
    private fun private_flush(force: Object) is abstract
    
end

class HexBin
    
    fun read is abstract
    
    fun close_data is abstract
    
    init do end
    
    private fun private_readheader is abstract
    
    private fun private_checkcrc is abstract
    
    fun close is abstract
    
    private fun private_read(len: Object) is abstract
    
    fun read_rsrc is abstract
    
end

# Read data via the decoder in 4-byte chunks
private class Hqxdecoderengine
    
    # Read at least wtd bytes (or until EOF)
    fun read(totalwtd: Object) is abstract
    
    fun close is abstract
    
    init do end
    
end

# Write data to the RLE-coder in suitably large chunks
private class Rlecoderengine
    
    fun write(data: Object) is abstract
    
    fun close is abstract
    
    init do end
    
end

class BinHex
    
    private fun private_writeinfo(finfo, name: Object) is abstract
    
    private fun private_writecrc is abstract
    
    fun write(data: Object) is abstract
    
    fun close_data is abstract
    
    init do end
    
    private fun private_write(data: Object) is abstract
    
    fun close is abstract
    
    fun write_rsrc(data: Object) is abstract
    
end

redef class Sys
    
end

redef class Error
    
end

class Openrsrc
    
    fun read is abstract
    
    fun write is abstract
    
    init do end
    
    fun close is abstract
    
end

class FInfo
    
    init do end
    
end

# Read data via the RLE-coder
private class Rledecoderengine
    
    fun read(wtd: Object) is abstract
    
    fun close is abstract
    
    init do end
    
    private fun private_fill(wtd: Object) is abstract
    
end

