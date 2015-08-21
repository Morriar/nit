# plistlib.py -- a tool to generate and parse MacOSX .plist files.
# The PropertyList (.plist) file format is a simple XML pickle supporting
# basic object types, like dictionaries, lists, numbers and strings.
# Usually the top level object is a dictionary.
# To write out a plist file, use the writePlist(rootObject, pathOrFile)
# function. 'rootObject' is the top level object, 'pathOrFile' is a
# filename or a (writable) file object.
# To parse a plist from a file, use the readPlist(pathOrFile) function,
# with a file name or a (readable) file object as the only argument. It
# returns the top level object (again, usually a dictionary).
# To work with plist data in strings, you can use readPlistFromString()
# and writePlistToString().
# Values can be strings, integers, floats, booleans, tuples, lists,
# dictionaries, Data or datetime.datetime objects. String values (including
# dictionary keys) may be unicode strings -- they will be written out as
# UTF-8.
# The <data> plist type is supported through the Data class. This is a
# thin wrapper around a Python string.
# Generate Plist example:
# pl = dict(
# aString="Doodah",
# aList=["A", "B", 12, 32.1, [1, 2, 3]],
# aFloat=0.1,
# anInt=728,
# aDict=dict(
# anotherString="<hello & hi there!>",
# aUnicodeValue=u'M\xe4ssig, Ma\xdf',
# aTrueValue=True,
# aFalseValue=False,
# ),
# someData=Data("<binary gunk>"),
# someMoreData=Data("<lots of binary gunk>" * 10),
# aDate=datetime.datetime.fromtimestamp(time.mktime(time.gmtime())),
# )
# # unicode keys are possible, but a little awkward to use:
# pl[u'\xc5benraa'] = "That was a unicode key."
# writePlist(pl, fileName)
# Parse Plist example:
# pl = readPlist(pathOrFile)
# print pl["aKey"]
module plistlib

import re
import warnings
import binascii
import py_datetime
import builtins

class PlistParser
    
    fun addobject(value: Object) is abstract
    
    fun end_real is abstract
    
    fun end_integer is abstract
    
    fun end_array is abstract
    
    fun end_date is abstract
    
    fun begin_array(attrs: Object) is abstract
    
    fun handleendelement(element: Object) is abstract
    
    fun handledata(data: Object) is abstract
    
    fun getdata is abstract
    
    fun end_data is abstract
    
    fun end_false is abstract
    
    fun handlebeginelement(attrs, element: Object) is abstract
    
    fun parse(fileobj: Object) is abstract
    
    init do end
    
    fun end_true is abstract
    
    fun end_key is abstract
    
    fun end_string is abstract
    
    fun begin_dict(attrs: Object) is abstract
    
    fun end_dict is abstract
    
end

redef class Sys
    
end

redef class Dict
    
    init do end
    
end

private class InternalDict
    super Dict
    
    fun delattr(attr: Object) is abstract
    
    fun getattr(attr: Object) is abstract
    
    fun setattr(attr, value: Object) is abstract
    
end

# Wrapper for binary data.
class Data
    
    init do end
    
    fun cmp(other: Object) is abstract
    
    fun asbase64(maxlinelength: Object) is abstract
    
    fun repr is abstract
    
    fun frombase64(data, cls: Object) is abstract
    
end

# This class has been deprecated. Use readPlist() and writePlist()
# functions instead, together with regular dict objects.
class Plist
    super InternalDict
    
    # Deprecated. Use the writePlist() function instead.
    fun write(pathorfile: Object) is abstract
    
    # Deprecated. Use the readPlist() function instead.
    fun fromfile(pathorfile, cls: Object) is abstract
    
    init do end
    
end

class PlistWriter
    super DumbXMLWriter
    
    fun writedict(d: Object) is abstract
    
    init do end
    
    fun writedata(data: Object) is abstract
    
    fun writevalue(value: Object) is abstract
    
    fun writearray(array: Object) is abstract
    
end

class DumbXMLWriter
    
    fun writeln(line: Object) is abstract
    
    fun beginelement(element: Object) is abstract
    
    init do end
    
    fun simpleelement(value, element: Object) is abstract
    
    fun endelement(element: Object) is abstract
    
end

