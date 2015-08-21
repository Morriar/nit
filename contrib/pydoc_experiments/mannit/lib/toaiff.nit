# Convert "arbitrary" sound files to AIFF (Apple and SGI's audio format).
# Input may be compressed.
# Uncompressed file type may be AIFF, WAV, VOC, 8SVX, NeXT/Sun, and others.
# An exception is raised if the file is not of a recognized type.
# Returned filename is either the input filename or a temporary filename;
# in the latter case the caller must ensure that it is removed.
# Other temporary files used are removed by the function.
module toaiff

import tempfile
import pipes
import sndhdr
import os
import builtins

redef class Sys
    
end

redef class Error
    
end

